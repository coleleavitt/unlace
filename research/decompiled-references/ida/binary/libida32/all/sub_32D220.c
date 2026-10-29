int __fastcall sub_32D220(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD1FF0 = 0;
  qword_2CD1FF8 = 0;
  qword_2CD2000 = 0;
  qword_2CD1FE0 = (__int64)&off_2C4B8B0;
  qword_2CD1FE8 = (unsigned int)qword_2CD1FE8 & 0x80000000;
  qword_2CD2028 = 0x100000000LL;
  qword_2CD2008 = 0;
  qword_2CD2010 = 0;
  qword_2CD2018 = 0;
  qword_2CD2020 = (__int64)&unk_2CD2030;
  qword_2CD2038 = (__int64)&unk_2CD2050;
  qword_2CD2040 = 1;
  dword_2CD2048 = 0;
  byte_2CD204C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD2028;
  v3 = (unsigned int)qword_2CD2028 + 1LL;
  if ( v3 > HIDWORD(qword_2CD2028) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD2030 - 16, &unk_2CD2030, v3, 8);
    v2 = (unsigned int)qword_2CD2028;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD2020 + 8 * v2) = v1;
  word_2CD2068 = 0;
  xmmword_2CD2088 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD2028) = qword_2CD2028 + 1;
  qword_2CD2060 = (__int64)off_2C474E8;
  byte_2CD2058 = 0;
  qword_2CD1FE0 = (__int64)off_2C4B848;
  qword_2CD2070 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD1FE0, "enable-tbaa", 11);
  word_2CD2068 = 257;
  byte_2CD2058 = 1;
  BYTE2(qword_2CD1FE8) = BYTE2(qword_2CD1FE8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD1FE0);
  return __cxa_atexit(sub_1FEA450, &qword_2CD1FE0, &off_2AFC540);
}

