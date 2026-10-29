void __fastcall sub_1A0BB10(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  _DWORD *v4; // rbp
  void *v5; // rdi
  __int64 *v6; // r13
  __int64 *v7; // rbx
  __int64 i; // rax
  __int64 v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rdi
  void *v16; // rdi
  _QWORD *v17; // r14
  _QWORD *v18; // rbp
  _QWORD *v19; // rdi
  _QWORD *v20; // r13
  _QWORD *v21; // rbx
  char *v22; // rdi
  void *v23; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  v3 = v2 + 40LL * *(unsigned int *)(a1 + 16);
  while ( v3 != v2 )
  {
    while ( 1 )
    {
      if ( (unsigned int)(*(_DWORD *)v2 - 14) <= 1 )
      {
        v4 = *(_DWORD **)(v2 + 16);
        if ( v4 )
          break;
      }
      v2 += 40;
      if ( v3 == v2 )
        goto LABEL_9;
    }
    if ( (*v4 & 0x7FFFFFFF) == 3 )
      sub_1BD22E0(v4 + 4);
    v2 += 40;
    operator delete(v4, 0x98u);
  }
LABEL_9:
  v5 = *(void **)(a1 + 8064);
  if ( v5 != (void *)(a1 + 8080) )
    operator delete(v5);
  sub_1BD27A0(a1 + 192);
  v6 = *(__int64 **)(a1 + 3080);
  v7 = &v6[*(unsigned int *)(a1 + 3088)];
  if ( v6 != v7 )
  {
    for ( i = *(_QWORD *)(a1 + 3080); ; i = *(_QWORD *)(a1 + 3080) )
    {
      v9 = 0x40000000000LL;
      v10 = (unsigned int)(((__int64)v6 - i) >> 3) >> 7;
      if ( v10 <= 0x1D )
        v9 = 4096LL << v10;
      v11 = *v6++;
      operator delete(v11, v9, 16);
      if ( v7 == v6 )
        break;
    }
  }
  v12 = *(__int64 **)(a1 + 3128);
  v13 = &v12[2 * *(unsigned int *)(a1 + 3136)];
  if ( v12 != v13 )
  {
    do
    {
      v14 = v12[1];
      v15 = *v12;
      v12 += 2;
      operator delete(v15, v14, 16);
    }
    while ( v13 != v12 );
    v13 = *(__int64 **)(a1 + 3128);
  }
  if ( v13 != (__int64 *)(a1 + 3144) )
    free(v13);
  v16 = *(void **)(a1 + 3080);
  if ( v16 != (void *)(a1 + 3096) )
    free(v16);
  if ( !*(_BYTE *)(a1 + 2916) )
    free(*(void **)(a1 + 2896));
  v17 = *(_QWORD **)(a1 + 192);
  v18 = &v17[21 * *(unsigned int *)(a1 + 200)];
  if ( v17 != v18 )
  {
    do
    {
      while ( 1 )
      {
        v18 -= 21;
        v19 = (_QWORD *)v18[8];
        v20 = (_QWORD *)v18[9];
        v21 = v19;
        if ( v20 != v19 )
        {
          do
          {
            while ( 1 )
            {
              v22 = (char *)v21[3];
              if ( v22 == (char *)(v21 + 5) )
                break;
              operator delete(v22);
              v21 += 8;
              if ( v20 == v21 )
                goto LABEL_30;
            }
            v21 += 8;
          }
          while ( v20 != v21 );
LABEL_30:
          v19 = (_QWORD *)v18[8];
        }
        if ( !v19 )
          break;
        operator delete(v19);
        if ( v17 == v18 )
          goto LABEL_33;
      }
    }
    while ( v17 != v18 );
LABEL_33:
    v18 = *(_QWORD **)(a1 + 192);
  }
  if ( v18 != (_QWORD *)(a1 + 208) )
    free(v18);
  v23 = *(void **)(a1 + 8);
  if ( v23 != (void *)(a1 + 24) )
    free(v23);
}
