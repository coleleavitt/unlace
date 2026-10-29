__int64 __fastcall sub_2010D0(
        const __m128i *a1,
        const char *a2,
        _DWORD *a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  if ( *a3 && sub_192EC0((__int64)a3, (__int64)a2) )
    return 1;
  sub_200F00(a1, a2, a5, a6, a7, a8, a9, a10, a11, a12, (__int64)a3, a4);
  return 1;
}
