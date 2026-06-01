unsigned __int64 __fastcall sub_3F15A0(__int64 a1)
{
  __int64 v2; // rdx
  QT::QAbstractScrollArea *v3; // rdi
  QT::QWidget *v4; // rax
  const QT::QPalette *v5; // rax
  QT::QWidget *v6; // rax
  _BYTE v8[8]; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v9[16]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v10[0] = sub_524FA0(a1 + 40, 2165563920LL, 0);
  v10[1] = v2;
  v3 = *(QT::QAbstractScrollArea **)(a1 + 104);
  if ( v3 && QT::QAbstractScrollArea::viewport(v3) )
  {
    v4 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 104));
    v5 = (const QT::QPalette *)QT::QWidget::palette(v4);
    QT::QPalette::QPalette((QT::QPalette *)v9, v5);
    QT::QBrush::QBrush(v8, v10, 1);
    QT::QPalette::setBrush(v9, 5, 10, v8);
    QT::QBrush::~QBrush((QT::QBrush *)v8);
    QT::QBrush::QBrush(v8, v10, 1);
    QT::QPalette::setBrush(v9, 5, 9, v8);
    QT::QBrush::~QBrush((QT::QBrush *)v8);
    v6 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 104));
    QT::QWidget::setPalette(v6, (const QT::QPalette *)v9);
    QT::QPalette::~QPalette((QT::QPalette *)v9);
  }
  return v11 - __readfsqword(0x28u);
}
