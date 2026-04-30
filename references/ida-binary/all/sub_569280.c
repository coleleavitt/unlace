__int64 __fastcall sub_569280(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __m128i v9; // [rsp+10h] [rbp-18h]

  v9 = _mm_loadu_si128((const __m128i *)&a8);
  sub_565DE0(a1, a2, a3, 0, a5, a6, (__int128)_mm_loadu_si128((const __m128i *)&a7), v9.m128i_i64[0], v9.m128i_i64[1]);
  return a1;
}
