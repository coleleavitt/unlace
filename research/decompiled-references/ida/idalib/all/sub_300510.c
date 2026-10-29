int __fastcall sub_300510(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v12; // rdx
  __int128 v14; // [rsp+0h] [rbp-48h] BYREF
  __m128i v15[3]; // [rsp+10h] [rbp-38h] BYREF

  v2 = j__strlen("The number of instructions to scan in a block in memory dependency analysis (default = 100)");
  qword_2CE0990 = 0;
  v3 = v2;
  qword_2CE0998 = 0;
  qword_2CE09A0 = 0;
  qword_2CE0980 = (__int64)&off_2C758B0;
  qword_2CE0988 = (unsigned int)qword_2CE0988 & 0x80000000;
  qword_2CE09C8 = 0x100000000LL;
  qword_2CE09A8 = 0;
  qword_2CE09B0 = 0;
  qword_2CE09B8 = 0;
  qword_2CE09C0 = (__int64)&unk_2CE09D0;
  qword_2CE09D8 = (__int64)&unk_2CE09F0;
  qword_2CE09E0 = 1;
  dword_2CE09E8 = 0;
  byte_2CE09EC = 1;
  v4 = sub_2210FF0("The number of instructions to scan in a block in memory dependency analysis (default = 100)", a2);
  v5 = (unsigned int)qword_2CE09C8;
  v6 = (unsigned int)qword_2CE09C8 + 1LL;
  if ( v6 > HIDWORD(qword_2CE09C8) )
  {
    *(_QWORD *)&v14 = v4;
    sub_2237220((char *)&unk_2CE09D0 - 16, &unk_2CE09D0, v6, 8);
    v5 = (unsigned int)qword_2CE09C8;
    v4 = v14;
  }
  *(_QWORD *)(qword_2CE09C0 + 8 * v5) = v4;
  qword_2CE0A00 = (__int64)off_2C712D0;
  qword_2CE0980 = (__int64)off_2C75710;
  xmmword_2CE0A28 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  v14 = xmmword_2CE0A28;
  LODWORD(qword_2CE09C8) = qword_2CE09C8 + 1;
  qword_2CE0A10 = (__int64)off_2BEAB98;
  dword_2CE09F8 = 0;
  dword_2CE0A08 = 0;
  byte_2CE0A0C = 0;
  sub_2217250(&qword_2CE0980, "memdep-block-scan-limit", 23);
  qword_2CE09A8 = v3;
  dword_2CE09F8 = 100;
  byte_2CE0A0C = 1;
  dword_2CE0A08 = 100;
  BYTE2(qword_2CE0988) = BYTE2(qword_2CE0988) & 0x9F | 0x20;
  qword_2CE09A0 = (__int64)"The number of instructions to scan in a block in memory dependency analysis (default = 100)";
  sub_2218140(&qword_2CE0980);
  __cxa_atexit(sub_1FED260, &qword_2CE0980, &off_2B25620);
  v7 = j__strlen("The number of blocks to scan during memory dependency analysis (default = 200)");
  byte_2CE092C = 1;
  qword_2CE08D0 = 0;
  v8 = v7;
  qword_2CE08C0 = (__int64)&off_2C758B0;
  qword_2CE08C8 = (unsigned int)qword_2CE08C8 & 0x80000000;
  qword_2CE0908 = 0x100000000LL;
  qword_2CE08D8 = 0;
  qword_2CE08E0 = 0;
  qword_2CE08E8 = 0;
  qword_2CE08F0 = 0;
  qword_2CE08F8 = 0;
  qword_2CE0900 = (__int64)&unk_2CE0910;
  qword_2CE0918 = (__int64)&unk_2CE0930;
  qword_2CE0920 = 1;
  dword_2CE0928 = 0;
  v9 = sub_2210FF0("The number of blocks to scan during memory dependency analysis (default = 200)", &qword_2CE0980);
  v10 = (unsigned int)qword_2CE0908;
  si128 = _mm_load_si128((const __m128i *)&v14);
  v12 = (unsigned int)qword_2CE0908 + 1LL;
  if ( v12 > HIDWORD(qword_2CE0908) )
  {
    *(_QWORD *)&v14 = v9;
    v15[0] = si128;
    sub_2237220((char *)&unk_2CE0910 - 16, &unk_2CE0910, v12, 8);
    v10 = (unsigned int)qword_2CE0908;
    si128 = _mm_load_si128(v15);
    v9 = v14;
  }
  *(_QWORD *)(qword_2CE0900 + 8 * v10) = v9;
  qword_2CE0940 = (__int64)off_2C712D0;
  qword_2CE08C0 = (__int64)off_2C75710;
  qword_2CE0950 = (__int64)off_2BEAB98;
  xmmword_2CE0968 = (__int128)si128;
  LODWORD(qword_2CE0908) = qword_2CE0908 + 1;
  dword_2CE0938 = 0;
  dword_2CE0948 = 0;
  byte_2CE094C = 0;
  sub_2217250(&qword_2CE08C0, "memdep-block-number-limit", 25);
  qword_2CE08E8 = v8;
  dword_2CE0938 = 200;
  byte_2CE094C = 1;
  dword_2CE0948 = 200;
  BYTE2(qword_2CE08C8) = BYTE2(qword_2CE08C8) & 0x9F | 0x20;
  qword_2CE08E0 = (__int64)"The number of blocks to scan during memory dependency analysis (default = 200)";
  sub_2218140(&qword_2CE08C0);
  return __cxa_atexit(sub_1FED260, &qword_2CE08C0, &off_2B25620);
}
