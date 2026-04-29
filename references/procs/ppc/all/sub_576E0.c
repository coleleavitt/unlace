__int64 __fastcall sub_576E0(
        const __m128i *a1,
        const __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  const __m128i *v8; // rbx
  __int64 i; // r12
  __int64 result; // rax
  __int64 v11; // r14
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // [rsp+20h] [rbp-58h]

  v6 = (char *)a2 - (char *)a1;
  v8 = a2;
  if ( (char *)a2 - (char *)a1 > 24 )
  {
    for ( i = (__int64)(0xAAAAAAAAAAAAAAABLL * (v6 >> 3) - 2) / 2; ; --i )
    {
      v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + 24 * i));
      result = sub_54290(
                 (__int64)a1,
                 i,
                 0xAAAAAAAAAAAAAAABLL * (v6 >> 3),
                 a4,
                 a5,
                 a6,
                 v14.m128i_i64[0],
                 v14.m128i_i64[1],
                 a1[1].m128i_i64[3 * i]);
      if ( !i )
        break;
    }
  }
  if ( (unsigned __int64)a2 < a3 )
  {
    v11 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 3);
    do
    {
      while ( 1 )
      {
        result = a1->m128i_i64[0];
        if ( v8->m128i_i64[0] < a1->m128i_i64[0] )
          break;
        v8 = (const __m128i *)((char *)v8 + 24);
        if ( (unsigned __int64)v8 >= a3 )
          return result;
      }
      v12 = _mm_loadu_si128(v8);
      v13 = v8[1].m128i_i64[0];
      v8 = (const __m128i *)((char *)v8 + 24);
      *(const __m128i *)((char *)&v8[-2] + 8) = _mm_loadu_si128(a1);
      v8[-1].m128i_i64[1] = a1[1].m128i_i64[0];
      result = sub_54290((__int64)a1, 0, v11, a4, a5, a6, v12.m128i_i64[0], v12.m128i_i64[1], v13);
    }
    while ( (unsigned __int64)v8 < a3 );
  }
  return result;
}
