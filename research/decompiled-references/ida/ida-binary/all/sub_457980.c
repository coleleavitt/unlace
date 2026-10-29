void __fastcall sub_457980(__int64 a1)
{
  QT::QObject *v2; // rdi

  v2 = (QT::QObject *)(a1 + 24);
  *((_QWORD *)v2 - 3) = standalone_dirtree_widget_host_t___vtable_at__16;
  *((_QWORD *)v2 - 5) = &standalone_dirtree_widget_host_t___vtable;
  *(_QWORD *)v2 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(v2);
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 16));
}
