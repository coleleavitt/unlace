int __fastcall sub_32D820(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD22D0 = 0;
  qword_2CD22D8 = 0;
  qword_2CD22E0 = 0;
  qword_2CD22C0 = (__int64)&off_2C4B8B0;
  qword_2CD22C8 = (unsigned int)qword_2CD22C8 & 0x80000000;
  qword_2CD2308 = 0x100000000LL;
  qword_2CD22E8 = 0;
  qword_2CD22F0 = 0;
  qword_2CD22F8 = 0;
  qword_2CD2300 = (__int64)&unk_2CD2310;
  qword_2CD2318 = (__int64)&unk_2CD2330;
  qword_2CD2320 = 1;
  dword_2CD2328 = 0;
  byte_2CD232C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD2308;
  v3 = (unsigned int)qword_2CD2308 + 1LL;
  if ( v3 > HIDWORD(qword_2CD2308) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD2310 - 16, &unk_2CD2310, v3, 8);
    v2 = (unsigned int)qword_2CD2308;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD2300 + 8 * v2) = v1;
  xmmword_2CD2368 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CD2308) = qword_2CD2308 + 1;
  qword_2CD2340 = (__int64)off_2C472D0;
  dword_2CD2338 = 0;
  byte_2CD234C = 0;
  qword_2CD22C0 = (__int64)off_2C4B710;
  dword_2CD2348 = 0;
  qword_2CD2350 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CD22C0, "max-interleave-group-factor", 27);
  qword_2CD22E8 = 60;
  dword_2CD2338 = 8;
  byte_2CD234C = 1;
  dword_2CD2348 = 8;
  BYTE2(qword_2CD22C8) = BYTE2(qword_2CD22C8) & 0x9F | 0x20;
  qword_2CD22E0 = (__int64)"Maximum factor for an interleaved access group (default = 8)";
  sub_21F4400(&qword_2CD22C0);
  return __cxa_atexit(sub_1FC9520, &qword_2CD22C0, &off_2AFC540);
}

