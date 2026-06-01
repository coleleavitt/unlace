_BOOL8 __fastcall sub_3AE700(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax

  v9 = *(_DWORD *)(a1 + 8);
  return (v9 == 25 || v9 == 58) && sub_3AB9B0(a1, 5, 0, a2, a3, a4, a5, a6, a7, a8, a9);
}
