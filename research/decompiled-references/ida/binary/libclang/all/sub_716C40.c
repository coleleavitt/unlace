__int64 __fastcall sub_716C40(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        __int64 *a6,
        __int128 a7)
{
  return sub_7166A0(a1, a2, a3, a4, a5, a6, (__int128)_mm_loadu_si128((const __m128i *)&a7), 0);
}

