__int64 __fastcall sub_2C5020(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rdi
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 result; // rax

  v10 = sub_2B27A0(a1, a2, a3);
  result = 0;
  if ( v10 )
  {
    sub_2C4EC0(v10, 1u, a3, a4, a5, a6, v11, v12, a9, a10);
    return 1;
  }
  return result;
}
