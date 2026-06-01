/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8067B70
// Address: 0x08067B70

//----- (08067B70) --------------------------------------------------------
int __cdecl sub_8067B70(int a1, int *a2)
{
  int v2; // esi

  if ( sub_80667A0(a1, a2, 0) != 1 )
    return -5;
  v2 = 1;
  if ( (unsigned __int8)sub_80A0030(a1, a2) )
    return -6;
  sub_80A0180(a1, a2);
  return v2;
}
