int __fastcall sub_332EA0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CFD2D0 = 0;
  qword_2CFD2D8 = 0;
  qword_2CFD2E0 = 0;
  qword_2CFD2C0 = (__int64)&off_2C758B0;
  qword_2CFD2C8 = (unsigned int)qword_2CFD2C8 & 0x80000000;
  qword_2CFD308 = 0x100000000LL;
  qword_2CFD2E8 = 0;
  qword_2CFD2F0 = 0;
  qword_2CFD2F8 = 0;
  qword_2CFD300 = (__int64)&unk_2CFD310;
  qword_2CFD318 = (__int64)&unk_2CFD330;
  qword_2CFD320 = 1;
  dword_2CFD328 = 0;
  byte_2CFD32C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2CFD308;
  v3 = (unsigned int)qword_2CFD308 + 1LL;
  if ( v3 > HIDWORD(qword_2CFD308) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2CFD310 - 16, &unk_2CFD310, v3, 8);
    v2 = (unsigned int)qword_2CFD308;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CFD300 + 8 * v2) = v1;
  xmmword_2CFD368 = (__int128)_mm_loadh_ps((const double *)&off_2C77900);
  LODWORD(qword_2CFD308) = qword_2CFD308 + 1;
  qword_2CFD340 = (__int64)off_2C71BB0;
  dword_2CFD338 = 0;
  byte_2CFD34C = 0;
  qword_2CFD2C0 = (__int64)off_2C75778;
  dword_2CFD348 = 0;
  qword_2CFD350 = (__int64)off_2BEAB68;
  sub_2217250(&qword_2CFD2C0, "non-global-value-max-name-size", 30);
  dword_2CFD338 = 1024;
  byte_2CFD34C = 1;
  dword_2CFD348 = 1024;
  qword_2CFD2E8 = 47;
  BYTE2(qword_2CFD2C8) = BYTE2(qword_2CFD2C8) & 0x9F | 0x20;
  qword_2CFD2E0 = (__int64)"Maximum size for the name of non-global values.";
  sub_2218140(&qword_2CFD2C0);
  return __cxa_atexit(sub_20141D0, &qword_2CFD2C0, &off_2B25620);
}
