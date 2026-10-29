unsigned __int64 __fastcall sub_2861C0(__int64 a1, _WORD *a2, __int64 a3, double a4)
{
  QT::QEventPoint *v5; // rdi
  QT::QEventPoint *v7; // rdi
  QT::QAbstractSlider *v8; // rax
  int v10; // [rsp+0h] [rbp-28h] BYREF
  int v11; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v5 = *(QT::QEventPoint **)(a3 + 48);
  v12 = __readfsqword(0x28u);
  QT::QEventPoint::position(v5);
  v7 = *(QT::QEventPoint **)(a3 + 48);
  v10 = (int)(a4 + COERCE_DOUBLE(*(_QWORD *)&a4 & 0x8000000000000000LL | 0x3FE0000000000000LL));
  QT::QEventPoint::position(v7);
  v11 = (int)(COERCE_DOUBLE(*(_QWORD *)&a4 & 0x8000000000000000LL | 0x3FE0000000000000LL)
            + COERCE_DOUBLE(*(_QWORD *)&a4 & 0x8000000000000000LL | 0x3FE0000000000000LL));
  sub_2857B0(a1, &v10, &v11, 1u);
  a2[2] = v10;
  a2[3] = v11;
  v8 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(*(QT::QAbstractScrollArea **)(a1 + 16));
  a2[4] = QT::QAbstractSlider::value(v8);
  return v12 - __readfsqword(0x28u);
}
