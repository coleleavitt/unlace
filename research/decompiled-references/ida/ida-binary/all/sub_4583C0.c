QT::QTreeView *__fastcall vault_files_dirtree_widget_t__::vfunc_1(QT::QTreeView *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "vault_files_dirtree_widget_t") )
    return this;
  return filesystem_dirtree_widget_t__::vfunc_1(this, a2);
}
