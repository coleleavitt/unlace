__int64 __fastcall NameContainer__::vfunc_2(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8
  __int64 v7; // rdx
  int v8; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (_DWORD)result )
      {
        v7 = (unsigned int)(result - 1);
        if ( (int)v7 <= 6 )
        {
          v8 = result;
          sub_4603C0(a1, 0, v7, (__int64)a4, v6);
          LODWORD(result) = v8;
        }
        return (unsigned int)(result - 8);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 424LL))(a1);
      return 0xFFFFFFFFLL;
    }
    if ( a2 == 7 )
    {
      if ( (_DWORD)result )
      {
        if ( (int)result - 1 <= 6 )
          **a4 = 0;
        return (unsigned int)(result - 8);
      }
      **a4 = 0;
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
