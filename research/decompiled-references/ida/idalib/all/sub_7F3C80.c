unsigned __int64 __fastcall sub_7F3C80(const __m128i *a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v6; // r10
  signed __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  const __m128i *v10; // rdx
  const __m128i *v11; // rcx
  __int64 v12; // rdi
  __m128i v13; // xmm2
  __int64 v14; // r9
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __int64 *v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r9
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  const __m128i *v24; // rdx
  const __m128i *v25; // rax
  __m128i v26; // xmm2
  __int64 v27; // rcx
  __m128i v28; // xmm1
  __m128i v29; // xmm0

  if ( a1 == a2 )
    return (unsigned __int64)a3;
  if ( a2 == a3 )
    return (unsigned __int64)a1;
  v6 = a1;
  v7 = 0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)a1) >> 3);
  v8 = 0xCCCCCCCCCCCCCCCDLL * (((char *)a3 - (char *)a1) >> 3);
  if ( v7 == v8 - v7 )
  {
    v24 = a2;
    v25 = a1;
    do
    {
      v26 = _mm_loadu_si128(v24);
      v27 = v25->m128i_i64[0];
      v25 = (const __m128i *)((char *)v25 + 40);
      v24 = (const __m128i *)((char *)v24 + 40);
      v28 = _mm_loadu_si128(v25 - 2);
      v29 = _mm_loadu_si128(v25 - 1);
      *(__m128i *)((char *)v25 - 40) = v26;
      *(const __m128i *)((char *)&v25[-2] + 8) = _mm_loadu_si128((const __m128i *)((char *)v24 - 24));
      v25[-1].m128i_i64[1] = v24[-1].m128i_i64[1];
      v24[-3].m128i_i64[1] = v27;
      v24[-2] = v28;
      v24[-1] = v29;
    }
    while ( a2 != v25 );
    return (unsigned __int64)&a1[2].m128i_u64[1] + (((char *)&a2[-3].m128i_u64[1] - (char *)a1) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v9 = v8 - v7;
    if ( v7 >= (__int64)(v8 - v7) )
      goto LABEL_12;
    while ( 1 )
    {
      v10 = (const __m128i *)((char *)v6 + 40 * v7);
      if ( v9 > 0 )
      {
        v11 = v6;
        v12 = 0;
        do
        {
          v13 = _mm_loadu_si128(v10);
          v14 = v11->m128i_i64[0];
          ++v12;
          v11 = (const __m128i *)((char *)v11 + 40);
          v15 = _mm_loadu_si128(v11 - 2);
          v16 = _mm_loadu_si128(v11 - 1);
          v10 = (const __m128i *)((char *)v10 + 40);
          *(__m128i *)((char *)v11 - 40) = v13;
          *(const __m128i *)((char *)&v11[-2] + 8) = _mm_loadu_si128((const __m128i *)((char *)v10 - 24));
          v11[-1].m128i_i64[1] = v10[-1].m128i_i64[1];
          v10[-3].m128i_i64[1] = v14;
          v10[-2] = v15;
          v10[-1] = v16;
        }
        while ( v9 != v12 );
        v6 = (const __m128i *)((char *)v6 + 40 * v9);
      }
      if ( !(v8 % v7) )
        break;
      v9 = v7;
      v7 -= v8 % v7;
      while ( 1 )
      {
        v8 = v9;
        v9 -= v7;
        if ( v7 < v9 )
          break;
LABEL_12:
        v17 = &v6->m128i_i64[5 * v8];
        v6 = (const __m128i *)&v17[-5 * v9];
        if ( v7 > 0 )
        {
          v18 = &v17[-5 * v9];
          v19 = 0;
          do
          {
            v20 = *(v18 - 5);
            ++v19;
            v18 -= 5;
            v17 -= 5;
            v21 = _mm_loadu_si128((const __m128i *)(v18 + 1));
            v22 = _mm_loadu_si128((const __m128i *)(v18 + 3));
            *(__m128i *)v18 = _mm_loadu_si128((const __m128i *)v17);
            *((__m128i *)v18 + 1) = _mm_loadu_si128((const __m128i *)v17 + 1);
            v18[4] = v17[4];
            *v17 = v20;
            *(__m128i *)(v17 + 1) = v21;
            *(__m128i *)(v17 + 3) = v22;
          }
          while ( v7 != v19 );
          v6 = (const __m128i *)((char *)v6 - 40 * v7);
        }
        v7 = v8 % v9;
        if ( !(v8 % v9) )
          return (unsigned __int64)a1 + (char *)a3 - (char *)a2;
      }
    }
    return (unsigned __int64)a1 + (char *)a3 - (char *)a2;
  }
}
