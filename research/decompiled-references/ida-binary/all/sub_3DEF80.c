unsigned __int64 __fastcall sub_3DEF80(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  QT::QAbstractItemModel::QAbstractItemModel((QT::QAbstractItemModel *)a1, nullptr);
  *(_DWORD *)(a1 + 24) = 16;
  *(_QWORD *)a1 = &items_tree_model_t___vtable;
  *(_QWORD *)(a1 + 16) = a2;
  v2 = operator new(0x178u);
  sub_3DE430(v2, a1, 4);
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 32) = v2;
  *(_DWORD *)(v2 + 372) = 1;
  *(_QWORD *)v2 = &root_node_t___vtable;
  if ( v3 )
  {
    QT::QObject::connect(&v5, v3, "2expanded(QModelIndex)", a1, "1onItemExpanded(QModelIndex)", 0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v5);
  }
  return v6 - __readfsqword(0x28u);
}
