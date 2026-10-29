__int64 __fastcall sub_1CA9D0(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebp
  _QWORD *v6; // rbp
  _BYTE v7[8]; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v8[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  QT::QPixmap::QPixmap((QT::QPixmap *)v8);
  v4 = 0;
  if ( (unsigned __int8)QT::QPixmap::loadFromData(v8, a1, a2, a3, 0) )
  {
    v6 = QT::QCoreApplication::self;
    QT::QIcon::QIcon((QT::QIcon *)v7, (const QT::QPixmap *)v8);
    v4 = sub_481B70(v6, v7, 0);
    QT::QIcon::~QIcon((QT::QIcon *)v7);
  }
  QT::QPixmap::~QPixmap((QT::QPixmap *)v8);
  return v4;
}
