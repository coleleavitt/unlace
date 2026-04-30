__int64 __fastcall sub_34F4F0(__int64 a1)
{
  __int64 v1; // rax
  QT::QWidget *v2; // rbx
  char isChecked; // al

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(QT::QWidget **)(v1 + 1008);
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v1 + 840));
  return QT::QWidget::setEnabled(v2, isChecked);
}
