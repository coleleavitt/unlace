__int64 __fastcall TCpuRegs__::vfunc_2(
        QT::QObject *a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 result; // rax
  int v14; // [rsp+Ch] [rbp-1Ch]

  result = CustomIDAMemo__::vfunc_2(a1, a2, a5, a6, a7, a8, a9, a10, a11, a12, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 5 )
      {
        v14 = result;
        sub_463110((__int64)a1, result, a4);
        LODWORD(result) = v14;
      }
      return (unsigned int)(result - 6);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 5 )
        *(_QWORD *)*a4 = 0;
      return (unsigned int)(result - 6);
    }
  }
  return result;
}
