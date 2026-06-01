__int64 __fastcall sub_1DCD00(double a1, __m128 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = reg_int_op("RegistryVersion", 0, 0, 0);
  if ( (int)result <= 719 )
  {
    sub_1DC670(a1, a2, (__int64)"RegistryVersion", 0, v3, v4);
    sub_1CD950();
    return reg_int_op("RegistryVersion", 1, "GNU", 0);
  }
  return result;
}
