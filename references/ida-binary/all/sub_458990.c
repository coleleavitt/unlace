void __fastcall sub_458990(_QWORD *a1, const char *a2)
{
  *(a1 - 2) = &worklists_dirtree_widget_t___vtable;
  *a1 = worklists_dirtree_widget_t___vtable_at__16;
  a1[28] = worklists_dirtree_widget_t___vtable_at__240;
  a1[36] = worklists_dirtree_widget_t___vtable_at__304;
  a1[309] = worklists_dirtree_widget_t___vtable_at__2488;
  sub_42B460((QT::QTreeView *)(a1 - 2), a2);
  operator delete(a1 - 2, 0x9F0u);
}
