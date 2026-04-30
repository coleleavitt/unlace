QT::QTreeView *__fastcall watch_view_t__::vfunc_1(QT::QTreeView *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "watch_view_t") )
    return this;
  if ( !strcmp(a2, "searchable_widget_mixin_t") )
    return (QT::QTreeView *)((char *)this + 40);
  return (QT::QTreeView *)QT::QTreeView::qt_metacast(this, a2);
}
