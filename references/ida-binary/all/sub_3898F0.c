void __fastcall SCTreeWidgetItem__::vfunc_1(QT::QTreeWidgetItem *a1)
{
  *(_QWORD *)a1 = &SCTreeWidgetItem___vtable;
  QT::QTreeWidgetItem::~QTreeWidgetItem(a1);
  operator delete(a1, 0x60u);
}
