__int64 __fastcall sub_3F2CB0(QT::QAbstractProxyModel *this, unsigned int a2, __int64 a3)
{
  const QT::QObject *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  const void *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // r14
  __int64 v15; // rdi
  const void *v16; // rdi
  _QWORD *v17; // rax
  __int64 (__fastcall *v18)(__int64); // rdx
  _QWORD v19[11]; // [rsp+0h] [rbp-58h] BYREF

  v19[3] = __readfsqword(0x28u);
  v5 = (const QT::QObject *)QT::QAbstractProxyModel::sourceModel(this);
  v6 = QT::QMetaObject::cast((QT::QMetaObject *)&off_893560, v5);
  if ( !v6 )
    return 1;
  v7 = v6;
  if ( *(_BYTE *)(v6 + 72) )
    return 1;
  v9 = QT::QAbstractProxyModel::sourceModel(this);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v9 + 96LL))(v19, v9, a2, 0, a3);
  v10 = (const void *)QT::QStandardItemModel::itemFromIndex(v7, v19);
  if ( !v10 )
    return 1;
  v11 = __dynamic_cast(
          v10,
          (const struct __class_type_info *)&`typeinfo for'QT::QStandardItem,
          (const struct __class_type_info *)&`typeinfo for'xref_tree_item_t,
          0);
  v12 = v11;
  if ( !v11 )
    return 1;
  v13 = *(__int64 (__fastcall **)(__int64))(*v11 + 80LL);
  v14 = v13 == sub_3EDDF0 ? v12[2] : v13((__int64)v12);
  if ( v14 == -1 )
    return 1;
  v15 = *((_QWORD *)this + 8);
  if ( v15 == v14 )
    return 1;
  if ( *(int *)a3 >= 0 && *(int *)(a3 + 4) >= 0 && *(_QWORD *)(a3 + 16) )
  {
    v16 = (const void *)QT::QStandardItemModel::itemFromIndex(v7, a3);
    if ( v16
      && (v17 = __dynamic_cast(
                  v16,
                  (const struct __class_type_info *)&`typeinfo for'QT::QStandardItem,
                  (const struct __class_type_info *)&`typeinfo for'xref_tree_item_t,
                  0)) != nullptr )
    {
      v18 = *(__int64 (__fastcall **)(__int64))(*v17 + 80LL);
      if ( v18 == sub_3EDDF0 )
        v15 = v17[2];
      else
        v15 = v18((__int64)v17);
    }
    else
    {
      v15 = *((_QWORD *)this + 8);
    }
  }
  if ( v15 == -1 )
    return 1;
  else
    return (unsigned int)sub_3EE050(v15, v14) ^ 1;
}
