QT::QAbstractItemModel *__fastcall chooser_table_widget_model_t__::vfunc_1(QT::QAbstractItemModel *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "chooser_table_widget_model_t") )
    return this;
  return (QT::QAbstractItemModel *)filtered_item_view_model_t__::vfunc_1(this, a2);
}
