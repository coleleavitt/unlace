/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_534AC
// Address: 0x000534AC

//----- (000534AC) --------------------------------------------------------
int __fastcall sub_534AC(int a1)
{
  _DWORD *v2; // r3
  int v3; // r6
  int i; // r4
  void *v5; // r0
  char *v6; // r3
  void *v7; // r0
  _DWORD *v8; // r3
  int v9; // r6
  int j; // r4
  void *v11; // r0
  char *v12; // r3
  void *v13; // r0

  v2 = *(_DWORD **)(a1 + 36);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (void *)v2[3 * i];
        v6 = (char *)&v2[3 * i];
        if ( v5 )
        {
          *((_DWORD *)v6 + 1) = 0;
          sub_77F70(v5);
        }
        v2 = *(_DWORD **)(a1 + 36);
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
    sub_77F70(v2);
  }
  v7 = *(void **)(a1 + 24);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    sub_77F70(v7);
  }
  v8 = *(_DWORD **)(a1 + 12);
  if ( v8 )
  {
    v9 = *(_DWORD *)(a1 + 16);
    if ( v9 )
    {
      for ( j = 0; j != v9; ++j )
      {
        v11 = (void *)v8[3 * j];
        v12 = (char *)&v8[3 * j];
        if ( v11 )
        {
          *((_DWORD *)v12 + 1) = 0;
          sub_77F70(v11);
        }
        v8 = *(_DWORD **)(a1 + 12);
      }
    }
    *(_DWORD *)(a1 + 16) = 0;
    sub_77F70(v8);
  }
  v13 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77F70(v13);
  }
  return a1;
}
