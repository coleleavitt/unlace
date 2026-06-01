unsigned __int64 __fastcall sub_408BC0(QT::QTreeView **a1, __int64 a2)
{
  QT::QHeaderView *v2; // r14
  QT::QAction *v3; // rbx
  char isSectionHidden; // al
  __int64 v5; // rax
  __int64 v6; // rbx
  __m128i *v7; // rax
  __m128i v8; // xmm0
  int v10; // [rsp+1Ch] [rbp-D4h]
  _BYTE v11[8]; // [rsp+28h] [rbp-C8h] BYREF
  __m128i v12; // [rsp+30h] [rbp-C0h] BYREF
  void *ptr[4]; // [rsp+40h] [rbp-B0h] BYREF
  _BYTE v14[48]; // [rsp+60h] [rbp-90h] BYREF
  _BYTE v15[40]; // [rsp+90h] [rbp-60h] BYREF
  unsigned __int64 v16; // [rsp+B8h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  QT::QMenu::QMenu((QT::QMenu *)v14, (QT::QWidget *)a1);
  v10 = 1;
  v2 = (QT::QHeaderView *)QT::QTreeView::header(a1[13]);
  while ( v10 < (int)QT::QHeaderView::count(v2) )
  {
    (*(void (__fastcall **)(_BYTE *, QT::QTreeView *, _QWORD, __int64, _QWORD))(*(_QWORD *)a1[15] + 160LL))(
      v15,
      a1[15],
      (unsigned int)v10,
      1,
      0);
    QT::QVariant::toString((QT::QVariant *)ptr);
    QT::QVariant::~QVariant((QT::QVariant *)v15);
    v3 = (QT::QAction *)QT::QWidget::addAction((QT::QWidget *)v14, (const QT::QString *)ptr);
    QT::QAction::setCheckable(v3, 1);
    isSectionHidden = QT::QHeaderView::isSectionHidden(v2, v10);
    QT::QAction::setChecked(v3, isSectionHidden != 1);
    v12.m128i_i64[1] = 0;
    v12.m128i_i64[0] = (__int64)&QT::QAction::triggered;
    v5 = operator new(0x20u);
    *(_DWORD *)v5 = 1;
    *(_DWORD *)(v5 + 24) = v10;
    *(_QWORD *)(v5 + 8) = sub_3F3B00;
    *(_QWORD *)(v5 + 16) = a1;
    QT::QObject::connectImpl(v11, v3, &v12, v3, 0, v5, 1, 0, &QT::QAction::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v11);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    ++v10;
  }
  QT::QMenu::addSeparator((QT::QMenu *)v14);
  QT::QString::fromUtf8(ptr, 19, "Reset Column Widths");
  v6 = QT::QWidget::addAction((QT::QWidget *)v14, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v12.m128i_i64[1] = 0;
  v12.m128i_i64[0] = (__int64)sub_3EE3D0;
  ptr[1] = nullptr;
  ptr[0] = &QT::QAction::triggered;
  v7 = (__m128i *)operator new(0x20u);
  v7->m128i_i32[0] = 1;
  v8 = _mm_load_si128(&v12);
  v7->m128i_i64[1] = (__int64)sub_3EEDB0;
  v7[1] = v8;
  QT::QObject::connectImpl(v11, v6, ptr, a1, &v12, v7, 0, 0, &QT::QAction::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v11);
  QT::QMenu::exec(v14, a2 + 48, 0);
  QT::QMenu::~QMenu((QT::QMenu *)v14);
  return v16 - __readfsqword(0x28u);
}
