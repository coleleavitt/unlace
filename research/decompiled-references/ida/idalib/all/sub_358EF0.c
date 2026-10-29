int sub_358EF0()
{
  size_t v0; // rbx
  size_t v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v7; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("filename");
  v1 = j__strlen("Symbol Rewrite Map");
  qword_2D11060 = (__int64)&unk_2D11070;
  v2 = v1;
  qword_2D11030 = 0;
  qword_2D11038 = 0;
  qword_2D11040 = 0;
  qword_2D11020 = (__int64)&off_2C758B0;
  qword_2D11048 = 0;
  qword_2D11050 = 0;
  qword_2D11058 = 0;
  qword_2D11028 = (unsigned int)qword_2D11028 & 0x80000000 | 0x10000LL;
  qword_2D11068 = 0x100000000LL;
  qword_2D11078 = (__int64)&unk_2D11090;
  qword_2D11080 = 1;
  dword_2D11088 = 0;
  byte_2D1108C = 1;
  v3 = sub_2210FF0("Symbol Rewrite Map");
  v4 = (unsigned int)qword_2D11068;
  v5 = (unsigned int)qword_2D11068 + 1LL;
  if ( v5 > HIDWORD(qword_2D11068) )
  {
    v7 = v3;
    sub_2237220((char *)&unk_2D11070 - 16, &unk_2D11070, v5, 8);
    v4 = (unsigned int)qword_2D11068;
    v3 = v7;
  }
  *(_QWORD *)(qword_2D11060 + 8 * v4) = v3;
  xmmword_2D110D0 = 0;
  LODWORD(qword_2D11068) = qword_2D11068 + 1;
  qword_2D11020 = (__int64)&off_2C71420;
  xmmword_2D11100 = (__int128)_mm_loadh_ps((const double *)&off_2C78DD8);
  qword_2D11098 = 0;
  qword_2D110E8 = (__int64)off_2BEAC58;
  qword_2D110A0 = 0;
  qword_2D110A8 = 0;
  qword_2D110B0 = 0;
  qword_2D110B8 = 0;
  qword_2D110C0 = 0;
  byte_2D110C8 = 0;
  qword_2D110E0 = 0;
  sub_2217250(&qword_2D11020, "rewrite-map-file", 16);
  qword_2D11048 = v2;
  qword_2D11040 = (__int64)"Symbol Rewrite Map";
  qword_2D11050 = (__int64)"filename";
  qword_2D11058 = v0;
  BYTE2(qword_2D11028) = BYTE2(qword_2D11028) & 0x9F | 0x20;
  sub_2218140(&qword_2D11020);
  return __cxa_atexit(sub_1FF2780, &qword_2D11020, &off_2B25620);
}
