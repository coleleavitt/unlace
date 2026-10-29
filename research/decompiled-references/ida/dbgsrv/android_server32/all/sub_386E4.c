/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_386E4
// Address: 0x000386E4

//----- (000386E4) --------------------------------------------------------
int __fastcall sub_386E4(int a1, int a2)
{
  unsigned int v3; // r0
  int v4; // r5
  FILE *v5; // r0
  int v6; // r0

  v3 = *(_DWORD *)(a1 + 8);
  v4 = -1;
  if ( dword_DE33C > v3 )
  {
    v5 = *(FILE **)(dword_DE338 + 4 * v3);
    if ( v5 )
    {
      v6 = qfgetc(v5);
      if ( v6 != -1 )
        v4 = (unsigned __int8)v6;
    }
  }
  *(_DWORD *)(a2 + 8) = v4;
  return 0;
}
// DE338: using guessed type int dword_DE338;
// DE33C: using guessed type int dword_DE33C;
