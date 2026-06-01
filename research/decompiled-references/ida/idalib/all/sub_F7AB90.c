__int64 __fastcall sub_F7AB90(__int64 a1)
{
  void *v2; // rdi
  _QWORD *v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rsi
  _QWORD *v6; // r12
  _QWORD *v7; // rdi
  void *v8; // rdi
  __int64 v9; // rsi
  _QWORD *v10; // r12
  _QWORD *v11; // rbp
  _QWORD *v12; // rdi

  v2 = *(void **)(a1 + 864);
  if ( v2 != (void *)(a1 + 880) )
    free(v2);
  if ( !*(_BYTE *)(a1 + 828) )
    free(*(void **)(a1 + 808));
  v3 = *(_QWORD **)(a1 + 784);
  v4 = *(unsigned int *)(a1 + 800);
  v5 = 80 * v4;
  if ( (_DWORD)v4 )
  {
    v6 = &v3[10 * v4];
    do
    {
      if ( *v3 != -8192 && *v3 != -4096 )
      {
        v7 = (_QWORD *)v3[1];
        if ( v7 != v3 + 3 )
          free(v7);
      }
      v3 += 10;
    }
    while ( v6 != v3 );
    v3 = *(_QWORD **)(a1 + 784);
    v5 = 80LL * *(unsigned int *)(a1 + 800);
  }
  operator delete(v3, v5, 8);
  operator delete(*(_QWORD *)(a1 + 760), (unsigned __int64)*(unsigned int *)(a1 + 776) << 6, 8);
  operator delete(*(_QWORD *)(a1 + 736), 24LL * *(unsigned int *)(a1 + 752), 8);
  operator delete(*(_QWORD *)(a1 + 712), 32LL * *(unsigned int *)(a1 + 728), 8);
  operator delete(*(_QWORD *)(a1 + 688), 24LL * *(unsigned int *)(a1 + 704), 8);
  v8 = *(void **)(a1 + 160);
  if ( v8 != (void *)(a1 + 176) )
    free(v8);
  operator delete(*(_QWORD *)(a1 + 136), 16LL * *(unsigned int *)(a1 + 152), 8);
  v9 = *(unsigned int *)(a1 + 128);
  if ( (_DWORD)v9 )
  {
    v10 = *(_QWORD **)(a1 + 112);
    v11 = &v10[35 * (unsigned int)v9];
    do
    {
      if ( *v10 != -4096 && *v10 != -8192 )
      {
        v12 = (_QWORD *)v10[1];
        if ( v12 != v10 + 3 )
          free(v12);
      }
      v10 += 35;
    }
    while ( v11 != v10 );
    v9 = *(unsigned int *)(a1 + 128);
  }
  operator delete(*(_QWORD *)(a1 + 112), 280 * v9, 8);
  return operator delete(*(_QWORD *)(a1 + 88), 40LL * *(unsigned int *)(a1 + 104), 8);
}
