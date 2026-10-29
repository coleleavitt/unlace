int __fastcall sub_5A19C0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm5
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm6
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm7
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm3
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm4
  __m128i v19; // [rsp+0h] [rbp-68h] BYREF
  __m128i v20; // [rsp+10h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]

  qword_4B012E0 = (__int64)&qword_4B012F0;
  qword_4B012B0 = 0;
  qword_4B012B8 = 0;
  qword_4B012A0 = (__int64)&off_4A6E058;
  qword_4B012A8 = (unsigned int)qword_4B012A8 & 0x80000000;
  qword_4B012F8 = (__int64)&qword_4B01310;
  v19 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB448), (__m128i)(unsigned __int64)nullsub_266);
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB450), (__m128i)(unsigned __int64)nullsub_267);
  qword_4B012C0 = 0;
  qword_4B012C8 = 0;
  qword_4B012D0 = 0;
  qword_4B012D8 = 0;
  qword_4B012E8 = 0x100000000LL;
  dword_4B01308 = 0;
  qword_4B01300 = 1;
  byte_4B0130C = 1;
  v1 = sub_259AC30(a1, &qword_4B012F0);
  v2 = (unsigned int)qword_4B012E8;
  v3 = (unsigned int)qword_4B012E8 + 1LL;
  if ( HIDWORD(qword_4B012E8) < v3 )
  {
    sub_25D6060(&qword_4B012F0 - 2, &qword_4B012F0, v3, 8);
    v2 = (unsigned int)qword_4B012E8;
  }
  v4 = _mm_load_si128(&v19);
  *(_QWORD *)(qword_4B012E0 + 8 * v2) = v1;
  word_4B01328 = 0;
  xmmword_4B01338 = 0;
  qword_4B01320 = (__int64)&off_4A64730;
  xmmword_4B01348 = (__int128)v4;
  LODWORD(qword_4B012E8) = qword_4B012E8 + 1;
  qword_4B012A0 = (__int64)off_4A6DFF0;
  byte_4B01318 = 0;
  qword_4B01330 = (__int64)off_49D9168;
  sub_259F400(&qword_4B012A0, "show-fs-branchprob", 18);
  byte_4B01318 = 0;
  word_4B01328 = 256;
  qword_4B012C8 = 49;
  BYTE2(qword_4B012A8) = BYTE2(qword_4B012A8) & 0x9F | 0x20;
  qword_4B012C0 = (__int64)"Print setting flow sensitive branch probabilities";
  sub_259EC40(&qword_4B012A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B012A0, &off_47CFE00);
  qword_4B011F0 = 0;
  qword_4B011E0 = (__int64)&off_4A6E058;
  qword_4B011E8 = (unsigned int)qword_4B011E8 & 0x80000000;
  qword_4B01220 = (__int64)&qword_4B01230;
  qword_4B011F8 = 0;
  qword_4B01200 = 0;
  qword_4B01208 = 0;
  qword_4B01210 = 0;
  qword_4B01218 = 0;
  qword_4B01228 = 0x100000000LL;
  qword_4B01238 = (__int64)&qword_4B01250;
  qword_4B01240 = 1;
  dword_4B01248 = 0;
  byte_4B0124C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4B01230);
  v6 = (unsigned int)qword_4B01228;
  if ( HIDWORD(qword_4B01228) < (unsigned __int64)(unsigned int)qword_4B01228 + 1 )
  {
    v21 = v5;
    sub_25D6060(&qword_4B01230 - 2, &qword_4B01230, (unsigned int)qword_4B01228 + 1LL, 8);
    v6 = (unsigned int)qword_4B01228;
    v5 = v21;
  }
  v7 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4B01220 + 8 * v6) = v5;
  xmmword_4B01278 = 0;
  xmmword_4B01288 = (__int128)v7;
  qword_4B01260 = (__int64)&off_4A64710;
  LODWORD(qword_4B01228) = qword_4B01228 + 1;
  byte_4B0126C = 0;
  qword_4B011E0 = (__int64)off_4A6DEB8;
  dword_4B01258 = 0;
  dword_4B01268 = 0;
  qword_4B01270 = (__int64)off_49D9228;
  sub_259F400(&qword_4B011E0, "fs-profile-debug-prob-diff-threshold", 36);
  dword_4B01258 = 10;
  qword_4B01200 = (__int64)"Only show debug message if the branch probability is greater than this value (in percentage).";
  byte_4B0126C = 1;
  dword_4B01268 = 10;
  qword_4B01208 = 93;
  sub_259EC40(&qword_4B011E0);
  __cxa_atexit(sub_1F6C940, &qword_4B011E0, &off_47CFE00);
  qword_4B01130 = 0;
  qword_4B01120 = (__int64)&off_4A6E058;
  qword_4B01128 = (unsigned int)qword_4B01128 & 0x80000000;
  qword_4B01160 = (__int64)&qword_4B01170;
  qword_4B01138 = 0;
  qword_4B01140 = 0;
  qword_4B01148 = 0;
  qword_4B01150 = 0;
  qword_4B01158 = 0;
  qword_4B01168 = 0x100000000LL;
  qword_4B01178 = (__int64)&qword_4B01190;
  qword_4B01180 = 1;
  dword_4B01188 = 0;
  byte_4B0118C = 1;
  v8 = sub_259AC30(sub_1F6C940, &qword_4B01170);
  v9 = (unsigned int)qword_4B01168;
  if ( HIDWORD(qword_4B01168) < (unsigned __int64)(unsigned int)qword_4B01168 + 1 )
  {
    v21 = v8;
    sub_25D6060(&qword_4B01170 - 2, &qword_4B01170, (unsigned int)qword_4B01168 + 1LL, 8);
    v9 = (unsigned int)qword_4B01168;
    v8 = v21;
  }
  v10 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4B01160 + 8 * v9) = v8;
  xmmword_4B011B8 = 0;
  xmmword_4B011C8 = (__int128)v10;
  qword_4B011A0 = (__int64)&off_4A64710;
  LODWORD(qword_4B01168) = qword_4B01168 + 1;
  byte_4B011AC = 0;
  qword_4B01120 = (__int64)off_4A6DEB8;
  dword_4B01198 = 0;
  dword_4B011A8 = 0;
  qword_4B011B0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B01120, "fs-profile-debug-bw-threshold", 29);
  dword_4B01198 = 10000;
  qword_4B01140 = (__int64)"Only show debug message if the source branch weight is greater  than this value.";
  byte_4B011AC = 1;
  dword_4B011A8 = 10000;
  qword_4B01148 = 80;
  sub_259EC40(&qword_4B01120);
  __cxa_atexit(sub_1F6C940, &qword_4B01120, &off_47CFE00);
  qword_4B01070 = 0;
  qword_4B01060 = (__int64)&off_4A6E058;
  qword_4B01068 = (unsigned int)qword_4B01068 & 0x80000000;
  qword_4B010A0 = (__int64)&qword_4B010B0;
  qword_4B01078 = 0;
  qword_4B01080 = 0;
  qword_4B01088 = 0;
  qword_4B01090 = 0;
  qword_4B01098 = 0;
  qword_4B010A8 = 0x100000000LL;
  qword_4B010B8 = (__int64)&qword_4B010D0;
  qword_4B010C0 = 1;
  dword_4B010C8 = 0;
  byte_4B010CC = 1;
  v11 = sub_259AC30(sub_1F6C940, &qword_4B010B0);
  v12 = (unsigned int)qword_4B010A8;
  if ( HIDWORD(qword_4B010A8) < (unsigned __int64)(unsigned int)qword_4B010A8 + 1 )
  {
    v20.m128i_i64[0] = v11;
    sub_25D6060(&qword_4B010B0 - 2, &qword_4B010B0, (unsigned int)qword_4B010A8 + 1LL, 8);
    v12 = (unsigned int)qword_4B010A8;
    v11 = v20.m128i_i64[0];
  }
  v13 = _mm_load_si128(&v19);
  *(_QWORD *)(qword_4B010A0 + 8 * v12) = v11;
  word_4B010E8 = 0;
  xmmword_4B010F8 = 0;
  qword_4B010E0 = (__int64)&off_4A64730;
  xmmword_4B01108 = (__int128)v13;
  LODWORD(qword_4B010A8) = qword_4B010A8 + 1;
  qword_4B01060 = (__int64)off_4A6DFF0;
  byte_4B010D8 = 0;
  qword_4B010F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B01060, "fs-viewbfi-before", 17);
  byte_4B010D8 = 0;
  word_4B010E8 = 256;
  qword_4B01088 = 26;
  BYTE2(qword_4B01068) = BYTE2(qword_4B01068) & 0x9F | 0x20;
  qword_4B01080 = (__int64)"View BFI before MIR loader";
  sub_259EC40(&qword_4B01060);
  __cxa_atexit(sub_1F6C9D0, &qword_4B01060, &off_47CFE00);
  qword_4B00FE8 = 0x100000000LL;
  qword_4B00FA0 = (__int64)&off_4A6E058;
  qword_4B00FA8 = (unsigned int)qword_4B00FA8 & 0x80000000;
  qword_4B00FE0 = (__int64)&qword_4B00FF0;
  qword_4B00FB0 = 0;
  qword_4B00FB8 = 0;
  qword_4B00FC0 = 0;
  qword_4B00FC8 = 0;
  qword_4B00FD0 = 0;
  qword_4B00FD8 = 0;
  qword_4B00FF8 = (__int64)&qword_4B01010;
  qword_4B01000 = 1;
  dword_4B01008 = 0;
  byte_4B0100C = 1;
  v14 = sub_259AC30(sub_1F6C9D0, &qword_4B00FF0);
  v15 = (unsigned int)qword_4B00FE8;
  v16 = (unsigned int)qword_4B00FE8 + 1LL;
  if ( HIDWORD(qword_4B00FE8) < v16 )
  {
    sub_25D6060(&qword_4B00FF0 - 2, &qword_4B00FF0, v16, 8);
    v15 = (unsigned int)qword_4B00FE8;
  }
  v17 = _mm_load_si128(&v19);
  *(_QWORD *)(qword_4B00FE0 + 8 * v15) = v14;
  word_4B01028 = 0;
  xmmword_4B01038 = 0;
  xmmword_4B01048 = (__int128)v17;
  qword_4B01020 = (__int64)&off_4A64730;
  LODWORD(qword_4B00FE8) = qword_4B00FE8 + 1;
  byte_4B01018 = 0;
  qword_4B00FA0 = (__int64)off_4A6DFF0;
  qword_4B01030 = (__int64)off_49D9168;
  sub_259F400(&qword_4B00FA0, "fs-viewbfi-after", 16);
  word_4B01028 = 256;
  byte_4B01018 = 0;
  qword_4B00FC8 = 25;
  BYTE2(qword_4B00FA8) = BYTE2(qword_4B00FA8) & 0x9F | 0x20;
  qword_4B00FC0 = (__int64)"View BFI after MIR loader";
  sub_259EC40(&qword_4B00FA0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B00FA0, &off_47CFE00);
}

