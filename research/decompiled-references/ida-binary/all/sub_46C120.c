__int64 __fastcall ConsoleWidget__::vfunc_2(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  int v6; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 3 )
      {
        v6 = result;
        sub_46B970(a1, result, (__int64)a4);
        LODWORD(result) = v6;
      }
      return (unsigned int)(result - 4);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 3 )
        **a4 = 0;
      return (unsigned int)(result - 4);
    }
  }
  return result;
}
