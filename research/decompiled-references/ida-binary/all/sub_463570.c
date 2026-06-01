void __fastcall sub_463570(__int64 a1)
{
  QT::QStyledItemDelegate *v2; // rdi

  v2 = (QT::QStyledItemDelegate *)(a1 + 56);
  *((_QWORD *)v2 - 9) = &diff_details_t___vtable;
  *((_QWORD *)v2 - 7) = diff_details_t___vtable_at__16;
  *(_QWORD *)v2 = &off_8710B0;
  QT::QStyledItemDelegate::~QStyledItemDelegate(v2);
  *(_QWORD *)(a1 + 24) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 24));
  QT::QTreeView::~QTreeView((QT::QTreeView *)(a1 - 16));
}
