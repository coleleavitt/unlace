int sub_335D00()
{
  _DWORD v1[80]; // [rsp+0h] [rbp-168h] BYREF
  _BYTE v2[40]; // [rsp+140h] [rbp-28h] BYREF

  qword_2CD61C8 = 0x800000000LL;
  memset(v1, 0, 0x118u);
  v1[0] = 1;
  v1[10] = 2;
  v1[20] = 6;
  v1[30] = 4;
  v1[40] = 32;
  v1[50] = 3;
  v1[60] = 5;
  qword_2CD61C0 = (__int64)&unk_2CD61D0;
  sub_21C3EB0(&qword_2CD61C0, v1, &v1[70]);
  memset(v1, 0, sizeof(v1));
  v1[0] = 1;
  v1[10] = 2;
  v1[20] = 4;
  v1[30] = 32;
  v1[40] = 4;
  v1[50] = 32;
  v1[60] = 3;
  v1[70] = 5;
  qword_2CD6310 = (__int64)&unk_2CD6320;
  qword_2CD6318 = 0x800000000LL;
  sub_21C3EB0(&qword_2CD6310, v1, v2);
  return __cxa_atexit(sub_21C3E70, &qword_2CD61C0, &off_2AFC540);
}

