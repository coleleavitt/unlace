int __fastcall sub_353B00(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D0E2F0 = 0;
  qword_2D0E2F8 = 0;
  qword_2D0E300 = 0;
  qword_2D0E2E0 = (__int64)&off_2C758B0;
  qword_2D0E2E8 = (unsigned int)qword_2D0E2E8 & 0x80000000;
  qword_2D0E328 = 0x100000000LL;
  qword_2D0E308 = 0;
  qword_2D0E310 = 0;
  qword_2D0E318 = 0;
  qword_2D0E320 = (__int64)&unk_2D0E330;
  qword_2D0E338 = (__int64)&unk_2D0E350;
  qword_2D0E340 = 1;
  dword_2D0E348 = 0;
  byte_2D0E34C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D0E328;
  v3 = (unsigned int)qword_2D0E328 + 1LL;
  if ( v3 > HIDWORD(qword_2D0E328) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D0E330 - 16, &unk_2D0E330, v3, 8);
    v2 = (unsigned int)qword_2D0E328;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D0E320 + 8 * v2) = v1;
  word_2D0E368 = 0;
  xmmword_2D0E388 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D0E328) = qword_2D0E328 + 1;
  qword_2D0E360 = (__int64)off_2C714E8;
  byte_2D0E358 = 0;
  qword_2D0E2E0 = (__int64)off_2C75848;
  qword_2D0E370 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0E2E0, "loop-version-annotate-no-alias", 30);
  word_2D0E368 = 257;
  byte_2D0E358 = 1;
  qword_2D0E308 = 76;
  BYTE2(qword_2D0E2E8) = BYTE2(qword_2D0E2E8) & 0x9F | 0x20;
  qword_2D0E300 = (__int64)"Add no-alias annotation for instructions that are disambiguated by memchecks";
  sub_2218140(&qword_2D0E2E0);
  return __cxa_atexit(sub_200E190, &qword_2D0E2E0, &off_2B25620);
}
