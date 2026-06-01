void __fastcall diff_details_t__::vfunc_4(QT::QTreeView *this)
{
  QT::QStyledItemDelegate *v2; // rdi

  v2 = (QT::QTreeView *)((char *)this + 72);
  *((_QWORD *)v2 - 9) = &diff_details_t___vtable;
  *((_QWORD *)v2 - 7) = diff_details_t___vtable_at__16;
  *(_QWORD *)v2 = &off_8710B0;
  QT::QStyledItemDelegate::~QStyledItemDelegate(v2);
  *((_QWORD *)this + 5) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QTreeView *)((char *)this + 40));
  QT::QTreeView::~QTreeView(this);
  operator delete(this, 0x58u);
}
