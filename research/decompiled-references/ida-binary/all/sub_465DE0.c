void __fastcall CIMBridge__::vfunc_3(QT::QObject *this)
{
  QT::QObject *v2; // rdi

  v2 = (QT::QObject *)((char *)this + 24);
  *((_QWORD *)v2 - 3) = &CIMBridge___vtable;
  *(_QWORD *)v2 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(v2);
  QT::QObject::~QObject(this);
}
