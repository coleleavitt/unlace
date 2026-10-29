void __fastcall sub_2DC4D0(_QWORD *a1)
{
  *(a1 - 2) = &ida_dirtree_widget_t___vtable;
  *a1 = ida_dirtree_widget_t___vtable_at__16;
  a1[28] = ida_dirtree_widget_t___vtable_at__240;
  a1[36] = ida_dirtree_widget_t___vtable_at__304;
  sub_2DC230(a1 - 2, nullptr);
  standalone_dirtree_widget_t__::vfunc_3((QT::QTreeView *)(a1 - 2));
  operator delete(a1 - 2, 0x9B8u);
}
