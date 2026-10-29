void __fastcall sub_3CFC10(QT::QStandardItemModel *a1)
{
  *(_QWORD *)a1 = &off_873CB8;
  QT::QStandardItemModel::~QStandardItemModel(a1);
  operator delete(a1, 0x10u);
}
