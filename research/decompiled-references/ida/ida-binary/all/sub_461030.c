void __fastcall sub_461030(_QWORD *a1, const char *a2)
{
  QT::QTreeView *v2; // rbp
  __int64 v4; // rdi

  v2 = (QT::QTreeView *)(a1 - 30);
  *(a1 - 30) = &bookmarks_dirtree_widget_t___vtable;
  *(a1 - 28) = bookmarks_dirtree_widget_t___vtable_at__16;
  *a1 = bookmarks_dirtree_widget_t___vtable_at__240;
  a1[8] = bookmarks_dirtree_widget_t___vtable_at__304;
  v4 = a1[291];
  if ( v4 )
    qfree(v4, a2);
  a1[281] = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 281));
  ida_dirtree_widget_t__::vfunc_3(v2);
  operator delete(v2, 0xA20u);
}
