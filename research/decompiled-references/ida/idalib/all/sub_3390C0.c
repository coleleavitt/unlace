int sub_3390C0()
{
  _DWORD v1[80]; // [rsp+0h] [rbp-168h] BYREF
  _BYTE v2[40]; // [rsp+140h] [rbp-28h] BYREF

  qword_2D000E8 = 0x800000000LL;
  memset(v1, 0, 0x118u);
  v1[0] = 1;
  v1[10] = 2;
  v1[20] = 6;
  v1[30] = 4;
  v1[40] = 32;
  v1[50] = 3;
  v1[60] = 5;
  qword_2D000E0 = (__int64)&unk_2D000F0;
  sub_21E7BF0(&qword_2D000E0, v1, &v1[70]);
  memset(v1, 0, sizeof(v1));
  v1[0] = 1;
  v1[10] = 2;
  v1[20] = 4;
  v1[30] = 32;
  v1[40] = 4;
  v1[50] = 32;
  v1[60] = 3;
  v1[70] = 5;
  qword_2D00230 = (__int64)&unk_2D00240;
  qword_2D00238 = 0x800000000LL;
  sub_21E7BF0(&qword_2D00230, v1, v2);
  return __cxa_atexit(sub_21E7BB0, &qword_2D000E0, &off_2B25620);
}
