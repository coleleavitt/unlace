int __fastcall sub_34B060(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D090D0 = 0;
  qword_2D090D8 = 0;
  qword_2D090E0 = 0;
  qword_2D090C0 = (__int64)&off_2C758B0;
  qword_2D090C8 = (unsigned int)qword_2D090C8 & 0x80000000;
  qword_2D09108 = 0x100000000LL;
  qword_2D090E8 = 0;
  qword_2D090F0 = 0;
  qword_2D090F8 = 0;
  qword_2D09100 = (__int64)&unk_2D09110;
  qword_2D09118 = (__int64)&unk_2D09130;
  qword_2D09120 = 1;
  dword_2D09128 = 0;
  byte_2D0912C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D09108;
  v3 = (unsigned int)qword_2D09108 + 1LL;
  if ( v3 > HIDWORD(qword_2D09108) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D09110 - 16, &unk_2D09110, v3, 8);
    v2 = (unsigned int)qword_2D09108;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D09100 + 8 * v2) = v1;
  word_2D09148 = 0;
  xmmword_2D09168 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D09108) = qword_2D09108 + 1;
  qword_2D09140 = (__int64)off_2C714E8;
  byte_2D09138 = 0;
  qword_2D090C0 = (__int64)off_2C75848;
  qword_2D09150 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D090C0, "sroa-skip-mem2reg", 17);
  word_2D09148 = 256;
  byte_2D09138 = 0;
  BYTE2(qword_2D090C8) = BYTE2(qword_2D090C8) & 0x9F | 0x20;
  sub_2218140(&qword_2D090C0);
  return __cxa_atexit(sub_200E190, &qword_2D090C0, &off_2B25620);
}
