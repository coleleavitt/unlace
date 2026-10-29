_BOOL8 __fastcall sub_260AB0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        char *a10)
{
  bool v10; // dl
  double v11; // xmm4_8
  double v12; // xmm5_8
  _BOOL8 result; // rax

  v10 = sub_2570C0();
  result = 1;
  if ( !v10 )
  {
    if ( !dword_8CC5F0 )
      return (unsigned int)sub_25FBA0(-1, a10, *(double *)a1.m128_u64, a2, a3, a4, v11, v12, a7, a8) != -1;
    result = 0;
    if ( !byte_8CC5F4 )
    {
      if ( dbg )
      {
        if ( dword_8CC5E8 )
        {
          byte_8CC5EC = 1;
          byte_8CC2A8 = 0;
          return 1;
        }
        if ( dword_8CC5F0 >= 0 )
          return 1;
        return (int)sub_243000(0, nullptr, a1, a2, a3, a4, v11, v12, a7, a8, (unsigned int)dword_8CC5F0, (char *)&dbg) > 0;
      }
    }
  }
  return result;
}
