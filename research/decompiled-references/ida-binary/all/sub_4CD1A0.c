unsigned __int64 __fastcall sub_4CD1A0(QT::QWidget *this, __int64 a2)
{
  __m128i si128; // xmm0
  char v3; // r12
  __m128i v4; // xmm0
  __int64 v6; // r14
  double v7; // xmm0_8
  __int64 v8; // [rsp+8h] [rbp-80h] BYREF
  void *v9[4]; // [rsp+10h] [rbp-78h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v11; // [rsp+38h] [rbp-50h]
  char *v12; // [rsp+48h] [rbp-40h]
  unsigned __int64 v13; // [rsp+58h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, a2, 0);
  *(_QWORD *)this = &DockArrowArea___vtable;
  *((_QWORD *)this + 2) = DockArrowArea___vtable_at__16;
  QT::QImage::QImage((QT::QWidget *)((char *)this + 48));
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(__m128i *)((char *)this + 72) = si128;
  *(__m128i *)((char *)this + 88) = si128;
  *(__m128i *)((char *)this + 104) = si128;
  *(__m128i *)((char *)this + 120) = si128;
  *(__m128i *)((char *)this + 136) = si128;
  sub_545630();
  *((_QWORD *)this + 5) = a2;
  QT::QWidget::setVisible(this, 0);
  QT::QWidget::setAcceptDrops(this, 1);
  QT::QString::fromUtf8(&ptr, 38, ":/docks/resources/docks/arrow_area.png");
  v3 = QT::QImage::load((QT::QWidget *)((char *)this + 48), (const QT::QString *)&ptr, nullptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    free(ptr);
    if ( v3 )
      goto LABEL_4;
  }
  else if ( v3 )
  {
LABEL_4:
    ptr = (void *)QT::QImage::size((QT::QWidget *)((char *)this + 48));
    QT::QWidget::resize(this, &ptr);
    QT::QWidget::setSizePolicy(this, 0);
    v4 = _mm_load_si128((const __m128i *)&xmmword_5DDD20);
    *((_DWORD *)this + 38) = 0;
    *(__m128i *)((char *)this + 72) = v4;
    *(__m128i *)((char *)this + 88) = _mm_load_si128((const __m128i *)&xmmword_5DDD30);
    *(__m128i *)((char *)this + 104) = _mm_load_si128((const __m128i *)&xmmword_5DDD40);
    *(__m128i *)((char *)this + 120) = _mm_load_si128((const __m128i *)&xmmword_5DDD50);
    *(__m128i *)((char *)this + 136) = _mm_load_si128((const __m128i *)&xmmword_5DDD60);
    return v13 - __readfsqword(0x28u);
  }
  v12 = "default";
  ptr = &dword_0 + 2;
  v11 = 0;
  QT::QMessageLogger::debug((QT::QMessageLogger *)&v8);
  v6 = v8;
  v7 = QT::QString::fromUtf8(v9, 25, "Can't load arrow_area.png");
  QT::QTextStream::operator<<(v6, v9, v7);
  if ( v9[0] && !_InterlockedSub((volatile signed __int32 *)v9[0], 1u) )
    free(v9[0]);
  if ( *(_BYTE *)(v8 + 48) )
    QT::QTextStream::operator<<(v8, 32);
  QT::QDebug::~QDebug((QT::QDebug *)&v8);
  return v13 - __readfsqword(0x28u);
}
