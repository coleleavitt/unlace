__int64 __fastcall sub_210D5C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int16 a5,
        unsigned int a6,
        __int128 a7,
        char a8,
        __int128 a9,
        __int64 a10)
{
  sub_210C910(a1, a2, a3, a4, a5, a6, (__int128)_mm_loadu_si128((const __m128i *)&a7), a8, a9, a10);
  return a1;
}
