__int64 __fastcall DockWidget__::vfunc_2(QT::QObject *a1, int a2, double a3, __int64 a4, _QWORD **a5)
{
  __int64 result; // rax
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 3 )
      {
        v7 = result;
        if ( (_DWORD)result == 2 )
        {
          sub_4CD480(a1);
          LODWORD(result) = 2;
        }
        else if ( (_DWORD)result == 3 )
        {
          sub_4CDB70(a1, a3);
          LODWORD(result) = v7;
        }
        else
        {
          if ( (_DWORD)result == 1 )
            sub_4CD4A0((__int64)a1, a3);
          else
            sub_4CD540((__int64)a1);
          LODWORD(result) = v7;
        }
      }
      return (unsigned int)(result - 4);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 3 )
        **a5 = 0;
      return (unsigned int)(result - 4);
    }
  }
  return result;
}
