/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809E370
// Address: 0x0809E370

//----- (0809E370) --------------------------------------------------------
int __cdecl sub_809E370(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // esi
  int v5; // edi
  _DWORD *v6; // eax
  void *v7; // ecx
  void *v8; // ecx
  int (__cdecl *v9)(int, char **); // eax
  unsigned int v10; // ebp
  unsigned int i; // esi
  int v12; // eax
  void *v13; // edx
  int v14; // ebp
  char *v15; // esi
  _DWORD *v16; // edx
  void **v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  char *v20; // esi
  char *v21; // eax
  void *v23; // eax
  int v24; // [esp+0h] [ebp-30h]
  unsigned int v25; // [esp+0h] [ebp-30h]
  int v26; // [esp+4h] [ebp-2Ch]
  size_t n; // [esp+8h] [ebp-28h]
  void *src; // [esp+Ch] [ebp-24h]
  unsigned int v29; // [esp+10h] [ebp-20h]

  v3 = a2;
  if ( *(_DWORD *)(a1 + 168) )
  {
    v4 = *(_DWORD *)(a1 + 168);
    v5 = 0;
    do
    {
      v6 = (_DWORD *)(*(_DWORD *)(a1 + 164) + 32 * v5);
      v7 = (void *)v6[5];
      if ( v7 )
      {
        v24 = *(_DWORD *)(a1 + 164) + 32 * v5;
        v6[6] = 0;
        sub_80CF780(v7);
        v6 = (_DWORD *)v24;
      }
      v8 = (void *)v6[1];
      if ( v8 )
      {
        v6[2] = 0;
        sub_80CF780(v8);
      }
      ++v5;
    }
    while ( v4 != v5 );
    v3 = a2;
  }
  *(_DWORD *)(a1 + 168) = 0;
  v9 = *(int (__cdecl **)(int, char **))(*(_DWORD *)a1 + 12);
  if ( v9 != sub_809DF40 )
  {
    ((void (__cdecl *)(int, int, int))v9)(a1, a1 + 164, a3);
LABEL_12:
    v10 = *(_DWORD *)(v3 + 4);
    v25 = *(_DWORD *)(a1 + 168);
    if ( !v10 )
      goto LABEL_17;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(a1 + 164) )
  {
    sub_80CF780(*(void **)(a1 + 164));
    *(_DWORD *)(a1 + 164) = 0;
    *(_DWORD *)(a1 + 172) = 0;
    goto LABEL_12;
  }
  v10 = *(_DWORD *)(v3 + 4);
  v25 = 0;
  if ( !v10 )
    return 1;
LABEL_13:
  for ( i = 0; i < v10; ++i )
  {
    v12 = *(_DWORD *)v3 + 16 * i;
    v13 = *(void **)(v12 + 4);
    if ( v13 )
    {
      *(_DWORD *)(v12 + 8) = 0;
      sub_80CF780(v13);
    }
  }
LABEL_17:
  *(_DWORD *)(v3 + 4) = 0;
  if ( *(_DWORD *)(v3 + 8) < v25 )
  {
    *(_DWORD *)v3 = sub_80CF920(v3, *(void **)v3, v25, 0x10u);
  }
  else if ( !v25 )
  {
    return 1;
  }
  v14 = 0;
  do
  {
    v19 = *(_DWORD *)(v3 + 4);
    v20 = *(char **)v3;
    if ( *(_DWORD *)(v3 + 8) < (unsigned int)(v19 + 1) )
    {
      v21 = (char *)sub_80CF920(v3, v20, v19 + 1, 0x10u);
      *(_DWORD *)v3 = v21;
      v20 = v21;
      v19 = *(_DWORD *)(v3 + 4);
    }
    v15 = &v20[16 * v19];
    *((_DWORD *)v15 + 1) = 0;
    *((_DWORD *)v15 + 2) = 0;
    *((_DWORD *)v15 + 3) = 0;
    ++*(_DWORD *)(v3 + 4);
    v16 = (_DWORD *)(*(_DWORD *)(a1 + 164) + 32 * v14);
    *(_DWORD *)v15 = *v16;
    v17 = (void **)(v16 + 5);
    if ( v16[6] <= 1u )
      v17 = (void **)(v16 + 1);
    if ( v15 + 4 != (char *)v17 )
    {
      v18 = (unsigned int)v17[1];
      if ( v18 && (n = v18 - 1, v18 != 1) )
      {
        src = *v17;
        v23 = *((void **)v15 + 1);
        if ( *((_DWORD *)v15 + 3) < v18 )
        {
          v29 = v18;
          v23 = sub_80CF920((int)(v15 + 4), v23, v18, 1u);
          v18 = v29;
          *((_DWORD *)v15 + 1) = v23;
        }
        v26 = v18;
        *((_DWORD *)v15 + 2) = v18;
        memmove(v23, src, n);
        *(_BYTE *)(*((_DWORD *)v15 + 1) + v26 - 1) = 0;
      }
      else
      {
        *((_DWORD *)v15 + 2) = 0;
      }
    }
    ++v14;
  }
  while ( v14 != v25 );
  return 1;
}
