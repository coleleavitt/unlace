void __fastcall sub_82EA0(const __m128i *a1, __m128i *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __m128i *v8; // rbx
  __int64 i; // r12
  __int64 v10; // r14
  unsigned __int128 v11; // xmm0
  __int64 v12; // rax

  v6 = (char *)a2 - (char *)a1;
  v8 = a2;
  if ( (char *)a2 - (char *)a1 > 24 )
  {
    for ( i = (__int64)(0xAAAAAAAAAAAAAAABLL * (v6 >> 3) - 2) / 2; ; --i )
    {
      sub_803B0(
        (__int64)a1,
        i,
        0xAAAAAAAAAAAAAAABLL * (v6 >> 3),
        a4,
        a5,
        a6,
        (unsigned __int128)_mm_loadu_si128((const __m128i *)((char *)a1 + 24 * i)),
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
      if ( (unsigned __int128)*v8 < *(_OWORD *)a1 )
      {
        v11 = (unsigned __int128)_mm_loadu_si128(v8);
        v12 = v8[1].m128i_i64[0];
        *v8 = _mm_loadu_si128(a1);
        v8[1].m128i_i32[0] = a1[1].m128i_i32[0];
        sub_803B0((__int64)a1, 0, v10, a4, a5, a6, v11, v12);
      }
      v8 = (__m128i *)((char *)v8 + 24);
    }
    while ( (unsigned __int64)v8 < a3 );
  }
}
