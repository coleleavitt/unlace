__int64 __fastcall CollapsibleWidget__::vfunc_2(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 6 )
      {
        v7 = result;
        sub_462D60(a1, 0, (unsigned int)result, (__int64)a4, v6);
        LODWORD(result) = v7;
      }
      return (unsigned int)(result - 7);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 6 )
        **a4 = 0;
      return (unsigned int)(result - 7);
    }
  }
  return result;
}
