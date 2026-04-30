int sub_163810()
{
  xmmword_8CACB8 = 0;
  qword_8CACD0 = -1;
  qword_8CACD8 = 0;
  dword_8CACE0 = 0;
  qword_8CACB0 = 0;
  __cxa_atexit(sub_1994A0, &qword_8CACB0, &off_85BC80);
  byte_8CAC9C = 0;
  dword_8CAC98 = 1;
  qword_8CAC90 = (__int64)add_bpt_ah_t___vtable;
  __cxa_atexit(nullsub_22, &qword_8CAC90, &off_85BC80);
  byte_8CAC8C = 0;
  dword_8CAC88 = 1;
  qword_8CAC80 = (__int64)del_bpt_ah_t___vtable;
  __cxa_atexit(nullsub_21, &qword_8CAC80, &off_85BC80);
  qword_8CAC70 = (__int64)enable_disable_bpt_ah_t___vtable;
  dword_8CAC78 = 1;
  word_8CAC7C = 257;
  __cxa_atexit(nullsub_20, &qword_8CAC70, &off_85BC80);
  word_8CAC6C = 1;
  qword_8CAC60 = (__int64)enable_disable_bpt_ah_t___vtable;
  dword_8CAC68 = 1;
  __cxa_atexit(nullsub_20, &qword_8CAC60, &off_85BC80);
  sub_268310(&qword_8CAC20, "Breakpoints", 0, 0, 1);
  qword_8CAC20 = (__int64)&breakpoints_desktop_widget_factory_t___vtable;
  return __cxa_atexit(breakpoints_desktop_widget_factory_t__::vfunc_0, &qword_8CAC20, &off_85BC80);
}
