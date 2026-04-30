__int64 __fastcall sub_315F10(QT::QObject *a1)
{
  QT::QTranslator *v1; // rbx
  QT::QSignalMapper *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r14
  __m128i *v5; // rax
  __m128i si128; // xmm0
  QT::QAction *v7; // r14
  int v8; // eax
  QT::QAction *v9; // r15
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  int *v16; // rax
  QT::QAction *v17; // r15
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  int *v24; // rax
  QT::QAction *v25; // r15
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  int *v32; // rax
  QT::QAction *v33; // r15
  __int64 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  int *v40; // rax
  QT::QAction *v41; // r15
  __int64 v42; // r15
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // r9
  int *v48; // rax
  QT::QAction *v49; // r15
  __int64 v50; // r15
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // r9
  int *v56; // rax
  QT::QAction *v57; // r15
  __int64 v58; // r15
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r8
  __int64 v63; // r9
  int *v64; // rax
  QT::QAction *v65; // r15
  __int64 v66; // r15
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r8
  __int64 v71; // r9
  int *v72; // rax
  QT::QAction *v73; // r15
  __int64 v74; // r14
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r8
  __int64 v79; // r9
  int *v80; // rax
  double v81; // xmm0_8
  double v82; // xmm0_8
  QT::QObject *v83; // r14
  double v84; // xmm0_8
  double v85; // xmm0_8
  QT::QObject *v86; // r13
  _BYTE v88[8]; // [rsp+18h] [rbp-B0h] BYREF
  void *v89[2]; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr[4]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v91[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v92; // [rsp+88h] [rbp-40h]

  v92 = __readfsqword(0x28u);
  v1 = (QT::QTranslator *)operator new(0x10u);
  QT::QTranslator::QTranslator(v1, a1);
  *(_QWORD *)v1 = &off_872C78;
  QT::QCoreApplication::installTranslator(v1, a1);
  v2 = (QT::QSignalMapper *)operator new(0x10u);
  QT::QSignalMapper::QSignalMapper(v2, a1);
  *(_QWORD *)(*((_QWORD *)a1 + 44) + 64LL) = v2;
  v89[0] = sub_30E440;
  v3 = *((_QWORD *)a1 + 44);
  v89[1] = nullptr;
  v4 = *(_QWORD *)(v3 + 64);
  ptr[1] = nullptr;
  ptr[0] = &QT::QSignalMapper::mappedString;
  v5 = (__m128i *)operator new(0x20u);
  si128 = _mm_load_si128((const __m128i *)v89);
  v5->m128i_i32[0] = 1;
  v5->m128i_i64[1] = (__int64)sub_30E6C0;
  v5[1] = si128;
  QT::QObject::connectImpl(v88, v4, ptr, a1, v89, v5, 0, 0, &QT::QSignalMapper::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
  sub_17E590((__int64)v88, v4);
  v7 = (QT::QAction *)unk_8CA690;
  v8 = reg_int_op("UseOnlineManual", 0, 1, 0);
  QT::QAction::setChecked(v7, v8 != 0);
  v9 = (QT::QAction *)qword_8CA918;
  QT::QVariant::QVariant((QT::QVariant *)v91, 1);
  QT::QAction::setData(v9, (const QT::QVariant *)v91);
  QT::QVariant::~QVariant((QT::QVariant *)v91);
  v10 = *((_QWORD *)a1 + 44);
  ptr[0] = (void *)qword_8CA918;
  sub_1825D0((int **)(v10 + 72), *(int **)(v10 + 88), (__int64 *)ptr, v11, v12, v13);
  v16 = *(int **)(v10 + 72);
  if ( !v16 || *v16 > 1 )
    sub_1821F0(v10 + 72, 0, 0, 0, v14, v15);
  v17 = (QT::QAction *)qword_8CA920;
  QT::QVariant::QVariant((QT::QVariant *)v91, 2);
  QT::QAction::setData(v17, (const QT::QVariant *)v91);
  QT::QVariant::~QVariant((QT::QVariant *)v91);
  v18 = *((_QWORD *)a1 + 44);
  ptr[0] = (void *)qword_8CA920;
  sub_1825D0((int **)(v18 + 72), *(int **)(v18 + 88), (__int64 *)ptr, v19, v20, v21);
  v24 = *(int **)(v18 + 72);
  if ( !v24 || *v24 > 1 )
    sub_1821F0(v18 + 72, 0, 0, 0, v22, v23);
  v25 = (QT::QAction *)qword_8CA928;
  QT::QVariant::QVariant((QT::QVariant *)v91, 3);
  QT::QAction::setData(v25, (const QT::QVariant *)v91);
  QT::QVariant::~QVariant((QT::QVariant *)v91);
  v26 = *((_QWORD *)a1 + 44);
  ptr[0] = (void *)qword_8CA928;
  sub_1825D0((int **)(v26 + 72), *(int **)(v26 + 88), (__int64 *)ptr, v27, v28, v29);
  v32 = *(int **)(v26 + 72);
  if ( !v32 || *v32 > 1 )
    sub_1821F0(v26 + 72, 0, 0, 0, v30, v31);
  v33 = (QT::QAction *)qword_8CA930;
  QT::QVariant::QVariant((QT::QVariant *)v91, 4);
  QT::QAction::setData(v33, (const QT::QVariant *)v91);
  QT::QVariant::~QVariant((QT::QVariant *)v91);
  v34 = *((_QWORD *)a1 + 44);
  ptr[0] = (void *)qword_8CA930;
  sub_1825D0((int **)(v34 + 72), *(int **)(v34 + 88), (__int64 *)ptr, v35, v36, v37);
  v40 = *(int **)(v34 + 72);
  if ( !v40 || *v40 > 1 )
    sub_1821F0(v34 + 72, 0, 0, 0, v38, v39);
  v41 = (QT::QAction *)qword_8CA938;
  QT::QVariant::QVariant((QT::QVariant *)v91, 5);
  QT::QAction::setData(v41, (const QT::QVariant *)v91);
  QT::QVariant::~QVariant((QT::QVariant *)v91);
  v42 = *((_QWORD *)a1 + 44);
  ptr[0] = (void *)qword_8CA938;
  sub_1825D0((int **)(v42 + 72), *(int **)(v42 + 88), (__int64 *)ptr, v43, v44, v45);
  v48 = *(int **)(v42 + 72);
  if ( !v48 || *v48 > 1 )
    sub_1821F0(v42 + 72, 0, 0, 0, v46, v47);
  v49 = (QT::QAction *)qword_8CA940;
  QT::QVariant::QVariant((QT::QVariant *)v91, 6);
  QT::QAction::setData(v49, (const QT::QVariant *)v91);
  QT::QVariant::~QVariant((QT::QVariant *)v91);
  v50 = *((_QWORD *)a1 + 44);
  ptr[0] = (void *)qword_8CA940;
  sub_1825D0((int **)(v50 + 72), *(int **)(v50 + 88), (__int64 *)ptr, v51, v52, v53);
  v56 = *(int **)(v50 + 72);
  if ( !v56 || *v56 > 1 )
    sub_1821F0(v50 + 72, 0, 0, 0, v54, v55);
  v57 = (QT::QAction *)qword_8CA948;
  QT::QVariant::QVariant((QT::QVariant *)v91, 7);
  QT::QAction::setData(v57, (const QT::QVariant *)v91);
  QT::QVariant::~QVariant((QT::QVariant *)v91);
  v58 = *((_QWORD *)a1 + 44);
  ptr[0] = (void *)qword_8CA948;
  sub_1825D0((int **)(v58 + 72), *(int **)(v58 + 88), (__int64 *)ptr, v59, v60, v61);
  v64 = *(int **)(v58 + 72);
  if ( !v64 || *v64 > 1 )
    sub_1821F0(v58 + 72, 0, 0, 0, v62, v63);
  v65 = (QT::QAction *)qword_8CA950;
  QT::QVariant::QVariant((QT::QVariant *)v91, 8);
  QT::QAction::setData(v65, (const QT::QVariant *)v91);
  QT::QVariant::~QVariant((QT::QVariant *)v91);
  v66 = *((_QWORD *)a1 + 44);
  ptr[0] = (void *)qword_8CA950;
  sub_1825D0((int **)(v66 + 72), *(int **)(v66 + 88), (__int64 *)ptr, v67, v68, v69);
  v72 = *(int **)(v66 + 72);
  if ( !v72 || *v72 > 1 )
    sub_1821F0(v66 + 72, 0, 0, 0, v70, v71);
  v73 = (QT::QAction *)qword_8CA958;
  QT::QVariant::QVariant((QT::QVariant *)v91, 9);
  QT::QAction::setData(v73, (const QT::QVariant *)v91);
  QT::QVariant::~QVariant((QT::QVariant *)v91);
  v74 = *((_QWORD *)a1 + 44);
  ptr[0] = (void *)qword_8CA958;
  sub_1825D0((int **)(v74 + 72), *(int **)(v74 + 88), (__int64 *)ptr, v75, v76, v77);
  v80 = *(int **)(v74 + 72);
  if ( !v80 || *v80 > 1 )
    sub_1821F0(v74 + 72, 0, 0, 0, v78, v79);
  QT::QAction::setVisible(unk_8CA6A8, 0);
  QT::QAction::setVisible(unk_8CA6B0, 1);
  QT::QAction::setVisible(unk_8CA6C0, 1);
  QT::QAction::setVisible(unk_8CA6C8, 1);
  v81 = QT::QString::fromUtf8(ptr, 0, (const char *)&unk_5C2F25);
  v82 = QT::QString::fromUtf8(v89, 6, "Return", v81);
  v83 = (QT::QObject *)sub_53F320(a1, v89, ptr, 0, v82);
  if ( v89[0] && !_InterlockedSub((volatile signed __int32 *)v89[0], 1u) )
    free(v89[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QAction::setMenuObject(unk_8C9EA0, v83);
  QT::QObject::connect(ptr, v83, "2aboutToShow()", a1, "1returnMenuToShow()", 1);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v84 = QT::QString::fromUtf8(ptr, 0, (const char *)&unk_5C2F25);
  v85 = QT::QString::fromUtf8(v89, 10, "UndoReturn", v84);
  v86 = (QT::QObject *)sub_53F320(a1, v89, ptr, 0, v85);
  if ( v89[0] && !_InterlockedSub((volatile signed __int32 *)v89[0], 1u) )
    free(v89[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QAction::setMenuObject(unk_8C9EA8, v86);
  QT::QObject::connect(ptr, v86, "2aboutToShow()", a1, "1undoReturnMenuToShow()", 1);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QAction::setMenuRole(unk_8CA6A0, 4);
  return QT::QAction::setMenuRole(unk_8C9938, 6);
}
