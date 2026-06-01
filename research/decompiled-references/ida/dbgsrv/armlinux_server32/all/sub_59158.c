/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59158
// Address: 0x00059158

//----- (00059158) --------------------------------------------------------
int __fastcall sub_59158(int a1, int a2)
{
  const char *v2; // r8
  int v3; // r6
  int v4; // r4
  int v5; // r5
  const char *v6; // r0
  int v7; // r7

  if ( a2 )
    v2 = ".debug_info";
  else
    v2 = ".debug_types";
  v3 = *(_DWORD *)(a1 + 144);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 140);
    v5 = 0;
    do
    {
      v7 = v4;
      if ( *(_DWORD *)(v4 + 16) )
      {
        v6 = *(const char **)(v4 + 12);
        ++v5;
        v4 += 40;
        if ( !strcmp(v6, v2) )
          return v7;
      }
      else
      {
        ++v5;
        v4 += 40;
        if ( !strcmp((const char *)&dword_8DB98, v2) )
          return v7;
      }
    }
    while ( v5 != v3 );
    return 0;
  }
  else
  {
    return 0;
  }
}
// 8DB98: using guessed type int dword_8DB98;
