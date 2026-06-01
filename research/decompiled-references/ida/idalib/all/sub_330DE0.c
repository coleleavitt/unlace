int sub_330DE0()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  int result; // eax
  __int64 v6; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Allow incomplete IR on a best effort basis (references to unknown metadata will be dropped)");
  qword_2CFC2E0 = (__int64)&unk_2CFC2F0;
  v1 = v0;
  qword_2CFC2B0 = 0;
  qword_2CFC2B8 = 0;
  qword_2CFC2C0 = 0;
  qword_2CFC2A0 = (__int64)&off_2C758B0;
  qword_2CFC2A8 = (unsigned int)qword_2CFC2A8 & 0x80000000;
  qword_2CFC2E8 = 0x100000000LL;
  qword_2CFC2C8 = 0;
  qword_2CFC2D0 = 0;
  qword_2CFC2D8 = 0;
  qword_2CFC2F8 = (__int64)&unk_2CFC310;
  qword_2CFC300 = 1;
  dword_2CFC308 = 0;
  byte_2CFC30C = 1;
  v2 = sub_2210FF0("Allow incomplete IR on a best effort basis (references to unknown metadata will be dropped)");
  v3 = (unsigned int)qword_2CFC2E8;
  v4 = (unsigned int)qword_2CFC2E8 + 1LL;
  if ( v4 > HIDWORD(qword_2CFC2E8) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CFC2F0 - 16, &unk_2CFC2F0, v4, 8);
    v3 = (unsigned int)qword_2CFC2E8;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CFC2E0 + 8 * v3) = v2;
  word_2CFC328 = 0;
  xmmword_2CFC348 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CFC2E8) = qword_2CFC2E8 + 1;
  qword_2CFC320 = (__int64)off_2C714E8;
  byte_2CFC318 = 0;
  qword_2CFC2A0 = (__int64)off_2C75848;
  qword_2CFC330 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CFC2A0, "allow-incomplete-ir", 19);
  word_2CFC328 = 256;
  qword_2CFC2C8 = v1;
  byte_2CFC318 = 0;
  BYTE2(qword_2CFC2A8) = BYTE2(qword_2CFC2A8) & 0x9F | 0x20;
  qword_2CFC2C0 = (__int64)"Allow incomplete IR on a best effort basis (references to unknown metadata will be dropped)";
  sub_2218140(&qword_2CFC2A0);
  result = __cxa_atexit(sub_200E190, &qword_2CFC2A0, &off_2B25620);
  qword_2CFC298 = -8;
  return result;
}
