void __fastcall listing_host_child_monitor_t__::vfunc_4(QT::QObject *a1)
{
  *(_QWORD *)a1 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(a1);
  operator delete(a1, 0x28u);
}
