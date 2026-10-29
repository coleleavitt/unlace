__int64 __fastcall sub_460D20(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi

  *(a1 - 2) = &bookmarks_dirtree_widget_t___vtable;
  *a1 = bookmarks_dirtree_widget_t___vtable_at__16;
  a1[28] = bookmarks_dirtree_widget_t___vtable_at__240;
  a1[36] = bookmarks_dirtree_widget_t___vtable_at__304;
  v3 = a1[319];
  if ( v3 )
    qfree(v3, a2);
  a1[309] = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 309));
  return ida_dirtree_widget_t__::vfunc_3((QT::QTreeView *)(a1 - 2));
}
