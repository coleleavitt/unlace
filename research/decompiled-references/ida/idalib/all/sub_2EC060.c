int sub_2EC060()
{
  __int64 v0; // rax

  v0 = qmutex_create();
  dest = nullptr;
  qword_2CCB4C0 = v0;
  xmmword_2CCB4A8 = 0;
  return __cxa_atexit(sub_387760, &dest, &off_2B25620);
}
