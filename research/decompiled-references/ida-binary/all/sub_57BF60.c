_OWORD *__fastcall sub_57BF60(
        _OWORD *a1,
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
  sub_57B5B0(a1, 0, (__m128i)v8, a3, a4, a5, a6, v8, (__int128)_mm_loadu_si128((const __m128i *)&a8));
  return a1;
}
