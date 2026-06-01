unsigned __int64 __fastcall sub_345930(QT::QAbstractButton *this, int a2, __int64 a3, const QT::QPixmap *a4)
{
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rax
  _BYTE v10[16]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v11; // [rsp+10h] [rbp-D8h]
  _BYTE v12[16]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-B8h]
  _QWORD v14[4]; // [rsp+40h] [rbp-A8h] BYREF
  _OWORD v15[4]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-48h]
  __int16 v17; // [rsp+A8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+B8h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  *((_DWORD *)this + 10) = a2;
  QT::QPixmap::QPixmap((QT::QPixmap *)v10, a4);
  v15[1] = 0;
  v16 = 0x3FF0000000000000LL;
  v17 = 0;
  v5 = *(_QWORD *)(a3 + 696);
  v15[0] = _mm_loadl_epi64((const __m128i *)&dbl_5DC300);
  v6 = *(_BYTE *)(v5 + 345) == 0;
  v15[2] = v15[0];
  v15[3] = 0;
  if ( v6 )
    QT::QTransform::rotate(v15, 2, -90.0);
  if ( !*((_BYTE *)this + 44) )
    QT::QTransform::rotate(v15, 2, -180.0);
  QT::QPixmap::transformed(v12, v10, v15, 0);
  QT::QPaintDevice::QPaintDevice((QT::QPaintDevice *)v14);
  v7 = v13;
  v13 = 0;
  v14[0] = (char *)&`vtable for'QT::QPixmap + 16;
  v8 = v11;
  v11 = v7;
  v14[2] = v8;
  QT::QPixmap::~QPixmap((QT::QPixmap *)v14);
  QT::QPixmap::~QPixmap((QT::QPixmap *)v12);
  QT::QIcon::QIcon((QT::QIcon *)v14, (const QT::QPixmap *)v10);
  QT::QAbstractButton::setIcon(this, (const QT::QIcon *)v14);
  QT::QIcon::~QIcon((QT::QIcon *)v14);
  v14[0] = QT::QPixmap::size((QT::QPixmap *)v10);
  QT::QAbstractButton::setIconSize(this, v14);
  v14[0] = _mm_shuffle_epi32(_mm_cvtsi32_si128(*((_DWORD *)this + 10)), 224).m128i_u64[0];
  QT::QWidget::resize(this, v14);
  QT::QPixmap::~QPixmap((QT::QPixmap *)v10);
  return v18 - __readfsqword(0x28u);
}
