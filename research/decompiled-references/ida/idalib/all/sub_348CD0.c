int __fastcall sub_348CD0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D08410 = 0;
  qword_2D08418 = 0;
  qword_2D08420 = 0;
  qword_2D08400 = (__int64)&off_2C758B0;
  qword_2D08408 = (unsigned int)qword_2D08408 & 0x80000000;
  qword_2D08448 = 0x100000000LL;
  qword_2D08428 = 0;
  qword_2D08430 = 0;
  qword_2D08438 = 0;
  qword_2D08440 = (__int64)&unk_2D08450;
  qword_2D08458 = (__int64)&unk_2D08470;
  qword_2D08460 = 1;
  dword_2D08468 = 0;
  byte_2D0846C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D08448;
  v3 = (unsigned int)qword_2D08448 + 1LL;
  if ( v3 > HIDWORD(qword_2D08448) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D08450 - 16, &unk_2D08450, v3, 8);
    v2 = (unsigned int)qword_2D08448;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D08440 + 8 * v2) = v1;
  word_2D08488 = 0;
  xmmword_2D084A8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D08448) = qword_2D08448 + 1;
  qword_2D08480 = (__int64)off_2C714E8;
  byte_2D08478 = 0;
  qword_2D08400 = (__int64)off_2C75848;
  qword_2D08490 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D08400, "enable-memcpyopt-without-libcalls", 33);
  qword_2D08428 = 48;
  BYTE2(qword_2D08408) = BYTE2(qword_2D08408) & 0x9F | 0x20;
  qword_2D08420 = (__int64)"Enable memcpyopt even when libcalls are disabled";
  sub_2218140(&qword_2D08400);
  return __cxa_atexit(sub_200E190, &qword_2D08400, &off_2B25620);
}
