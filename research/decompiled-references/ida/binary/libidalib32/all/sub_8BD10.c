int sub_8BD10()
{
  _BYTE *v0; // rax

  sub_A4F60(&qword_250FE0);
  __cxa_atexit(sub_9C0C0, &qword_250FE0, &off_22E220);
  sub_B4BA0(&unk_250E60, sub_ABAC0);
  __cxa_atexit(sub_A64A0, &unk_250E60, &off_22E220);
  sub_B4BA0(&unk_250CE0, 0);
  __cxa_atexit(sub_A64A0, &unk_250CE0, &off_22E220);
  sub_B4BA0(&unk_250B60, 0);
  __cxa_atexit(sub_A64A0, &unk_250B60, &off_22E220);
  dword_250B28 = 0;
  qword_250B30 = 0;
  qword_250B38 = (__int64)&dword_250B28;
  qword_250B40 = (__int64)&dword_250B28;
  qword_250B48 = 0;
  __cxa_atexit(sub_9CA10, &dword_250B28 - 2, &off_22E220);
  qword_250AE0 = 0xFFFFFFFFLL;
  qword_250AE8 = 0xFFFFFFFF00000000LL;
  qword_250AF0 = 0xFFFFFFFF00000000LL;
  *(_OWORD *)&n = 0;
  qword_250AC0 = 88;
  qword_250AC8 = nullptr;
  qword_250AF8 = 4;
  qword_250B00 = 9;
  qword_250B08 = 0xFFFFFFFF00000000LL;
  dword_250B10 = 0;
  __cxa_atexit(sub_9B850, &qword_250AC0, &off_22E220);
  xmmword_250A88 = 0;
  qword_250A80 = 0;
  __cxa_atexit(sub_9C140, &qword_250A80, &off_22E220);
  qword_250A60 = nullptr;
  xmmword_250A68 = 0;
  v0 = (_BYTE *)qvector_reserve();
  qword_250A60 = v0;
  *(_QWORD *)&xmmword_250A68 = 6;
  *(_DWORD *)v0 = 1920216618;
  v0[4] = 99;
  *((_BYTE *)qword_250A60 + 5) = 0;
  __cxa_atexit(sub_91BF0, &qword_250A60, &off_22E220);
  qword_250A38 = (__int64)&dword_250A28;
  dword_250A28 = 0;
  qword_250A30 = nullptr;
  qword_250A40 = (__int64)&dword_250A28;
  qword_250A48 = 0;
  __cxa_atexit(sub_9C810, &dword_250A28 - 2, &off_22E220);
  qword_2509F8 = (__int64)&dword_2509E8;
  dword_2509E8 = 0;
  qword_2509F0 = nullptr;
  qword_250A00 = (__int64)&dword_2509E8;
  qword_250A08 = 0;
  __cxa_atexit(sub_9CA10, &dword_2509E8 - 2, &off_22E220);
  dword_2509A8 = 0;
  qword_2509B8 = (__int64)&dword_2509A8;
  qword_2509B0 = nullptr;
  qword_2509C0 = (__int64)&dword_2509A8;
  qword_2509C8 = 0;
  return __cxa_atexit(sub_9CA10, &dword_2509A8 - 2, &off_22E220);
}

