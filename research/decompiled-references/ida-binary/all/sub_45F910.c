__int64 __fastcall AboutDialog__::vfunc_2(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
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

  result = ActionsInspectorDialog__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( !(_DWORD)a2 )
    {
      if ( !(_DWORD)result )
      {
        sub_16D960(a3, a4, a5, a6, v14, v15, a9, a10, a1, a2);
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( (_DWORD)a2 == 7 )
    {
      if ( !(_DWORD)result )
        **a12 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
