/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006268
// Address: 0x0000000100006268

//----- (0000000100006268) ----------------------------------------------------
const AuthorizationOpaqueRef ***__fastcall sub_100006268(const AuthorizationOpaqueRef ***a1)
{
  const AuthorizationOpaqueRef *v2; // x0

  v2 = **a1;
  if ( v2 )
    AuthorizationFree(v2, 0);
  return a1;
}
