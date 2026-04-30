void __fastcall sub_461430(_QWORD *a1)
{
  *(a1 - 38) = &breakpoints_dirtree_widget_t___vtable;
  *(a1 - 36) = breakpoints_dirtree_widget_t___vtable_at__16;
  *(a1 - 8) = breakpoints_dirtree_widget_t___vtable_at__240;
  *a1 = breakpoints_dirtree_widget_t___vtable_at__304;
  ida_dirtree_widget_t__::vfunc_3((QT::QTreeView *)(a1 - 38));
  operator delete(a1 - 38, 0x9B8u);
}
