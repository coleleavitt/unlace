unsigned __int64 __fastcall sub_37D360(QT::QWidget *this, __int64 a2)
{
  QT::QWidget **v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  QT::QHeaderView *v18; // r13
  int v19; // eax
  QT::QAbstractButton *v20; // r13
  _QWORD *v21; // rbp
  __int64 v22; // rax
  void **v23; // rbx
  void **v24; // rbp
  void *ptr[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+10h] [rbp-A8h]
  __m128i v28[2]; // [rsp+20h] [rbp-98h] BYREF
  __m128i v29[2]; // [rsp+40h] [rbp-78h] BYREF
  __m128i v30; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  sub_53A8A0(this, a2, 0);
  *(_QWORD *)this = &TSegTransBox___vtable;
  *((_QWORD *)this + 2) = TSegTransBox___vtable_at__16;
  v2 = (QT::QWidget **)operator new(0x80u);
  *((_QWORD *)this + 6) = v2;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_OWORD *)this + 4) = 0;
  *(_OWORD *)((char *)this + 88) = 0;
  *((_OWORD *)this + 7) = 0;
  sub_37B3B0(v2, this);
  QT::QLayout::setContentsMargins(*(QT::QLayout **)(*((_QWORD *)this + 6) + 8LL), 10, 10, 10, 10);
  QT::QWidget::setLayout(this, *(QT::QLayout **)(*((_QWORD *)this + 6) + 8LL));
  v27 = 0;
  *(_OWORD *)ptr = 0;
  QT::QMetaObject::tr((QT::QMetaObject *)v28, off_88DC80, "Name", 0);
  sub_1D5280((__m128i *)ptr, v27, v28, v3, v4, v5);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v6, v7);
  QT::QMetaObject::tr((QT::QMetaObject *)v29, off_88DC80, "Start", 0);
  sub_1D5280((__m128i *)ptr, v27, v29, v8, v9, v10);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v11, v12);
  QT::QMetaObject::tr((QT::QMetaObject *)&v30, off_88DC80, "End", 0);
  sub_1D5280((__m128i *)ptr, v27, &v30, v13, v14, v15);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v16, v17);
  if ( v30.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v30.m128i_i64[0], 1u) )
    free((void *)v30.m128i_i64[0]);
  if ( v29[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v29[0].m128i_i64[0], 1u) )
    free((void *)v29[0].m128i_i64[0]);
  if ( v28[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v28[0].m128i_i64[0], 1u) )
    free((void *)v28[0].m128i_i64[0]);
  QT::QTableWidget::setHorizontalHeaderLabels(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL), ptr);
  v18 = (QT::QHeaderView *)QT::QTableView::verticalHeader(*(QT::QTableView **)(*((_QWORD *)this + 6) + 32LL));
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)&v30, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
  v19 = QT::QFontMetrics::height((QT::QFontMetrics *)&v30);
  QT::QHeaderView::setDefaultSectionSize(v18, v19 + 6);
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)&v30);
  QT::QTableView::setShowGrid(*(QT::QTableView **)(*((_QWORD *)this + 6) + 32LL), 0);
  QT::QAbstractItemView::setSelectionBehavior(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL), 1);
  QT::QAbstractItemView::setSelectionMode(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL), 1);
  QT::QObject::connect(&v30, *(_QWORD *)(*((_QWORD *)this + 6) + 120LL), "2rejected()", this, "1reject()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v30);
  QT::QObject::connect(&v30, *(_QWORD *)(*((_QWORD *)this + 6) + 120LL), "2accepted()", this, "1accept()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v30);
  v20 = (QT::QAbstractButton *)QT::QDialogButtonBox::button(*(_QWORD *)(*((_QWORD *)this + 6) + 120LL), 0x1000000);
  sub_17F3A0((QT::QAction *)&v30);
  QT::QAbstractButton::setShortcut(v20, (const QT::QKeySequence *)&v30);
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)&v30);
  v21 = QT::QCoreApplication::self;
  v22 = QT::QDialogButtonBox::button(*(_QWORD *)(*((_QWORD *)this + 6) + 120LL), 0x1000000);
  sub_47C670(v21, v22, "2clicked()", "/user-guide/user-interface/menu-bar/edit/segments");
  QT::QWidget::setWindowFlags(this, *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0xFFFEFFFF);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v23 = (void **)ptr[1];
    v24 = (void **)((char *)ptr[1] + 24 * v27);
    if ( ptr[1] != v24 )
    {
      do
      {
        if ( *v23 && !_InterlockedSub((volatile signed __int32 *)*v23, 1u) )
          free(*v23);
        v23 += 3;
      }
      while ( v24 != v23 );
    }
    free(ptr[0]);
  }
  return v31 - __readfsqword(0x28u);
}
