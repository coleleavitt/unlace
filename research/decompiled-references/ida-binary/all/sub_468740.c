void __fastcall sub_468740(_QWORD *a1)
{
  *(a1 - 30) = &idp_dirtree_widget_t___vtable;
  *(a1 - 28) = idp_dirtree_widget_t___vtable_at__16;
  *a1 = idp_dirtree_widget_t___vtable_at__240;
  a1[8] = idp_dirtree_widget_t___vtable_at__304;
  ida_dirtree_widget_t__::vfunc_3((QT::QTreeView *)(a1 - 30));
  operator delete(a1 - 30, 0x9C0u);
}
