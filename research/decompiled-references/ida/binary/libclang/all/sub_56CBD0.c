int __fastcall sub_56CBD0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm5
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __m128i v14; // xmm6
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]

  qword_4AE1040 = (__int64)&qword_4AE1050;
  qword_4AE1010 = 0;
  qword_4AE1018 = 0;
  qword_4AE1000 = (__int64)&off_4A6E058;
  qword_4AE1008 = (unsigned int)qword_4AE1008 & 0x80000000;
  qword_4AE1058 = (__int64)&qword_4AE1070;
  v16 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49CC068), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AE1020 = 0;
  qword_4AE1028 = 0;
  qword_4AE1030 = 0;
  qword_4AE1038 = 0;
  qword_4AE1048 = 0x100000000LL;
  qword_4AE1060 = 1;
  dword_4AE1068 = 0;
  byte_4AE106C = 1;
  v1 = sub_259AC30(a1, &qword_4AE1050);
  v2 = (unsigned int)qword_4AE1048;
  v3 = (unsigned int)qword_4AE1048 + 1LL;
  if ( HIDWORD(qword_4AE1048) < v3 )
  {
    sub_25D6060(&qword_4AE1050 - 2, &qword_4AE1050, v3, 8);
    v2 = (unsigned int)qword_4AE1048;
  }
  v4 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4AE1040 + 8 * v2) = v1;
  word_4AE1088 = 0;
  xmmword_4AE1098 = 0;
  qword_4AE1000 = (__int64)off_4A6DFF0;
  xmmword_4AE10A8 = (__int128)v4;
  LODWORD(qword_4AE1048) = qword_4AE1048 + 1;
  qword_4AE1090 = (__int64)off_49D9168;
  byte_4AE1078 = 0;
  qword_4AE1080 = (__int64)&off_4A64730;
  sub_259F400(&qword_4AE1000, "x86-seses-enable-without-lvi-cfi", 32);
  qword_4AE1020 = (__int64)"Force enable speculative execution side effect suppression. (Note: User must pass -mlvi-cfi i"
                           "n order to mitigate indirect branches and returns.)";
  qword_4AE1028 = 144;
  byte_4AE1078 = 0;
  word_4AE1088 = 256;
  BYTE2(qword_4AE1008) = BYTE2(qword_4AE1008) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE1000);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE1000, &off_47CFE00);
  qword_4AE0F50 = 0;
  qword_4AE0F80 = (__int64)&qword_4AE0F90;
  qword_4AE0F58 = 0;
  qword_4AE0F40 = (__int64)&off_4A6E058;
  qword_4AE0F48 = (unsigned int)qword_4AE0F48 & 0x80000000;
  qword_4AE0F60 = 0;
  qword_4AE0F68 = 0;
  qword_4AE0F70 = 0;
  qword_4AE0F78 = 0;
  qword_4AE0F88 = 0x100000000LL;
  qword_4AE0F98 = (__int64)&qword_4AE0FB0;
  qword_4AE0FA0 = 1;
  dword_4AE0FA8 = 0;
  byte_4AE0FAC = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AE0F90);
  v6 = (unsigned int)qword_4AE0F88;
  if ( HIDWORD(qword_4AE0F88) < (unsigned __int64)(unsigned int)qword_4AE0F88 + 1 )
  {
    v17 = v5;
    sub_25D6060(&qword_4AE0F90 - 2, &qword_4AE0F90, (unsigned int)qword_4AE0F88 + 1LL, 8);
    v6 = (unsigned int)qword_4AE0F88;
    v5 = v17;
  }
  v7 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4AE0F80 + 8 * v6) = v5;
  word_4AE0FC8 = 0;
  xmmword_4AE0FD8 = 0;
  qword_4AE0F40 = (__int64)off_4A6DFF0;
  xmmword_4AE0FE8 = (__int128)v7;
  LODWORD(qword_4AE0F88) = qword_4AE0F88 + 1;
  qword_4AE0FD0 = (__int64)off_49D9168;
  byte_4AE0FB8 = 0;
  qword_4AE0FC0 = (__int64)&off_4A64730;
  sub_259F400(&qword_4AE0F40, "x86-seses-one-lfence-per-bb", 27);
  qword_4AE0F68 = 68;
  qword_4AE0F60 = (__int64)"Omit all lfences other than the first to be placed in a basic block.";
  byte_4AE0FB8 = 0;
  word_4AE0FC8 = 256;
  BYTE2(qword_4AE0F48) = BYTE2(qword_4AE0F48) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0F40);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE0F40, &off_47CFE00);
  qword_4AE0E90 = 0;
  qword_4AE0EC0 = (__int64)&qword_4AE0ED0;
  qword_4AE0E98 = 0;
  qword_4AE0E80 = (__int64)&off_4A6E058;
  qword_4AE0E88 = (unsigned int)qword_4AE0E88 & 0x80000000;
  qword_4AE0EA0 = 0;
  qword_4AE0EA8 = 0;
  qword_4AE0EB0 = 0;
  qword_4AE0EB8 = 0;
  qword_4AE0EC8 = 0x100000000LL;
  qword_4AE0ED8 = (__int64)&qword_4AE0EF0;
  qword_4AE0EE0 = 1;
  dword_4AE0EE8 = 0;
  byte_4AE0EEC = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AE0ED0);
  v9 = (unsigned int)qword_4AE0EC8;
  if ( HIDWORD(qword_4AE0EC8) < (unsigned __int64)(unsigned int)qword_4AE0EC8 + 1 )
  {
    v17 = v8;
    sub_25D6060(&qword_4AE0ED0 - 2, &qword_4AE0ED0, (unsigned int)qword_4AE0EC8 + 1LL, 8);
    v9 = (unsigned int)qword_4AE0EC8;
    v8 = v17;
  }
  v10 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4AE0EC0 + 8 * v9) = v8;
  word_4AE0F08 = 0;
  xmmword_4AE0F18 = 0;
  qword_4AE0E80 = (__int64)off_4A6DFF0;
  xmmword_4AE0F28 = (__int128)v10;
  LODWORD(qword_4AE0EC8) = qword_4AE0EC8 + 1;
  qword_4AE0F10 = (__int64)off_49D9168;
  byte_4AE0EF8 = 0;
  qword_4AE0F00 = (__int64)&off_4A64730;
  sub_259F400(&qword_4AE0E80, "x86-seses-only-lfence-non-const", 31);
  qword_4AE0EA8 = 150;
  qword_4AE0EA0 = (__int64)"Only lfence before groups of terminators where at least one branch instruction has an input t"
                           "o the addressing mode that is a register other than %rip.";
  byte_4AE0EF8 = 0;
  word_4AE0F08 = 256;
  BYTE2(qword_4AE0E88) = BYTE2(qword_4AE0E88) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0E80);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE0E80, &off_47CFE00);
  qword_4AE0E08 = 0x100000000LL;
  qword_4AE0E00 = (__int64)&qword_4AE0E10;
  qword_4AE0DD0 = 0;
  qword_4AE0DC0 = (__int64)&off_4A6E058;
  qword_4AE0DC8 = (unsigned int)qword_4AE0DC8 & 0x80000000;
  qword_4AE0DD8 = 0;
  qword_4AE0DE0 = 0;
  qword_4AE0DE8 = 0;
  qword_4AE0DF0 = 0;
  qword_4AE0DF8 = 0;
  qword_4AE0E18 = (__int64)&qword_4AE0E30;
  qword_4AE0E20 = 1;
  dword_4AE0E28 = 0;
  byte_4AE0E2C = 1;
  v11 = sub_259AC30(sub_1F6C9D0, &qword_4AE0E10);
  v12 = (unsigned int)qword_4AE0E08;
  v13 = (unsigned int)qword_4AE0E08 + 1LL;
  if ( HIDWORD(qword_4AE0E08) < v13 )
  {
    sub_25D6060(&qword_4AE0E10 - 2, &qword_4AE0E10, v13, 8);
    v12 = (unsigned int)qword_4AE0E08;
  }
  v14 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4AE0E00 + 8 * v12) = v11;
  word_4AE0E48 = 0;
  qword_4AE0E40 = (__int64)&off_4A64730;
  xmmword_4AE0E58 = 0;
  qword_4AE0DC0 = (__int64)off_4A6DFF0;
  xmmword_4AE0E68 = (__int128)v14;
  LODWORD(qword_4AE0E08) = qword_4AE0E08 + 1;
  qword_4AE0E50 = (__int64)off_49D9168;
  byte_4AE0E38 = 0;
  sub_259F400(&qword_4AE0DC0, "x86-seses-omit-branch-lfences", 29);
  word_4AE0E48 = 256;
  qword_4AE0DE0 = (__int64)"Omit all lfences before branch instructions.";
  qword_4AE0DE8 = 44;
  byte_4AE0E38 = 0;
  BYTE2(qword_4AE0DC8) = BYTE2(qword_4AE0DC8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0DC0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AE0DC0, &off_47CFE00);
}

