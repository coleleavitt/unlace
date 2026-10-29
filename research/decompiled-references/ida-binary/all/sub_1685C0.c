int sub_1685C0()
{
  if ( !byte_8D1E00 )
  {
    byte_8D1E00 = 1;
    __cxa_atexit(sub_4E22B0, &unk_8D1E80, &off_85BC80);
  }
  qword_8D1E60 = 0;
  xmmword_8D1E68 = 0;
  __cxa_atexit(sub_4DC920, &qword_8D1E60, &off_85BC80);
  xmmword_8D1E48 = 0;
  qword_8D1E40 = 0;
  __cxa_atexit(sub_1E6780, &qword_8D1E40, &off_85BC80);
  xmmword_8D1E28 = 0;
  qword_8D1E20 = 0;
  __cxa_atexit(sub_1E6780, &qword_8D1E20, &off_85BC80);
  QT::QProxyStyle::QProxyStyle((QT::QProxyStyle *)&qword_8D1E10, nullptr);
  qword_8D1E10 = &off_894628;
  return __cxa_atexit(sub_4DCA00, &qword_8D1E10, &off_85BC80);
}
