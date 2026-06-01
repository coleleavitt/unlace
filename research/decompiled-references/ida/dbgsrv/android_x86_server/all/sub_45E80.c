/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E80
// Address: 0x00045E80

//----- (00045E80) --------------------------------------------------------
int __cdecl sub_45E80(int a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  FILE *v4; // edx

  v2 = *(_DWORD *)(a1 + 24);
  v3 = -1;
  if ( dword_13BD2C > v2 )
  {
    v4 = *(FILE **)(dword_13BD28 + 4 * v2);
    if ( v4 )
      v3 = qfputc(*(char *)(a1 + 4), v4);
  }
  *(_DWORD *)(a2 + 4) = v3;
  return 0;
}
// 13BD28: using guessed type int dword_13BD28;
// 13BD2C: using guessed type int dword_13BD2C;
