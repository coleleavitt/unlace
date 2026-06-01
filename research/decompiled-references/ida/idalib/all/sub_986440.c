void *__fastcall sub_986440(__int64 a1)
{
  void *result; // rax
  char v3; // r13
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbp
  void *v7; // rdi
  __int64 v8; // r12
  unsigned __int64 v9; // r12
  _QWORD *v10; // rbp
  void *v11; // rdi
  __int64 v12; // r12
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  __int64 *v15; // r15
  __int64 *v16; // r14
  __int64 i; // rdx
  __int64 v18; // rsi
  unsigned int v19; // ecx
  __int64 v20; // rdi
  __int64 *v21; // r14
  __int64 *v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdi
  void *v25; // rdi
  __int64 *v26; // r15
  __int64 *v27; // r14
  __int64 j; // rdx
  __int64 v29; // rsi
  unsigned int v30; // ecx
  __int64 v31; // rdi
  __int64 *v32; // r14
  __int64 *v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rdi
  void *v36; // rdi
  void *v37[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( *(_BYTE *)(a1 + 121) )
    return *(void **)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 96);
  *(_BYTE *)(a1 + 96) = 0;
  v4 = sub_B8C330(*(_QWORD *)(a1 + 8));
  v5 = sub_984530((__int64 *)a1, v37);
  sub_9A66D0(v37, *(_QWORD *)(a1 + 8), v5, v4, a1 + 40);
  result = v37[0];
  v6 = *(_QWORD *)(a1 + 24);
  v37[0] = nullptr;
  *(_QWORD *)(a1 + 24) = result;
  if ( v6 )
  {
    operator delete(*(_QWORD *)(v6 + 88), 16LL * *(unsigned int *)(v6 + 104), 8);
    v7 = *(void **)(v6 + 64);
    if ( v7 )
      operator delete(v7);
    v8 = *(_QWORD *)(v6 + 32);
    if ( (v8 & 4) != 0 )
    {
      v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v9 )
      {
        v15 = *(__int64 **)(v9 + 16);
        v16 = &v15[*(unsigned int *)(v9 + 24)];
        if ( v15 != v16 )
        {
          for ( i = *(_QWORD *)(v9 + 16); ; i = *(_QWORD *)(v9 + 16) )
          {
            v18 = 0x40000000000LL;
            v19 = (unsigned int)(((__int64)v15 - i) >> 3) >> 7;
            if ( v19 <= 0x1D )
              v18 = 4096LL << v19;
            v20 = *v15++;
            operator delete(v20, v18, 16);
            if ( v16 == v15 )
              break;
          }
        }
        v21 = *(__int64 **)(v9 + 64);
        v22 = &v21[2 * *(unsigned int *)(v9 + 72)];
        if ( v21 != v22 )
        {
          do
          {
            v23 = v21[1];
            v24 = *v21;
            v21 += 2;
            operator delete(v24, v23, 16);
          }
          while ( v22 != v21 );
          v22 = *(__int64 **)(v9 + 64);
        }
        if ( v22 != (__int64 *)(v9 + 80) )
          free(v22);
        v25 = *(void **)(v9 + 16);
        if ( v25 != (void *)(v9 + 32) )
          free(v25);
        operator delete((void *)v9, 0x60u);
      }
    }
    operator delete((void *)v6, 0x70u);
    v10 = v37[0];
    if ( v37[0] )
    {
      operator delete(*((_QWORD *)v37[0] + 11), 16LL * *((unsigned int *)v37[0] + 26), 8);
      v11 = (void *)v10[8];
      if ( v11 )
        operator delete(v11);
      v12 = v10[4];
      if ( (v12 & 4) != 0 )
      {
        v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v13 )
        {
          v26 = *(__int64 **)(v13 + 16);
          v27 = &v26[*(unsigned int *)(v13 + 24)];
          if ( v26 != v27 )
          {
            for ( j = *(_QWORD *)(v13 + 16); ; j = *(_QWORD *)(v13 + 16) )
            {
              v29 = 0x40000000000LL;
              v30 = (unsigned int)(((__int64)v26 - j) >> 3) >> 7;
              if ( v30 <= 0x1D )
                v29 = 4096LL << v30;
              v31 = *v26++;
              operator delete(v31, v29, 16);
              if ( v27 == v26 )
                break;
            }
          }
          v32 = *(__int64 **)(v13 + 64);
          v33 = &v32[2 * *(unsigned int *)(v13 + 72)];
          if ( v32 != v33 )
          {
            do
            {
              v34 = v32[1];
              v35 = *v32;
              v32 += 2;
              operator delete(v35, v34, 16);
            }
            while ( v33 != v32 );
            v33 = *(__int64 **)(v13 + 64);
          }
          if ( v33 != (__int64 *)(v13 + 80) )
            free(v33);
          v36 = *(void **)(v13 + 16);
          if ( v36 != (void *)(v13 + 32) )
            free(v36);
          operator delete((void *)v13, 0x60u);
        }
      }
      operator delete(v10, 0x70u);
    }
    result = *(void **)(a1 + 24);
  }
  v14 = *(_QWORD *)(a1 + 128);
  *(_BYTE *)(a1 + 121) = 1;
  if ( v14 )
  {
    if ( result )
    {
      sub_986310((__int64)result, v14);
      result = *(void **)(a1 + 24);
    }
  }
  *(_QWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 96) = v3;
  return result;
}
