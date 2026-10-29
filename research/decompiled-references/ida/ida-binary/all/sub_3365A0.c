unsigned __int64 __fastcall sub_3365A0(
        QT::QObject *a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  double v10; // xmm4_8
  double v11; // xmm5_8
  _BYTE v13[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  QT::QObject::sender(a1);
  QT::QAction::data((QT::QAction *)v13);
  v9 = QT::QVariant::toInt((QT::QVariant *)v13, nullptr);
  sub_335D30(v9, a2, a3, a4, a5, v10, v11, a8, a9);
  QT::QVariant::~QVariant((QT::QVariant *)v13);
  return v14 - __readfsqword(0x28u);
}
