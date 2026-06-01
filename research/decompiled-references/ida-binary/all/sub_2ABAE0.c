__int64 __fastcall sub_2ABAE0(QT::QComboBox **a1)
{
  *((_DWORD *)a1[9] + 16) = QT::QComboBox::currentIndex(a1[8]) + 1;
  *((_DWORD *)a1[9] + 17) = QT::QComboBox::currentIndex(a1[7]) + 1;
  return QT::QWidget::update(a1[9]);
}
