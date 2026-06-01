/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46360
// Address: 0x00046360

//----- (00046360) --------------------------------------------------------
int __cdecl sub_46360(_DWORD *a1, int a2)
{
  unsigned int v2; // ecx
  int v3; // eax
  FILE *v4; // ecx
  char *v5; // eax

  v2 = a1[1];
  v3 = -1;
  if ( dword_13BD2C > v2 )
  {
    v4 = *(FILE **)(dword_13BD28 + 4 * v2);
    if ( v4 )
    {
      if ( a1[7] )
        v5 = (char *)a1[6];
      else
        v5 = byte_EF875;
      v3 = qfputs(v5, v4);
    }
  }
  *(_DWORD *)(a2 + 4) = v3;
  return 0;
}
// 13BD28: using guessed type int dword_13BD28;
// 13BD2C: using guessed type int dword_13BD2C;
