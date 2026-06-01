void __fastcall standalone_dirtree_widget_host_t__::vfunc_4(QT::QWidget *this)
{
  QT::QObject *v2; // rdi

  v2 = (QT::QWidget *)((char *)this + 40);
  *((_QWORD *)v2 - 5) = &standalone_dirtree_widget_host_t___vtable;
  *((_QWORD *)v2 - 3) = standalone_dirtree_widget_host_t___vtable_at__16;
  *(_QWORD *)v2 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(v2);
  QT::QWidget::~QWidget(this);
  operator delete(this, 0x48u);
}
