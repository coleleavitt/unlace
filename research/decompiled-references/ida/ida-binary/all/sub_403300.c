unsigned __int64 __fastcall sub_403300(__int64 a1, const char ***a2)
{
  const char **v2; // rbx
  const char **v3; // rax
  const char *v4; // rsi
  char v5; // al
  const char *v6; // rbp
  int *v7; // rdx
  int *v8; // r8
  int *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  int *v12; // rsi
  __int64 v13; // r15
  char v14; // r12
  int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  double v21; // xmm0_8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  double v27; // xmm0_8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r9
  double v33; // xmm0_8
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // eax
  int *v40; // rdx
  int *v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rcx
  void (__fastcall *v44)(__int64, _BYTE *, __int64); // rbp
  void (__fastcall *v45)(__int64, _BYTE *, __int64); // rbp
  __int64 v46; // rbp
  char v47; // r12
  int v48; // r14d
  char *v49; // rax
  _QWORD *func; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // r9
  double v56; // xmm0_8
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r8
  __int64 v61; // r9
  double v62; // xmm0_8
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned int v73; // eax
  void (__fastcall *v74)(__int64, _BYTE *, __int64); // r15
  int *v75; // rdi
  QT::QString *v77; // [rsp+0h] [rbp-378h]
  const char **v78; // [rsp+10h] [rbp-368h]
  __int64 v79; // [rsp+28h] [rbp-350h]
  unsigned __int64 tinfo_tid; // [rsp+40h] [rbp-338h] BYREF
  __int64 v82; // [rsp+48h] [rbp-330h] BYREF
  QT::QStandardItem *v83; // [rsp+50h] [rbp-328h] BYREF
  QT::QStandardItem *v84; // [rsp+58h] [rbp-320h] BYREF
  QT::QStandardItem *v85; // [rsp+60h] [rbp-318h] BYREF
  QT::QStandardItem *v86; // [rsp+68h] [rbp-310h] BYREF
  QT::QStandardItem *v87; // [rsp+70h] [rbp-308h] BYREF
  QT::QStandardItem *v88; // [rsp+78h] [rbp-300h] BYREF
  void *v89[2]; // [rsp+80h] [rbp-2F8h] BYREF
  int *v90; // [rsp+90h] [rbp-2E8h]
  void *v91[4]; // [rsp+A0h] [rbp-2D8h] BYREF
  void *v92[4]; // [rsp+C0h] [rbp-2B8h] BYREF
  void *ptr[4]; // [rsp+E0h] [rbp-298h] BYREF
  __int64 v94; // [rsp+100h] [rbp-278h] BYREF
  int v95; // [rsp+108h] [rbp-270h] BYREF
  int *v96; // [rsp+110h] [rbp-268h]
  int *v97; // [rsp+118h] [rbp-260h]
  int *v98; // [rsp+120h] [rbp-258h]
  __int64 v99; // [rsp+128h] [rbp-250h]
  _BYTE v100[240]; // [rsp+130h] [rbp-248h] BYREF
  char v101[240]; // [rsp+220h] [rbp-158h] BYREF
  _BYTE v102[40]; // [rsp+310h] [rbp-68h] BYREF
  unsigned __int64 v103; // [rsp+338h] [rbp-40h]

  v2 = *a2;
  v103 = __readfsqword(0x28u);
  v95 = 0;
  v97 = &v95;
  v98 = &v95;
  v3 = a2[1];
  v96 = nullptr;
  v99 = 0;
  v78 = &v2[3 * (_QWORD)v3];
  if ( v78 == v2 )
  {
    v75 = nullptr;
    goto LABEL_78;
  }
  do
  {
    v4 = *v2;
    sub_40E9B0(v100, *v2);
    if ( !(unsigned __int8)sub_40B810(v100)
      || !(unsigned __int8)sub_40B7E0(v100) && !(unsigned __int8)sub_40B7F0(v100) && !(unsigned __int8)sub_40B800(v100) )
    {
      goto LABEL_76;
    }
    v4 = nullptr;
    tinfo_tid = get_tinfo_tid(v101, 0);
    if ( tinfo_tid == -1 )
      goto LABEL_76;
    v5 = sub_40B7E0(v100);
    v6 = (const char *)tinfo_tid;
    if ( v5 )
      v6 = *v2;
    v7 = v96;
    if ( v96 )
    {
      v8 = &v95;
      v9 = v96;
      do
      {
        while ( 1 )
        {
          v10 = *((_QWORD *)v9 + 2);
          v11 = *((_QWORD *)v9 + 3);
          if ( *((_QWORD *)v9 + 4) < tinfo_tid )
            break;
          v8 = v9;
          v9 = *((int **)v9 + 2);
          if ( !v10 )
            goto LABEL_13;
        }
        v9 = *((int **)v9 + 3);
      }
      while ( v11 );
LABEL_13:
      v12 = &v95;
      if ( v8 != &v95 && tinfo_tid >= *((_QWORD *)v8 + 4) )
      {
        do
        {
          if ( *((_QWORD *)v7 + 4) >= tinfo_tid )
          {
            v12 = v7;
            v7 = *((int **)v7 + 2);
          }
          else
          {
            v7 = *((int **)v7 + 3);
          }
        }
        while ( v7 );
        if ( v12 == &v95 || tinfo_tid < *((_QWORD *)v12 + 4) )
        {
          v92[0] = &tinfo_tid;
          v12 = (int *)sub_3EE7B0(&v94, v12, (unsigned __int64 **)v92);
        }
        v13 = *((_QWORD *)v12 + 5);
        goto LABEL_50;
      }
    }
    v13 = operator new(0x20u);
    *(_OWORD *)v13 = 0;
    v14 = *(_BYTE *)(a1 + 28);
    v15 = *(_DWORD *)(a1 + 24);
    QT::QStandardItem::QStandardItem((QT::QStandardItem *)v13);
    *(_QWORD *)(v13 + 16) = v6;
    *(_QWORD *)v13 = &xref_unified_tree_item_t___vtable;
    *(_DWORD *)(v13 + 24) = v15;
    *(_BYTE *)(v13 + 28) = v14;
    QT::QStandardItem::setColumnCount((QT::QStandardItem *)v13, 4);
    QT::QVariant::QVariant(v102, QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType, v13 + 16);
    QT::QStandardItem::setData((QT::QStandardItem *)v13, (const QT::QVariant *)v102, 258);
    QT::QVariant::~QVariant((QT::QVariant *)v102);
    QT::QVariant::QVariant((QT::QVariant *)v102, *(_DWORD *)(v13 + 24));
    QT::QStandardItem::setData((QT::QStandardItem *)v13, (const QT::QVariant *)v102, 257);
    QT::QVariant::~QVariant((QT::QVariant *)v102);
    v82 = v13;
    v90 = nullptr;
    *(_OWORD *)v89 = 0;
    sub_3D32B0((int **)v89, nullptr, &v82, v16, v17, v18);
    if ( !v89[0] || *(int *)v89[0] > 1 )
      sub_3D2ED0((__int64)v89, 0, 0, 0, v19, v20);
    v21 = QT::QString::fromUtf8(v91, 0, (const char *)&unk_5C2F25);
    v83 = sub_3EE1B0((QT::QString *)v91, -1);
    sub_3D32B0((int **)v89, v90, (__int64 *)&v83, v22, v23, v24);
    if ( !v89[0] || *(int *)v89[0] > 1 )
      sub_3D2ED0((__int64)v89, 0, 0, 0, v25, v26);
    v27 = QT::QString::fromUtf8(v92, 0, (const char *)&unk_5C2F25, v21);
    v84 = sub_3EE1B0((QT::QString *)v92, -1);
    sub_3D32B0((int **)v89, v90, (__int64 *)&v84, v28, v29, v30);
    if ( !v89[0] || *(int *)v89[0] > 1 )
      sub_3D2ED0((__int64)v89, 0, 0, 0, v31, v32);
    v33 = QT::QString::fromUtf8(ptr, 0, (const char *)&unk_5C2F25, v27);
    v85 = sub_3EE250((QT::QString *)ptr, -1);
    sub_3D32B0((int **)v89, v90, (__int64 *)&v85, v34, v35, v36);
    if ( !v89[0] || *(int *)v89[0] > 1 )
      sub_3D2ED0((__int64)v89, 0, 0, 0, v37, v38);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v92[0] && !_InterlockedSub((volatile signed __int32 *)v92[0], 1u) )
      free(v92[0]);
    if ( v91[0] && !_InterlockedSub((volatile signed __int32 *)v91[0], 1u) )
      free(v91[0]);
    v39 = QT::QStandardItem::rowCount((QT::QStandardItem *)a1);
    QT::QStandardItem::insertRow(a1, v39, v89, v33);
    v40 = v96;
    if ( v96 )
    {
      v41 = &v95;
      do
      {
        while ( 1 )
        {
          v42 = *((_QWORD *)v40 + 2);
          v43 = *((_QWORD *)v40 + 3);
          if ( *((_QWORD *)v40 + 4) < tinfo_tid )
            break;
          v41 = v40;
          v40 = *((int **)v40 + 2);
          if ( !v42 )
            goto LABEL_41;
        }
        v40 = *((int **)v40 + 3);
      }
      while ( v43 );
LABEL_41:
      if ( v41 != &v95 && tinfo_tid >= *((_QWORD *)v41 + 4) )
        goto LABEL_43;
    }
    else
    {
      v41 = &v95;
    }
    ptr[0] = &tinfo_tid;
    v41 = (int *)sub_3EE7B0(&v94, v41, (unsigned __int64 **)ptr);
LABEL_43:
    *((_QWORD *)v41 + 5) = v13;
    v44 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v13 + 32LL);
    QT::QVariant::QVariant((QT::QVariant *)v102, 1);
    v44(v13, v102, 260);
    QT::QVariant::~QVariant((QT::QVariant *)v102);
    v45 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v13 + 32LL);
    QT::QVariant::QVariant((QT::QVariant *)v102, 1);
    v45(v13, v102, 259);
    QT::QVariant::~QVariant((QT::QVariant *)v102);
    if ( v89[0] && !_InterlockedSub((volatile signed __int32 *)v89[0], 1u) )
      free(v89[0]);
