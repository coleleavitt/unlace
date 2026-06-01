unsigned __int64 __fastcall sub_1C27E0(
        QT::QWidget *this,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // r8
  __int64 v13; // r9
  int *v14; // rax
  char *v15; // rdx
  char *v16; // r12
  char *i; // r14
  __int64 v18; // r13
  char v19; // al
  QT::QLayout *v20; // rax
  QT::QLayout *v21; // rax
  QT::QLayout *v22; // rax
  double v23; // xmm4_8
  double v24; // xmm5_8
  QT::QVariant *v25; // rdx
  const char *v26; // rsi
  size_t v27; // r12
  const char *v28; // r15
  const char *v29; // r14
  const char *v30; // rbp
  const char *v31; // rsi
  const char *v32; // rdi
  const char *v33; // r14
  const char *v34; // rsi
  const char *v35; // rdi
  QT::QObject *v36; // r12
  char v37; // al
  const char *v38; // r12
  size_t v39; // rax
  const char *v40; // r13
  size_t v41; // rdx
  __int64 v42; // rax
  QT::QComboBox *v43; // r14
  __int64 v44; // rax
  const char *v45; // rdx
  __int64 v46; // r13
  __int64 v47; // r12
  const char *v48; // rax
  __int64 v49; // rdi
  QT::QWidget *v50; // r12
  __int64 v51; // rdi
  QT::QLayout *v52; // rax
  const char **v53; // r13
  QT::QListWidget *v54; // r14
  int v55; // eax
  QT::QWidget *v56; // r13
  QT::QObject *v57; // r13
  __m128i si128; // xmm0
  __m128i v59; // xmm0
  QT::QWidget *v60; // r13
  QT::QWidget *v61; // r13
  int v62; // ecx
  int v63; // r8d
  QT::QLayout *v64; // rax
  QT::QAbstractButton *v65; // r13
  int v66; // eax
  QT::QAbstractButton *v67; // r13
  __int64 v68; // rax
  QT::QPushButton *v69; // r14
  QT::QPushButton *v70; // r14
  QT::QWidget *v71; // r12
  __int64 v72; // rax
  QT::QObject **v73; // r12
  __m128 v74; // xmm3
  __m128 v75; // xmm2
  __m128i v76; // xmm1
  __m128i v77; // xmm0
  __m128i v78; // xmm4
  __int64 v79; // rax
  QT::QSyntaxHighlighter *v80; // r14
  _DWORD *v81; // rax
  QT::QTextDocument *v82; // rax
  const char *v83; // r8
  QT::QObject *v84; // r14
  int v85; // r12d
  int v86; // eax
  char isTabEnabled; // al
  QT::QTabWidget *v88; // rdi
  double v89; // xmm4_8
  double v90; // xmm5_8
  __int64 v91; // r8
  __int64 v92; // r9
  int *v93; // rax
  char *v94; // rdx
  char *v95; // r14
  char *v96; // r12
  int v98; // r12d
  int v99; // r13d
  void *v100; // r13
  char *v101; // rax
  char *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // [rsp+0h] [rbp-1D8h]
  void *v106; // [rsp+0h] [rbp-1D8h]
  char v107; // [rsp+8h] [rbp-1D0h]
  QT::QVariant *v108; // [rsp+8h] [rbp-1D0h]
  QT::QVariant *v109; // [rsp+8h] [rbp-1D0h]
  int v110; // [rsp+10h] [rbp-1C8h]
  QT::QString *extlang; // [rsp+10h] [rbp-1C8h]
  const char *v112; // [rsp+18h] [rbp-1C0h]
  int v113[2]; // [rsp+28h] [rbp-1B0h]
  __int64 *v114; // [rsp+30h] [rbp-1A8h]
  char v115[8]; // [rsp+58h] [rbp-180h] BYREF
  void *v116[2]; // [rsp+60h] [rbp-178h] BYREF
  __int64 v117; // [rsp+70h] [rbp-168h]
  const char *v118; // [rsp+80h] [rbp-158h] BYREF
  __int128 v119; // [rsp+88h] [rbp-150h]
  void *v120[2]; // [rsp+A0h] [rbp-138h] BYREF
  __m128i v121; // [rsp+B0h] [rbp-128h] BYREF
  int v122; // [rsp+C0h] [rbp-118h]
  void *ptr[3]; // [rsp+D0h] [rbp-108h] BYREF
  __int128 v124; // [rsp+E8h] [rbp-F0h]
  __int128 v125; // [rsp+F8h] [rbp-E0h]
  __int64 v126; // [rsp+108h] [rbp-D0h]
  __m128i v127; // [rsp+110h] [rbp-C8h]
  __m128i v128; // [rsp+120h] [rbp-B8h]
  __int64 v129; // [rsp+130h] [rbp-A8h]
  __int128 v130; // [rsp+138h] [rbp-A0h]
  __int64 v131; // [rsp+148h] [rbp-90h]
  __int64 v132; // [rsp+150h] [rbp-88h]
  char v133; // [rsp+158h] [rbp-80h]
  __int64 v134; // [rsp+160h] [rbp-78h]
  __int128 v135; // [rsp+170h] [rbp-68h] BYREF
  __int64 v136; // [rsp+180h] [rbp-58h]
  __int64 v137; // [rsp+188h] [rbp-50h]
  unsigned __int64 v138; // [rsp+198h] [rbp-40h]

  v138 = __readfsqword(0x28u);
  sub_53A8A0(this, a3, 0);
  *((_QWORD *)this + 7) = 0;
  *(_QWORD *)this = &ColorsOptionsDialog___vtable;
  *((_QWORD *)this + 6) = ColorsOptionsDialog___vtable_at__48;
  *((_QWORD *)this + 2) = ColorsOptionsDialog___vtable_at__16;
  sub_1B4430((__int64)this + 64, a2);
  sub_1B4430((__int64)this + 160, a2);
  *((_QWORD *)this + 32) = operator new(0x510u);
  *(_OWORD *)((char *)this + 264) = 0;
  *((_QWORD *)this + 41) = 0;
  *(_OWORD *)((char *)this + 280) = 0;
  *(_OWORD *)((char *)this + 296) = 0;
  *(_OWORD *)((char *)this + 312) = 0;
  *((_BYTE *)this + 344) = 0;
  v114 = (__int64 *)((char *)this + 264);
  sub_52EAB0(ptr, (char *)this + 160, 1);
  QT::QWidget::setStyleSheet(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  sub_1BC780(*((_QWORD *)this + 32), this);
  v117 = 0;
  *(_OWORD *)v116 = 0;
  QT::qt_qFindChildren_helper(this, 0, 0, &off_89EA20, v116, 1);
  v14 = (int *)v116[0];
  if ( !v116[0] || *(int *)v116[0] > 1 )
  {
    sub_178660((__int64)v116, 0, 0, 0, v12, v13);
    v14 = (int *)v116[0];
  }
  v15 = (char *)v116[1];
  v16 = (char *)v116[1];
  if ( !v14 || *v14 > 1 )
  {
    sub_178660((__int64)v116, 0, 0, 0, v12, v13);
    v15 = (char *)v116[1];
  }
  for ( i = &v15[8 * v117]; i != v16; v16 += 8 )
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)v16;
      QT::QLabel::text((QT::QLabel *)ptr);
      v19 = QT::Qt::mightBeRichText(ptr[1], (unsigned __int64)ptr[2] | 0x8000000000000000LL);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      {
        v107 = v19;
        free(ptr[0]);
        v19 = v107;
      }
      if ( v19 )
        break;
      v16 += 8;
      if ( i == v16 )
        goto LABEL_18;
    }
    QT::QLabel::setTextFormat(v18, 1);
  }
