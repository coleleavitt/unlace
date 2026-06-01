int __fastcall sub_2F7160(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CDBAF0 = 0;
  qword_2CDBAF8 = 0;
  qword_2CDBB00 = 0;
  qword_2CDBAE0 = (__int64)&off_2C758B0;
  qword_2CDBAE8 = (unsigned int)qword_2CDBAE8 & 0x80000000;
  qword_2CDBB28 = 0x100000000LL;
  qword_2CDBB08 = 0;
  qword_2CDBB10 = 0;
  qword_2CDBB18 = 0;
  qword_2CDBB20 = (__int64)&unk_2CDBB30;
  qword_2CDBB38 = (__int64)&unk_2CDBB50;
  qword_2CDBB40 = 1;
  dword_2CDBB48 = 0;
  byte_2CDBB4C = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = (unsigned int)qword_2CDBB28;
  v4 = (unsigned int)qword_2CDBB28 + 1LL;
  if ( v4 > HIDWORD(qword_2CDBB28) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CDBB30 - 16, &unk_2CDBB30, v4, 8);
    v3 = (unsigned int)qword_2CDBB28;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CDBB20 + 8 * v3) = v2;
  xmmword_2CDBB88 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2CDBB28) = qword_2CDBB28 + 1;
  qword_2CDBB60 = (__int64)off_2C712D0;
  dword_2CDBB58 = 0;
  byte_2CDBB6C = 0;
  qword_2CDBAE0 = (__int64)off_2C75710;
  dword_2CDBB68 = 0;
  qword_2CDBB70 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2CDBAE0, "capture-tracking-max-uses-to-explore", 36);
  qword_2CDBB08 = 34;
  dword_2CDBB58 = 100;
  byte_2CDBB6C = 1;
  dword_2CDBB68 = 100;
  BYTE2(qword_2CDBAE8) = BYTE2(qword_2CDBAE8) & 0x9F | 0x20;
  qword_2CDBB00 = (__int64)"Maximal number of uses to explore.";
  sub_2218140(&qword_2CDBAE0);
  return __cxa_atexit(sub_1FED260, &qword_2CDBAE0, &off_2B25620);
}
