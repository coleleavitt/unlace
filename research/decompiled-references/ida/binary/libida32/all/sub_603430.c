__int64 __fastcall sub_603430(
        unsigned int *a1,
        const __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r13
  const __m128i *v8; // rbx
  __int64 i; // rbp
  __int64 result; // rax
  __int64 v11; // r13
  __int128 v12; // xmm2
  __int128 v13; // xmm1
  __int128 v14; // xmm0

  v6 = (char *)a2 - (char *)a1;
  v8 = a2;
  if ( (char *)a2 - (char *)a1 > 48 )
  {
    for ( i = (__int64)(0xAAAAAAAAAAAAAAABLL * (v6 >> 4) - 2) / 2; ; --i )
    {
      result = sub_5FF9C0(
                 (__int64)a1,
                 i,
                 0xAAAAAAAAAAAAAAABLL * (v6 >> 4),
                 a4,
                 a5,
                 a6,
                 (__int128)_mm_loadu_si128((const __m128i *)&a1[12 * i]),
                 (__int128)_mm_loadu_si128((const __m128i *)&a1[12 * i + 4]),
                 (__int128)_mm_loadu_si128((const __m128i *)&a1[12 * i + 8]));
      if ( !i )
        break;
    }
  }
  if ( (unsigned __int64)a2 < a3 )
  {
    v11 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 4);
    do
    {
      while ( 1 )
      {
        result = *a1;
        if ( v8->m128i_i32[0] - (int)result < 0 )
          break;
        v8 += 3;
        if ( (unsigned __int64)v8 >= a3 )
          return result;
      }
      v12 = (__int128)_mm_loadu_si128(v8);
      v13 = (__int128)_mm_loadu_si128(v8 + 1);
      v14 = (__int128)_mm_loadu_si128(v8 + 2);
      v8 += 3;
      v8[-3] = _mm_loadu_si128((const __m128i *)a1);
      v8[-2] = _mm_loadu_si128((const __m128i *)a1 + 1);
      *(const __m128i *)((char *)&v8[-2] + 12) = _mm_loadu_si128((const __m128i *)(a1 + 7));
      result = sub_5FF9C0((__int64)a1, 0, v11, a4, a5, a6, v12, v13, v14);
    }
    while ( (unsigned __int64)v8 < a3 );
  }
  return result;
}

