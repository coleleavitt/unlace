QT::QPushButton *__fastcall sub_503EF0(__int64 a1, const QT::QString *a2, double a3, __m128 a4)
{
  QT::QPushButton *v4; // rbx
  _QWORD *v5; // rax
  _BYTE v7[8]; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v8[16]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v9[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v4 = sub_503DF0(a1, a2, a3, a4);
  QT::QPushButton::setFlat(v4, 1);
  QT::QFont::QFont((QT::QFont *)v8, (const QT::QFont *)(*((_QWORD *)v4 + 4) + 56LL));
  QT::QFont::setUnderline((QT::QFont *)v8, 1);
  QT::QWidget::setFont(v4, (const QT::QFont *)v8);
  QT::QPalette::QPalette((QT::QPalette *)v9);
  v5 = (_QWORD *)QT::QPalette::brush(v9, 4, 14);
  QT::QBrush::QBrush(v7, *v5 + 8LL, 1);
  QT::QPalette::setBrush(v9, 5, 8, v7);
  QT::QBrush::~QBrush((QT::QBrush *)v7);
  QT::QWidget::setPalette(v4, (const QT::QPalette *)v9);
  QT::QPalette::~QPalette((QT::QPalette *)v9);
  QT::QFont::~QFont((QT::QFont *)v8);
  return v4;
}
