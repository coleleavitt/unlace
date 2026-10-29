int sub_15E50()
{
  dword_1659E8 = 0;
  qword_1659F0 = 0;
  qword_1659F8 = (__int64)&dword_1659E8;
  qword_165A00 = (__int64)&dword_1659E8;
  qword_165A08 = 0;
  return __cxa_atexit(func, &dword_1659E8 - 2, &lpdso_handle);
}

