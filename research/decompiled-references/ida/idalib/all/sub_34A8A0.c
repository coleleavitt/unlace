int __fastcall sub_34A8A0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D08AD0 = 0;
  qword_2D08AD8 = 0;
  qword_2D08AE0 = 0;
  qword_2D08AC0 = (__int64)&off_2C758B0;
  qword_2D08AC8 = (unsigned int)qword_2D08AC8 & 0x80000000;
  qword_2D08B08 = 0x100000000LL;
  qword_2D08AE8 = 0;
  qword_2D08AF0 = 0;
  qword_2D08AF8 = 0;
  qword_2D08B00 = (__int64)&unk_2D08B10;
  qword_2D08B18 = (__int64)&unk_2D08B30;
  qword_2D08B20 = 1;
  dword_2D08B28 = 0;
  byte_2D08B2C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D08B08;
  v3 = (unsigned int)qword_2D08B08 + 1LL;
  if ( v3 > HIDWORD(qword_2D08B08) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D08B10 - 16, &unk_2D08B10, v3, 8);
    v2 = (unsigned int)qword_2D08B08;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D08B00 + 8 * v2) = v1;
  word_2D08B48 = 0;
  xmmword_2D08B68 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D08B08) = qword_2D08B08 + 1;
  qword_2D08B40 = (__int64)off_2C714E8;
  byte_2D08B38 = 0;
  qword_2D08AC0 = (__int64)off_2C75848;
  qword_2D08B50 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D08AC0, "reassociate-use-cse-local", 25);
  qword_2D08AE0 = (__int64)"Only reorder expressions within a basic block when exposing CSE opportunities";
  word_2D08B48 = 257;
  byte_2D08B38 = 1;
  qword_2D08AE8 = 77;
  BYTE2(qword_2D08AC8) = BYTE2(qword_2D08AC8) & 0x9F | 0x20;
  sub_2218140(&qword_2D08AC0);
  return __cxa_atexit(sub_200E190, &qword_2D08AC0, &off_2B25620);
}
