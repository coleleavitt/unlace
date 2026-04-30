__int64 __fastcall sub_387F20(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // eax
  double v11; // xmm4_8
  double v12; // xmm5_8
  unsigned int v13; // ebx

  v10 = *(_DWORD *)(get_ph(a1, a2) + 8);
  v13 = v10 & 1;
  if ( (v10 & 1) != 0 )
    sub_387400(0, nullptr, "Segment Registers", a1, a3, a4, a5, a6, v11, v12, a9, a10);
  return v13;
}
