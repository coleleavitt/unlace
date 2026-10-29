const __m128i *__fastcall sub_16B7C80(const __m128i *a1, const __m128i *a2, const __m128i *a3)
{
  __int8 *v3; // r11
  signed __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  const __m128i *v7; // rcx
  const __m128i *v8; // rsi
  __int64 v9; // r8
  __m128i v10; // xmm5
  __m128i v11; // xmm3
  __m128i v12; // xmm4
  __m128i v13; // xmm2
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __m128i *v17; // rcx
  __m128i *v18; // rsi
  __int64 v19; // r8
  __m128i v20; // xmm3
  __m128i v21; // xmm5
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __int64 v25; // rdx
  const __m128i *v27; // rdx
  const __m128i *v28; // rax
  __m128i v29; // xmm7
  __m128i v30; // xmm3
  __m128i v31; // xmm6
  __m128i v32; // xmm2
  __m128i v33; // xmm1
  __m128i v34; // xmm0
  __int64 v35; // rcx

  if ( a1 == a2 )
    return a3;
  if ( a2 == a3 )
    return a1;
  v3 = &a1->m128i_i8[(char *)a3 - (char *)a2];
  v4 = 0xCCCCCCCCCCCCCCCDLL * (a3 - a1);
  v5 = 0xCCCCCCCCCCCCCCCDLL * (a2 - a1);
  if ( v5 == v4 - v5 )
  {
    v27 = a2;
    v28 = a1;
    do
    {
      v29 = _mm_loadu_si128(v27);
      v30 = _mm_loadu_si128(v28);
      v28 += 5;
      v27 += 5;
      v31 = _mm_loadu_si128(v28 - 1);
      v32 = _mm_loadu_si128(v28 - 4);
      v28[-5] = v29;
      v33 = _mm_loadu_si128(v28 - 3);
      v34 = _mm_loadu_si128(v28 - 2);
      v35 = v28[-1].m128i_i64[0];
      v28[-4] = _mm_loadu_si128(v27 - 4);
      v28[-3] = _mm_loadu_si128(v27 - 3);
      v28[-2] = _mm_loadu_si128(v27 - 2);
      v28[-1].m128i_i64[0] = v27[-1].m128i_i64[0];
      v28[-1].m128i_i32[2] = v27[-1].m128i_i32[2];
      v27[-1].m128i_i64[0] = v35;
      v27[-5] = v30;
      v27[-4] = v32;
      v27[-3] = v33;
      v27[-2] = v34;
      v27[-1].m128i_i32[2] = v31.m128i_i32[2];
    }
    while ( a2 != v28 );
    return &a1[5
             * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)((char *)&a2[-5] - (char *)a1) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
             + 5];
  }
  else
  {
    v6 = v4 - v5;
    if ( v5 >= v4 - v5 )
      goto LABEL_12;
    while ( 1 )
    {
      v7 = &a1[5 * v5];
      if ( v6 > 0 )
      {
        v8 = a1;
        v9 = 0;
        do
        {
          v10 = _mm_loadu_si128(v7);
          v11 = _mm_loadu_si128(v8);
          ++v9;
          v8 += 5;
          v12 = _mm_loadu_si128(v8 - 1);
          v13 = _mm_loadu_si128(v8 - 4);
          v7 += 5;
          v8[-5] = v10;
          v14 = _mm_loadu_si128(v8 - 3);
          v15 = _mm_loadu_si128(v8 - 2);
          v16 = v8[-1].m128i_i64[0];
          v8[-4] = _mm_loadu_si128(v7 - 4);
          v8[-3] = _mm_loadu_si128(v7 - 3);
          v8[-2] = _mm_loadu_si128(v7 - 2);
          v8[-1].m128i_i64[0] = v7[-1].m128i_i64[0];
          v8[-1].m128i_i32[2] = v7[-1].m128i_i32[2];
          v7[-1].m128i_i64[0] = v16;
          v7[-5] = v11;
          v7[-4] = v13;
          v7[-3] = v14;
          v7[-2] = v15;
          v7[-1].m128i_i32[2] = v12.m128i_i32[2];
        }
        while ( v6 != v9 );
        a1 += 5 * v6;
      }
      if ( !(v4 % v5) )
        break;
      v6 = v5;
      v5 -= v4 % v5;
      while ( 1 )
      {
        v4 = v6;
        v6 -= v5;
        if ( v5 < v6 )
          break;
LABEL_12:
        v17 = (__m128i *)&a1[5 * v4];
        a1 = &v17[-5 * v6];
        if ( v5 > 0 )
        {
          v18 = &v17[-5 * v6];
          v19 = 0;
          do
          {
            v17 -= 5;
            v18 -= 5;
            v20 = _mm_loadu_si128(v18);
            v21 = _mm_loadu_si128(v18 + 4);
            v22 = _mm_loadu_si128(v18 + 1);
            ++v19;
            *v18 = _mm_loadu_si128(v17);
            v23 = _mm_loadu_si128(v18 + 2);
            v24 = _mm_loadu_si128(v18 + 3);
            v25 = v18[4].m128i_i64[0];
            v18[1] = _mm_loadu_si128(v17 + 1);
            v18[2] = _mm_loadu_si128(v17 + 2);
            v18[3] = _mm_loadu_si128(v17 + 3);
            v18[4].m128i_i64[0] = v17[4].m128i_i64[0];
            v18[4].m128i_i32[2] = v17[4].m128i_i32[2];
            v17[4].m128i_i64[0] = v25;
            *v17 = v20;
            v17[1] = v22;
            v17[2] = v23;
            v17[3] = v24;
            v17[4].m128i_i32[2] = v21.m128i_i32[2];
          }
          while ( v5 != v19 );
          a1 -= 5 * v5;
        }
        v5 = v4 % v6;
        if ( !(v4 % v6) )
          return (const __m128i *)v3;
      }
    }
    return (const __m128i *)v3;
  }
}
