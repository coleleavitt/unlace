int sub_331AC0()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Disable autoupgrade of debug info");
  qword_2CFC920 = (__int64)&unk_2CFC930;
  v1 = v0;
  qword_2CFC8F0 = 0;
  qword_2CFC8F8 = 0;
  qword_2CFC900 = 0;
  qword_2CFC8E0 = (__int64)&off_2C758B0;
  qword_2CFC8E8 = (unsigned int)qword_2CFC8E8 & 0x80000000;
  qword_2CFC928 = 0x100000000LL;
  qword_2CFC908 = 0;
  qword_2CFC910 = 0;
  qword_2CFC918 = 0;
  qword_2CFC938 = (__int64)&unk_2CFC950;
  qword_2CFC940 = 1;
  dword_2CFC948 = 0;
  byte_2CFC94C = 1;
  v2 = sub_2210FF0("Disable autoupgrade of debug info");
  v3 = (unsigned int)qword_2CFC928;
  v4 = (unsigned int)qword_2CFC928 + 1LL;
  if ( v4 > HIDWORD(qword_2CFC928) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CFC930 - 16, &unk_2CFC930, v4, 8);
    v3 = (unsigned int)qword_2CFC928;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CFC920 + 8 * v3) = v2;
  word_2CFC968 = 0;
  LODWORD(qword_2CFC928) = qword_2CFC928 + 1;
  xmmword_2CFC988 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  qword_2CFC960 = (__int64)off_2C714E8;
  byte_2CFC958 = 0;
  qword_2CFC8E0 = (__int64)off_2C75848;
  qword_2CFC970 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CFC8E0, "disable-auto-upgrade-debug-info", 31);
  qword_2CFC908 = v1;
  qword_2CFC900 = (__int64)"Disable autoupgrade of debug info";
  sub_2218140(&qword_2CFC8E0);
  return __cxa_atexit(sub_200E190, &qword_2CFC8E0, &off_2B25620);
}
