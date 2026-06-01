void __fastcall sub_4705B0(_QWORD *a1)
{
  *(a1 - 2) = &tchooser_dirtree_widget_t___vtable;
  *a1 = tchooser_dirtree_widget_t___vtable_at__16;
  chooser_dirtree_widget_t__::vfunc_3((QT::QTreeView *)(a1 - 2));
  operator delete(a1 - 2, 0xF8u);
}
