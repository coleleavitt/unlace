int sub_3330A0()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v7; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Disables inttoptr/ptrtoint roundtrip optimization");
  qword_2CFD3E0 = (__int64)&unk_2CFD3F0;
  v1 = v0;
  qword_2CFD3B0 = 0;
  qword_2CFD3B8 = 0;
  qword_2CFD3C0 = 0;
  qword_2CFD3A0 = (__int64)&off_2C758B0;
  qword_2CFD3A8 = (unsigned int)qword_2CFD3A8 & 0x80000000;
  qword_2CFD3E8 = 0x100000000LL;
  qword_2CFD3C8 = 0;
  qword_2CFD3D0 = 0;
  qword_2CFD3D8 = 0;
  qword_2CFD3F8 = (__int64)&unk_2CFD410;
  qword_2CFD400 = 1;
  dword_2CFD408 = 0;
  byte_2CFD40C = 1;
  v2 = sub_2210FF0("Disables inttoptr/ptrtoint roundtrip optimization");
  v3 = (unsigned int)qword_2CFD3E8;
  v4 = (unsigned int)qword_2CFD3E8 + 1LL;
  if ( v4 > HIDWORD(qword_2CFD3E8) )
  {
    v7 = v2;
    sub_2237220((char *)&unk_2CFD3F0 - 16, &unk_2CFD3F0, v4, 8);
    v3 = (unsigned int)qword_2CFD3E8;
    v2 = v7;
  }
  *(_QWORD *)(qword_2CFD3E0 + 8 * v3) = v2;
  word_2CFD428 = 0;
  xmmword_2CFD448 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CFD3E8) = qword_2CFD3E8 + 1;
  qword_2CFD420 = (__int64)off_2C714E8;
  byte_2CFD418 = 0;
  qword_2CFD3A0 = (__int64)off_2C75848;
  qword_2CFD430 = (__int64)off_2BEAB08;
  v5 = j__strlen("disable-i2p-p2i-opt");
  sub_2217250(&qword_2CFD3A0, "disable-i2p-p2i-opt", v5);
  word_2CFD428 = 256;
  qword_2CFD3C8 = v1;
  byte_2CFD418 = 0;
  qword_2CFD3C0 = (__int64)"Disables inttoptr/ptrtoint roundtrip optimization";
  sub_2218140(&qword_2CFD3A0);
  return __cxa_atexit(sub_200E190, &qword_2CFD3A0, &off_2B25620);
}
