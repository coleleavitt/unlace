int __fastcall sub_2F3DA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CB1BD0 = 0;
  qword_2CB1BD8 = 0;
  qword_2CB1BE0 = 0;
  qword_2CB1BC0 = (__int64)&off_2C4B8B0;
  qword_2CB1BC8 = (unsigned int)qword_2CB1BC8 & 0x80000000;
  qword_2CB1C08 = 0x100000000LL;
  qword_2CB1BE8 = 0;
  qword_2CB1BF0 = 0;
  qword_2CB1BF8 = 0;
  qword_2CB1C00 = (__int64)&unk_2CB1C10;
  qword_2CB1C18 = (__int64)&unk_2CB1C30;
  qword_2CB1C20 = 1;
  dword_2CB1C28 = 0;
  byte_2CB1C2C = 1;
  v2 = sub_21ED2B0(a1, a2);
  v3 = (unsigned int)qword_2CB1C08;
  v4 = (unsigned int)qword_2CB1C08 + 1LL;
  if ( v4 > HIDWORD(qword_2CB1C08) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CB1C10 - 16, &unk_2CB1C10, v4, 8);
    v3 = (unsigned int)qword_2CB1C08;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CB1C00 + 8 * v3) = v2;
  xmmword_2CB1C68 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CB1C08) = qword_2CB1C08 + 1;
  qword_2CB1C40 = (__int64)off_2C472D0;
  dword_2CB1C38 = 0;
  byte_2CB1C4C = 0;
  qword_2CB1BC0 = (__int64)off_2C4B710;
  dword_2CB1C48 = 0;
  qword_2CB1C50 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CB1BC0, "capture-tracking-max-uses-to-explore", 36);
  qword_2CB1BE8 = 34;
  dword_2CB1C38 = 100;
  byte_2CB1C4C = 1;
  dword_2CB1C48 = 100;
  BYTE2(qword_2CB1BC8) = BYTE2(qword_2CB1BC8) & 0x9F | 0x20;
  qword_2CB1BE0 = (__int64)"Maximal number of uses to explore.";
  sub_21F4400(&qword_2CB1BC0);
  return __cxa_atexit(sub_1FC9520, &qword_2CB1BC0, &off_2AFC540);
}

