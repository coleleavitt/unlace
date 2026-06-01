_QWORD *__fastcall sub_7F2A40(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  __int128 v3; // xmm0
  unsigned __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 i; // rbx
  __int64 v10; // rbx
  const __m128i *v11; // rcx
  __m128i v12; // xmm1
  const __m128i *v13; // r13
  void *v14; // rax
  void *v15; // rax
  size_t na; // [rsp+8h] [rbp-50h]
  size_t n; // [rsp+8h] [rbp-50h]

  if ( a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 24);
  v3 = 0;
  v4 = a1[1];
  if ( v4 < a2 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *a1 + 24 * v4;
        *(_QWORD *)v5 = 0;
        *(_OWORD *)(v5 + 8) = v3;
        v6 = a3[1];
        if ( v6 )
          break;
        if ( a2 == ++v4 )
          goto LABEL_15;
      }
      v7 = 0;
      v8 = qalloc_or_throw(80 * v6);
      *(_QWORD *)(v5 + 16) = v6;
      v3 = 0;
      *(_QWORD *)v5 = v8;
      for ( i = v8; ; i = *(_QWORD *)v5 )
      {
        v10 = 80 * v7 + i;
        v11 = (const __m128i *)(*a3 + 80 * v7);
        v12 = _mm_loadu_si128(v11);
        *(_QWORD *)(v10 + 16) = 0;
        v13 = v11;
        *(_OWORD *)(v10 + 24) = v3;
        *(__m128i *)v10 = v12;
        if ( v11[1].m128i_i64[1] )
        {
          na = v11[1].m128i_u64[1];
          v14 = (void *)qalloc_or_throw(na);
          *(_QWORD *)(v10 + 16) = v14;
          *(_QWORD *)(v10 + 32) = na;
          memcpy(v14, (const void *)v13[1].m128i_i64[0], na);
          v3 = 0;
          *(_QWORD *)(v10 + 24) = na;
        }
        *(_QWORD *)(v10 + 40) = 0;
        *(_OWORD *)(v10 + 48) = v3;
        if ( v13[3].m128i_i64[0] )
        {
          n = v13[3].m128i_u64[0];
          v15 = (void *)qalloc_or_throw(n);
          *(_QWORD *)(v10 + 40) = v15;
          *(_QWORD *)(v10 + 56) = n;
          memcpy(v15, (const void *)v13[2].m128i_i64[1], n);
          v3 = 0;
          *(_QWORD *)(v10 + 48) = n;
        }
        ++v7;
        *(_QWORD *)(v10 + 64) = v13[4].m128i_i64[0];
        *(_QWORD *)(v10 + 72) = v13[4].m128i_i64[1];
        if ( v6 == v7 )
          break;
      }
      *(_QWORD *)(v5 + 8) = v6;
      ++v4;
    }
    while ( a2 != v4 );
  }
LABEL_15:
  a1[1] = a2;
  return a1;
}
