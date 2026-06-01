void __fastcall sub_4CBCB0(double a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rbx

  v5 = qword_8D1DC8;
  if ( qword_8D1DC8 )
  {
    sub_4CBA50((__int64)qword_8D1DC8, a3, a4, a5, a1);
    if ( v5 == qword_8D1DC8 )
      qword_8D1DC8 = nullptr;
    v5[15] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)(v5 + 15));
    v5[9] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)(v5 + 9));
    v5[5] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)(v5 + 5));
    v5[1] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)(v5 + 1));
    operator delete(v5, 0xA0u);
  }
}