LABEL_18:
  QT::QString::fromUtf8(ptr, 10, "IDA Colors");
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  *((_QWORD *)this + 33) = sub_1B9FA0((__int64)this, "default", 0);
  *((_QWORD *)this + 34) = sub_1B9FA0((__int64)this, "debugging", 2u);
  *((_QWORD *)this + 35) = sub_1B9FA0((__int64)this, (char *)"hints", 4u);
  v20 = (QT::QLayout *)QT::QWidget::layout(*(QT::QWidget **)(*((_QWORD *)this + 32) + 176LL));
  QT::QLayout::addWidget(v20, *((QT::QWidget **)this + 33));
  v21 = (QT::QLayout *)QT::QWidget::layout(*(QT::QWidget **)(*((_QWORD *)this + 32) + 176LL));
  QT::QLayout::addWidget(v21, *((QT::QWidget **)this + 34));
  v22 = (QT::QLayout *)QT::QWidget::layout(*(QT::QWidget **)(*((_QWORD *)this + 32) + 176LL));
  QT::QLayout::addWidget(v22, *((QT::QWidget **)this + 35));
  v118 = nullptr;
  v119 = 0;
  sub_1BAEB0(&v118, 0.0, a5, a6, a7, v23, v24, a10, a11);
  v25 = (QT::QVariant *)v119;
  v26 = v118;
  v27 = *((_QWORD *)this + 21);
  v28 = &v118[24 * v119];
  if ( v118 == v28 )
  {
LABEL_111:
    v100 = nullptr;
    if ( v27 )
    {
      v100 = (void *)qalloc_or_throw(v27);
      memcpy(v100, *((const void **)this + 20), v27);
      v25 = (QT::QVariant *)v119;
      v26 = v118;
      v101 = (char *)(v119 + 1);
      if ( *((_QWORD *)&v119 + 1) >= (unsigned __int64)(v119 + 1) )
        goto LABEL_113;
    }
    else
    {
      v101 = (char *)v25 + 1;
      if ( *((_QWORD *)&v119 + 1) >= (unsigned __int64)v25 + 1 )
      {
LABEL_113:
        v102 = (char *)&v26[24 * (_QWORD)v25];
        *(_QWORD *)v102 = v100;
        v26 = v118;
        *(__m128i *)(v102 + 8) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
        *(_QWORD *)&v119 = v119 + 1;
        v28 = &v26[24 * v119];
        if ( v26 == v28 )
          goto LABEL_115;
        v27 = *((_QWORD *)this + 21);
        goto LABEL_31;
      }
    }
    v118 = (const char *)qvector_reserve(&v118, v26, v101, 24);
    v25 = (QT::QVariant *)v119;
    v26 = v118;
    goto LABEL_113;
  }
  v29 = v118;
  v30 = v118;
  v108 = (QT::QVariant *)v119;
  while ( 1 )
  {
    if ( *((_QWORD *)v30 + 1) )
    {
      v31 = *(const char **)v30;
      v32 = &s1;
      if ( !v27 )
        goto LABEL_24;
      goto LABEL_29;
    }
    if ( !v27 )
      break;
    v31 = &s1;
LABEL_29:
    v32 = *((const char **)this + 20);
LABEL_24:
    if ( !strcmp(v32, v31) )
      break;
    v30 += 24;
    if ( v28 == v30 )
    {
      v25 = v108;
      v26 = v29;
      goto LABEL_111;
    }
  }
  v26 = v29;
  v25 = v108;
  if ( v28 == v30 )
    goto LABEL_111;
