int sub_1684D0()
{
  __int64 v1; // [rsp+0h] [rbp-18h]

  QT::QObject::QObject((QT::QObject *)&qword_8D1DA0, nullptr);
  qword_8D1DB0 = nullptr;
  qword_8D1DA0 = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)&qword_8D1DA0, v1);
  __cxa_atexit(object_lifecycle_monitor_t__::vfunc_3, &qword_8D1DA0, &off_85BC80);
  xmmword_8D1D78 = 0;
  qword_8D1D70 = 0;
  __cxa_atexit(sub_4C4750, &qword_8D1D70, &off_85BC80);
  __cxa_atexit(sub_4C4C20, &unk_8D1D50, &off_85BC80);
  return __cxa_atexit(sub_4C4930, &unk_8D1D40, &off_85BC80);
}
