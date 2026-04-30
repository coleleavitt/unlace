void __fastcall sub_468B80(_QWORD *a1)
{
  *(a1 - 2) = &imports_dirtree_widget_t___vtable;
  *a1 = imports_dirtree_widget_t___vtable_at__16;
  a1[28] = imports_dirtree_widget_t___vtable_at__240;
  a1[36] = imports_dirtree_widget_t___vtable_at__304;
  ida_dirtree_widget_t__::vfunc_3((QT::QTreeView *)(a1 - 2));
  operator delete(a1 - 2, 0x9B8u);
}
