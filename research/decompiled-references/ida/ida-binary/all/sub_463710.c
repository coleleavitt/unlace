void __fastcall sub_463710(__int64 a1, QT::QTreeView *a2)
{
  void (__fastcall *v2)(QT::QTreeView *); // rax

  v2 = *(void (__fastcall **)(QT::QTreeView *))(*(_QWORD *)a2 + 24LL);
  if ( v2 == diff_details_t__::vfunc_3 )
  {
    *(_QWORD *)a2 = &diff_details_t___vtable;
    *((_QWORD *)a2 + 2) = diff_details_t___vtable_at__16;
    *((_QWORD *)a2 + 9) = &off_8710B0;
    QT::QStyledItemDelegate::~QStyledItemDelegate((QT::QTreeView *)((char *)a2 + 72));
    *((_QWORD *)a2 + 5) = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QTreeView *)((char *)a2 + 40));
    QT::QTreeView::~QTreeView(a2);
  }
  else
  {
    v2(a2);
  }
}
