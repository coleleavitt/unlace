int sub_2EA7E0()
{
  __int64 v0; // rax

  v0 = qmutex_create();
  qword_2CAD020 = 0;
  qword_2CAD040 = v0;
  xmmword_2CAD028 = 0;
  return __cxa_atexit(sub_82C400, &qword_2CAD020, &off_2AFC540);
}

