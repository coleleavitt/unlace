void __fastcall IDAViewHost__::vfunc_3(QT::QSplitter *this)
{
  QT::QObject *v2; // rdi

  v2 = (QT::QSplitter *)((char *)this + 120);
  *((_QWORD *)v2 - 13) = listing_host_t___vtable_at__16;
  *((_QWORD *)v2 - 15) = &listing_host_t___vtable;
  *(_QWORD *)v2 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(v2);
  *((_QWORD *)this + 10) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QSplitter *)((char *)this + 80));
  *((_QWORD *)this + 5) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QSplitter *)((char *)this + 40));
  QT::QSplitter::~QSplitter(this);
}
