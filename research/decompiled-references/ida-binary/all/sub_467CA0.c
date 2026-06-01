__int64 __fastcall ida_app_t__::vfunc_2(QT::QMetaObject *a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = app_t__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 2 )
      {
        v7 = result;
        sub_467A60(a1, 0, result, (__int64)a4, v6);
        LODWORD(result) = v7;
      }
      return (unsigned int)(result - 3);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 2 )
        **a4 = 0;
      return (unsigned int)(result - 3);
    }
  }
  return result;
}
