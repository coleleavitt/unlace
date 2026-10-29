__m128i *__fastcall sub_2298AD0(__m128i *a1, const void *a2, size_t a3)
{
  _UNKNOWN **v3; // rbx
  __m128i si128; // xmm0
  __m128i v6; // xmm1
  __m128i v8; // xmm2
  __m128i v9; // xmm3
  __m128i v10; // xmm4
  __m128i v11; // xmm5
  __m128i v12; // xmm6

  if ( a3 )
  {
    v3 = &off_2B414A0;
    while ( ((_UNKNOWN *)a3 != v3[1] || memcmp(a2, *v3, a3))
         && (!*((_BYTE *)v3 + 32) || (_UNKNOWN *)a3 != v3[3] || memcmp(a2, v3[2], a3)) )
    {
      v3 += 14;
      if ( &unk_2B44FB0 == (_UNKNOWN *)v3 )
        goto LABEL_10;
    }
    si128 = _mm_load_si128((const __m128i *)v3);
    v6 = _mm_load_si128((const __m128i *)v3 + 1);
    a1[7].m128i_i8[0] = 1;
    v8 = _mm_load_si128((const __m128i *)v3 + 2);
    v9 = _mm_load_si128((const __m128i *)v3 + 3);
    v10 = _mm_load_si128((const __m128i *)v3 + 4);
    v11 = _mm_load_si128((const __m128i *)v3 + 5);
    *a1 = si128;
    v12 = _mm_load_si128((const __m128i *)v3 + 6);
    a1[1] = v6;
    a1[2] = v8;
    a1[3] = v9;
    a1[4] = v10;
    a1[5] = v11;
    a1[6] = v12;
    return a1;
  }
  else
  {
LABEL_10:
    a1[7].m128i_i64[0] = 0;
    return a1;
  }
}
