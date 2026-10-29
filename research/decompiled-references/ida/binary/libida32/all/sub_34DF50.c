int __fastcall sub_34DF50(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CE3350 = 0;
  qword_2CE3358 = 0;
  qword_2CE3360 = 0;
  qword_2CE3340 = (__int64)&off_2C4B8B0;
  qword_2CE3348 = (unsigned int)qword_2CE3348 & 0x80000000;
  qword_2CE3388 = 0x100000000LL;
  qword_2CE3368 = 0;
  qword_2CE3370 = 0;
  qword_2CE3378 = 0;
  qword_2CE3380 = (__int64)&unk_2CE3390;
  qword_2CE3398 = (__int64)&unk_2CE33B0;
  qword_2CE33A0 = 1;
  dword_2CE33A8 = 0;
  byte_2CE33AC = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CE3388;
  v3 = (unsigned int)qword_2CE3388 + 1LL;
  if ( v3 > HIDWORD(qword_2CE3388) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CE3390 - 16, &unk_2CE3390, v3, 8);
    v2 = (unsigned int)qword_2CE3388;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CE3380 + 8 * v2) = v1;
  xmmword_2CE33E8 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CE3388) = qword_2CE3388 + 1;
  qword_2CE33C0 = (__int64)off_2C472D0;
  dword_2CE33B8 = 0;
  byte_2CE33CC = 0;
  qword_2CE3340 = (__int64)off_2C4B710;
  dword_2CE33C8 = 0;
  qword_2CE33D0 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CE3340, "guards-predicate-pass-branch-weight", 35);
  dword_2CE33B8 = (int)&stru_100000;
  byte_2CE33CC = 1;
  dword_2CE33C8 = (int)&stru_100000;
  qword_2CE3368 = 100;
  BYTE2(qword_2CE3348) = BYTE2(qword_2CE3348) & 0x9F | 0x20;
  qword_2CE3360 = (__int64)"The probability of a guard failing is assumed to be the reciprocal of this value (default = 1 << 20)";
  sub_21F4400(&qword_2CE3340);
  return __cxa_atexit(sub_1FC9520, &qword_2CE3340, &off_2AFC540);
}

