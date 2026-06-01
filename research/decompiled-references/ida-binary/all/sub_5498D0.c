__int64 __fastcall TopLevelDockArea__::vfunc_2(QT::QMetaObject *a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8
  int v7; // [rsp+Ch] [rbp-1Ch]
  int v8; // [rsp+Ch] [rbp-1Ch]

  result = DockArea__::vfunc_2((__int64)a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 1 )
      {
        v8 = result;
        sub_549580(a1, 0, result, (__int64)a4, v6);
        LODWORD(result) = v8;
      }
      return (unsigned int)(result - 2);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 1 )
      {
        v7 = result;
        sub_549580(a1, 7, result, (__int64)a4, v6);
        LODWORD(result) = v7;
      }
      return (unsigned int)(result - 2);
    }
  }
  return result;
}
