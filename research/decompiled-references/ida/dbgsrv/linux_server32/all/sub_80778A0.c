/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80778A0
// Address: 0x080778A0

//----- (080778A0) --------------------------------------------------------
int __cdecl sub_80778A0(int a1)
{
  char *v1; // esi
  int v2; // ebp
  int v3; // edi
  const char *v4; // eax
  int v6; // edi
  int v7; // ebp
  const char *v8; // eax
  int v9; // edi
  int v10; // ebp
  const char *v11; // eax
  int v12; // [esp+18h] [ebp-24h]
  int v13; // [esp+18h] [ebp-24h]
  int v14; // [esp+1Ch] [ebp-20h]

  v1 = (char *)&dword_80DDFD8;
  if ( *(_DWORD *)(a1 + 24) )
    v1 = *(char **)(a1 + 20);
  if ( *(_DWORD *)(a1 + 80) )
  {
    v2 = *(_DWORD *)(a1 + 76);
    v12 = *(_DWORD *)(a1 + 80);
    v3 = 0;
    do
    {
      v4 = (const char *)&dword_80DDFD8;
      if ( *(_DWORD *)(v2 + 4) )
        v4 = *(const char **)v2;
      if ( !strcmp(v4, v1) )
        goto LABEL_9;
      ++v3;
      v2 += 12;
    }
    while ( v12 != v3 );
  }
  if ( *(_DWORD *)(a1 + 68) )
  {
    v13 = *(_DWORD *)(a1 + 68);
    v14 = *(_DWORD *)(a1 + 64);
    v6 = v14;
    v7 = 0;
    while ( 1 )
    {
      v8 = (const char *)&dword_80DDFD8;
      if ( *(_DWORD *)(v6 + 4) )
        v8 = *(const char **)v6;
      if ( !strcmp(v8, v1) )
        goto LABEL_9;
      ++v7;
      v6 += 12;
      if ( v7 == v13 )
      {
        v9 = 0;
        v10 = v14;
        while ( 1 )
        {
          v11 = (const char *)&dword_80DDFD8;
          if ( *(_DWORD *)(v10 + 4) )
            v11 = *(const char **)v10;
          if ( !strcmp(v11, v1) )
            goto LABEL_9;
          ++v9;
          v10 += 12;
          if ( v9 == v13 )
            goto LABEL_23;
        }
      }
    }
  }
LABEL_23:
  if ( sub_8077680((char **)(a1 + 64), v1) == (char *)-1 )
  {
LABEL_9:
    sub_80C7910(0, v1);
    return sub_80C7880(52);
  }
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
