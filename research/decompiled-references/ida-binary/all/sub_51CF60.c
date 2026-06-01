unsigned __int64 __fastcall sub_51CF60(_QWORD *a1)
{
  __int64 v1; // rax
  const QT::QObject *v2; // rsi
  __int64 v3; // rax
  int v5; // eax
  int v6; // ebx
  __int64 v7; // r13
  __int64 v8; // rdx
  int v9; // eax
  double v10; // [rsp+0h] [rbp-78h]
  double v11; // [rsp+8h] [rbp-70h]
  _BYTE v12[8]; // [rsp+18h] [rbp-60h] BYREF
  double v13[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-40h]
  unsigned __int64 v16; // [rsp+48h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  QT::QLineEdit::paintEvent(a1);
  v1 = a1[1];
  v15 = 0;
  v14 = 0;
  v2 = *(const QT::QObject **)(v1 + 16);
  v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89B360, v2);
  if ( v3 )
  {
    v2 = (const QT::QObject *)&v14;
    sub_51CCB0((QT::QWidget *)a1, &v14, v3, 0.0);
  }
  if ( (_QWORD)v15 )
  {
    v2 = (const QT::QObject *)(a1 + 2);
    QT::QPainter::QPainter((QT::QPainter *)v12, (QT::QPaintDevice *)(a1 + 2));
    v11 = sub_47BE20((QT::QWidget *)a1);
    if ( (_QWORD)v15 )
    {
      v5 = 5;
      v6 = 0;
      v7 = 0;
      do
      {
        v2 = (const QT::QObject *)v13;
        v8 = *(_QWORD *)(v14 + 8 * v7);
        v13[1] = 1.0;
        v10 = (double)v5;
        v13[0] = (double)v5;
        QT::QPainter::drawPixmap(v12, v13, v8);
        v9 = QT::QPixmap::width(*(QT::QPixmap **)(v14 + 8 * v7));
        v7 = ++v6;
        v5 = (int)((double)v9 / v11 + v11 + v10);
      }
      while ( v6 < (unsigned __int64)v15 );
    }
    QT::QPainter::~QPainter((QT::QPainter *)v12);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, (const char *)v2);
  }
  return v16 - __readfsqword(0x28u);
}
