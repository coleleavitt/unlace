QT::QAbstractListModel *__fastcall SearchResultModel__::vfunc_1(QT::QAbstractListModel *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "SearchResultModel") )
    return this;
  return (QT::QAbstractListModel *)QT::QAbstractListModel::qt_metacast(this, a2);
}
