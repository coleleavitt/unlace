void __fastcall xref_unified_tree_item_t__::vfunc_1(QT::QStandardItem *a1)
{
  *(_QWORD *)a1 = &unk_874B88;
  QT::QStandardItem::~QStandardItem(a1);
  operator delete(a1, 0x20u);
}
