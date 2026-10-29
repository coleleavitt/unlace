int __fastcall sub_34B230(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CE06B0 = 0;
  qword_2CE06B8 = 0;
  qword_2CE06C0 = 0;
  qword_2CE06A0 = (__int64)&off_2C4B8B0;
  qword_2CE06A8 = (unsigned int)qword_2CE06A8 & 0x80000000;
  qword_2CE06E8 = 0x100000000LL;
  qword_2CE06C8 = 0;
  qword_2CE06D0 = 0;
  qword_2CE06D8 = 0;
  qword_2CE06E0 = (__int64)&unk_2CE06F0;
  qword_2CE06F8 = (__int64)&unk_2CE0710;
  qword_2CE0700 = 1;
  dword_2CE0708 = 0;
  byte_2CE070C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CE06E8;
  v3 = (unsigned int)qword_2CE06E8 + 1LL;
  if ( v3 > HIDWORD(qword_2CE06E8) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CE06F0 - 16, &unk_2CE06F0, v3, 8);
    v2 = (unsigned int)qword_2CE06E8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CE06E0 + 8 * v2) = v1;
  word_2CE0728 = 0;
  xmmword_2CE0748 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CE06E8) = qword_2CE06E8 + 1;
  qword_2CE0720 = (__int64)off_2C474E8;
  byte_2CE0718 = 0;
  qword_2CE06A0 = (__int64)off_2C4B848;
  qword_2CE0730 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE06A0, "tre-disable-entrycount-recompute", 32);
  word_2CE0728 = 256;
  byte_2CE0718 = 0;
  qword_2CE06C8 = 94;
  BYTE2(qword_2CE06A8) = BYTE2(qword_2CE06A8) & 0x9F | 0x20;
  qword_2CE06C0 = (__int64)"Force disabling recomputing of function entry count, on successful tail recursion elimination.";
  sub_21F4400(&qword_2CE06A0);
  return __cxa_atexit(sub_1FEA450, &qword_2CE06A0, &off_2AFC540);
}

