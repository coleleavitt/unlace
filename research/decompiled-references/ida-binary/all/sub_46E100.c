__int64 __fastcall PluginForm__::vfunc_2(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
      return (unsigned int)(result - 2);
    if ( a2 == 7 )
    {
      if ( (int)result <= 1 )
        **a4 = 0;
      return (unsigned int)(result - 2);
    }
  }
  return result;
}
