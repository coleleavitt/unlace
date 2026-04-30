__int64 __fastcall sub_3B08A0(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  if ( *a2 == 2 )
    return sub_3AB3F0(a4, a5, a6, a7, a8, a9, a10, a11, a1, (__int64)(a2 + 16), a3);
  if ( *a2 == 3 )
    return sub_3B01E0(a1, (__int64)(a2 + 16), (int)a2[18], a4, a5, a6, a7, a8, a9, a10, a11);
  return 0;
}
