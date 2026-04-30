__int64 __fastcall sub_328890(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  double v12; // xmm4_8
  double v13; // xmm5_8

  v9 = sub_17D870(a1);
  if ( !v9 || (unsigned __int8)sub_1F3610(v9, 3, v10, v11, a2, a3, a4, a5, v12, v13, a8, a9) )
    return 1;
  sub_312110((__int64)qword_8CD748, 0);
  return 0;
}
