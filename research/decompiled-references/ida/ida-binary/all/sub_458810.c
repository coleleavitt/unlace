__int64 __fastcall sub_458810(__int64 a1, const char *a2)
{
  QT::QTreeView *v2; // rdi

  v2 = (QT::QTreeView *)(a1 - 16);
  *(_QWORD *)v2 = &worklists_dirtree_widget_t___vtable;
  *((_QWORD *)v2 + 2) = worklists_dirtree_widget_t___vtable_at__16;
  *((_QWORD *)v2 + 30) = worklists_dirtree_widget_t___vtable_at__240;
  *((_QWORD *)v2 + 38) = worklists_dirtree_widget_t___vtable_at__304;
  *((_QWORD *)v2 + 311) = worklists_dirtree_widget_t___vtable_at__2488;
  return sub_42B460(v2, a2);
}
