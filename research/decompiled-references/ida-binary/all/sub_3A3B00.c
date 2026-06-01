__int64 __fastcall sub_3A3B00(__int64 a1, QT::QAbstractSlider *a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( !(unsigned __int8)sub_3310F0(a1, (__int64)a2, a3, a4, a5) )
    return sub_27D740(a1, a2);
  v5 = QT::QAbstractSlider::sliderPosition(a2);
  v8 = sub_1EA680(a1 + 384, (__int64)a2, v6, v7, a5);
  return sub_1EBC80(a1, v5 + *(__int16 *)(v8 + 30), 0);
}
