int sub_164E90()
{
  QT::QObject::QObject((QT::QObject *)&qword_8CC800, nullptr);
  xmmword_8CC810 = -1;
  xmmword_8CC820 = (__int128)_mm_load_si128((const __m128i *)&xmmword_5DC360);
  qword_8CC800 = &ea_navigation_data_t___vtable;
  __cxa_atexit(ea_navigation_data_t__::vfunc_3, &qword_8CC800, &off_85BC80);
  xmmword_8CC7D8 = 0;
  qword_8CC7D0 = 0;
  __cxa_atexit(sub_27CFA0, &qword_8CC7D0, &off_85BC80);
  qword_8CC7A0 = 0;
  xmmword_8CC7A8 = 0;
  qword_8CC7B8 = -1;
  return __cxa_atexit(sub_27CF70, &qword_8CC7A0, &off_85BC80);
}
