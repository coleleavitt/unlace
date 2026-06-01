__int64 __fastcall sub_3F2C90(QT::QAbstractProxyModel *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = QT::QAbstractProxyModel::sourceModel(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 128LL))(v2, a2);
}
