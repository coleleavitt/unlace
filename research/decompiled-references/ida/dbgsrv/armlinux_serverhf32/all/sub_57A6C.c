/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57A6C
// Address: 0x00057A6C

//----- (00057A6C) --------------------------------------------------------
int __fastcall sub_57A6C(int result)
{
  int v1; // r8
  int v2; // r7
  int v3; // r4
  int v4; // r5
  const char *v5; // r6

  v1 = *(_DWORD *)(result + 56);
  if ( v1 > 0 )
  {
    v2 = result;
    v3 = 0;
    v4 = *(_DWORD *)(result + 52);
    do
    {
      while ( *(_DWORD *)(v4 + 16) )
      {
        v5 = *(const char **)(v4 + 12);
        result = strcmp(v5, ".debug_info");
        if ( result )
          goto LABEL_8;
LABEL_4:
        *(_DWORD *)(v2 + 100) = v3;
LABEL_5:
        ++v3;
        v4 += 104;
        if ( v1 == v3 )
          return result;
      }
      v5 = (const char *)&dword_8DA5C;
      result = strcmp((const char *)&dword_8DA5C, ".debug_info");
      if ( !result )
        goto LABEL_4;
LABEL_8:
      result = strcmp(v5, ".debug_types");
      if ( result )
        goto LABEL_5;
      *(_DWORD *)(v2 + 104) = v3++;
      v4 += 104;
    }
    while ( v1 != v3 );
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
