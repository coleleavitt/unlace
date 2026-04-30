unsigned __int64 __fastcall sub_51E440(
        QT::QWidget *this,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  const char *v13; // r8
  QT::QHBoxLayout *v14; // r13
  QT::QPushButton *v15; // r12
  __m128i *v16; // rax
  __m128i si128; // xmm0
  QT::QLineEdit *v18; // r12
  const char *v19; // rdi
  int v20; // eax
  double v21; // xmm4_8
  double v22; // xmm5_8
  QT::QLineEdit *v23; // r13
  QT::QCompleter *v24; // rbp
  QT::QAbstractListModel *v25; // r12
  char *v27; // r12
  size_t v28; // rax
  size_t v29; // r13
  void *v30; // rdi
  size_t v31; // rdx
  __int64 v32; // rax
  _QWORD *v33; // [rsp+8h] [rbp-80h]
  int v34[2]; // [rsp+8h] [rbp-80h]
  void *ptr[4]; // [rsp+10h] [rbp-78h] BYREF
  void *v36; // [rsp+30h] [rbp-58h] BYREF
  char *s[2]; // [rsp+38h] [rbp-50h]
  int v38[2]; // [rsp+48h] [rbp-40h]

  *(_QWORD *)v38 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, a2, 0);
  *((_QWORD *)this + 5) = 0;
  *((_OWORD *)this + 3) = 0;
  *(_QWORD *)this = &quick_filter_widget_t___vtable;
  *((_QWORD *)this + 2) = quick_filter_widget_t___vtable_at__16;
  QT::QObject::QObject((QT::QWidget *)((char *)this + 72), nullptr);
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 9) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)this + 72, 0, 0.0, v11, v12, v13);
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 17) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 22) = 0;
  *(_OWORD *)((char *)this + 120) = 0;
  *(_OWORD *)((char *)this + 152) = 0;
  v14 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v14);
  QT::QLayout::setContentsMargins(v14, 0, 0, 0, 0);
  (*(void (__fastcall **)(QT::QHBoxLayout *, __int64))(*(_QWORD *)v14 + 104LL))(v14, 5);
  v15 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v15, this);
  QT::QWidget::setSizePolicy(v15, 13631488);
  QT::QWidget::setFixedWidth(v15, 18);
  v36 = (void *)0x1000000010LL;
  QT::QAbstractButton::setIconSize(v15, &v36);
  QT::QPushButton::setFlat(v15, 1);
  *(_OWORD *)s = 0;
  v36 = nullptr;
  v33 = QT::QCoreApplication::self;
  v16 = (__m128i *)qvector_reserve(&v36, 0, 23, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DDDD0);
  v36 = v16;
  s[0] = (_BYTE *)(&dword_14 + 3);
  *v16 = si128;
  *(__int64 *)((char *)&v16->m128i_i64[1] + 6) = 0x6776732E7265746CLL;
  *((_BYTE *)v36 + 22) = 0;
  sub_479BE0((QT::QIcon *)ptr, v33, (__int64)&v36);
  QT::QAbstractButton::setIcon(v15, (const QT::QIcon *)ptr);
  QT::QIcon::~QIcon((QT::QIcon *)ptr);
  if ( v36 )
  {
    s[0] = nullptr;
    *(double *)si128.m128i_i64 = qfree(v36, (const char *)ptr);
  }
  QT::QObject::connect(&v36, v15, "2clicked()", this, "1hide_quick_filter()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v36);
  QT::QBoxLayout::addWidget(v14, v15, 0, 0);
  v18 = (QT::QLineEdit *)operator new(0x90u);
  sub_51C000(v18, this);
  *((_QWORD *)this + 8) = v18;
  QT::QWidget::setSizePolicy(v18, 458752);
  *((_DWORD *)this + 26) = 0x80000000;
  QT::QObject::connect(
    &v36,
    *((_QWORD *)this + 8),
    "2search_text_changed(QString)",
    this,
    "1on_search_text_changed(QString)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v36);
  QT::QObject::connect(
    &v36,
    *((_QWORD *)this + 8),
    "2search_history_changed(QString)",
    this,
    "1on_search_history_changed(QString)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v36);
  QT::QObject::connect(
    &v36,
    *((_QWORD *)this + 8),
    "2reserved_key_press(const QKeyEvent &)",
    this,
    "1on_reserved_key_press(const QKeyEvent &)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v36);
  QT::QBoxLayout::addWidget(v14, *((_QWORD *)this + 8), 0, 0);
  QT::QWidget::setLayout(this, v14);
  QT::QWidget::windowTitle((QT::QWidget *)ptr);
  if ( ptr[2] )
  {
    QT::QString::toUtf8_helper((QT::QString *)&v36, (const QT::QString *)ptr);
    v27 = s[0];
    if ( (s[0] || (v27 = (char *)&QT::QByteArray::_empty) != nullptr) && (v28 = strlen(v27), (v29 = v28) != 0) )
    {
      v30 = *((void **)this + 5);
      v31 = v28 + 1;
      if ( *((_QWORD *)this + 7) < v28 + 1 )
      {
        *(_QWORD *)v34 = v28 + 1;
        v32 = qvector_reserve((char *)this + 40, *((_QWORD *)this + 5), v31, 1);
        *((_QWORD *)this + 5) = v32;
        v31 = *(_QWORD *)v34;
        v30 = (void *)v32;
      }
      *((_QWORD *)this + 6) = v31;
      memmove(v30, v27, v29);
      *(_BYTE *)(*((_QWORD *)this + 5) + v29) = 0;
    }
    else
    {
      *((_QWORD *)this + 6) = 0;
    }
    if ( v36 && !_InterlockedSub((volatile signed __int32 *)v36, 1u) )
      free(v36);
  }
  v19 = &s1;
  if ( *((_QWORD *)this + 6) )
    v19 = *((const char **)this + 5);
  v20 = reg_int_op(v19, 0, 0, "QuickFilterFlags");
  sub_51DD00(this, v20, *(double *)si128.m128i_i64, a4, a5, a6, v21, v22, a9, a10);
  v23 = *((QT::QLineEdit **)this + 8);
  v24 = (QT::QCompleter *)QT::QLineEdit::completer(v23);
  if ( !v24 )
  {
    v24 = (QT::QCompleter *)operator new(0x10u);
    QT::QCompleter::QCompleter(v24, v23);
    QT::QLineEdit::setCompleter(v23, v24);
  }
  v25 = (QT::QAbstractListModel *)operator new(0x10u);
  QT::QAbstractListModel::QAbstractListModel(v25, v24);
  *(_QWORD *)v25 = &off_894C60;
  QT::QCompleter::setModel(v24, v25);
  QT::QCompleter::setCaseSensitivity(v24, 1);
  QT::QCompleter::setCompletionMode(v24, 0);
  QT::QLineEdit::setCompleter(v23, v24);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return *(_QWORD *)v38 - __readfsqword(0x28u);
}
