__int64 __fastcall sub_1D70A0(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  double v11; // xmm4_8
  double v12; // xmm5_8

  result = reg_int_op("RegistryVersion", 0, 0, 0);
  if ( (int)result <= 689 )
  {
    sub_1D6850(a1, a2, a3, a4, v11, v12, a7, a8, (__int64)"RegistryVersion", 0, v9, v10);
    return reg_int_op("RegistryVersion", 1, 690, 0);
  }
  return result;
}
