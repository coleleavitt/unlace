void __fastcall sub_2D4B0(int a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  __m128d *v4; // rax
  QT::QGraphicsView *v5; // rdi
  __m128d v6; // xmm2
  __m128d v7; // xmm0
  _OWORD v8[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = *(__m128d **)(a4 + 8);
      v5 = (QT::QGraphicsView *)a2[3];
      v6 = _mm_unpacklo_pd((__m128d)a2[2], (__m128d)a2[2]);
      v7 = _mm_add_pd(_mm_add_pd(v4[1], v6), v6);
      v8[0] = _mm_sub_pd(*v4, v6);
      v8[1] = v7;
      QT::QGraphicsView::setSceneRect(v5, (const QT::QRectF *)v8);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x20u);
  }
}
