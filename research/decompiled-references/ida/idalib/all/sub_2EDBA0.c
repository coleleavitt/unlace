int sub_2EDBA0()
{
  __int64 v0; // rax

  v0 = qmutex_create();
  qword_2CD6F40 = 0;
  qword_2CD6F60 = v0;
  xmmword_2CD6F48 = 0;
  return __cxa_atexit(sub_84FD60, &qword_2CD6F40, &off_2B25620);
}
