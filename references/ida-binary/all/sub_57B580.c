__int64 __fastcall sub_57B580(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int128 v8; // xmm0

  v8 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
  sub_57AAC0(a1, 0, a3, a4, a5, a6, (__m128i)v8, v8, (__int128)_mm_loadu_si128((const __m128i *)&a8));
  return a1;
}
