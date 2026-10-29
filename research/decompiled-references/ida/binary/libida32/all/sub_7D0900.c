unsigned __int64 __fastcall sub_7D0900(const __m128i *a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v6; // r10
  unsigned __int64 v7; // rax
  signed __int64 v8; // rdi
  __int64 v9; // r8
  const __m128i *v10; // rcx
  const __m128i *v11; // rsi
  __int64 v12; // rdx
  __m128i v13; // xmm1
  __int64 v14; // r9
  __m128i v15; // xmm0
  __int64 *v16; // rcx
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r9
  __m128i v20; // xmm0
  const __m128i *v22; // rdx
  const __m128i *v23; // rax
  __m128i v24; // xmm1
  __int64 v25; // rcx
  __m128i v26; // xmm0

  if ( a1 == a2 )
    return (unsigned __int64)a3;
  if ( a2 == a3 )
    return (unsigned __int64)a1;
  v6 = a1;
  v7 = 0xAAAAAAAAAAAAAAABLL * (((char *)a3 - (char *)a1) >> 3);
  v8 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 3);
  if ( v8 == v7 - v8 )
  {
    v22 = a2;
    v23 = a1;
    do
    {
      v24 = _mm_loadu_si128(v22);
      v25 = v23->m128i_i64[0];
      v23 = (const __m128i *)((char *)v23 + 24);
      v22 = (const __m128i *)((char *)v22 + 24);
      v26 = _mm_loadu_si128(v23 - 1);
      *(__m128i *)((char *)v23 - 24) = v24;
      v23[-1].m128i_i64[1] = v22[-1].m128i_i64[1];
      v22[-2].m128i_i64[1] = v25;
      v22[-1] = v26;
    }
    while ( a2 != v23 );
    return (unsigned __int64)&a1[1].m128i_u64[1] + (((char *)&a2[-2].m128i_u64[1] - (char *)a1) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v9 = v7 - v8;
    if ( v8 >= (__int64)(v7 - v8) )
      goto LABEL_12;
    while ( 1 )
    {
      v10 = (const __m128i *)((char *)v6 + 24 * v8);
      if ( v9 > 0 )
      {
        v11 = v6;
        v12 = 0;
        do
        {
          v13 = _mm_loadu_si128(v10);
          v14 = v11->m128i_i64[0];
          ++v12;
          v11 = (const __m128i *)((char *)v11 + 24);
          v15 = _mm_loadu_si128(v11 - 1);
          v10 = (const __m128i *)((char *)v10 + 24);
          *(__m128i *)((char *)v11 - 24) = v13;
          v11[-1].m128i_i64[1] = v10[-1].m128i_i64[1];
          v10[-2].m128i_i64[1] = v14;
          v10[-1] = v15;
        }
        while ( v9 != v12 );
        v6 = (const __m128i *)((char *)v6 + 24 * v9);
      }
      if ( !(v7 % v8) )
        break;
      v9 = v8;
      v8 -= v7 % v8;
      while ( 1 )
      {
        v7 = v9;
        v9 -= v8;
        if ( v8 < v9 )
          break;
LABEL_12:
        v16 = &v6->m128i_i64[3 * v7];
        v6 = (const __m128i *)&v16[-3 * v9];
        if ( v8 > 0 )
        {
          v17 = &v16[-3 * v9];
          v18 = 0;
          do
          {
            v19 = *(v17 - 3);
            ++v18;
            v17 -= 3;
            v16 -= 3;
            v20 = _mm_loadu_si128((const __m128i *)(v17 + 1));
            *(__m128i *)v17 = _mm_loadu_si128((const __m128i *)v16);
            v17[2] = v16[2];
            *v16 = v19;
            *(__m128i *)(v16 + 1) = v20;
          }
          while ( v8 != v18 );
          v6 = (const __m128i *)((char *)v6 - 24 * v8);
        }
        v8 = v7 % v9;
        if ( !(v7 % v9) )
          return (unsigned __int64)a1 + (char *)a3 - (char *)a2;
      }
    }
    return (unsigned __int64)a1 + (char *)a3 - (char *)a2;
  }
}

