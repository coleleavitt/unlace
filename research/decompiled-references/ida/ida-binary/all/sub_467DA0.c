QT::QTreeView *__fastcall ida_dirtree_widget_t__::vfunc_1(QT::QTreeView *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "ida_dirtree_widget_t") )
    return this;
  return (QT::QTreeView *)standalone_dirtree_widget_t__::vfunc_1(this, a2);
}
