void __fastcall sub_471A80(_QWORD *a1)
{
  *(a1 - 2) = &type_item_view_t___vtable;
  *a1 = type_item_view_t___vtable_at__16;
  QT::QTreeView::~QTreeView((QT::QTreeView *)(a1 - 2));
  operator delete(a1 - 2, 0x28u);
}
