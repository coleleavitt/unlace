void __fastcall sub_54A610(QT::QStackedWidget **a1, int a2, int a3, __int64 a4)
{
  if ( !a2 )
  {
    if ( a3 == 2 )
    {
      sub_4CEEE0((__int64)a1, **(_DWORD **)(a4 + 8));
    }
    else if ( a3 > 2 )
    {
      if ( a3 == 3 )
        sub_4CEF10(a1, **(_DWORD **)(a4 + 8));
    }
    else if ( a3 )
    {
      if ( a3 == 1 )
        sub_4CEE70((__int64)a1, **(_DWORD **)(a4 + 8), **(_DWORD **)(a4 + 16));
    }
    else
    {
      sub_4CED90((__int64)a1, **(_DWORD **)(a4 + 8));
    }
  }
}
