int __fastcall sub_590300(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm5
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm6
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __m128i v18; // [rsp+0h] [rbp-98h] BYREF
  int **v19; // [rsp+18h] [rbp-80h]
  const char **v20; // [rsp+20h] [rbp-78h]
  int *v21; // [rsp+28h] [rbp-70h]
  int *v22; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  int v24; // [rsp+40h] [rbp-58h] BYREF
  int v25; // [rsp+44h] [rbp-54h] BYREF
  int *v26; // [rsp+48h] [rbp-50h] BYREF
  const char *v27; // [rsp+50h] [rbp-48h] BYREF
  __int64 v28; // [rsp+58h] [rbp-40h]

  qword_4AF79A0 = (__int64)&qword_4AF79B0;
  qword_4AF7970 = 0;
  qword_4AF7978 = 0;
  qword_4AF7960 = (__int64)&off_4A6E058;
  qword_4AF7968 = (unsigned int)qword_4AF7968 & 0x80000000;
  qword_4AF79B8 = (__int64)&qword_4AF79D0;
  v18 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EA2E0), (__m128i)(unsigned __int64)nullsub_267);
  qword_4AF7980 = 0;
  qword_4AF7988 = 0;
  qword_4AF7990 = 0;
  qword_4AF7998 = 0;
  qword_4AF79A8 = 0x100000000LL;
  qword_4AF79C0 = 1;
  dword_4AF79C8 = 0;
  byte_4AF79CC = 1;
  v1 = sub_259AC30(a1, &qword_4AF79B0);
  v2 = (unsigned int)qword_4AF79A8;
  v3 = (unsigned int)qword_4AF79A8 + 1LL;
  if ( HIDWORD(qword_4AF79A8) < v3 )
  {
    sub_25D6060(&qword_4AF79B0 - 2, &qword_4AF79B0, v3, 8);
    v2 = (unsigned int)qword_4AF79A8;
  }
  v4 = _mm_load_si128(&v18);
  *(_QWORD *)(qword_4AF79A0 + 8 * v2) = v1;
  xmmword_4AF79F8 = 0;
  xmmword_4AF7A08 = (__int128)v4;
  qword_4AF79E0 = (__int64)&off_4A64710;
  LODWORD(qword_4AF79A8) = qword_4AF79A8 + 1;
  byte_4AF79EC = 0;
  qword_4AF7960 = (__int64)off_4A6DEB8;
  dword_4AF79D8 = 0;
  dword_4AF79E8 = 0;
  qword_4AF79F0 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF7960, "cold-operand-threshold", 22);
  qword_4AF7988 = 63;
  qword_4AF7980 = (__int64)"Maximum frequency of path for an operand to be considered cold.";
  dword_4AF79D8 = 20;
  byte_4AF79EC = 1;
  dword_4AF79E8 = 20;
  BYTE2(qword_4AF7968) = BYTE2(qword_4AF7968) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF7960);
  __cxa_atexit(sub_1F6C940, &qword_4AF7960, &off_47CFE00);
  qword_4AF78B0 = 0;
  qword_4AF78A0 = (__int64)&off_4A6E058;
  qword_4AF78A8 = (unsigned int)qword_4AF78A8 & 0x80000000;
  qword_4AF78E0 = (__int64)&qword_4AF78F0;
  qword_4AF78B8 = 0;
  qword_4AF78C0 = 0;
  qword_4AF78C8 = 0;
  qword_4AF78D0 = 0;
  qword_4AF78D8 = 0;
  qword_4AF78E8 = 0x100000000LL;
  qword_4AF78F8 = (__int64)&qword_4AF7910;
  qword_4AF7900 = 1;
  dword_4AF7908 = 0;
  byte_4AF790C = 1;
  v5 = sub_259AC30(sub_1F6C940, &qword_4AF78F0);
  v6 = (unsigned int)qword_4AF78E8;
  if ( HIDWORD(qword_4AF78E8) < (unsigned __int64)(unsigned int)qword_4AF78E8 + 1 )
  {
    v19 = (int **)v5;
    sub_25D6060(&qword_4AF78F0 - 2, &qword_4AF78F0, (unsigned int)qword_4AF78E8 + 1LL, 8);
    v6 = (unsigned int)qword_4AF78E8;
    v5 = (__int64)v19;
  }
  v7 = _mm_load_si128(&v18);
  *(_QWORD *)(qword_4AF78E0 + 8 * v6) = v5;
  xmmword_4AF7938 = 0;
  xmmword_4AF7948 = (__int128)v7;
  qword_4AF7920 = (__int64)&off_4A64710;
  LODWORD(qword_4AF78E8) = qword_4AF78E8 + 1;
  byte_4AF792C = 0;
  qword_4AF78A0 = (__int64)off_4A6DEB8;
  dword_4AF7918 = 0;
  dword_4AF7928 = 0;
  qword_4AF7930 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF78A0, "cold-operand-max-cost-multiplier", 32);
  qword_4AF78C8 = 113;
  qword_4AF78C0 = (__int64)"Maximum cost multiplier of TCC_expensive for the dependence slice of a cold operand to be con"
                           "sidered inexpensive.";
  dword_4AF7918 = 1;
  byte_4AF792C = 1;
  dword_4AF7928 = 1;
  BYTE2(qword_4AF78A8) = BYTE2(qword_4AF78A8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF78A0);
  __cxa_atexit(sub_1F6C940, &qword_4AF78A0, &off_47CFE00);
  v25 = 1;
  v21 = &v24;
  v26 = &v24;
  v27 = "Gradient gain threshold (%).";
  v19 = &v26;
  v22 = &v25;
  v20 = &v27;
  v24 = 25;
  v28 = 28;
  sub_324A1A0(qword_4AF77E0, "select-opti-loop-gradient-gain-threshold", &v27);
  __cxa_atexit(sub_1F6C940, qword_4AF77E0, &off_47CFE00);
  qword_4AF7730 = 0;
  qword_4AF7720 = (__int64)&off_4A6E058;
  qword_4AF7728 = (unsigned int)qword_4AF7728 & 0x80000000;
  qword_4AF7760 = (__int64)&qword_4AF7770;
  qword_4AF7738 = 0;
  qword_4AF7740 = 0;
  qword_4AF7748 = 0;
  qword_4AF7750 = 0;
  qword_4AF7758 = 0;
  qword_4AF7768 = 0x100000000LL;
  qword_4AF7778 = (__int64)&qword_4AF7790;
  qword_4AF7780 = 1;
  dword_4AF7788 = 0;
  byte_4AF778C = 1;
  v8 = sub_259AC30(sub_1F6C940, &qword_4AF7770);
  v9 = (unsigned int)qword_4AF7768;
  if ( HIDWORD(qword_4AF7768) < (unsigned __int64)(unsigned int)qword_4AF7768 + 1 )
  {
    v23 = v8;
    sub_25D6060(&qword_4AF7770 - 2, &qword_4AF7770, (unsigned int)qword_4AF7768 + 1LL, 8);
    v9 = (unsigned int)qword_4AF7768;
    v8 = v23;
  }
  v10 = _mm_load_si128(&v18);
  *(_QWORD *)(qword_4AF7760 + 8 * v9) = v8;
  xmmword_4AF77B8 = 0;
  xmmword_4AF77C8 = (__int128)v10;
  qword_4AF77A0 = (__int64)&off_4A64710;
  LODWORD(qword_4AF7768) = qword_4AF7768 + 1;
  byte_4AF77AC = 0;
  qword_4AF7720 = (__int64)off_4A6DEB8;
  dword_4AF7798 = 0;
  dword_4AF77A8 = 0;
  qword_4AF77B0 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF7720, "select-opti-loop-cycle-gain-threshold", 37);
  qword_4AF7748 = 44;
  qword_4AF7740 = (__int64)"Minimum gain per loop (in cycles) threshold.";
  dword_4AF7798 = 4;
  byte_4AF77AC = 1;
  dword_4AF77A8 = 4;
  BYTE2(qword_4AF7728) = BYTE2(qword_4AF7728) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF7720);
  __cxa_atexit(sub_1F6C940, &qword_4AF7720, &off_47CFE00);
  v26 = v21;
  v27 = "Minimum relative gain per loop threshold (1/X). Defaults to 12.5%";
  v25 = 1;
  v24 = 8;
  v28 = 65;
  sub_324A1A0(qword_4AF7660, "select-opti-loop-relative-gain-threshold", v20);
  __cxa_atexit(sub_1F6C940, qword_4AF7660, &off_47CFE00);
  qword_4AF75B0 = 0;
  qword_4AF75A0 = (__int64)&off_4A6E058;
  qword_4AF75A8 = (unsigned int)qword_4AF75A8 & 0x80000000;
  qword_4AF75E0 = (__int64)&qword_4AF75F0;
  qword_4AF75B8 = 0;
  qword_4AF75C0 = 0;
  qword_4AF75C8 = 0;
  qword_4AF75D0 = 0;
  qword_4AF75D8 = 0;
  qword_4AF75E8 = 0x100000000LL;
  qword_4AF75F8 = (__int64)&qword_4AF7610;
  qword_4AF7600 = 1;
  dword_4AF7608 = 0;
  byte_4AF760C = 1;
  v11 = sub_259AC30(sub_1F6C940, &qword_4AF75F0);
  v12 = (unsigned int)qword_4AF75E8;
  if ( HIDWORD(qword_4AF75E8) < (unsigned __int64)(unsigned int)qword_4AF75E8 + 1 )
  {
    v19 = (int **)v11;
    sub_25D6060(&qword_4AF75F0 - 2, &qword_4AF75F0, (unsigned int)qword_4AF75E8 + 1LL, 8);
    v12 = (unsigned int)qword_4AF75E8;
    v11 = (__int64)v19;
  }
  v13 = _mm_load_si128(&v18);
  *(_QWORD *)(qword_4AF75E0 + 8 * v12) = v11;
  xmmword_4AF7638 = 0;
  xmmword_4AF7648 = (__int128)v13;
  qword_4AF7620 = (__int64)&off_4A64710;
  LODWORD(qword_4AF75E8) = qword_4AF75E8 + 1;
  byte_4AF762C = 0;
  qword_4AF75A0 = (__int64)off_4A6DEB8;
  dword_4AF7618 = 0;
  dword_4AF7628 = 0;
  qword_4AF7630 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF75A0, "mispredict-default-rate", 23);
  dword_4AF7618 = 25;
  byte_4AF762C = 1;
  dword_4AF7628 = 25;
  qword_4AF75C8 = 45;
  BYTE2(qword_4AF75A8) = BYTE2(qword_4AF75A8) & 0x9F | 0x20;
  qword_4AF75C0 = (__int64)"Default mispredict rate (initialized to 25%).";
  sub_259EC40(&qword_4AF75A0);
  __cxa_atexit(sub_1F6C940, &qword_4AF75A0, &off_47CFE00);
  qword_4AF7540 = 1;
  qword_4AF74E0 = (__int64)&off_4A6E058;
  qword_4AF74E8 = (unsigned int)qword_4AF74E8 & 0x80000000;
  qword_4AF7520 = (__int64)&qword_4AF7530;
  qword_4AF74F0 = 0;
  qword_4AF74F8 = 0;
  qword_4AF7500 = 0;
  qword_4AF7508 = 0;
  qword_4AF7510 = 0;
  qword_4AF7518 = 0;
  qword_4AF7528 = 0x100000000LL;
  qword_4AF7538 = (__int64)&qword_4AF7550;
  dword_4AF7548 = 0;
  byte_4AF754C = 1;
  v14 = sub_259AC30(sub_1F6C940, &qword_4AF7530);
  v15 = (unsigned int)qword_4AF7528;
  v16 = (unsigned int)qword_4AF7528 + 1LL;
  if ( HIDWORD(qword_4AF7528) < v16 )
  {
    sub_25D6060(&qword_4AF7530 - 2, &qword_4AF7530, v16, 8);
    v15 = (unsigned int)qword_4AF7528;
  }
  *(_QWORD *)(qword_4AF7520 + 8 * v15) = v14;
  word_4AF7568 = 0;
  xmmword_4AF7578 = 0;
  LODWORD(qword_4AF7528) = qword_4AF7528 + 1;
  qword_4AF7560 = (__int64)&off_4A64730;
  byte_4AF7558 = 0;
  qword_4AF74E0 = (__int64)off_4A6DFF0;
  qword_4AF7570 = (__int64)off_49D9168;
  xmmword_4AF7588 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA2E8),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF74E0, "disable-loop-level-heuristics", 29);
  word_4AF7568 = 256;
  byte_4AF7558 = 0;
  qword_4AF7508 = 30;
  BYTE2(qword_4AF74E8) = BYTE2(qword_4AF74E8) & 0x9F | 0x20;
  qword_4AF7500 = (__int64)"Disable loop-level heuristics.";
  sub_259EC40(&qword_4AF74E0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF74E0, &off_47CFE00);
}

