void __fastcall sub_C790(size_t *a1, size_t a2, __int64 a3)
{
  size_t v6; // rbx
  size_t v7; // rbp
  __int128 v8; // xmm0
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r15
  void *v12; // rax
  void *v13; // rax
  __int64 v14; // rax
  size_t v15; // rsi
  size_t v16; // rbp
  size_t v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // r15
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __int64 v25; // rdi
  size_t n; // [rsp+0h] [rbp-48h]

  v6 = a1[2];
  if ( v6 < a2 )
  {
    v14 = qvector_reserve(a1, 0, a2, 48);
    v15 = a1[2];
    v16 = a1[1];
    a1[2] = v6;
    n = v14;
    v17 = *a1;
    v18 = v16 - 1;
    if ( v18 >= 0 )
    {
      v19 = v14;
      v20 = 0;
      do
      {
        v21 = *(_QWORD *)v17;
        v22 = _mm_loadu_si128((const __m128i *)(v17 + 8));
        *(_QWORD *)v17 = 0;
        *(_OWORD *)(v17 + 8) = v20;
        *(_QWORD *)v19 = v21;
        *(__m128i *)(v19 + 8) = v22;
        v23 = *(_QWORD *)(v17 + 24);
        v24 = _mm_loadu_si128((const __m128i *)(v17 + 32));
        *(_QWORD *)(v17 + 24) = 0;
        *(_QWORD *)(v19 + 24) = v23;
        *(__m128i *)(v19 + 32) = v24;
        v25 = *(_QWORD *)v17;
        *(_QWORD *)(v17 + 40) = 0;
        if ( v25 )
        {
          *(_QWORD *)(v17 + 8) = 0;
          qfree(v25);
          v20 = 0;
        }
        v17 += 48LL;
        v19 += 48;
      }
      while ( v18-- != 0 );
      v17 = *a1;
    }
    qfree(v17);
    *a1 = n;
    a1[2] = v15;
  }
  v7 = a1[1];
  if ( v7 < a2 )
  {
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v10 = *a1 + 48 * v7;
        *(_QWORD *)v10 = 0;
        *(_OWORD *)(v10 + 8) = v8;
        v11 = *(_QWORD *)(a3 + 8);
        if ( v11 )
        {
          v12 = (void *)qalloc_or_throw(8 * v11);
          *(_QWORD *)(v10 + 16) = v11;
          *(_QWORD *)v10 = v12;
          memcpy(v12, *(const void **)a3, 8 * v11);
          *(_QWORD *)(v10 + 8) = v11;
          v8 = 0;
        }
        *(_QWORD *)(v10 + 24) = 0;
        *(_OWORD *)(v10 + 32) = v8;
        v9 = *(_QWORD *)(a3 + 32);
        if ( v9 )
          break;
        if ( a2 == ++v7 )
          goto LABEL_9;
      }
      v13 = (void *)qalloc_or_throw(8 * v9);
      *(_QWORD *)(v10 + 24) = v13;
      ++v7;
      *(_QWORD *)(v10 + 40) = v9;
      memcpy(v13, *(const void **)(a3 + 24), 8 * v9);
      *(_QWORD *)(v10 + 32) = v9;
      v8 = 0;
    }
    while ( a2 != v7 );
  }
LABEL_9:
  a1[1] = a2;
}
