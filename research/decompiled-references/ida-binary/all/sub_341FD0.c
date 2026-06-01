void __fastcall sub_341FD0(__int64 a1, const __m128i *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  const __m128i *v8; // rbx
  __int64 i; // rbp
  __int64 v10; // r13
  __int128 v11; // xmm1
  __int128 v12; // xmm0

  v6 = (__int64)a2->m128i_i64 - a1;
  v8 = a2;
  if ( (__int64)a2->m128i_i64 - a1 > 32 )
  {
    for ( i = ((v6 >> 5) - 2) / 2; ; --i )
    {
      sub_33ED40(
        a1,
        i,
        v6 >> 5,
        a4,
        a5,
        a6,
        (__int128)_mm_loadu_si128((const __m128i *)(a1 + 32 * i)),
        (__int128)_mm_loadu_si128((const __m128i *)(a1 + 32 * i + 16)));
      if ( !i )
        break;
    }
  }
  v10 = v6 >> 5;
  if ( (unsigned __int64)a2 < a3 )
  {
    do
    {
      while ( *(_QWORD *)a1 < v8->m128i_i64[0]
           || v8->m128i_i64[0] == *(_QWORD *)a1 && v8->m128i_i64[1] >= *(_QWORD *)(a1 + 8) )
      {
        v8 += 2;
        if ( (unsigned __int64)v8 >= a3 )
          return;
      }
      v11 = (__int128)_mm_loadu_si128(v8);
      v12 = (__int128)_mm_loadu_si128(v8 + 1);
      v8 += 2;
      v8[-2] = _mm_loadu_si128((const __m128i *)a1);
      *(const __m128i *)((char *)&v8[-2] + 9) = _mm_loadu_si128((const __m128i *)(a1 + 9));
      sub_33ED40(a1, 0, v10, a4, a5, a6, v11, v12);
    }
    while ( (unsigned __int64)v8 < a3 );
  }
}
