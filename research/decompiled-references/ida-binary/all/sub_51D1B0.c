void __fastcall sub_51D1B0(QT::QAbstractListModel *a1)
{
  *(_QWORD *)a1 = &off_894C60;
  QT::QAbstractListModel::~QAbstractListModel(a1);
  operator delete(a1, 0x10u);
}
