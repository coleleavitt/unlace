__int64 __fastcall sub_517020(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rdi

  v14 = *(_QWORD *)(a1 + 256);
  if ( !v14 )
    return 0;
  sub_5168C0(v14, nullptr, a2, a3, a4, a5, a6, a7, a8, a9, a11, a12, a13, a14);
  return 1;
}
