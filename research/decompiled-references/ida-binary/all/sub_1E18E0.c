__int64 __fastcall sub_1E18E0(__int64 a1, QT::QAbstractSlider *a2)
{
  int v2; // ebp
  __int64 v3; // rax

  v2 = QT::QAbstractSlider::sliderPosition(a2);
  v3 = sub_1EA680(a1 + 384);
  return sub_1EBC80(a1, v2 + *(__int16 *)(v3 + 30), 0);
}
