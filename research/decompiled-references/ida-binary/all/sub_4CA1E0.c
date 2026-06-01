QT::QStackedWidget **__fastcall sub_4CA1E0(double a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6)
{
  _QWORD *v9; // rdi

  if ( !a4 )
    return nullptr;
  v9 = (_QWORD *)sub_4CE6E0(a4);
  if ( v9 )
    return sub_4C9FD0(v9, a3, a4, a5, a6, a1);
  else
    return nullptr;
}
