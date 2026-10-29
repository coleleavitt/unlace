int __fastcall sub_345C80(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D05D90 = 0;
  qword_2D05D98 = 0;
  qword_2D05DA0 = 0;
  qword_2D05D80 = (__int64)&off_2C758B0;
  qword_2D05D88 = (unsigned int)qword_2D05D88 & 0x80000000;
  qword_2D05DC8 = 0x100000000LL;
  qword_2D05DA8 = 0;
  qword_2D05DB0 = 0;
  qword_2D05DB8 = 0;
  qword_2D05DC0 = (__int64)&unk_2D05DD0;
  qword_2D05DD8 = (__int64)&unk_2D05DF0;
  qword_2D05DE0 = 1;
  dword_2D05DE8 = 0;
  byte_2D05DEC = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D05DC8;
  v3 = (unsigned int)qword_2D05DC8 + 1LL;
  if ( v3 > HIDWORD(qword_2D05DC8) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D05DD0 - 16, &unk_2D05DD0, v3, 8);
    v2 = (unsigned int)qword_2D05DC8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D05DC0 + 8 * v2) = v1;
  word_2D05E08 = 0;
  LODWORD(qword_2D05DC8) = qword_2D05DC8 + 1;
  xmmword_2D05E28 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  qword_2D05E00 = (__int64)off_2C714E8;
  byte_2D05DF8 = 0;
  qword_2D05D80 = (__int64)off_2C75848;
  qword_2D05E10 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D05D80, "enable-loop-simplifycfg-term-folding", 36);
  byte_2D05DF8 = 1;
  word_2D05E08 = 257;
  sub_2218140(&qword_2D05D80);
  return __cxa_atexit(sub_200E190, &qword_2D05D80, &off_2B25620);
}
