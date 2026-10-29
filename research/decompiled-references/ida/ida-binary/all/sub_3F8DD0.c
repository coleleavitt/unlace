__int64 __fastcall sub_3F8DD0(QT::QSortFilterProxyModel *this, QT::QObject *a2)
{
  QT::QSortFilterProxyModel::QSortFilterProxyModel(this, a2);
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = -1;
  *(_QWORD *)this = &xref_filter_proxy_model_t___vtable;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 1) = 0;
  *(_OWORD *)((char *)this + 40) = 0;
  return QT::QSortFilterProxyModel::setDynamicSortFilter(this, 1);
}
