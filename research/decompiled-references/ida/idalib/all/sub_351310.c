int __fastcall sub_351310(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D0D270 = 0;
  qword_2D0D278 = 0;
  qword_2D0D280 = 0;
  qword_2D0D260 = (__int64)&off_2C758B0;
  qword_2D0D268 = (unsigned int)qword_2D0D268 & 0x80000000;
  qword_2D0D2A8 = 0x100000000LL;
  qword_2D0D288 = 0;
  qword_2D0D290 = 0;
  qword_2D0D298 = 0;
  qword_2D0D2A0 = (__int64)&unk_2D0D2B0;
  qword_2D0D2B8 = (__int64)&unk_2D0D2D0;
  qword_2D0D2C0 = 1;
  dword_2D0D2C8 = 0;
  byte_2D0D2CC = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D0D2A8;
  v3 = (unsigned int)qword_2D0D2A8 + 1LL;
  if ( v3 > HIDWORD(qword_2D0D2A8) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D0D2B0 - 16, &unk_2D0D2B0, v3, 8);
    v2 = (unsigned int)qword_2D0D2A8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D0D2A0 + 8 * v2) = v1;
  xmmword_2D0D308 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D0D2A8) = qword_2D0D2A8 + 1;
  qword_2D0D2E0 = (__int64)off_2C712D0;
  dword_2D0D2D8 = 0;
  byte_2D0D2EC = 0;
  qword_2D0D260 = (__int64)off_2C75710;
  dword_2D0D2E8 = 0;
  qword_2D0D2F0 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D0D260, "guards-predicate-pass-branch-weight", 35);
  dword_2D0D2D8 = 0x100000;
  byte_2D0D2EC = 1;
  dword_2D0D2E8 = 0x100000;
  qword_2D0D288 = 100;
  BYTE2(qword_2D0D268) = BYTE2(qword_2D0D268) & 0x9F | 0x20;
  qword_2D0D280 = (__int64)"The probability of a guard failing is assumed to be the reciprocal of this value (default = 1 << 20)";
  sub_2218140(&qword_2D0D260);
  return __cxa_atexit(sub_1FED260, &qword_2D0D260, &off_2B25620);
}
