void __fastcall sub_2DC410(_QWORD *a1)
{
  *(a1 - 38) = &ida_dirtree_widget_t___vtable;
  *(a1 - 36) = ida_dirtree_widget_t___vtable_at__16;
  *(a1 - 8) = ida_dirtree_widget_t___vtable_at__240;
  *a1 = ida_dirtree_widget_t___vtable_at__304;
  sub_2DC230(a1 - 38, nullptr);
  standalone_dirtree_widget_t__::vfunc_3((QT::QTreeView *)(a1 - 38));
  operator delete(a1 - 38, 0x9B8u);
}
