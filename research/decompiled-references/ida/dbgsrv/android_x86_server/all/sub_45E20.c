/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E20
// Address: 0x00045E20

//----- (00045E20) --------------------------------------------------------
int __cdecl sub_45E20(int a1, int a2)
{
  unsigned int v2; // eax
  int v3; // ecx
  FILE *v4; // eax
  int v5; // eax

  v2 = *(_DWORD *)(a1 + 4);
  v3 = -1;
  if ( dword_13BD2C > v2 )
  {
    v4 = *(FILE **)(dword_13BD28 + 4 * v2);
    if ( v4 )
    {
      v5 = qfgetc(v4);
      v3 = (unsigned __int8)v5;
      if ( v5 == -1 )
        v3 = -1;
    }
  }
  *(_DWORD *)(a2 + 4) = v3;
  return 0;
}
// 13BD28: using guessed type int dword_13BD28;
// 13BD2C: using guessed type int dword_13BD2C;
