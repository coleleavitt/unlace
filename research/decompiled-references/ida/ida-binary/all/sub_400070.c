unsigned __int64 __fastcall sub_400070(QT::QStandardItem *a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  QT::QStandardItem *v6; // rax
  QT::QStandardItem *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  double v13; // xmm0_8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  double v19; // xmm0_8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  double v25; // xmm0_8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  void (__fastcall *v31)(void **, QT::QStandardItem *, _QWORD, _QWORD, void **, double); // rax
  void (__fastcall *v32)(void **, QT::QStandardItem *, _QWORD, _QWORD, void **); // rax
  QT::QStandardItem *v34; // [rsp+8h] [rbp-110h]
  QT::QStandardItem *v35; // [rsp+10h] [rbp-108h]
  QT::QStandardItem *v36; // [rsp+18h] [rbp-100h]
  QT::QStandardItem *v37; // [rsp+20h] [rbp-F8h] BYREF
  QT::QStandardItem *v38; // [rsp+28h] [rbp-F0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-E8h] BYREF
  int *v40; // [rsp+40h] [rbp-D8h]
  void *v41[4]; // [rsp+50h] [rbp-C8h] BYREF
  void *v42[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+80h] [rbp-98h]
  void *v44[4]; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v45[40]; // [rsp+B0h] [rbp-68h] BYREF
  unsigned __int64 v46; // [rsp+D8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  QT::QStandardItemModel::clear(a1);
  v4 = *((_QWORD *)a1 + 4);
  while ( v4 )
  {
    v5 = v4;
    sub_3EF4B0(*(_QWORD **)(v4 + 24));
    v4 = *(_QWORD *)(v4 + 16);
    QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)(v5 + 40));
    operator delete((void *)v5, 0x30u);
  }
  *((_QWORD *)a1 + 8) = a2;
  *((_QWORD *)a1 + 4) = 0;
  *((_QWORD *)a1 + 5) = (char *)a1 + 24;
  *((_QWORD *)a1 + 6) = (char *)a1 + 24;
  *((_QWORD *)a1 + 7) = 0;
  v6 = (QT::QStandardItem *)operator new(0x20u);
  *(_OWORD *)v6 = 0;
  v7 = v6;
  QT::QStandardItem::QStandardItem(v6);
  *((_QWORD *)v7 + 2) = a2;
  *(_QWORD *)v7 = &xref_unified_tree_item_t___vtable;
  *((_DWORD *)v7 + 6) = 0;
  *((_BYTE *)v7 + 28) = a3;
  QT::QStandardItem::setColumnCount(v7, 4);
  QT::QVariant::QVariant(v45, QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType, (char *)v7 + 16);
  QT::QStandardItem::setData(v7, (const QT::QVariant *)v45, 258);
  QT::QVariant::~QVariant((QT::QVariant *)v45);
  QT::QVariant::QVariant((QT::QVariant *)v45, *((_DWORD *)v7 + 6));
  QT::QStandardItem::setData(v7, (const QT::QVariant *)v45, 257);
  QT::QVariant::~QVariant((QT::QVariant *)v45);
  v41[0] = v7;
  *(_OWORD *)ptr = 0;
  *(_QWORD *)v7 = &xref_function_root_tree_item_t___vtable;
  v40 = nullptr;
  sub_3D32B0((int **)ptr, nullptr, (__int64 *)v41, v8, v9, v10);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_3D2ED0((__int64)ptr, 0, 0, 0, v11, v12);
  v36 = (QT::QStandardItem *)operator new(0x10u);
  v13 = QT::QString::fromUtf8(v41, 0, (const char *)&unk_5C2F25);
  QT::QStandardItem::QStandardItem(v36, (const QT::QString *)v41);
  v37 = v36;
  sub_3D32B0((int **)ptr, v40, (__int64 *)&v37, v14, v15, v16);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_3D2ED0((__int64)ptr, 0, 0, 0, v17, v18);
  v34 = (QT::QStandardItem *)operator new(0x10u);
  v19 = QT::QString::fromUtf8(v42, 0, (const char *)&unk_5C2F25, v13);
  QT::QStandardItem::QStandardItem(v34, (const QT::QString *)v42);
  v44[0] = v34;
  sub_3D32B0((int **)ptr, v40, (__int64 *)v44, v20, v21, v22);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_3D2ED0((__int64)ptr, 0, 0, 0, v23, v24);
  v35 = (QT::QStandardItem *)operator new(0x10u);
  v25 = QT::QString::fromUtf8(v44, 0, (const char *)&unk_5C2F25, v19);
  QT::QStandardItem::QStandardItem(v35, (const QT::QString *)v44);
  v38 = v35;
  sub_3D32B0((int **)ptr, v40, (__int64 *)&v38, v26, v27, v28);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_3D2ED0((__int64)ptr, 0, 0, 0, v29, v30);
  if ( v44[0] && !_InterlockedSub((volatile signed __int32 *)v44[0], 1u) )
    free(v44[0]);
  if ( v42[0] && !_InterlockedSub((volatile signed __int32 *)v42[0], 1u) )
    free(v42[0]);
  if ( v41[0] && !_InterlockedSub((volatile signed __int32 *)v41[0], 1u) )
    free(v41[0]);
  QT::QStandardItemModel::appendRow(a1, ptr);
  v31 = *(void (__fastcall **)(void **, QT::QStandardItem *, _QWORD, _QWORD, void **, double))(*(_QWORD *)a1 + 96LL);
  v42[0] = (void *)-1LL;
  v42[1] = nullptr;
  v43 = 0;
  v31(v44, a1, 0, 0, v42, v25);
  sub_3F3BA0(a1, a2);
  v32 = *(void (__fastcall **)(void **, QT::QStandardItem *, _QWORD, _QWORD, void **))(*(_QWORD *)a1 + 96LL);
  v44[0] = (void *)-1LL;
  v44[1] = nullptr;
  v44[2] = nullptr;
  v32(v42, a1, 0, 0, v44);
  if ( (HIDWORD(v42[0]) | LODWORD(v42[0])) >= 0 && v43 )
    sub_3F62A0(a1, (__int64)v42);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v46 - __readfsqword(0x28u);
}
