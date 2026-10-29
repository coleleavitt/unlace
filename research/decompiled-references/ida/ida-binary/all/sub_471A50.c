void __fastcall type_item_view_t__::vfunc_4(QT::QTreeView *a1)
{
  *(_QWORD *)a1 = &type_item_view_t___vtable;
  *((_QWORD *)a1 + 2) = type_item_view_t___vtable_at__16;
  QT::QTreeView::~QTreeView(a1);
  operator delete(a1, 0x28u);
}
