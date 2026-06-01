__int64 __fastcall sub_4141F0(QT::QObject *a1, QT::QObject *a2)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbp
  __int64 result; // rax

  QT::QObject::QObject(a1, a2);
  *(_QWORD *)a1 = &kernel_notification_hub_t___vtable;
  v2 = (_QWORD *)operator new(0x18u);
  v2[1] = 0;
  *v2 = kernel_notification_hub_t::idb_listener_impl_t___vtable;
  v2[2] = a1;
  hook_event_listener(3, v2, 0, 1);
  *((_QWORD *)a1 + 2) = v2;
  v3 = (_QWORD *)operator new(0x18u);
  v3[1] = 0;
  v3[2] = a1;
  *v3 = kernel_notification_hub_t::idp_listener_impl_t___vtable;
  result = hook_event_listener(0, v3, 0, 1);
  *((_QWORD *)a1 + 3) = v3;
  return result;
}
