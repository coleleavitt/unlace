unsigned __int64 __fastcall sub_54D620(double a1, __int64 a2, QT::QObject *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  const char *v5; // r8

  QT::QObject::QObject(a3, nullptr);
  *(_QWORD *)a3 = &object_lifecycle_monitor_t___vtable;
  *((_QWORD *)a3 + 2) = 0;
  return sub_478D00((char *)a3, 0, a1, v3, v4, v5);
}
