QT::QAbstractItemModel *__fastcall filtered_item_view_model_t__::vfunc_1(QT::QAbstractItemModel *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "filtered_item_view_model_t") )
    return this;
  return (QT::QAbstractItemModel *)QT::QAbstractItemModel::qt_metacast(this, a2);
}
