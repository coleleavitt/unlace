unsigned __int64 __fastcall sub_28A20(QT::QGraphicsItem *this, int a2)
{
  __int64 v3; // rsi
  const char *v4; // rbx
  size_t v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm0
  __int64 v8; // rcx
  void *v9; // rdx
  __m128d v10; // xmm4
  void **v11; // rsi
  __int64 v13; // rax
  void *v14; // rdx
  void *v15; // rdx
  __int64 v16; // rdx
  double i; // [rsp+0h] [rbp-B8h]
  __m128d v18; // [rsp+0h] [rbp-B8h]
  __m128d v19; // [rsp+0h] [rbp-B8h]
  double v20; // [rsp+18h] [rbp-A0h]
  const char *v21; // [rsp+20h] [rbp-98h] BYREF
  __int128 v22; // [rsp+28h] [rbp-90h]
  void *v23[2]; // [rsp+40h] [rbp-78h] BYREF
  __m128d v24; // [rsp+50h] [rbp-68h]
  void *ptr[2]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v26; // [rsp+70h] [rbp-48h]
  unsigned __int64 v27; // [rsp+88h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v3 = *((_QWORD *)this + 2);
  v22 = 0;
  v21 = nullptr;
  if ( get_ea_name(&v21, v3, 28, 0) >= 0 && (unsigned __int64)v22 > 1
    || (get_ea_name(&v21, *((_QWORD *)this + 2), 64, 0), (unsigned __int64)v22 > 1)
    || (get_nice_colored_name(&v21, *((_QWORD *)this + 2), 2), (_QWORD)v22) )
  {
    v4 = v21;
    if ( v21 && *v21 )
      v5 = strlen(v21 + 1) + 1;
    else
      v5 = 0;
  }
  else
  {
    v4 = s1;
    v5 = 0;
  }
  QT::QString::fromUtf8(ptr, v5, v4);
  v6 = *((_QWORD *)this + 10);
  v7 = _mm_loadu_si128((const __m128i *)this + 4);
  v8 = v26;
  *((__m128i *)this + 4) = _mm_load_si128((const __m128i *)ptr);
  *((_QWORD *)this + 10) = v8;
  *(_QWORD *)&v26 = v6;
  *(__m128i *)ptr = v7;
  if ( v7.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v7.m128i_i64[0], 1u) )
    free(ptr[0]);
  QT::QTextLayout::clearLayout((QT::QGraphicsItem *)((char *)this + 56));
  QT::QTextLayout::setCacheEnabled((QT::QGraphicsItem *)((char *)this + 56), 1);
  if ( a2 > 0 && a2 < *((_QWORD *)this + 10) )
  {
    QT::QString::QString(v23, *((_QWORD *)this + 9));
    v13 = QT::QString::append(v23, "...", 3);
    v14 = *(void **)v13;
    *(_QWORD *)v13 = 0;
    ptr[0] = v14;
    v15 = *(void **)(v13 + 8);
    *(_QWORD *)(v13 + 8) = 0;
    ptr[1] = v15;
    v16 = *(_QWORD *)(v13 + 16);
    *(_QWORD *)(v13 + 16) = 0;
    *(_QWORD *)&v26 = v16;
    QT::QTextLayout::setText((char *)this + 56, ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v23[0] && !_InterlockedSub((volatile signed __int32 *)v23[0], 1u) )
      free(v23[0]);
  }
  else
  {
    QT::QTextLayout::setText((char *)this + 56, (char *)this + 64);
  }
  QT::QTextLayout::beginLayout((QT::QGraphicsItem *)((char *)this + 56));
  v20 = 0.0;
  for ( i = 0.0; ; i = v20 + i )
  {
    LODWORD(ptr[0]) = QT::QTextLayout::createLine((QT::QGraphicsItem *)((char *)this + 56));
    ptr[1] = v9;
    if ( !v9 )
      break;
    QT::QTextLine::setLineWidth((QT::QTextLine *)ptr, 100000.0);
    QT::QTextLine::naturalTextWidth((QT::QTextLine *)ptr);
    v20 = fmax(100000.0, v20);
    QT::QTextLine::height((QT::QTextLine *)ptr);
  }
  v10.m128d_f64[0] = v20;
  v10.m128d_f64[1] = i;
  v18 = v10;
  QT::QTextLayout::endLayout((QT::QGraphicsItem *)((char *)this + 56));
  v11 = (void **)((char *)this + 24);
  *(_OWORD *)v23 = xmmword_40FC0;
  v19 = _mm_add_pd(_mm_unpacklo_pd((__m128d)0x4024000000000000uLL, (__m128d)0x4024000000000000uLL), v18);
  v24 = v19;
  if ( !sub_283F0((double *)v23, (double *)this + 3) )
  {
    QT::QGraphicsItem::prepareGeometryChange(this);
    v11 = ptr;
    *(_OWORD *)ptr = 0;
    *(__m128d *)((char *)this + 40) = v19;
    *(_OWORD *)((char *)this + 24) = xmmword_40FC0;
    v26 = 0;
    QT::QGraphicsItem::update(this, (const QT::QRectF *)ptr);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, (const char *)v11);
  }
  return v27 - __readfsqword(0x28u);
}
