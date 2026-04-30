unsigned __int64 __fastcall sub_18B7D0(
        QT::QWidget *this,
        const QT::QString *a2,
        const QT::QIcon *a3,
        int a4,
        __int64 a5,
        int *a6,
        double a7,
        __m128 a8,
        int a9,
        __int64 a10)
{
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r13
  void *v18; // rdx
  QT::QObject *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  QT::QObject *v22; // rax
  QT::QLineEdit *v23; // r15
  __int64 v24; // rax
  int v25; // eax
  QT::QCheckBox *v26; // r15
  __m128i *v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // r13
  QT::QLineEdit *v30; // r15
  __int64 v31; // r15
  __m128i *v32; // rax
  __m128i v33; // xmm0
  QT::QKeySequenceEdit *v34; // r15
  __int64 v35; // r15
  __m128i *v36; // rax
  __m128i v37; // xmm0
  QT::QPushButton *v38; // r13
  volatile signed __int32 *v39; // rax
  __int64 v40; // r15
  __m128i *v41; // rax
  __m128i v42; // xmm0
  QT::QPushButton *v43; // r15
  volatile signed __int32 *v44; // rax
  __int64 v45; // r15
  __m128i *v46; // rax
  __m128i v47; // xmm0
  QT::QPushButton *v48; // r15
  volatile signed __int32 *v49; // rax
  __int64 v50; // r15
  __m128i *v51; // rax
  __m128i v52; // xmm0
  QT::QPushButton *v53; // r15
  volatile signed __int32 *v54; // rax
  __int64 v55; // r15
  __m128i *v56; // rax
  __m128i v57; // xmm0
  QT::QPushButton *v58; // r15
  volatile signed __int32 *v59; // rax
  __int64 v60; // r15
  __m128i *v61; // rax
  __m128i v62; // xmm0
  QT::QPushButton *v63; // r15
  volatile signed __int32 *v64; // rax
  __int64 v65; // r15
  __m128i *v66; // rax
  __m128i v67; // xmm0
  __int64 v68; // r12
  __int64 v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  char *v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rbx
  __int64 v79; // r14
  __int64 *v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rdx
  __int64 v83; // rbx
  __int64 v84; // r14
  __int64 *v85; // rax
  __int64 v86; // rdi
  QT::QHBoxLayout *v88; // r13
  QT::QLabel *v89; // r15
  QT::QWidget *v90; // r12
  QT::QHBoxLayout *v91; // r13
  QT::QLabel *v92; // r15
  QT::QHBoxLayout *v93; // r13
  QT::QLabel *v94; // r15
  QT::QCheckBox *v95; // r15
  __m128i *v96; // rax
  __m128i si128; // xmm0
  QT::QCheckBox *v98; // r15
  __m128i *v99; // rax
  __m128i v100; // xmm0
  int v101; // [rsp+Ch] [rbp-234h]
  int v102; // [rsp+Ch] [rbp-234h]
  QT::QWidget *v103; // [rsp+10h] [rbp-230h]
  QT::QWidget *v104; // [rsp+10h] [rbp-230h]
  QT::QWidget *v105; // [rsp+10h] [rbp-230h]
  QT::QLayout *v106; // [rsp+20h] [rbp-220h]
  QT::QLayout *v107; // [rsp+38h] [rbp-208h]
  QT::QWidget *v108; // [rsp+38h] [rbp-208h]
  QT::QWidget *v109; // [rsp+38h] [rbp-208h]
  int v110; // [rsp+40h] [rbp-200h]
  QT::QString *v111; // [rsp+48h] [rbp-1F8h]
  _QWORD v112[2]; // [rsp+50h] [rbp-1F0h] BYREF
  _QWORD v113[2]; // [rsp+60h] [rbp-1E0h] BYREF
  _QWORD v114[2]; // [rsp+70h] [rbp-1D0h] BYREF
  _QWORD v115[2]; // [rsp+80h] [rbp-1C0h] BYREF
  _QWORD v116[2]; // [rsp+90h] [rbp-1B0h] BYREF
  _QWORD v117[2]; // [rsp+A0h] [rbp-1A0h] BYREF
  int v118[2]; // [rsp+B0h] [rbp-190h] BYREF
  __int64 v119; // [rsp+B8h] [rbp-188h]
  void *v120[4]; // [rsp+C0h] [rbp-180h] BYREF
  void *v121[4]; // [rsp+E0h] [rbp-160h] BYREF
  void *v122[2]; // [rsp+100h] [rbp-140h] BYREF
  __m128i ptr[2]; // [rsp+120h] [rbp-120h] BYREF
  _BYTE v124[16]; // [rsp+140h] [rbp-100h] BYREF
  __int64 v125; // [rsp+150h] [rbp-F0h]
  __int64 v126; // [rsp+158h] [rbp-E8h]
  __int64 v127; // [rsp+168h] [rbp-D8h]
  __int64 v128; // [rsp+170h] [rbp-D0h]
  __int64 v129; // [rsp+188h] [rbp-B8h]
  __int64 v130; // [rsp+190h] [rbp-B0h]
  __int64 v131; // [rsp+1A0h] [rbp-A0h]
  __int64 v132; // [rsp+1A8h] [rbp-98h]
  __int64 v133; // [rsp+1B8h] [rbp-88h]
  __int64 v134; // [rsp+1C0h] [rbp-80h]
  __int64 v135; // [rsp+1D0h] [rbp-70h]
  __int64 v136; // [rsp+1D8h] [rbp-68h]
  __int64 v137; // [rsp+1E8h] [rbp-58h]
  __int64 v138; // [rsp+1F0h] [rbp-50h]
  unsigned __int64 v139; // [rsp+208h] [rbp-38h]

  v139 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, a10, 0);
  *((_DWORD *)this + 14) = a4;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 8) = a5;
  *(_QWORD *)this = &ActionsInspector___vtable;
  *((_QWORD *)this + 2) = algn_87E910;
  *((_QWORD *)this + 5) = &ActionsInspector___vtable_at__40;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_OWORD *)this + 5) = 0;
  *((_OWORD *)this + 8) = 0;
  *((_OWORD *)this + 9) = 0;
  *((_OWORD *)this + 10) = 0;
  *((_OWORD *)this + 11) = 0;
  *((_OWORD *)this + 12) = 0;
  sub_3D5A10();
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = -1;
  QT::QWidget::setWindowTitle(this, a2);
  QT::QObject::doSetObjectName(this, a2);
  QT::QWidget::setWindowIcon(this, a3);
  QT::QWidget::setWindowFlags(this, *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0xFFFE7FFF | 0x8000);
  sub_18A9E0(
    (__int64)this,
    **((unsigned __int8 **)this + 8),
    *(unsigned __int8 *)(*((_QWORD *)this + 8) + 1LL),
    v15,
    v16,
    0.0,
    a8);
  v17 = qalloc_or_throw(264);
  sub_185E00(v17, (__int64)this, a6, a9);
  QT::QString::toUtf8_helper((QT::QString *)ptr, a2);
  v18 = (void *)ptr[0].m128i_i64[1];
  if ( !ptr[0].m128i_i64[1] )
    v18 = &QT::QByteArray::_empty;
  sub_4A3550(v124, v17, v18, 1);
  if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
    free((void *)ptr[0].m128i_i64[0]);
  v19 = (QT::QObject *)operator new(0xA28u);
  sub_3A2570((int)v19);
  *((_QWORD *)v19 + 269) = 5;
  *(_QWORD *)v19 = &actions_inspector_chooser_widget_t___vtable;
  *((_QWORD *)v19 + 2) = actions_inspector_chooser_widget_t___vtable_at__16;
  *((_QWORD *)v19 + 5) = actions_inspector_chooser_widget_t___vtable_at__40;
  *((_QWORD *)v19 + 314) = actions_inspector_chooser_widget_t___vtable_at__2512;
  *((_QWORD *)v19 + 13) = actions_inspector_chooser_widget_t___vtable_at__104;
  *((_QWORD *)v19 + 268) = &off_85C480;
  sub_4DF8B0((char *)v19 + 104, v124);
  *((_QWORD *)this + 16) = v19;
  QT::QObject::installEventFilter(v19, this);
  v20 = *((_QWORD *)this + 16);
  if ( !*(_BYTE *)(v20 + 1224) )
  {
    v21 = *(_QWORD *)(v20 + 1216);
    if ( v21 )
    {
      v22 = *(QT::QObject **)(v21 + 64);
      v23 = v22;
      if ( v22 )
      {
        QT::QObject::installEventFilter(v22, this);
        v24 = QT::QLineEdit::completer(v23);
        if ( v24 )
          QT::QCompleter::setCompletionMode(v24, 2);
      }
    }
  }
  v111 = (QT::QString *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v111);
  QT::QLayout::setContentsMargins(v111, 0, 0, 0, 0);
  v25 = *((_DWORD *)this + 14);
  if ( (v25 & 4) != 0 )
  {
    v106 = (QT::QLayout *)operator new(0x20u);
    QT::QHBoxLayout::QHBoxLayout(v106);
    QT::QLayout::setContentsMargins(v106, 6, 6, 6, 6);
    (*(void (__fastcall **)(QT::QLayout *, _QWORD))(*(_QWORD *)v106 + 104LL))(v106, 0);
    v103 = (QT::QWidget *)operator new(0x28u);
    QT::QWidget::QWidget(v103, this, 0);
    v88 = (QT::QHBoxLayout *)operator new(0x20u);
    QT::QHBoxLayout::QHBoxLayout(v88);
    QT::QWidget::setLayout(v103, v88);
    v89 = (QT::QLabel *)operator new(0x28u);
    QT::QString::fromUtf8(ptr, 16, "Modified by user");
    sub_53BA20(v89, ptr, 0);
    if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
      free((void *)ptr[0].m128i_i64[0]);
    QT::QLabel::setWordWrap(v89, 1);
    v90 = (QT::QWidget *)operator new(0x28u);
    sub_53B9D0(v90, 0);
    QT::QWidget::setSizePolicy(v90, 0);
    QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)ptr, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
    v110 = QT::QFontMetrics::height((QT::QFontMetrics *)ptr);
    QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)v122, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
    v118[0] = QT::QFontMetrics::height((QT::QFontMetrics *)v122);
    v118[1] = v110;
    QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)v122);
    QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)ptr);
    QT::QWidget::resize(v90, v118);
    QT::QWidget::setMaximumSize(v90, v118[0], v118[1]);
    QT::QWidget::setMinimumSize(v90, v118[0], v118[1]);
    QT::QString::fromUtf8(ptr, 39, "* { background-color: rgb(%1, %2, %3) }");
    QT::QString::arg(v122, ptr, 255, 0, 10, 32);
    QT::QString::arg(v121, v122, 255, 0, 10, 32);
    QT::QString::arg(v120, v121, 128, 0, 10, 32);
    QT::QWidget::setStyleSheet(v90, (const QT::QString *)v120);
    if ( v120[0] && !_InterlockedSub((volatile signed __int32 *)v120[0], 1u) )
      free(v120[0]);
    if ( v121[0] && !_InterlockedSub((volatile signed __int32 *)v121[0], 1u) )
      free(v121[0]);
    if ( v122[0] && !_InterlockedSub((volatile signed __int32 *)v122[0], 1u) )
      free(v122[0]);
    if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
      free((void *)ptr[0].m128i_i64[0]);
    QT::QBoxLayout::addWidget(v88, v90, 0, 0);
    QT::QBoxLayout::addWidget(v88, v89, 0, 0);
    QT::QBoxLayout::addWidget(v106, v103, 0, 0);
    v104 = (QT::QWidget *)operator new(0x28u);
    QT::QWidget::QWidget(v104, this, 0);
    v91 = (QT::QHBoxLayout *)operator new(0x20u);
    QT::QHBoxLayout::QHBoxLayout(v91);
    QT::QWidget::setLayout(v104, v91);
    v92 = (QT::QLabel *)operator new(0x28u);
    QT::QString::fromUtf8(ptr, 11, "Conflicting");
    sub_53BA20(v92, ptr, 0);
    if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
      free((void *)ptr[0].m128i_i64[0]);
    QT::QLabel::setWordWrap(v92, 1);
    v108 = (QT::QWidget *)operator new(0x28u);
    sub_53B9D0(v108, 0);
    QT::QWidget::setSizePolicy(v108, 0);
    QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)ptr, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
    v101 = QT::QFontMetrics::height((QT::QFontMetrics *)ptr);
    QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)v122, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
    v118[0] = QT::QFontMetrics::height((QT::QFontMetrics *)v122);
    v118[1] = v101;
    QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)v122);
    QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)ptr);
    QT::QWidget::resize(v108, v118);
    QT::QWidget::setMaximumSize(v108, v118[0], v118[1]);
    QT::QWidget::setMinimumSize(v108, v118[0], v118[1]);
    QT::QString::fromUtf8(ptr, 39, "* { background-color: rgb(%1, %2, %3) }");
    QT::QString::arg(v122, ptr, 255, 0, 10, 32);
    QT::QString::arg(v121, v122, 91, 0, 10, 32);
    QT::QString::arg(v120, v121, 91, 0, 10, 32);
    QT::QWidget::setStyleSheet(v108, (const QT::QString *)v120);
    if ( v120[0] && !_InterlockedSub((volatile signed __int32 *)v120[0], 1u) )
      free(v120[0]);
    if ( v121[0] && !_InterlockedSub((volatile signed __int32 *)v121[0], 1u) )
      free(v121[0]);
    if ( v122[0] && !_InterlockedSub((volatile signed __int32 *)v122[0], 1u) )
      free(v122[0]);
    if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
      free((void *)ptr[0].m128i_i64[0]);
    QT::QBoxLayout::addWidget(v91, v108, 0, 0);
    QT::QBoxLayout::addWidget(v91, v92, 0, 0);
    QT::QBoxLayout::addWidget(v106, v104, 0, 0);
    v105 = (QT::QWidget *)operator new(0x28u);
    QT::QWidget::QWidget(v105, this, 0);
    v93 = (QT::QHBoxLayout *)operator new(0x20u);
    QT::QHBoxLayout::QHBoxLayout(v93);
    QT::QWidget::setLayout(v105, v93);
    v94 = (QT::QLabel *)operator new(0x28u);
    QT::QString::fromUtf8(ptr, 22, "Modified & conflicting");
    sub_53BA20(v94, ptr, 0);
    if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
      free((void *)ptr[0].m128i_i64[0]);
    QT::QLabel::setWordWrap(v94, 1);
    v109 = (QT::QWidget *)operator new(0x28u);
    sub_53B9D0(v109, 0);
    QT::QWidget::setSizePolicy(v109, 0);
    QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)ptr, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
    v102 = QT::QFontMetrics::height((QT::QFontMetrics *)ptr);
    QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)v122, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
    v118[0] = QT::QFontMetrics::height((QT::QFontMetrics *)v122);
    v118[1] = v102;
    QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)v122);
    QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)ptr);
    QT::QWidget::resize(v109, v118);
    QT::QWidget::setMaximumSize(v109, v118[0], v118[1]);
    QT::QWidget::setMinimumSize(v109, v118[0], v118[1]);
    QT::QString::fromUtf8(ptr, 39, "* { background-color: rgb(%1, %2, %3) }");
    QT::QString::arg(v122, ptr, 255, 0, 10, 32);
    QT::QString::arg(v121, v122, 170, 0, 10, 32);
    QT::QString::arg(v120, v121, 0, 0, 10, 32);
    QT::QWidget::setStyleSheet(v109, (const QT::QString *)v120);
    if ( v120[0] && !_InterlockedSub((volatile signed __int32 *)v120[0], 1u) )
      free(v120[0]);
    if ( v121[0] && !_InterlockedSub((volatile signed __int32 *)v121[0], 1u) )
      free(v121[0]);
    if ( v122[0] && !_InterlockedSub((volatile signed __int32 *)v122[0], 1u) )
      free(v122[0]);
    if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
      free((void *)ptr[0].m128i_i64[0]);
    QT::QBoxLayout::addWidget(v93, v109, 0, 0);
    QT::QBoxLayout::addWidget(v93, v94, 0, 0);
    QT::QBoxLayout::addWidget(v106, v105, 0, 0);
    QT::QBoxLayout::addLayout(v111, v106, 0);
    v25 = *((_DWORD *)this + 14);
    if ( (v25 & 0x20) == 0 )
    {
LABEL_13:
      if ( (v25 & 1) == 0 )
        goto LABEL_14;
      goto LABEL_125;
    }
  }
  else if ( (v25 & 0x20) == 0 )
  {
    goto LABEL_13;
  }
  v95 = (QT::QCheckBox *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 17, "Use new shortcuts");
  QT::QCheckBox::QCheckBox(v95, (const QT::QString *)ptr, this);
  if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
    free((void *)ptr[0].m128i_i64[0]);
  QT::QAbstractButton::setChecked(v95, byte_8D1CD0);
  ptr[0].m128i_i64[1] = 0;
  ptr[0].m128i_i64[0] = (__int64)sub_18AD70;
  v112[1] = 0;
  v112[0] = &QT::QCheckBox::checkStateChanged;
  v96 = (__m128i *)operator new(0x20u);
  v96->m128i_i32[0] = 1;
  si128 = _mm_load_si128(ptr);
  v96->m128i_i64[1] = (__int64)sub_185700;
  v96[1] = si128;
  QT::QObject::connectImpl(v122, v95, v112, this, ptr, v96, 0, 0, &QT::QCheckBox::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v122);
  QT::QBoxLayout::addWidget(v111, v95, 0, 0);
  v25 = *((_DWORD *)this + 14);
  if ( (v25 & 1) != 0 )
  {
LABEL_125:
    v98 = (QT::QCheckBox *)operator new(0x28u);
    QT::QString::fromUtf8(ptr, 12, "Enabled only");
    QT::QCheckBox::QCheckBox(v98, (const QT::QString *)ptr, this);
    if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
      free((void *)ptr[0].m128i_i64[0]);
    QT::QAbstractButton::setChecked(v98, **((_BYTE **)this + 8));
    ptr[0].m128i_i64[1] = 0;
    ptr[0].m128i_i64[0] = (__int64)&loc_18ACE0;
    v113[1] = 0;
    v113[0] = &QT::QCheckBox::checkStateChanged;
    v99 = (__m128i *)operator new(0x20u);
    v99->m128i_i32[0] = 1;
    v100 = _mm_load_si128(ptr);
    v99->m128i_i64[1] = (__int64)sub_185700;
    v99[1] = v100;
    QT::QObject::connectImpl(v122, v98, v113, this, ptr, v99, 0, 0, &QT::QCheckBox::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v122);
    QT::QBoxLayout::addWidget(v111, v98, 0, 0);
    v25 = *((_DWORD *)this + 14);
  }
