unsigned __int64 __fastcall sub_3D3FE0(QT::QObject *a1, QT::QObject *a2)
{
  QT::QPlainTextEdit *v3; // rdi
  volatile signed __int32 *v4; // rax
  QT::QAbstractItemModel *v5; // rax
  QT::QTreeView *v6; // r15
  QT::QWidget *v7; // rax
  QT::QHeaderView *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 (*v11)(); // rax
  __m128i *v12; // rax
  __m128i si128; // xmm0
  __m128i *v14; // rax
  __m128i v15; // xmm0
  _BYTE v17[8]; // [rsp+18h] [rbp-78h] BYREF
  void *v18[2]; // [rsp+20h] [rbp-70h] BYREF
  __int64 v19; // [rsp+30h] [rbp-60h]
  void *ptr[2]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  QT::QCompleter::QCompleter(a1, a2);
  *((_QWORD *)a1 + 2) = a2;
  *(_QWORD *)a1 = &type_completer_t___vtable;
  *((_QWORD *)a1 + 3) = sub_56E4B0();
  *((_QWORD *)a1 + 4) = sub_58F788();
  v3 = *((QT::QPlainTextEdit **)a1 + 2);
  *((_DWORD *)a1 + 10) = 0;
  *((_BYTE *)a1 + 44) = 1;
  QT::QPlainTextEdit::document(v3);
  QT::QTextDocument::toPlainText((QT::QTextDocument *)ptr);
  QT::QString::trimmed_helper((QT::QString *)v18, (QT::QString *)ptr);
  v4 = (volatile signed __int32 *)v18[0];
  *((_BYTE *)a1 + 44) = v19 == 0;
  if ( v4 && !_InterlockedSub(v4, 1u) )
    free(v18[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = sub_3D3590(a1, *((_BYTE *)a1 + 44));
  QT::QCompleter::setModel(a1, v5);
  v6 = (QT::QTreeView *)operator new(0x28u);
  QT::QTreeView::QTreeView(v6, *((QT::QWidget **)a1 + 2));
  *(_QWORD *)v6 = &type_item_view_t___vtable;
  *((_QWORD *)v6 + 2) = type_item_view_t___vtable_at__16;
  QT::QCompleter::setPopup(a1, v6);
  QT::QTreeView::setRootIsDecorated(v6, 0);
  v7 = (QT::QWidget *)QT::QTreeView::header(v6);
  QT::QWidget::hide(v7);
  v8 = (QT::QHeaderView *)QT::QTreeView::header(v6);
  QT::QHeaderView::setStretchLastSection(v8, 0);
  v9 = QT::QTreeView::header(v6);
  QT::QHeaderView::setSectionResizeMode(v9, 0, 3);
  QT::QTreeView::setColumnHidden(v6, 1, 1);
  QT::QCompleter::setCompletionMode(a1, 0);
  v10 = 0;
  v11 = *(__int64 (**)())(*QT::QCoreApplication::self + 312LL);
  if ( v11 != sub_3CFBD0 )
    v10 = ((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD))v11)(QT::QCoreApplication::self, 0);
  QT::QCompleter::setCaseSensitivity(a1, v10);
  sub_57F960(*((_QWORD *)a1 + 3), *((_QWORD *)a1 + 4));
  QT::QCompleter::setWidget(a1, *((QT::QWidget **)a1 + 2));
  ptr[1] = nullptr;
  ptr[0] = sub_3D0320;
  v18[1] = nullptr;
  v18[0] = &QT::QCompleter::activated;
  v12 = (__m128i *)operator new(0x20u);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v12->m128i_i32[0] = 1;
  v12->m128i_i64[1] = (__int64)sub_3CFC40;
  v12[1] = si128;
  QT::QObject::connectImpl(v17, a1, v18, a1, ptr, v12, 0, 0, &QT::QCompleter::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v17);
  v18[1] = nullptr;
  v18[0] = sub_3D1820;
  ptr[1] = nullptr;
  ptr[0] = &QT::QCompleter::highlighted;
  v14 = (__m128i *)operator new(0x20u);
  v15 = _mm_load_si128((const __m128i *)v18);
  v14->m128i_i64[1] = (__int64)sub_3CFC40;
  v14->m128i_i32[0] = 1;
  v14[1] = v15;
  QT::QObject::connectImpl(v17, a1, ptr, a1, v18, v14, 0, 0, &QT::QCompleter::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v17);
  return v21 - __readfsqword(0x28u);
}
