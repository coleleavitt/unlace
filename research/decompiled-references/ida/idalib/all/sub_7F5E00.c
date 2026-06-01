__int64 __fastcall sub_7F5E00(const __m128i *src, const __m128i *a2, const __m128i *a3, const __m128i *a4, __m128i *a5)
{
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  signed __int64 v9; // rsi
  signed __int64 v10; // rbp
  __m128i *v11; // r8

  if ( a2 != src )
  {
    while ( a4 != a3 )
    {
      if ( a3->m128i_u32[1] + ((unsigned __int64)a3->m128i_u32[0] << 32) < src->m128i_u32[1]
                                                                         + ((unsigned __int64)src->m128i_u32[0] << 32) )
      {
        v7 = _mm_loadu_si128(a3);
        a5 = (__m128i *)((char *)a5 + 24);
        a3 = (const __m128i *)((char *)a3 + 24);
        *(__m128i *)((char *)a5 - 24) = v7;
        a5[-1].m128i_i64[1] = a3[-1].m128i_i64[1];
        if ( a2 == src )
          break;
      }
      else
      {
        v8 = _mm_loadu_si128(src);
        src = (const __m128i *)((char *)src + 24);
        a5 = (__m128i *)((char *)a5 + 24);
        *(__m128i *)((char *)a5 - 24) = v8;
        a5[-1].m128i_i64[1] = src[-1].m128i_i64[1];
        if ( a2 == src )
          break;
      }
    }
  }
  v9 = (char *)a2 - (char *)src;
  if ( v9 <= 24 )
  {
    if ( v9 == 24 )
    {
      *a5 = _mm_loadu_si128(src);
      a5[1].m128i_i64[0] = src[1].m128i_i64[0];
    }
  }
  else
  {
    a5 = (__m128i *)memmove(a5, src, v9);
  }
  v10 = (char *)a4 - (char *)a3;
  v11 = (__m128i *)((char *)a5 + v9);
  if ( v10 <= 24 )
  {
    if ( v10 == 24 )
    {
      *v11 = _mm_loadu_si128(a3);
      v11[1].m128i_i64[0] = a3[1].m128i_i64[0];
    }
  }
  else
  {
    v11 = (__m128i *)memmove(v11, a3, v10);
  }
  return (__int64)v11 + v10;
}
