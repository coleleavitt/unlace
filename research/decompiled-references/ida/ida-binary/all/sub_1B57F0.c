__int64 *__fastcall sub_1B57F0(__int64 a1)
{
  unsigned __int8 isChecked; // al

  sub_52B340(&qword_8CAE60, a1 + 64);
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 256) + 1008LL));
  return sub_1B2FD0(isChecked);
}
