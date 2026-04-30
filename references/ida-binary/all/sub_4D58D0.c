__int64 __fastcall sub_4D58D0(__int64 a1)
{
  char isChecked; // bp
  int v2; // r12d
  __int64 result; // rax

  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 96) + 56LL));
  v2 = QT::QComboBox::currentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 16LL));
  sub_4D5310(a1, isChecked);
  result = QT::QComboBox::count(*(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 16LL));
  if ( v2 < (int)result )
    return QT::QComboBox::setCurrentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 16LL), v2);
  return result;
}
