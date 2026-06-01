int __fastcall sub_33DA80(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D01970 = 0;
  qword_2D01978 = 0;
  qword_2D01980 = 0;
  qword_2D01960 = (__int64)&off_2C758B0;
  qword_2D01968 = (unsigned int)qword_2D01968 & 0x80000000;
  qword_2D019A8 = 0x100000000LL;
  qword_2D01988 = 0;
  qword_2D01990 = 0;
  qword_2D01998 = 0;
  qword_2D019A0 = (__int64)&unk_2D019B0;
  qword_2D019B8 = (__int64)&unk_2D019D0;
  qword_2D019C0 = 1;
  dword_2D019C8 = 0;
  byte_2D019CC = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D019A8;
  v3 = (unsigned int)qword_2D019A8 + 1LL;
  if ( v3 > HIDWORD(qword_2D019A8) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D019B0 - 16, &unk_2D019B0, v3, 8);
    v2 = (unsigned int)qword_2D019A8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D019A0 + 8 * v2) = v1;
  word_2D019E8 = 0;
  xmmword_2D01A08 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D019A8) = qword_2D019A8 + 1;
  qword_2D019E0 = (__int64)off_2C714E8;
  byte_2D019D8 = 0;
  qword_2D01960 = (__int64)off_2C75848;
  qword_2D019F0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D01960, "guard-widening-widen-branch-guards", 34);
  word_2D019E8 = 257;
  byte_2D019D8 = 1;
  qword_2D01988 = 84;
  BYTE2(qword_2D01968) = BYTE2(qword_2D01968) & 0x9F | 0x20;
  qword_2D01980 = (__int64)"Whether or not we should widen guards  expressed as branches by widenable conditions";
  sub_2218140(&qword_2D01960);
  return __cxa_atexit(sub_200E190, &qword_2D01960, &off_2B25620);
}
