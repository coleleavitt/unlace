__int64 __fastcall sub_3F1430(QT::QObject *a1, QT::QTreeView *this, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  QT::QObject *v10; // rax
  QT::QHeaderView *v11; // rax
  QT::QHeaderView *v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rsi

  QT::QTreeView::setHeaderHidden(this, 0);
  QT::QTreeView::setExpandsOnDoubleClick(this, 0);
  QT::QAbstractItemView::setEditTriggers(this, 0);
  QT::QWidget::setContextMenuPolicy(this, 1);
  QT::QAbstractItemView::setSelectionMode(this, 3);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 392LL))(a4, a3);
  (*(void (__fastcall **)(QT::QTreeView *, __int64))(*(_QWORD *)this + 456LL))(this, a4);
  v7 = QT::QTreeView::header(this);
  QT::QHeaderView::setSectionResizeMode(v7, 0, 0);
  v8 = QT::QTreeView::header(this);
  QT::QHeaderView::setSectionResizeMode(v8, 1, 0);
  v9 = QT::QTreeView::header(this);
  QT::QHeaderView::setSectionResizeMode(v9, 2, 0);
  v10 = (QT::QObject *)QT::QTreeView::header(this);
  QT::QObject::installEventFilter(v10, a1);
  v11 = (QT::QHeaderView *)QT::QTreeView::header(this);
  QT::QHeaderView::setSectionsMovable(v11, 1);
  QT::QTreeView::setSortingEnabled(this, 1);
  v12 = (QT::QHeaderView *)QT::QTreeView::header(this);
  QT::QHeaderView::setSortIndicatorShown(v12, 1);
  QT::QTreeView::sortByColumn(this, 3, 0);
  v13 = operator new(0x30u);
  QT::QStyledItemDelegate::QStyledItemDelegate((QT::QStyledItemDelegate *)v13, nullptr);
  v14 = *((_QWORD *)a1 + 4);
  *(_BYTE *)(v13 + 32) = 0;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)v13 = &HtmlItemDelegate___vtable;
  sub_4EFFE0(v13, v14 + 56);
  return QT::QAbstractItemView::setItemDelegate(this, (QT::QAbstractItemDelegate *)v13);
}
