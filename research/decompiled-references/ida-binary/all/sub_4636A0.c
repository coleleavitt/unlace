void __fastcall sub_4636A0(__int64 a1)
{
  QT::QTreeView *v1; // rbp
  QT::QStyledItemDelegate *v3; // rdi

  v1 = (QT::QTreeView *)(a1 - 16);
  v3 = (QT::QStyledItemDelegate *)(a1 + 56);
  *((_QWORD *)v3 - 9) = &diff_details_t___vtable;
  *((_QWORD *)v3 - 7) = diff_details_t___vtable_at__16;
  *(_QWORD *)v3 = &off_8710B0;
  QT::QStyledItemDelegate::~QStyledItemDelegate(v3);
  *(_QWORD *)(a1 + 24) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 24));
  QT::QTreeView::~QTreeView(v1);
  operator delete(v1, 0x58u);
}
