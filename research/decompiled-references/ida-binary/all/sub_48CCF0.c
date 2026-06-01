__int64 __fastcall sub_48CCF0(QT::QAbstractItemModel *this, unsigned int a2, int a3, __int64 a4)
{
  QT::QAbstractItemModel::beginRemoveRows(this, a4, a2, a2 + a3 - 1);
  QT::QAbstractItemModel::endRemoveRows(this);
  return 0;
}
