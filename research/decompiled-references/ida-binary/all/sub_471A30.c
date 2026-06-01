void __fastcall sub_471A30(__int64 a1)
{
  QT::QTreeView *v1; // rdi

  v1 = (QT::QTreeView *)(a1 - 16);
  *(_QWORD *)v1 = &type_item_view_t___vtable;
  *((_QWORD *)v1 + 2) = type_item_view_t___vtable_at__16;
  QT::QTreeView::~QTreeView(v1);
}
