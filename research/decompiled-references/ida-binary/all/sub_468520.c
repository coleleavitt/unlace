void __fastcall sub_468520(_QWORD *a1)
{
  QT::QSplitter *v1; // r12
  QT::QObject *v3; // rdi

  v1 = (QT::QSplitter *)(a1 - 2);
  *a1 = listing_host_t___vtable_at__16;
  v3 = (QT::QObject *)(a1 + 13);
  *((_QWORD *)v3 - 15) = &listing_host_t___vtable;
  *(_QWORD *)v3 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(v3);
  a1[8] = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 8));
  a1[3] = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 3));
  QT::QSplitter::~QSplitter(v1);
  operator delete(v1, 0xB0u);
}
