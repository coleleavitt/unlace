int sub_352FD0()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Allow loop rotation multiple times in order to reach a better latch exit");
  qword_2D0DEA0 = (__int64)&unk_2D0DEB0;
  v1 = v0;
  qword_2D0DE70 = 0;
  qword_2D0DE78 = 0;
  qword_2D0DE80 = 0;
  qword_2D0DE60 = (__int64)&off_2C758B0;
  qword_2D0DE68 = (unsigned int)qword_2D0DE68 & 0x80000000;
  qword_2D0DEA8 = 0x100000000LL;
  qword_2D0DE88 = 0;
  qword_2D0DE90 = 0;
  qword_2D0DE98 = 0;
  qword_2D0DEB8 = (__int64)&unk_2D0DED0;
  qword_2D0DEC0 = 1;
  dword_2D0DEC8 = 0;
  byte_2D0DECC = 1;
  v2 = sub_2210FF0("Allow loop rotation multiple times in order to reach a better latch exit");
  v3 = (unsigned int)qword_2D0DEA8;
  v4 = (unsigned int)qword_2D0DEA8 + 1LL;
  if ( v4 > HIDWORD(qword_2D0DEA8) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2D0DEB0 - 16, &unk_2D0DEB0, v4, 8);
    v3 = (unsigned int)qword_2D0DEA8;
    v2 = v6;
  }
  *(_QWORD *)(qword_2D0DEA0 + 8 * v3) = v2;
  word_2D0DEE8 = 0;
  xmmword_2D0DF08 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D0DEA8) = qword_2D0DEA8 + 1;
  qword_2D0DEE0 = (__int64)off_2C714E8;
  byte_2D0DED8 = 0;
  qword_2D0DE60 = (__int64)off_2C75848;
  qword_2D0DEF0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0DE60, "loop-rotate-multi", 17);
  word_2D0DEE8 = 256;
  qword_2D0DE88 = v1;
  byte_2D0DED8 = 0;
  BYTE2(qword_2D0DE68) = BYTE2(qword_2D0DE68) & 0x9F | 0x20;
  qword_2D0DE80 = (__int64)"Allow loop rotation multiple times in order to reach a better latch exit";
  sub_2218140(&qword_2D0DE60);
  return __cxa_atexit(sub_200E190, &qword_2D0DE60, &off_2B25620);
}
