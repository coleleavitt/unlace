void __fastcall sub_3E6A00(
        const __m128i *a1,
        const __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r13
  const __m128i *v8; // rbx
  __int64 i; // rbp
  __int64 v10; // r13
  __int8 v11; // al
  __int128 v12; // xmm0
  __int64 v13; // rax

  v6 = (char *)a2 - (char *)a1;
  v8 = a2;
  if ( (char *)a2 - (char *)a1 > 24 )
  {
    for ( i = (__int64)(0xAAAAAAAAAAAAAAABLL * (v6 >> 3) - 2) / 2; ; --i )
    {
      sub_3E1470(
        (__int64)a1,
        i,
        0xAAAAAAAAAAAAAAABLL * (v6 >> 3),
        a4,
        a5,
        a6,
        (__int128)_mm_loadu_si128((const __m128i *)((char *)a1 + 24 * i)),
        a1[1].m128i_i64[3 * i]);
      if ( !i )
        break;
    }
  }
  if ( (unsigned __int64)a2 < a3 )
  {
    v10 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 3);
    do
    {
      while ( 1 )
      {
        v11 = a1->m128i_i8[8];
        if ( v8->m128i_i8[8] < v11
          || v8->m128i_i8[8] <= v11
          && (v8->m128i_i64[0] < (unsigned __int64)a1->m128i_i64[0]
           || a1->m128i_i64[0] >= (unsigned __int64)v8->m128i_i64[0]
           && v8[1].m128i_i8[0] < (unsigned int)a1[1].m128i_i8[0]) )
        {
          break;
        }
        v8 = (const __m128i *)((char *)v8 + 24);
        if ( (unsigned __int64)v8 >= a3 )
          return;
      }
      v12 = (__int128)_mm_loadu_si128(v8);
      v13 = v8[1].m128i_i64[0];
      v8 = (const __m128i *)((char *)v8 + 24);
      *(const __m128i *)((char *)&v8[-2] + 8) = _mm_loadu_si128(a1);
      v8[-1].m128i_i8[8] = a1[1].m128i_i8[0];
      sub_3E1470((__int64)a1, 0, v10, a4, a5, a6, v12, v13);
    }
    while ( (unsigned __int64)v8 < a3 );
  }
}
