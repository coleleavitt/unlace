int sub_8BDC0()
{
  _BYTE *v0; // rax

  sub_A53E0(&qword_2520C0);
  __cxa_atexit(sub_9C1E0, &qword_2520C0, &off_22F2A0);
  sub_B5220(&unk_251F20, sub_AC100);
  __cxa_atexit(sub_A69A0, &unk_251F20, &off_22F2A0);
  sub_B5220(&unk_251D80, 0);
  __cxa_atexit(sub_A69A0, &unk_251D80, &off_22F2A0);
  sub_B5220(&unk_251BE0, 0);
  __cxa_atexit(sub_A69A0, &unk_251BE0, &off_22F2A0);
  dword_251BA8 = 0;
  qword_251BB0 = 0;
  qword_251BB8 = (__int64)&dword_251BA8;
  qword_251BC0 = (__int64)&dword_251BA8;
  qword_251BC8 = 0;
  __cxa_atexit(sub_9CB30, &dword_251BA8 - 2, &off_22F2A0);
  *(_OWORD *)&n = 0;
  qword_251B70 = 0xFFFFFFFFLL;
  qword_251B40 = 96;
  qword_251B48 = nullptr;
  qword_251B60 = -1;
  qword_251B68 = 0;
  qword_251B78 = -1;
  qword_251B80 = 4;
  qword_251B88 = 9;
  qword_251B90 = 0xFFFFFFFF00000000LL;
  qword_251B98 = 0;
  __cxa_atexit(sub_9B950, &qword_251B40, &off_22F2A0);
  xmmword_251B08 = 0;
  qword_251B00 = 0;
  __cxa_atexit(sub_9C260, &qword_251B00, &off_22F2A0);
  qword_251AE0 = nullptr;
  xmmword_251AE8 = 0;
  v0 = (_BYTE *)qvector_reserve();
  qword_251AE0 = v0;
  *(_QWORD *)&xmmword_251AE8 = 6;
  *(_DWORD *)v0 = 1920216618;
  v0[4] = 99;
  *((_BYTE *)qword_251AE0 + 5) = 0;
  __cxa_atexit(sub_91CD0, &qword_251AE0, &off_22F2A0);
  qword_251AB8 = (__int64)&dword_251AA8;
  dword_251AA8 = 0;
  qword_251AB0 = nullptr;
  qword_251AC0 = (__int64)&dword_251AA8;
  qword_251AC8 = 0;
  __cxa_atexit(sub_9C930, &dword_251AA8 - 2, &off_22F2A0);
  qword_251A78 = (__int64)&dword_251A68;
  dword_251A68 = 0;
  qword_251A70 = nullptr;
  qword_251A80 = (__int64)&dword_251A68;
  qword_251A88 = 0;
  __cxa_atexit(sub_9CB30, &dword_251A68 - 2, &off_22F2A0);
  dword_251A28 = 0;
  qword_251A38 = (__int64)&dword_251A28;
  qword_251A30 = nullptr;
  qword_251A40 = (__int64)&dword_251A28;
  qword_251A48 = 0;
  return __cxa_atexit(sub_9CB30, &dword_251A28 - 2, &off_22F2A0);
}

