void __fastcall sub_4CBB30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  sub_4CBA50((__int64)a1, a2, a3, a4, a5);
  if ( a1 )
  {
    if ( a1 == qword_8D1DC8 )
      qword_8D1DC8 = nullptr;
    a1[15] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)(a1 + 15));
    a1[9] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)(a1 + 9));
    a1[5] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)(a1 + 5));
    a1[1] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)(a1 + 1));
    operator delete(a1, 0xA0u);
  }
}
