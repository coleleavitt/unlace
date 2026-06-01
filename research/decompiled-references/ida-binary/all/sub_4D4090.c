__int64 __fastcall sub_4D4090(__int64 a1)
{
  int v1; // r12d
  int v2; // ebp
  unsigned int v3; // ebx

  v1 = 32 * (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 96) + 48LL));
  v2 = 2 * (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 96) + 56LL));
  v3 = (unsigned int)QT::QComboBox::currentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 40LL)) << 10;
  return v2
       | v1
       | v3
       | ((unsigned int)QT::QComboBox::currentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 16LL)) << 12);
}
