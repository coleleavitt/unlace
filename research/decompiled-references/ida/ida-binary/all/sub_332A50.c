__int64 __fastcall sub_332A50(
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
  int v9; // ebx
  double v10; // xmm4_8
  double v11; // xmm5_8
  unsigned int v12; // ebp

  v9 = getinf(52);
  setinf(52, 8);
  v12 = sub_3327D0(a1, a2, a3, a4, a5, v10, v11, a8, a9);
  setinf(52, v9);
  if ( v12 )
    return v12;
  sub_1C7D20(nullptr);
  return 0;
}
