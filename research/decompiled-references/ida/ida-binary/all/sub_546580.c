__int64 __fastcall app_t__::vfunc_2(QT::QApplication *a1, int a2, double a3, __int64 a4, _QWORD **a5)
{
  __int64 result; // rax
  void **v7; // r8
  int v8; // [rsp+Ch] [rbp-1Ch]

  result = QT::QApplication::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 17 )
      {
        v8 = result;
        sub_545BD0(a1, 0, (unsigned int)result, (__int64)a5, v7, a3);
        LODWORD(result) = v8;
      }
      return (unsigned int)(result - 18);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 17 )
        **a5 = 0;
      return (unsigned int)(result - 18);
    }
  }
  return result;
}
