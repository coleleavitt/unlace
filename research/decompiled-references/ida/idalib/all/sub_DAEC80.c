__int64 __fastcall sub_DAEC80(__int64 a1)
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
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r14
  void **v17; // r13
  void **v18; // r12

  sub_DAE800(a1);
  v2 = *(__int64 **)(a1 + 40);
  v3 = &v2[*(unsigned int *)(a1 + 48)];
  if ( v2 != v3 )
  {
    for ( i = *(_QWORD *)(a1 + 40); ; i = *(_QWORD *)(a1 + 40) )
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
  v8 = *(__int64 **)(a1 + 88);
  v9 = &v8[2 * *(unsigned int *)(a1 + 96)];
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
    v9 = *(__int64 **)(a1 + 88);
  }
  if ( v9 != (__int64 *)(a1 + 104) )
    free(v9);
  v12 = *(void **)(a1 + 40);
  if ( v12 != (void *)(a1 + 56) )
    free(v12);
  v13 = *(_QWORD *)a1;
  v14 = *(unsigned int *)(a1 + 16);
  v15 = 80 * v14;
  if ( (_DWORD)v14 )
  {
    v16 = v13 + 80 * v14;
    do
    {
      if ( *(_QWORD *)v13 != -4096 && *(_QWORD *)v13 != -8192 )
      {
        v17 = *(void ***)(v13 + 8);
        v18 = &v17[*(unsigned int *)(v13 + 16)];
        if ( v17 != v18 )
        {
          do
          {
            while ( *--v18 )
            {
              operator delete[](*v18);
              if ( v17 == v18 )
                goto LABEL_21;
            }
          }
          while ( v17 != v18 );
LABEL_21:
          v18 = *(void ***)(v13 + 8);
        }
        if ( v18 != (void **)(v13 + 24) )
          free(v18);
      }
      v13 += 80;
    }
    while ( v16 != v13 );
    v13 = *(_QWORD *)a1;
    v15 = 80LL * *(unsigned int *)(a1 + 16);
  }
  return operator delete(v13, v15, 8);
}
