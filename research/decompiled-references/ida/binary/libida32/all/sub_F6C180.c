__m128i *__fastcall sub_F6C180(
        __m128i *a1,
        __m128i *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7)
{
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rcx
  const __m128i *v14; // rdx
  const __m128i *v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __m128i *result; // rax
  __m128i v21; // xmm6
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rsi
  const __m128i *v25; // rdx
  const __m128i *v26; // rax
  __m128i v27; // xmm1
  __int64 v28; // r9
  __int64 v29; // rdi
  unsigned __int64 v30; // rcx

  if ( a4 > a5 && a5 <= a7 )
  {
    if ( !a5 )
      return a1;
    v10 = (char *)a3 - (char *)a2;
    v11 = (char *)a2 - (char *)a1;
    v12 = 0x6DB6DB6DB6DB6DB7LL * (((char *)a3 - (char *)a2) >> 3);
    v13 = 0x6DB6DB6DB6DB6DB7LL * (((char *)a2 - (char *)a1) >> 3);
    if ( v10 <= 0 )
    {
      if ( v11 <= 0 )
        return a1;
      v18 = 0;
      v17 = 0;
    }
    else
    {
      v14 = a6;
      v15 = a2;
      do
      {
        v16 = _mm_loadu_si128(v15);
        v14 = (const __m128i *)((char *)v14 + 56);
        v15 = (const __m128i *)((char *)v15 + 56);
        *(__m128i *)((char *)v14 - 56) = v16;
        *(const __m128i *)((char *)&v14[-3] + 8) = _mm_loadu_si128((const __m128i *)((char *)v15 - 40));
        *(const __m128i *)((char *)&v14[-2] + 8) = _mm_loadu_si128((const __m128i *)((char *)v15 - 24));
        v14[-1].m128i_i64[1] = v15[-1].m128i_i64[1];
        --v12;
      }
      while ( v12 );
      v17 = (char *)v14 - (char *)a6;
      v18 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v14 - (char *)a6) >> 3);
      if ( v11 <= 0 )
      {
LABEL_10:
        if ( v17 > 0 )
        {
          result = a1;
          do
          {
            v21 = _mm_loadu_si128(a6);
            result = (__m128i *)((char *)result + 56);
            a6 = (const __m128i *)((char *)a6 + 56);
            *(__m128i *)((char *)result - 56) = v21;
            *(__m128i *)((char *)result - 40) = _mm_loadu_si128((const __m128i *)((char *)a6 - 40));
            *(__m128i *)((char *)result - 24) = _mm_loadu_si128((const __m128i *)((char *)a6 - 24));
            result[-1].m128i_i64[1] = a6[-1].m128i_i64[1];
            --v18;
          }
          while ( v18 );
          return result;
        }
        return a1;
      }
    }
    v19 = -56;
    do
    {
      *(__m128i *)((char *)a3 + v19) = _mm_loadu_si128((__m128i *)((char *)a2 + v19));
      *(__m128i *)((char *)a3 + v19 + 16) = _mm_loadu_si128((__m128i *)((char *)a2 + v19 + 16));
      *(__m128i *)((char *)a3 + v19 + 32) = _mm_loadu_si128((__m128i *)((char *)a2 + v19 + 32));
      a3[3].m128i_i64[(unsigned __int64)v19 / 8] = a2[3].m128i_i64[(unsigned __int64)v19 / 8];
      v19 -= 56;
      --v13;
    }
    while ( v13 );
    goto LABEL_10;
  }
  if ( a4 > a7 )
  {
    sub_F6BF00(a1, a2, a3);
    return (__m128i *)((char *)a1 + (char *)a3 - (char *)a2);
  }
  if ( !a4 )
    return a3;
  v22 = (char *)a3 - (char *)a2;
  v23 = 0x6DB6DB6DB6DB6DB7LL * (((char *)a2 - (char *)a1) >> 3);
  v24 = 0x6DB6DB6DB6DB6DB7LL * (((char *)a3 - (char *)a2) >> 3);
  if ( (char *)a2 - (char *)a1 <= 0 )
  {
    if ( v22 <= 0 )
      return a3;
    v25 = a6;
    v29 = 0;
    v28 = 0;
    goto LABEL_20;
  }
  v25 = a6;
  v26 = a1;
  do
  {
    v27 = _mm_loadu_si128(v26);
    v25 = (const __m128i *)((char *)v25 + 56);
    v26 = (const __m128i *)((char *)v26 + 56);
    *(__m128i *)((char *)v25 - 56) = v27;
    *(const __m128i *)((char *)&v25[-3] + 8) = _mm_loadu_si128((const __m128i *)((char *)v26 - 40));
    *(const __m128i *)((char *)&v25[-2] + 8) = _mm_loadu_si128((const __m128i *)((char *)v26 - 24));
    v25[-1].m128i_i64[1] = v26[-1].m128i_i64[1];
    --v23;
  }
  while ( v23 );
  v28 = (char *)v25 - (char *)a6;
  v29 = 0x6DB6DB6DB6DB6DB7LL * (v28 >> 3);
  if ( v22 > 0 )
  {
LABEL_20:
    v30 = 0;
    do
    {
      *(__m128i *)((char *)a1 + v30) = _mm_loadu_si128((__m128i *)((char *)a2 + v30));
      *(__m128i *)((char *)a1 + v30 + 16) = _mm_loadu_si128((__m128i *)((char *)a2 + v30 + 16));
      *(__m128i *)((char *)a1 + v30 + 32) = _mm_loadu_si128((__m128i *)((char *)a2 + v30 + 32));
      a1[3].m128i_i64[v30 / 8] = a2[3].m128i_i64[v30 / 8];
      v30 += 56LL;
      --v24;
    }
    while ( v24 );
  }
  if ( v28 <= 0 )
    return a3;
  result = a3;
  do
  {
    v25 = (const __m128i *)((char *)v25 - 56);
    result = (__m128i *)((char *)result - 56);
    *result = _mm_loadu_si128(v25);
    result[1] = _mm_loadu_si128(v25 + 1);
    result[2] = _mm_loadu_si128(v25 + 2);
    result[3].m128i_i64[0] = v25[3].m128i_i64[0];
    --v29;
  }
  while ( v29 );
  return result;
}

