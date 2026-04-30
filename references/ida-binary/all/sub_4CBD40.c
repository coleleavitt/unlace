QT::QWidget *__fastcall sub_4CBD40(double a1, __int64 a2, QT::QWidget *a3, QT::QWidget *a4, int a5)
{
  __int64 v7; // rdi

  if ( !a4 )
    return nullptr;
  v7 = sub_4CE6E0(a4);
  if ( v7 )
    return sub_4CB350(v7, a3, a4, a5, a1);
  else
    return nullptr;
}
