int __fastcall sub_339790(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D005F0 = 0;
  qword_2D005F8 = 0;
  qword_2D00600 = 0;
  qword_2D005E0 = (__int64)&off_2C758B0;
  qword_2D005E8 = (unsigned int)qword_2D005E8 & 0x80000000;
  qword_2D00628 = 0x100000000LL;
  qword_2D00608 = 0;
  qword_2D00610 = 0;
  qword_2D00618 = 0;
  qword_2D00620 = (__int64)&unk_2D00630;
  qword_2D00638 = (__int64)&unk_2D00650;
  qword_2D00640 = 1;
  dword_2D00648 = 0;
  byte_2D0064C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D00628;
  v3 = (unsigned int)qword_2D00628 + 1LL;
  if ( v3 > HIDWORD(qword_2D00628) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D00630 - 16, &unk_2D00630, v3, 8);
    v2 = (unsigned int)qword_2D00628;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D00620 + 8 * v2) = v1;
  xmmword_2D00688 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D00628) = qword_2D00628 + 1;
  qword_2D00660 = (__int64)off_2C712D0;
  dword_2D00658 = 0;
  byte_2D0066C = 0;
  qword_2D005E0 = (__int64)off_2C75710;
  dword_2D00668 = 0;
  qword_2D00670 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D005E0, "callsite-splitting-duplication-threshold", 40);
  qword_2D00608 = 82;
  dword_2D00658 = 5;
  byte_2D0066C = 1;
  dword_2D00668 = 5;
  BYTE2(qword_2D005E8) = BYTE2(qword_2D005E8) & 0x9F | 0x20;
  qword_2D00600 = (__int64)"Only allow instructions before a call, if their cost is below DuplicationThreshold";
  sub_2218140(&qword_2D005E0);
  return __cxa_atexit(sub_1FED260, &qword_2D005E0, &off_2B25620);
}
