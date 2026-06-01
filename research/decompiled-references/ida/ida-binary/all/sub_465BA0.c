void __fastcall sub_465BA0(_QWORD *a1)
{
  *(a1 - 30) = &functions_dirtree_widget_t___vtable;
  *(a1 - 28) = functions_dirtree_widget_t___vtable_at__16;
  *a1 = functions_dirtree_widget_t___vtable_at__240;
  a1[8] = functions_dirtree_widget_t___vtable_at__304;
  ida_dirtree_widget_t__::vfunc_3((QT::QTreeView *)(a1 - 30));
  operator delete(a1 - 30, 0x9C8u);
}
