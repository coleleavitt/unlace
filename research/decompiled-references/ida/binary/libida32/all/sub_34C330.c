int sub_34C330()
{
  size_t v0; // r14
  size_t v1; // r14
  __m128i si128; // xmm0
  size_t v3; // r14
  size_t v4; // r14
  __m128i v5; // xmm1
  size_t v6; // r14
  __m128i v7; // xmm1
  size_t v8; // r14
  __m128i v9; // xmm1
  size_t v10; // r14
  __m128i v11; // xmm1
  size_t v12; // rax
  size_t v13; // r14
  __m128i v14; // xmm1
  size_t v15; // rax
  __m128i v16; // xmm2
  size_t v17; // rax
  __m128i v18; // xmm2
  size_t v19; // rax
  __m128i v20; // xmm2
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  size_t v23; // rax
  __m128i v24; // xmm2
  __m128i v25; // xmm2
  size_t v26; // r14
  __m128i v27; // xmm1
  size_t v28; // r14
  __m128i v29; // xmm1
  __m128 v31; // [rsp+0h] [rbp-68h] BYREF
  __m128i v32; // [rsp+10h] [rbp-58h] BYREF
  size_t v33; // [rsp+28h] [rbp-40h]

  v0 = j__strlen("Enable machine block placement based on the ext-tsp model, optimizing I-cache utilization.");
  sub_229B800(qword_2CE2B20);
  LOBYTE(qword_2CE2B20[15]) = 0;
  LOWORD(qword_2CE2B20[17]) = 0;
  qword_2CE2B20[16] = off_2C474E8;
  *(__m128 *)&qword_2CE2B20[21] = _mm_loadh_ps((const double *)off_2C4E368);
  v31 = *(__m128 *)&qword_2CE2B20[21];
  qword_2CE2B20[0] = off_2C4B848;
  qword_2CE2B20[18] = off_2BC0B68;
  sub_21F3510(qword_2CE2B20, "enable-ext-tsp-block-placement", 30);
  qword_2CE2B20[5] = v0;
  LOBYTE(qword_2CE2B20[15]) = 0;
  qword_2CE2B20[4] = "Enable machine block placement based on the ext-tsp model, optimizing I-cache utilization.";
  BYTE2(qword_2CE2B20[1]) = BYTE2(qword_2CE2B20[1]) & 0x9F | 0x20;
  LOWORD(qword_2CE2B20[17]) = 256;
  sub_21F4400(qword_2CE2B20);
  __cxa_atexit(sub_1FEA450, qword_2CE2B20, &off_2AFC540);
  v1 = j__strlen("Whether to apply ext-tsp placement for instances w/o profile");
  sub_229B800(qword_2CE2A60);
  si128 = _mm_load_si128((const __m128i *)&v31);
  LOBYTE(qword_2CE2A60[15]) = 0;
  LOWORD(qword_2CE2A60[17]) = 0;
  qword_2CE2A60[16] = off_2C474E8;
  qword_2CE2A60[18] = off_2BC0B68;
  *(__m128i *)&qword_2CE2A60[21] = si128;
  qword_2CE2A60[0] = off_2C4B848;
  sub_21F3510(qword_2CE2A60, "ext-tsp-apply-without-profile", 29);
  qword_2CE2A60[5] = v1;
  qword_2CE2A60[4] = "Whether to apply ext-tsp placement for instances w/o profile";
  LOWORD(qword_2CE2A60[17]) = 257;
  LOBYTE(qword_2CE2A60[15]) = 1;
  BYTE2(qword_2CE2A60[1]) = BYTE2(qword_2CE2A60[1]) & 0x9F | 0x20;
  sub_21F4400(qword_2CE2A60);
  __cxa_atexit(sub_1FEA450, qword_2CE2A60, &off_2AFC540);
  v3 = j__strlen("The weight of conditional forward jumps for ExtTSP value");
  sub_229B800(&qword_2CE29A0);
  qword_2CE2A18 = 0;
  qword_2CE2A28 = 0;
  v31 = _mm_loadh_ps((const double *)off_2C4DC00);
  xmmword_2CE2A50 = (__int128)v31;
  qword_2CE2A20 = (__int64)off_2C476B8;
  qword_2CE29A0 = (__int64)off_2C476D8;
  qword_2CE2A38 = (__int64)off_2BC0C58;
  byte_2CE2A30 = 0;
  sub_21F3510(&qword_2CE29A0, "ext-tsp-forward-weight-cond", 27);
  qword_2CE29C0 = (__int64)"The weight of conditional forward jumps for ExtTSP value";
  qword_2CE2A18 = 0x3FB999999999999ALL;
  qword_2CE2A28 = 0x3FB999999999999ALL;
  byte_2CE29AA = byte_2CE29AA & 0x9F | 0x40;
  qword_2CE29C8 = v3;
  byte_2CE2A30 = 1;
  sub_21F4400(&qword_2CE29A0);
  __cxa_atexit(sub_1FEC5B0, &qword_2CE29A0, &off_2AFC540);
  v4 = j__strlen("The weight of unconditional forward jumps for ExtTSP value");
  sub_229B800(&qword_2CE28E0);
  v5 = _mm_load_si128((const __m128i *)&v31);
  qword_2CE2960 = (__int64)off_2C476B8;
  xmmword_2CE2990 = (__int128)v5;
  qword_2CE28E0 = (__int64)off_2C476D8;
  qword_2CE2978 = (__int64)off_2BC0C58;
  qword_2CE2958 = 0;
  qword_2CE2968 = 0;
  byte_2CE2970 = 0;
  sub_21F3510(&qword_2CE28E0, "ext-tsp-forward-weight-uncond", 29);
  qword_2CE2900 = (__int64)"The weight of unconditional forward jumps for ExtTSP value";
  qword_2CE2958 = 0x3FB999999999999ALL;
  qword_2CE2968 = 0x3FB999999999999ALL;
  byte_2CE28EA = byte_2CE28EA & 0x9F | 0x40;
  qword_2CE2908 = v4;
  byte_2CE2970 = 1;
  sub_21F4400(&qword_2CE28E0);
  __cxa_atexit(sub_1FEC5B0, &qword_2CE28E0, &off_2AFC540);
  v6 = j__strlen("The weight of conditional backward jumps for ExtTSP value");
  sub_229B800(&qword_2CE2820);
  v7 = _mm_load_si128((const __m128i *)&v31);
  qword_2CE28A0 = (__int64)off_2C476B8;
  xmmword_2CE28D0 = (__int128)v7;
  qword_2CE2820 = (__int64)off_2C476D8;
  qword_2CE28B8 = (__int64)off_2BC0C58;
  qword_2CE2898 = 0;
  qword_2CE28A8 = 0;
  byte_2CE28B0 = 0;
  sub_21F3510(&qword_2CE2820, "ext-tsp-backward-weight-cond", 28);
  qword_2CE2840 = (__int64)"The weight of conditional backward jumps for ExtTSP value";
  qword_2CE2898 = 0x3FB999999999999ALL;
  qword_2CE28A8 = 0x3FB999999999999ALL;
  byte_2CE282A = byte_2CE282A & 0x9F | 0x40;
  qword_2CE2848 = v6;
  byte_2CE28B0 = 1;
  sub_21F4400(&qword_2CE2820);
  __cxa_atexit(sub_1FEC5B0, &qword_2CE2820, &off_2AFC540);
  v8 = j__strlen("The weight of unconditional backward jumps for ExtTSP value");
  sub_229B800(&qword_2CE2760);
  v9 = _mm_load_si128((const __m128i *)&v31);
  qword_2CE27E0 = (__int64)off_2C476B8;
  xmmword_2CE2810 = (__int128)v9;
  qword_2CE2760 = (__int64)off_2C476D8;
  qword_2CE27F8 = (__int64)off_2BC0C58;
  qword_2CE27D8 = 0;
  qword_2CE27E8 = 0;
  byte_2CE27F0 = 0;
  sub_21F3510(&qword_2CE2760, "ext-tsp-backward-weight-uncond", 30);
  qword_2CE2780 = (__int64)"The weight of unconditional backward jumps for ExtTSP value";
  qword_2CE27D8 = 0x3FB999999999999ALL;
  qword_2CE27E8 = 0x3FB999999999999ALL;
  byte_2CE276A = byte_2CE276A & 0x9F | 0x40;
  qword_2CE2788 = v8;
  byte_2CE27F0 = 1;
  sub_21F4400(&qword_2CE2760);
  __cxa_atexit(sub_1FEC5B0, &qword_2CE2760, &off_2AFC540);
  v10 = j__strlen("The weight of conditional fallthrough jumps for ExtTSP value");
  sub_229B800(&qword_2CE26A0);
  v11 = _mm_load_si128((const __m128i *)&v31);
  qword_2CE2720 = (__int64)off_2C476B8;
  qword_2CE26A0 = (__int64)off_2C476D8;
  xmmword_2CE2750 = (__int128)v11;
  qword_2CE2738 = (__int64)off_2BC0C58;
  qword_2CE2718 = 0;
  qword_2CE2728 = 0;
  byte_2CE2730 = 0;
  v12 = j__strlen("ext-tsp-fallthrough-weight-cond");
  sub_21F3510(&qword_2CE26A0, "ext-tsp-fallthrough-weight-cond", v12);
  qword_2CE26C8 = v10;
  qword_2CE2718 = 0x3FF0000000000000LL;
  qword_2CE2728 = 0x3FF0000000000000LL;
  byte_2CE26AA = byte_2CE26AA & 0x9F | 0x40;
  qword_2CE26C0 = (__int64)"The weight of conditional fallthrough jumps for ExtTSP value";
  byte_2CE2730 = 1;
  sub_21F4400(&qword_2CE26A0);
  __cxa_atexit(sub_1FEC5B0, &qword_2CE26A0, &off_2AFC540);
  v13 = j__strlen("The weight of unconditional fallthrough jumps for ExtTSP value");
  sub_229B800(&qword_2CE25E0);
  v14 = _mm_load_si128((const __m128i *)&v31);
  qword_2CE2660 = (__int64)off_2C476B8;
  qword_2CE25E0 = (__int64)off_2C476D8;
  xmmword_2CE2690 = (__int128)v14;
  qword_2CE2678 = (__int64)off_2BC0C58;
  qword_2CE2658 = 0;
  qword_2CE2668 = 0;
  byte_2CE2670 = 0;
  v15 = j__strlen("ext-tsp-fallthrough-weight-uncond");
  sub_21F3510(&qword_2CE25E0, "ext-tsp-fallthrough-weight-uncond", v15);
  qword_2CE2608 = v13;
  qword_2CE2658 = 0x3FF0CCCCCCCCCCCDLL;
  qword_2CE2668 = 0x3FF0CCCCCCCCCCCDLL;
  byte_2CE25EA = byte_2CE25EA & 0x9F | 0x40;
  qword_2CE2600 = (__int64)"The weight of unconditional fallthrough jumps for ExtTSP value";
  byte_2CE2670 = 1;
  sub_21F4400(&qword_2CE25E0);
  __cxa_atexit(sub_1FEC5B0, &qword_2CE25E0, &off_2AFC540);
  v33 = j__strlen("The maximum distance (in bytes) of a forward jump for ExtTSP");
  sub_229B800(&qword_2CE2520);
  byte_2CE25AC = 0;
  dword_2CE2598 = 0;
  v32 = (__m128i)_mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CE25C8 = (__int128)v32;
  qword_2CE25A0 = (__int64)off_2C472D0;
  qword_2CE2520 = (__int64)off_2C4B710;
  qword_2CE25B0 = (__int64)off_2BC0BF8;
  dword_2CE25A8 = 0;
  sub_21F3510(&qword_2CE2520, "ext-tsp-forward-distance", 24);
  qword_2CE2540 = (__int64)"The maximum distance (in bytes) of a forward jump for ExtTSP";
  dword_2CE2598 = 1024;
  qword_2CE2548 = v33;
  byte_2CE252A = byte_2CE252A & 0x9F | 0x40;
  byte_2CE25AC = 1;
  dword_2CE25A8 = 1024;
  sub_21F4400(&qword_2CE2520);
  __cxa_atexit(sub_1FC9520, &qword_2CE2520, &off_2AFC540);
  v33 = j__strlen("The maximum distance (in bytes) of a backward jump for ExtTSP");
  sub_229B800(&qword_2CE2460);
  v16 = _mm_load_si128(&v32);
  qword_2CE24E0 = (__int64)off_2C472D0;
  qword_2CE2460 = (__int64)off_2C4B710;
  xmmword_2CE2508 = (__int128)v16;
  qword_2CE24F0 = (__int64)off_2BC0BF8;
  dword_2CE24D8 = 0;
  dword_2CE24E8 = 0;
  byte_2CE24EC = 0;
  v17 = j__strlen("ext-tsp-backward-distance");
  sub_21F3510(&qword_2CE2460, "ext-tsp-backward-distance", v17);
  dword_2CE24D8 = 640;
  qword_2CE2488 = v33;
  byte_2CE24EC = 1;
  byte_2CE246A = byte_2CE246A & 0x9F | 0x40;
  qword_2CE2480 = (__int64)"The maximum distance (in bytes) of a backward jump for ExtTSP";
  dword_2CE24E8 = 640;
  sub_21F4400(&qword_2CE2460);
  __cxa_atexit(sub_1FC9520, &qword_2CE2460, &off_2AFC540);
  v33 = j__strlen("The maximum size of a chain to create");
  sub_229B800(&qword_2CE23A0);
  v18 = _mm_load_si128(&v32);
  qword_2CE2420 = (__int64)off_2C472D0;
  qword_2CE23A0 = (__int64)off_2C4B710;
  xmmword_2CE2448 = (__int128)v18;
  qword_2CE2430 = (__int64)off_2BC0BF8;
  dword_2CE2418 = 0;
  dword_2CE2428 = 0;
  byte_2CE242C = 0;
  v19 = j__strlen("ext-tsp-max-chain-size");
  sub_21F3510(&qword_2CE23A0, "ext-tsp-max-chain-size", v19);
  dword_2CE2418 = 512;
  qword_2CE23C8 = v33;
  byte_2CE242C = 1;
  byte_2CE23AA = byte_2CE23AA & 0x9F | 0x40;
  qword_2CE23C0 = (__int64)"The maximum size of a chain to create";
  dword_2CE2428 = 512;
  sub_21F4400(&qword_2CE23A0);
  __cxa_atexit(sub_1FC9520, &qword_2CE23A0, &off_2AFC540);
  v33 = j__strlen("The maximum size of a chain to apply splitting");
  sub_229B800(&qword_2CE22E0);
  v20 = _mm_load_si128(&v32);
  qword_2CE2360 = (__int64)off_2C472D0;
  xmmword_2CE2388 = (__int128)v20;
  qword_2CE22E0 = (__int64)off_2C4B710;
  qword_2CE2370 = (__int64)off_2BC0BF8;
  dword_2CE2358 = 0;
  dword_2CE2368 = 0;
  byte_2CE236C = 0;
  sub_21F3510(&qword_2CE22E0, "ext-tsp-chain-split-threshold", 29);
  qword_2CE2300 = (__int64)"The maximum size of a chain to apply splitting";
  qword_2CE2308 = v33;
  dword_2CE2358 = 128;
  byte_2CE22EA = byte_2CE22EA & 0x9F | 0x40;
  byte_2CE236C = 1;
  dword_2CE2368 = 128;
  sub_21F4400(&qword_2CE22E0);
  __cxa_atexit(sub_1FC9520, &qword_2CE22E0, &off_2AFC540);
  v33 = j__strlen("The maximum ratio between densities of two chains for merging");
  sub_229B800(&qword_2CE2220);
  v21 = _mm_load_si128((const __m128i *)&v31);
  qword_2CE22A0 = (__int64)off_2C476B8;
  xmmword_2CE22D0 = (__int128)v21;
  qword_2CE2220 = (__int64)off_2C476D8;
  qword_2CE22B8 = (__int64)off_2BC0C58;
  qword_2CE2298 = 0;
  qword_2CE22A8 = 0;
  byte_2CE22B0 = 0;
  sub_21F3510(&qword_2CE2220, "ext-tsp-max-merge-density-ratio", 31);
  qword_2CE2240 = (__int64)"The maximum ratio between densities of two chains for merging";
  qword_2CE2298 = 0x4059000000000000LL;
  qword_2CE22A8 = 0x4059000000000000LL;
  byte_2CE222A = byte_2CE222A & 0x9F | 0x40;
  qword_2CE2248 = v33;
  byte_2CE22B0 = 1;
  sub_21F4400(&qword_2CE2220);
  __cxa_atexit(sub_1FEC5B0, &qword_2CE2220, &off_2AFC540);
  v33 = j__strlen("The size of the cache");
  sub_229B800(&qword_2CE2160);
  v22 = _mm_load_si128(&v32);
  qword_2CE21E0 = (__int64)off_2C472D0;
  qword_2CE2160 = (__int64)off_2C4B710;
  xmmword_2CE2208 = (__int128)v22;
  qword_2CE21F0 = (__int64)off_2BC0BF8;
  dword_2CE21D8 = 0;
  dword_2CE21E8 = 0;
  byte_2CE21EC = 0;
  v23 = j__strlen("cdsort-cache-entries");
  sub_21F3510(&qword_2CE2160, "cdsort-cache-entries", v23);
  qword_2CE2180 = (__int64)"The size of the cache";
  byte_2CE216A = byte_2CE216A & 0x9F | 0x40;
  qword_2CE2188 = v33;
  sub_21F4400(&qword_2CE2160);
  __cxa_atexit(sub_1FC9520, &qword_2CE2160, &off_2AFC540);
  v33 = j__strlen("The size of a line in the cache");
  sub_229B800(&qword_2CE20A0);
  v24 = _mm_load_si128(&v32);
  qword_2CE2120 = (__int64)off_2C472D0;
  xmmword_2CE2148 = (__int128)v24;
  qword_2CE20A0 = (__int64)off_2C4B710;
  qword_2CE2130 = (__int64)off_2BC0BF8;
  dword_2CE2118 = 0;
  dword_2CE2128 = 0;
  byte_2CE212C = 0;
  sub_21F3510(&qword_2CE20A0, "cdsort-cache-size", 17);
  qword_2CE20C0 = (__int64)"The size of a line in the cache";
  qword_2CE20C8 = v33;
  byte_2CE20AA = byte_2CE20AA & 0x9F | 0x40;
  sub_21F4400(&qword_2CE20A0);
  __cxa_atexit(sub_1FC9520, &qword_2CE20A0, &off_2AFC540);
  v33 = j__strlen("The maximum size of a chain to create");
  sub_229B800(&qword_2CE1FE0);
  v25 = _mm_load_si128(&v32);
  qword_2CE2060 = (__int64)off_2C472D0;
  xmmword_2CE2088 = (__int128)v25;
  qword_2CE1FE0 = (__int64)off_2C4B710;
  qword_2CE2070 = (__int64)off_2BC0BF8;
  dword_2CE2058 = 0;
  dword_2CE2068 = 0;
  byte_2CE206C = 0;
  sub_21F3510(&qword_2CE1FE0, "cdsort-max-chain-size", 21);
  qword_2CE2000 = (__int64)"The maximum size of a chain to create";
  qword_2CE2008 = v33;
  byte_2CE1FEA = byte_2CE1FEA & 0x9F | 0x40;
  sub_21F4400(&qword_2CE1FE0);
  __cxa_atexit(sub_1FC9520, &qword_2CE1FE0, &off_2AFC540);
  v26 = j__strlen("The power exponent for the distance-based locality");
  sub_229B800(&qword_2CE1F20);
  v27 = _mm_load_si128((const __m128i *)&v31);
  qword_2CE1FA0 = (__int64)off_2C476B8;
  xmmword_2CE1FD0 = (__int128)v27;
  qword_2CE1F20 = (__int64)off_2C476D8;
  qword_2CE1FB8 = (__int64)off_2BC0C58;
  qword_2CE1F98 = 0;
  qword_2CE1FA8 = 0;
  byte_2CE1FB0 = 0;
  sub_21F3510(&qword_2CE1F20, "cdsort-distance-power", 21);
  qword_2CE1F40 = (__int64)"The power exponent for the distance-based locality";
  qword_2CE1F48 = v26;
  byte_2CE1F2A = byte_2CE1F2A & 0x9F | 0x40;
  sub_21F4400(&qword_2CE1F20);
  __cxa_atexit(sub_1FEC5B0, &qword_2CE1F20, &off_2AFC540);
  v28 = j__strlen("The scale factor for the frequency-based locality");
  sub_229B800(&qword_2CE1E60);
  v29 = _mm_load_si128((const __m128i *)&v31);
  qword_2CE1EE0 = (__int64)off_2C476B8;
  xmmword_2CE1F10 = (__int128)v29;
  qword_2CE1E60 = (__int64)off_2C476D8;
  qword_2CE1EF8 = (__int64)off_2BC0C58;
  qword_2CE1ED8 = 0;
  qword_2CE1EE8 = 0;
  byte_2CE1EF0 = 0;
  sub_21F3510(&qword_2CE1E60, "cdsort-frequency-scale", 22);
  qword_2CE1E80 = (__int64)"The scale factor for the frequency-based locality";
  qword_2CE1E88 = v28;
  byte_2CE1E6A = byte_2CE1E6A & 0x9F | 0x40;
  sub_21F4400(&qword_2CE1E60);
  __cxa_atexit(sub_1FEC5B0, &qword_2CE1E60, &off_2AFC540);
  qword_2CE1E50 = 0;
  xmmword_2CE1E40 = 0;
  return __cxa_atexit(sub_229B7E0, &xmmword_2CE1E40, &off_2AFC540);
}

