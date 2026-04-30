unsigned __int64 __fastcall sub_402AE0(QT::QStandardItem *this)
{
  QT::QStandardItem *v1; // rax
  __int64 v2; // rbx
  char v3; // r12
  __int64 v4; // r13
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  double v10; // xmm0_8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // xmm0_8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  double v22; // xmm0_8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rdx
  char v31; // al
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  double v37; // xmm0_8
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  double v43; // xmm0_8
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // r9
  double v49; // xmm0_8
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // r9
  void *v55; // r12
  void *v56; // r15
  const char *v57; // rsi
  int v59[2]; // [rsp+18h] [rbp-170h]
  int v60[2]; // [rsp+20h] [rbp-168h]
  int v61[2]; // [rsp+20h] [rbp-168h]
  char v62; // [rsp+2Fh] [rbp-159h]
  __int64 v63; // [rsp+38h] [rbp-150h] BYREF
  QT::QStandardItem *v64; // [rsp+40h] [rbp-148h] BYREF
  QT::QStandardItem *v65; // [rsp+48h] [rbp-140h] BYREF
  QT::QStandardItem *v66; // [rsp+50h] [rbp-138h] BYREF
  QT::QStandardItem *v67; // [rsp+58h] [rbp-130h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-128h] BYREF
  int *v69; // [rsp+70h] [rbp-118h]
  int v70[2]; // [rsp+80h] [rbp-108h] BYREF
  __int64 v71; // [rsp+88h] [rbp-100h]
  void *v72[2]; // [rsp+A0h] [rbp-E8h] BYREF
  int *v73; // [rsp+B0h] [rbp-D8h]
  void *v74[4]; // [rsp+C0h] [rbp-C8h] BYREF
  void *v75[4]; // [rsp+E0h] [rbp-A8h] BYREF
  void *v76[4]; // [rsp+100h] [rbp-88h] BYREF
  _BYTE v77[40]; // [rsp+120h] [rbp-68h] BYREF
  unsigned __int64 v78; // [rsp+148h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  v1 = (QT::QStandardItem *)operator new(0x20u);
  *(_OWORD *)v1 = 0;
  v2 = (__int64)v1;
  v3 = *((_BYTE *)this + 28);
  v4 = *((_QWORD *)this + 2);
  QT::QStandardItem::QStandardItem(v1);
  *(_QWORD *)(v2 + 16) = v4;
  *(_QWORD *)v2 = &xref_unified_tree_item_t___vtable;
  *(_DWORD *)(v2 + 24) = 1;
  *(_BYTE *)(v2 + 28) = v3;
  QT::QStandardItem::setColumnCount((QT::QStandardItem *)v2, 4);
  QT::QVariant::QVariant(v77, QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType, v2 + 16);
  QT::QStandardItem::setData((QT::QStandardItem *)v2, (const QT::QVariant *)v77, 258);
  QT::QVariant::~QVariant((QT::QVariant *)v77);
  QT::QVariant::QVariant((QT::QVariant *)v77, *(_DWORD *)(v2 + 24));
  QT::QStandardItem::setData((QT::QStandardItem *)v2, (const QT::QVariant *)v77, 257);
  QT::QVariant::~QVariant((QT::QVariant *)v77);
  v63 = v2;
  v69 = nullptr;
  *(_OWORD *)ptr = 0;
  sub_3D32B0((int **)ptr, nullptr, &v63, v5, v6, v7);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_3D2ED0((__int64)ptr, 0, 0, 0, v8, v9);
  v10 = QT::QString::fromUtf8(v74, 0, (const char *)&unk_5C2F25);
  v64 = sub_3EE1B0((QT::QString *)v74, -1);
  sub_3D32B0((int **)ptr, v69, (__int64 *)&v64, v11, v12, v13);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_3D2ED0((__int64)ptr, 0, 0, 0, v14, v15);
  v16 = QT::QString::fromUtf8(v75, 0, (const char *)&unk_5C2F25, v10);
  v65 = sub_3EE1B0((QT::QString *)v75, -1);
  sub_3D32B0((int **)ptr, v69, (__int64 *)&v65, v17, v18, v19);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_3D2ED0((__int64)ptr, 0, 0, 0, v20, v21);
  v22 = QT::QString::fromUtf8(v76, 0, (const char *)&unk_5C2F25, v16);
  v72[0] = sub_3EE250((QT::QString *)v76, -1);
  sub_3D32B0((int **)ptr, v69, (__int64 *)v72, v23, v24, v25);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_3D2ED0((__int64)ptr, 0, 0, 0, v26, v27);
  if ( v76[0] && !_InterlockedSub((volatile signed __int32 *)v76[0], 1u) )
    free(v76[0]);
  if ( v75[0] && !_InterlockedSub((volatile signed __int32 *)v75[0], 1u) )
    free(v75[0]);
  if ( v74[0] && !_InterlockedSub((volatile signed __int32 *)v74[0], 1u) )
    free(v74[0]);
  sub_3F0ED0((__int64)v70, *((_QWORD *)this + 2), *((_BYTE *)this + 28));
  *(_QWORD *)v59 = *(_QWORD *)v70;
  *(_QWORD *)v60 = v71;
  v28 = QT::QStandardItem::rowCount(this);
  QT::QStandardItem::insertRow(this, v28, ptr, v22);
  if ( *(_QWORD *)v60 )
    sub_3FF750((QT::QStandardItem *)v2);
  v29 = operator new(0x20u);
  v30 = *((_QWORD *)this + 2);
  v31 = *((_BYTE *)this + 28);
  *(_OWORD *)v29 = 0;
  v62 = v31;
  *(_QWORD *)v61 = v30;
  QT::QStandardItem::QStandardItem((QT::QStandardItem *)v29);
  *(_QWORD *)v29 = &xref_unified_tree_item_t___vtable;
  *(_QWORD *)(v29 + 16) = *(_QWORD *)v61;
  *(_DWORD *)(v29 + 24) = 2;
  *(_BYTE *)(v29 + 28) = v62;
  QT::QStandardItem::setColumnCount((QT::QStandardItem *)v29, 4);
  QT::QVariant::QVariant(v77, QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType, v29 + 16);
  QT::QStandardItem::setData((QT::QStandardItem *)v29, (const QT::QVariant *)v77, 258);
  QT::QVariant::~QVariant((QT::QVariant *)v77);
  QT::QVariant::QVariant((QT::QVariant *)v77, *(_DWORD *)(v29 + 24));
  QT::QStandardItem::setData((QT::QStandardItem *)v29, (const QT::QVariant *)v77, 257);
  QT::QVariant::~QVariant((QT::QVariant *)v77);
  v74[0] = (void *)v29;
  v73 = nullptr;
  *(_OWORD *)v72 = 0;
  sub_3D32B0((int **)v72, nullptr, (__int64 *)v74, v32, v33, v34);
  if ( !v72[0] || *(int *)v72[0] > 1 )
    sub_3D2ED0((__int64)v72, 0, 0, 0, v35, v36);
  v37 = QT::QString::fromUtf8(v74, 0, (const char *)&unk_5C2F25);
  v75[0] = sub_3EE1B0((QT::QString *)v74, -1);
  sub_3D32B0((int **)v72, v73, (__int64 *)v75, v38, v39, v40);
  if ( !v72[0] || *(int *)v72[0] > 1 )
    sub_3D2ED0((__int64)v72, 0, 0, 0, v41, v42);
  v43 = QT::QString::fromUtf8(v75, 0, (const char *)&unk_5C2F25, v37);
  v66 = sub_3EE1B0((QT::QString *)v75, -1);
  sub_3D32B0((int **)v72, v73, (__int64 *)&v66, v44, v45, v46);
  if ( !v72[0] || *(int *)v72[0] > 1 )
    sub_3D2ED0((__int64)v72, 0, 0, 0, v47, v48);
  v49 = QT::QString::fromUtf8(v76, 0, (const char *)&unk_5C2F25, v43);
  v67 = sub_3EE250((QT::QString *)v76, -1);
  sub_3D32B0((int **)v72, v73, (__int64 *)&v67, v50, v51, v52);
  if ( !v72[0] || *(int *)v72[0] > 1 )
    sub_3D2ED0((__int64)v72, 0, 0, 0, v53, v54);
  if ( v76[0] && !_InterlockedSub((volatile signed __int32 *)v76[0], 1u) )
    free(v76[0]);
  if ( v75[0] && !_InterlockedSub((volatile signed __int32 *)v75[0], 1u) )
    free(v75[0]);
  if ( v74[0] && !_InterlockedSub((volatile signed __int32 *)v74[0], 1u) )
    free(v74[0]);
  sub_3F1010((__int64)v76, *((_QWORD *)this + 2), *((_BYTE *)this + 28));
  v55 = v76[0];
  v56 = v76[1];
  v57 = (const char *)(unsigned int)QT::QStandardItem::rowCount(this);
  QT::QStandardItem::insertRow(this, v57, v72, v49);
  if ( v56 )
    sub_3FF750((QT::QStandardItem *)v29);
  if ( v55 )
    v49 = qfree(v55, v57);
  if ( v72[0] && !_InterlockedSub((volatile signed __int32 *)v72[0], 1u) )
    free(v72[0]);
  if ( *(_QWORD *)v59 )
    qfree(*(_QWORD *)v59, v57, v49);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v78 - __readfsqword(0x28u);
}