LABEL_14:
  if ( (v25 & 2) != 0 )
  {
    v26 = (QT::QCheckBox *)operator new(0x28u);
    QT::QString::fromUtf8(ptr, 16, "Conflicting only");
    QT::QCheckBox::QCheckBox(v26, (const QT::QString *)ptr, this);
    if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
      free((void *)ptr[0].m128i_i64[0]);
    QT::QAbstractButton::setChecked(v26, *(_BYTE *)(*((_QWORD *)this + 8) + 1LL));
    ptr[0].m128i_i64[1] = 0;
    ptr[0].m128i_i64[0] = (__int64)&loc_18AD00;
    v114[1] = 0;
    v114[0] = &QT::QCheckBox::checkStateChanged;
    v27 = (__m128i *)operator new(0x20u);
    v27->m128i_i32[0] = 1;
    v28 = _mm_load_si128(ptr);
    v27->m128i_i64[1] = (__int64)sub_185700;
    v27[1] = v28;
    QT::QObject::connectImpl(v122, v26, v114, this, ptr, v27, 0, 0, &QT::QCheckBox::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v122);
    QT::QBoxLayout::addWidget(v111, v26, 0, 0);
  }
  QT::QBoxLayout::addWidget(v111, *((_QWORD *)this + 16), 0, 0);
  if ( (*((_BYTE *)this + 56) & 8) != 0 )
  {
    v29 = operator new(0x28u);
    QT::QString::fromUtf8(ptr, 9, "Shortcut:");
    sub_53BA20(v29, ptr, 0);
    if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
      free((void *)ptr[0].m128i_i64[0]);
    v30 = (QT::QLineEdit *)operator new(0x28u);
    QT::QLineEdit::QLineEdit(v30, nullptr);
    *((_QWORD *)this + 17) = v30;
    QT::QObject::setObjectName(v30, "shortcut_input", 14);
    ptr[0].m128i_i64[1] = 0;
    v31 = *((_QWORD *)this + 17);
    ptr[0].m128i_i64[0] = (__int64)&loc_185060;
    v115[1] = 0;
    v115[0] = &QT::QLineEdit::textEdited;
    v32 = (__m128i *)operator new(0x20u);
    v32->m128i_i32[0] = 1;
    v33 = _mm_load_si128(ptr);
    v32->m128i_i64[1] = (__int64)sub_185780;
    v32[1] = v33;
    QT::QObject::connectImpl(v122, v31, v115, this, ptr, v32, 0, 0, &QT::QLineEdit::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v122);
    QT::QObject::installEventFilter(*((QT::QObject **)this + 17), this);
    v34 = (QT::QKeySequenceEdit *)operator new(0x28u);
    QT::QKeySequenceEdit::QKeySequenceEdit(v34, nullptr);
    *((_QWORD *)this + 18) = v34;
    QT::QObject::setObjectName(v34, "shortcut_recorder", 17);
    ptr[0].m128i_i64[1] = 0;
    v35 = *((_QWORD *)this + 18);
    ptr[0].m128i_i64[0] = (__int64)sub_18B0D0;
    v116[1] = 0;
    v116[0] = &QT::QKeySequenceEdit::keySequenceChanged;
    v36 = (__m128i *)operator new(0x20u);
    v36->m128i_i32[0] = 1;
    v37 = _mm_load_si128(ptr);
    v36->m128i_i64[1] = (__int64)sub_1853B0;
    v36[1] = v37;
    QT::QObject::connectImpl(v122, v35, v116, this, ptr, v36, 0, 0, &QT::QKeySequenceEdit::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v122);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 104LL))(*((_QWORD *)this + 18), 0);
    v107 = (QT::QLayout *)operator new(0x20u);
    QT::QHBoxLayout::QHBoxLayout(v107);
    QT::QLayout::setContentsMargins(v107, 10, 10, 10, 10);
    QT::QBoxLayout::addWidget(v107, v29, 0, 0);
    v38 = (QT::QPushButton *)operator new(0x28u);
    QT::QString::fromUtf8(ptr, 7, "&Record");
    QT::QPushButton::QPushButton(v38, (const QT::QString *)ptr, nullptr);
    v39 = (volatile signed __int32 *)ptr[0].m128i_i64[0];
    *((_QWORD *)this + 19) = v38;
    if ( v39 )
    {
      if ( !_InterlockedSub(v39, 1u) )
        free((void *)ptr[0].m128i_i64[0]);
      v38 = *((QT::QPushButton **)this + 19);
    }
    QT::QWidget::setEnabled(v38, 0);
    ptr[0].m128i_i64[1] = 0;
    v40 = *((_QWORD *)this + 19);
    ptr[0].m128i_i64[0] = (__int64)&loc_186630;
    v117[1] = 0;
    v117[0] = &QT::QAbstractButton::clicked;
    v41 = (__m128i *)operator new(0x20u);
    v41->m128i_i32[0] = 1;
    v42 = _mm_load_si128(ptr);
    v41->m128i_i64[1] = (__int64)sub_185780;
    v41[1] = v42;
    QT::QObject::connectImpl(v122, v40, v117, this, ptr, v41, 0, 0, &QT::QAbstractButton::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v122);
    v43 = (QT::QPushButton *)operator new(0x28u);
    QT::QString::fromUtf8(ptr, 4, "&Set");
    QT::QPushButton::QPushButton(v43, (const QT::QString *)ptr, nullptr);
    v44 = (volatile signed __int32 *)ptr[0].m128i_i64[0];
    *((_QWORD *)this + 20) = v43;
    if ( v44 )
    {
      if ( !_InterlockedSub(v44, 1u) )
        free((void *)ptr[0].m128i_i64[0]);
      v43 = *((QT::QPushButton **)this + 20);
    }
    QT::QWidget::setEnabled(v43, 0);
    ptr[0].m128i_i64[1] = 0;
    v45 = *((_QWORD *)this + 20);
    ptr[0].m128i_i64[0] = (__int64)sub_18B040;
    v119 = 0;
    *(_QWORD *)v118 = &QT::QAbstractButton::clicked;
    v46 = (__m128i *)operator new(0x20u);
    v46->m128i_i32[0] = 1;
    v47 = _mm_load_si128(ptr);
    v46->m128i_i64[1] = (__int64)sub_185780;
    v46[1] = v47;
    QT::QObject::connectImpl(v122, v45, v118, this, ptr, v46, 0, 0, &QT::QAbstractButton::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v122);
    v48 = (QT::QPushButton *)operator new(0x28u);
    QT::QString::fromUtf8(ptr, 7, "Restore");
    QT::QPushButton::QPushButton(v48, (const QT::QString *)ptr, nullptr);
    v49 = (volatile signed __int32 *)ptr[0].m128i_i64[0];
    *((_QWORD *)this + 21) = v48;
    if ( v49 )
    {
      if ( !_InterlockedSub(v49, 1u) )
        free((void *)ptr[0].m128i_i64[0]);
      v48 = *((QT::QPushButton **)this + 21);
    }
    QT::QWidget::setEnabled(v48, 0);
    ptr[0].m128i_i64[1] = 0;
    v50 = *((_QWORD *)this + 21);
    ptr[0].m128i_i64[0] = (__int64)sub_18B1C0;
    v120[1] = nullptr;
    v120[0] = &QT::QAbstractButton::clicked;
    v51 = (__m128i *)operator new(0x20u);
    v51->m128i_i32[0] = 1;
    v52 = _mm_load_si128(ptr);
    v51->m128i_i64[1] = (__int64)sub_185780;
    v51[1] = v52;
    QT::QObject::connectImpl(v122, v50, v120, this, ptr, v51, 0, 0, &QT::QAbstractButton::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v122);
    v53 = (QT::QPushButton *)operator new(0x28u);
    QT::QString::fromUtf8(ptr, 5, "&Help");
    QT::QPushButton::QPushButton(v53, (const QT::QString *)ptr, nullptr);
    v54 = (volatile signed __int32 *)ptr[0].m128i_i64[0];
    *((_QWORD *)this + 22) = v53;
    if ( v54 )
    {
      if ( !_InterlockedSub(v54, 1u) )
        free((void *)ptr[0].m128i_i64[0]);
      v53 = *((QT::QPushButton **)this + 22);
    }
    QT::QWidget::setEnabled(v53, 0);
    ptr[0].m128i_i64[1] = 0;
    v55 = *((_QWORD *)this + 22);
    ptr[0].m128i_i64[0] = (__int64)&loc_184FB0;
    v121[1] = nullptr;
    v121[0] = &QT::QAbstractButton::clicked;
    v56 = (__m128i *)operator new(0x20u);
    v56->m128i_i32[0] = 1;
    v57 = _mm_load_si128(ptr);
    v56->m128i_i64[1] = (__int64)sub_185780;
    v56[1] = v57;
    QT::QObject::connectImpl(v122, v55, v121, this, ptr, v56, 0, 0, &QT::QAbstractButton::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v122);
    v58 = (QT::QPushButton *)operator new(0x28u);
    QT::QString::fromUtf8(ptr, 5, "Reset");
    QT::QPushButton::QPushButton(v58, (const QT::QString *)ptr, nullptr);
    v59 = (volatile signed __int32 *)ptr[0].m128i_i64[0];
    *((_QWORD *)this + 23) = v58;
    if ( v59 )
    {
      if ( !_InterlockedSub(v59, 1u) )
        free((void *)ptr[0].m128i_i64[0]);
      v58 = *((QT::QPushButton **)this + 23);
    }
    QT::QWidget::setEnabled(v58, 1);
    ptr[0].m128i_i64[1] = 0;
    v60 = *((_QWORD *)this + 23);
    ptr[0].m128i_i64[0] = (__int64)sub_18B520;
    v122[1] = nullptr;
    v122[0] = &QT::QAbstractButton::clicked;
    v61 = (__m128i *)operator new(0x20u);
    v61->m128i_i32[0] = 1;
    v62 = _mm_load_si128(ptr);
    v61->m128i_i64[1] = (__int64)sub_185780;
    v61[1] = v62;
    QT::QObject::connectImpl(v121, v60, v122, this, ptr, v61, 0, 0, &QT::QAbstractButton::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v121);
    v63 = (QT::QPushButton *)operator new(0x28u);
    QT::QString::fromUtf8(ptr, 4, "Save");
    QT::QPushButton::QPushButton(v63, (const QT::QString *)ptr, nullptr);
    v64 = (volatile signed __int32 *)ptr[0].m128i_i64[0];
    *((_QWORD *)this + 25) = v63;
    if ( v64 )
    {
      if ( !_InterlockedSub(v64, 1u) )
        free((void *)ptr[0].m128i_i64[0]);
      v63 = *((QT::QPushButton **)this + 25);
    }
    QT::QWidget::setEnabled(v63, *(_BYTE *)(*((_QWORD *)this + 8) + 2LL));
    v122[1] = nullptr;
    v65 = *((_QWORD *)this + 25);
    v122[0] = &loc_185CD0;
    ptr[0].m128i_i64[1] = 0;
    ptr[0].m128i_i64[0] = (__int64)&QT::QAbstractButton::clicked;
    v66 = (__m128i *)operator new(0x20u);
    v66->m128i_i32[0] = 1;
    v67 = _mm_load_si128((const __m128i *)v122);
    v66->m128i_i64[1] = (__int64)sub_185780;
    v66[1] = v67;
    QT::QObject::connectImpl(v121, v65, ptr, this, v122, v66, 0, 0, &QT::QAbstractButton::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v121);
    QT::QBoxLayout::addWidget(v107, *((_QWORD *)this + 17), 0, 0);
    QT::QBoxLayout::addWidget(v107, *((_QWORD *)this + 18), 0, 0);
    QT::QBoxLayout::addWidget(v107, *((_QWORD *)this + 19), 0, 0);
    QT::QWidget::setEnabled(*((QT::QWidget **)this + 19), 0);
    QT::QBoxLayout::addWidget(v107, *((_QWORD *)this + 20), 0, 0);
    QT::QBoxLayout::addWidget(v107, *((_QWORD *)this + 21), 0, 0);
    QT::QBoxLayout::addWidget(v107, *((_QWORD *)this + 22), 0, 0);
    v68 = operator new(0x28u);
    QT::QFrame::QFrame(v68, 0, 0);
    QT::QFrame::setFrameShape(v68, 5);
    QT::QFrame::setFrameShadow(v68, 48);
    QT::QBoxLayout::addWidget(v107, v68, 0, 0);
    QT::QBoxLayout::addWidget(v107, *((_QWORD *)this + 23), 0, 0);
    QT::QBoxLayout::addWidget(v107, *((_QWORD *)this + 25), 0, 0);
    QT::QBoxLayout::addLayout(v111, v107, 0);
    sub_1864C0((__int64)this, 1);
  }
  QT::QWidget::setLayout(this, v111);
  v69 = *((_QWORD *)this + 16);
  memset(ptr, 0, 24);
  sub_4A8AF0(v69, ptr, -1);
  if ( ptr[0].m128i_i64[0] )
  {
    ptr[0].m128i_i64[1] = 0;
    qfree(ptr[0].m128i_i64[0], ptr, v70, v71, v72);
  }
  v73 = (char *)this + 40;
  hook_event_listener(1, (char *)this + 40, 0, 1);
  if ( v137 )
  {
    v138 = 0;
    qfree(v137, v73, v74, v75, v76);
  }
  if ( v135 )
  {
    v136 = 0;
    qfree(v135, v73, v74, v75, v76);
  }
  v77 = v133;
  if ( v133 )
  {
    if ( v134 )
    {
      v78 = 0;
      v79 = v134;
      do
      {
        v80 = (__int64 *)(v77 + 24 * v78);
        v81 = *v80;
        if ( *v80 )
        {
          v80[1] = 0;
          qfree(v81, v73, v77, v75, v76);
          v77 = v133;
        }
        ++v78;
      }
      while ( v79 != v78 );
    }
    v134 = 0;
    qfree(v77, v73, v77, v75, v76);
  }
  v82 = v131;
  if ( v131 )
  {
    if ( v132 )
    {
      v83 = 0;
      v84 = v132;
      do
      {
        v85 = (__int64 *)(v82 + 24 * v83);
        v86 = *v85;
        if ( *v85 )
        {
          v85[1] = 0;
          qfree(v86, v73, v82, v75, v76);
          v82 = v131;
        }
        ++v83;
      }
      while ( v84 != v83 );
    }
    v132 = 0;
    qfree(v82, v73, v82, v75, v76);
  }
  if ( v129 )
  {
    v130 = 0;
    qfree(v129, v73, v82, v75, v76);
  }
  if ( v127 )
  {
    v128 = 0;
    qfree(v127, v73, v82, v75, v76);
  }
  if ( v125 )
  {
    v126 = 0;
    qfree(v125, v73, v82, v75, v76);
  }
  return v139 - __readfsqword(0x28u);
}
