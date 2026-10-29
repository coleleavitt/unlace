int __fastcall sub_5A6CC0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __m128i v3; // xmm2
  __int64 v4; // rbx
  __int64 v5; // rax
  __m128i v6; // xmm5
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i v12; // xmm6
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm7
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm3
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm4
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128i v26; // xmm5
  __int64 v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm6
  __int64 v30; // rax
  __int64 v31; // rdx
  __m128i v32; // xmm7
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128i v35; // xmm3
  __int64 v36; // rax
  __int64 v37; // rdx
  __m128i v38; // xmm4
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i v41; // xmm5
  __int64 v42; // rax
  __int64 v43; // rdx
  __m128i v44; // xmm6
  __int64 v45; // rax
  __int64 v46; // rdx
  __m128i v47; // xmm7
  __int64 v48; // rax
  __int64 v49; // rdx
  __m128i v50; // xmm1
  __int64 v51; // rax
  __int64 v52; // rdx
  __m128i v53; // xmm2
  __int64 v54; // r12
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __m128i v57; // xmm3
  __m128i v59; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v60; // [rsp+10h] [rbp-98h] BYREF
  int **v61; // [rsp+28h] [rbp-80h]
  const char **v62; // [rsp+30h] [rbp-78h]
  int *v63; // [rsp+38h] [rbp-70h]
  int *v64; // [rsp+40h] [rbp-68h]
  __int64 v65; // [rsp+48h] [rbp-60h]
  int v66; // [rsp+50h] [rbp-58h] BYREF
  int v67; // [rsp+54h] [rbp-54h] BYREF
  int *v68; // [rsp+58h] [rbp-50h] BYREF
  const char *v69; // [rsp+60h] [rbp-48h] BYREF
  __int64 v70; // [rsp+68h] [rbp-40h]

  v2 = _mm_loadl_epi64((const __m128i *)&off_49EB848);
  v3 = _mm_loadl_epi64((const __m128i *)&off_49EB850);
  qword_4B04A60[2] = 0;
  qword_4B04A60[0] = (__int64)&off_4A6E058;
  qword_4B04A60[1] &= 0x80000000uLL;
  v59 = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)nullsub_267);
  v60 = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)nullsub_266);
  qword_4B04A60[3] = 0;
  qword_4B04A60[4] = 0;
  qword_4B04A60[5] = 0;
  qword_4B04A60[6] = 0;
  qword_4B04A60[7] = 0;
  qword_4B04A60[8] = (__int64)&qword_4B04A60[10];
  qword_4B04A60[9] = 0x100000000LL;
  qword_4B04A60[11] = (__int64)&qword_4B04A60[14];
  LODWORD(qword_4B04A60[13]) = 0;
  qword_4B04A60[12] = 1;
  BYTE4(qword_4B04A60[13]) = 1;
  v4 = sub_259AC30(a1, a2);
  v5 = LODWORD(qword_4B04A60[9]);
  if ( HIDWORD(qword_4B04A60[9]) < (unsigned __int64)(v5 + 1) )
  {
    sub_25D6060(&qword_4B04A60[8], &qword_4B04A60[10], v5 + 1, 8);
    v5 = LODWORD(qword_4B04A60[9]);
  }
  v6 = _mm_load_si128(&v60);
  *(_QWORD *)(qword_4B04A60[8] + 8 * v5) = v4;
  *(_OWORD *)&qword_4B04A60[19] = 0;
  *(__m128i *)&qword_4B04A60[21] = v6;
  qword_4B04A60[16] = (__int64)&off_4A64730;
  LOWORD(qword_4B04A60[17]) = 0;
  ++LODWORD(qword_4B04A60[9]);
  qword_4B04A60[0] = (__int64)off_4A6DFF0;
  LOBYTE(qword_4B04A60[15]) = 0;
  qword_4B04A60[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B04A60, "forget-scev-loop-unroll", 23);
  v7 = BYTE2(qword_4B04A60[1]);
  LOWORD(qword_4B04A60[17]) = 256;
  LOBYTE(qword_4B04A60[15]) = 0;
  qword_4B04A60[5] = 143;
  BYTE2(qword_4B04A60[1]) = v7 & 0x9F | 0x20;
  qword_4B04A60[4] = (__int64)"Forget everything in SCEV when doing LoopUnroll, instead of just the current top-most loop"
                              ". This is sometimes preferred to reduce compile time.";
  sub_259EC40(qword_4B04A60);
  __cxa_atexit(sub_1F6C9D0, qword_4B04A60, &off_47CFE00);
  v69 = "The cost threshold for loop unrolling";
  v62 = &v69;
  v61 = &v68;
  v70 = 37;
  LODWORD(v68) = 1;
  sub_359E9C0(
    qword_4B049A0,
    "unroll-threshold",
    &v68,
    &v69,
    v8,
    v9,
    v59.m128i_i64[0],
    v59.m128i_i64[1],
    v60.m128i_i64[0],
    v60.m128i_i64[1]);
  __cxa_atexit(sub_1F6C940, qword_4B049A0, &off_47CFE00);
  v69 = "The cost threshold for loop unrolling when optimizing for size";
  v63 = &v66;
  v68 = &v66;
  v64 = &v67;
  v70 = 62;
  v67 = 1;
  v66 = 0;
  sub_359EB60(qword_4B048E0, "unroll-optsize-threshold", v61, &v67, &v69);
  __cxa_atexit(sub_1F6C940, qword_4B048E0, &off_47CFE00);
  qword_4B04830 = 0;
  qword_4B04820 = (__int64)&off_4A6E058;
  qword_4B04828 = (unsigned int)qword_4B04828 & 0x80000000;
  qword_4B04860 = (__int64)&qword_4B04870;
  qword_4B04838 = 0;
  qword_4B04840 = 0;
  qword_4B04848 = 0;
  qword_4B04850 = 0;
  qword_4B04858 = 0;
  qword_4B04868 = 0x100000000LL;
  qword_4B04878 = (__int64)&qword_4B04890;
  qword_4B04880 = 1;
  dword_4B04888 = 0;
  byte_4B0488C = 1;
  v10 = sub_259AC30(sub_1F6C940, &qword_4B04870);
  v11 = (unsigned int)qword_4B04868;
  if ( HIDWORD(qword_4B04868) < (unsigned __int64)(unsigned int)qword_4B04868 + 1 )
  {
    v65 = v10;
    sub_25D6060(&qword_4B04870 - 2, &qword_4B04870, (unsigned int)qword_4B04868 + 1LL, 8);
    v11 = (unsigned int)qword_4B04868;
    v10 = v65;
  }
  v12 = _mm_load_si128(&v59);
  *(_QWORD *)(qword_4B04860 + 8 * v11) = v10;
  xmmword_4B048B8 = 0;
  xmmword_4B048C8 = (__int128)v12;
  qword_4B048A0 = (__int64)&off_4A64710;
  LODWORD(qword_4B04868) = qword_4B04868 + 1;
  byte_4B048AC = 0;
  qword_4B04820 = (__int64)off_4A6DEB8;
  dword_4B04898 = 0;
  dword_4B048A8 = 0;
  qword_4B048B0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B04820, "unroll-partial-threshold", 24);
  qword_4B04848 = 45;
  BYTE2(qword_4B04828) = BYTE2(qword_4B04828) & 0x9F | 0x20;
  qword_4B04840 = (__int64)"The cost threshold for partial loop unrolling";
  sub_259EC40(&qword_4B04820);
  __cxa_atexit(sub_1F6C940, &qword_4B04820, &off_47CFE00);
  qword_4B04770 = 0;
  qword_4B04760 = (__int64)&off_4A6E058;
  qword_4B04768 = (unsigned int)qword_4B04768 & 0x80000000;
  qword_4B047A0 = (__int64)&qword_4B047B0;
  qword_4B04778 = 0;
  qword_4B04780 = 0;
  qword_4B04788 = 0;
  qword_4B04790 = 0;
  qword_4B04798 = 0;
  qword_4B047A8 = 0x100000000LL;
  qword_4B047B8 = (__int64)&qword_4B047D0;
  qword_4B047C0 = 1;
  dword_4B047C8 = 0;
  byte_4B047CC = 1;
  v13 = sub_259AC30(sub_1F6C940, &qword_4B047B0);
  v14 = (unsigned int)qword_4B047A8;
  if ( HIDWORD(qword_4B047A8) < (unsigned __int64)(unsigned int)qword_4B047A8 + 1 )
  {
    v65 = v13;
    sub_25D6060(&qword_4B047B0 - 2, &qword_4B047B0, (unsigned int)qword_4B047A8 + 1LL, 8);
    v14 = (unsigned int)qword_4B047A8;
    v13 = v65;
  }
  v15 = _mm_load_si128(&v59);
  *(_QWORD *)(qword_4B047A0 + 8 * v14) = v13;
  xmmword_4B047F8 = 0;
  xmmword_4B04808 = (__int128)v15;
  qword_4B047E0 = (__int64)&off_4A64710;
  LODWORD(qword_4B047A8) = qword_4B047A8 + 1;
  byte_4B047EC = 0;
  qword_4B04760 = (__int64)off_4A6DEB8;
  dword_4B047D8 = 0;
  dword_4B047E8 = 0;
  qword_4B047F0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B04760, "unroll-max-percent-threshold-boost", 34);
  dword_4B047D8 = 400;
  byte_4B047EC = 1;
  dword_4B047E8 = 400;
  qword_4B04788 = 359;
  BYTE2(qword_4B04768) = BYTE2(qword_4B04768) & 0x9F | 0x20;
  qword_4B04780 = (__int64)"The maximum 'boost' (represented as a percentage >= 100) applied to the threshold when aggres"
                           "sively unrolling a loop due to the dynamic cost savings. If completely unrolling a loop will "
                           "reduce the total runtime from X to Y, we boost the loop unroll threshold to DefaultThreshold*"
                           "std::min(MaxPercentThresholdBoost, X/Y). This limit avoids excessive code bloat.";
  sub_259EC40(&qword_4B04760);
  __cxa_atexit(sub_1F6C940, &qword_4B04760, &off_47CFE00);
  qword_4B046B0 = 0;
  qword_4B046A0 = (__int64)&off_4A6E058;
  qword_4B046A8 = (unsigned int)qword_4B046A8 & 0x80000000;
  qword_4B046E0 = (__int64)&qword_4B046F0;
  qword_4B046B8 = 0;
  qword_4B046C0 = 0;
  qword_4B046C8 = 0;
  qword_4B046D0 = 0;
  qword_4B046D8 = 0;
  qword_4B046E8 = 0x100000000LL;
  qword_4B046F8 = (__int64)&qword_4B04710;
  qword_4B04700 = 1;
  dword_4B04708 = 0;
  byte_4B0470C = 1;
  v16 = sub_259AC30(sub_1F6C940, &qword_4B046F0);
  v17 = (unsigned int)qword_4B046E8;
  if ( HIDWORD(qword_4B046E8) < (unsigned __int64)(unsigned int)qword_4B046E8 + 1 )
  {
    v65 = v16;
    sub_25D6060(&qword_4B046F0 - 2, &qword_4B046F0, (unsigned int)qword_4B046E8 + 1LL, 8);
    v17 = (unsigned int)qword_4B046E8;
    v16 = v65;
  }
  v18 = _mm_load_si128(&v59);
  *(_QWORD *)(qword_4B046E0 + 8 * v17) = v16;
  xmmword_4B04738 = 0;
  xmmword_4B04748 = (__int128)v18;
  qword_4B04720 = (__int64)&off_4A64710;
  LODWORD(qword_4B046E8) = qword_4B046E8 + 1;
  byte_4B0472C = 0;
  qword_4B046A0 = (__int64)off_4A6DEB8;
  dword_4B04718 = 0;
  dword_4B04728 = 0;
  qword_4B04730 = (__int64)off_49D9228;
  sub_259F400(&qword_4B046A0, "unroll-max-iteration-count-to-analyze", 37);
  dword_4B04718 = 10;
  byte_4B0472C = 1;
  dword_4B04728 = 10;
  qword_4B046C8 = 114;
  BYTE2(qword_4B046A8) = BYTE2(qword_4B046A8) & 0x9F | 0x20;
  qword_4B046C0 = (__int64)"Don't allow loop unrolling to simulate more than this number of iterations when checking full"
                           " unroll profitability";
  sub_259EC40(&qword_4B046A0);
  __cxa_atexit(sub_1F6C940, &qword_4B046A0, &off_47CFE00);
  qword_4B045F0 = 0;
  qword_4B045E0 = (__int64)&off_4A6E058;
  qword_4B045E8 = (unsigned int)qword_4B045E8 & 0x80000000;
  qword_4B04620 = (__int64)&qword_4B04630;
  qword_4B045F8 = 0;
  qword_4B04600 = 0;
  qword_4B04608 = 0;
  qword_4B04610 = 0;
  qword_4B04618 = 0;
  qword_4B04628 = 0x100000000LL;
  qword_4B04638 = (__int64)&qword_4B04650;
  qword_4B04640 = 1;
  dword_4B04648 = 0;
  byte_4B0464C = 1;
  v19 = sub_259AC30(sub_1F6C940, &qword_4B04630);
  v20 = (unsigned int)qword_4B04628;
  if ( HIDWORD(qword_4B04628) < (unsigned __int64)(unsigned int)qword_4B04628 + 1 )
  {
    v65 = v19;
    sub_25D6060(&qword_4B04630 - 2, &qword_4B04630, (unsigned int)qword_4B04628 + 1LL, 8);
    v20 = (unsigned int)qword_4B04628;
    v19 = v65;
  }
  v21 = _mm_load_si128(&v59);
  *(_QWORD *)(qword_4B04620 + 8 * v20) = v19;
  xmmword_4B04678 = 0;
  xmmword_4B04688 = (__int128)v21;
  qword_4B04660 = (__int64)&off_4A64710;
  LODWORD(qword_4B04628) = qword_4B04628 + 1;
  byte_4B0466C = 0;
  qword_4B045E0 = (__int64)off_4A6DEB8;
  dword_4B04658 = 0;
  dword_4B04668 = 0;
  qword_4B04670 = (__int64)off_49D9228;
  sub_259F400(&qword_4B045E0, "unroll-count", 12);
  qword_4B04608 = 105;
  BYTE2(qword_4B045E8) = BYTE2(qword_4B045E8) & 0x9F | 0x20;
  qword_4B04600 = (__int64)"Use this unroll count for all loops including those with unroll_count pragma values, for testing purposes";
  sub_259EC40(&qword_4B045E0);
  __cxa_atexit(sub_1F6C940, &qword_4B045E0, &off_47CFE00);
  v70 = 79;
  v69 = "Set the max unroll count for partial and runtime unrolling, fortesting purposes";
  LODWORD(v68) = 1;
  sub_359E9C0(
    qword_4B04520,
    "unroll-max-count",
    v61,
    v62,
    v22,
    v23,
    v59.m128i_i64[0],
    v59.m128i_i64[1],
    v60.m128i_i64[0],
    v60.m128i_i64[1]);
  __cxa_atexit(sub_1F6C940, qword_4B04520, &off_47CFE00);
  qword_4B04470 = 0;
  qword_4B04460 = (__int64)&off_4A6E058;
  qword_4B04468 = (unsigned int)qword_4B04468 & 0x80000000;
  qword_4B044A0 = (__int64)&qword_4B044B0;
  qword_4B04478 = 0;
  qword_4B04480 = 0;
  qword_4B04488 = 0;
  qword_4B04490 = 0;
  qword_4B04498 = 0;
  qword_4B044A8 = 0x100000000LL;
  qword_4B044B8 = (__int64)&qword_4B044D0;
  qword_4B044C0 = 1;
  dword_4B044C8 = 0;
  byte_4B044CC = 1;
  v24 = sub_259AC30(sub_1F6C940, &qword_4B044B0);
  v25 = (unsigned int)qword_4B044A8;
  if ( HIDWORD(qword_4B044A8) < (unsigned __int64)(unsigned int)qword_4B044A8 + 1 )
  {
    v65 = v24;
    sub_25D6060(&qword_4B044B0 - 2, &qword_4B044B0, (unsigned int)qword_4B044A8 + 1LL, 8);
    v25 = (unsigned int)qword_4B044A8;
    v24 = v65;
  }
  v26 = _mm_load_si128(&v59);
  *(_QWORD *)(qword_4B044A0 + 8 * v25) = v24;
  xmmword_4B044F8 = 0;
  xmmword_4B04508 = (__int128)v26;
  qword_4B044E0 = (__int64)&off_4A64710;
  LODWORD(qword_4B044A8) = qword_4B044A8 + 1;
  byte_4B044EC = 0;
  qword_4B04460 = (__int64)off_4A6DEB8;
  dword_4B044D8 = 0;
  dword_4B044E8 = 0;
  qword_4B044F0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B04460, "unroll-full-max-count", 21);
  qword_4B04488 = 65;
  BYTE2(qword_4B04468) = BYTE2(qword_4B04468) & 0x9F | 0x20;
  qword_4B04480 = (__int64)"Set the max unroll count for full unrolling, for testing purposes";
  sub_259EC40(&qword_4B04460);
  __cxa_atexit(sub_1F6C940, &qword_4B04460, &off_47CFE00);
  qword_4B043B0 = 0;
  qword_4B043A0 = (__int64)&off_4A6E058;
  qword_4B043A8 = (unsigned int)qword_4B043A8 & 0x80000000;
  qword_4B043E0 = (__int64)&qword_4B043F0;
  qword_4B043B8 = 0;
  qword_4B043C0 = 0;
  qword_4B043C8 = 0;
  qword_4B043D0 = 0;
  qword_4B043D8 = 0;
  qword_4B043E8 = 0x100000000LL;
  qword_4B043F8 = (__int64)&qword_4B04410;
  qword_4B04400 = 1;
  dword_4B04408 = 0;
  byte_4B0440C = 1;
  v27 = sub_259AC30(sub_1F6C940, &qword_4B043F0);
  v28 = (unsigned int)qword_4B043E8;
  if ( HIDWORD(qword_4B043E8) < (unsigned __int64)(unsigned int)qword_4B043E8 + 1 )
  {
    v65 = v27;
    sub_25D6060(&qword_4B043F0 - 2, &qword_4B043F0, (unsigned int)qword_4B043E8 + 1LL, 8);
    v28 = (unsigned int)qword_4B043E8;
    v27 = v65;
  }
  v29 = _mm_load_si128(&v60);
  *(_QWORD *)(qword_4B043E0 + 8 * v28) = v27;
  word_4B04428 = 0;
  xmmword_4B04438 = 0;
  qword_4B04420 = (__int64)&off_4A64730;
  xmmword_4B04448 = (__int128)v29;
  LODWORD(qword_4B043E8) = qword_4B043E8 + 1;
  qword_4B043A0 = (__int64)off_4A6DFF0;
  byte_4B04418 = 0;
  qword_4B04430 = (__int64)off_49D9168;
  sub_259F400(&qword_4B043A0, "unroll-allow-partial", 20);
  qword_4B043C8 = 83;
  BYTE2(qword_4B043A8) = BYTE2(qword_4B043A8) & 0x9F | 0x20;
  qword_4B043C0 = (__int64)"Allows loops to be partially unrolled until -unroll-threshold loop size is reached.";
  sub_259EC40(&qword_4B043A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B043A0, &off_47CFE00);
  qword_4B042F0 = 0;
  qword_4B042E0 = (__int64)&off_4A6E058;
  qword_4B042E8 = (unsigned int)qword_4B042E8 & 0x80000000;
  qword_4B04320 = (__int64)&qword_4B04330;
  qword_4B042F8 = 0;
  qword_4B04300 = 0;
  qword_4B04308 = 0;
  qword_4B04310 = 0;
  qword_4B04318 = 0;
  qword_4B04328 = 0x100000000LL;
  qword_4B04338 = (__int64)&qword_4B04350;
  qword_4B04340 = 1;
  dword_4B04348 = 0;
  byte_4B0434C = 1;
  v30 = sub_259AC30(sub_1F6C9D0, &qword_4B04330);
  v31 = (unsigned int)qword_4B04328;
  if ( HIDWORD(qword_4B04328) < (unsigned __int64)(unsigned int)qword_4B04328 + 1 )
  {
    v65 = v30;
    sub_25D6060(&qword_4B04330 - 2, &qword_4B04330, (unsigned int)qword_4B04328 + 1LL, 8);
    v31 = (unsigned int)qword_4B04328;
    v30 = v65;
  }
  v32 = _mm_load_si128(&v60);
  *(_QWORD *)(qword_4B04320 + 8 * v31) = v30;
  word_4B04368 = 0;
  xmmword_4B04378 = 0;
  qword_4B04360 = (__int64)&off_4A64730;
  xmmword_4B04388 = (__int128)v32;
  LODWORD(qword_4B04328) = qword_4B04328 + 1;
  qword_4B042E0 = (__int64)off_4A6DFF0;
  byte_4B04358 = 0;
  qword_4B04370 = (__int64)off_49D9168;
  sub_259F400(&qword_4B042E0, "unroll-allow-remainder", 22);
  qword_4B04308 = 78;
  BYTE2(qword_4B042E8) = BYTE2(qword_4B042E8) & 0x9F | 0x20;
  qword_4B04300 = (__int64)"Allow generation of a loop remainder (extra iterations) when unrolling a loop.";
  sub_259EC40(&qword_4B042E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B042E0, &off_47CFE00);
  qword_4B04230 = 0;
  qword_4B04220 = (__int64)&off_4A6E058;
  qword_4B04228 = (unsigned int)qword_4B04228 & 0x80000000;
  qword_4B04260 = (__int64)&qword_4B04270;
  qword_4B04238 = 0;
  qword_4B04240 = 0;
  qword_4B04248 = 0;
  qword_4B04250 = 0;
  qword_4B04258 = 0;
  qword_4B04268 = 0x100000000LL;
  qword_4B04278 = (__int64)&qword_4B04290;
  qword_4B04280 = 1;
  dword_4B04288 = 0;
  byte_4B0428C = 1;
  v33 = sub_259AC30(sub_1F6C9D0, &qword_4B04270);
  v34 = (unsigned int)qword_4B04268;
  if ( HIDWORD(qword_4B04268) < (unsigned __int64)(unsigned int)qword_4B04268 + 1 )
  {
    v65 = v33;
    sub_25D6060(&qword_4B04270 - 2, &qword_4B04270, (unsigned int)qword_4B04268 + 1LL, 8);
    v34 = (unsigned int)qword_4B04268;
    v33 = v65;
  }
  v35 = _mm_load_si128(&v60);
  *(_QWORD *)(qword_4B04260 + 8 * v34) = v33;
  word_4B042A8 = 0;
  xmmword_4B042B8 = 0;
  qword_4B042A0 = (__int64)&off_4A64730;
  xmmword_4B042C8 = (__int128)v35;
  LODWORD(qword_4B04268) = qword_4B04268 + 1;
  qword_4B04220 = (__int64)off_4A6DFF0;
  byte_4B04298 = 0;
  qword_4B042B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B04220, "unroll-runtime", 14);
  qword_4B04248 = 38;
  BYTE2(qword_4B04228) = BYTE2(qword_4B04228) & 0x9F | 0x20;
  qword_4B04240 = (__int64)"Unroll loops with run-time trip counts";
  sub_259EC40(&qword_4B04220);
  __cxa_atexit(sub_1F6C9D0, &qword_4B04220, &off_47CFE00);
  qword_4B04170 = 0;
  qword_4B04160 = (__int64)&off_4A6E058;
  qword_4B04168 = (unsigned int)qword_4B04168 & 0x80000000;
  qword_4B041A0 = (__int64)&qword_4B041B0;
  qword_4B04178 = 0;
  qword_4B04180 = 0;
  qword_4B04188 = 0;
  qword_4B04190 = 0;
  qword_4B04198 = 0;
  qword_4B041A8 = 0x100000000LL;
  qword_4B041B8 = (__int64)&qword_4B041D0;
  qword_4B041C0 = 1;
  dword_4B041C8 = 0;
  byte_4B041CC = 1;
  v36 = sub_259AC30(sub_1F6C9D0, &qword_4B041B0);
  v37 = (unsigned int)qword_4B041A8;
  if ( HIDWORD(qword_4B041A8) < (unsigned __int64)(unsigned int)qword_4B041A8 + 1 )
  {
    v65 = v36;
    sub_25D6060(&qword_4B041B0 - 2, &qword_4B041B0, (unsigned int)qword_4B041A8 + 1LL, 8);
    v37 = (unsigned int)qword_4B041A8;
    v36 = v65;
  }
  v38 = _mm_load_si128(&v59);
  *(_QWORD *)(qword_4B041A0 + 8 * v37) = v36;
  xmmword_4B041F8 = 0;
  xmmword_4B04208 = (__int128)v38;
  qword_4B041E0 = (__int64)&off_4A64710;
  LODWORD(qword_4B041A8) = qword_4B041A8 + 1;
  byte_4B041EC = 0;
  qword_4B04160 = (__int64)off_4A6DEB8;
  dword_4B041D8 = 0;
  dword_4B041E8 = 0;
  qword_4B041F0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B04160, "unroll-max-upperbound", 21);
  dword_4B041D8 = 8;
  byte_4B041EC = 1;
  dword_4B041E8 = 8;
  qword_4B04188 = 65;
  BYTE2(qword_4B04168) = BYTE2(qword_4B04168) & 0x9F | 0x20;
  qword_4B04180 = (__int64)"The max of trip count upper bound that is considered in unrolling";
  sub_259EC40(&qword_4B04160);
  __cxa_atexit(sub_1F6C940, &qword_4B04160, &off_47CFE00);
  qword_4B040B0 = 0;
  qword_4B040A0 = (__int64)&off_4A6E058;
  qword_4B040A8 = (unsigned int)qword_4B040A8 & 0x80000000;
  qword_4B040E0 = (__int64)&qword_4B040F0;
  qword_4B040B8 = 0;
  qword_4B040C0 = 0;
  qword_4B040C8 = 0;
  qword_4B040D0 = 0;
  qword_4B040D8 = 0;
  qword_4B040E8 = 0x100000000LL;
  qword_4B040F8 = (__int64)&qword_4B04110;
  qword_4B04100 = 1;
  dword_4B04108 = 0;
  byte_4B0410C = 1;
  v39 = sub_259AC30(sub_1F6C940, &qword_4B040F0);
  v40 = (unsigned int)qword_4B040E8;
  if ( HIDWORD(qword_4B040E8) < (unsigned __int64)(unsigned int)qword_4B040E8 + 1 )
  {
    v65 = v39;
    sub_25D6060(&qword_4B040F0 - 2, &qword_4B040F0, (unsigned int)qword_4B040E8 + 1LL, 8);
    v40 = (unsigned int)qword_4B040E8;
    v39 = v65;
  }
  v41 = _mm_load_si128(&v59);
  *(_QWORD *)(qword_4B040E0 + 8 * v40) = v39;
  xmmword_4B04138 = 0;
  xmmword_4B04148 = (__int128)v41;
  qword_4B04120 = (__int64)&off_4A64710;
  LODWORD(qword_4B040E8) = qword_4B040E8 + 1;
  byte_4B0412C = 0;
  qword_4B040A0 = (__int64)off_4A6DEB8;
  dword_4B04118 = 0;
  dword_4B04128 = 0;
  qword_4B04130 = (__int64)off_49D9228;
  sub_259F400(&qword_4B040A0, "pragma-unroll-threshold", 23);
  dword_4B04118 = 0x4000;
  byte_4B0412C = 1;
  dword_4B04128 = 0x4000;
  qword_4B040C8 = 74;
  BYTE2(qword_4B040A8) = BYTE2(qword_4B040A8) & 0x9F | 0x20;
  qword_4B040C0 = (__int64)"Unrolled size limit for loops with an unroll(full) or unroll_count pragma.";
  sub_259EC40(&qword_4B040A0);
  __cxa_atexit(sub_1F6C940, &qword_4B040A0, &off_47CFE00);
  qword_4B03FF0 = 0;
  qword_4B03FE0 = (__int64)&off_4A6E058;
  qword_4B03FE8 = (unsigned int)qword_4B03FE8 & 0x80000000;
  qword_4B04020 = (__int64)&qword_4B04030;
  qword_4B03FF8 = 0;
  qword_4B04000 = 0;
  qword_4B04008 = 0;
  qword_4B04010 = 0;
  qword_4B04018 = 0;
  qword_4B04028 = 0x100000000LL;
  qword_4B04038 = (__int64)&qword_4B04050;
  qword_4B04040 = 1;
  dword_4B04048 = 0;
  byte_4B0404C = 1;
  v42 = sub_259AC30(sub_1F6C940, &qword_4B04030);
  v43 = (unsigned int)qword_4B04028;
  if ( HIDWORD(qword_4B04028) < (unsigned __int64)(unsigned int)qword_4B04028 + 1 )
  {
    v65 = v42;
    sub_25D6060(&qword_4B04030 - 2, &qword_4B04030, (unsigned int)qword_4B04028 + 1LL, 8);
    v43 = (unsigned int)qword_4B04028;
    v42 = v65;
  }
  v44 = _mm_load_si128(&v59);
  *(_QWORD *)(qword_4B04020 + 8 * v43) = v42;
  xmmword_4B04078 = 0;
  xmmword_4B04088 = (__int128)v44;
  qword_4B04060 = (__int64)&off_4A64710;
  LODWORD(qword_4B04028) = qword_4B04028 + 1;
  byte_4B0406C = 0;
  qword_4B03FE0 = (__int64)off_4A6DEB8;
  dword_4B04058 = 0;
  dword_4B04068 = 0;
  qword_4B04070 = (__int64)off_49D9228;
  sub_259F400(&qword_4B03FE0, "flat-loop-tripcount-threshold", 29);
  dword_4B04058 = 5;
  byte_4B0406C = 1;
  dword_4B04068 = 5;
  qword_4B04008 = 137;
  BYTE2(qword_4B03FE8) = BYTE2(qword_4B03FE8) & 0x9F | 0x20;
  qword_4B04000 = (__int64)"If the runtime tripcount for the loop is lower than the threshold, the loop is considered as "
                           "flat and will be less aggressively unrolled.";
  sub_259EC40(&qword_4B03FE0);
  __cxa_atexit(sub_1F6C940, &qword_4B03FE0, &off_47CFE00);
  qword_4B03F30 = 0;
  qword_4B03F20 = (__int64)&off_4A6E058;
  qword_4B03F28 = (unsigned int)qword_4B03F28 & 0x80000000;
  qword_4B03F60 = (__int64)&qword_4B03F70;
  qword_4B03F38 = 0;
  qword_4B03F40 = 0;
  qword_4B03F48 = 0;
  qword_4B03F50 = 0;
  qword_4B03F58 = 0;
  qword_4B03F68 = 0x100000000LL;
  qword_4B03F78 = (__int64)&qword_4B03F90;
  qword_4B03F80 = 1;
  dword_4B03F88 = 0;
  byte_4B03F8C = 1;
  v45 = sub_259AC30(sub_1F6C940, &qword_4B03F70);
  v46 = (unsigned int)qword_4B03F68;
  if ( HIDWORD(qword_4B03F68) < (unsigned __int64)(unsigned int)qword_4B03F68 + 1 )
  {
    v65 = v45;
    sub_25D6060(&qword_4B03F70 - 2, &qword_4B03F70, (unsigned int)qword_4B03F68 + 1LL, 8);
    v46 = (unsigned int)qword_4B03F68;
    v45 = v65;
  }
  v47 = _mm_load_si128(&v60);
  *(_QWORD *)(qword_4B03F60 + 8 * v46) = v45;
  word_4B03FA8 = 0;
  xmmword_4B03FB8 = 0;
  qword_4B03FA0 = (__int64)&off_4A64730;
  xmmword_4B03FC8 = (__int128)v47;
  LODWORD(qword_4B03F68) = qword_4B03F68 + 1;
  qword_4B03F20 = (__int64)off_4A6DFF0;
  byte_4B03F98 = 0;
  qword_4B03FB0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B03F20, "unroll-remainder", 16);
  qword_4B03F48 = 40;
  BYTE2(qword_4B03F28) = BYTE2(qword_4B03F28) & 0x9F | 0x20;
  qword_4B03F40 = (__int64)"Allow the loop remainder to be unrolled.";
  sub_259EC40(&qword_4B03F20);
  __cxa_atexit(sub_1F6C9D0, &qword_4B03F20, &off_47CFE00);
  qword_4B03E70 = 0;
  qword_4B03E60 = (__int64)&off_4A6E058;
  qword_4B03E68 = (unsigned int)qword_4B03E68 & 0x80000000;
  qword_4B03EA0 = (__int64)&qword_4B03EB0;
  qword_4B03E78 = 0;
  qword_4B03E80 = 0;
  qword_4B03E88 = 0;
  qword_4B03E90 = 0;
  qword_4B03E98 = 0;
  qword_4B03EA8 = 0x100000000LL;
  qword_4B03EB8 = (__int64)&qword_4B03ED0;
  qword_4B03EC0 = 1;
  dword_4B03EC8 = 0;
  byte_4B03ECC = 1;
  v48 = sub_259AC30(sub_1F6C9D0, &qword_4B03EB0);
  v49 = (unsigned int)qword_4B03EA8;
  if ( HIDWORD(qword_4B03EA8) < (unsigned __int64)(unsigned int)qword_4B03EA8 + 1 )
  {
    v65 = v48;
    sub_25D6060(&qword_4B03EB0 - 2, &qword_4B03EB0, (unsigned int)qword_4B03EA8 + 1LL, 8);
    v49 = (unsigned int)qword_4B03EA8;
    v48 = v65;
  }
  v50 = _mm_load_si128(&v60);
  *(_QWORD *)(qword_4B03EA0 + 8 * v49) = v48;
  word_4B03EE8 = 0;
  xmmword_4B03EF8 = 0;
  xmmword_4B03F08 = (__int128)v50;
  qword_4B03EE0 = (__int64)&off_4A64730;
  LODWORD(qword_4B03EA8) = qword_4B03EA8 + 1;
  byte_4B03ED8 = 0;
  qword_4B03E60 = (__int64)off_4A6DFF0;
  qword_4B03EF0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B03E60, "unroll-revisit-child-loops", 26);
  qword_4B03E88 = 154;
  BYTE2(qword_4B03E68) = BYTE2(qword_4B03E68) & 0x9F | 0x20;
  qword_4B03E80 = (__int64)"Enqueue and re-visit child loops in the loop PM after unrolling. This shouldn't typically be "
                           "needed as child loops (or their clones) were already visited.";
  sub_259EC40(&qword_4B03E60);
  __cxa_atexit(sub_1F6C9D0, &qword_4B03E60, &off_47CFE00);
  qword_4B03DB0 = 0;
  qword_4B03DA0 = (__int64)&off_4A6E058;
  qword_4B03DA8 = (unsigned int)qword_4B03DA8 & 0x80000000;
  qword_4B03DE0 = (__int64)&qword_4B03DF0;
  qword_4B03DB8 = 0;
  qword_4B03DC0 = 0;
  qword_4B03DC8 = 0;
  qword_4B03DD0 = 0;
  qword_4B03DD8 = 0;
  qword_4B03DE8 = 0x100000000LL;
  qword_4B03DF8 = (__int64)&qword_4B03E10;
  qword_4B03E00 = 1;
  dword_4B03E08 = 0;
  byte_4B03E0C = 1;
  v51 = sub_259AC30(sub_1F6C9D0, &qword_4B03DF0);
  v52 = (unsigned int)qword_4B03DE8;
  if ( HIDWORD(qword_4B03DE8) < (unsigned __int64)(unsigned int)qword_4B03DE8 + 1 )
  {
    v60.m128i_i64[0] = v51;
    sub_25D6060(&qword_4B03DF0 - 2, &qword_4B03DF0, (unsigned int)qword_4B03DE8 + 1LL, 8);
    v52 = (unsigned int)qword_4B03DE8;
    v51 = v60.m128i_i64[0];
  }
  v53 = _mm_load_si128(&v59);
  *(_QWORD *)(qword_4B03DE0 + 8 * v52) = v51;
  xmmword_4B03E38 = 0;
  xmmword_4B03E48 = (__int128)v53;
  qword_4B03E20 = (__int64)&off_4A64710;
  LODWORD(qword_4B03DE8) = qword_4B03DE8 + 1;
  byte_4B03E2C = 0;
  qword_4B03DA0 = (__int64)off_4A6DEB8;
  dword_4B03E18 = 0;
  dword_4B03E28 = 0;
  qword_4B03E30 = (__int64)off_49D9228;
  sub_259F400(&qword_4B03DA0, "unroll-threshold-aggressive", 27);
  dword_4B03E18 = 300;
  byte_4B03E2C = 1;
  dword_4B03E28 = 300;
  qword_4B03DC8 = 77;
  BYTE2(qword_4B03DA8) = BYTE2(qword_4B03DA8) & 0x9F | 0x20;
  qword_4B03DC0 = (__int64)"Threshold (max size of unrolled loop) to use in aggressive (O3) optimizations";
  sub_259EC40(&qword_4B03DA0);
  __cxa_atexit(sub_1F6C940, &qword_4B03DA0, &off_47CFE00);
  v69 = "Default threshold (max size of unrolled loop), used in all but O3 optimizations";
  v70 = 79;
  v67 = 1;
  v68 = v63;
  v66 = 150;
  sub_359EB60(qword_4B03CE0, "unroll-threshold-default", v61, v64, v62);
  __cxa_atexit(sub_1F6C940, qword_4B03CE0, &off_47CFE00);
  qword_4B03C68 = 0x100000000LL;
  qword_4B03C20 = (__int64)&off_4A6E058;
  qword_4B03C28 = (unsigned int)qword_4B03C28 & 0x80000000;
  qword_4B03C60 = (__int64)&qword_4B03C70;
  qword_4B03C30 = 0;
  qword_4B03C38 = 0;
  qword_4B03C40 = 0;
  qword_4B03C48 = 0;
  qword_4B03C50 = 0;
  qword_4B03C58 = 0;
  qword_4B03C78 = (__int64)&qword_4B03C90;
  qword_4B03C80 = 1;
  dword_4B03C88 = 0;
  byte_4B03C8C = 1;
  v54 = sub_259AC30(sub_1F6C940, &qword_4B03C70);
  v55 = (unsigned int)qword_4B03C68;
  v56 = (unsigned int)qword_4B03C68 + 1LL;
  if ( HIDWORD(qword_4B03C68) < v56 )
  {
    sub_25D6060(&qword_4B03C70 - 2, &qword_4B03C70, v56, 8);
    v55 = (unsigned int)qword_4B03C68;
  }
  v57 = _mm_load_si128(&v59);
  *(_QWORD *)(qword_4B03C60 + 8 * v55) = v54;
  xmmword_4B03CB8 = 0;
  xmmword_4B03CC8 = (__int128)v57;
  qword_4B03CA0 = (__int64)&off_4A64710;
  LODWORD(qword_4B03C68) = qword_4B03C68 + 1;
  byte_4B03CAC = 0;
  qword_4B03C20 = (__int64)off_4A6DEB8;
  dword_4B03C98 = 0;
  dword_4B03CA8 = 0;
  qword_4B03CB0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B03C20, "pragma-unroll-full-max-iterations", 33);
  dword_4B03C98 = 1000000;
  byte_4B03CAC = 1;
  dword_4B03CA8 = 1000000;
  qword_4B03C48 = 62;
  BYTE2(qword_4B03C28) = BYTE2(qword_4B03C28) & 0x9F | 0x20;
  qword_4B03C40 = (__int64)"Maximum allowed iterations to unroll under pragma unroll full.";
  sub_259EC40(&qword_4B03C20);
  return __cxa_atexit(sub_1F6C940, &qword_4B03C20, &off_47CFE00);
}

