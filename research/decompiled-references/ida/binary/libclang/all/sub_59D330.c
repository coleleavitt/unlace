int __fastcall sub_59D330(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i si128; // xmm7
  __m128i v5; // xmm4
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i v8; // xmm5
  __m128i v9; // xmm6
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __m128i v14; // [rsp+0h] [rbp-68h] BYREF
  __m128i v15; // [rsp+10h] [rbp-58h] BYREF
  __m128i v16[4]; // [rsp+20h] [rbp-48h] BYREF

  qword_4AFEF00 = (__int64)&qword_4AFEF10;
  qword_4AFEED0 = 0;
  qword_4AFEED8 = 0;
  qword_4AFEEE0 = 0;
  v14 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB2B0), (__m128i)(unsigned __int64)nullsub_294);
  qword_4AFEEE8 = 0;
  v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&byte_4AFEE70);
  qword_4AFEEC0 = (__int64)&off_4A6E058;
  qword_4AFEEC8 = (unsigned int)qword_4AFEEC8 & 0x80000000;
  v16[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&byte_4AFEF70);
  qword_4AFEEF0 = 0;
  qword_4AFEEF8 = 0;
  qword_4AFEF08 = 0x100000000LL;
  qword_4AFEF18 = (__int64)&qword_4AFEF30;
  dword_4AFEF28 = 0;
  qword_4AFEF20 = 1;
  byte_4AFEF2C = 1;
  v1 = sub_259AC30(a1, &qword_4AFEF10);
  v2 = (unsigned int)qword_4AFEF08;
  v3 = (unsigned int)qword_4AFEF08 + 1LL;
  if ( HIDWORD(qword_4AFEF08) < v3 )
  {
    sub_25D6060(&qword_4AFEF10 - 2, &qword_4AFEF10, v3, 8);
    v2 = (unsigned int)qword_4AFEF08;
  }
  si128 = _mm_load_si128(v16);
  v5 = _mm_load_si128(&v14);
  *(_QWORD *)(qword_4AFEF00 + 8 * v2) = v1;
  qword_4AFEF38 = (__int64)&byte_4AFEF48;
  xmmword_4AFEF58 = (__int128)si128;
  xmmword_4AFEF90 = 0;
  qword_4AFEEC0 = (__int64)&off_4A6DF88;
  xmmword_4AFEFA0 = (__int128)v5;
  LODWORD(qword_4AFEF08) = qword_4AFEF08 + 1;
  qword_4AFEF88 = (__int64)off_49D92E8;
  qword_4AFEF40 = 0;
  byte_4AFEF48 = 0;
  qword_4AFEF68 = 0;
  byte_4AFEF70 = 0;
  byte_4AFEF80 = 0;
  sub_259F400(&qword_4AFEEC0, "mcfg-func-name", 14);
  qword_4AFEEE8 = 70;
  BYTE2(qword_4AFEEC8) = BYTE2(qword_4AFEEC8) & 0x9F | 0x20;
  qword_4AFEEE0 = (__int64)"The name of a function (or its substring) whose CFG is viewed/printed.";
  sub_259EC40(&qword_4AFEEC0);
  __cxa_atexit(sub_2283FB0, &qword_4AFEEC0, &off_47CFE00);
  qword_4AFEDD0 = 0;
  qword_4AFEDC0 = (__int64)&off_4A6E058;
  qword_4AFEDC8 = (unsigned int)qword_4AFEDC8 & 0x80000000;
  qword_4AFEE00 = (__int64)&qword_4AFEE10;
  qword_4AFEDD8 = 0;
  qword_4AFEDE0 = 0;
  qword_4AFEDE8 = 0;
  qword_4AFEDF0 = 0;
  qword_4AFEDF8 = 0;
  qword_4AFEE08 = 0x100000000LL;
  qword_4AFEE18 = (__int64)&qword_4AFEE30;
  qword_4AFEE20 = 1;
  dword_4AFEE28 = 0;
  byte_4AFEE2C = 1;
  v6 = sub_259AC30(sub_2283FB0, &qword_4AFEE10);
  v7 = (unsigned int)qword_4AFEE08;
  if ( HIDWORD(qword_4AFEE08) < (unsigned __int64)(unsigned int)qword_4AFEE08 + 1 )
  {
    v16[0].m128i_i64[0] = v6;
    sub_25D6060(&qword_4AFEE10 - 2, &qword_4AFEE10, (unsigned int)qword_4AFEE08 + 1LL, 8);
    v7 = (unsigned int)qword_4AFEE08;
    v6 = v16[0].m128i_i64[0];
  }
  v8 = _mm_load_si128(&v15);
  v9 = _mm_load_si128(&v14);
  *(_QWORD *)(qword_4AFEE00 + 8 * v7) = v6;
  qword_4AFEE38 = (__int64)&byte_4AFEE48;
  xmmword_4AFEE58 = (__int128)v8;
  xmmword_4AFEE90 = 0;
  qword_4AFEDC0 = (__int64)&off_4A6DF88;
  xmmword_4AFEEA0 = (__int128)v9;
  LODWORD(qword_4AFEE08) = qword_4AFEE08 + 1;
  qword_4AFEE88 = (__int64)off_49D92E8;
  qword_4AFEE40 = 0;
  byte_4AFEE48 = 0;
  qword_4AFEE68 = 0;
  byte_4AFEE70 = 0;
  byte_4AFEE80 = 0;
  sub_259F400(&qword_4AFEDC0, "mcfg-dot-filename-prefix", 24);
  qword_4AFEDE8 = 51;
  BYTE2(qword_4AFEDC8) = BYTE2(qword_4AFEDC8) & 0x9F | 0x20;
  qword_4AFEDE0 = (__int64)"The prefix used for the Machine CFG dot file names.";
  sub_259EC40(&qword_4AFEDC0);
  __cxa_atexit(sub_2283FB0, &qword_4AFEDC0, &off_47CFE00);
  qword_4AFED48 = 0x100000000LL;
  qword_4AFED00 = (__int64)&off_4A6E058;
  qword_4AFED08 = (unsigned int)qword_4AFED08 & 0x80000000;
  qword_4AFED40 = (__int64)&qword_4AFED50;
  qword_4AFED10 = 0;
  qword_4AFED18 = 0;
  qword_4AFED20 = 0;
  qword_4AFED28 = 0;
  qword_4AFED30 = 0;
  qword_4AFED38 = 0;
  qword_4AFED58 = (__int64)&qword_4AFED70;
  qword_4AFED60 = 1;
  dword_4AFED68 = 0;
  byte_4AFED6C = 1;
  v10 = sub_259AC30(sub_2283FB0, &qword_4AFED50);
  v11 = (unsigned int)qword_4AFED48;
  v12 = (unsigned int)qword_4AFED48 + 1LL;
  if ( HIDWORD(qword_4AFED48) < v12 )
  {
    sub_25D6060(&qword_4AFED50 - 2, &qword_4AFED50, v12, 8);
    v11 = (unsigned int)qword_4AFED48;
  }
  *(_QWORD *)(qword_4AFED40 + 8 * v11) = v10;
  word_4AFED88 = 0;
  xmmword_4AFED98 = 0;
  LODWORD(qword_4AFED48) = qword_4AFED48 + 1;
  qword_4AFED80 = (__int64)&off_4A64730;
  byte_4AFED78 = 0;
  qword_4AFED00 = (__int64)off_4A6DFF0;
  qword_4AFED90 = (__int64)off_49D9168;
  xmmword_4AFEDA8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB2B8),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AFED00, "dot-mcfg-only", 13);
  word_4AFED88 = 256;
  byte_4AFED78 = 0;
  qword_4AFED28 = 38;
  BYTE2(qword_4AFED08) = BYTE2(qword_4AFED08) & 0x9F | 0x20;
  qword_4AFED20 = (__int64)"Print only the CFG without blocks body";
  sub_259EC40(&qword_4AFED00);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AFED00, &off_47CFE00);
}

