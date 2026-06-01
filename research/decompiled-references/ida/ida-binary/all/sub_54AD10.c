void __fastcall sub_54AD10(__int64 a1, QT::QObject *a2)
{
  void (__fastcall *v2)(QT::QObject *); // rax

  v2 = *(void (__fastcall **)(QT::QObject *))(*(_QWORD *)a2 + 24LL);
  if ( v2 == quick_filter_input_monitor_t__::vfunc_3 )
  {
    *(_QWORD *)a2 = &quick_filter_input_monitor_t___vtable;
    QT::QObject::~QObject(a2);
  }
  else
  {
    v2(a2);
  }
}
