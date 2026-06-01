unsigned __int64 __fastcall sub_346580(QT::QAbstractButton **a1)
{
  QT::QAbstractButton *v1; // rdx
  _DWORD *v3; // rax
  int v4; // r12d
  int v5; // ebp
  double v6; // xmm0_8
  QT::QAbstractButton *v7; // rax
  QT::QAbstractButton **v8; // r12
  QT::QAbstractButton **v9; // r14
  QT::QAbstractButton *v10; // rdi
  char v12[8]; // [rsp+10h] [rbp-A8h] BYREF
  char v13[8]; // [rsp+18h] [rbp-A0h] BYREF
  _BYTE v14[16]; // [rsp+20h] [rbp-98h] BYREF
  QT::QAbstractButton *v15; // [rsp+30h] [rbp-88h]
  double v16[3]; // [rsp+40h] [rbp-78h] BYREF
  double v17; // [rsp+58h] [rbp-60h]
  double v18; // [rsp+60h] [rbp-58h]
  double v19; // [rsp+68h] [rbp-50h]
  unsigned __int64 v20; // [rsp+78h] [rbp-40h]

  v1 = a1[87];
  v20 = __readfsqword(0x28u);
  v3 = *((_DWORD **)v1 + 4);
  if ( *((_BYTE *)v1 + 345) )
    v4 = v3[7] + 1 - v3[5];
  else
    v4 = v3[8] + 1 - v3[6];
  v5 = v4 / 2;
  QT::QPixmap::QPixmap((QT::QPixmap *)v14, v4 / 2, v4 / 2);
  QT::QColor::QColor(v16, 19);
  QT::QPixmap::fill((QT::QPixmap *)v14, (const QT::QColor *)v16);
  QT::QPainter::QPainter((QT::QPainter *)v12, (QT::QPaintDevice *)v14);
  QT::QPainter::setRenderHint(v12, 1, 1);
  QT::QBrush::QBrush(v13, 2, 1);
  QT::QPainter::setBrush((QT::QPainter *)v12, (const QT::QBrush *)v13);
  QT::QBrush::~QBrush((QT::QBrush *)v13);
  v16[2] = 1.0;
  v6 = (double)v4 * 0.5;
  v18 = v6 - 2.0;
  v16[1] = 0.25 * v6;
  v16[0] = 0.5 * v6;
  v17 = v6 - 0.25 * v6;
  v19 = v17;
  QT::QPainter::drawPolygon(v12, v16, 3, 0);
  QT::QPainter::end((QT::QPainter *)v12);
  v7 = a1[85];
  v8 = a1 + 89;
  a1[85] = v15;
  v15 = v7;
  QT::QPainter::~QPainter((QT::QPainter *)v12);
  v9 = a1 + 93;
  QT::QPixmap::~QPixmap((QT::QPixmap *)v14);
  do
  {
    v10 = *v8++;
    sub_345930(v10, v5, (__int64)a1, (const QT::QPixmap *)(a1 + 83));
  }
  while ( v8 != v9 );
  return v20 - __readfsqword(0x28u);
}
