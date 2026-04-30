void __fastcall sub_4686F0(_QWORD *a1)
{
  *(a1 - 2) = &idp_dirtree_widget_t___vtable;
  *a1 = idp_dirtree_widget_t___vtable_at__16;
  a1[28] = idp_dirtree_widget_t___vtable_at__240;
  a1[36] = idp_dirtree_widget_t___vtable_at__304;
  ida_dirtree_widget_t__::vfunc_3((QT::QTreeView *)(a1 - 2));
  operator delete(a1 - 2, 0x9C0u);
}