LABEL_50:
    v46 = operator new(0x20u);
    v47 = *(_BYTE *)(a1 + 28);
    v48 = *(_DWORD *)(a1 + 24);
    v49 = (char *)*v2;
    *(_OWORD *)v46 = 0;
    v77 = (QT::QString *)v49;
    QT::QStandardItem::QStandardItem((QT::QStandardItem *)v46);
    *(_DWORD *)(v46 + 24) = v48;
    *(_QWORD *)v46 = &xref_unified_tree_item_t___vtable;
    *(_BYTE *)(v46 + 28) = v47;
    *(_QWORD *)(v46 + 16) = v77;
    QT::QStandardItem::setColumnCount((QT::QStandardItem *)v46, 4);
    QT::QVariant::QVariant(v102, QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType, v46 + 16);
    QT::QStandardItem::setData((QT::QStandardItem *)v46, (const QT::QVariant *)v102, 258);
    QT::QVariant::~QVariant((QT::QVariant *)v102);
    QT::QVariant::QVariant((QT::QVariant *)v102, *(_DWORD *)(v46 + 24));
    QT::QStandardItem::setData((QT::QStandardItem *)v46, (const QT::QVariant *)v102, 257);
    QT::QVariant::~QVariant((QT::QVariant *)v102);
    v90 = nullptr;
    *(_OWORD *)v89 = 0;
    func = (_QWORD *)get_func(v2[1]);
    v79 = -1;
    if ( func )
      v79 = (__int64)&v2[1][-*func];
    v91[0] = (void *)v46;
    sub_3D32B0((int **)v89, v90, (__int64 *)v91, v51, v52, v53);
    if ( !v89[0] || *(int *)v89[0] > 1 )
      sub_3D2ED0((__int64)v89, 0, 0, 0, v54, v55);
    v56 = QT::QString::fromUtf8(v91, 0, (const char *)&unk_5C2F25);
    v86 = sub_3EE1B0((QT::QString *)v91, -1);
    sub_3D32B0((int **)v89, v90, (__int64 *)&v86, v57, v58, v59);
    if ( !v89[0] || *(int *)v89[0] > 1 )
      sub_3D2ED0((__int64)v89, 0, 0, 0, v60, v61);
    v62 = QT::QString::fromUtf8(v92, 0, (const char *)&unk_5C2F25, v56);
    v87 = sub_3EE1B0((QT::QString *)v92, -1);
    sub_3D32B0((int **)v89, v90, (__int64 *)&v87, v63, v64, v65);
    if ( !v89[0] || *(int *)v89[0] > 1 )
      sub_3D2ED0((__int64)v89, 0, 0, 0, v66, v67);
    sub_3F49B0((__int64)ptr, (__int64)v2[1]);
    v88 = sub_3EE250((QT::QString *)ptr, v79);
    sub_3D32B0((int **)v89, v90, (__int64 *)&v88, v68, v69, v70);
    if ( !v89[0] || *(int *)v89[0] > 1 )
      sub_3D2ED0((__int64)v89, 0, 0, 0, v71, v72);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v92[0] && !_InterlockedSub((volatile signed __int32 *)v92[0], 1u) )
      free(v92[0]);
    if ( v91[0] && !_InterlockedSub((volatile signed __int32 *)v91[0], 1u) )
      free(v91[0]);
    v73 = QT::QStandardItem::rowCount((QT::QStandardItem *)v13);
    QT::QStandardItem::insertRow(v13, v73, v89, v62);
    v74 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v46 + 32LL);
    QT::QVariant::QVariant((QT::QVariant *)v102, 2);
    v4 = v102;
    v74(v46, v102, 259);
    QT::QVariant::~QVariant((QT::QVariant *)v102);
    if ( v89[0] && !_InterlockedSub((volatile signed __int32 *)v89[0], 1u) )
      free(v89[0]);
LABEL_76:
    v2 += 3;
    sub_3EFED0((__int64)v100, v4);
  }
  while ( v78 != v2 );
  v75 = v96;
LABEL_78:
  sub_3EF2E0(v75);
  return v103 - __readfsqword(0x28u);
}
