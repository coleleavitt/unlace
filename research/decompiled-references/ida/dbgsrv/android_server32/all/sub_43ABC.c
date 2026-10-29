/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43ABC
// Address: 0x00043ABC

//----- (00043ABC) --------------------------------------------------------
int __fastcall sub_43ABC(int a1, int a2)
{
  int v2; // r2
  _DWORD *v3; // r1
  int result; // r0

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 < 0 )
    return sub_43AF4(a2, ~v2);
  v3 = *(_DWORD **)a1;
  result = 0;
  if ( v3 && *v3 == 289621065 && (unsigned int)v2 < v3[4] )
    return v3[3] + 24 * v2;
  return result;
}
