/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000061F4
// Address: 0x00000001000061F4

//----- (00000001000061F4) ----------------------------------------------------
AuthorizationItemSet ***__fastcall sub_1000061F4(AuthorizationItemSet ***a1)
{
  AuthorizationItemSet *v2; // x0

  v2 = **a1;
  if ( v2 )
    AuthorizationFreeItemSet(v2);
  return a1;
}
