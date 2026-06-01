__int64 __fastcall filter_row_widget_t__::vfunc_2(QT::QMetaObject *a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 4 )
      {
        v7 = result;
        sub_473340(a1, 0, (unsigned int)result, (__int64)a4, v6);
        LODWORD(result) = v7;
      }
      return (unsigned int)(result - 5);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 4 )
        **a4 = 0;
      return (unsigned int)(result - 5);
    }
  }
  return result;
}
