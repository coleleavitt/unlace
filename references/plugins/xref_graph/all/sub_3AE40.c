unsigned __int64 __fastcall sub_3AE40(QT::QListWidget **a1, QT::QListWidget *a2)
{
  QT::QListWidget *v2; // r15
  __int64 v3; // r14
  __int64 v4; // r13
  QT::QVBoxLayout *v5; // r15
  QT::QHBoxLayout *v6; // r12
  __int64 v7; // rax
  QT::QListWidget *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i *v14; // rax
  __m128i v15; // xmm0
  void *v17; // [rsp+8h] [rbp-D8h]
  void *v18; // [rsp+10h] [rbp-D0h]
  void *v19; // [rsp+18h] [rbp-C8h]
  void *v20; // [rsp+20h] [rbp-C0h]
  _QWORD v21[2]; // [rsp+30h] [rbp-B0h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-A0h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-90h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-80h] BYREF
  _QWORD v25[2]; // [rsp+70h] [rbp-70h] BYREF
  __m128i v26; // [rsp+80h] [rbp-60h] BYREF
  void *ptr[3]; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+A8h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  QT::QDialog::QDialog(a1, 0, 0);
  a1[5] = nullptr;
  *a1 = (QT::QListWidget *)&off_4C570;
  a1[2] = (QT::QListWidget *)graph_chooser_t___vtable_at__16;
  a1[6] = a2;
  v2 = (QT::QListWidget *)operator new(0x28u);
  QT::QListWidget::QListWidget(v2, (QT::QWidget *)a1);
  a1[5] = v2;
  sub_3AD00((__int64)a1);
  v3 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 5, "&Open");
  QT::QPushButton::QPushButton(v3, ptr, a1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 4, "&New");
  QT::QPushButton::QPushButton(v4, ptr, a1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v20 = (void *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 7, "&Rename");
  QT::QPushButton::QPushButton(v20, ptr, a1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v19 = (void *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 10, "Dup&licate");
  QT::QPushButton::QPushButton(v19, ptr, a1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v18 = (void *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 7, "&Delete");
  QT::QPushButton::QPushButton(v18, ptr, a1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v17 = (void *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 7, "&Cancel");
  QT::QPushButton::QPushButton(v17, ptr, a1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v5, (QT::QWidget *)a1);
  v6 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v6);
  QT::QBoxLayout::addWidget(v5, a1[5], 0, 0);
  QT::QBoxLayout::addStretch(v6, 0);
  QT::QBoxLayout::addWidget(v6, v3, 0, 0);
  QT::QBoxLayout::addWidget(v6, v4, 0, 0);
  QT::QBoxLayout::addWidget(v6, v20, 0, 0);
  QT::QBoxLayout::addWidget(v6, v19, 0, 0);
  QT::QBoxLayout::addWidget(v6, v18, 0, 0);
  QT::QBoxLayout::addWidget(v6, v17, 0, 0);
  QT::QBoxLayout::addStretch(v6, 0);
  QT::QBoxLayout::addLayout(v5, v6, 0);
  v21[1] = 0;
  v21[0] = &QT::QAbstractButton::clicked;
  v7 = operator new(0x18u);
  *(_DWORD *)v7 = 1;
  *(_QWORD *)(v7 + 8) = &sub_3B760;
  *(_QWORD *)(v7 + 16) = a1;
  QT::QObject::connectImpl(ptr, v3, v21, a1, 0, v7, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v22[1] = 0;
  v8 = a1[5];
  v22[0] = &QT::QListWidget::itemDoubleClicked;
  v9 = operator new(0x18u);
  *(_DWORD *)v9 = 1;
  *(_QWORD *)(v9 + 16) = a1;
  *(_QWORD *)(v9 + 8) = &sub_3B760;
  QT::QObject::connectImpl(ptr, v8, v22, a1, 0, v9, 0, 0, &QT::QListWidget::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v23[0] = &QT::QAbstractButton::clicked;
  v23[1] = 0;
  v10 = operator new(0x18u);
  *(_DWORD *)v10 = 1;
  *(_QWORD *)(v10 + 8) = &sub_3BB20;
  *(_QWORD *)(v10 + 16) = a1;
  QT::QObject::connectImpl(ptr, v4, v23, a1, 0, v10, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v24[0] = &QT::QAbstractButton::clicked;
  v24[1] = 0;
  v11 = operator new(0x18u);
  *(_DWORD *)v11 = 1;
  *(_QWORD *)(v11 + 16) = a1;
  *(_QWORD *)(v11 + 8) = &sub_3B870;
  QT::QObject::connectImpl(ptr, v20, v24, a1, 0, v11, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v25[0] = &QT::QAbstractButton::clicked;
  v25[1] = 0;
  v12 = operator new(0x18u);
  *(_DWORD *)v12 = 1;
  *(_QWORD *)(v12 + 16) = a1;
  *(_QWORD *)(v12 + 8) = &sub_3B940;
  QT::QObject::connectImpl(ptr, v19, v25, a1, 0, v12, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v26 = (__m128i)(unsigned __int64)&QT::QAbstractButton::clicked;
  v13 = operator new(0x18u);
  *(_DWORD *)v13 = 1;
  *(_QWORD *)(v13 + 16) = a1;
  *(_QWORD *)(v13 + 8) = &sub_3BA50;
  QT::QObject::connectImpl(ptr, v18, &v26, a1, 0, v13, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  ptr[0] = &QT::QAbstractButton::clicked;
  v26 = (__m128i)0x1C1uLL;
  ptr[1] = nullptr;
  v14 = (__m128i *)operator new(0x20u);
  v15 = _mm_load_si128(&v26);
  v14->m128i_i32[0] = 1;
  v14->m128i_i64[1] = (__int64)sub_3AC80;
  v14[1] = v15;
  QT::QObject::connectImpl(v25, v17, ptr, a1, &v26, v14, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v25);
  QT::QString::fromUtf8(ptr, 11, "Xref Graphs");
  QT::QWidget::setWindowTitle(a1, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QListWidget::setCurrentRow(a1[5], 0);
  return v28 - __readfsqword(0x28u);
}
