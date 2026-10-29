int __fastcall sub_354760(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D0E9F0 = 0;
  qword_2D0E9F8 = 0;
  qword_2D0EA00 = 0;
  qword_2D0E9E0 = (__int64)&off_2C758B0;
  qword_2D0E9E8 = (unsigned int)qword_2D0E9E8 & 0x80000000;
  qword_2D0EA28 = 0x100000000LL;
  qword_2D0EA08 = 0;
  qword_2D0EA10 = 0;
  qword_2D0EA18 = 0;
  qword_2D0EA20 = (__int64)&unk_2D0EA30;
  qword_2D0EA38 = (__int64)&unk_2D0EA50;
  qword_2D0EA40 = 1;
  dword_2D0EA48 = 0;
  byte_2D0EA4C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D0EA28;
  v3 = (unsigned int)qword_2D0EA28 + 1LL;
  if ( v3 > HIDWORD(qword_2D0EA28) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D0EA30 - 16, &unk_2D0EA30, v3, 8);
    v2 = (unsigned int)qword_2D0EA28;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D0EA20 + 8 * v2) = v1;
  xmmword_2D0EA88 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D0EA28) = qword_2D0EA28 + 1;
  qword_2D0EA60 = (__int64)off_2C712D0;
  dword_2D0EA58 = 0;
  byte_2D0EA6C = 0;
  qword_2D0E9E0 = (__int64)off_2C75710;
  dword_2D0EA68 = 0;
  qword_2D0EA70 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D0E9E0, "move-auto-init-threshold", 24);
  dword_2D0EA58 = 128;
  byte_2D0EA6C = 1;
  dword_2D0EA68 = 128;
  qword_2D0EA08 = 56;
  BYTE2(qword_2D0E9E8) = BYTE2(qword_2D0E9E8) & 0x9F | 0x20;
  qword_2D0EA00 = (__int64)"Maximum instructions to analyze per moved initialization";
  sub_2218140(&qword_2D0E9E0);
  return __cxa_atexit(sub_1FED260, &qword_2D0E9E0, &off_2B25620);
}
