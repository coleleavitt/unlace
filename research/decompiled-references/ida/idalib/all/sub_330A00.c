int __fastcall sub_330A00(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CFC130 = 0;
  qword_2CFC138 = 0;
  qword_2CFC140 = 0;
  qword_2CFC120 = (__int64)&off_2C758B0;
  qword_2CFC128 = (unsigned int)qword_2CFC128 & 0x80000000;
  qword_2CFC168 = 0x100000000LL;
  qword_2CFC148 = 0;
  qword_2CFC150 = 0;
  qword_2CFC158 = 0;
  qword_2CFC160 = (__int64)&unk_2CFC170;
  qword_2CFC178 = (__int64)&unk_2CFC190;
  qword_2CFC180 = 1;
  dword_2CFC188 = 0;
  byte_2CFC18C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2CFC168;
  v3 = (unsigned int)qword_2CFC168 + 1LL;
  if ( v3 > HIDWORD(qword_2CFC168) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2CFC170 - 16, &unk_2CFC170, v3, 8);
    v2 = (unsigned int)qword_2CFC168;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CFC160 + 8 * v2) = v1;
  xmmword_2CFC1C8 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2CFC168) = qword_2CFC168 + 1;
  qword_2CFC1A0 = (__int64)off_2C712D0;
  dword_2CFC198 = 0;
  byte_2CFC1AC = 0;
  qword_2CFC120 = (__int64)off_2C75710;
  dword_2CFC1A8 = 0;
  qword_2CFC1B0 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2CFC120, "dom-conditions-max-uses", 23);
  dword_2CFC198 = 20;
  byte_2CFC1AC = 1;
  dword_2CFC1A8 = 20;
  BYTE2(qword_2CFC128) = BYTE2(qword_2CFC128) & 0x9F | 0x20;
  sub_2218140(&qword_2CFC120);
  return __cxa_atexit(sub_1FED260, &qword_2CFC120, &off_2B25620);
}
