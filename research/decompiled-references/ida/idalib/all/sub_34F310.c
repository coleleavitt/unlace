int __fastcall sub_34F310(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D0BBF0 = 0;
  qword_2D0BBF8 = 0;
  qword_2D0BC00 = 0;
  qword_2D0BBE0 = (__int64)&off_2C758B0;
  qword_2D0BBE8 = (unsigned int)qword_2D0BBE8 & 0x80000000;
  qword_2D0BC28 = 0x100000000LL;
  qword_2D0BC08 = 0;
  qword_2D0BC10 = 0;
  qword_2D0BC18 = 0;
  qword_2D0BC20 = (__int64)&unk_2D0BC30;
  qword_2D0BC38 = (__int64)&unk_2D0BC50;
  qword_2D0BC40 = 1;
  dword_2D0BC48 = 0;
  byte_2D0BC4C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D0BC28;
  v3 = (unsigned int)qword_2D0BC28 + 1LL;
  if ( v3 > HIDWORD(qword_2D0BC28) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D0BC30 - 16, &unk_2D0BC30, v3, 8);
    v2 = (unsigned int)qword_2D0BC28;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D0BC20 + 8 * v2) = v1;
  xmmword_2D0BC88 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D0BC28) = qword_2D0BC28 + 1;
  qword_2D0BC60 = (__int64)off_2C712D0;
  dword_2D0BC58 = 0;
  byte_2D0BC6C = 0;
  qword_2D0BBE0 = (__int64)off_2C75710;
  dword_2D0BC68 = 0;
  qword_2D0BC70 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D0BBE0, "max-deopt-or-unreachable-succ-check-depth", 41);
  dword_2D0BC58 = 8;
  byte_2D0BC6C = 1;
  dword_2D0BC68 = 8;
  qword_2D0BC08 = 171;
  BYTE2(qword_2D0BBE8) = BYTE2(qword_2D0BBE8) & 0x9F | 0x20;
  qword_2D0BC00 = (__int64)"Set the maximum path length when checking whether a basic block is followed by a block that e"
                           "ither has a terminating deoptimizing call or is terminated with an unreachable";
  sub_2218140(&qword_2D0BBE0);
  return __cxa_atexit(sub_1FED260, &qword_2D0BBE0, &off_2B25620);
}
