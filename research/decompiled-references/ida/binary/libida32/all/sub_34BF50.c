int __fastcall sub_34BF50(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CE1CD0 = 0;
  qword_2CE1CD8 = 0;
  qword_2CE1CE0 = 0;
  qword_2CE1CC0 = (__int64)&off_2C4B8B0;
  qword_2CE1CC8 = (unsigned int)qword_2CE1CC8 & 0x80000000;
  qword_2CE1D08 = 0x100000000LL;
  qword_2CE1CE8 = 0;
  qword_2CE1CF0 = 0;
  qword_2CE1CF8 = 0;
  qword_2CE1D00 = (__int64)&unk_2CE1D10;
  qword_2CE1D18 = (__int64)&unk_2CE1D30;
  qword_2CE1D20 = 1;
  dword_2CE1D28 = 0;
  byte_2CE1D2C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CE1D08;
  v3 = (unsigned int)qword_2CE1D08 + 1LL;
  if ( v3 > HIDWORD(qword_2CE1D08) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CE1D10 - 16, &unk_2CE1D10, v3, 8);
    v2 = (unsigned int)qword_2CE1D08;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CE1D00 + 8 * v2) = v1;
  xmmword_2CE1D68 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CE1D08) = qword_2CE1D08 + 1;
  qword_2CE1D40 = (__int64)off_2C472D0;
  dword_2CE1D38 = 0;
  byte_2CE1D4C = 0;
  qword_2CE1CC0 = (__int64)off_2C4B710;
  dword_2CE1D48 = 0;
  qword_2CE1D50 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CE1CC0, "max-deopt-or-unreachable-succ-check-depth", 41);
  dword_2CE1D38 = 8;
  byte_2CE1D4C = 1;
  dword_2CE1D48 = 8;
  qword_2CE1CE8 = 171;
  BYTE2(qword_2CE1CC8) = BYTE2(qword_2CE1CC8) & 0x9F | 0x20;
  qword_2CE1CE0 = (__int64)"Set the maximum path length when checking whether a basic block is followed by a block that e"
                           "ither has a terminating deoptimizing call or is terminated with an unreachable";
  sub_21F4400(&qword_2CE1CC0);
  return __cxa_atexit(sub_1FC9520, &qword_2CE1CC0, &off_2AFC540);
}

