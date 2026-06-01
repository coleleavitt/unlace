__int64 __fastcall sub_17B0D0(__int64 a1)
{
  char v1; // bp
  char v2; // al
  QT::QAction *v3; // r12
  bool v4; // bl

  v1 = sub_211EC0();
  v2 = sub_211F10(4);
  v3 = *(QT::QAction **)(a1 + 192);
  v4 = v2;
  QT::QAction::setCheckable(v3, v1);
  QT::QAction::setChecked(v3, v4);
  return v1 == 0 ? 7 : 3;
}
