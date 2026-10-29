__int64 __fastcall TNoteBox__::vfunc_2(QT::QPlainTextEdit *a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // [rsp+Ch] [rbp-1Ch]

  result = QT::QPlainTextEdit::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 6 )
      {
        v6 = result;
        sub_46DA80(a1, result, a4);
        LODWORD(result) = v6;
      }
      return (unsigned int)(result - 7);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 6 )
        *(_QWORD *)*a4 = 0;
      return (unsigned int)(result - 7);
    }
  }
  return result;
}
