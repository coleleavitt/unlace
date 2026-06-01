void __fastcall active_corewidget_t__::vfunc_3(QT::QObject *a1)
{
  QT::QObject *v2; // rbx
  QT::QObject *v3; // rdi

  v2 = (QT::QObject *)((char *)a1 + 96);
  *(_QWORD *)a1 = &active_corewidget_t___vtable;
  do
  {
    *(_QWORD *)v2 = &object_lifecycle_monitor_t___vtable;
    v3 = v2;
    v2 = (QT::QObject *)((char *)v2 - 32);
    QT::QObject::~QObject(v3);
  }
  while ( v2 != a1 );
  *(_QWORD *)v2 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(v2);
}
