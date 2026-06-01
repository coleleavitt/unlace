int __fastcall sub_2F2500(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CB0FD0 = 0;
  qword_2CB0FD8 = 0;
  qword_2CB0FE0 = 0;
  qword_2CB0FC0 = (__int64)&off_2C4B8B0;
  qword_2CB0FC8 = (unsigned int)qword_2CB0FC8 & 0x80000000;
  qword_2CB1008 = 0x100000000LL;
  qword_2CB0FE8 = 0;
  qword_2CB0FF0 = 0;
  qword_2CB0FF8 = 0;
  qword_2CB1000 = (__int64)&unk_2CB1010;
  qword_2CB1018 = (__int64)&unk_2CB1030;
  qword_2CB1020 = 1;
  dword_2CB1028 = 0;
  byte_2CB102C = 1;
  v2 = sub_21ED2B0(a1, a2);
  v3 = (unsigned int)qword_2CB1008;
  v4 = (unsigned int)qword_2CB1008 + 1LL;
  if ( v4 > HIDWORD(qword_2CB1008) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CB1010 - 16, &unk_2CB1010, v4, 8);
    v3 = (unsigned int)qword_2CB1008;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CB1000 + 8 * v3) = v2;
  xmmword_2CB1068 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CB1008) = qword_2CB1008 + 1;
  qword_2CB1040 = (__int64)off_2C472D0;
  dword_2CB1038 = 0;
  byte_2CB104C = 0;
  qword_2CB0FC0 = (__int64)off_2C4B710;
  dword_2CB1048 = 0;
  qword_2CB1050 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CB0FC0, "dom-tree-reachability-max-bbs-to-explore", 40);
  qword_2CB0FE8 = 54;
  dword_2CB1038 = 32;
  byte_2CB104C = 1;
  dword_2CB1048 = 32;
  BYTE2(qword_2CB0FC8) = BYTE2(qword_2CB0FC8) & 0x9F | 0x20;
  qword_2CB0FE0 = (__int64)"Max number of BBs to explore for reachability analysis";
  sub_21F4400(&qword_2CB0FC0);
  return __cxa_atexit(sub_1FC9520, &qword_2CB0FC0, &off_2AFC540);
}

