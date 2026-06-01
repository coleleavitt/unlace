unsigned __int64 __fastcall sub_39BE30(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, const QT::QColor *a5, char a6)
{
  __int64 v7; // r14
  int v8; // ebx
  double v9; // xmm0_8
  double v10; // xmm0_8
  QT::QPixmap *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  const QT::QPixmap *v14; // rdx
  int *v15; // rcx
  _BYTE v19[8]; // [rsp+28h] [rbp-E0h] BYREF
  void *ptr[4]; // [rsp+30h] [rbp-D8h] BYREF
  void *v21[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h]
  void *v23[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v24; // [rsp+80h] [rbp-88h]
  void *v25[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-68h]
  int v27; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+B4h] [rbp-54h]
  __int16 v29; // [rsp+BCh] [rbp-4Ch]
  unsigned __int64 v30; // [rsp+C8h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( (a6 & 1) != 0 )
  {
    v7 = 8;
    v8 = 8;
  }
  else
  {
    v7 = 6;
    v8 = 6;
  }
  v9 = QT::QString::fromUtf8(v21, 5, "%1,%2");
  QT::QString::arg(v23, v21, v7, 0, 10, 32);
  v10 = ((double (__fastcall *)(void **, const QT::QColor *, _QWORD, double))QT::QColor::name)(v25, a5, 0, v9);
  QT::QString::arg(ptr, v23, v25, 0, 32, v10);
  if ( v25[0] && !_InterlockedSub((volatile signed __int32 *)v25[0], 1u) )
    free(v25[0]);
  if ( v23[0] && !_InterlockedSub((volatile signed __int32 *)v23[0], 1u) )
    free(v23[0]);
  if ( v21[0] && !_InterlockedSub((volatile signed __int32 *)v21[0], 1u) )
    free(v21[0]);
  QT::QPixmap::QPixmap((QT::QPixmap *)v21);
  if ( !(unsigned __int8)QT::QPixmapCache::find((QT::QPixmapCache *)ptr, (const QT::QString *)v21, v11) )
  {
    QT::QPixmap::QPixmap((QT::QPixmap *)v23, v8, v8);
    QT::QPaintDevice::QPaintDevice((QT::QPaintDevice *)v25);
    v12 = v24;
    v24 = 0;
    v25[0] = (char *)&`vtable for'QT::QPixmap + 16;
    v13 = v22;
    v22 = v12;
    v26 = v13;
    QT::QPixmap::~QPixmap((QT::QPixmap *)v25);
    QT::QPixmap::~QPixmap((QT::QPixmap *)v23);
    v27 = 1;
    v28 = 0;
    v29 = 0;
    QT::QPixmap::fill((QT::QPixmap *)v21, (const QT::QColor *)&v27);
    QT::QPainter::QPainter((QT::QPainter *)v19, (QT::QPaintDevice *)v21);
    QT::QPainter::setRenderHint(v19, 1, 1);
    QT::QPen::QPen((QT::QPen *)v23, a5);
    QT::QPen::setWidth((QT::QPen *)v23, v8);
    QT::QPen::setCapStyle(v23, 32);
    QT::QPainter::setPen((QT::QPainter *)v19, (const QT::QPen *)v23);
    v25[0] = (void *)_mm_shuffle_epi32(_mm_cvtsi32_si128(v8 >> 1), 224).m128i_u64[0];
    QT::QPainter::drawPoints(v19, v25, 1);
    QT::QPen::~QPen((QT::QPen *)v23);
    QT::QPainter::~QPainter((QT::QPainter *)v19);
    QT::QPixmapCache::insert((QT::QPixmapCache *)ptr, (const QT::QString *)v21, v14);
  }
  v15 = (int *)(*a3 + 84 * a4);
  *(__m128d *)v25 = _mm_cvtepi32_pd(
                      _mm_add_epi32(
                        _mm_unpacklo_epi32(
                          (__m128i)(unsigned __int64)((v15[6] + (__int64)v15[4]) / 2),
                          _mm_cvtsi32_si128((v15[7] + (__int64)v15[5]) / 2)),
                        _mm_shuffle_epi32(_mm_cvtsi32_si128(-((unsigned int)v8 >> 1)), 224)));
  QT::QPainter::drawPixmap(a2, v25, v21);
  QT::QPixmap::~QPixmap((QT::QPixmap *)v21);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v30 - __readfsqword(0x28u);
}
