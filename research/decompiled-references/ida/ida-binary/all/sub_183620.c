unsigned __int64 __fastcall sub_183620(char *a1, __int64 a2, unsigned int a3, double a4)
{
  int v4; // r15d
  int v5; // r12d
  int v6; // eax
  QT::QWidget *v7; // rax
  QT::QWindow *v8; // rax
  int v9; // esi
  unsigned __int64 v10; // xmm1_8
  volatile signed __int32 *v12; // r8
  char v13; // al
  double v15; // [rsp+18h] [rbp-180h]
  volatile signed __int32 *v16; // [rsp+28h] [rbp-170h]
  _BYTE v17[8]; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-160h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-158h] BYREF
  __m128d v20; // [rsp+50h] [rbp-148h] BYREF
  __m128d v21; // [rsp+60h] [rbp-138h] BYREF
  _QWORD v22[2]; // [rsp+70h] [rbp-128h] BYREF
  void *ptr[4]; // [rsp+80h] [rbp-118h] BYREF
  _QWORD v24[4]; // [rsp+A0h] [rbp-F8h] BYREF
  void *v25; // [rsp+C0h] [rbp-D8h] BYREF
  unsigned __int64 v26; // [rsp+C8h] [rbp-D0h]
  void *v27; // [rsp+D0h] [rbp-C8h]
  int v28; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+E4h] [rbp-B4h]
  __int16 v30; // [rsp+ECh] [rbp-ACh]
  int v31; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+F4h] [rbp-A4h]
  __int16 v33; // [rsp+FCh] [rbp-9Ch]
  int v34; // [rsp+100h] [rbp-98h] BYREF
  __int64 v35; // [rsp+104h] [rbp-94h]
  __int16 v36; // [rsp+10Ch] [rbp-8Ch]
  int v37; // [rsp+110h] [rbp-88h] BYREF
  __int64 v38; // [rsp+114h] [rbp-84h]
  __int16 v39; // [rsp+11Ch] [rbp-7Ch]
  __int64 v40; // [rsp+128h] [rbp-70h]
  int v41; // [rsp+130h] [rbp-68h] BYREF
  __int64 v42; // [rsp+134h] [rbp-64h]
  __int16 v43; // [rsp+13Ch] [rbp-5Ch]
  unsigned __int64 v44; // [rsp+158h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v36 = 0;
  v39 = 0;
  v43 = 0;
  v34 = 0;
  v35 = 0xFFFF;
  v37 = 0;
  v38 = 0xFFFF;
  v41 = 0;
  v42 = 0xFFFF;
  sub_179E70((__int64 *)&v34, (__int64 *)&v37, (__int64)&v41, a2, a3);
  v4 = QT::QColor::rgba((QT::QColor *)&v41);
  v5 = QT::QColor::rgba((QT::QColor *)&v37);
  v6 = QT::QColor::rgba((QT::QColor *)&v34);
  QT::QString::asprintf((QT::QString *)ptr, "%08x;%08x;%08x", v6, v5, v4);
  QT::QObject::property((QT::QObject *)&v37, a1);
  v24[0] = v40 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !(unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)v24) )
  {
LABEL_2:
    QT::QVariant::QVariant((QT::QVariant *)&v41, (const QT::QString *)ptr);
    QT::QObject::doSetProperty(
      (QT::QObject *)a1,
      "libui_icon_metadata",
      (const QT::QVariant *)&v41,
      (QT::QVariant *)&v41);
    QT::QVariant::~QVariant((QT::QVariant *)&v41);
    v29 = 0xFFFF;
    v32 = 0xFFFF;
    v33 = 0;
    v35 = 0xFFFF;
    v30 = 0;
    v36 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    sub_179E70((__int64 *)&v28, (__int64 *)&v31, (__int64)&v34, a2, a3);
    if ( QT::QCoreApplication::self
      && (v7 = (QT::QWidget *)(*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 224LL))(QT::QCoreApplication::self)) != nullptr
      && (v8 = (QT::QWindow *)QT::QWidget::windowHandle(v7)) != nullptr )
    {
      QT::QWindow::devicePixelRatio(v8);
      v15 = a4;
      v9 = (int)(a4 * 16.0);
    }
    else
    {
      v9 = 16;
      v15 = 1.0;
    }
    QT::QPixmap::QPixmap((QT::QPixmap *)v24, v9, v9);
    v41 = 1;
    v42 = -65536;
    v43 = 0;
    QT::QPixmap::fill((QT::QPixmap *)v24, (const QT::QColor *)&v41);
    QT::QPainter::QPainter((QT::QPainter *)v18, (QT::QPaintDevice *)v24);
    QT::QPainter::setPen((QT::QPainter *)v18, (const QT::QColor *)&v31);
    QT::QBrush::QBrush(&v25, &v28, 1);
    QT::QPainter::setBrush((QT::QPainter *)v18, (const QT::QBrush *)&v25);
    QT::QBrush::~QBrush((QT::QBrush *)&v25);
    v22[0] = 0;
    v10 = _mm_shuffle_epi32(_mm_cvtsi32_si128((int)(v15 * 15.0) - 1), 224).m128i_u64[0];
    v22[1] = v10;
    QT::QPainter::drawRects(v18, v22, 1);
    if ( a3 != -1 )
    {
      QT::QBrush::QBrush(&v25, &v34, 1);
      QT::QPainter::setBrush((QT::QPainter *)v18, (const QT::QBrush *)&v25);
      QT::QBrush::~QBrush((QT::QBrush *)&v25);
      v25 = nullptr;
      v26 = v10;
      QT::QPainter::drawRects(v18, &v25, 1);
    }
    QT::QString::fromUtf8(&v25, 5, "Arial");
    QT::QFont::QFont((QT::QFont *)v19, (const QT::QString *)&v25, -1, -1, 0);
    if ( v25 && !_InterlockedSub((volatile signed __int32 *)v25, 1u) )
      free(v25);
    QT::QFont::setPixelSize((QT::QFont *)v19, (int)(v15 * 14.0));
    if ( a3 == -1 )
    {
      QT::QFont::setWeight(v19, 400);
      QT::QPainter::setFont((QT::QPainter *)v18, (const QT::QFont *)v19);
      QT::QString::fromUtf8(&v25, 1, "?");
      v20 = _mm_cvtepi32_pd(
              _mm_cvttpd_epi32(
                _mm_mul_pd(
                  _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v15, (__m128d)*(unsigned __int64 *)&v15),
                  (__m128d)xmmword_5DC4A0)));
      QT::QPainter::drawText(v18, &v20, &v25);
    }
    else
    {
      QT::QFont::setWeight(v19, 700);
      QT::QPainter::setFont((QT::QPainter *)v18, (const QT::QFont *)v19);
      QT::QString::fromUtf8(&v25, 1, "A");
      v21 = _mm_cvtepi32_pd(
              _mm_cvttpd_epi32(
                _mm_mul_pd(
                  _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v15, (__m128d)*(unsigned __int64 *)&v15),
                  (__m128d)xmmword_5DC490)));
      QT::QPainter::drawText(v18, &v21, &v25);
    }
    if ( v25 && !_InterlockedSub((volatile signed __int32 *)v25, 1u) )
      free(v25);
    QT::QPainter::end((QT::QPainter *)v18);
    QT::QIcon::QIcon((QT::QIcon *)v17, (const QT::QPixmap *)v24);
    QT::QFont::~QFont((QT::QFont *)v19);
    QT::QPainter::~QPainter((QT::QPainter *)v18);
    QT::QPixmap::~QPixmap((QT::QPixmap *)v24);
    QT::QAction::setIcon((QT::QAction *)a1, (const QT::QIcon *)v17);
    QT::QIcon::~QIcon((QT::QIcon *)v17);
    goto LABEL_18;
  }
  QT::QVariant::toString((QT::QVariant *)&v25);
  v12 = (volatile signed __int32 *)v25;
  if ( v27 != ptr[2]
    || (v16 = (volatile signed __int32 *)v25, v13 = QT::QtPrivate::equalStrings(v27, ptr[1], v27, v26), v12 = v16, !v13) )
  {
    if ( v12 && !_InterlockedSub(v12, 1u) )
      free(v25);
    goto LABEL_2;
  }
  if ( v16 && !_InterlockedSub(v16, 1u) )
    free(v25);
LABEL_18:
  QT::QVariant::~QVariant((QT::QVariant *)&v37);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v44 - __readfsqword(0x28u);
}
