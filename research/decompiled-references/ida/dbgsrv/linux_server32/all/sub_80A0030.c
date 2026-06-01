/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A0030
// Address: 0x080A0030

//----- (080A0030) --------------------------------------------------------
int __cdecl sub_80A0030(int a1, int *a2)
{
  int result; // eax
  char *v3; // edx
  int v4; // edi
  int v5; // esi
  char *v6; // ebp
  int v7; // eax
  const char *v8; // ecx
  int v9; // eax
  int v10; // ecx
  const char *v11; // eax
  int v12; // eax
  char *s2; // [esp+0h] [ebp-24h]
  char *s2a; // [esp+0h] [ebp-24h]
  char *v15; // [esp+4h] [ebp-20h]
  char *v16; // [esp+4h] [ebp-20h]

  result = 0;
  v3 = *(char **)(a1 + 240);
  if ( v3 == (char *)a2[1] )
  {
    if ( !v3 )
      return 1;
    v4 = *(_DWORD *)(a1 + 236);
    v5 = *a2;
    v6 = nullptr;
    while ( 1 )
    {
      if ( *(_DWORD *)v4 != *(_DWORD *)v5 || *(_DWORD *)(v4 + 4) != *(_DWORD *)(v5 + 4) )
        return 0;
      v7 = *(_DWORD *)(v4 + 12);
      if ( *(_DWORD *)(v5 + 12) )
      {
        s2 = *(char **)(v5 + 8);
        v8 = (const char *)&dword_80DDFD8;
        if ( !v7 )
          goto LABEL_10;
      }
      else
      {
        if ( !v7 )
          goto LABEL_11;
        s2 = (char *)&dword_80DDFD8;
      }
      v8 = *(const char **)(v4 + 8);
LABEL_10:
      v15 = v3;
      v9 = strcmp(v8, s2);
      v3 = v15;
      if ( v9 )
        return 0;
LABEL_11:
      v10 = *(_DWORD *)(v4 + 24);
      if ( *(_DWORD *)(v5 + 24) )
      {
        v16 = *(char **)(v5 + 20);
        v11 = (const char *)&dword_80DDFD8;
        if ( !v10 )
          goto LABEL_14;
      }
      else
      {
        if ( !v10 )
          goto LABEL_15;
        v16 = (char *)&dword_80DDFD8;
      }
      v11 = *(const char **)(v4 + 20);
LABEL_14:
      s2a = v3;
      v12 = strcmp(v11, v16);
      v3 = s2a;
      if ( v12 )
        return 0;
LABEL_15:
      if ( *(_DWORD *)(v4 + 32) != *(_DWORD *)(v5 + 32) || *(_WORD *)(v4 + 36) != *(_WORD *)(v5 + 36) )
        return 0;
      ++v6;
      v4 += 40;
      v5 += 40;
      if ( v3 == v6 )
        return 1;
    }
  }
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
