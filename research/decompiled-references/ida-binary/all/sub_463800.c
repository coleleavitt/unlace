__int64 __fastcall diff_details_t__::vfunc_2(QT::QAbstractItemView *this, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  __int64 *v6; // rsi
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = QT::QTreeView::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 2 )
      {
        v7 = result;
        v6 = a4[1];
        if ( (_DWORD)result == 1 )
        {
          sub_2705C0(this, (__int64)v6);
          LODWORD(result) = 1;
        }
        else
        {
          if ( (_DWORD)result == 2 )
            sub_270860(this, v6);
          else
            sub_26E6D0(this, (__int64)v6);
          LODWORD(result) = v7;
        }
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
