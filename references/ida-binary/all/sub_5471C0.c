QT::QAbstractItemModel *__fastcall dirtree_item_model_base_t__::vfunc_1(QT::QAbstractItemModel *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "dirtree_item_model_base_t") )
    return this;
  return (QT::QAbstractItemModel *)filtered_item_view_model_t__::vfunc_1(this, a2);
}
