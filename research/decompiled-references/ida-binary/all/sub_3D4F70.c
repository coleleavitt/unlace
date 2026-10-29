QT::QVariant *__fastcall sub_3D4F70(QT::QVariant *this, __int64 a2, __int64 a3, unsigned int a4)
{
  bool v7; // zf
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  int v12; // ebp
  int v13; // eax
  QT::QChar *v14; // rax
  void *v15; // rbp
  __int64 v16; // r12
  void **v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rdx
  void *v21; // rdx
  void *v22; // rdx
  __int64 v23; // rax
  void *v24; // rdx
  void *v25; // rdx
  __int64 v26; // rdx
  QT::QChar *v27; // [rsp+8h] [rbp-F0h]
  void *v28[4]; // [rsp+10h] [rbp-E8h] BYREF
  void *v29[4]; // [rsp+30h] [rbp-C8h] BYREF
  void *v30[4]; // [rsp+50h] [rbp-A8h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v32; // [rsp+80h] [rbp-78h]
  void *v33[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v35; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+B8h] [rbp-40h]

  v7 = (*(_DWORD *)(a3 + 4) | a4) == 0;
  v36 = __readfsqword(0x28u);
  if ( !v7 || !QT::QStandardItemModel::itemFromIndex(a2, a3) )
  {
LABEL_2:
    QT::QStandardItemModel::data(this, a2, a3, a4);
    return this;
  }
  v10 = QT::QStandardItemModel::itemFromIndex(a2, a3);
  (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v10 + 16LL))(v33, v10, 0);
  v11 = v35 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (_DWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL) == QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType )
    goto LABEL_13;
  if ( !QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType || !v11 )
    goto LABEL_14;
  v12 = *(_DWORD *)&byte_9[4 * (v35 >> 2) + 3];
  if ( !v12 )
    v12 = QT::QMetaType::registerHelper(v11);
  v13 = QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType[3];
  if ( !v13 )
    v13 = QT::QMetaType::registerHelper(QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType);
  if ( v12 == v13 )
  {
LABEL_13:
    v14 = (QT::QChar *)v33[1];
    v15 = v33[0];
    v16 = v34;
    *(_OWORD *)v33 = 0;
    v27 = v14;
    v34 = 0;
  }
  else
  {
LABEL_14:
    v17 = v33;
    v32 = 0;
    *(_OWORD *)ptr = 0;
    if ( (v35 & 1) != 0 )
      v17 = (void **)((char *)v33[0] + *((int *)v33[0] + 1));
    v18 = QT::QVariant::metaType((QT::QVariant *)v33);
    QT::QMetaType::convert(v18, v17, QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType, ptr);
    v15 = ptr[0];
    v16 = v32;
    v27 = (QT::QChar *)ptr[1];
  }
  QT::QVariant::~QVariant((QT::QVariant *)v33);
  if ( v16 <= 80 )
  {
    if ( v15 && !_InterlockedSub((volatile signed __int32 *)v15, 1u) )
      free(v15);
    goto LABEL_2;
  }
  QT::QString::QString((QT::QString *)v30, (QT::QChar *)((char *)v27 + 2 * v16 - 20), 10);
  QT::QString::QString((QT::QString *)v28, v27, 70);
  v19 = QT::QString::append(v28, "...", 3);
  v20 = *(void **)v19;
  *(_QWORD *)v19 = 0;
  v29[0] = v20;
  v21 = *(void **)(v19 + 8);
  *(_QWORD *)(v19 + 8) = 0;
  v29[1] = v21;
  v22 = *(void **)(v19 + 16);
  *(_QWORD *)(v19 + 16) = 0;
  v29[2] = v22;
  v23 = QT::QString::append((QT::QString *)v29, (const QT::QString *)v30);
  v24 = *(void **)v23;
  *(_QWORD *)v23 = 0;
  ptr[0] = v24;
  v25 = *(void **)(v23 + 8);
  *(_QWORD *)(v23 + 8) = 0;
  ptr[1] = v25;
  v26 = *(_QWORD *)(v23 + 16);
  *(_QWORD *)(v23 + 16) = 0;
  v32 = v26;
  QT::QVariant::QVariant(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v29[0] && !_InterlockedSub((volatile signed __int32 *)v29[0], 1u) )
    free(v29[0]);
  if ( v28[0] && !_InterlockedSub((volatile signed __int32 *)v28[0], 1u) )
    free(v28[0]);
  if ( v30[0] && !_InterlockedSub((volatile signed __int32 *)v30[0], 1u) )
    free(v30[0]);
  if ( v15 && !_InterlockedSub((volatile signed __int32 *)v15, 1u) )
    free(v15);
  return this;
}
