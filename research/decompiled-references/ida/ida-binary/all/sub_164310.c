int sub_164310()
{
  __int64 v1; // [rsp+0h] [rbp-18h]

  xmmword_8CB528 = 0;
  qword_8CB520 = 0;
  __cxa_atexit(sub_1E67B0, &qword_8CB520, &off_85BC80);
  xmmword_8CB4F8 = 0;
  qword_8CB4F0 = 0;
  __cxa_atexit(sub_1E67E0, &qword_8CB4F0, &off_85BC80);
  xmmword_8CB4A8 = 0;
  qword_8CB4C0 = (__int64)&idaplace_t___vtable;
  qword_8CB4A0 = 0;
  __cxa_atexit(sub_1E6780, &qword_8CB4A0, &off_85BC80);
  QT::QObject::QObject((QT::QObject *)&qword_8CB480, nullptr);
  qword_8CB490 = 0;
  qword_8CB480 = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)&qword_8CB480, v1);
  return __cxa_atexit(object_lifecycle_monitor_t__::vfunc_3, &qword_8CB480, &off_85BC80);
}
