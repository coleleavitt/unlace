__int64 __fastcall DockArea__::vfunc_2(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  _QWORD *v6; // rdx
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 1 )
      {
        v7 = result;
        if ( (_DWORD)result == 1 )
        {
          sub_4C6AB0(a1, *a4[1]);
          LODWORD(result) = 1;
        }
        else
        {
          sub_4C6540(a1);
          LODWORD(result) = v7;
        }
      }
      return (unsigned int)(result - 2);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 1 )
      {
        v6 = *a4;
        if ( (_DWORD)result != 1 || *(_DWORD *)a4[1] )
          *v6 = 0;
        else
          *v6 = &unk_8C3020;
      }
      return (unsigned int)(result - 2);
    }
  }
  return result;
}
