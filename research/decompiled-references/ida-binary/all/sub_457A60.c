QT::QTreeView *__fastcall files_dirtree_widget_t__::vfunc_1(QT::QTreeView *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "files_dirtree_widget_t") )
    return this;
  if ( !strcmp(a2, "event_handler_t") )
    return (QT::QTreeView *)((char *)this + 2488);
  return (QT::QTreeView *)ida_dirtree_widget_t__::vfunc_1(this, a2);
}
