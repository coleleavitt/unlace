void __fastcall sub_468440(__int64 a1)
{
  QT::QObject *v2; // rdi

  v2 = (QT::QObject *)(a1 + 104);
  *((_QWORD *)v2 - 13) = listing_host_t___vtable_at__16;
  *((_QWORD *)v2 - 15) = &listing_host_t___vtable;
  *(_QWORD *)v2 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(v2);
  *(_QWORD *)(a1 + 64) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 64));
  *(_QWORD *)(a1 + 24) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 24));
  QT::QSplitter::~QSplitter((QT::QSplitter *)(a1 - 16));
}
