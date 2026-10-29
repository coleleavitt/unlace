unsigned __int64 __fastcall sub_52A170(QT::QWidget *this, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rax
  size_t v8; // rax
  __int64 v9; // rax
  size_t v10; // rax
  const char *v11; // r15
  size_t v12; // rdx
  double v13; // xmm0_8
  _QWORD *v14; // r14
  __int64 v15; // r15
  __int64 (__fastcall *v16)(__int64, void **, double); // r13
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  const char *v19; // rdx
  unsigned __int64 v20; // rcx
  double v21; // xmm0_8
  __int64 (__fastcall *v22)(__int64, void **); // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  QT::QObject *v25; // r13
  double v26; // xmm0_8
  QT::QObject *v27; // r13
  __int64 v28; // r15
  __m128i *v29; // rax
  __m128i si128; // xmm0
  unsigned int v31; // esi
  QT::QDialogButtonBox *v32; // r15
  QT::QWidget *v33; // r15
  __m128i *v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rsi
  __m128i *v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // rsi
  __m128i *v40; // rax
  __m128i v41; // xmm0
  QT::QHBoxLayout *v42; // r14
  QT::QVBoxLayout *v43; // r13
  unsigned __int64 v44; // rax
  int v45; // eax
  unsigned __int8 v46; // si
  size_t v48; // rax
  const char *v49; // r14
  QT::QPlainTextEdit *v50; // r13
  signed __int64 v51; // rax
  size_t v52; // r15
  void *v53; // rax
  const void *v54; // rsi
  const char *v55; // [rsp+0h] [rbp-90h]
  _QWORD v56[2]; // [rsp+10h] [rbp-80h] BYREF
  _QWORD v57[2]; // [rsp+20h] [rbp-70h] BYREF
  __m128i v58; // [rsp+30h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-50h] BYREF
  __int64 v60; // [rsp+50h] [rbp-40h]
  unsigned __int64 v61; // [rsp+58h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  sub_53A8A0(this, a4, a5);
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 2) = text_area_dialog_t___vtable_at__16;
  v7 = *(_QWORD *)(a3 + 72);
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 10) = v7;
  *((_OWORD *)this + 6) = 0;
  v8 = *(_QWORD *)(a3 + 88);
  *(_QWORD *)this = &text_area_dialog_t___vtable;
  *((_QWORD *)this + 9) = 0;
  if ( v8 )
  {
    v52 = v8;
    v53 = (void *)qalloc_or_throw(v8);
    *((_QWORD *)this + 11) = v53;
    v54 = *(const void **)(a3 + 80);
    *((_QWORD *)this + 13) = v52;
    memcpy(v53, v54, v52);
    *((_QWORD *)this + 12) = v52;
  }
  v9 = *(_QWORD *)(a3 + 8);
  if ( v9 )
  {
    v10 = v9 - 1;
    v11 = *(const char **)a3;
    v12 = v10 >> 63;
  }
  else
  {
    LOBYTE(v12) = 0;
    v10 = 0;
    v11 = &s1;
  }
  if ( !v11 || (_BYTE)v12 )
  {
    v10 = 0;
    if ( v11 )
      v10 = strlen(v11);
  }
  v13 = QT::QString::fromUtf8(ptr, v10, v11);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QObject::installEventFilter(*((QT::QObject **)this + 6), this);
  v14 = QT::QCoreApplication::self;
  v15 = (*(__int64 (__fastcall **)(_QWORD *, double))(QT::QCoreApplication::self[2] + 88LL))(
          QT::QCoreApplication::self + 2,
          v13);
  v16 = *(__int64 (__fastcall **)(__int64, void **, double))(*(_QWORD *)v15 + 120LL);
  v17 = *(_QWORD *)(a3 + 32);
  if ( v17 )
  {
    v18 = v17 - 1;
    v19 = *(const char **)(a3 + 24);
    v20 = v18 >> 63;
  }
  else
  {
    LOBYTE(v20) = 0;
    v18 = 0;
    v19 = &s1;
  }
  if ( (!v19 || (_BYTE)v20) && (v18 = 0, v19) )
  {
    v55 = v19;
    v48 = strlen(v19);
    v21 = QT::QString::fromUtf8(ptr, v48, v55);
  }
  else
  {
    v21 = QT::QString::fromUtf8(ptr, v18, v19);
  }
  *((_QWORD *)this + 7) = v16(v15, ptr, v21);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v22 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v15 + 120LL);
  v60 = 0;
  *(_OWORD *)ptr = 0;
  v23 = v22(v15, ptr);
  *((_QWORD *)this + 8) = v23;
  v24 = v23;
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v24 = *((_QWORD *)this + 8);
  }
  QT::QLabel::setAlignment(v24, 2);
  v25 = *((QT::QObject **)this + 7);
  v26 = QT::QString::fromUtf8(ptr, 12, "prompt_label");
  QT::QObject::doSetObjectName(v25, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v27 = *((QT::QObject **)this + 8);
  QT::QString::fromUtf8(ptr, 13, "counter_label", v26);
  QT::QObject::doSetObjectName(v27, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v28 = *((_QWORD *)this + 6);
  ptr[1] = nullptr;
  ptr[0] = sub_529D70;
  v56[1] = 0;
  v56[0] = sub_54ED70;
  v29 = (__m128i *)operator new(0x20u);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v29->m128i_i32[0] = 1;
  v29[1] = si128;
  v29->m128i_i64[1] = (__int64)sub_529DB0;
  QT::QObject::connectImpl(&v58, v28, v56, this, ptr, v29, 0, 0, &off_89E260);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v58);
  v31 = 20972544;
  if ( *((_QWORD *)this + 12) <= 1u )
    v31 = 4195328;
  v32 = (QT::QDialogButtonBox *)operator new(0x28u);
  QT::QDialogButtonBox::QDialogButtonBox(v32, v31, 0, *(double *)si128.m128i_i64);
  *((_QWORD *)this + 9) = v32;
  QT::QDialogButtonBox::setCenterButtons(v32, 1);
  if ( *((_QWORD *)this + 12) > 1u )
  {
    v33 = (QT::QWidget *)QT::QDialogButtonBox::button(*((_QWORD *)this + 9), 0x1000000);
    QT::QWidget::setEnabled(v33, 1);
    (*(void (__fastcall **)(void **, _QWORD *))(*v14 + 168LL))(ptr, v14);
    QT::QAbstractButton::setShortcut(v33, (const QT::QKeySequence *)ptr);
    QT::QKeySequence::~QKeySequence((QT::QKeySequence *)ptr);
    ptr[1] = nullptr;
    ptr[0] = sub_529D80;
    v57[1] = 0;
    v57[0] = &QT::QAbstractButton::clicked;
    v34 = (__m128i *)operator new(0x20u);
    v35 = _mm_load_si128((const __m128i *)ptr);
    v34->m128i_i32[0] = 1;
    v34[1] = v35;
    v34->m128i_i64[1] = (__int64)sub_529E30;
    QT::QObject::connectImpl(&v58, v33, v57, this, ptr, v34, 0, 0, &QT::QAbstractButton::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v58);
  }
  v36 = *((_QWORD *)this + 9);
  ptr[0] = &qword_1B8 + 1;
  ptr[1] = nullptr;
  v58.m128i_i64[0] = (__int64)&QT::QDialogButtonBox::accepted;
  v58.m128i_i64[1] = 0;
  v37 = (__m128i *)operator new(0x20u);
  v38 = _mm_load_si128((const __m128i *)ptr);
  v37->m128i_i32[0] = 1;
  v37->m128i_i64[1] = (__int64)sub_4267D0;
  v37[1] = v38;
  QT::QObject::connectImpl(v57, v36, &v58, this, ptr, v37, 0, 0, &QT::QDialogButtonBox::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v57);
  v39 = *((_QWORD *)this + 9);
  v58 = (__m128i)0x1C1uLL;
  ptr[0] = &QT::QDialogButtonBox::rejected;
  ptr[1] = nullptr;
  v40 = (__m128i *)operator new(0x20u);
  v41 = _mm_load_si128(&v58);
  v40->m128i_i64[1] = (__int64)sub_4267D0;
  v40->m128i_i32[0] = 1;
  v40[1] = v41;
  QT::QObject::connectImpl(v57, v39, ptr, this, &v58, v40, 0, 0, &QT::QDialogButtonBox::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v57);
  v42 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v42);
  QT::QBoxLayout::addWidget(v42, *((_QWORD *)this + 7), 0, 0);
  QT::QBoxLayout::addWidget(v42, *((_QWORD *)this + 8), 0, 0);
  v43 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v43);
  QT::QBoxLayout::addLayout(v43, v42, 0);
  QT::QBoxLayout::addWidget(v43, *((_QWORD *)this + 6), 0, 0);
  QT::QBoxLayout::addWidget(v43, *((_QWORD *)this + 9), 0, 0);
  QT::QWidget::setLayout(this, v43);
  QT::QWidget::setWindowFlags(this, *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0xFFFEFFFF);
  if ( *((_QWORD *)this + 10) )
  {
    QT::QObject::connect(ptr, *((_QWORD *)this + 6), "2textChanged()", this, "1on_textChanged()", 0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
    if ( *(_QWORD *)(a3 + 32) > 1u )
      goto LABEL_34;
LABEL_49:
    QT::QWidget::hide(*((QT::QWidget **)this + 7));
    v44 = *(_QWORD *)(a3 + 56);
    if ( v44 <= 1 )
      goto LABEL_35;
    goto LABEL_50;
  }
  QT::QWidget::hide(*((QT::QWidget **)this + 8));
  if ( *(_QWORD *)(a3 + 32) <= 1u )
    goto LABEL_49;
LABEL_34:
  v44 = *(_QWORD *)(a3 + 56);
  if ( v44 <= 1 )
    goto LABEL_35;
LABEL_50:
  v49 = *(const char **)(a3 + 48);
  v50 = *((QT::QPlainTextEdit **)this + 6);
  v51 = v44 - 1;
  if ( !v49 || v51 < 0 )
  {
    v51 = 0;
    if ( v49 )
      v51 = strlen(*(const char **)(a3 + 48));
  }
  QT::QString::fromUtf8(ptr, v51, v49);
  QT::QPlainTextEdit::setPlainText(v50, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    v45 = *(_DWORD *)(a3 + 104);
    if ( v45 != -1 )
      goto LABEL_36;
    goto LABEL_55;
  }
LABEL_35:
  v45 = *(_DWORD *)(a3 + 104);
  if ( v45 != -1 )
  {
LABEL_36:
    v46 = v45 != 0;
    goto LABEL_37;
  }
LABEL_55:
  v46 = *(_BYTE *)(a3 + 108);
LABEL_37:
  sub_527D10(*((__m128i **)this + 6), 4 * v46);
  if ( *(_BYTE *)(a3 + 109) )
    sub_4EBBA0(*((QT::QObject **)this + 6));
  if ( *(_BYTE *)(a3 + 110) )
    QT::QPlainTextEdit::selectAll(*((QT::QPlainTextEdit **)this + 6));
  return v61 - __readfsqword(0x28u);
}
