unsigned __int64 __fastcall sub_4CF450(QT::QFrame *this, __int64 a2)
{
  QT::QHBoxLayout *v3; // r15
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, void **); // rax
  __int64 v6; // rax
  QT::QWidget *v7; // rdi
  __int64 (__fastcall *v8)(__int64, void **); // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  const __m128i *v11; // r12
  QT::QPushButton *v12; // rbx
  double v13; // xmm0_8
  __int64 v14; // rax
  const char *v15; // rdx
  size_t v16; // rax
  __m128i *v17; // rax
  __m128i si128; // xmm0
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  const char *v23; // [rsp+0h] [rbp-A0h]
  __int64 v24; // [rsp+0h] [rbp-A0h]
  _BYTE v26[8]; // [rsp+18h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-80h] BYREF
  __int64 v28; // [rsp+30h] [rbp-70h]
  _BYTE v29[40]; // [rsp+40h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  QT::QFrame::QFrame(this, a2, 0);
  *((_QWORD *)this + 8) = 0;
  *(_QWORD *)this = &DockWidgetTitle___vtable;
  *((_QWORD *)this + 2) = DockWidgetTitle___vtable_at__16;
  QT::QFrame::setFrameStyle(this, 6);
  QT::QFrame::setLineWidth(this, 1);
  *((_QWORD *)this + 5) = a2;
  QT::QWidget::setSizePolicy(this, 851968);
  v3 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v3);
  QT::QLayout::setContentsMargins(v3, 3, 3, 3, 5);
  QT::QWidget::setLayout(this, v3);
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v5 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 120LL);
  v28 = 0;
  *(_OWORD *)ptr = 0;
  v6 = v5(v4, ptr);
  *((_QWORD *)this + 6) = v6;
  v7 = (QT::QWidget *)v6;
  if ( ptr[0] )
  {
    if ( _InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      v7 = *((QT::QWidget **)this + 6);
    }
    else
    {
      free(ptr[0]);
      v7 = *((QT::QWidget **)this + 6);
    }
  }
  QT::QWidget::setFixedSize(v7, 16, 16);
  QT::QBoxLayout::addWidget(v3, *((_QWORD *)this + 6), 0, 0);
  v8 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 120LL);
  v28 = 0;
  *(_OWORD *)ptr = 0;
  v9 = v8(v4, ptr);
  *((_QWORD *)this + 7) = v9;
  v10 = v9;
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v10 = *((_QWORD *)this + 7);
  }
  QT::QBoxLayout::addWidget(v3, v10, 0, 0);
  QT::QBoxLayout::insertStretch(v3, -1, 0);
  v11 = (const __m128i *)&off_86D410;
  do
  {
    v12 = (QT::QPushButton *)operator new(0x28u);
    v13 = QT::QString::fromUtf8(ptr, 0, (const char *)&unk_5C2F25);
    v14 = QT::QWidget::style(this);
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, _QWORD, double))(*(_QWORD *)v14 + 256LL))(
      v26,
      v14,
      v11[-1].m128i_u32[0],
      0,
      0,
      v13);
    QT::QPushButton::QPushButton(v12, (const QT::QIcon *)v26, (const QT::QString *)ptr, this);
    QT::QIcon::~QIcon((QT::QIcon *)v26);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v15 = (const char *)v11[-1].m128i_i64[1];
    v16 = 0;
    if ( v15 )
    {
      v23 = (const char *)v11[-1].m128i_i64[1];
      v16 = strlen(v23);
      v15 = v23;
    }
    QT::QString::fromUtf8(ptr, v16, v15);
    QT::QWidget::setToolTip(v12, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    QT::QWidget::setFocusPolicy(v12, 0);
    QT::QWidget::setSizePolicy(v12, 0);
    QT::QWidget::setMaximumSize(v12, 16, 16);
    QT::QWidget::setFixedSize(v12, 16, 16);
    ptr[1] = nullptr;
    v24 = *((_QWORD *)this + 5);
    ptr[0] = &QT::QAbstractButton::clicked;
    v17 = (__m128i *)operator new(0x20u);
    si128 = _mm_load_si128(v11);
    v17->m128i_i32[0] = 1;
    v17[1] = si128;
    v17->m128i_i64[1] = (__int64)sub_4CD4C0;
    QT::QObject::connectImpl(v26, v12, ptr, v24, v11, v17, 0, 0, &QT::QAbstractButton::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v26);
    QT::QBoxLayout::addWidget(v3, v12, 0, 0);
    v11 += 2;
  }
  while ( bucket_column_sorting_t___vtable != (__int64 (__fastcall **)())v11 );
  QT::QWidget::setAutoFillBackground(this, 1);
  QT::QWidget::setAttribute(this, 93, 1, v19, v20, v21);
  QT::QVariant::QVariant((QT::QVariant *)v29, 0);
  QT::QObject::doSetProperty(this, "active", (const QT::QVariant *)v29, (QT::QVariant *)v29);
  QT::QVariant::~QVariant((QT::QVariant *)v29);
  return v30 - __readfsqword(0x28u);
}
