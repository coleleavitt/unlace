int __fastcall sub_32D470(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD2150 = 0;
  qword_2CD2158 = 0;
  qword_2CD2160 = 0;
  qword_2CD2140 = (__int64)&off_2C4B8B0;
  qword_2CD2148 = (unsigned int)qword_2CD2148 & 0x80000000;
  qword_2CD2188 = 0x100000000LL;
  qword_2CD2168 = 0;
  qword_2CD2170 = 0;
  qword_2CD2178 = 0;
  qword_2CD2180 = (__int64)&unk_2CD2190;
  qword_2CD2198 = (__int64)&unk_2CD21B0;
  qword_2CD21A0 = 1;
  dword_2CD21A8 = 0;
  byte_2CD21AC = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD2188;
  v3 = (unsigned int)qword_2CD2188 + 1LL;
  if ( v3 > HIDWORD(qword_2CD2188) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD2190 - 16, &unk_2CD2190, v3, 8);
    v2 = (unsigned int)qword_2CD2188;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD2180 + 8 * v2) = v1;
  word_2CD21C8 = 0;
  xmmword_2CD21E8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD2188) = qword_2CD2188 + 1;
  qword_2CD21C0 = (__int64)off_2C474E8;
  byte_2CD21B8 = 0;
  qword_2CD2140 = (__int64)off_2C4B848;
  qword_2CD21D0 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD2140, "enable-scoped-noalias", 21);
  word_2CD21C8 = 257;
  byte_2CD21B8 = 1;
  BYTE2(qword_2CD2148) = BYTE2(qword_2CD2148) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD2140);
  return __cxa_atexit(sub_1FEA450, &qword_2CD2140, &off_2AFC540);
}

