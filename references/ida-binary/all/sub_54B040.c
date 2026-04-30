__int64 __fastcall font_picker_t__::vfunc_2(QT::QFontDialog *this, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = QT::QFontDialog::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        sub_4EB780(this, **(QT::QAbstractButton ***)(a4 + 8));
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **(_QWORD **)a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
