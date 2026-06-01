unsigned __int64 __fastcall sub_4279C0(QT::QAbstractItemView **a1)
{
  double v2; // xmm0_8
  QT::QVBoxLayout *v3; // r14
  __int64 v4; // r14
  double v5; // xmm0_8
  double v6; // xmm0_8
  unsigned __int64 *v7; // rax
  void **v8; // r15
  void *v9; // rdi
  void *v10; // rdi
  QT::QAbstractItemView *v11; // r14
  QT::QAbstractItemView *v12; // r14
  __m128i *v13; // rax
  __m128i si128; // xmm0
  QT::QAbstractItemView *v15; // r14
  __m128i *v16; // rax
  QT::QAbstractItemView *v17; // rdi
  __int64 v18; // r14
  __m128i *v19; // rax
  __m128i v20; // xmm0
  QT::QTreeView *v22; // [rsp+8h] [rbp-158h]
  _QWORD v23[2]; // [rsp+10h] [rbp-150h] BYREF
  __m128i v24; // [rsp+20h] [rbp-140h] BYREF
  __int64 v25; // [rsp+30h] [rbp-130h]
  void *ptr[2]; // [rsp+40h] [rbp-120h] BYREF
  __int64 v27; // [rsp+50h] [rbp-110h]
  __int64 v28; // [rsp+60h] [rbp-100h] BYREF
  __int128 v29; // [rsp+68h] [rbp-F8h]
  unsigned __int64 v30; // [rsp+78h] [rbp-E8h]
  char v31; // [rsp+80h] [rbp-E0h] BYREF
  char v32; // [rsp+F0h] [rbp-70h] BYREF
  unsigned __int64 v33; // [rsp+128h] [rbp-38h] BYREF

  v33 = __readfsqword(0x28u);
  QT::QDialog::QDialog(a1, 0, 0);
  *a1 = (QT::QAbstractItemView *)&vault_files_picker_dialog_t___vtable;
  a1[2] = (QT::QAbstractItemView *)vault_files_picker_dialog_t___vtable_at__16;
  v2 = QT::QString::fromUtf8(ptr, 5, "Vault");
  QT::QWidget::setWindowTitle((QT::QWidget *)a1, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v3, (QT::QWidget *)a1);
  a1[5] = v3;
  v4 = operator new(0x28u);
  v5 = QT::QString::fromUtf8(ptr, 33, "Select a file to open from vault:", v2);
  QT::QLabel::QLabel(v4, ptr, 0, 0, v5);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QBoxLayout::addWidget(a1[5], v4, 0, 0);
  v22 = (QT::QTreeView *)operator new(0x9E8u);
  v6 = 0.0;
  v30 = 0xFFFFFFFF00000000LL;
  v7 = (unsigned __int64 *)&v31;
  v28 = 0;
  v29 = 0;
  do
  {
    *v7 = 0;
    v7 += 7;
    *((_OWORD *)v7 - 3) = 0;
    *(v7 - 4) = 0;
    *(_OWORD *)(v7 - 3) = 0;
    *((_DWORD *)v7 - 2) = -1;
  }
  while ( &v33 != v7 );
  sub_426F50(v22, (int)"Vault", (__int64)&v28, 73, 0);
  *(_QWORD *)v22 = &vault_files_dirtree_widget_picker_t___vtable;
  *((_QWORD *)v22 + 2) = vault_files_dirtree_widget_picker_t___vtable_at__16;
  *((_QWORD *)v22 + 30) = vault_files_dirtree_widget_picker_t___vtable_at__240;
  *((_QWORD *)v22 + 38) = vault_files_dirtree_widget_picker_t___vtable_at__304;
  *((_QWORD *)v22 + 311) = vault_files_dirtree_widget_picker_t___vtable_at__2488;
  QT::QAbstractItemView::setSelectionMode(v22, 1);
  a1[6] = v22;
  v8 = (void **)&v32;
  do
  {
    v9 = v8[3];
    if ( v9 )
    {
      v8[4] = nullptr;
      v6 = qfree(v9, (_BYTE *)&dword_0 + 1);
    }
    v10 = *v8;
    if ( *v8 )
    {
      v8[1] = nullptr;
      v6 = qfree(v10, (_BYTE *)&dword_0 + 1);
    }
    v8 -= 7;
  }
  while ( v8 != &ptr[1] );
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    v6 = qfree(v28, (_BYTE *)&dword_0 + 1);
  }
  QT::QBoxLayout::addWidget(a1[5], a1[6], 0, 0);
  v11 = (QT::QAbstractItemView *)operator new(0x28u);
  QT::QDialogButtonBox::QDialogButtonBox(v11, 4195328, 0, v6);
  a1[7] = v11;
  QT::QBoxLayout::addWidget(a1[5], v11, 0, 0);
  ptr[0] = &qword_1B8 + 1;
  ptr[1] = nullptr;
  v12 = a1[7];
  v23[0] = &QT::QDialogButtonBox::accepted;
  v23[1] = 0;
  v13 = (__m128i *)operator new(0x20u);
  v13->m128i_i32[0] = 1;
  si128 = _mm_load_si128((const __m128i *)ptr);
  v13->m128i_i64[1] = (__int64)sub_4267D0;
  v13[1] = si128;
  QT::QObject::connectImpl(&v24, v12, v23, a1, ptr, v13, 0, 0, &QT::QDialogButtonBox::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v24);
  ptr[0] = &qword_1C0 + 1;
  ptr[1] = nullptr;
  v15 = a1[7];
  v24.m128i_i64[0] = (__int64)&QT::QDialogButtonBox::rejected;
  v24.m128i_i64[1] = 0;
  v16 = (__m128i *)operator new(0x20u);
  v16->m128i_i64[1] = (__int64)sub_4267D0;
  v16->m128i_i32[0] = 1;
  v16[1] = _mm_load_si128((const __m128i *)ptr);
  QT::QObject::connectImpl(v23, v15, &v24, a1, ptr, v16, 0, 0, &QT::QDialogButtonBox::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v23);
  v17 = a1[6];
  v24.m128i_i64[1] = 0;
  v24.m128i_i64[0] = (__int64)sub_426270;
  v18 = QT::QAbstractItemView::selectionModel(v17);
  ptr[1] = nullptr;
  ptr[0] = &QT::QItemSelectionModel::currentChanged;
  v19 = (__m128i *)operator new(0x20u);
  v19->m128i_i32[0] = 1;
  v20 = _mm_load_si128(&v24);
  v19->m128i_i64[1] = (__int64)sub_4262F0;
  v19[1] = v20;
  QT::QObject::connectImpl(v23, v18, ptr, a1, &v24, v19, 0, 0, &QT::QItemSelectionModel::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v23);
  ptr[1] = nullptr;
  v27 = 0;
  ptr[0] = (void *)-1LL;
  v24 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v25 = 0;
  sub_426270((__int64)a1, (__int64)&v24);
  return v33 - __readfsqword(0x28u);
}
