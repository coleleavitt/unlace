__int64 __fastcall sub_3336A0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9)
{
  int v9; // eax

  v9 = *(_DWORD *)(a9 + 8);
  if ( v9 == 25 || v9 == 58 )
    return sub_3C2A00(
             a1,
             *(double *)a2.m128_u64,
             *(double *)a3.m128_u64,
             *(double *)a4.m128_u64,
             a5,
             a6,
             *(double *)a7.m128_u64,
             *(double *)a8.m128_u64);
  else
    return sub_32FF90(a1, a2, a3, a4, a5, a6, a7, a8);
}
