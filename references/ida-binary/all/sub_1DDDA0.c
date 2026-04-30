__int64 __fastcall sub_1DDDA0(QT::QWidget *this)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  int v3; // edx
  QT::QWidget *v4; // rbp
  QT::QLabel *v5; // rbp
  volatile signed __int32 *v6; // rax
  __int64 v7; // rbp
  __m128i *v8; // rax
  __m128i v9; // xmm0
  QT::QLabel *v10; // rbp
  volatile signed __int32 *v11; // rax
  __int64 v12; // rbp
  __m128i *v13; // rax
  __m128i v14; // xmm0
  QT::QHBoxLayout *v15; // rbx
  QT::QHBoxLayout *v16; // rbx
  __int64 v17; // rbx
  void (__fastcall *v18)(__int64); // rbp
  __int64 v19; // rax
  __m128i si128; // xmm0
  QT::QVBoxLayout *v21; // rbx
  _BYTE v23[8]; // [rsp+18h] [rbp-70h] BYREF
  __m128i v24; // [rsp+20h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+40h] [rbp-48h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v1 = operator new(0x28u);
  QT::QFrame::QFrame(v1, 0, 0);
  *((_QWORD *)this + 5) = v1;
  v2 = operator new(0x28u);
  QT::QFrame::QFrame(v2, 0, 0);
  v3 = *((_DWORD *)this + 32);
  *((_QWORD *)this + 6) = v2;
  if ( !v3 )
  {
    QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)ptr, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
    *((_DWORD *)this + 32) = (int)((double)(int)QT::QFontMetrics::height((QT::QFontMetrics *)ptr) * 1.5);
    QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)ptr);
  }
  QT::QFrame::setFrameStyle(*((QT::QFrame **)this + 5), 34);
  QT::QWidget::setFixedHeight(*((QT::QWidget **)this + 5), *((_DWORD *)this + 32));
  v4 = *((QT::QWidget **)this + 5);
  QT::QString::fromUtf8(ptr, 30, "border: 1px solid transparent;");
  QT::QWidget::setStyleSheet(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QFrame::setFrameStyle(*((QT::QFrame **)this + 6), 50);
  v5 = (QT::QLabel *)operator new(0x40u);
  *(_OWORD *)ptr = 0;
  v26 = 0;
  sub_498520(v5);
  v6 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)this + 7) = v5;
  if ( v6 )
  {
    if ( !_InterlockedSub(v6, 1u) )
      free(ptr[0]);
    v5 = *((QT::QLabel **)this + 7);
  }
  QT::QWidget::setFixedSize(v5, *((_DWORD *)this + 32) - 2, *((_DWORD *)this + 32) - 2);
  v24 = (__m128i)(unsigned __int64)sub_1DDCE0;
  v7 = *((_QWORD *)this + 7);
  ptr[0] = sub_5474A0;
  ptr[1] = nullptr;
  v8 = (__m128i *)operator new(0x20u);
  v9 = _mm_load_si128(&v24);
  v8->m128i_i64[1] = (__int64)sub_1DD9D0;
  v8->m128i_i32[0] = 1;
  v8[1] = v9;
  QT::QObject::connectImpl(v23, v7, ptr, this, &v24, v8, 0, 0, &off_896140);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v23);
  v10 = (QT::QLabel *)operator new(0x40u);
  *(_OWORD *)ptr = 0;
  v26 = 0;
  sub_498520(v10);
  v11 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)this + 8) = v10;
  if ( v11 )
  {
    if ( !_InterlockedSub(v11, 1u) )
      free(ptr[0]);
    v10 = *((QT::QLabel **)this + 8);
  }
  QT::QLabel::setText(v10, (QT::QWidget *)((char *)this + 104));
  QT::QWidget::setSizePolicy(*((_QWORD *)this + 8), &unk_750000);
  QT::QLabel::setAlignment(*((_QWORD *)this + 8), 128);
  v24 = (__m128i)(unsigned __int64)sub_1DDCE0;
  v12 = *((_QWORD *)this + 8);
  ptr[0] = sub_5474A0;
  ptr[1] = nullptr;
  v13 = (__m128i *)operator new(0x20u);
  v14 = _mm_load_si128(&v24);
  v13->m128i_i64[1] = (__int64)sub_1DD9D0;
  v13->m128i_i32[0] = 1;
  v13[1] = v14;
  QT::QObject::connectImpl(v23, v12, ptr, this, &v24, v13, 0, 0, &off_896140);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v23);
  v15 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v15);
  *((_QWORD *)this + 10) = v15;
  QT::QLayout::setContentsMargins(v15, 5, 5, 5, 5);
  QT::QWidget::setLayout(*((QT::QWidget **)this + 6), *((QT::QLayout **)this + 10));
  v16 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v16);
  *((_QWORD *)this + 9) = v16;
  QT::QLayout::setContentsMargins(v16, 5, 0, 5, 0);
  QT::QLayoutItem::setAlignment(*((_QWORD *)this + 9) + 16LL, 128);
  QT::QBoxLayout::addWidget(*((_QWORD *)this + 9), *((_QWORD *)this + 7), 0, 128);
  QT::QBoxLayout::addWidget(*((_QWORD *)this + 9), *((_QWORD *)this + 8), 0, 128);
  v17 = *((_QWORD *)this + 9);
  v18 = *(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 128LL);
  v19 = operator new(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_DWORD *)(v19 + 8) = 0;
  *(__m128i *)(v19 + 24) = si128;
  *(_QWORD *)(v19 + 12) = 0;
  *(_QWORD *)v19 = (char *)&`vtable for'QT::QSpacerItem + 16;
  *(_DWORD *)(v19 + 20) = (_DWORD)&loc_170000;
  v18(v17);
  QT::QWidget::setLayout(*((QT::QWidget **)this + 5), *((QT::QLayout **)this + 9));
  v21 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v21);
  *((_QWORD *)this + 11) = v21;
  QT::QLayout::setContentsMargins(v21, 0, 0, 0, 0);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 104LL))(*((_QWORD *)this + 11), 0);
  QT::QBoxLayout::addWidget(*((_QWORD *)this + 11), *((_QWORD *)this + 5), 0, 0);
  QT::QBoxLayout::addWidget(*((_QWORD *)this + 11), *((_QWORD *)this + 6), 0, 0);
  QT::QWidget::setLayout(this, *((QT::QLayout **)this + 11));
  sub_1DDAE0((__int64)this);
  if ( *((_DWORD *)this + 24) )
    return QT::QWidget::hide(*((QT::QWidget **)this + 6));
  else
    return QT::QWidget::show(*((QT::QWidget **)this + 6));
}
