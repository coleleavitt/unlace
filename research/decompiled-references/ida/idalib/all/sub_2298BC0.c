__m128i *__fastcall sub_2298BC0(__m128i *a1, const void *a2, size_t a3)
{
  const __m128i *v3; // rbx
  const __m128i *v6; // rbp
  const void *v7; // rsi
  __m128i si128; // xmm0
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm3
  __m128i v12; // xmm4
  __m128i v13; // xmm5
  __m128i v14; // xmm6
  const __m128i *v16; // rax

  if ( a3 )
  {
    v3 = (const __m128i *)&off_2B414A0;
    while ( 1 )
    {
      v6 = v3;
      if ( a3 == v3[5].m128i_i64[1] )
      {
        if ( !memcmp(a2, (const void *)v3[5].m128i_i64[0], a3) )
          goto LABEL_10;
        v7 = (const void *)v3[6].m128i_i64[0];
        if ( a3 != v3[6].m128i_i64[1] )
          goto LABEL_6;
      }
      else
      {
        v7 = (const void *)v3[6].m128i_i64[0];
        if ( v3[6].m128i_i64[1] != a3 )
          goto LABEL_6;
      }
      if ( !memcmp(a2, v7, a3) )
        goto LABEL_10;
LABEL_6:
      v3 += 7;
      if ( v3 == (const __m128i *)&unk_2B44FB0 )
        goto LABEL_7;
    }
  }
  v16 = (const __m128i *)&off_2B414A0;
  while ( 1 )
  {
    v6 = v16;
    if ( !v16[5].m128i_i64[1] || !v16[6].m128i_i64[1] )
      break;
    v16 += 7;
    if ( v16 == (const __m128i *)&unk_2B44FB0 )
    {
LABEL_7:
      a1[7].m128i_i64[0] = 0;
      return a1;
    }
  }
LABEL_10:
  si128 = _mm_load_si128(v6);
  v9 = _mm_load_si128(v6 + 1);
  a1[7].m128i_i8[0] = 1;
  v10 = _mm_load_si128(v6 + 2);
  v11 = _mm_load_si128(v6 + 3);
  v12 = _mm_load_si128(v6 + 4);
  v13 = _mm_load_si128(v6 + 5);
  *a1 = si128;
  v14 = _mm_load_si128(v6 + 6);
  a1[1] = v9;
  a1[2] = v10;
  a1[3] = v11;
  a1[4] = v12;
  a1[5] = v13;
  a1[6] = v14;
  return a1;
}
