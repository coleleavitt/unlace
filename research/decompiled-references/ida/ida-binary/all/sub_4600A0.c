__int64 __fastcall ActionsInspector__::vfunc_2(__int64 a1, int a2, double a3, __m128 a4, __int64 a5, _QWORD **a6)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 12 )
      {
        v10 = result;
        sub_45FE80(a1, (unsigned int)result, (__int64)a6, v8, v9, a3, a4);
        LODWORD(result) = v10;
      }
      return (unsigned int)(result - 13);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 12 )
        **a6 = 0;
      return (unsigned int)(result - 13);
    }
  }
  return result;
}
