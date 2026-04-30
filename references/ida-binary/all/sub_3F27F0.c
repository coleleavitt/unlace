__int64 __fastcall sub_3F27F0(__int64 a1, __int64 a2)
{
  int v2; // edx
  const QT::QObject *v4; // rsi
  __int64 v5; // rax
  _DWORD v7[4]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)a2;
  v9 = __readfsqword(0x28u);
  if ( v2 >= 0
    && *(int *)(a2 + 4) >= 0
    && (v4 = *(const QT::QObject **)(a2 + 16)) != nullptr
    && (v5 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QSortFilterProxyModel::staticMetaObject, v4)) != 0
    && ((*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v5 + 400LL))(v7, v5, a2), (v7[1] | v7[0]) >= 0)
    && v8 )
  {
    return QT::QStandardItemModel::itemFromIndex(*(_QWORD *)(a1 + 112), v7);
  }
  else
  {
    return 0;
  }
}
