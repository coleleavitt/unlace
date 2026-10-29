/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38A1C
// Address: 0x00038A1C

//----- (00038A1C) --------------------------------------------------------
int __fastcall sub_38A1C(_DWORD *a1, int a2)
{
  unsigned int v3; // r1
  int v4; // r2
  FILE *v5; // r1
  const char *v6; // r0

  v3 = a1[2];
  v4 = -1;
  if ( dword_DE33C > v3 )
  {
    v5 = *(FILE **)(dword_DE338 + 4 * v3);
    if ( v5 )
    {
      if ( a1[9] )
        v6 = (const char *)a1[8];
      else
        v6 = &byte_B3CBE;
      v4 = qfputs(v6, v5);
    }
  }
  *(_DWORD *)(a2 + 8) = v4;
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
// DE338: using guessed type int dword_DE338;
// DE33C: using guessed type int dword_DE33C;
