/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_25BE0
// Address: 0x00025BE0

//----- (00025BE0) --------------------------------------------------------
int __cdecl sub_25BE0(int a1)
{
  int v1; // esi
  int v2; // eax
  bool v3; // zf
  char *v4; // esi
  char *v5; // eax
  int v6; // edx
  unsigned int v7; // eax
  int v8; // ecx
  size_t v9; // edx
  _BYTE *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // esi
  int v13; // edi
  const char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  int v18; // esi
  const char *v19; // eax
  int v20; // edi
  int v21; // [esp-10h] [ebp-104Ch]
  int v22; // [esp-10h] [ebp-104Ch]
  int v23; // [esp+4h] [ebp-1038h]
  size_t v24; // [esp+8h] [ebp-1034h]
  char *v25; // [esp+8h] [ebp-1034h]
  char v26; // [esp+Ch] [ebp-1030h]
  int v27; // [esp+18h] [ebp-1024h] BYREF
  unsigned int v28; // [esp+1Ch] [ebp-1020h]
  unsigned int v29; // [esp+20h] [ebp-101Ch]
  void *dest[1029]; // [esp+28h] [ebp-1014h] BYREF

  v1 = a1;
  dest[1024] = (void *)__readgsdword(0x14u);
  v23 = 0;
  if ( !*(_DWORD *)(a1 + 1032) )
    goto LABEL_50;
  v2 = *(_DWORD *)(a1 + 1068);
  if ( (unsigned int)(v2 - 1) < 3 )
    goto LABEL_50;
  v3 = v2 == 0;
  if ( !v2 )
    goto LABEL_50;
  v4 = byte_EF875;
  v5 = byte_EF875;
  if ( !v3 )
    v5 = *(char **)(a1 + 1064);
  sub_2DCA0(dest, v5, 2u);
  v6 = *(_DWORD *)(a1 + 1068);
  v7 = v6 - 1;
  if ( !v6 )
    v7 = 0;
  v8 = 2;
  if ( v7 < 2 )
    v8 = v7;
  if ( v6 )
    v4 = *(char **)(a1 + 1064);
  sub_2DCA0(&v27, &v4[v8], v7 - v8);
  v9 = __strlen_chk(".debug", 7);
  v10 = (_BYTE *)v27;
  v11 = v28 - 1;
  if ( !v28 )
    v11 = 0;
  v12 = v11 + v9 + 1;
  if ( v29 < v12 )
  {
    v24 = v9;
    v10 = qvector_reserve((int)&v27, (void *)v27, v11 + v9 + 1, 1u);
    v9 = v24;
    v27 = (int)v10;
  }
  v28 = v12;
  v10[v11 + v9] = 0;
  memmove((void *)(v27 + v11), ".debug", v9);
  v1 = a1;
  v26 = 1;
  if ( 12 * *(_DWORD *)(a1 + 1032) )
  {
    v13 = *(_DWORD *)(a1 + 1028);
    while ( 1 )
    {
      v14 = byte_EF875;
      if ( *(_DWORD *)(v13 + 4) )
        v14 = *(const char **)v13;
      qmakepath((char *)(a1 + 4), 1024, v14, (int)".build-id");
      v1 = a1;
      v23 = (**(int (__cdecl ***)(int, _DWORD, _DWORD))a1)(a1, 0, 0);
      sub_2DD60();
      if ( v23 )
        break;
      v13 += 12;
      if ( v13 == *(_DWORD *)(a1 + 1028) + 12 * *(_DWORD *)(a1 + 1032) )
        goto LABEL_22;
    }
    v26 = 0;
  }
  else
  {
LABEL_22:
    v23 = 0;
  }
  if ( v27 )
  {
    v28 = 0;
    qfree((void *)v27);
    v27 = 0;
    v29 = 0;
  }
  if ( dest[0] )
  {
    dest[1] = nullptr;
    qfree(dest[0]);
    dest[0] = nullptr;
    dest[2] = nullptr;
  }
  if ( v26 )
  {
LABEL_50:
    if ( *(_DWORD *)(v1 + 1056) >= 2u )
    {
      v15 = *(_DWORD *)(v1 + 1044) ? *(char **)(v1 + 1040) : byte_EF875;
      if ( (unsigned __int8)qdirname((char *)dest, 0x1000u, v15) )
      {
        v16 = *(_DWORD *)(v1 + 1056) ? *(char **)(v1 + 1052) : byte_EF875;
        v25 = (char *)(v1 + 4);
        qmakepath((char *)(v1 + 4), 1024, (const char *)dest, (int)v16);
        v21 = (**(int (__cdecl ***)(int, int))v1)(v1, 1);
        sub_2DD60();
        v23 = v21;
        if ( !v21 )
        {
          qmakepath(v25, 1024, (const char *)dest, (int)".debug");
          v22 = (**(int (__cdecl ***)(int, int))v1)(v1, 1);
          sub_2DD60();
          v23 = v22;
          if ( !v22 )
          {
            v23 = 0;
            if ( 12 * *(_DWORD *)(v1 + 1032) )
            {
              v18 = *(_DWORD *)(v1 + 1028);
              while ( 1 )
              {
                v19 = byte_EF875;
                if ( *(_DWORD *)(v18 + 4) )
                  v19 = *(const char **)v18;
                qmakepath(v25, 1024, v19, (int)dest);
                v20 = (**(int (__cdecl ***)(int, int))a1)(a1, 1);
                sub_2DD60();
                if ( v20 )
                  break;
                v18 += 12;
                if ( v18 == *(_DWORD *)(a1 + 1028) + 12 * *(_DWORD *)(a1 + 1032) )
                  return v23;
              }
              return v20;
            }
          }
        }
      }
    }
  }
  return v23;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
