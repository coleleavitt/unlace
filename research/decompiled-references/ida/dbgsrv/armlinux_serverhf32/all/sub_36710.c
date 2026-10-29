/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36710
// Address: 0x00036710

//----- (00036710) --------------------------------------------------------
int __fastcall sub_36710(_DWORD *a1, int a2)
{
  unsigned int v2; // r3
  FILE *v3; // r3
  const char *v4; // r0

  v2 = a1[2];
  if ( v2 < dword_D39D0 && (v3 = *(FILE **)(dword_D39CC + 4 * v2)) != nullptr )
  {
    if ( a1[9] )
      v4 = (const char *)a1[8];
    else
      v4 = (const char *)&dword_8DA5C;
    *(_DWORD *)(a2 + 8) = sub_77C08(v4, v3);
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// 8DA5C: using guessed type int dword_8DA5C;
// D39CC: using guessed type int dword_D39CC;
// D39D0: using guessed type int dword_D39D0;
