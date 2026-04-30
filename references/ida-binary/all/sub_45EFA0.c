void __fastcall sub_45EFA0(__int64 a1)
{
  QT::QSplitter *v1; // r12
  QT::QObject *v3; // rdi

  v1 = (QT::QSplitter *)(a1 - 16);
  v3 = (QT::QObject *)(a1 + 104);
  *((_QWORD *)v3 - 15) = &listing_host_t___vtable;
  *((_QWORD *)v3 - 13) = listing_host_t___vtable_at__16;
  *(_QWORD *)v3 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(v3);
  *(_QWORD *)(a1 + 64) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 64));
  *(_QWORD *)(a1 + 24) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 24));
  QT::QSplitter::~QSplitter(v1);
  operator delete(v1, 0xB0u);
}
