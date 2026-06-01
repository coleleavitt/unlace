__int64 __fastcall sub_461280(__int64 a1)
{
  QT::QTreeView *v1; // rdi

  v1 = (QT::QTreeView *)(a1 - 16);
  *(_QWORD *)v1 = &breakpoints_dirtree_widget_t___vtable;
  *((_QWORD *)v1 + 2) = breakpoints_dirtree_widget_t___vtable_at__16;
  *((_QWORD *)v1 + 30) = breakpoints_dirtree_widget_t___vtable_at__240;
  *((_QWORD *)v1 + 38) = breakpoints_dirtree_widget_t___vtable_at__304;
  return ida_dirtree_widget_t__::vfunc_3(v1);
}
