void __fastcall sub_406110(size_t *a1, size_t a2, __int64 a3)
{
  size_t v6; // rbx
  size_t v7; // r12
  __int64 v8; // r15
  __m128i v9; // xmm0
  __int64 v10; // rbx
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  __int64 v14; // rax
  size_t v15; // rsi
  size_t v16; // r12
  size_t v17; // rbx
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __m128i v25; // xmm0
  void *v26; // rdi
  void *v27; // rdi
  size_t nb; // [rsp+0h] [rbp-48h]
  size_t nc; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+0h] [rbp-48h]
  size_t n; // [rsp+0h] [rbp-48h]

  v6 = a1[2];
  if ( v6 < a2 )
  {
    v14 = qvector_reserve(a1, 0, a2, 88);
    v15 = a1[2];
    v16 = a1[1];
    a1[2] = v6;
    n = v14;
    v17 = *a1;
    v18 = v16 - 1;
    if ( v18 >= 0 )
    {
      v19 = v14;
      do
      {
        *(__m128i *)v19 = _mm_loadu_si128((const __m128i *)v17);
        v20 = *(_QWORD *)(v17 + 16);
        v21 = _mm_loadu_si128((const __m128i *)(v17 + 24));
        *(_QWORD *)(v17 + 16) = 0;
        *(_QWORD *)(v19 + 16) = v20;
        *(__m128i *)(v19 + 24) = v21;
        v22 = *(_QWORD *)(v17 + 40);
        v23 = _mm_loadu_si128((const __m128i *)(v17 + 48));
        *(_OWORD *)(v17 + 24) = 0;
        *(_QWORD *)(v19 + 40) = v22;
        *(__m128i *)(v19 + 48) = v23;
        v24 = *(_QWORD *)(v17 + 64);
        v25 = _mm_loadu_si128((const __m128i *)(v17 + 72));
        *(_QWORD *)(v17 + 40) = 0;
        *(_OWORD *)(v17 + 48) = 0;
        *(_QWORD *)(v19 + 64) = v24;
        *(__m128i *)(v19 + 72) = v25;
        v26 = *(void **)(v17 + 40);
        *(_QWORD *)(v17 + 64) = 0;
        *(_QWORD *)(v17 + 80) = 0;
        if ( v26 )
        {
          *(_QWORD *)(v17 + 48) = 0;
          qfree(v26);
        }
        v27 = *(void **)(v17 + 16);
        if ( v27 )
        {
          *(_QWORD *)(v17 + 24) = 0;
          qfree(v27);
        }
        v17 += 88LL;
        v19 += 88;
      }
      while ( v18-- != 0 );
      v17 = *a1;
    }
    qfree((void *)v17);
    *a1 = n;
    a1[2] = v15;
  }
  v7 = a1[1];
  if ( v7 < a2 )
  {
    v8 = 88 * v7;
    do
    {
      while ( 1 )
      {
        v9 = _mm_loadu_si128((const __m128i *)a3);
        v10 = v8 + *a1;
        *(_QWORD *)(v10 + 16) = 0;
        *(__m128i *)v10 = v9;
        *(_OWORD *)(v10 + 24) = 0;
        if ( *(_QWORD *)(a3 + 24) )
        {
          nb = *(_QWORD *)(a3 + 24);
          v11 = (void *)qalloc_or_throw(nb);
          *(_QWORD *)(v10 + 16) = v11;
          *(_QWORD *)(v10 + 32) = nb;
          memcpy(v11, *(const void **)(a3 + 16), nb);
          *(_QWORD *)(v10 + 24) = nb;
        }
        *(_QWORD *)(v10 + 40) = 0;
        *(_OWORD *)(v10 + 48) = 0;
        if ( *(_QWORD *)(a3 + 48) )
        {
          na = *(_QWORD *)(a3 + 48);
          v13 = (void *)qalloc_or_throw(na);
          *(_QWORD *)(v10 + 40) = v13;
          *(_QWORD *)(v10 + 56) = na;
          memcpy(v13, *(const void **)(a3 + 40), na);
          *(_QWORD *)(v10 + 48) = na;
        }
        *(_QWORD *)(v10 + 64) = 0;
        *(_OWORD *)(v10 + 72) = 0;
        if ( *(_QWORD *)(a3 + 72) )
          break;
        ++v7;
        v8 += 88;
        if ( a2 == v7 )
          goto LABEL_11;
      }
      nc = *(_QWORD *)(a3 + 72);
      v12 = (void *)qalloc_or_throw(nc);
      *(_QWORD *)(v10 + 64) = v12;
      ++v7;
      v8 += 88;
      *(_QWORD *)(v10 + 80) = nc;
      memcpy(v12, *(const void **)(a3 + 64), nc);
      *(_QWORD *)(v10 + 72) = nc;
    }
    while ( a2 != v7 );
  }
LABEL_11:
  a1[1] = a2;
}
