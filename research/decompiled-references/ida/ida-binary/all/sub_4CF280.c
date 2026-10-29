void __fastcall sub_4CF280(QT::QStackedWidget **a1, int a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  QT::QTabBar *v3; // r12
  int v4; // eax

  if ( a2 >= 0 )
  {
    v2 = *((__int64 (__fastcall **)(__int64))*a1 + 58);
    if ( v2 == sub_4C46A0 )
    {
      if ( a2 >= (int)QT::QStackedWidget::count(a1[9]) )
        return;
LABEL_7:
      v3 = a1[8];
      v4 = sub_4CEBC0(a1, a2);
      QT::QTabBar::setCurrentIndex(v3, v4);
      QT::QStackedWidget::setCurrentIndex(a1[9], a2);
      return;
    }
    if ( a2 < ((int (*)(void))v2)() )
      goto LABEL_7;
  }
}
