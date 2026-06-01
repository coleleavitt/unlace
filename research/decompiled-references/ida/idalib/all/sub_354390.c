int sub_354390()
{
  size_t v0; // rax
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Use this option to turn on/off warnings about incorrect usage of llvm.expect intrinsics.");
  qword_2D0E930 = 0;
  v1 = v0;
  qword_2D0E938 = 0;
  qword_2D0E940 = 0;
  qword_2D0E920 = (__int64)&off_2C758B0;
  qword_2D0E928 = (unsigned int)qword_2D0E928 & 0x80000000;
  qword_2D0E968 = 0x100000000LL;
  qword_2D0E948 = 0;
  qword_2D0E950 = 0;
  qword_2D0E958 = 0;
  qword_2D0E960 = (__int64)&unk_2D0E970;
  qword_2D0E978 = (__int64)&unk_2D0E990;
  qword_2D0E980 = 1;
  dword_2D0E988 = 0;
  byte_2D0E98C = 1;
  v2 = sub_2210FF0("Use this option to turn on/off warnings about incorrect usage of llvm.expect intrinsics.");
  v3 = (unsigned int)qword_2D0E968;
  v4 = (unsigned int)qword_2D0E968 + 1LL;
  if ( v4 > HIDWORD(qword_2D0E968) )
  {
    v11 = v2;
    sub_2237220((char *)&unk_2D0E970 - 16, &unk_2D0E970, v4, 8);
    v3 = (unsigned int)qword_2D0E968;
    v2 = v11;
  }
  *(_QWORD *)(qword_2D0E960 + 8 * v3) = v2;
  word_2D0E9A8 = 0;
  xmmword_2D0E9C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D0E968) = qword_2D0E968 + 1;
  qword_2D0E9A0 = (__int64)off_2C714E8;
  byte_2D0E998 = 0;
  qword_2D0E920 = (__int64)off_2C75848;
  qword_2D0E9B0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0E920, "pgo-warn-misexpect", 18);
  word_2D0E9A8 = 256;
  byte_2D0E998 = 0;
  qword_2D0E948 = v1;
  BYTE2(qword_2D0E928) = BYTE2(qword_2D0E928) & 0x9F | 0x20;
  qword_2D0E940 = (__int64)"Use this option to turn on/off warnings about incorrect usage of llvm.expect intrinsics.";
  sub_2218140(&qword_2D0E920);
  __cxa_atexit(sub_200E190, &qword_2D0E920, &off_2B25620);
  v5 = j__strlen("Prevents emitting diagnostics when profile counts are within N% of the threshold..");
  byte_2D0E8CC = 1;
  qword_2D0E870 = 0;
  v6 = v5;
  qword_2D0E860 = (__int64)&off_2C758B0;
  qword_2D0E868 = (unsigned int)qword_2D0E868 & 0x80000000;
  qword_2D0E8A8 = 0x100000000LL;
  qword_2D0E878 = 0;
  qword_2D0E880 = 0;
  qword_2D0E888 = 0;
  qword_2D0E890 = 0;
  qword_2D0E898 = 0;
  qword_2D0E8A0 = (__int64)&unk_2D0E8B0;
  qword_2D0E8B8 = (__int64)&unk_2D0E8D0;
  qword_2D0E8C0 = 1;
  dword_2D0E8C8 = 0;
  v7 = sub_2210FF0(
         "Prevents emitting diagnostics when profile counts are within N% of the threshold..",
         (unsigned int)&qword_2D0E920);
  v8 = (unsigned int)qword_2D0E8A8;
  v9 = (unsigned int)qword_2D0E8A8 + 1LL;
  if ( v9 > HIDWORD(qword_2D0E8A8) )
  {
    v12 = v7;
    sub_2237220((char *)&unk_2D0E8B0 - 16, &unk_2D0E8B0, v9, 8);
    v8 = (unsigned int)qword_2D0E8A8;
    v7 = v12;
  }
  *(_QWORD *)(qword_2D0E8A0 + 8 * v8) = v7;
  LODWORD(qword_2D0E8A8) = qword_2D0E8A8 + 1;
  xmmword_2D0E908 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  qword_2D0E8E0 = (__int64)off_2C712D0;
  dword_2D0E8D8 = 0;
  byte_2D0E8EC = 0;
  qword_2D0E860 = (__int64)off_2C75710;
  dword_2D0E8E8 = 0;
  qword_2D0E8F0 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D0E860, "misexpect-tolerance", 19);
  qword_2D0E888 = v6;
  dword_2D0E8D8 = 0;
  byte_2D0E8EC = 1;
  dword_2D0E8E8 = 0;
  qword_2D0E880 = (__int64)"Prevents emitting diagnostics when profile counts are within N% of the threshold..";
  sub_2218140(&qword_2D0E860);
  return __cxa_atexit(sub_1FED260, &qword_2D0E860, &off_2B25620);
}
