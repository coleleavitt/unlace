unsigned __int64 __fastcall sub_361930(__int64 a1)
{
  __int64 v1; // rax
  QT::QWidget *v2; // rbp
  char isChecked; // al

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(QT::QWidget **)(v1 + 72);
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v1 + 64));
  QT::QWidget::setEnabled(v2, isChecked != 1);
  return sub_3618E0(a1);
}
