void __fastcall sub_2007360(__int64 a1)
{
  void (__fastcall *v2)(__int64, __int64, __int64); // rax
  void *v3; // rdi
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
  void (__fastcall *v15)(__int64, __int64, __int64); // rax
  void **v16; // r12
  void **v17; // rbp
  __int64 v18; // rdi

  *(_QWORD *)a1 = &off_2BE4E48;
  v2 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 440);
  if ( v2 )
    v2(a1 + 424, a1 + 424, 3);
  v3 = *(void **)(a1 + 400);
  *(_QWORD *)(a1 + 264) = &off_2BE4CE0;
  if ( v3 )
    operator delete(v3);
  operator delete(*(_QWORD *)(a1 + 376), 16LL * *(unsigned int *)(a1 + 392), 8);
  v4 = *(__int64 **)(a1 + 288);
  v5 = &v4[*(unsigned int *)(a1 + 296)];
  if ( v4 != v5 )
  {
    for ( i = *(_QWORD *)(a1 + 288); ; i = *(_QWORD *)(a1 + 288) )
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
  v10 = *(__int64 **)(a1 + 336);
  v11 = &v10[2 * *(unsigned int *)(a1 + 344)];
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
    v11 = *(__int64 **)(a1 + 336);
  }
  if ( v11 != (__int64 *)(a1 + 352) )
    free(v11);
  v14 = *(void **)(a1 + 288);
  if ( v14 != (void *)(a1 + 304) )
    free(v14);
  sub_20093A0(a1 + 80);
  if ( *(_BYTE *)(a1 + 72) )
  {
    v15 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 56);
    if ( v15 )
      v15(a1 + 40, a1 + 40, 3);
    v16 = *(void ***)(a1 + 24);
    v17 = *(void ***)(a1 + 16);
    if ( v16 != v17 )
    {
      do
      {
        while ( *v17 != v17 + 2 )
        {
          operator delete(*v17);
          v17 += 4;
          if ( v16 == v17 )
            goto LABEL_25;
        }
        v17 += 4;
      }
      while ( v16 != v17 );
LABEL_25:
      v17 = *(void ***)(a1 + 16);
    }
    if ( v17 )
      operator delete(v17);
    v18 = *(_QWORD *)(a1 + 8);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  }
}
