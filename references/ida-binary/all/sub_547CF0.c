QT::QAbstractItemModel *__fastcall chooser_dirtree_item_model_t__::vfunc_1(QT::QAbstractItemModel *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "chooser_dirtree_item_model_t") )
    return this;
  return dirtree_item_model_base_t__::vfunc_1(this, a2);
}
