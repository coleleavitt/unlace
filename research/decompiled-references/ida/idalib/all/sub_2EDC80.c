int sub_2EDC80()
{
  dword_2CD72C8 = 0;
  qword_2CD72D0 = 0;
  qword_2CD72D8 = (__int64)&dword_2CD72C8;
  qword_2CD72E0 = (__int64)&dword_2CD72C8;
  qword_2CD72E8 = 0;
  return __cxa_atexit(sub_8F19A0, &dword_2CD72C8 - 2, &off_2B25620);
}
