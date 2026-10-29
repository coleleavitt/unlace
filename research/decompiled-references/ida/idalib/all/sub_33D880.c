int __fastcall sub_33D880(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D018B0 = 0;
  qword_2D018B8 = 0;
  qword_2D018C0 = 0;
  qword_2D018A0 = (__int64)&off_2C758B0;
  qword_2D018A8 = (unsigned int)qword_2D018A8 & 0x80000000;
  qword_2D018E8 = 0x100000000LL;
  qword_2D018C8 = 0;
  qword_2D018D0 = 0;
  qword_2D018D8 = 0;
  qword_2D018E0 = (__int64)&unk_2D018F0;
  qword_2D018F8 = (__int64)&unk_2D01910;
  qword_2D01900 = 1;
  dword_2D01908 = 0;
  byte_2D0190C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D018E8;
  v3 = (unsigned int)qword_2D018E8 + 1LL;
  if ( v3 > HIDWORD(qword_2D018E8) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D018F0 - 16, &unk_2D018F0, v3, 8);
    v2 = (unsigned int)qword_2D018E8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D018E0 + 8 * v2) = v1;
  xmmword_2D01948 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D018E8) = qword_2D018E8 + 1;
  qword_2D01920 = (__int64)off_2C712D0;
  dword_2D01918 = 0;
  byte_2D0192C = 0;
  qword_2D018A0 = (__int64)off_2C75710;
  dword_2D01928 = 0;
  qword_2D01930 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D018A0, "float2int-max-integer-bw", 24);
  dword_2D01918 = 64;
  byte_2D0192C = 1;
  dword_2D01928 = 64;
  qword_2D018C8 = 57;
  BYTE2(qword_2D018A8) = BYTE2(qword_2D018A8) & 0x9F | 0x20;
  qword_2D018C0 = (__int64)"Max integer bitwidth to consider in float2int(default=64)";
  sub_2218140(&qword_2D018A0);
  return __cxa_atexit(sub_1FED260, &qword_2D018A0, &off_2B25620);
}
