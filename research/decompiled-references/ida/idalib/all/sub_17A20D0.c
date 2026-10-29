void __fastcall sub_17A20D0(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 *v3; // r12
  __int64 i; // rax
  __int64 v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  void *v12; // rdi
  _QWORD *v13; // r13
  _QWORD *v14; // rbp
  _QWORD *v15; // rdi
  _QWORD *v16; // r14
  _QWORD *v17; // r12
  char *v18; // rdi

  sub_1BD27A0(a1);
  v2 = *(__int64 **)(a1 + 2888);
  v3 = &v2[*(unsigned int *)(a1 + 2896)];
  if ( v2 != v3 )
  {
    for ( i = *(_QWORD *)(a1 + 2888); ; i = *(_QWORD *)(a1 + 2888) )
    {
      v5 = 0x40000000000LL;
      v6 = (unsigned int)(((__int64)v2 - i) >> 3) >> 7;
      if ( v6 <= 0x1D )
        v5 = 4096LL << v6;
      v7 = *v2++;
      operator delete(v7, v5, 16);
      if ( v3 == v2 )
        break;
    }
  }
  v8 = *(__int64 **)(a1 + 2936);
  v9 = &v8[2 * *(unsigned int *)(a1 + 2944)];
  if ( v8 != v9 )
  {
    do
    {
      v10 = v8[1];
      v11 = *v8;
      v8 += 2;
      operator delete(v11, v10, 16);
    }
    while ( v9 != v8 );
    v9 = *(__int64 **)(a1 + 2936);
  }
  if ( v9 != (__int64 *)(a1 + 2952) )
    free(v9);
  v12 = *(void **)(a1 + 2888);
  if ( v12 != (void *)(a1 + 2904) )
    free(v12);
  if ( !*(_BYTE *)(a1 + 2724) )
    free(*(void **)(a1 + 2704));
  v13 = *(_QWORD **)a1;
  v14 = (_QWORD *)(*(_QWORD *)a1 + 168LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v14 )
  {
    do
    {
      while ( 1 )
      {
        v14 -= 21;
        v15 = (_QWORD *)v14[8];
        v16 = (_QWORD *)v14[9];
        v17 = v15;
        if ( v16 != v15 )
        {
          do
          {
            while ( 1 )
            {
              v18 = (char *)v17[3];
              if ( v18 == (char *)(v17 + 5) )
                break;
              operator delete(v18);
              v17 += 8;
              if ( v16 == v17 )
                goto LABEL_20;
            }
            v17 += 8;
          }
          while ( v16 != v17 );
LABEL_20:
          v15 = (_QWORD *)v14[8];
        }
        if ( !v15 )
          break;
        operator delete(v15);
        if ( v13 == v14 )
          goto LABEL_23;
      }
    }
    while ( v13 != v14 );
LABEL_23:
    v14 = *(_QWORD **)a1;
  }
  if ( v14 != (_QWORD *)(a1 + 16) )
    free(v14);
}
