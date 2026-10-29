/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006E70
// Address: 0x0000000100006E70

//----- (0000000100006E70) ----------------------------------------------------
int __fastcall sub_100006E70(const AuthorizationOpaqueRef ***a1)
{
  const AuthorizationOpaqueRef **v1; // rax
  const AuthorizationOpaqueRef *v2; // rdi

  v1 = *a1;
  v2 = **a1;
  if ( v2 )
    LODWORD(v1) = AuthorizationFree(v2, 0);
  return (int)v1;
}
