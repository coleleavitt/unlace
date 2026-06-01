int __fastcall sub_337E50(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CFF890 = 0;
  qword_2CFF898 = 0;
  qword_2CFF8A0 = 0;
  qword_2CFF880 = (__int64)&off_2C758B0;
  qword_2CFF888 = (unsigned int)qword_2CFF888 & 0x80000000;
  qword_2CFF8C8 = 0x100000000LL;
  qword_2CFF8A8 = 0;
  qword_2CFF8B0 = 0;
  qword_2CFF8B8 = 0;
  qword_2CFF8C0 = (__int64)&unk_2CFF8D0;
  qword_2CFF8D8 = (__int64)&unk_2CFF8F0;
  qword_2CFF8E0 = 1;
  dword_2CFF8E8 = 0;
  byte_2CFF8EC = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2CFF8C8;
  v3 = (unsigned int)qword_2CFF8C8 + 1LL;
  if ( v3 > HIDWORD(qword_2CFF8C8) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2CFF8D0 - 16, &unk_2CFF8D0, v3, 8);
    v2 = (unsigned int)qword_2CFF8C8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CFF8C0 + 8 * v2) = v1;
  word_2CFF908 = 0;
  LODWORD(qword_2CFF8C8) = qword_2CFF8C8 + 1;
  xmmword_2CFF928 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  qword_2CFF900 = (__int64)off_2C714E8;
  byte_2CFF8F8 = 0;
  qword_2CFF880 = (__int64)off_2C75848;
  qword_2CFF910 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CFF880, "ctx-prof-include-empty", 22);
  word_2CFF908 = 256;
  byte_2CFF8F8 = 0;
  qword_2CFF8A0 = (__int64)"Also write profiles with all-zero counters. Intended for testing/debugging.";
  qword_2CFF8A8 = 75;
  sub_2218140(&qword_2CFF880);
  return __cxa_atexit(sub_200E190, &qword_2CFF880, &off_2B25620);
}
