int __fastcall sub_3329C0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD4890 = 0;
  qword_2CD4898 = 0;
  qword_2CD48A0 = 0;
  qword_2CD4880 = (__int64)&off_2C4B8B0;
  qword_2CD4888 = (unsigned int)qword_2CD4888 & 0x80000000;
  qword_2CD48C8 = 0x100000000LL;
  qword_2CD48A8 = 0;
  qword_2CD48B0 = 0;
  qword_2CD48B8 = 0;
  qword_2CD48C0 = (__int64)&unk_2CD48D0;
  qword_2CD48D8 = (__int64)&unk_2CD48F0;
  qword_2CD48E0 = 1;
  dword_2CD48E8 = 0;
  byte_2CD48EC = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD48C8;
  v3 = (unsigned int)qword_2CD48C8 + 1LL;
  if ( v3 > HIDWORD(qword_2CD48C8) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD48D0 - 16, &unk_2CD48D0, v3, 8);
    v2 = (unsigned int)qword_2CD48C8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD48C0 + 8 * v2) = v1;
  word_2CD4908 = 0;
  LODWORD(qword_2CD48C8) = qword_2CD48C8 + 1;
  xmmword_2CD4928 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  qword_2CD4900 = (__int64)off_2C474E8;
  byte_2CD48F8 = 0;
  qword_2CD4880 = (__int64)off_2C4B848;
  qword_2CD4910 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD4880, "safepoint-ir-verifier-print-only", 32);
  byte_2CD48F8 = 0;
  word_2CD4908 = 256;
  sub_21F4400(&qword_2CD4880);
  return __cxa_atexit(sub_1FEA450, &qword_2CD4880, &off_2AFC540);
}

