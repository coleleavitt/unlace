__int64 __fastcall functions_dirtree_widget_t__::vfunc_2(
        QT::QAbstractItemView *this,
        int a2,
        double a3,
        __int64 a4,
        _QWORD **a5)
{
  __int64 result; // rax
  __int64 v7; // rsi
  int v8; // [rsp+Ch] [rbp-1Ch]

  result = ida_dirtree_widget_t__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 1 )
      {
        v8 = result;
        v7 = *a5[1];
        if ( (_DWORD)result == 1 )
        {
          sub_28D9A0(this, v7, a3);
          LODWORD(result) = 1;
        }
        else
        {
          sub_28D2D0(this, v7, *a5[2]);
          LODWORD(result) = v8;
        }
      }
      return (unsigned int)(result - 2);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 1 )
        **a5 = 0;
      return (unsigned int)(result - 2);
    }
  }
  return result;
}