LABEL_31:
  v109 = (QT::QVariant *)v26;
  v33 = v26;
  while ( 2 )
  {
    if ( *((_QWORD *)v33 + 1) )
    {
      v34 = *(const char **)v33;
      v35 = &s1;
      if ( v27 )
        goto LABEL_38;
      goto LABEL_33;
    }
    if ( v27 )
    {
      v34 = &s1;
LABEL_38:
      v35 = *((const char **)this + 20);
LABEL_33:
      if ( !strcmp(v35, v34) )
        break;
      v33 += 24;
      if ( v28 == v33 )
        goto LABEL_115;
      continue;
    }
    break;
  }
  if ( v28 != v33 )
  {
    *(_QWORD *)v113 = 0xAAAAAAAAAAAAAAABLL * ((v33 - (const char *)v109) >> 3);
    goto LABEL_41;
  }
LABEL_115:
  v113[0] = 0;
LABEL_41:
  v36 = *(QT::QObject **)(*((_QWORD *)this + 32) + 32LL);
  QT::QObject::QObject((QT::QObject *)ptr, nullptr);
  ptr[2] = nullptr;
  ptr[0] = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)ptr, v105);
  v37 = QT::QObject::blockSignals(v36, 1);
  v38 = v118;
  BYTE8(v124) = v37;
  v112 = &v118[24 * v119];
  if ( v112 != v118 )
  {
    do
    {
      v42 = *((_QWORD *)this + 32);
      v137 = 2;
      v135 = 0;
      v43 = *(QT::QComboBox **)(v42 + 32);
      v136 = 0;
      v44 = *((_QWORD *)v38 + 1);
      if ( v44 )
      {
        v39 = v44 - 1;
        v40 = *(const char **)v38;
        v41 = v39 >> 63;
        if ( !*(_QWORD *)v38 )
          goto LABEL_51;
      }
      else
      {
        v40 = &s1;
        LOBYTE(v41) = 0;
        v39 = 0;
        if ( !&s1 )
        {
LABEL_51:
          v39 = 0;
          if ( v40 )
            v39 = strlen(v40);
          goto LABEL_45;
        }
      }
      if ( (_BYTE)v41 )
        goto LABEL_51;
LABEL_45:
      QT::QString::fromUtf8(v120, v39, v40);
      v110 = QT::QComboBox::count(v43);
      QT::QIcon::QIcon((QT::QIcon *)v115);
      QT::QComboBox::insertItem(
        v43,
        v110,
        (const QT::QIcon *)v115,
        (const QT::QString *)v120,
        (const QT::QVariant *)&v135);
      QT::QIcon::~QIcon((QT::QIcon *)v115);
      if ( v120[0] && !_InterlockedSub((volatile signed __int32 *)v120[0], 1u) )
        free(v120[0]);
      v38 += 24;
      QT::QVariant::~QVariant((QT::QVariant *)&v135);
    }
    while ( v112 != v38 );
  }
  QT::QComboBox::setCurrentIndex(*(QT::QComboBox **)(*((_QWORD *)this + 32) + 32LL), v113[0]);
  sub_51A3D0((QT::QObject *)ptr);
  v45 = v118;
  if ( v118 )
  {
    v46 = v119;
    if ( (_QWORD)v119 )
    {
      v47 = 0;
      do
      {
        v48 = &v45[24 * v47];
        v49 = *(_QWORD *)v48;
        if ( *(_QWORD *)v48 )
        {
          *((_QWORD *)v48 + 1) = 0;
          qfree(v49, (const char *)(unsigned int)v113[0]);
          v45 = v118;
        }
        ++v47;
      }
      while ( v46 != v47 );
    }
    *(_QWORD *)&v119 = 0;
    qfree(v45, (const char *)(unsigned int)v113[0]);
  }
  v50 = (QT::QWidget *)operator new(0x1C8u);
  sub_33F2E0(v50);
  *((_QWORD *)this + 36) = v50;
  sub_341750(v50);
  v51 = *((_QWORD *)this + 36);
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_5DC5C0);
  sub_340DA0(v51, ptr, 0);
  sub_342440(*((QT::QWidget **)this + 36));
  sub_340ED0(*((QT::QWidget **)this + 36));
  sub_33F9D0(*((_QWORD *)this + 36), 1);
  sub_341510(*((_QWORD *)this + 36), 256, 0);
  sub_33F9E0(*((_QWORD *)this + 36), 1280);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 32) + 216LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)this + 32) + 216LL),
    0);
  v52 = (QT::QLayout *)QT::QWidget::layout(*(QT::QWidget **)(*((_QWORD *)this + 32) + 184LL));
  QT::QLayout::addWidget(v52, *((QT::QWidget **)this + 36));
  v53 = (const char **)&off_85D480;
  do
  {
    v54 = *(QT::QListWidget **)(*((_QWORD *)this + 32) + 200LL);
    QT::QMetaObject::tr((QT::QMetaObject *)ptr, off_881880, *v53, 0);
    v55 = QT::QListWidget::count(v54);
    QT::QListWidget::insertItem(v54, v55, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    ++v53;
  }
  while ( &`vtable for'register_timer(int,int (*)(void *),void *)::start_timer_t != (__int64 *)v53 );
  QT::QListWidget::setCurrentRow(*(QT::QListWidget **)(*((_QWORD *)this + 32) + 200LL), 0);
  v56 = (QT::QWidget *)operator new(0x758u);
  sub_39C1C0(v56);
  *((_QWORD *)this + 37) = v56;
  v57 = (QT::QObject *)operator new(0xA0u);
  sub_512270(v57, v106);
  *((_QWORD *)this + 38) = v57;
  ptr[0] = nullptr;
  v126 = 0;
  *(_QWORD *)v57 = &MainMsgList___vtable;
  *((_QWORD *)v57 + 2) = MainMsgList___vtable_at__16;
  v128.m128i_i64[0] = 0;
  v128.m128i_i64[1] = -1;
  v129 = 0;
  v131 = 0;
  v132 = 0;
  *(_OWORD *)&ptr[1] = 0;
  v124 = 0;
  v125 = 0;
  v127 = 0;
  v130 = 0;
  sub_1E8870(v120, 1);
  si128 = _mm_load_si128((const __m128i *)v120);
  v133 = 0;
  v134 = 0;
  v127 = si128;
  v59 = _mm_load_si128(&v121);
  LODWORD(v129) = v122;
  v128 = v59;
  sub_1E2AF0(ptr);
  v60 = (QT::QWidget *)operator new(0x428u);
  sub_1E39B0(v60, "Sample CPU Registers");
  *((_QWORD *)this + 39) = v60;
  qfree(*((_QWORD *)&v130 + 1), "Sample CPU Registers");
  *((_QWORD *)&v130 + 1) = 0;
  qfree(v131, "Sample CPU Registers");
  v131 = 0;
  if ( (_QWORD)v130 )
    qfree(v130, "Sample CPU Registers");
  v61 = (QT::QWidget *)operator new(0xB8u);
  sub_529BA0(v61);
  *((_QWORD *)this + 40) = v61;
  QT::QString::fromUtf8(
    ptr,
    463,
    "/*      This example shows how to use array manipulation functions.\n"
    "*/\n"
    "#include <idc.idc>\n"
    "auto origEA, currEA, funcStart, funcEnd;\n"
    "origEA = get_screen_ea();    // Get current address\n"
    "funcStart = get_func_attr(origEA, FUNCATTR_START);\n"
    "funcEnd = get_func_attr(origEA, FUNCATTR_END);\n"
    "if ( long(funcStart) == -1 )\n"
    "  msg(\"%x is not part of a function\", origEA);\n"
    "for ( currEA=funcStart; currEA != BADADDR; currEA=next_head(currEA, funcEnd) )\n"
    "{\n"
    "  msg(\"%8x\", currEA);\n"
    "}\n"
    "\n",
    v62,
    v63);
  QT::QPlainTextEdit::setPlainText(v61, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v64 = (QT::QLayout *)QT::QWidget::layout(*(QT::QWidget **)(*((_QWORD *)this + 32) + 1144LL));
  QT::QLayout::addWidget(v64, *((QT::QWidget **)this + 40));
  v65 = *(QT::QAbstractButton **)(*((_QWORD *)this + 32) + 1008LL);
  v66 = reg_int_op("GraphOverviewGradient", 0, 1, 0);
  QT::QAbstractButton::setChecked(v65, v66 != 0);
  QT::QObject::connect(ptr, *(_QWORD *)(*((_QWORD *)this + 32) + 1280LL), "2accepted()", this, "1accept()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, *(_QWORD *)(*((_QWORD *)this + 32) + 1280LL), "2rejected()", this, "1reject()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v67 = (QT::QAbstractButton *)QT::QDialogButtonBox::button(*(_QWORD *)(*((_QWORD *)this + 32) + 1280LL), 0x1000000);
  sub_17F3A0((QT::QAction *)ptr);
  QT::QAbstractButton::setShortcut(v67, (const QT::QKeySequence *)ptr);
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)ptr);
  v68 = QT::QDialogButtonBox::button(*(_QWORD *)(*((_QWORD *)this + 32) + 1280LL), 0x1000000);
  QT::QObject::connect(ptr, v68, "2clicked()", this, "1help_clicked()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v69 = (QT::QPushButton *)operator new(0x28u);
  QT::QMetaObject::tr((QT::QMetaObject *)ptr, off_881880, "&Reset", 0);
  QT::QPushButton::QPushButton(v69, (const QT::QString *)ptr, nullptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QDialogButtonBox::addButton(*(_QWORD *)(*((_QWORD *)this + 32) + 1280LL), v69, 3);
  QT::QObject::connect(ptr, v69, "2clicked()", this, "1reset_clicked()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v70 = (QT::QPushButton *)operator new(0x28u);
  QT::QMetaObject::tr((QT::QMetaObject *)ptr, off_881880, "&Apply", 0);
  QT::QPushButton::QPushButton(v70, (const QT::QString *)ptr, nullptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QDialogButtonBox::addButton(*(_QWORD *)(*((_QWORD *)this + 32) + 1280LL), v70, 8);
  QT::QObject::connect(ptr, v70, "2clicked()", this, "1apply_clicked()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, this, "2accepted()", this, "1on_accepted()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, this, "2rejected()", this, "1on_rejected()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v71 = (QT::QWidget *)operator new(0xB8u);
  sub_2A6C10(v71);
  v72 = *((_QWORD *)this + 32);
  *((_QWORD *)this + 41) = v71;
  v73 = (QT::QObject **)((char *)this + 368);
  v74 = (__m128)_mm_loadu_si128((const __m128i *)(v72 + 1064));
  v75 = (__m128)_mm_loadu_si128((const __m128i *)(v72 + 1080));
  v76 = _mm_loadu_si128((const __m128i *)(v72 + 1096));
  v77 = _mm_loadu_si128((const __m128i *)(v72 + 1112));
  v78 = _mm_loadu_si128((const __m128i *)(v72 + 1048));
  v79 = *(_QWORD *)(v72 + 1128);
  *((__m128 *)this + 24) = v74;
  *((__m128 *)this + 25) = v75;
  *((_QWORD *)this + 56) = v79;
  *((__m128i *)this + 23) = v78;
  *((__m128i *)this + 26) = v76;
  *((__m128i *)this + 27) = v77;
  extlang = (QT::QString *)find_extlang("idc", 0);
  v80 = (QT::QSyntaxHighlighter *)operator new(0x28u);
  ptr[0] = extlang;
  if ( extlang )
    ++*((_DWORD *)extlang + 3);
  sub_5182A0(v80, *((_QWORD *)this + 40), ptr);
  v81 = ptr[0];
  *((_QWORD *)this + 44) = v80;
  if ( v81 )
  {
    --v81[3];
    v80 = *((QT::QSyntaxHighlighter **)this + 44);
  }
  v82 = (QT::QTextDocument *)QT::QPlainTextEdit::document(*((QT::QPlainTextEdit **)this + 40));
  QT::QSyntaxHighlighter::setDocument(v80, v82);
  do
  {
    v84 = *v73;
    QT::QObject::disconnect(
      *v73,
      (const QT::QObject *)"2clicked()",
      (const char *)*v73,
      (const QT::QObject *)"1on_clicked()",
      v83);
    QT::QObject::connect(ptr, v84, "2clicked()", this, "1syntax_button_clicked()", 0);
    ++v73;
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  }
  while ( v73 != (QT::QObject **)((char *)this + 456) );
  v85 = 0;
  if ( (unsigned __int8)netnode_inited() )
  {
    v103 = *((_QWORD *)this + 32);
    *((_DWORD *)this + 84) = 0;
    sub_1B9300((__int64)this, *(QT::QComboBox **)(v103 + 160), (__int64)&unk_5DFF40, 0x31u, *(double *)v77.m128i_i64);
    sub_1B9300(
      (__int64)this,
      *(QT::QComboBox **)(*((_QWORD *)this + 32) + 136LL),
      (__int64)&unk_5DFDE0,
      0x2Au,
      *(double *)v77.m128i_i64);
    sub_1B4FF0((__int64)this);
    sub_1B5120((_QWORD **)this);
    v104 = *((_QWORD *)this + 32);
  }
  else
  {
    while ( 1 )
    {
      v86 = QT::QTabWidget::count(*(QT::QTabWidget **)(*((_QWORD *)this + 32) + 40LL));
      v104 = *((_QWORD *)this + 32);
      if ( v86 - 1 <= v85 )
        break;
      QT::QTabWidget::setTabEnabled(*(QT::QTabWidget **)(v104 + 40), v85++, 0);
    }
  }
  isTabEnabled = QT::QTabWidget::isTabEnabled(*(QT::QTabWidget **)(v104 + 40), dword_8CAE38);
  v88 = *(QT::QTabWidget **)(*((_QWORD *)this + 32) + 40LL);
  if ( isTabEnabled )
  {
    QT::QTabWidget::setCurrentIndex(v88, dword_8CAE38);
  }
  else
  {
    v98 = QT::QTabWidget::count(v88);
    if ( v98 > 0 )
    {
      v99 = 0;
      while ( !(unsigned __int8)QT::QTabWidget::isTabEnabled(*(QT::QTabWidget **)(*((_QWORD *)this + 32) + 40LL), v99) )
      {
        if ( v98 == ++v99 )
          goto LABEL_88;
      }
      QT::QTabWidget::setCurrentIndex(*(QT::QTabWidget **)(*((_QWORD *)this + 32) + 40LL), v99);
    }
  }
LABEL_88:
  ptr[0] = (void *)QT::QDialog::minimumSizeHint(this);
  QT::QWidget::resize(this, ptr);
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 32) + 984LL) + 80LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 32) + 1000LL) + 80LL) |= 1u;
  QT::QWidget::setWindowFlags(this, *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0xFFFEFFFF);
  sub_53A8F0(this);
  sub_1B4080(v114);
  sub_1BBDA0((QT::QWidget **)this, 1u, *(double *)v77.m128i_i64, *(double *)v76.m128i_i64, v75, v74, v89, v90, a10, a11);
  memset(ptr, 0, sizeof(ptr));
  QT::qt_qFindChildren_helper(this, 0, 0, &off_8979C0, ptr, 1);
  v93 = (int *)ptr[0];
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
  {
    sub_1BB9C0((__int64)ptr, 0, 0, 0, v91, v92);
    v93 = (int *)ptr[0];
  }
  v94 = (char *)ptr[1];
  v95 = (char *)ptr[1];
  if ( !v93 || *v93 > 1 )
  {
    sub_1BB9C0((__int64)ptr, 0, 0, 0, v91, v92);
    v94 = (char *)ptr[1];
  }
  v96 = &v94[8 * (__int64)ptr[2]];
  while ( v96 != v95 )
  {
    QT::QObject::connect(
      v120,
      *(_QWORD *)v95,
      "2colorChanged(const QColor &)",
      this,
      "1color_button_changed(const QColor &)",
      0);
    v95 += 8;
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v120);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  hook_event_listener(1, (char *)this + 48, 0, 1);
  if ( extlang )
    --*((_DWORD *)extlang + 3);
  if ( v116[0] && !_InterlockedSub((volatile signed __int32 *)v116[0], 1u) )
    free(v116[0]);
  return v138 - __readfsqword(0x28u);
}
