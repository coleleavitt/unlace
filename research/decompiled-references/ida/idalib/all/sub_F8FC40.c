__m128i *__fastcall sub_F8FC40(__m128i *a1, __m128i *a2, __m128i *a3)
{
  __m128i *v3; // rbx
  __m128i *v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r10
  const __m128i *v9; // rcx
  const __m128i *v10; // rsi
  __int64 v11; // r8
  __m128i v12; // xmm3
  __m128i v13; // xmm2
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __int64 v16; // r9
  __m128i *v17; // rcx
  __m128i *v18; // rsi
  __int64 v19; // r8
  __m128i v20; // xmm2
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // r9
  __m128i *v25; // rbp
  __m128i *v26; // rsi
  __m128i *v27; // rdi

  if ( a1 == a2 )
    return a3;
  v3 = a1;
  v4 = a2;
  if ( a2 == a3 )
    return a1;
  v5 = (__int64)a1->m128i_i64 + (char *)a3 - (char *)a2;
  v6 = 0x6DB6DB6DB6DB6DB7LL * (((char *)a3 - (char *)a1) >> 3);
  v7 = 0x6DB6DB6DB6DB6DB7LL * (((char *)a2 - (char *)a1) >> 3);
  if ( v7 == v6 - v7 )
  {
    v25 = (__m128i *)((char *)v3
                    + 56
                    * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)((char *)&a2[-4].m128i_u64[1] - (char *)v3) >> 3))
                     & 0x1FFFFFFFFFFFFFFFLL)
                    + 56);
    do
    {
      v26 = v4;
      v27 = v3;
      v3 = (__m128i *)((char *)v3 + 56);
      v4 = (__m128i *)((char *)v4 + 56);
      sub_F8C320(v27, v26);
    }
    while ( v3 != v25 );
    return v25;
  }
  else
  {
    v8 = v6 - v7;
    if ( v7 >= v6 - v7 )
      goto LABEL_12;
    while ( 1 )
    {
      v9 = (__m128i *)((char *)v3 + 56 * v7);
      if ( v8 > 0 )
      {
        v10 = v3;
        v11 = 0;
        do
        {
          v12 = _mm_loadu_si128(v9);
          v13 = _mm_loadu_si128(v10);
          ++v11;
          v10 = (const __m128i *)((char *)v10 + 56);
          v14 = _mm_loadu_si128((const __m128i *)((char *)v10 - 40));
          v15 = _mm_loadu_si128((const __m128i *)((char *)v10 - 24));
          v9 = (const __m128i *)((char *)v9 + 56);
          *(__m128i *)((char *)v10 - 56) = v12;
          v16 = v10[-1].m128i_i64[1];
          *(const __m128i *)((char *)&v10[-3] + 8) = _mm_loadu_si128((const __m128i *)((char *)v9 - 40));
          *(const __m128i *)((char *)&v10[-2] + 8) = _mm_loadu_si128((const __m128i *)((char *)v9 - 24));
          v10[-1].m128i_i64[1] = v9[-1].m128i_i64[1];
          *(__m128i *)((char *)v9 - 56) = v13;
          *(__m128i *)((char *)v9 - 40) = v14;
          *(__m128i *)((char *)v9 - 24) = v15;
          v9[-1].m128i_i64[1] = v16;
        }
        while ( v8 != v11 );
        v3 = (__m128i *)((char *)v3 + 56 * v8);
      }
      if ( !(v6 % v7) )
        break;
      v8 = v7;
      v7 -= v6 % v7;
      while ( 1 )
      {
        v6 = v8;
        v8 -= v7;
        if ( v7 < v8 )
          break;
LABEL_12:
        v17 = (__m128i *)((char *)v3 + 56 * v6);
        v3 = (__m128i *)((char *)v17 - 56 * v8);
        if ( v7 > 0 )
        {
          v18 = (__m128i *)((char *)v17 - 56 * v8);
          v19 = 0;
          do
          {
            v17 = (__m128i *)((char *)v17 - 56);
            v18 = (__m128i *)((char *)v18 - 56);
            v20 = _mm_loadu_si128(v18);
            v21 = _mm_loadu_si128(v18 + 1);
            v22 = _mm_loadu_si128(v18 + 2);
            ++v19;
            *v18 = _mm_loadu_si128(v17);
            v23 = v18[3].m128i_i64[0];
            v18[1] = _mm_loadu_si128(v17 + 1);
            v18[2] = _mm_loadu_si128(v17 + 2);
            v18[3].m128i_i64[0] = v17[3].m128i_i64[0];
            *v17 = v20;
            v17[1] = v21;
            v17[2] = v22;
            v17[3].m128i_i64[0] = v23;
          }
          while ( v7 != v19 );
          v3 = (__m128i *)((char *)v3 - 56 * v7);
        }
        v7 = v6 % v8;
        if ( !(v6 % v8) )
          return (__m128i *)v5;
      }
    }
    return (__m128i *)v5;
  }
}
