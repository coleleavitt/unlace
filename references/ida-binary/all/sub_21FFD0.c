__int64 __fastcall sub_21FFD0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  char *v15; // rsi

  v15 = (char *)&s1;
  if ( *(_QWORD *)(a1 + 16) )
    v15 = *(char **)(a1 + 8);
  *(_QWORD *)(a2 + 8) = (unsigned __int8)sub_21FEE0(nullptr, v15, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  return 0;
}
