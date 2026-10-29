QT::QTreeView *__fastcall local_types_dirtree_widget_t__::vfunc_1(QT::QTreeView *this, char *a2)
{
  QT::QTreeView *v2; // r12

  if ( !a2 )
    return nullptr;
  v2 = this;
  if ( !strcmp(a2, "local_types_dirtree_widget_t") || !strcmp(a2, "til_dirtree_widget_t") )
    return v2;
  return ida_dirtree_widget_t__::vfunc_1(this, a2);
}
