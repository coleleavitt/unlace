__int64 __fastcall sub_34F550(__int64 a1)
{
  __int64 v1; // rax
  QT::QWidget *v2; // rbp
  char isChecked; // al
  __int64 v4; // rax
  QT::QWidget *v5; // rbx
  char v6; // al

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(QT::QWidget **)(v1 + 256);
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v1 + 248));
  QT::QWidget::setEnabled(v2, isChecked);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(QT::QWidget **)(v4 + 264);
  v6 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v4 + 248));
  return QT::QWidget::setEnabled(v5, v6);
}
