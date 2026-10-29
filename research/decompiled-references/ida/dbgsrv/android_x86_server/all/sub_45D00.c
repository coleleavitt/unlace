/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D00
// Address: 0x00045D00

//----- (00045D00) --------------------------------------------------------
int __cdecl sub_45D00(int a1, int a2)
{
  unsigned int v2; // eax
  FILE *v3; // eax
  int v4; // eax
  int v5; // edx

  v2 = *(_DWORD *)(a1 + 4);
  if ( dword_13BD2C > v2 && (v3 = *(FILE **)(dword_13BD28 + 4 * v2)) != nullptr )
  {
    *(_BYTE *)a2 = 9;
    v4 = qfsize(v3);
    *(_DWORD *)(a2 + 8) = v5;
    *(_DWORD *)(a2 + 4) = v4;
  }
  else
  {
    *(_DWORD *)(a2 + 4) = -1;
  }
  return 0;
}
// 45D40: variable 'v5' is possibly undefined
// 13BD28: using guessed type int dword_13BD28;
// 13BD2C: using guessed type int dword_13BD2C;
