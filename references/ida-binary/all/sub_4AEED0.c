unsigned __int64 __fastcall sub_4AEED0(QT::QWidget *this)
{
  QT::QPaintDevice *v1; // r12
  __int64 v2; // rax
  __m128d v3; // xmm1
  __m128d v4; // xmm0
  __int128 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[8]; // [rsp+8h] [rbp-100h] BYREF
  _BYTE v14[8]; // [rsp+10h] [rbp-F8h] BYREF
  QT::QWidget *v15; // [rsp+18h] [rbp-F0h]
  __int64 v16; // [rsp+20h] [rbp-E8h]
  _OWORD v17[2]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v18[40]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v19[24]; // [rsp+78h] [rbp-90h] BYREF
  int v20; // [rsp+90h] [rbp-78h]
  void *v21; // [rsp+98h] [rbp-70h]
  _BYTE v22[16]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v23; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+D8h] [rbp-30h]

  v1 = (QT::QWidget *)((char *)this + 16);
  v24 = __readfsqword(0x28u);
  QT::QPainter::QPainter((QT::QPainter *)v14);
  v15 = this;
  if ( !this )
    v1 = nullptr;
  v16 = QT::QWidget::style(this);
  QT::QPainter::begin((QT::QPainter *)v14, v1);
  QT::QPainter::setRenderHint(v14, 4, 1);
  QT::QStyleOptionButton::QStyleOptionButton((QT::QStyleOptionButton *)v18);
  (*(void (__fastcall **)(QT::QWidget *, _BYTE *))(*(_QWORD *)this + 440LL))(this, v18);
  v2 = *((_QWORD *)this + 4);
  v20 |= 1u;
  v3 = _mm_unpacklo_pd((__m128d)0xBFF0000000000000LL, (__m128d)0xBFF0000000000000LL);
  v4 = _mm_add_pd(
         _mm_add_pd(
           _mm_cvtepi32_pd(
             _mm_sub_epi32(
               _mm_add_epi32(
                 _mm_loadl_epi64((const __m128i *)(v2 + 28)),
                 _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
               _mm_loadl_epi64((const __m128i *)(v2 + 20)))),
           v3),
         v3);
  v17[0] = _mm_unpacklo_pd((__m128d)0x3FF8000000000000uLL, (__m128d)0x3FF8000000000000uLL);
  v17[1] = v4;
  QT::QPainter::save((QT::QPainter *)v14);
  QT::QPainter::setRenderHint(v14, 1, 1);
  if ( *((_DWORD *)this + 16) )
  {
    QT::QBrush::QBrush(v13, (char *)this + 64, 1);
    QT::QPainter::setBrush((QT::QPainter *)v14, (const QT::QBrush *)v13);
    QT::QBrush::~QBrush((QT::QBrush *)v13);
    QT::QPainter::setPen(v14, 0);
    *(_QWORD *)&v5 = sub_518C40((char *)this + 64);
    v23 = v5;
    QT::QBrush::QBrush(v13, &v23, 1);
    QT::QPalette::setBrush(v19, 5, 8, v13);
    QT::QBrush::~QBrush((QT::QBrush *)v13);
    QT::QPainter::drawRoundedRect(v14, v17, 0, v6, v7, v8, 2.0, 2.0);
  }
  QT::QPainter::setBrush(v14, 0);
  LODWORD(v23) = 1;
  *(_QWORD *)((char *)&v23 + 4) = 0x404040404040FFFFLL;
  WORD6(v23) = 0;
  QT::QPainter::setPen((QT::QPainter *)v14, (const QT::QColor *)&v23);
  QT::QPainter::drawRoundedRect(v14, v17, 0, v9, v10, v11, 2.0, 2.0);
  QT::QPainter::restore((QT::QPainter *)v14);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *, _BYTE *, QT::QWidget *))(*(_QWORD *)v16 + 184LL))(
    v16,
    2,
    v18,
    v14,
    v15);
  QT::QIcon::~QIcon((QT::QIcon *)v22);
  if ( v21 && !_InterlockedSub((volatile signed __int32 *)v21, 1u) )
    free(v21);
  QT::QStyleOption::~QStyleOption((QT::QStyleOption *)v18);
  QT::QPainter::~QPainter((QT::QPainter *)v14);
  return v24 - __readfsqword(0x28u);
}
