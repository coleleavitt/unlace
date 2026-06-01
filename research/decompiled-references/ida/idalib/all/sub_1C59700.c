__m128i *__fastcall sub_1C59700(
        const __m128i *a1,
        const __m128i *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7)
{
  __m128i *v7; // r12
  const __m128i *v8; // rbp
  __m128i *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  const __m128i *v14; // rax
  const __m128i *v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  __m128i *result; // rax
  __m128i v22; // xmm2
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  const __m128i *v27; // rdx
  const __m128i *v28; // rax
  __m128i v29; // xmm3
  __int64 v30; // rdi
  __int64 v31; // rdi
  unsigned __int64 v32; // rsi
  __m128i v33; // xmm4
  __int64 v34; // rax
  __int64 v35; // rcx

  v7 = (__m128i *)a3;
  v8 = a2;
  v9 = (__m128i *)a1;
  if ( a4 > a5 && a5 <= a7 )
  {
    if ( !a5 )
      return v9;
    v10 = (char *)a3 - (char *)a2;
    v11 = (char *)a2 - (char *)a1;
    v12 = 0xAAAAAAAAAAAAAAABLL * (((char *)a3 - (char *)a2) >> 3);
    v13 = 0xAAAAAAAAAAAAAAABLL * (((char *)v8 - (char *)a1) >> 3);
    if ( v10 <= 0 )
    {
      if ( v11 <= 0 )
        return v9;
      v19 = 0;
      v18 = 0;
    }
    else
    {
      v14 = a6;
      v15 = v8;
      do
      {
        v16 = _mm_loadu_si128(v15);
        v17 = v15[1].m128i_i64[0];
        v14 = (const __m128i *)((char *)v14 + 24);
        v15 = (const __m128i *)((char *)v15 + 24);
        *(__m128i *)((char *)v14 - 24) = v16;
        v14[-1].m128i_i64[1] = v17;
        --v12;
      }
      while ( v12 );
      v18 = (char *)v14 - (char *)a6;
      v19 = 0xAAAAAAAAAAAAAAABLL * (v18 >> 3);
      if ( v11 <= 0 )
      {
LABEL_9:
        if ( v18 > 0 )
        {
          result = v9;
          do
          {
            v22 = _mm_loadu_si128(a6);
            v23 = a6[1].m128i_i64[0];
            result = (__m128i *)((char *)result + 24);
            a6 = (const __m128i *)((char *)a6 + 24);
            *(__m128i *)((char *)result - 24) = v22;
            result[-1].m128i_i64[1] = v23;
            --v19;
          }
          while ( v19 );
          return result;
        }
        return v9;
      }
    }
    do
    {
      v8 = (const __m128i *)((char *)v8 - 24);
      v20 = v8[1].m128i_i64[0];
      v7 = (__m128i *)((char *)v7 - 24);
      *v7 = _mm_loadu_si128(v8);
      v7[1].m128i_i64[0] = v20;
      --v13;
    }
    while ( v13 );
    goto LABEL_9;
  }
  if ( a4 > a7 )
  {
    sub_1C530D0(a1, a2, a3);
    return (__m128i *)((char *)a1 + (char *)v7 - (char *)a2);
  }
  if ( !a4 )
    return v7;
  v24 = (char *)a3 - (char *)a2;
  v25 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 3);
  v26 = 0xAAAAAAAAAAAAAAABLL * (((char *)a3 - (char *)v8) >> 3);
  if ( (char *)v8 - (char *)a1 <= 0 )
  {
    if ( v24 <= 0 )
      return v7;
    v27 = a6;
    v32 = 0;
    v31 = 0;
    goto LABEL_19;
  }
  v27 = a6;
  v28 = a1;
  do
  {
    v29 = _mm_loadu_si128(v28);
    v30 = v28[1].m128i_i64[0];
    v27 = (const __m128i *)((char *)v27 + 24);
    v28 = (const __m128i *)((char *)v28 + 24);
    *(__m128i *)((char *)v27 - 24) = v29;
    v27[-1].m128i_i64[1] = v30;
    --v25;
  }
  while ( v25 );
  v31 = (char *)v27 - (char *)a6;
  v32 = 0xAAAAAAAAAAAAAAABLL * (((char *)v27 - (char *)a6) >> 3);
  if ( v24 > 0 )
  {
    do
    {
LABEL_19:
      v33 = _mm_loadu_si128(v8);
      v34 = v8[1].m128i_i64[0];
      v9 = (__m128i *)((char *)v9 + 24);
      v8 = (const __m128i *)((char *)v8 + 24);
      *(__m128i *)((char *)v9 - 24) = v33;
      v9[-1].m128i_i64[1] = v34;
      --v26;
    }
    while ( v26 );
  }
  if ( v31 <= 0 )
    return v7;
  result = v7;
  do
  {
    v27 = (const __m128i *)((char *)v27 - 24);
    v35 = v27[1].m128i_i64[0];
    result = (__m128i *)((char *)result - 24);
    *result = _mm_loadu_si128(v27);
    result[1].m128i_i64[0] = v35;
    --v32;
  }
  while ( v32 );
  return result;
}
