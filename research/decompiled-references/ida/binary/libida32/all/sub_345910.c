int __fastcall sub_345910(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CDE4F0 = 0;
  qword_2CDE4F8 = 0;
  qword_2CDE500 = 0;
  qword_2CDE4E0 = (__int64)&off_2C4B8B0;
  qword_2CDE4E8 = (unsigned int)qword_2CDE4E8 & 0x80000000;
  qword_2CDE528 = 0x100000000LL;
  qword_2CDE508 = 0;
  qword_2CDE510 = 0;
  qword_2CDE518 = 0;
  qword_2CDE520 = (__int64)&unk_2CDE530;
  qword_2CDE538 = (__int64)&unk_2CDE550;
  qword_2CDE540 = 1;
  dword_2CDE548 = 0;
  byte_2CDE54C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CDE528;
  v3 = (unsigned int)qword_2CDE528 + 1LL;
  if ( v3 > HIDWORD(qword_2CDE528) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CDE530 - 16, &unk_2CDE530, v3, 8);
    v2 = (unsigned int)qword_2CDE528;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CDE520 + 8 * v2) = v1;
  word_2CDE568 = 0;
  xmmword_2CDE588 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CDE528) = qword_2CDE528 + 1;
  qword_2CDE560 = (__int64)off_2C474E8;
  byte_2CDE558 = 0;
  qword_2CDE4E0 = (__int64)off_2C4B848;
  qword_2CDE570 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CDE4E0, "enable-memcpyopt-without-libcalls", 33);
  qword_2CDE508 = 48;
  BYTE2(qword_2CDE4E8) = BYTE2(qword_2CDE4E8) & 0x9F | 0x20;
  qword_2CDE500 = (__int64)"Enable memcpyopt even when libcalls are disabled";
  sub_21F4400(&qword_2CDE4E0);
  return __cxa_atexit(sub_1FEA450, &qword_2CDE4E0, &off_2AFC540);
}

