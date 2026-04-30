__int64 __fastcall sub_3F1150(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdi
  unsigned __int64 v5; // rdi
  int v6; // r14d
  int v7; // eax
  unsigned __int64 v8; // rax
  __int64 *func; // rax
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  int v14; // r15d
  int v15; // eax
  unsigned __int64 v16; // rax
  _QWORD *v17; // r14
  __int64 v18; // rax
  _QWORD *v19; // r15
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-90h] BYREF
  _QWORD v23[3]; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-70h]
  _QWORD v25[3]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-50h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 8) = -1;
  (*(void (__fastcall **)(_QWORD *, _DWORD *, __int64))(*(_QWORD *)a2 + 16LL))(v23, a2, 261);
  v21 = v24 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)&v21) )
  {
    v5 = v24 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (_DWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL) == QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
      goto LABEL_13;
    if ( !v5 || !QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
      goto LABEL_30;
    v6 = *(_DWORD *)&byte_9[4 * (v24 >> 2) + 3];
    if ( !v6 )
      v6 = QT::QMetaType::registerHelper(v5);
    v7 = QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType[3];
    if ( !v7 )
      v7 = QT::QMetaType::registerHelper(QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType);
    if ( v6 == v7 )
    {
LABEL_13:
      v8 = v23[0];
    }
    else
    {
LABEL_30:
      v22 = 0;
      v17 = v23;
      if ( (v24 & 1) != 0 )
        v17 = (_QWORD *)(*(int *)(v23[0] + 4LL) + v23[0]);
      v18 = QT::QVariant::metaType((QT::QVariant *)v23);
      QT::QMetaType::convert(v18, v17, QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType, &v22);
      v8 = v22;
    }
    *(_QWORD *)(a1 + 8) = v8;
  }
  v3 = *((_QWORD *)a2 + 2);
  if ( a2[6] == 1 )
  {
    func = (__int64 *)get_func(v3);
    if ( !func || (v10 = *func, v10 == -1) )
      v10 = *((_QWORD *)a2 + 2);
    v11 = *(_QWORD *)(a1 + 8) == -1;
    *(_QWORD *)a1 = v10;
    if ( !v11 )
    {
      v12 = QT::QStandardItem::parent((QT::QStandardItem *)a2);
      if ( v12 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*(_QWORD *)v12 + 16LL))(v25, v12, 258);
        v22 = v26 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)&v22) )
        {
          v13 = v26 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (_DWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL) == QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
            goto LABEL_27;
          if ( !v13 || !QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
            goto LABEL_35;
          v14 = *(_DWORD *)&byte_9[4 * (v26 >> 2) + 3];
          if ( !v14 )
            v14 = QT::QMetaType::registerHelper(v13);
          v15 = QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType[3];
          if ( !v15 )
            v15 = QT::QMetaType::registerHelper(QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType);
          if ( v14 == v15 )
          {
LABEL_27:
            v16 = v25[0];
          }
          else
          {
LABEL_35:
            v22 = 0;
            v19 = v25;
            if ( (v26 & 1) != 0 )
              v19 = (_QWORD *)(*(int *)(v25[0] + 4LL) + v25[0]);
            v20 = QT::QVariant::metaType((QT::QVariant *)v25);
            QT::QMetaType::convert(
              v20,
              v19,
              QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType,
              &v22);
            v16 = v22;
          }
          *(_QWORD *)(a1 + 16) = v16;
        }
        QT::QVariant::~QVariant((QT::QVariant *)v25);
      }
    }
  }
  else
  {
    *(_QWORD *)a1 = v3;
  }
  QT::QVariant::~QVariant((QT::QVariant *)v23);
  return a1;
}
