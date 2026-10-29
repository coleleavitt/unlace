/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53530
// Address: 0x00053530

//----- (00053530) --------------------------------------------------------
int __fastcall sub_53530(int a1, _DWORD *a2)
{
  int v2; // r7
  int result; // r0
  int v4; // r6
  _DWORD *v5; // r5
  int v6; // r4
  const char *v7; // r0
  const char *v8; // r1
  const char *v9; // r0
  const char *v10; // r1
  int v11; // r2
  int v12; // r3

  v2 = *(_DWORD *)(a1 + 240);
  if ( v2 == a2[1] )
  {
    if ( !v2 )
      return 1;
    v4 = *(_DWORD *)(a1 + 236);
    v5 = (_DWORD *)*a2;
    if ( *(_DWORD *)*a2 == *(_DWORD *)v4 && *(_DWORD *)(v4 + 4) == v5[1] )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = *(_DWORD *)(v4 + 12) ? *(const char **)(v4 + 8) : (const char *)&dword_8DB98;
        v8 = v5[3] ? (const char *)v5[2] : (const char *)&dword_8DB98;
        if ( strcmp(v7, v8) )
          break;
        v9 = *(_DWORD *)(v4 + 24) ? *(const char **)(v4 + 20) : (const char *)&dword_8DB98;
        v10 = v5[6] ? (const char *)v5[5] : (const char *)&dword_8DB98;
        result = strcmp(v9, v10);
        if ( result )
          break;
        if ( *(_DWORD *)(v4 + 32) == v5[8] && *(unsigned __int16 *)(v4 + 36) == *((unsigned __int16 *)v5 + 18) )
        {
          if ( v2 == ++v6 )
            return 1;
          if ( *(_DWORD *)(v4 + 40) == v5[10] )
          {
            v11 = *(_DWORD *)(v4 + 44);
            v4 += 40;
            v12 = v5[11];
            v5 += 10;
            if ( v11 == v12 )
              continue;
          }
        }
        return result;
      }
    }
  }
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
