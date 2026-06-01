void __fastcall sub_45F010(__int64 a1, QT::QSplitter *a2)
{
  void (__fastcall *v2)(QT::QSplitter *); // rax

  v2 = *(void (__fastcall **)(QT::QSplitter *))(*(_QWORD *)a2 + 24LL);
  if ( v2 == listing_host_t__::vfunc_3 )
  {
    *(_QWORD *)a2 = &listing_host_t___vtable;
    *((_QWORD *)a2 + 2) = listing_host_t___vtable_at__16;
    *((_QWORD *)a2 + 15) = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QSplitter *)((char *)a2 + 120));
    *((_QWORD *)a2 + 10) = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QSplitter *)((char *)a2 + 80));
    *((_QWORD *)a2 + 5) = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QSplitter *)((char *)a2 + 40));
    QT::QSplitter::~QSplitter(a2);
  }
  else
  {
    v2(a2);
  }
}
