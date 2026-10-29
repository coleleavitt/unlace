__int64 __fastcall sub_5691F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  sub_568CA0(
    a1,
    a2,
    1,
    a4,
    a5,
    a6,
    (__int128)_mm_loadu_si128((const __m128i *)&a7),
    (__int128)_mm_loadu_si128((const __m128i *)&a8));
  return a1;
}
