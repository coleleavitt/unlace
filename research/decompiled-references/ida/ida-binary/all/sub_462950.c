__int64 __fastcall BarDockWidget__::vfunc_2(__int64 a1, int a2, __int64 a3, _DWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = QT::QDockWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 2 )
      {
        v7 = result;
        sub_4625F0(a1, 0, (const QT::QMetaObject *)(unsigned int)result, a4, v6);
        LODWORD(result) = v7;
      }
      return (unsigned int)(result - 3);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 2 )
        *(_QWORD *)*a4 = 0;
      return (unsigned int)(result - 3);
    }
  }
  return result;
}
