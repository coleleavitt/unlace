__int64 __fastcall sub_48CD10(
        QT::QAbstractItemModel *this,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  QT::QAbstractItemModel::beginInsertRows(this, a4, a2, a2 + a3 - 1, a5, a6);
  QT::QAbstractItemModel::endInsertRows(this);
  return 0;
}
