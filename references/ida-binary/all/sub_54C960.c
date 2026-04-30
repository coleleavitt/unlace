__int64 __fastcall ida_quick_filter_widget_t__::vfunc_2(
        QT::QMetaObject *a1,
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
  void **v14; // r8
  double v15; // xmm4_8
  double v16; // xmm5_8
  int v17; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 6 )
      {
        v17 = result;
        sub_54C4F0(a1, 0, (unsigned int)result, (__int64)a12, v14, a3, a4, a5, a6, v15, v16, a9, a10);
        LODWORD(result) = v17;
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
