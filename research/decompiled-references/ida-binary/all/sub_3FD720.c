__int64 __fastcall sub_3FD720(QT::QObject *a1, QT::QBoxLayout *this)
{
  QT::QStandardItemModel *v2; // rbp
  QT::QSortFilterProxyModel *v3; // rbp
  QT::QTreeView *v4; // rbp

  v2 = (QT::QStandardItemModel *)operator new(0x50u);
  sub_3FD560(v2, a1);
  *((_QWORD *)a1 + 14) = v2;
  v3 = (QT::QSortFilterProxyModel *)operator new(0x50u);
  sub_3F8DD0(v3, a1);
  *((_QWORD *)a1 + 15) = v3;
  *((_QWORD *)v3 + 9) = a1;
  QT::QSortFilterProxyModel::setSortRole(v3, 262);
  v4 = (QT::QTreeView *)operator new(0x28u);
  QT::QTreeView::QTreeView(v4, a1);
  *((_QWORD *)a1 + 13) = v4;
  sub_3F1430(a1, v4, *((_QWORD *)a1 + 14), *((_QWORD *)a1 + 15));
  sub_3F15A0((__int64)a1);
  QT::QBoxLayout::addWidget(this, *((_QWORD *)a1 + 13), 0, 0);
  return QT::QBoxLayout::setStretchFactor(this, *((QT::QWidget **)a1 + 13), 1);
}
