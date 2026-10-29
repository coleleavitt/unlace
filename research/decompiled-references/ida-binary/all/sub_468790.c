void __fastcall sub_468790(_QWORD *a1)
{
  *(a1 - 38) = &idp_dirtree_widget_t___vtable;
  *(a1 - 36) = idp_dirtree_widget_t___vtable_at__16;
  *(a1 - 8) = idp_dirtree_widget_t___vtable_at__240;
  *a1 = idp_dirtree_widget_t___vtable_at__304;
  ida_dirtree_widget_t__::vfunc_3((QT::QTreeView *)(a1 - 38));
  operator delete(a1 - 38, 0x9C0u);
}
