__int64 __fastcall JumpAnywhereDialog__::vfunc_2(
        QT::QCoreApplication **a1,
        int a2,
        double a3,
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
  double v14; // xmm4_8
  double v15; // xmm5_8
  int v16; // [rsp+Ch] [rbp-1Ch]

  result = ActionsInspectorDialog__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 6 )
      {
        v16 = result;
        sub_469170(a1, 0, (unsigned int)result, (__int64)a12, a3, a4, a5, a6, v14, v15, a9, a10);
        LODWORD(result) = v16;
      }
      return (unsigned int)(result - 7);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 6 )
        **a12 = 0;
      return (unsigned int)(result - 7);
    }
  }
  return result;
}
