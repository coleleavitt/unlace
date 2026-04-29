__int64 __fastcall sub_38230(QT::QGraphicsView *this, __int64 a2, __m128i a3, __m128i a4)
{
  QT::QEventPoint *v5; // rdi
  __m128d v6; // xmm2
  __int64 v7; // rdx
  int v8; // eax
  const QT::QObject *v10; // rax
  QT::QGraphicsScene *v11; // rax
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v5 = *(QT::QEventPoint **)(a2 + 48);
  v12[1] = __readfsqword(0x28u);
  QT::QEventPoint::position(v5);
  v6 = (__m128d)_mm_unpacklo_epi64(a3, a4);
  v12[0] = _mm_cvttpd_epi32(
             _mm_add_pd(
               _mm_or_pd(
                 _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL),
                 _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), v6)),
               v6)).m128i_u64[0];
  v7 = QT::QGraphicsView::itemAt(this, v12);
  v8 = *(_DWORD *)(a2 + 32);
  if ( !v7 && (v8 & 0x6000000) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 68) & 2) == 0 )
      goto LABEL_7;
    v10 = (const QT::QObject *)QT::QGraphicsView::scene(this);
    v11 = (QT::QGraphicsScene *)QT::QMetaObject::cast((QT::QMetaObject *)&off_4EB40, v10);
    QT::QGraphicsScene::clearSelection(v11);
    v8 = *(_DWORD *)(a2 + 32);
  }
  if ( (v8 & 0x4000000) == 0 )
  {
LABEL_7:
    QT::QGraphicsView::setDragMode(this, 1);
    return QT::QGraphicsView::mousePressEvent(this, a2);
  }
  QT::QGraphicsView::setDragMode(this, 2);
  return QT::QGraphicsView::mousePressEvent(this, a2);
}
