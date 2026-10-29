void __fastcall xref_unified_tree_model_t__::vfunc_4(QT::QStandardItemModel *this)
{
  __int64 v1; // rbx
  __int64 v2; // rbp

  v1 = *((_QWORD *)this + 4);
  *(_QWORD *)this = &xref_unified_tree_model_t___vtable;
  while ( v1 )
  {
    v2 = v1;
    sub_473A20(*(_QWORD **)(v1 + 24));
    v1 = *(_QWORD *)(v1 + 16);
    QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)(v2 + 40));
    operator delete((void *)v2, 0x30u);
  }
  QT::QStandardItemModel::~QStandardItemModel(this);
  operator delete(this, 0x50u);
}
