__int64 __fastcall sub_34F520(__int64 a1)
{
  __int64 v1; // rax
  QT::QWidget *v2; // rbx
  char isChecked; // al

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(QT::QWidget **)(v1 + 1072);
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v1 + 1064));
  return QT::QWidget::setEnabled(v2, isChecked);
}
