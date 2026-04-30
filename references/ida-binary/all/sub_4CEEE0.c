void __fastcall sub_4CEEE0(__int64 a1, int a2)
{
  QT::QTabBar *v2; // rbx
  int v3; // eax

  if ( !*(_BYTE *)(a1 + 88) )
  {
    v2 = *(QT::QTabBar **)(a1 + 64);
    v3 = sub_4CEBC0((QT::QStackedWidget **)a1, a2);
    QT::QTabBar::removeTab(v2, v3);
  }
}
