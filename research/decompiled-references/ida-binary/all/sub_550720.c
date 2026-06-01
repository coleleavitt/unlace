__int64 __fastcall ui_main_window_t__::vfunc_2(_QWORD *a1, int a2, double a3, __m128 a4, __int64 a5, _QWORD **a6)
{
  __int64 result; // rax
  int v8; // [rsp+Ch] [rbp-1Ch]

  result = QT::QMainWindow::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 4 )
      {
        v8 = result;
        sub_550630(a1, result, (__int64)a6, a3, a4);
        LODWORD(result) = v8;
      }
      return (unsigned int)(result - 5);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 4 )
        **a6 = 0;
      return (unsigned int)(result - 5);
    }
  }
  return result;
}
