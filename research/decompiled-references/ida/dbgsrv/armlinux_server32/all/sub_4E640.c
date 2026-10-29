/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E640
// Address: 0x0004E640

//----- (0004E640) --------------------------------------------------------
int __fastcall sub_4E640(int a1)
{
  void *v2; // r0
  void *v3; // r0
  _DWORD *v4; // r3
  int v5; // r5
  int i; // r4
  void *v7; // r0
  char *v8; // r3
  _DWORD *v9; // r0
  int v10; // r8
  int j; // r9
  _DWORD *v12; // r3
  char *v13; // r5
  int v14; // r10
  int k; // r4
  void *v16; // r0
  char *v17; // r3
  void *v18; // r0

  sub_4E5E4(a1, 1);
  sub_4CDE0(a1);
  sub_4CD10((void **)(a1 + 616));
  v2 = *(void **)(a1 + 160);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 164) = 0;
    sub_77F70(v2);
  }
  v3 = *(void **)(a1 + 136);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 140) = 0;
    sub_77F70(v3);
  }
  v4 = *(_DWORD **)(a1 + 124);
  if ( v4 )
  {
    v5 = *(_DWORD *)(a1 + 128);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (void *)v4[3 * i];
        v8 = (char *)&v4[3 * i];
        if ( v7 )
        {
          *((_DWORD *)v8 + 1) = 0;
          sub_77F70(v7);
        }
        v4 = *(_DWORD **)(a1 + 124);
      }
    }
    *(_DWORD *)(a1 + 128) = 0;
    sub_77F70(v4);
  }
  sub_4CB10(a1 + 48);
  v9 = *(_DWORD **)(a1 + 28);
  if ( v9 )
  {
    v10 = *(_DWORD *)(a1 + 32);
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = (_DWORD *)v9[7 * j];
        v13 = (char *)&v9[7 * j];
        if ( v12 )
        {
          v14 = *((_DWORD *)v13 + 1);
          if ( v14 )
          {
            for ( k = 0; k != v14; ++k )
            {
              v16 = (void *)v12[3 * k];
              v17 = (char *)&v12[3 * k];
              if ( v16 )
              {
                *((_DWORD *)v17 + 1) = 0;
                sub_77F70(v16);
              }
              v12 = *(_DWORD **)v13;
            }
          }
          *((_DWORD *)v13 + 1) = 0;
          sub_77F70(v12);
        }
        v9 = *(_DWORD **)(a1 + 28);
      }
    }
    *(_DWORD *)(a1 + 32) = 0;
    sub_77F70(v9);
  }
  v18 = *(void **)(a1 + 16);
  if ( v18 )
  {
    *(_DWORD *)(a1 + 20) = 0;
    sub_77F70(v18);
  }
  return a1;
}
