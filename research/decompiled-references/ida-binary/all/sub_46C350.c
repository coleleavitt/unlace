__int64 __fastcall sub_46C350(__int64 a1)
{
  QT::QTreeView *v1; // rdi

  v1 = (QT::QTreeView *)(a1 - 304);
  *(_QWORD *)v1 = &names_dirtree_widget_t___vtable;
  *((_QWORD *)v1 + 2) = names_dirtree_widget_t___vtable_at__16;
  *((_QWORD *)v1 + 30) = names_dirtree_widget_t___vtable_at__240;
  *((_QWORD *)v1 + 38) = names_dirtree_widget_t___vtable_at__304;
  return ida_dirtree_widget_t__::vfunc_3(v1);
}
