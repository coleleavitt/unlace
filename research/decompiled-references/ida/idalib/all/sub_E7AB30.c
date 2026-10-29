void __fastcall sub_E7AB30(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // r13
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
  void **v15; // r12
  void **v16; // rbp

  v2 = *(_QWORD *)(a1 + 560);
  if ( v2 )
  {
    do
    {
      sub_E7AAF0(a1 + 544, *(_QWORD **)(v2 + 24));
      v3 = *(_QWORD *)(v2 + 16);
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(__int64 **)(a1 + 456);
  v5 = &v4[*(unsigned int *)(a1 + 464)];
  if ( v4 != v5 )
  {
    for ( i = *(_QWORD *)(a1 + 456); ; i = *(_QWORD *)(a1 + 456) )
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
  v10 = *(__int64 **)(a1 + 504);
  v11 = &v10[2 * *(unsigned int *)(a1 + 512)];
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
    v11 = *(__int64 **)(a1 + 504);
  }
  if ( v11 != (__int64 *)(a1 + 520) )
    free(v11);
  v14 = *(void **)(a1 + 456);
  if ( v14 != (void *)(a1 + 472) )
    free(v14);
  operator delete(*(_QWORD *)(a1 + 416), 24LL * *(unsigned int *)(a1 + 432), 8);
  operator delete(*(_QWORD *)(a1 + 392), 16LL * *(unsigned int *)(a1 + 408), 8);
  operator delete(*(_QWORD *)(a1 + 368), 16LL * *(unsigned int *)(a1 + 384), 8);
  v15 = *(void ***)(a1 + 32);
  v16 = &v15[4 * *(unsigned int *)(a1 + 40)];
  if ( v15 != v16 )
  {
    do
    {
      while ( 1 )
      {
        v16 -= 4;
        if ( *v16 == v16 + 2 )
          break;
        operator delete(*v16);
        if ( v15 == v16 )
          goto LABEL_19;
      }
    }
    while ( v15 != v16 );
LABEL_19:
    v16 = *(void ***)(a1 + 32);
  }
  if ( v16 != (void **)(a1 + 48) )
    free(v16);
}
