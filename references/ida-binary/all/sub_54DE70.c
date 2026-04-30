__int64 __fastcall log_widget_t__::vfunc_2(QT::QWidget *a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // [rsp+Ch] [rbp-1Ch]

  result = QT::QAbstractScrollArea::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 4 )
      {
        v6 = result;
        sub_54D9B0(a1, result, a4);
        LODWORD(result) = v6;
      }
      return (unsigned int)(result - 5);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 4 )
        *(_QWORD *)*a4 = 0;
      return (unsigned int)(result - 5);
    }
  }
  return result;
}
