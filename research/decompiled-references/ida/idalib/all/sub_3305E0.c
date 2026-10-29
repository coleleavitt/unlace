int __fastcall sub_3305E0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CFBF10 = 0;
  qword_2CFBF18 = 0;
  qword_2CFBF20 = 0;
  qword_2CFBF00 = (__int64)&off_2C758B0;
  qword_2CFBF08 = (unsigned int)qword_2CFBF08 & 0x80000000;
  qword_2CFBF48 = 0x100000000LL;
  qword_2CFBF28 = 0;
  qword_2CFBF30 = 0;
  qword_2CFBF38 = 0;
  qword_2CFBF40 = (__int64)&unk_2CFBF50;
  qword_2CFBF58 = (__int64)&unk_2CFBF70;
  qword_2CFBF60 = 1;
  dword_2CFBF68 = 0;
  byte_2CFBF6C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2CFBF48;
  v3 = (unsigned int)qword_2CFBF48 + 1LL;
  if ( v3 > HIDWORD(qword_2CFBF48) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2CFBF50 - 16, &unk_2CFBF50, v3, 8);
    v2 = (unsigned int)qword_2CFBF48;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CFBF40 + 8 * v2) = v1;
  word_2CFBF88 = 0;
  xmmword_2CFBFA8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CFBF48) = qword_2CFBF48 + 1;
  qword_2CFBF80 = (__int64)off_2C714E8;
  byte_2CFBF78 = 0;
  qword_2CFBF00 = (__int64)off_2C75848;
  qword_2CFBF90 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CFBF00, "enable-tbaa", 11);
  word_2CFBF88 = 257;
  byte_2CFBF78 = 1;
  BYTE2(qword_2CFBF08) = BYTE2(qword_2CFBF08) & 0x9F | 0x20;
  sub_2218140(&qword_2CFBF00);
  return __cxa_atexit(sub_200E190, &qword_2CFBF00, &off_2B25620);
}
