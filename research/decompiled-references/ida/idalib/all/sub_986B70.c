void *__fastcall sub_986B70(__int64 a1)
{
  void *result; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbp
  void *v6; // rdi
  __int64 v7; // r12
  unsigned __int64 v8; // r12
  _QWORD *v9; // rbp
  void *v10; // rdi
  __int64 v11; // r12
  unsigned __int64 v12; // r12
  __int64 v13; // rsi
  __int64 *v14; // r15
  __int64 *v15; // r13
  __int64 j; // rax
  __int64 v17; // rsi
  unsigned int v18; // ecx
  __int64 v19; // rdi
  __int64 *v20; // r13
  __int64 *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdi
  void *v24; // rdi
  __int64 *v25; // r15
  __int64 *v26; // r13
  __int64 i; // rax
  __int64 v28; // rsi
  unsigned int v29; // ecx
  __int64 v30; // rdi
  __int64 *v31; // r13
  __int64 *v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rdi
  void *v35; // rdi
  void *v36[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( !*(_BYTE *)(a1 + 96) )
    return sub_986440(a1);
  if ( *(_BYTE *)(a1 + 120) )
    return *(void **)(a1 + 16);
  v3 = sub_B8C330(*(_QWORD *)(a1 + 8));
  v4 = sub_984530((__int64 *)a1, v36);
  sub_9A66D0(v36, *(_QWORD *)(a1 + 8), v4, v3, a1 + 40);
  result = v36[0];
  v5 = *(_QWORD *)(a1 + 16);
  v36[0] = nullptr;
  *(_QWORD *)(a1 + 16) = result;
  if ( v5 )
  {
    operator delete(*(_QWORD *)(v5 + 88), 16LL * *(unsigned int *)(v5 + 104), 8);
    v6 = *(void **)(v5 + 64);
    if ( v6 )
      operator delete(v6);
    v7 = *(_QWORD *)(v5 + 32);
    if ( (v7 & 4) != 0 )
    {
      v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v8 )
      {
        v25 = *(__int64 **)(v8 + 16);
        v26 = &v25[*(unsigned int *)(v8 + 24)];
        if ( v25 != v26 )
        {
          for ( i = *(_QWORD *)(v8 + 16); ; i = *(_QWORD *)(v8 + 16) )
          {
            v28 = 0x40000000000LL;
            v29 = (unsigned int)(((__int64)v25 - i) >> 3) >> 7;
            if ( v29 <= 0x1D )
              v28 = 4096LL << v29;
            v30 = *v25++;
            operator delete(v30, v28, 16);
            if ( v26 == v25 )
              break;
          }
        }
        v31 = *(__int64 **)(v8 + 64);
        v32 = &v31[2 * *(unsigned int *)(v8 + 72)];
        if ( v31 != v32 )
        {
          do
          {
            v33 = v31[1];
            v34 = *v31;
            v31 += 2;
            operator delete(v34, v33, 16);
          }
          while ( v32 != v31 );
          v32 = *(__int64 **)(v8 + 64);
        }
        if ( v32 != (__int64 *)(v8 + 80) )
          free(v32);
        v35 = *(void **)(v8 + 16);
        if ( v35 != (void *)(v8 + 32) )
          free(v35);
        operator delete((void *)v8, 0x60u);
      }
    }
    operator delete((void *)v5, 0x70u);
    v9 = v36[0];
    if ( v36[0] )
    {
      operator delete(*((_QWORD *)v36[0] + 11), 16LL * *((unsigned int *)v36[0] + 26), 8);
      v10 = (void *)v9[8];
      if ( v10 )
        operator delete(v10);
      v11 = v9[4];
      if ( (v11 & 4) != 0 )
      {
        v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v12 )
        {
          v14 = *(__int64 **)(v12 + 16);
          v15 = &v14[*(unsigned int *)(v12 + 24)];
          if ( v14 != v15 )
          {
            for ( j = *(_QWORD *)(v12 + 16); ; j = *(_QWORD *)(v12 + 16) )
            {
              v17 = 0x40000000000LL;
              v18 = (unsigned int)(((__int64)v14 - j) >> 3) >> 7;
              if ( v18 <= 0x1D )
                v17 = 4096LL << v18;
              v19 = *v14++;
              operator delete(v19, v17, 16);
              if ( v15 == v14 )
                break;
            }
          }
          v20 = *(__int64 **)(v12 + 64);
          v21 = &v20[2 * *(unsigned int *)(v12 + 72)];
          if ( v20 != v21 )
          {
            do
            {
              v22 = v20[1];
              v23 = *v20;
              v20 += 2;
              operator delete(v23, v22, 16);
            }
            while ( v21 != v20 );
            v21 = *(__int64 **)(v12 + 64);
          }
          if ( v21 != (__int64 *)(v12 + 80) )
            free(v21);
          v24 = *(void **)(v12 + 16);
          if ( v24 != (void *)(v12 + 32) )
            free(v24);
          operator delete((void *)v12, 0x60u);
        }
      }
      operator delete(v9, 0x70u);
    }
    result = *(void **)(a1 + 16);
  }
  v13 = *(_QWORD *)(a1 + 128);
  *(_BYTE *)(a1 + 120) = 1;
  if ( v13 )
  {
    if ( result )
    {
      sub_986310((__int64)result, v13);
      result = *(void **)(a1 + 16);
    }
  }
  *(_QWORD *)(a1 + 88) = 0;
  return result;
}
