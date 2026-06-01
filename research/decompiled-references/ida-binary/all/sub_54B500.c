__int64 __fastcall ida_form_controller_t__::vfunc_2(
        QT::QObject *a1,
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

  result = QT::QObject::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 11 )
      {
        v16 = result;
        sub_54B3C0(a1, (unsigned int)result, (__int64)a12, a3, a4, a5, a6, v14, v15, a9, a10);
        LODWORD(result) = v16;
      }
      return (unsigned int)(result - 12);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 11 )
        **a12 = 0;
      return (unsigned int)(result - 12);
    }
  }
  return result;
}
