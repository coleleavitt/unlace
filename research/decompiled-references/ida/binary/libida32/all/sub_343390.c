int sub_343390()
{
  size_t v0; // rbp
  size_t v1; // rax
  size_t v2; // rax
  size_t v3; // rax
  size_t v4; // rax
  __m128i si128; // xmm0
  size_t v6; // rax
  __m128i v7; // xmm0
  size_t v8; // rax
  __m128i v9; // xmm0
  size_t v10; // rax
  size_t v11; // rax
  __m128i v12; // xmm0
  size_t v13; // rax
  __m128i v14; // xmm1
  size_t v15; // rax
  __m128i v16; // xmm1
  size_t v17; // rax
  __m128i v18; // xmm1
  size_t v19; // rax
  __m128i v20; // xmm0
  size_t v21; // rax
  __m128i v22; // xmm0
  size_t v23; // rax
  __m128i v24; // xmm0
  size_t v25; // rax
  __m128i v26; // xmm1
  size_t v27; // rax
  __m128i v28; // xmm1
  size_t v29; // rax
  size_t v30; // r14
  __m128i v31; // xmm0
  size_t v32; // rax
  size_t v33; // rax
  size_t v34; // r14
  __m128i v35; // xmm0
  size_t v36; // rax
  __m128 v38; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v39; // [rsp+10h] [rbp-98h] BYREF
  const char **v40; // [rsp+28h] [rbp-80h]
  int **v41; // [rsp+30h] [rbp-78h]
  size_t v42; // [rsp+38h] [rbp-70h]
  int *v43; // [rsp+40h] [rbp-68h]
  int *v44; // [rsp+48h] [rbp-60h]
  int v45; // [rsp+50h] [rbp-58h] BYREF
  int v46; // [rsp+54h] [rbp-54h] BYREF
  int *v47; // [rsp+58h] [rbp-50h] BYREF
  const char *v48; // [rsp+60h] [rbp-48h] BYREF
  size_t v49; // [rsp+68h] [rbp-40h]

  v0 = j__strlen(
         "Forget everything in SCEV when doing LoopUnroll, instead of just the current top-most loop. This is sometimes p"
         "referred to reduce compile time.");
  sub_21C8A10(qword_2CDD680);
  LOBYTE(qword_2CDD680[15]) = 0;
  LOWORD(qword_2CDD680[17]) = 0;
  v39 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  qword_2CDD680[16] = off_2C474E8;
  *(__m128i *)&qword_2CDD680[21] = v39;
  qword_2CDD680[0] = off_2C4B848;
  qword_2CDD680[18] = off_2BC0B68;
  v1 = j__strlen("forget-scev-loop-unroll");
  sub_21F3510(qword_2CDD680, "forget-scev-loop-unroll", v1);
  qword_2CDD680[5] = v0;
  LOBYTE(qword_2CDD680[15]) = 0;
  LOWORD(qword_2CDD680[17]) = 256;
  BYTE2(qword_2CDD680[1]) = BYTE2(qword_2CDD680[1]) & 0x9F | 0x20;
  qword_2CDD680[4] = "Forget everything in SCEV when doing LoopUnroll, instead of just the current top-most loop. This is"
                     " sometimes preferred to reduce compile time.";
  sub_21F4400(qword_2CDD680);
  __cxa_atexit(sub_1FEA450, qword_2CDD680, &off_2AFC540);
  v2 = j__strlen("The cost threshold for loop unrolling");
  v48 = "The cost threshold for loop unrolling";
  v49 = v2;
  LODWORD(v47) = 1;
  sub_21C8AE0(&unk_2CDD5C0, "unroll-threshold", &v47, &v48);
  __cxa_atexit(sub_1FC9520, &unk_2CDD5C0, &off_2AFC540);
  v3 = j__strlen("The cost threshold for loop unrolling when optimizing for size");
  v47 = &v45;
  v48 = "The cost threshold for loop unrolling when optimizing for size";
  v44 = &v45;
  v43 = &v46;
  v49 = v3;
  v40 = &v48;
  v41 = &v47;
  v46 = 1;
  v45 = 0;
  sub_21C8C70(&unk_2CDD500, "unroll-optsize-threshold", &v47, &v46, &v48);
  __cxa_atexit(sub_1FC9520, &unk_2CDD500, &off_2AFC540);
  v42 = j__strlen("The cost threshold for partial loop unrolling");
  sub_21C8A10(&qword_2CDD440);
  dword_2CDD4B8 = 0;
  dword_2CDD4C8 = 0;
  v38 = _mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CDD4E8 = (__int128)v38;
  qword_2CDD4C0 = (__int64)off_2C472D0;
  qword_2CDD440 = (__int64)off_2C4B710;
  qword_2CDD4D0 = (__int64)off_2BC0BF8;
  byte_2CDD4CC = 0;
  v4 = j__strlen("unroll-partial-threshold");
  sub_21F3510(&qword_2CDD440, "unroll-partial-threshold", v4);
  qword_2CDD468 = v42;
  byte_2CDD44A = byte_2CDD44A & 0x9F | 0x20;
  qword_2CDD460 = (__int64)"The cost threshold for partial loop unrolling";
  sub_21F4400(&qword_2CDD440);
  __cxa_atexit(sub_1FC9520, &qword_2CDD440, &off_2AFC540);
  v42 = j__strlen(
          "The maximum 'boost' (represented as a percentage >= 100) applied to the threshold when aggressively unrolling "
          "a loop due to the dynamic cost savings. If completely unrolling a loop will reduce the total runtime from X to"
          " Y, we boost the loop unroll threshold to DefaultThreshold*std::min(MaxPercentThresholdBoost, X/Y). This limit"
          " avoids excessive code bloat.");
  sub_21C8A10(&qword_2CDD380);
  si128 = _mm_load_si128((const __m128i *)&v38);
  qword_2CDD400 = (__int64)off_2C472D0;
  qword_2CDD380 = (__int64)off_2C4B710;
  xmmword_2CDD428 = (__int128)si128;
  qword_2CDD410 = (__int64)off_2BC0BF8;
  dword_2CDD3F8 = 0;
  dword_2CDD408 = 0;
  byte_2CDD40C = 0;
  v6 = j__strlen("unroll-max-percent-threshold-boost");
  sub_21F3510(&qword_2CDD380, "unroll-max-percent-threshold-boost", v6);
  dword_2CDD3F8 = 400;
  qword_2CDD3A8 = v42;
  byte_2CDD40C = 1;
  byte_2CDD38A = byte_2CDD38A & 0x9F | 0x20;
  qword_2CDD3A0 = (__int64)"The maximum 'boost' (represented as a percentage >= 100) applied to the threshold when aggres"
                           "sively unrolling a loop due to the dynamic cost savings. If completely unrolling a loop will "
                           "reduce the total runtime from X to Y, we boost the loop unroll threshold to DefaultThreshold*"
                           "std::min(MaxPercentThresholdBoost, X/Y). This limit avoids excessive code bloat.";
  dword_2CDD408 = 400;
  sub_21F4400(&qword_2CDD380);
  __cxa_atexit(sub_1FC9520, &qword_2CDD380, &off_2AFC540);
  v42 = j__strlen(
          "Don't allow loop unrolling to simulate more than this number of iterations when checking full unroll profitability");
  sub_21C8A10(&qword_2CDD2C0);
  v7 = _mm_load_si128((const __m128i *)&v38);
  qword_2CDD340 = (__int64)off_2C472D0;
  qword_2CDD2C0 = (__int64)off_2C4B710;
  xmmword_2CDD368 = (__int128)v7;
  qword_2CDD350 = (__int64)off_2BC0BF8;
  dword_2CDD338 = 0;
  dword_2CDD348 = 0;
  byte_2CDD34C = 0;
  v8 = j__strlen("unroll-max-iteration-count-to-analyze");
  sub_21F3510(&qword_2CDD2C0, "unroll-max-iteration-count-to-analyze", v8);
  dword_2CDD338 = 10;
  qword_2CDD2E8 = v42;
  byte_2CDD34C = 1;
  byte_2CDD2CA = byte_2CDD2CA & 0x9F | 0x20;
  qword_2CDD2E0 = (__int64)"Don't allow loop unrolling to simulate more than this number of iterations when checking full"
                           " unroll profitability";
  dword_2CDD348 = 10;
  sub_21F4400(&qword_2CDD2C0);
  __cxa_atexit(sub_1FC9520, &qword_2CDD2C0, &off_2AFC540);
  v42 = j__strlen("Use this unroll count for all loops including those with unroll_count pragma values, for testing purposes");
  sub_21C8A10(&qword_2CDD200);
  v9 = _mm_load_si128((const __m128i *)&v38);
  qword_2CDD280 = (__int64)off_2C472D0;
  qword_2CDD200 = (__int64)off_2C4B710;
  xmmword_2CDD2A8 = (__int128)v9;
  qword_2CDD290 = (__int64)off_2BC0BF8;
  dword_2CDD278 = 0;
  dword_2CDD288 = 0;
  byte_2CDD28C = 0;
  v10 = j__strlen("unroll-count");
  sub_21F3510(&qword_2CDD200, "unroll-count", v10);
  qword_2CDD228 = v42;
  byte_2CDD20A = byte_2CDD20A & 0x9F | 0x20;
  qword_2CDD220 = (__int64)"Use this unroll count for all loops including those with unroll_count pragma values, for testing purposes";
  sub_21F4400(&qword_2CDD200);
  __cxa_atexit(sub_1FC9520, &qword_2CDD200, &off_2AFC540);
  v11 = j__strlen("Set the max unroll count for partial and runtime unrolling, fortesting purposes");
  v48 = "Set the max unroll count for partial and runtime unrolling, fortesting purposes";
  v49 = v11;
  LODWORD(v47) = 1;
  sub_21C8AE0(&unk_2CDD140, "unroll-max-count", v41, v40);
  __cxa_atexit(sub_1FC9520, &unk_2CDD140, &off_2AFC540);
  v42 = j__strlen("Set the max unroll count for full unrolling, for testing purposes");
  sub_21C8A10(&qword_2CDD080);
  v12 = _mm_load_si128((const __m128i *)&v38);
  qword_2CDD100 = (__int64)off_2C472D0;
  qword_2CDD080 = (__int64)off_2C4B710;
  xmmword_2CDD128 = (__int128)v12;
  qword_2CDD110 = (__int64)off_2BC0BF8;
  dword_2CDD0F8 = 0;
  dword_2CDD108 = 0;
  byte_2CDD10C = 0;
  v13 = j__strlen("unroll-full-max-count");
  sub_21F3510(&qword_2CDD080, "unroll-full-max-count", v13);
  qword_2CDD0A8 = v42;
  byte_2CDD08A = byte_2CDD08A & 0x9F | 0x20;
  qword_2CDD0A0 = (__int64)"Set the max unroll count for full unrolling, for testing purposes";
  sub_21F4400(&qword_2CDD080);
  __cxa_atexit(sub_1FC9520, &qword_2CDD080, &off_2AFC540);
  v42 = j__strlen("Allows loops to be partially unrolled until -unroll-threshold loop size is reached.");
  sub_21C8A10(&qword_2CDCFC0);
  v14 = _mm_load_si128(&v39);
  word_2CDD048 = 0;
  xmmword_2CDD068 = (__int128)v14;
  qword_2CDD040 = (__int64)off_2C474E8;
  qword_2CDCFC0 = (__int64)off_2C4B848;
  qword_2CDD050 = (__int64)off_2BC0B68;
  byte_2CDD038 = 0;
  v15 = j__strlen("unroll-allow-partial");
  sub_21F3510(&qword_2CDCFC0, "unroll-allow-partial", v15);
  qword_2CDCFE8 = v42;
  byte_2CDCFCA = byte_2CDCFCA & 0x9F | 0x20;
  qword_2CDCFE0 = (__int64)"Allows loops to be partially unrolled until -unroll-threshold loop size is reached.";
  sub_21F4400(&qword_2CDCFC0);
  __cxa_atexit(sub_1FEA450, &qword_2CDCFC0, &off_2AFC540);
  v42 = j__strlen("Allow generation of a loop remainder (extra iterations) when unrolling a loop.");
  sub_21C8A10(&qword_2CDCF00);
  v16 = _mm_load_si128(&v39);
  word_2CDCF88 = 0;
  xmmword_2CDCFA8 = (__int128)v16;
  qword_2CDCF80 = (__int64)off_2C474E8;
  qword_2CDCF00 = (__int64)off_2C4B848;
  qword_2CDCF90 = (__int64)off_2BC0B68;
  byte_2CDCF78 = 0;
  v17 = j__strlen("unroll-allow-remainder");
  sub_21F3510(&qword_2CDCF00, "unroll-allow-remainder", v17);
  qword_2CDCF28 = v42;
  byte_2CDCF0A = byte_2CDCF0A & 0x9F | 0x20;
  qword_2CDCF20 = (__int64)"Allow generation of a loop remainder (extra iterations) when unrolling a loop.";
  sub_21F4400(&qword_2CDCF00);
  __cxa_atexit(sub_1FEA450, &qword_2CDCF00, &off_2AFC540);
  v42 = j__strlen("Unroll loops with run-time trip counts");
  sub_21C8A10(&qword_2CDCE40);
  v18 = _mm_load_si128(&v39);
  qword_2CDCEC0 = (__int64)off_2C474E8;
  word_2CDCEC8 = 0;
  xmmword_2CDCEE8 = (__int128)v18;
  qword_2CDCE40 = (__int64)off_2C4B848;
  qword_2CDCED0 = (__int64)off_2BC0B68;
  byte_2CDCEB8 = 0;
  v19 = j__strlen("unroll-runtime");
  sub_21F3510(&qword_2CDCE40, "unroll-runtime", v19);
  qword_2CDCE68 = v42;
  byte_2CDCE4A = byte_2CDCE4A & 0x9F | 0x20;
  qword_2CDCE60 = (__int64)"Unroll loops with run-time trip counts";
  sub_21F4400(&qword_2CDCE40);
  __cxa_atexit(sub_1FEA450, &qword_2CDCE40, &off_2AFC540);
  v42 = j__strlen("The max of trip count upper bound that is considered in unrolling");
  sub_21C8A10(&qword_2CDCD80);
  v20 = _mm_load_si128((const __m128i *)&v38);
  qword_2CDCE00 = (__int64)off_2C472D0;
  qword_2CDCD80 = (__int64)off_2C4B710;
  xmmword_2CDCE28 = (__int128)v20;
  qword_2CDCE10 = (__int64)off_2BC0BF8;
  dword_2CDCDF8 = 0;
  dword_2CDCE08 = 0;
  byte_2CDCE0C = 0;
  v21 = j__strlen("unroll-max-upperbound");
  sub_21F3510(&qword_2CDCD80, "unroll-max-upperbound", v21);
  dword_2CDCDF8 = 8;
  qword_2CDCDA8 = v42;
  byte_2CDCE0C = 1;
  byte_2CDCD8A = byte_2CDCD8A & 0x9F | 0x20;
  qword_2CDCDA0 = (__int64)"The max of trip count upper bound that is considered in unrolling";
  dword_2CDCE08 = 8;
  sub_21F4400(&qword_2CDCD80);
  __cxa_atexit(sub_1FC9520, &qword_2CDCD80, &off_2AFC540);
  v42 = j__strlen("Unrolled size limit for loops with an unroll(full) or unroll_count pragma.");
  sub_21C8A10(&qword_2CDCCC0);
  v22 = _mm_load_si128((const __m128i *)&v38);
  qword_2CDCD40 = (__int64)off_2C472D0;
  qword_2CDCCC0 = (__int64)off_2C4B710;
  xmmword_2CDCD68 = (__int128)v22;
  qword_2CDCD50 = (__int64)off_2BC0BF8;
  dword_2CDCD38 = 0;
  dword_2CDCD48 = 0;
  byte_2CDCD4C = 0;
  v23 = j__strlen("pragma-unroll-threshold");
  sub_21F3510(&qword_2CDCCC0, "pragma-unroll-threshold", v23);
  dword_2CDCD38 = 0x4000;
  qword_2CDCCE8 = v42;
  byte_2CDCD4C = 1;
  byte_2CDCCCA = byte_2CDCCCA & 0x9F | 0x20;
  qword_2CDCCE0 = (__int64)"Unrolled size limit for loops with an unroll(full) or unroll_count pragma.";
  dword_2CDCD48 = 0x4000;
  sub_21F4400(&qword_2CDCCC0);
  __cxa_atexit(sub_1FC9520, &qword_2CDCCC0, &off_2AFC540);
  v42 = j__strlen(
          "If the runtime tripcount for the loop is lower than the threshold, the loop is considered as flat and will be "
          "less aggressively unrolled.");
  sub_21C8A10(&qword_2CDCC00);
  v24 = _mm_load_si128((const __m128i *)&v38);
  qword_2CDCC80 = (__int64)off_2C472D0;
  qword_2CDCC00 = (__int64)off_2C4B710;
  xmmword_2CDCCA8 = (__int128)v24;
  qword_2CDCC90 = (__int64)off_2BC0BF8;
  dword_2CDCC78 = 0;
  dword_2CDCC88 = 0;
  byte_2CDCC8C = 0;
  v25 = j__strlen("flat-loop-tripcount-threshold");
  sub_21F3510(&qword_2CDCC00, "flat-loop-tripcount-threshold", v25);
  dword_2CDCC78 = 5;
  qword_2CDCC28 = v42;
  byte_2CDCC8C = 1;
  byte_2CDCC0A = byte_2CDCC0A & 0x9F | 0x20;
  qword_2CDCC20 = (__int64)"If the runtime tripcount for the loop is lower than the threshold, the loop is considered as "
                           "flat and will be less aggressively unrolled.";
  dword_2CDCC88 = 5;
  sub_21F4400(&qword_2CDCC00);
  __cxa_atexit(sub_1FC9520, &qword_2CDCC00, &off_2AFC540);
  v42 = j__strlen("Allow the loop remainder to be unrolled.");
  sub_21C8A10(&qword_2CDCB40);
  v26 = _mm_load_si128(&v39);
  word_2CDCBC8 = 0;
  xmmword_2CDCBE8 = (__int128)v26;
  qword_2CDCBC0 = (__int64)off_2C474E8;
  qword_2CDCB40 = (__int64)off_2C4B848;
  qword_2CDCBD0 = (__int64)off_2BC0B68;
  byte_2CDCBB8 = 0;
  v27 = j__strlen("unroll-remainder");
  sub_21F3510(&qword_2CDCB40, "unroll-remainder", v27);
  qword_2CDCB68 = v42;
  byte_2CDCB4A = byte_2CDCB4A & 0x9F | 0x20;
  qword_2CDCB60 = (__int64)"Allow the loop remainder to be unrolled.";
  sub_21F4400(&qword_2CDCB40);
  __cxa_atexit(sub_1FEA450, &qword_2CDCB40, &off_2AFC540);
  v42 = j__strlen(
          "Enqueue and re-visit child loops in the loop PM after unrolling. This shouldn't typically be needed as child l"
          "oops (or their clones) were already visited.");
  sub_21C8A10(&qword_2CDCA80);
  v28 = _mm_load_si128(&v39);
  word_2CDCB08 = 0;
  xmmword_2CDCB28 = (__int128)v28;
  qword_2CDCB00 = (__int64)off_2C474E8;
  qword_2CDCA80 = (__int64)off_2C4B848;
  qword_2CDCB10 = (__int64)off_2BC0B68;
  byte_2CDCAF8 = 0;
  v29 = j__strlen("unroll-revisit-child-loops");
  sub_21F3510(&qword_2CDCA80, "unroll-revisit-child-loops", v29);
  qword_2CDCAA8 = v42;
  byte_2CDCA8A = byte_2CDCA8A & 0x9F | 0x20;
  qword_2CDCAA0 = (__int64)"Enqueue and re-visit child loops in the loop PM after unrolling. This shouldn't typically be "
                           "needed as child loops (or their clones) were already visited.";
  sub_21F4400(&qword_2CDCA80);
  __cxa_atexit(sub_1FEA450, &qword_2CDCA80, &off_2AFC540);
  v30 = j__strlen("Threshold (max size of unrolled loop) to use in aggressive (O3) optimizations");
  sub_21C8A10(&qword_2CDC9C0);
  v31 = _mm_load_si128((const __m128i *)&v38);
  qword_2CDCA40 = (__int64)off_2C472D0;
  qword_2CDC9C0 = (__int64)off_2C4B710;
  xmmword_2CDCA68 = (__int128)v31;
  qword_2CDCA50 = (__int64)off_2BC0BF8;
  dword_2CDCA38 = 0;
  dword_2CDCA48 = 0;
  byte_2CDCA4C = 0;
  v32 = j__strlen("unroll-threshold-aggressive");
  sub_21F3510(&qword_2CDC9C0, "unroll-threshold-aggressive", v32);
  qword_2CDC9E8 = v30;
  dword_2CDCA38 = 300;
  byte_2CDCA4C = 1;
  dword_2CDCA48 = 300;
  byte_2CDC9CA = byte_2CDC9CA & 0x9F | 0x20;
  qword_2CDC9E0 = (__int64)"Threshold (max size of unrolled loop) to use in aggressive (O3) optimizations";
  sub_21F4400(&qword_2CDC9C0);
  __cxa_atexit(sub_1FC9520, &qword_2CDC9C0, &off_2AFC540);
  v33 = j__strlen("Default threshold (max size of unrolled loop), used in all but O3 optimizations");
  v48 = "Default threshold (max size of unrolled loop), used in all but O3 optimizations";
  v47 = v44;
  v49 = v33;
  v46 = 1;
  v45 = 150;
  sub_21C8C70(&unk_2CDC900, "unroll-threshold-default", v41, v43, v40);
  __cxa_atexit(sub_1FC9520, &unk_2CDC900, &off_2AFC540);
  v34 = j__strlen("Maximum allowed iterations to unroll under pragma unroll full.");
  sub_21C8A10(&qword_2CDC840);
  v35 = _mm_load_si128((const __m128i *)&v38);
  qword_2CDC8C0 = (__int64)off_2C472D0;
  qword_2CDC840 = (__int64)off_2C4B710;
  xmmword_2CDC8E8 = (__int128)v35;
  qword_2CDC8D0 = (__int64)off_2BC0BF8;
  dword_2CDC8B8 = 0;
  dword_2CDC8C8 = 0;
  byte_2CDC8CC = 0;
  v36 = j__strlen("pragma-unroll-full-max-iterations");
  sub_21F3510(&qword_2CDC840, "pragma-unroll-full-max-iterations", v36);
  qword_2CDC868 = v34;
  dword_2CDC8B8 = (int)&stru_F4240;
  byte_2CDC8CC = 1;
  dword_2CDC8C8 = (int)&stru_F4240;
  byte_2CDC84A = byte_2CDC84A & 0x9F | 0x20;
  qword_2CDC860 = (__int64)"Maximum allowed iterations to unroll under pragma unroll full.";
  sub_21F4400(&qword_2CDC840);
  return __cxa_atexit(sub_1FC9520, &qword_2CDC840, &off_2AFC540);
}

