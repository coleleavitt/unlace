int sub_346750()
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
  sub_21EC750(qword_2D075A0);
  LOBYTE(qword_2D075A0[15]) = 0;
  LOWORD(qword_2D075A0[17]) = 0;
  v39 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  qword_2D075A0[16] = off_2C714E8;
  *(__m128i *)&qword_2D075A0[21] = v39;
  qword_2D075A0[0] = off_2C75848;
  qword_2D075A0[18] = off_2BEAB08;
  v1 = j__strlen("forget-scev-loop-unroll");
  sub_2217250(qword_2D075A0, "forget-scev-loop-unroll", v1);
  qword_2D075A0[5] = v0;
  LOBYTE(qword_2D075A0[15]) = 0;
  LOWORD(qword_2D075A0[17]) = 256;
  BYTE2(qword_2D075A0[1]) = BYTE2(qword_2D075A0[1]) & 0x9F | 0x20;
  qword_2D075A0[4] = "Forget everything in SCEV when doing LoopUnroll, instead of just the current top-most loop. This is"
                     " sometimes preferred to reduce compile time.";
  sub_2218140(qword_2D075A0);
  __cxa_atexit(sub_200E190, qword_2D075A0, &off_2B25620);
  v2 = j__strlen("The cost threshold for loop unrolling");
  v48 = "The cost threshold for loop unrolling";
  v49 = v2;
  LODWORD(v47) = 1;
  sub_21EC820(&unk_2D074E0, "unroll-threshold", &v47, &v48);
  __cxa_atexit(sub_1FED260, &unk_2D074E0, &off_2B25620);
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
  sub_21EC9B0(&unk_2D07420, "unroll-optsize-threshold", &v47, &v46, &v48);
  __cxa_atexit(sub_1FED260, &unk_2D07420, &off_2B25620);
  v42 = j__strlen("The cost threshold for partial loop unrolling");
  sub_21EC750(&qword_2D07360);
  dword_2D073D8 = 0;
  dword_2D073E8 = 0;
  v38 = _mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2D07408 = (__int128)v38;
  qword_2D073E0 = (__int64)off_2C712D0;
  qword_2D07360 = (__int64)off_2C75710;
  qword_2D073F0 = (__int64)off_2BEAB98;
  byte_2D073EC = 0;
  v4 = j__strlen("unroll-partial-threshold");
  sub_2217250(&qword_2D07360, "unroll-partial-threshold", v4);
  qword_2D07388 = v42;
  byte_2D0736A = byte_2D0736A & 0x9F | 0x20;
  qword_2D07380 = (__int64)"The cost threshold for partial loop unrolling";
  sub_2218140(&qword_2D07360);
  __cxa_atexit(sub_1FED260, &qword_2D07360, &off_2B25620);
  v42 = j__strlen(
          "The maximum 'boost' (represented as a percentage >= 100) applied to the threshold when aggressively unrolling "
          "a loop due to the dynamic cost savings. If completely unrolling a loop will reduce the total runtime from X to"
          " Y, we boost the loop unroll threshold to DefaultThreshold*std::min(MaxPercentThresholdBoost, X/Y). This limit"
          " avoids excessive code bloat.");
  sub_21EC750(&qword_2D072A0);
  si128 = _mm_load_si128((const __m128i *)&v38);
  qword_2D07320 = (__int64)off_2C712D0;
  qword_2D072A0 = (__int64)off_2C75710;
  xmmword_2D07348 = (__int128)si128;
  qword_2D07330 = (__int64)off_2BEAB98;
  dword_2D07318 = 0;
  dword_2D07328 = 0;
  byte_2D0732C = 0;
  v6 = j__strlen("unroll-max-percent-threshold-boost");
  sub_2217250(&qword_2D072A0, "unroll-max-percent-threshold-boost", v6);
  dword_2D07318 = 400;
  qword_2D072C8 = v42;
  byte_2D0732C = 1;
  byte_2D072AA = byte_2D072AA & 0x9F | 0x20;
  qword_2D072C0 = (__int64)"The maximum 'boost' (represented as a percentage >= 100) applied to the threshold when aggres"
                           "sively unrolling a loop due to the dynamic cost savings. If completely unrolling a loop will "
                           "reduce the total runtime from X to Y, we boost the loop unroll threshold to DefaultThreshold*"
                           "std::min(MaxPercentThresholdBoost, X/Y). This limit avoids excessive code bloat.";
  dword_2D07328 = 400;
  sub_2218140(&qword_2D072A0);
  __cxa_atexit(sub_1FED260, &qword_2D072A0, &off_2B25620);
  v42 = j__strlen(
          "Don't allow loop unrolling to simulate more than this number of iterations when checking full unroll profitability");
  sub_21EC750(&qword_2D071E0);
  v7 = _mm_load_si128((const __m128i *)&v38);
  qword_2D07260 = (__int64)off_2C712D0;
  qword_2D071E0 = (__int64)off_2C75710;
  xmmword_2D07288 = (__int128)v7;
  qword_2D07270 = (__int64)off_2BEAB98;
  dword_2D07258 = 0;
  dword_2D07268 = 0;
  byte_2D0726C = 0;
  v8 = j__strlen("unroll-max-iteration-count-to-analyze");
  sub_2217250(&qword_2D071E0, "unroll-max-iteration-count-to-analyze", v8);
  dword_2D07258 = 10;
  qword_2D07208 = v42;
  byte_2D0726C = 1;
  byte_2D071EA = byte_2D071EA & 0x9F | 0x20;
  qword_2D07200 = (__int64)"Don't allow loop unrolling to simulate more than this number of iterations when checking full"
                           " unroll profitability";
  dword_2D07268 = 10;
  sub_2218140(&qword_2D071E0);
  __cxa_atexit(sub_1FED260, &qword_2D071E0, &off_2B25620);
  v42 = j__strlen("Use this unroll count for all loops including those with unroll_count pragma values, for testing purposes");
  sub_21EC750(&qword_2D07120);
  v9 = _mm_load_si128((const __m128i *)&v38);
  qword_2D071A0 = (__int64)off_2C712D0;
  qword_2D07120 = (__int64)off_2C75710;
  xmmword_2D071C8 = (__int128)v9;
  qword_2D071B0 = (__int64)off_2BEAB98;
  dword_2D07198 = 0;
  dword_2D071A8 = 0;
  byte_2D071AC = 0;
  v10 = j__strlen("unroll-count");
  sub_2217250(&qword_2D07120, "unroll-count", v10);
  qword_2D07148 = v42;
  byte_2D0712A = byte_2D0712A & 0x9F | 0x20;
  qword_2D07140 = (__int64)"Use this unroll count for all loops including those with unroll_count pragma values, for testing purposes";
  sub_2218140(&qword_2D07120);
  __cxa_atexit(sub_1FED260, &qword_2D07120, &off_2B25620);
  v11 = j__strlen("Set the max unroll count for partial and runtime unrolling, fortesting purposes");
  v48 = "Set the max unroll count for partial and runtime unrolling, fortesting purposes";
  v49 = v11;
  LODWORD(v47) = 1;
  sub_21EC820(&unk_2D07060, "unroll-max-count", v41, v40);
  __cxa_atexit(sub_1FED260, &unk_2D07060, &off_2B25620);
  v42 = j__strlen("Set the max unroll count for full unrolling, for testing purposes");
  sub_21EC750(&qword_2D06FA0);
  v12 = _mm_load_si128((const __m128i *)&v38);
  qword_2D07020 = (__int64)off_2C712D0;
  qword_2D06FA0 = (__int64)off_2C75710;
  xmmword_2D07048 = (__int128)v12;
  qword_2D07030 = (__int64)off_2BEAB98;
  dword_2D07018 = 0;
  dword_2D07028 = 0;
  byte_2D0702C = 0;
  v13 = j__strlen("unroll-full-max-count");
  sub_2217250(&qword_2D06FA0, "unroll-full-max-count", v13);
  qword_2D06FC8 = v42;
  byte_2D06FAA = byte_2D06FAA & 0x9F | 0x20;
  qword_2D06FC0 = (__int64)"Set the max unroll count for full unrolling, for testing purposes";
  sub_2218140(&qword_2D06FA0);
  __cxa_atexit(sub_1FED260, &qword_2D06FA0, &off_2B25620);
  v42 = j__strlen("Allows loops to be partially unrolled until -unroll-threshold loop size is reached.");
  sub_21EC750(&qword_2D06EE0);
  v14 = _mm_load_si128(&v39);
  word_2D06F68 = 0;
  xmmword_2D06F88 = (__int128)v14;
  qword_2D06F60 = (__int64)off_2C714E8;
  qword_2D06EE0 = (__int64)off_2C75848;
  qword_2D06F70 = (__int64)off_2BEAB08;
  byte_2D06F58 = 0;
  v15 = j__strlen("unroll-allow-partial");
  sub_2217250(&qword_2D06EE0, "unroll-allow-partial", v15);
  qword_2D06F08 = v42;
  byte_2D06EEA = byte_2D06EEA & 0x9F | 0x20;
  qword_2D06F00 = (__int64)"Allows loops to be partially unrolled until -unroll-threshold loop size is reached.";
  sub_2218140(&qword_2D06EE0);
  __cxa_atexit(sub_200E190, &qword_2D06EE0, &off_2B25620);
  v42 = j__strlen("Allow generation of a loop remainder (extra iterations) when unrolling a loop.");
  sub_21EC750(&qword_2D06E20);
  v16 = _mm_load_si128(&v39);
  word_2D06EA8 = 0;
  xmmword_2D06EC8 = (__int128)v16;
  qword_2D06EA0 = (__int64)off_2C714E8;
  qword_2D06E20 = (__int64)off_2C75848;
  qword_2D06EB0 = (__int64)off_2BEAB08;
  byte_2D06E98 = 0;
  v17 = j__strlen("unroll-allow-remainder");
  sub_2217250(&qword_2D06E20, "unroll-allow-remainder", v17);
  qword_2D06E48 = v42;
  byte_2D06E2A = byte_2D06E2A & 0x9F | 0x20;
  qword_2D06E40 = (__int64)"Allow generation of a loop remainder (extra iterations) when unrolling a loop.";
  sub_2218140(&qword_2D06E20);
  __cxa_atexit(sub_200E190, &qword_2D06E20, &off_2B25620);
  v42 = j__strlen("Unroll loops with run-time trip counts");
  sub_21EC750(&qword_2D06D60);
  v18 = _mm_load_si128(&v39);
  qword_2D06DE0 = (__int64)off_2C714E8;
  word_2D06DE8 = 0;
  xmmword_2D06E08 = (__int128)v18;
  qword_2D06D60 = (__int64)off_2C75848;
  qword_2D06DF0 = (__int64)off_2BEAB08;
  byte_2D06DD8 = 0;
  v19 = j__strlen("unroll-runtime");
  sub_2217250(&qword_2D06D60, "unroll-runtime", v19);
  qword_2D06D88 = v42;
  byte_2D06D6A = byte_2D06D6A & 0x9F | 0x20;
  qword_2D06D80 = (__int64)"Unroll loops with run-time trip counts";
  sub_2218140(&qword_2D06D60);
  __cxa_atexit(sub_200E190, &qword_2D06D60, &off_2B25620);
  v42 = j__strlen("The max of trip count upper bound that is considered in unrolling");
  sub_21EC750(&qword_2D06CA0);
  v20 = _mm_load_si128((const __m128i *)&v38);
  qword_2D06D20 = (__int64)off_2C712D0;
  qword_2D06CA0 = (__int64)off_2C75710;
  xmmword_2D06D48 = (__int128)v20;
  qword_2D06D30 = (__int64)off_2BEAB98;
  dword_2D06D18 = 0;
  dword_2D06D28 = 0;
  byte_2D06D2C = 0;
  v21 = j__strlen("unroll-max-upperbound");
  sub_2217250(&qword_2D06CA0, "unroll-max-upperbound", v21);
  dword_2D06D18 = 8;
  qword_2D06CC8 = v42;
  byte_2D06D2C = 1;
  byte_2D06CAA = byte_2D06CAA & 0x9F | 0x20;
  qword_2D06CC0 = (__int64)"The max of trip count upper bound that is considered in unrolling";
  dword_2D06D28 = 8;
  sub_2218140(&qword_2D06CA0);
  __cxa_atexit(sub_1FED260, &qword_2D06CA0, &off_2B25620);
  v42 = j__strlen("Unrolled size limit for loops with an unroll(full) or unroll_count pragma.");
  sub_21EC750(&qword_2D06BE0);
  v22 = _mm_load_si128((const __m128i *)&v38);
  qword_2D06C60 = (__int64)off_2C712D0;
  qword_2D06BE0 = (__int64)off_2C75710;
  xmmword_2D06C88 = (__int128)v22;
  qword_2D06C70 = (__int64)off_2BEAB98;
  dword_2D06C58 = 0;
  dword_2D06C68 = 0;
  byte_2D06C6C = 0;
  v23 = j__strlen("pragma-unroll-threshold");
  sub_2217250(&qword_2D06BE0, "pragma-unroll-threshold", v23);
  dword_2D06C58 = 0x4000;
  qword_2D06C08 = v42;
  byte_2D06C6C = 1;
  byte_2D06BEA = byte_2D06BEA & 0x9F | 0x20;
  qword_2D06C00 = (__int64)"Unrolled size limit for loops with an unroll(full) or unroll_count pragma.";
  dword_2D06C68 = 0x4000;
  sub_2218140(&qword_2D06BE0);
  __cxa_atexit(sub_1FED260, &qword_2D06BE0, &off_2B25620);
  v42 = j__strlen(
          "If the runtime tripcount for the loop is lower than the threshold, the loop is considered as flat and will be "
          "less aggressively unrolled.");
  sub_21EC750(&qword_2D06B20);
  v24 = _mm_load_si128((const __m128i *)&v38);
  qword_2D06BA0 = (__int64)off_2C712D0;
  qword_2D06B20 = (__int64)off_2C75710;
  xmmword_2D06BC8 = (__int128)v24;
  qword_2D06BB0 = (__int64)off_2BEAB98;
  dword_2D06B98 = 0;
  dword_2D06BA8 = 0;
  byte_2D06BAC = 0;
  v25 = j__strlen("flat-loop-tripcount-threshold");
  sub_2217250(&qword_2D06B20, "flat-loop-tripcount-threshold", v25);
  dword_2D06B98 = 5;
  qword_2D06B48 = v42;
  byte_2D06BAC = 1;
  byte_2D06B2A = byte_2D06B2A & 0x9F | 0x20;
  qword_2D06B40 = (__int64)"If the runtime tripcount for the loop is lower than the threshold, the loop is considered as "
                           "flat and will be less aggressively unrolled.";
  dword_2D06BA8 = 5;
  sub_2218140(&qword_2D06B20);
  __cxa_atexit(sub_1FED260, &qword_2D06B20, &off_2B25620);
  v42 = j__strlen("Allow the loop remainder to be unrolled.");
  sub_21EC750(&qword_2D06A60);
  v26 = _mm_load_si128(&v39);
  word_2D06AE8 = 0;
  xmmword_2D06B08 = (__int128)v26;
  qword_2D06AE0 = (__int64)off_2C714E8;
  qword_2D06A60 = (__int64)off_2C75848;
  qword_2D06AF0 = (__int64)off_2BEAB08;
  byte_2D06AD8 = 0;
  v27 = j__strlen("unroll-remainder");
  sub_2217250(&qword_2D06A60, "unroll-remainder", v27);
  qword_2D06A88 = v42;
  byte_2D06A6A = byte_2D06A6A & 0x9F | 0x20;
  qword_2D06A80 = (__int64)"Allow the loop remainder to be unrolled.";
  sub_2218140(&qword_2D06A60);
  __cxa_atexit(sub_200E190, &qword_2D06A60, &off_2B25620);
  v42 = j__strlen(
          "Enqueue and re-visit child loops in the loop PM after unrolling. This shouldn't typically be needed as child l"
          "oops (or their clones) were already visited.");
  sub_21EC750(&qword_2D069A0);
  v28 = _mm_load_si128(&v39);
  word_2D06A28 = 0;
  xmmword_2D06A48 = (__int128)v28;
  qword_2D06A20 = (__int64)off_2C714E8;
  qword_2D069A0 = (__int64)off_2C75848;
  qword_2D06A30 = (__int64)off_2BEAB08;
  byte_2D06A18 = 0;
  v29 = j__strlen("unroll-revisit-child-loops");
  sub_2217250(&qword_2D069A0, "unroll-revisit-child-loops", v29);
  qword_2D069C8 = v42;
  byte_2D069AA = byte_2D069AA & 0x9F | 0x20;
  qword_2D069C0 = (__int64)"Enqueue and re-visit child loops in the loop PM after unrolling. This shouldn't typically be "
                           "needed as child loops (or their clones) were already visited.";
  sub_2218140(&qword_2D069A0);
  __cxa_atexit(sub_200E190, &qword_2D069A0, &off_2B25620);
  v30 = j__strlen("Threshold (max size of unrolled loop) to use in aggressive (O3) optimizations");
  sub_21EC750(&qword_2D068E0);
  v31 = _mm_load_si128((const __m128i *)&v38);
  qword_2D06960 = (__int64)off_2C712D0;
  qword_2D068E0 = (__int64)off_2C75710;
  xmmword_2D06988 = (__int128)v31;
  qword_2D06970 = (__int64)off_2BEAB98;
  dword_2D06958 = 0;
  dword_2D06968 = 0;
  byte_2D0696C = 0;
  v32 = j__strlen("unroll-threshold-aggressive");
  sub_2217250(&qword_2D068E0, "unroll-threshold-aggressive", v32);
  qword_2D06908 = v30;
  dword_2D06958 = 300;
  byte_2D0696C = 1;
  dword_2D06968 = 300;
  byte_2D068EA = byte_2D068EA & 0x9F | 0x20;
  qword_2D06900 = (__int64)"Threshold (max size of unrolled loop) to use in aggressive (O3) optimizations";
  sub_2218140(&qword_2D068E0);
  __cxa_atexit(sub_1FED260, &qword_2D068E0, &off_2B25620);
  v33 = j__strlen("Default threshold (max size of unrolled loop), used in all but O3 optimizations");
  v48 = "Default threshold (max size of unrolled loop), used in all but O3 optimizations";
  v47 = v44;
  v49 = v33;
  v46 = 1;
  v45 = 150;
  sub_21EC9B0(&unk_2D06820, "unroll-threshold-default", v41, v43, v40);
  __cxa_atexit(sub_1FED260, &unk_2D06820, &off_2B25620);
  v34 = j__strlen("Maximum allowed iterations to unroll under pragma unroll full.");
  sub_21EC750(&qword_2D06760);
  v35 = _mm_load_si128((const __m128i *)&v38);
  qword_2D067E0 = (__int64)off_2C712D0;
  qword_2D06760 = (__int64)off_2C75710;
  xmmword_2D06808 = (__int128)v35;
  qword_2D067F0 = (__int64)off_2BEAB98;
  dword_2D067D8 = 0;
  dword_2D067E8 = 0;
  byte_2D067EC = 0;
  v36 = j__strlen("pragma-unroll-full-max-iterations");
  sub_2217250(&qword_2D06760, "pragma-unroll-full-max-iterations", v36);
  qword_2D06788 = v34;
  dword_2D067D8 = 1000000;
  byte_2D067EC = 1;
  dword_2D067E8 = 1000000;
  byte_2D0676A = byte_2D0676A & 0x9F | 0x20;
  qword_2D06780 = (__int64)"Maximum allowed iterations to unroll under pragma unroll full.";
  sub_2218140(&qword_2D06760);
  return __cxa_atexit(sub_1FED260, &qword_2D06760, &off_2B25620);
}
