QT::QAbstractItemModel *__fastcall vault_files_item_model_t__::vfunc_1(QT::QAbstractItemModel *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "files_dirtree_item_model_t") )
    return this;
  return (QT::QAbstractItemModel *)standalone_dirtree_item_model_t__::vfunc_1(this, a2);
}
