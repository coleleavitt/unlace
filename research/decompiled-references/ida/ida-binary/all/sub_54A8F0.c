__int64 __fastcall DockTab__::vfunc_2(QT::QStackedWidget **a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // esi
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 3 )
      {
        v7 = result;
        v6 = **(_DWORD **)(a4 + 8);
        if ( (_DWORD)result == 2 )
        {
          sub_4CEEE0((__int64)a1, v6);
          LODWORD(result) = 2;
        }
        else if ( (_DWORD)result == 3 )
        {
          sub_4CEF10(a1, v6);
          LODWORD(result) = v7;
        }
        else
        {
          if ( (_DWORD)result == 1 )
            sub_4CEE70((__int64)a1, v6, **(_DWORD **)(a4 + 16));
          else
            sub_4CED90((__int64)a1, v6);
          LODWORD(result) = v7;
        }
      }
      return (unsigned int)(result - 4);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 3 )
        **(_QWORD **)a4 = 0;
      return (unsigned int)(result - 4);
    }
  }
  return result;
}
