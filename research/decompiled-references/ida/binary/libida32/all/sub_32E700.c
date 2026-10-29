int sub_32E700()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Disable autoupgrade of debug info");
  qword_2CD2A00 = (__int64)&unk_2CD2A10;
  v1 = v0;
  qword_2CD29D0 = 0;
  qword_2CD29D8 = 0;
  qword_2CD29E0 = 0;
  qword_2CD29C0 = (__int64)&off_2C4B8B0;
  qword_2CD29C8 = (unsigned int)qword_2CD29C8 & 0x80000000;
  qword_2CD2A08 = 0x100000000LL;
  qword_2CD29E8 = 0;
  qword_2CD29F0 = 0;
  qword_2CD29F8 = 0;
  qword_2CD2A18 = (__int64)&unk_2CD2A30;
  qword_2CD2A20 = 1;
  dword_2CD2A28 = 0;
  byte_2CD2A2C = 1;
  v2 = sub_21ED2B0("Disable autoupgrade of debug info");
  v3 = (unsigned int)qword_2CD2A08;
  v4 = (unsigned int)qword_2CD2A08 + 1LL;
  if ( v4 > HIDWORD(qword_2CD2A08) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CD2A10 - 16, &unk_2CD2A10, v4, 8);
    v3 = (unsigned int)qword_2CD2A08;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CD2A00 + 8 * v3) = v2;
  word_2CD2A48 = 0;
  LODWORD(qword_2CD2A08) = qword_2CD2A08 + 1;
  xmmword_2CD2A68 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  qword_2CD2A40 = (__int64)off_2C474E8;
  byte_2CD2A38 = 0;
  qword_2CD29C0 = (__int64)off_2C4B848;
  qword_2CD2A50 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD29C0, "disable-auto-upgrade-debug-info", 31);
  qword_2CD29E8 = v1;
  qword_2CD29E0 = (__int64)"Disable autoupgrade of debug info";
  sub_21F4400(&qword_2CD29C0);
  return __cxa_atexit(sub_1FEA450, &qword_2CD29C0, &off_2AFC540);
}

