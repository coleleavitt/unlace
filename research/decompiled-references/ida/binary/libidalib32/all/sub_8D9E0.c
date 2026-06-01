int sub_8D9E0()
{
  dword_252EC8 = 0;
  qword_252ED0 = 0;
  qword_252ED8 = (__int64)&dword_252EC8;
  qword_252EE0 = (__int64)&dword_252EC8;
  qword_252EE8 = 0;
  return __cxa_atexit(sub_140EF0, &dword_252EC8 - 2, &off_22E220);
}

