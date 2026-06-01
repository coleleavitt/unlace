int __fastcall sub_330830(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CFC070 = 0;
  qword_2CFC078 = 0;
  qword_2CFC080 = 0;
  qword_2CFC060 = (__int64)&off_2C758B0;
  qword_2CFC068 = (unsigned int)qword_2CFC068 & 0x80000000;
  qword_2CFC0A8 = 0x100000000LL;
  qword_2CFC088 = 0;
  qword_2CFC090 = 0;
  qword_2CFC098 = 0;
  qword_2CFC0A0 = (__int64)&unk_2CFC0B0;
  qword_2CFC0B8 = (__int64)&unk_2CFC0D0;
  qword_2CFC0C0 = 1;
  dword_2CFC0C8 = 0;
  byte_2CFC0CC = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2CFC0A8;
  v3 = (unsigned int)qword_2CFC0A8 + 1LL;
  if ( v3 > HIDWORD(qword_2CFC0A8) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2CFC0B0 - 16, &unk_2CFC0B0, v3, 8);
    v2 = (unsigned int)qword_2CFC0A8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CFC0A0 + 8 * v2) = v1;
  word_2CFC0E8 = 0;
  xmmword_2CFC108 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CFC0A8) = qword_2CFC0A8 + 1;
  qword_2CFC0E0 = (__int64)off_2C714E8;
  byte_2CFC0D8 = 0;
  qword_2CFC060 = (__int64)off_2C75848;
  qword_2CFC0F0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CFC060, "enable-scoped-noalias", 21);
  word_2CFC0E8 = 257;
  byte_2CFC0D8 = 1;
  BYTE2(qword_2CFC068) = BYTE2(qword_2CFC068) & 0x9F | 0x20;
  sub_2218140(&qword_2CFC060);
  return __cxa_atexit(sub_200E190, &qword_2CFC060, &off_2B25620);
}
