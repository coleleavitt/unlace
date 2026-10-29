int sub_2E8C90()
{
  __int64 v0; // rax

  v0 = qmutex_create();
  qword_2CA15A0 = nullptr;
  qword_2CA15C0 = v0;
  xmmword_2CA15A8 = 0;
  return __cxa_atexit(sub_383B10, &qword_2CA15A0, &off_2AFC540);
}

