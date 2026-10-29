__int64 __fastcall bookmarks_dirtree_widget_t__::vfunc_3(QT::QTreeView *this, const char *a2)
{
  __int64 v3; // rdi

  *(_QWORD *)this = &bookmarks_dirtree_widget_t___vtable;
  *((_QWORD *)this + 2) = bookmarks_dirtree_widget_t___vtable_at__16;
  *((_QWORD *)this + 30) = bookmarks_dirtree_widget_t___vtable_at__240;
  *((_QWORD *)this + 38) = bookmarks_dirtree_widget_t___vtable_at__304;
  v3 = *((_QWORD *)this + 321);
  if ( v3 )
    qfree(v3, a2);
  *((_QWORD *)this + 311) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QTreeView *)((char *)this + 2488));
  return ida_dirtree_widget_t__::vfunc_3(this);
}
