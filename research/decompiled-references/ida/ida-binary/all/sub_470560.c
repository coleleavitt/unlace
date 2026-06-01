__int64 __fastcall sub_470560(__int64 a1)
{
  QT::QTreeView *v1; // rdi

  v1 = (QT::QTreeView *)(a1 - 16);
  *(_QWORD *)v1 = &tchooser_dirtree_widget_t___vtable;
  *((_QWORD *)v1 + 2) = tchooser_dirtree_widget_t___vtable_at__16;
  return chooser_dirtree_widget_t__::vfunc_3(v1);
}
