__int64 __fastcall OptionsDialog__::vfunc_2(
        _QWORD *a1,
        int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        _QWORD **a12)
{
  __int64 result; // rax
  __int64 v14; // rcx
  double v15; // xmm4_8
  double v16; // xmm5_8
  int v17; // [rsp+Ch] [rbp-1Ch]

  result = ActionsInspectorDialog__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 30 )
      {
        v17 = result;
        sub_46DD10(a1, (unsigned int)result, (__int64)a12, v14, a3, a4, a5, a6, v15, v16, a9, a10);
        LODWORD(result) = v17;
      }
      return (unsigned int)(result - 31);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 30 )
        **a12 = 0;
      return (unsigned int)(result - 31);
    }
  }
  return result;
}
