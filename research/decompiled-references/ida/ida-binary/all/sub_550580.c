__int64 __fastcall ui_label_t__::vfunc_2(QT::QWidget *this, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax

  result = QT::QLabel::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        sub_53BA70(this);
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
