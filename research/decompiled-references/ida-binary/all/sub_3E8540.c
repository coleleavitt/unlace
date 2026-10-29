__int64 __fastcall sub_3E8540(__int64 a1)
{
  unsigned __int8 isChecked; // al

  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 48) + 120LL));
  return reg_int_op("DisplayWelcome", 1, isChecked, 0);
}
