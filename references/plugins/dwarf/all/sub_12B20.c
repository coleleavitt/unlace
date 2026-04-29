int sub_12B20()
{
  dword_CC8A8 = 0;
  qword_CC8B0 = 0;
  qword_CC8B8 = (__int64)&dword_CC8A8;
  qword_CC8C0 = (__int64)&dword_CC8A8;
  qword_CC8C8 = 0;
  __cxa_atexit(sub_543B0, &dword_CC8A8 - 2, &off_C71A0);
  qword_CB430 = 0;
  xmmword_CB438 = 0;
  return __cxa_atexit(sub_52F00, &qword_CB430, &off_C71A0);
}
