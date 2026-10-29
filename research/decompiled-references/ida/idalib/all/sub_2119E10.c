__int64 __fastcall sub_2119E10(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int128 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  sub_2107540(
    a1,
    *(_QWORD *)(a2 + 8),
    a4,
    a5,
    a7,
    a8,
    a3,
    (__int128)_mm_loadu_si128((const __m128i *)&a9),
    a10,
    a11,
    a12,
    a13,
    a6);
  return a1;
}
