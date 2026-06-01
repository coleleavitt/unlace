void __fastcall sub_1459490(_QWORD *a1)
{
  __int64 v2; // rsi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 *v6; // rbp
  __int64 *v7; // r12
  __int64 i; // rax
  __int64 v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rdi
  __int64 *v12; // rbp
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  _QWORD *v16; // rdi

  v2 = 16LL * *((unsigned int *)a1 + 52);
  *a1 = &off_2C446D0;
  operator delete(a1[24], v2, 8);
  v3 = (void *)a1[20];
  if ( v3 )
    operator delete(v3);
  v4 = (void *)a1[17];
  if ( v4 )
    operator delete(v4);
  v5 = (void *)a1[14];
  if ( v5 )
    operator delete(v5);
  v6 = (__int64 *)a1[4];
  v7 = &v6[*((unsigned int *)a1 + 10)];
  if ( v6 != v7 )
  {
    for ( i = a1[4]; ; i = a1[4] )
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
  v12 = (__int64 *)a1[10];
  v13 = &v12[2 * *((unsigned int *)a1 + 22)];
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
    v13 = (__int64 *)a1[10];
  }
  if ( v13 != a1 + 12 )
    free(v13);
  v16 = (_QWORD *)a1[4];
  if ( v16 != a1 + 6 )
    free(v16);
  nullsub_670();
  operator delete(a1, 0xF0u);
}
