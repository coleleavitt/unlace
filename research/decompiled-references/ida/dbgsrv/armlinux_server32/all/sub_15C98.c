/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15C98
// Address: 0x00015C98

//----- (00015C98) --------------------------------------------------------
int __fastcall sub_15C98(int *a1, char *s2)
{
  int v2; // r7
  int v4; // r4
  int v5; // r5
  const char *v6; // r0
  int v7; // r8

  v2 = a1[1];
  if ( v2 )
  {
    v4 = *a1;
    v5 = 0;
    do
    {
      v7 = v4;
      if ( *(_DWORD *)(v4 + 12) )
      {
        v6 = *(const char **)(v4 + 8);
        ++v5;
        v4 += 40;
        if ( !strcmp(v6, s2) )
          return v7;
      }
      else
      {
        ++v5;
        v4 += 40;
        if ( !strcmp((const char *)&dword_8DB98, s2) )
          return v7;
      }
    }
    while ( v2 != v5 );
    return 0;
  }
  else
  {
    return 0;
  }
}
// 8DB98: using guessed type int dword_8DB98;
