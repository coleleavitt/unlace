__int64 __fastcall sub_178FD0(__int64 a1)
{
  QT::QAction *v1; // rbx

  v1 = *(QT::QAction **)(a1 + 192);
  QT::QAction::setCheckable(v1, 1);
  QT::QAction::setChecked(v1, byte_8BA544);
  return 3;
}
