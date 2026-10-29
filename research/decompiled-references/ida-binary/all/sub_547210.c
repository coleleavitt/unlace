QT::QAbstractItemModel *__fastcall dirtree_item_model_t__::vfunc_1(QT::QAbstractItemModel *this, char *a2)
{
  QT::QAbstractItemModel *v2; // r12

  if ( !a2 )
    return nullptr;
  v2 = this;
  if ( !strcmp(a2, "dirtree_item_model_t") || !strcmp(a2, "dirtree_item_model_base_t") )
    return v2;
  return (QT::QAbstractItemModel *)filtered_item_view_model_t__::vfunc_1(this, a2);
}
