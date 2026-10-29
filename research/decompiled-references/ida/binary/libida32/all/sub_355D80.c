int __fastcall sub_355D80(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CE7210 = 0;
  qword_2CE7218 = 0;
  qword_2CE7220 = 0;
  qword_2CE7200 = (__int64)&off_2C4B8B0;
  qword_2CE7208 = (unsigned int)qword_2CE7208 & 0x80000000;
  qword_2CE7248 = 0x100000000LL;
  qword_2CE7228 = 0;
  qword_2CE7230 = 0;
  qword_2CE7238 = 0;
  qword_2CE7240 = (__int64)&unk_2CE7250;
  qword_2CE7258 = (__int64)&unk_2CE7270;
  qword_2CE7260 = 1;
  dword_2CE7268 = 0;
  byte_2CE726C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CE7248;
  v3 = (unsigned int)qword_2CE7248 + 1LL;
  if ( v3 > HIDWORD(qword_2CE7248) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CE7250 - 16, &unk_2CE7250, v3, 8);
    v2 = (unsigned int)qword_2CE7248;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CE7240 + 8 * v2) = v1;
  xmmword_2CE72A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CE7248) = qword_2CE7248 + 1;
  qword_2CE7280 = (__int64)off_2C472D0;
  dword_2CE7278 = 0;
  byte_2CE728C = 0;
  qword_2CE7200 = (__int64)off_2C4B710;
  dword_2CE7288 = 0;
  qword_2CE7290 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CE7200, "max-booleans-in-control-flow-hub", 32);
  dword_2CE7278 = 32;
  byte_2CE728C = 1;
  dword_2CE7288 = 32;
  qword_2CE7228 = 118;
  BYTE2(qword_2CE7208) = BYTE2(qword_2CE7208) & 0x9F | 0x20;
  qword_2CE7220 = (__int64)"Set the maximum number of outgoing blocks for using a boolean value to record the exiting blo"
                           "ck in the ControlFlowHub.";
  sub_21F4400(&qword_2CE7200);
  return __cxa_atexit(sub_1FC9520, &qword_2CE7200, &off_2AFC540);
}

