unsigned __int64 __fastcall sub_393740(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  QT::QComboBox *v11; // rbp
  __int64 v12; // rsi
  __int64 (*v13)(); // rax
  QT::QComboBox *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  void **v22; // r14
  void **v23; // r15
  __int64 v24; // rax
  QT::QHeaderView *v25; // r14
  int v26; // eax
  __int64 v27; // rsi
  QT::QAbstractButton *v28; // r14
  _QWORD *v29; // r14
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  const char *v35; // rsi
  void **v36; // rbx
  void **v37; // rbp
  QT::QLineEdit *v39; // r14
  char v40; // al
  __int64 v41; // [rsp+0h] [rbp-C8h]
  __int64 v42; // [rsp+0h] [rbp-C8h]
  __int64 v43; // [rsp+0h] [rbp-C8h]
  __int64 v44; // [rsp+0h] [rbp-C8h]
  __int64 v45; // [rsp+8h] [rbp-C0h]
  __int64 v46; // [rsp+8h] [rbp-C0h]
  __int64 v47; // [rsp+8h] [rbp-C0h]
  __m128i v48[2]; // [rsp+10h] [rbp-B8h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v50; // [rsp+40h] [rbp-88h]
  __int64 v51; // [rsp+50h] [rbp-78h] BYREF
  __int128 v52; // [rsp+58h] [rbp-70h]
  void *v53[2]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v54; // [rsp+78h] [rbp-50h]
  unsigned __int64 v55; // [rsp+88h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  sub_53A8A0(a1, a2, 0);
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)a1 = &TStructureOffsetsForm___vtable;
  *(_QWORD *)(a1 + 16) = TStructureOffsetsForm___vtable_at__16;
  *(_QWORD *)(a1 + 64) = a3;
  *(_QWORD *)(a1 + 72) = operator new(0xA8u);
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  QT::QObject::QObject((QT::QObject *)(a1 + 152), nullptr);
  *(_QWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 152) = &HintProvider___vtable;
  sub_2D21B0((const QT::QObject **)(a1 + 152), 0, 0, (__int64)&unk_5C2F25, v5, v6, v41, v45, v48[0].m128i_i64[0]);
  QT::QObject::QObject((QT::QObject *)(a1 + 720), nullptr);
  *(_QWORD *)(a1 + 720) = &HintProvider___vtable;
  *(_QWORD *)(a1 + 1272) = 0;
  *(_QWORD *)(a1 + 1280) = 0;
  sub_2D21B0((const QT::QObject **)(a1 + 720), 0, 0, (__int64)&unk_5C2F25, v7, v8, v42, v46, v48[0].m128i_i64[0]);
  *(_QWORD *)(a1 + 1288) = 0;
  sub_38CB40(*(_QWORD *)(a1 + 72), (QT::QWidget *)a1);
  v9 = *(_QWORD *)(a1 + 72);
  v51 = 0;
  v54 = 0;
  v10 = *(_QWORD *)(v9 + 72);
  v52 = 0;
  *(_OWORD *)v53 = 0;
  *(_QWORD *)(a1 + 96) = v10;
  sub_4F65D0(&v51, "STROFFSET");
  v11 = *(QT::QComboBox **)(a1 + 96);
  v12 = (unsigned int)QT::QComboBox::count(v11);
  QT::QComboBox::insertItems(v11, v12, v53);
  v13 = *(__int64 (**)())(*QT::QCoreApplication::self + 288LL);
  if ( v13 == sub_3895F0 )
    goto LABEL_2;
  v40 = v13();
  v14 = *(QT::QComboBox **)(a1 + 96);
  if ( !v40 )
  {
    QT::QComboBox::setCompleter(v14, nullptr);
LABEL_2:
    v14 = *(QT::QComboBox **)(a1 + 96);
  }
  if ( v54 )
  {
    QT::QComboBox::setCurrentIndex(v14, 0);
  }
  else
  {
    v39 = (QT::QLineEdit *)QT::QComboBox::lineEdit(v14);
    QT::QString::fromUtf8(ptr, 3, "0x0");
    QT::QLineEdit::setText(v39, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 136LL);
  *(_QWORD *)(a1 + 80) = v15;
  *(_QWORD *)(v15 + 40) = a1;
  QT::QAbstractItemView::setSelectionMode(*(_QWORD *)(a1 + 80), 1);
  QT::QTreeWidget::setColumnCount(*(QT::QTreeWidget **)(a1 + 80), 1);
  v16 = *(_QWORD *)(a1 + 80);
  QT::QMetaObject::tr((QT::QMetaObject *)v48, off_88EAA0, "Structures and Unions", 0);
  *(_OWORD *)ptr = 0;
  v50 = 0;
  sub_1D5510((__m128i *)ptr, 0, v48, v17, v18, v19);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v20, v21);
  QT::QTreeWidget::setHeaderLabels(v16, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v22 = (void **)ptr[1];
    v23 = (void **)((char *)ptr[1] + 24 * v50);
    if ( ptr[1] != v23 )
    {
      do
      {
        if ( *v22 && !_InterlockedSub((volatile signed __int32 *)*v22, 1u) )
          free(*v22);
        v22 += 3;
      }
      while ( v23 != v22 );
    }
    free(ptr[0]);
  }
  if ( v48[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v48[0].m128i_i64[0], 1u) )
    free((void *)v48[0].m128i_i64[0]);
  v24 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 144LL);
  *(_QWORD *)(a1 + 88) = v24;
  *(_QWORD *)(v24 + 40) = a1;
  v25 = (QT::QHeaderView *)QT::QTableView::verticalHeader(*(QT::QTableView **)(a1 + 88));
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)ptr, (const QT::QFont *)(*(_QWORD *)(a1 + 32) + 56LL));
  v26 = QT::QFontMetrics::height((QT::QFontMetrics *)ptr);
  QT::QHeaderView::setDefaultSectionSize(v25, v26 + 4);
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)ptr);
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 152LL);
  *(_QWORD *)(a1 + 48) = v27;
  QT::QObject::connect(ptr, v27, "2filter_changed()", a1, "1filter_changed()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(
    ptr,
    *(_QWORD *)(a1 + 48),
    "2reserved_key_press(const QKeyEvent &)",
    a1,
    "1filter_reserved_key_press(const QKeyEvent &)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QWidget::hide(*(QT::QWidget **)(a1 + 48));
  QT::QObject::connect(
    ptr,
    *(_QWORD *)(*(_QWORD *)(a1 + 72) + 48LL),
    "2currentIndexChanged(int)",
    a1,
    "1currentRegisterChanged(int)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, *(_QWORD *)(a1 + 96), "2editTextChanged(QString)", a1, "1deltaChanged()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(
    ptr,
    *(_QWORD *)(a1 + 80),
    "2currentItemChanged(QTreeWidgetItem *, QTreeWidgetItem *)",
    a1,
    "1typesChange(QTreeWidgetItem *)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(
    ptr,
    *(_QWORD *)(a1 + 80),
    "2itemDoubleClicked(QTreeWidgetItem*,int)",
    a1,
    "1typesClick(QTreeWidgetItem*)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 160LL), "2accepted()", a1, "1okClicked()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 160LL), "2rejected()", a1, "1reject()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v28 = (QT::QAbstractButton *)QT::QDialogButtonBox::button(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 160LL), 0x1000000);
  sub_17F3A0((QT::QAction *)ptr);
  QT::QAbstractButton::setShortcut(v28, (const QT::QKeySequence *)ptr);
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)ptr);
  v29 = QT::QCoreApplication::self;
  v30 = QT::QDialogButtonBox::button(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 160LL), 0x1000000);
  sub_47C670(v29, v30, "2clicked()", "/user-guide/user-interface/menu-bar/edit/operand-types/offset");
  sub_2D21B0(
    (const QT::QObject **)(a1 + 152),
    *(_QWORD *)(a1 + 80),
    a1,
    (__int64)"treeHint",
    v31,
    v32,
    v43,
    (__int64)&v51,
    v48[0].m128i_i64[0]);
  sub_2D21B0(
    (const QT::QObject **)(a1 + 720),
    *(_QWORD *)(a1 + 88),
    a1,
    (__int64)"listHint",
    v33,
    v34,
    v44,
    v47,
    v48[0].m128i_i64[0]);
  QT::QObject::connect(
    ptr,
    *(_QWORD *)(a1 + 88),
    "2itemChanged(QTableWidgetItem *)",
    a1,
    "1updateOffsetActions(QTableWidgetItem *)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v35 = (const char *)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 12LL) & 0xFFFEFFFF);
  QT::QWidget::setWindowFlags(a1, v35);
  sub_53A8F0(a1);
  if ( v53[0] && !_InterlockedSub((volatile signed __int32 *)v53[0], 1u) )
  {
    v36 = (void **)v53[1];
    v37 = (void **)((char *)v53[1] + 24 * v54);
    if ( v53[1] != v37 )
    {
      do
      {
        if ( *v36 && !_InterlockedSub((volatile signed __int32 *)*v36, 1u) )
          free(*v36);
        v36 += 3;
      }
      while ( v37 != v36 );
    }
    free(v53[0]);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51, v35);
  }
  return v55 - __readfsqword(0x28u);
}
