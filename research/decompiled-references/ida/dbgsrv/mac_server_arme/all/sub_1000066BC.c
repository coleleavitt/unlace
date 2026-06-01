/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000066BC
// Address: 0x00000001000066BC

//----- (00000001000066BC) ----------------------------------------------------
const AuthorizationOpaqueRef ***__fastcall sub_1000066BC(const AuthorizationOpaqueRef ***a1)
{
  const AuthorizationOpaqueRef *v2; // x0

  v2 = **a1;
  if ( v2 )
    AuthorizationFree(v2, 0);
  return a1;
}
