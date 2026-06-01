unsigned __int64 __fastcall sub_2A6C10(QT::QWidget *this)
{
  __int64 v1; // rax
  __m128i si128; // xmm1
  __m128i v3; // xmm2
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, 0, 0);
  v1 = QT::QMetaObject::className((QT::QMetaObject *)&off_885220);
  sub_525E40((char *)this + 40, &off_860F80, 2, v1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *((_QWORD *)this + 15) = 0;
  *(_OWORD *)((char *)this + 104) = 0;
  *((__m128i *)this + 8) = si128;
  *(_QWORD *)this = &GraphMiniView___vtable;
  *((_QWORD *)this + 5) = GraphMiniView___vtable_at__40;
  *((_QWORD *)this + 2) = GraphMiniView___vtable_at__16;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 22) = 0xFFFFF8E0FFFFFFFFLL;
  *(_OWORD *)((char *)this + 152) = 0;
  QT::QString::fromUtf8(ptr, 14, "Graph overview");
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *((_QWORD *)this + 21) = 0;
  *((__m128i *)this + 8) = v3;
  QT::QWidget::setFocusPolicy(this, 0);
  QT::QObject::connect(ptr, qword_8CD748, "2endTraceBufChange()", this, "1traceBufChangeCompleted()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  return v6 - __readfsqword(0x28u);
}
