int __fastcall sub_301F50(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CE1570 = 0;
  qword_2CE1578 = 0;
  qword_2CE1580 = 0;
  qword_2CE1560 = (__int64)&off_2C758B0;
  qword_2CE1568 = (unsigned int)qword_2CE1568 & 0x80000000;
  qword_2CE15A8 = 0x100000000LL;
  qword_2CE1588 = 0;
  qword_2CE1590 = 0;
  qword_2CE1598 = 0;
  qword_2CE15A0 = (__int64)&unk_2CE15B0;
  qword_2CE15B8 = (__int64)&unk_2CE15D0;
  qword_2CE15C0 = 1;
  dword_2CE15C8 = 0;
  byte_2CE15CC = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = (unsigned int)qword_2CE15A8;
  v4 = (unsigned int)qword_2CE15A8 + 1LL;
  if ( v4 > HIDWORD(qword_2CE15A8) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CE15B0 - 16, &unk_2CE15B0, v4, 8);
    v3 = (unsigned int)qword_2CE15A8;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CE15A0 + 8 * v3) = v2;
  word_2CE15E8 = 0;
  xmmword_2CE1608 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CE15A8) = qword_2CE15A8 + 1;
  qword_2CE15E0 = (__int64)off_2C714E8;
  byte_2CE15D8 = 0;
  qword_2CE1560 = (__int64)off_2C75848;
  qword_2CE15F0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CE1560, "gvn-add-phi-translation", 23);
  word_2CE15E8 = 256;
  byte_2CE15D8 = 0;
  qword_2CE1588 = 42;
  BYTE2(qword_2CE1568) = BYTE2(qword_2CE1568) & 0x9F | 0x20;
  qword_2CE1580 = (__int64)"Enable phi-translation of add instructions";
  sub_2218140(&qword_2CE1560);
  return __cxa_atexit(sub_200E190, &qword_2CE1560, &off_2B25620);
}
