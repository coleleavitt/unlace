void __fastcall sub_498B90(_QWORD *a1, const char *a2)
{
  *(a1 - 2) = &chooser_dirtree_widget_t___vtable;
  *a1 = chooser_dirtree_widget_t___vtable_at__16;
  sub_48F1B0((_BYTE *)a1 - 16);
  sub_48DCE0((QT::QTreeView *)(a1 - 2), a2);
  operator delete(a1 - 2, 0xF8u);
}
