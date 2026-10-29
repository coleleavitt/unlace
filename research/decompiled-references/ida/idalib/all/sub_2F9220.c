int __fastcall sub_2F9220(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CDCE10 = 0;
  qword_2CDCE18 = 0;
  qword_2CDCE20 = 0;
  qword_2CDCE00 = (__int64)&off_2C758B0;
  qword_2CDCE08 = (unsigned int)qword_2CDCE08 & 0x80000000;
  qword_2CDCE48 = 0x100000000LL;
  qword_2CDCE28 = 0;
  qword_2CDCE30 = 0;
  qword_2CDCE38 = 0;
  qword_2CDCE40 = (__int64)&unk_2CDCE50;
  qword_2CDCE58 = (__int64)&unk_2CDCE70;
  qword_2CDCE60 = 1;
  dword_2CDCE68 = 0;
  byte_2CDCE6C = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = (unsigned int)qword_2CDCE48;
  v4 = (unsigned int)qword_2CDCE48 + 1LL;
  if ( v4 > HIDWORD(qword_2CDCE48) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CDCE50 - 16, &unk_2CDCE50, v4, 8);
    v3 = (unsigned int)qword_2CDCE48;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CDCE40 + 8 * v3) = v2;
  word_2CDCE88 = 0;
  xmmword_2CDCEA8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CDCE48) = qword_2CDCE48 + 1;
  qword_2CDCE80 = (__int64)off_2C714E8;
  byte_2CDCE78 = 0;
  qword_2CDCE00 = (__int64)off_2C75848;
  qword_2CDCE90 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CDCE00, "enable-unsafe-globalsmodref-alias-results", 41);
  word_2CDCE88 = 256;
  byte_2CDCE78 = 0;
  BYTE2(qword_2CDCE08) = BYTE2(qword_2CDCE08) & 0x9F | 0x20;
  sub_2218140(&qword_2CDCE00);
  return __cxa_atexit(sub_200E190, &qword_2CDCE00, &off_2B25620);
}
