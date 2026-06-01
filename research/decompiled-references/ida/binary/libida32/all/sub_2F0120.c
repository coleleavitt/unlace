int __fastcall sub_2F0120(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CAFF10 = 0;
  qword_2CAFF18 = 0;
  qword_2CAFF20 = 0;
  qword_2CAFF00 = (__int64)&off_2C4B8B0;
  qword_2CAFF08 = (unsigned int)qword_2CAFF08 & 0x80000000;
  qword_2CAFF48 = 0x100000000LL;
  qword_2CAFF28 = 0;
  qword_2CAFF30 = 0;
  qword_2CAFF38 = 0;
  qword_2CAFF40 = (__int64)&unk_2CAFF50;
  qword_2CAFF58 = (__int64)&unk_2CAFF70;
  qword_2CAFF60 = 1;
  dword_2CAFF68 = 0;
  byte_2CAFF6C = 1;
  v2 = sub_21ED2B0(a1, a2);
  v3 = (unsigned int)qword_2CAFF48;
  v4 = (unsigned int)qword_2CAFF48 + 1LL;
  if ( v4 > HIDWORD(qword_2CAFF48) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CAFF50 - 16, &unk_2CAFF50, v4, 8);
    v3 = (unsigned int)qword_2CAFF48;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CAFF40 + 8 * v3) = v2;
  word_2CAFF88 = 0;
  xmmword_2CAFFA8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CAFF48) = qword_2CAFF48 + 1;
  qword_2CAFF80 = (__int64)off_2C474E8;
  byte_2CAFF78 = 0;
  qword_2CAFF00 = (__int64)off_2C4B848;
  qword_2CAFF90 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CAFF00, "verify-assumption-cache", 23);
  word_2CAFF88 = 256;
  byte_2CAFF78 = 0;
  qword_2CAFF28 = 39;
  BYTE2(qword_2CAFF08) = BYTE2(qword_2CAFF08) & 0x9F | 0x20;
  qword_2CAFF20 = (__int64)"Enable verification of assumption cache";
  sub_21F4400(&qword_2CAFF00);
  return __cxa_atexit(sub_1FEA450, &qword_2CAFF00, &off_2AFC540);
}

