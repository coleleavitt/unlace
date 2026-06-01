__int64 __fastcall sub_4D4100(__int64 a1, int a2)
{
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 96) + 48LL), (a2 & 0x20) != 0);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 96) + 56LL), (a2 & 2) != 0);
  QT::QComboBox::setCurrentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 40LL), (a2 >> 10) & 3);
  return QT::QComboBox::setCurrentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 16LL), (a2 >> 12) & 7);
}
