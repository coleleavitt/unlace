QT::QPen *__fastcall sub_1C7B60(QT::QPen *this, QT::QPainter *a2, __int64 a3, int a4)
{
  const QT::QPen *v6; // rax
  _BYTE v8[8]; // [rsp+18h] [rbp-40h] BYREF
  _BYTE v9[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v6 = (const QT::QPen *)QT::QPainter::pen(a2);
  QT::QPen::QPen(this, v6);
  QT::QBrush::QBrush(v8, a3, 1);
  QT::QPen::QPen(v9, v8, 1, 0, 64, (double)a4);
  QT::QPainter::setPen(a2, (const QT::QPen *)v9);
  QT::QPen::~QPen((QT::QPen *)v9);
  QT::QBrush::~QBrush((QT::QBrush *)v8);
  return this;
}
