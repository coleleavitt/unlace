/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006640
// Address: 0x0000000100006640

//----- (0000000100006640) ----------------------------------------------------
AuthorizationItemSet ***__fastcall sub_100006640(AuthorizationItemSet ***a1)
{
  AuthorizationItemSet *v2; // x0

  v2 = **a1;
  if ( v2 )
    AuthorizationFreeItemSet(v2);
  return a1;
}
