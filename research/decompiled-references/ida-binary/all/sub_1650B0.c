int sub_1650B0()
{
  __int64 v1; // [rsp+0h] [rbp-18h]

  QT::QObject::QObject((QT::QObject *)&qword_8CC980, nullptr);
  qword_8CC990 = 0;
  qword_8CC980 = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)&qword_8CC980, v1);
  __cxa_atexit(object_lifecycle_monitor_t__::vfunc_3, &qword_8CC980, &off_85BC80);
  sub_4B9740(&qword_8CC940, "Graph overview", 1);
  qword_8CC940 = (__int64)&graph_overview_desktop_widget_factory_t___vtable;
  return __cxa_atexit(graph_overview_desktop_widget_factory_t__::vfunc_0, &qword_8CC940, &off_85BC80);
}
