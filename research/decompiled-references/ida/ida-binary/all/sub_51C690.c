_QWORD *__fastcall sub_51C690(QT::QWidget *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __m128d v5; // xmm0
  int v6; // r13d
  QT::QPixmap *v7; // rbp
  __m128d v9; // xmm1
  QT::QPixmap *v10; // rbx
  __int64 v11; // rdx
  void *v12; // rax
  const char *v13; // r12
  size_t v14; // rax
  int *v15; // r15
  __m128d v16; // xmm0
  __m128d v17; // xmm1
  double v18; // xmm3_8
  __m128d v19; // xmm1
  void *v20; // rdx
  QT::QPixmap *v21; // [rsp+8h] [rbp-120h]
  double v22; // [rsp+20h] [rbp-108h]
  double v23; // [rsp+28h] [rbp-100h]
  QT::QPixmap **v24; // [rsp+30h] [rbp-F8h]
  double v25; // [rsp+50h] [rbp-D8h]
  _BYTE v26[8]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v27[8]; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE v28[16]; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v29[2]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v30[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-88h]
  void *ptr[4]; // [rsp+B0h] [rbp-78h] BYREF
  _BYTE v33[24]; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+E8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( (int)a2 > 3 )
  {
    if ( !under_debugger )
      interr(40532, a2, a3, a4, a5);
    BUG();
  }
  v5.m128d_f64[0] = (double)(*(_DWORD *)(*((_QWORD *)a1 + 4) + 32LL) - 1 - *(_DWORD *)(*((_QWORD *)a1 + 4) + 24LL))
                  * sub_47BE20(a1);
  if ( fabs(v5.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v9 = 0;
    v9.m128d_f64[0] = (double)(int)v5.m128d_f64[0];
    *(_QWORD *)&v5.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                    v9.m128d_f64[0]
                                  - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v9, v5).m128d_f64[0] & 0x3FF0000000000000LL))
                                | *(_QWORD *)&v5.m128d_f64[0] & 0x8000000000000000LL;
  }
  v6 = (int)v5.m128d_f64[0];
  v7 = (QT::QWidget *)((char *)a1 + 24 * (int)a2 + 40);
  if ( (int)v5.m128d_f64[0] != (unsigned int)QT::QPixmap::height(v7) && v6 > 0 )
  {
    if ( !byte_8D2430 )
    {
      v13 = sub_47A3E0();
      v14 = 0;
      if ( v13 && *v13 )
        v14 = strlen(v13 + 1) + 1;
      QT::QString::fromLocal8Bit(ptr, v14, v13);
      QT::QFont::QFont((QT::QFont *)v28, (const QT::QString *)ptr, 20, -1, 0);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      QT::QFont::setWeight(v28, 700);
      v25 = sub_47BE20(a1);
      QT::QFont::pointSizeF((QT::QFont *)v28);
      QT::QFont::setPointSizeF((QT::QFont *)v28, v25 * v25);
      QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v26, (const QT::QFont *)v28);
      QT::QFontMetricsF::averageCharWidth((QT::QFontMetricsF *)v26);
      v22 = v25 * v25;
      QT::QFontMetricsF::height((QT::QFontMetricsF *)v26);
      QT::QFontMetricsF::descent((QT::QFontMetricsF *)v26);
      v24 = (QT::QPixmap **)qword_8D2440;
      v15 = &dword_8D23E0;
      v23 = v22 - v22 - 1.0;
      do
      {
        v16 = (__m128d)0x4000000000000000uLL;
        v21 = (QT::QPixmap *)operator new(0x18u);
        v16.m128d_f64[0] = v23 + v23 + 2.0;
        if ( fabs(v16.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v17.m128d_f64[0] = (double)(int)v16.m128d_f64[0];
          *(_QWORD *)&v16.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                           v17.m128d_f64[0]
                                         + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v16, v17).m128d_f64[0] & 0x3FF0000000000000LL))
                                       | *(_QWORD *)&v16.m128d_f64[0] & 0x8000000000000000LL;
        }
        v18 = v25 * v25;
        if ( fabs(v22) < 4.503599627370496e15 )
        {
          v19.m128d_f64[0] = (double)(int)v22;
          *(_QWORD *)&v18 = COERCE_UNSIGNED_INT64(
                              COERCE_DOUBLE(
                                *(_QWORD *)&_mm_cmpgt_sd((__m128d)*(unsigned __int64 *)&v22, v19).m128d_f64[0]
                              & 0x3FF0000000000000LL)
                            + v19.m128d_f64[0])
                          | *(_QWORD *)&v22 & 0x8000000000000000LL;
        }
        QT::QPixmap::QPixmap(v21, (int)v18, (int)v16.m128d_f64[0]);
        QT::QPainter::QPainter((QT::QPainter *)v27, v21);
        ptr[0] = (void *)QT::QPixmap::rect(v21);
        ptr[1] = v20;
        QT::QColor::QColor(v33, 3);
        QT::QPainter::fillRect(v27, ptr, v33);
        QT::QPainter::setFont((QT::QPainter *)v27, (const QT::QFont *)v28);
        QT::QPainter::setPen((QT::QPainter *)v27, (const QT::QColor *)(v15 + 1));
        QT::QString::QString(ptr, *(unsigned __int16 *)v15);
        v30[0] = 0;
        *(double *)&v30[1] = (double)(int)v23;
        QT::QPainter::drawText(v27, v30, ptr);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        QT::QString::QString(ptr, *((unsigned __int16 *)v15 + 1));
        v29[0] = 0;
        *(double *)&v29[1] = (double)(int)(v23 + v23);
        QT::QPainter::drawText(v27, v29, ptr);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        v5.m128d_f64[0] = v25;
        QT::QPixmap::setDevicePixelRatio(v21, v25);
        v15 += 5;
        *v24 = v21;
        QT::QPainter::~QPainter((QT::QPainter *)v27);
        ++v24;
      }
      while ( v15 != (int *)&byte_8D2430 );
      byte_8D2430 = 1;
      QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v26);
      QT::QFont::~QFont((QT::QFont *)v28);
    }
    v10 = (QT::QPixmap *)qword_8D2440[(int)a2];
    QT::QPixmap::scaledToHeight(v30, v10, (unsigned int)v6, 1);
    QT::QPaintDevice::QPaintDevice((QT::QPaintDevice *)ptr);
    v11 = v31;
    v31 = 0;
    ptr[0] = (char *)&`vtable for'QT::QPixmap + 16;
    v12 = *((void **)a1 + 3 * (int)a2 + 7);
    *((_QWORD *)a1 + 3 * (int)a2 + 7) = v11;
    ptr[2] = v12;
    QT::QPixmap::~QPixmap((QT::QPixmap *)ptr);
    QT::QPixmap::~QPixmap((QT::QPixmap *)v30);
    QT::QColor::QColor(v33, 3);
    QT::QPixmap::createMaskFromColor(ptr, v7, v33, 0);
    QT::QPixmap::setMask(v7, (const QT::QBitmap *)ptr);
    QT::QPixmap::devicePixelRatio(v10);
    QT::QPixmap::setDevicePixelRatio(v7, v5.m128d_f64[0]);
    QT::QBitmap::~QBitmap((QT::QBitmap *)ptr);
  }
  return (_QWORD *)((char *)a1 + 24 * (int)a2 + 40);
}
