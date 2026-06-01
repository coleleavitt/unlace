int __fastcall sub_334A90(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD5970 = 0;
  qword_2CD5978 = 0;
  qword_2CD5980 = 0;
  qword_2CD5960 = (__int64)&off_2C4B8B0;
  qword_2CD5968 = (unsigned int)qword_2CD5968 & 0x80000000;
  qword_2CD59A8 = 0x100000000LL;
  qword_2CD5988 = 0;
  qword_2CD5990 = 0;
  qword_2CD5998 = 0;
  qword_2CD59A0 = (__int64)&unk_2CD59B0;
  qword_2CD59B8 = (__int64)&unk_2CD59D0;
  qword_2CD59C0 = 1;
  dword_2CD59C8 = 0;
  byte_2CD59CC = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD59A8;
  v3 = (unsigned int)qword_2CD59A8 + 1LL;
  if ( v3 > HIDWORD(qword_2CD59A8) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD59B0 - 16, &unk_2CD59B0, v3, 8);
    v2 = (unsigned int)qword_2CD59A8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD59A0 + 8 * v2) = v1;
  word_2CD59E8 = 0;
  LODWORD(qword_2CD59A8) = qword_2CD59A8 + 1;
  xmmword_2CD5A08 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  qword_2CD59E0 = (__int64)off_2C474E8;
  byte_2CD59D8 = 0;
  qword_2CD5960 = (__int64)off_2C4B848;
  qword_2CD59F0 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD5960, "ctx-prof-include-empty", 22);
  word_2CD59E8 = 256;
  byte_2CD59D8 = 0;
  qword_2CD5980 = (__int64)"Also write profiles with all-zero counters. Intended for testing/debugging.";
  qword_2CD5988 = 75;
  sub_21F4400(&qword_2CD5960);
  return __cxa_atexit(sub_1FEA450, &qword_2CD5960, &off_2AFC540);
}

