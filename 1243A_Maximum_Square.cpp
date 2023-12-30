#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        vector<int> v(n);
        for(ll i=0; i<n; i++){
            cin>>v[i];
        }
        ll ans;
        sort(v.begin(), v.end(), greater<int>());
        for(ll i=0; i<n; i++){
            if(v[i]>=i+1){
                ans = i+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
