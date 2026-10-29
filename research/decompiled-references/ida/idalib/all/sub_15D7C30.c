void __fastcall sub_15D7C30(__int64 a1)
{
  void **v2; // r12
  void **v3; // rbp
  __int64 *v4; // rbp
  __int64 *v5; // r12
  __int64 i; // rax
  __int64 v7; // rsi
  unsigned int v8; // ecx
  __int64 v9; // rdi
  __int64 *v10; // rbp
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  void *v14; // rdi

  v2 = *(void ***)(a1 + 96);
  v3 = &v2[10 * *(unsigned int *)(a1 + 104)];
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 10;
        if ( *v3 == v3 + 2 )
          break;
        free(*v3);
        if ( v2 == v3 )
          goto LABEL_4;
      }
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = *(void ***)(a1 + 96);
  }
  if ( v3 != (void **)(a1 + 112) )
    free(v3);
  v4 = *(__int64 **)(a1 + 16);
  v5 = &v4[*(unsigned int *)(a1 + 24)];
  if ( v4 != v5 )
  {
    for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(a1 + 16) )
    {
      v7 = 0x40000000000LL;
      v8 = (unsigned int)(((__int64)v4 - i) >> 3) >> 7;
      if ( v8 <= 0x1D )
        v7 = 4096LL << v8;
      v9 = *v4++;
      operator delete(v9, v7, 16);
      if ( v5 == v4 )
        break;
    }
  }
  v10 = *(__int64 **)(a1 + 64);
  v11 = &v10[2 * *(unsigned int *)(a1 + 72)];
  if ( v10 != v11 )
  {
    do
    {
      v12 = v10[1];
      v13 = *v10;
      v10 += 2;
      operator delete(v13, v12, 16);
    }
    while ( v11 != v10 );
    v11 = *(__int64 **)(a1 + 64);
  }
  if ( v11 != (__int64 *)(a1 + 80) )
    free(v11);
  v14 = *(void **)(a1 + 16);
  if ( v14 != (void *)(a1 + 32) )
    free(v14);
}
