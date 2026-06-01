/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809B0B0
// Address: 0x0809B0B0

//----- (0809B0B0) --------------------------------------------------------
void __cdecl sub_809B0B0(int a1)
{
  _DWORD *v1; // edi
  _DWORD *v2; // ebx
  _DWORD *v3; // eax
  void *v4; // edx
  int v5; // eax
  void *v6; // eax
  void *v7; // eax
  char *v8; // ecx
  int v9; // ebp
  int i; // esi
  char *v11; // edx
  void *v12; // eax
  void *v13; // edx
  char *v14; // eax
  int j; // edx
  char *v16; // edi
  char *v17; // ebx
  int v18; // ebp
  int k; // esi
  char *v20; // ecx
  void *v21; // edx
  void *v22; // eax
  int v23; // [esp+18h] [ebp-24h]
  int v24; // [esp+1Ch] [ebp-20h]
  int v25; // [esp+1Ch] [ebp-20h]

  v1 = (_DWORD *)a1;
  sub_809AFE0(a1, 1);
  sub_8094F40(a1);
  v2 = *(_DWORD **)(a1 + 384);
  while ( v2 )
  {
    v3 = v2;
    v2 = (_DWORD *)*v2;
    sub_80921C0(v3);
  }
  memset(*(void **)(a1 + 376), 0, 4 * *(_DWORD *)(a1 + 380));
  v4 = *(void **)(a1 + 376);
  *(_DWORD *)(a1 + 388) = 0;
  v5 = *(_DWORD *)(a1 + 380);
  *(_DWORD *)(a1 + 384) = 0;
  if ( v4 != (void *)(a1 + 400) )
    operator delete(v4, 4 * v5);
  v6 = *(void **)(a1 + 160);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 164) = 0;
    sub_80CF780(v6);
  }
  v7 = *(void **)(a1 + 136);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 140) = 0;
    sub_80CF780(v7);
  }
  v8 = *(char **)(a1 + 124);
  if ( v8 )
  {
    v9 = *(_DWORD *)(a1 + 128);
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = &v8[12 * i];
        v12 = *(void **)v11;
        if ( *(_DWORD *)v11 )
        {
          *((_DWORD *)v11 + 1) = 0;
          sub_80CF780(v12);
          v8 = *(char **)(a1 + 124);
        }
      }
    }
    *(_DWORD *)(a1 + 128) = 0;
    sub_80CF780(v8);
  }
  sub_8093BD0(a1 + 48);
  v13 = *(void **)(a1 + 48);
  if ( v13 != (void *)(a1 + 72) )
    operator delete(v13, 4 * *(_DWORD *)(a1 + 52));
  v14 = *(char **)(a1 + 28);
  if ( v14 )
  {
    v23 = *(_DWORD *)(a1 + 32);
    if ( v23 )
    {
      for ( j = 0; j != v23; ++j )
      {
        v16 = &v14[28 * j];
        v17 = *(char **)v16;
        if ( *(_DWORD *)v16 )
        {
          v18 = *((_DWORD *)v16 + 1);
          if ( v18 )
          {
            v24 = j;
            for ( k = 0; k != v18; ++k )
            {
              v20 = &v17[12 * k];
              v21 = *(void **)v20;
              if ( *(_DWORD *)v20 )
              {
                *((_DWORD *)v20 + 1) = 0;
                sub_80CF780(v21);
                v17 = *(char **)v16;
              }
            }
            j = v24;
          }
          v25 = j;
          *((_DWORD *)v16 + 1) = 0;
          sub_80CF780(v17);
          j = v25;
          v14 = *(char **)(a1 + 28);
        }
      }
      v1 = (_DWORD *)a1;
    }
    v1[8] = 0;
    sub_80CF780(v14);
  }
  v22 = (void *)v1[4];
  if ( v22 )
  {
    v1[5] = 0;
    sub_80CF780(v22);
  }
}
