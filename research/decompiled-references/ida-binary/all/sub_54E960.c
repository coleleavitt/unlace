QT::QTreeView *__fastcall standalone_dirtree_widget_t__::vfunc_1(QT::QTreeView *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "standalone_dirtree_widget_t") )
    return this;
  if ( !strcmp(a2, "stylable_widget_mixin_t") )
    return (QT::QTreeView *)((char *)this + 240);
  if ( !strcmp(a2, "filtered_widget_mixin_t") )
    return (QT::QTreeView *)((char *)this + 304);
  return base_dirtree_widget_t__::vfunc_1(this, a2);
}
