__int64 __fastcall sub_7F65B0(const __m128i *src, const __m128i *a2, const __m128i *a3, const __m128i *a4, __m128i *a5)
{
  const __m128i *v5; // rax
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  signed __int64 v10; // rsi
  signed __int64 v11; // rbp
  __m128i *v12; // r8

  v5 = src;
  if ( a2 != src )
  {
    while ( a4 != a3 )
    {
      if ( a3->m128i_u32[1] + ((unsigned __int64)a3->m128i_u32[0] << 32) < v5->m128i_u32[1]
                                                                         + ((unsigned __int64)v5->m128i_u32[0] << 32) )
      {
        v8 = _mm_loadu_si128(a3);
        a5 = (__m128i *)((char *)a5 + 40);
        a3 = (const __m128i *)((char *)a3 + 40);
        *(__m128i *)((char *)a5 - 40) = v8;
        *(__m128i *)((char *)a5 - 24) = _mm_loadu_si128((const __m128i *)((char *)a3 - 24));
        a5[-1].m128i_i64[1] = a3[-1].m128i_i64[1];
        if ( a2 == v5 )
          break;
      }
      else
      {
        v9 = _mm_loadu_si128(v5);
        v5 = (const __m128i *)((char *)v5 + 40);
        a5 = (__m128i *)((char *)a5 + 40);
        *(__m128i *)((char *)a5 - 40) = v9;
        *(__m128i *)((char *)a5 - 24) = _mm_loadu_si128((const __m128i *)((char *)v5 - 24));
        a5[-1].m128i_i64[1] = v5[-1].m128i_i64[1];
        if ( a2 == v5 )
          break;
      }
    }
  }
  v10 = (char *)a2 - (char *)v5;
  if ( v10 <= 40 )
  {
    if ( v10 == 40 )
    {
      *a5 = _mm_loadu_si128(v5);
      a5[1] = _mm_loadu_si128(v5 + 1);
      a5[2].m128i_i64[0] = v5[2].m128i_i64[0];
    }
  }
  else
  {
    a5 = (__m128i *)memmove(a5, v5, v10);
  }
  v11 = (char *)a4 - (char *)a3;
  v12 = (__m128i *)((char *)a5 + v10);
  if ( v11 <= 40 )
  {
    if ( v11 == 40 )
    {
      *v12 = _mm_loadu_si128(a3);
      v12[1] = _mm_loadu_si128(a3 + 1);
      v12[2].m128i_i64[0] = a3[2].m128i_i64[0];
    }
  }
  else
  {
    v12 = (__m128i *)memmove(v12, a3, v11);
  }
  return (__int64)v12 + v11;
}
