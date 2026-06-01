__m128i *__fastcall sub_5692E0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __m128i v9; // [rsp+10h] [rbp-18h]

  v9 = _mm_loadu_si128((const __m128i *)&a8);
  sub_5662E0(
    a1,
    a2,
    a3,
    0,
    a5,
    a6,
    (__int128)_mm_loadu_si128((const __m128i *)&a7),
    (__int64 *)v9.m128i_i64[0],
    v9.m128i_i64[1]);
  return a1;
}
