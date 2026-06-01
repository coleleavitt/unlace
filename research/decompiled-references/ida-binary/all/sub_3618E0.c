unsigned __int64 __fastcall sub_3618E0(__int64 a1)
{
  char isChecked; // si
  __int64 v3; // rax
  QT::QAbstractButton *v4; // rdi
  QT::QWidget *v5; // rbp

  isChecked = 0;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(QT::QAbstractButton **)(v3 + 72);
  v5 = *(QT::QWidget **)(v3 + 80);
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 4) + 8LL) & 1) == 0 )
    isChecked = QT::QAbstractButton::isChecked(v4);
  QT::QWidget::setEnabled(v5, isChecked);
  return sub_3616D0(a1);
}
