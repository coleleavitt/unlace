/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006E10
// Address: 0x0000000100006E10

//----- (0000000100006E10) ----------------------------------------------------
int __fastcall sub_100006E10(AuthorizationItemSet ***a1)
{
  AuthorizationItemSet **v1; // rax
  AuthorizationItemSet *v2; // rdi

  v1 = *a1;
  v2 = **a1;
  if ( v2 )
    LODWORD(v1) = AuthorizationFreeItemSet(v2);
  return (int)v1;
}
