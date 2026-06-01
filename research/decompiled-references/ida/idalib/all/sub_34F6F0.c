int sub_34F6F0()
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
  sub_22BF540(qword_2D0CA40);
  LOBYTE(qword_2D0CA40[15]) = 0;
  LOWORD(qword_2D0CA40[17]) = 0;
  qword_2D0CA40[16] = off_2C714E8;
  *(__m128 *)&qword_2D0CA40[21] = _mm_loadh_ps((const double *)off_2C78368);
  v31 = *(__m128 *)&qword_2D0CA40[21];
  qword_2D0CA40[0] = off_2C75848;
  qword_2D0CA40[18] = off_2BEAB08;
  sub_2217250(qword_2D0CA40, "enable-ext-tsp-block-placement", 30);
  qword_2D0CA40[5] = v0;
  LOBYTE(qword_2D0CA40[15]) = 0;
  qword_2D0CA40[4] = "Enable machine block placement based on the ext-tsp model, optimizing I-cache utilization.";
  BYTE2(qword_2D0CA40[1]) = BYTE2(qword_2D0CA40[1]) & 0x9F | 0x20;
  LOWORD(qword_2D0CA40[17]) = 256;
  sub_2218140(qword_2D0CA40);
  __cxa_atexit(sub_200E190, qword_2D0CA40, &off_2B25620);
  v1 = j__strlen("Whether to apply ext-tsp placement for instances w/o profile");
  sub_22BF540(qword_2D0C980);
  si128 = _mm_load_si128((const __m128i *)&v31);
  LOBYTE(qword_2D0C980[15]) = 0;
  LOWORD(qword_2D0C980[17]) = 0;
  qword_2D0C980[16] = off_2C714E8;
  qword_2D0C980[18] = off_2BEAB08;
  *(__m128i *)&qword_2D0C980[21] = si128;
  qword_2D0C980[0] = off_2C75848;
  sub_2217250(qword_2D0C980, "ext-tsp-apply-without-profile", 29);
  qword_2D0C980[5] = v1;
  qword_2D0C980[4] = "Whether to apply ext-tsp placement for instances w/o profile";
  LOWORD(qword_2D0C980[17]) = 257;
  LOBYTE(qword_2D0C980[15]) = 1;
  BYTE2(qword_2D0C980[1]) = BYTE2(qword_2D0C980[1]) & 0x9F | 0x20;
  sub_2218140(qword_2D0C980);
  __cxa_atexit(sub_200E190, qword_2D0C980, &off_2B25620);
  v3 = j__strlen("The weight of conditional forward jumps for ExtTSP value");
  sub_22BF540(&qword_2D0C8C0);
  qword_2D0C938 = 0;
  qword_2D0C948 = 0;
  v31 = _mm_loadh_ps((const double *)off_2C77C00);
  xmmword_2D0C970 = (__int128)v31;
  qword_2D0C940 = (__int64)off_2C716B8;
  qword_2D0C8C0 = (__int64)off_2C716D8;
  qword_2D0C958 = (__int64)off_2BEABF8;
  byte_2D0C950 = 0;
  sub_2217250(&qword_2D0C8C0, "ext-tsp-forward-weight-cond", 27);
  qword_2D0C8E0 = (__int64)"The weight of conditional forward jumps for ExtTSP value";
  qword_2D0C938 = 0x3FB999999999999ALL;
  qword_2D0C948 = 0x3FB999999999999ALL;
  byte_2D0C8CA = byte_2D0C8CA & 0x9F | 0x40;
  qword_2D0C8E8 = v3;
  byte_2D0C950 = 1;
  sub_2218140(&qword_2D0C8C0);
  __cxa_atexit(sub_20102F0, &qword_2D0C8C0, &off_2B25620);
  v4 = j__strlen("The weight of unconditional forward jumps for ExtTSP value");
  sub_22BF540(&qword_2D0C800);
  v5 = _mm_load_si128((const __m128i *)&v31);
  qword_2D0C880 = (__int64)off_2C716B8;
  xmmword_2D0C8B0 = (__int128)v5;
  qword_2D0C800 = (__int64)off_2C716D8;
  qword_2D0C898 = (__int64)off_2BEABF8;
  qword_2D0C878 = 0;
  qword_2D0C888 = 0;
  byte_2D0C890 = 0;
  sub_2217250(&qword_2D0C800, "ext-tsp-forward-weight-uncond", 29);
  qword_2D0C820 = (__int64)"The weight of unconditional forward jumps for ExtTSP value";
  qword_2D0C878 = 0x3FB999999999999ALL;
  qword_2D0C888 = 0x3FB999999999999ALL;
  byte_2D0C80A = byte_2D0C80A & 0x9F | 0x40;
  qword_2D0C828 = v4;
  byte_2D0C890 = 1;
  sub_2218140(&qword_2D0C800);
  __cxa_atexit(sub_20102F0, &qword_2D0C800, &off_2B25620);
  v6 = j__strlen("The weight of conditional backward jumps for ExtTSP value");
  sub_22BF540(&qword_2D0C740);
  v7 = _mm_load_si128((const __m128i *)&v31);
  qword_2D0C7C0 = (__int64)off_2C716B8;
  xmmword_2D0C7F0 = (__int128)v7;
  qword_2D0C740 = (__int64)off_2C716D8;
  qword_2D0C7D8 = (__int64)off_2BEABF8;
  qword_2D0C7B8 = 0;
  qword_2D0C7C8 = 0;
  byte_2D0C7D0 = 0;
  sub_2217250(&qword_2D0C740, "ext-tsp-backward-weight-cond", 28);
  qword_2D0C760 = (__int64)"The weight of conditional backward jumps for ExtTSP value";
  qword_2D0C7B8 = 0x3FB999999999999ALL;
  qword_2D0C7C8 = 0x3FB999999999999ALL;
  byte_2D0C74A = byte_2D0C74A & 0x9F | 0x40;
  qword_2D0C768 = v6;
  byte_2D0C7D0 = 1;
  sub_2218140(&qword_2D0C740);
  __cxa_atexit(sub_20102F0, &qword_2D0C740, &off_2B25620);
  v8 = j__strlen("The weight of unconditional backward jumps for ExtTSP value");
  sub_22BF540(&qword_2D0C680);
  v9 = _mm_load_si128((const __m128i *)&v31);
  qword_2D0C700 = (__int64)off_2C716B8;
  xmmword_2D0C730 = (__int128)v9;
  qword_2D0C680 = (__int64)off_2C716D8;
  qword_2D0C718 = (__int64)off_2BEABF8;
  qword_2D0C6F8 = 0;
  qword_2D0C708 = 0;
  byte_2D0C710 = 0;
  sub_2217250(&qword_2D0C680, "ext-tsp-backward-weight-uncond", 30);
  qword_2D0C6A0 = (__int64)"The weight of unconditional backward jumps for ExtTSP value";
  qword_2D0C6F8 = 0x3FB999999999999ALL;
  qword_2D0C708 = 0x3FB999999999999ALL;
  byte_2D0C68A = byte_2D0C68A & 0x9F | 0x40;
  qword_2D0C6A8 = v8;
  byte_2D0C710 = 1;
  sub_2218140(&qword_2D0C680);
  __cxa_atexit(sub_20102F0, &qword_2D0C680, &off_2B25620);
  v10 = j__strlen("The weight of conditional fallthrough jumps for ExtTSP value");
  sub_22BF540(&qword_2D0C5C0);
  v11 = _mm_load_si128((const __m128i *)&v31);
  qword_2D0C640 = (__int64)off_2C716B8;
  qword_2D0C5C0 = (__int64)off_2C716D8;
  xmmword_2D0C670 = (__int128)v11;
  qword_2D0C658 = (__int64)off_2BEABF8;
  qword_2D0C638 = 0;
  qword_2D0C648 = 0;
  byte_2D0C650 = 0;
  v12 = j__strlen("ext-tsp-fallthrough-weight-cond");
  sub_2217250(&qword_2D0C5C0, "ext-tsp-fallthrough-weight-cond", v12);
  qword_2D0C5E8 = v10;
  qword_2D0C638 = 0x3FF0000000000000LL;
  qword_2D0C648 = 0x3FF0000000000000LL;
  byte_2D0C5CA = byte_2D0C5CA & 0x9F | 0x40;
  qword_2D0C5E0 = (__int64)"The weight of conditional fallthrough jumps for ExtTSP value";
  byte_2D0C650 = 1;
  sub_2218140(&qword_2D0C5C0);
  __cxa_atexit(sub_20102F0, &qword_2D0C5C0, &off_2B25620);
  v13 = j__strlen("The weight of unconditional fallthrough jumps for ExtTSP value");
  sub_22BF540(&qword_2D0C500);
  v14 = _mm_load_si128((const __m128i *)&v31);
  qword_2D0C580 = (__int64)off_2C716B8;
  qword_2D0C500 = (__int64)off_2C716D8;
  xmmword_2D0C5B0 = (__int128)v14;
  qword_2D0C598 = (__int64)off_2BEABF8;
  qword_2D0C578 = 0;
  qword_2D0C588 = 0;
  byte_2D0C590 = 0;
  v15 = j__strlen("ext-tsp-fallthrough-weight-uncond");
  sub_2217250(&qword_2D0C500, "ext-tsp-fallthrough-weight-uncond", v15);
  qword_2D0C528 = v13;
  qword_2D0C578 = 0x3FF0CCCCCCCCCCCDLL;
  qword_2D0C588 = 0x3FF0CCCCCCCCCCCDLL;
  byte_2D0C50A = byte_2D0C50A & 0x9F | 0x40;
  qword_2D0C520 = (__int64)"The weight of unconditional fallthrough jumps for ExtTSP value";
  byte_2D0C590 = 1;
  sub_2218140(&qword_2D0C500);
  __cxa_atexit(sub_20102F0, &qword_2D0C500, &off_2B25620);
  v33 = j__strlen("The maximum distance (in bytes) of a forward jump for ExtTSP");
  sub_22BF540(&qword_2D0C440);
  byte_2D0C4CC = 0;
  dword_2D0C4B8 = 0;
  v32 = (__m128i)_mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2D0C4E8 = (__int128)v32;
  qword_2D0C4C0 = (__int64)off_2C712D0;
  qword_2D0C440 = (__int64)off_2C75710;
  qword_2D0C4D0 = (__int64)off_2BEAB98;
  dword_2D0C4C8 = 0;
  sub_2217250(&qword_2D0C440, "ext-tsp-forward-distance", 24);
  qword_2D0C460 = (__int64)"The maximum distance (in bytes) of a forward jump for ExtTSP";
  dword_2D0C4B8 = 1024;
  qword_2D0C468 = v33;
  byte_2D0C44A = byte_2D0C44A & 0x9F | 0x40;
  byte_2D0C4CC = 1;
  dword_2D0C4C8 = 1024;
  sub_2218140(&qword_2D0C440);
  __cxa_atexit(sub_1FED260, &qword_2D0C440, &off_2B25620);
  v33 = j__strlen("The maximum distance (in bytes) of a backward jump for ExtTSP");
  sub_22BF540(&qword_2D0C380);
  v16 = _mm_load_si128(&v32);
  qword_2D0C400 = (__int64)off_2C712D0;
  qword_2D0C380 = (__int64)off_2C75710;
  xmmword_2D0C428 = (__int128)v16;
  qword_2D0C410 = (__int64)off_2BEAB98;
  dword_2D0C3F8 = 0;
  dword_2D0C408 = 0;
  byte_2D0C40C = 0;
  v17 = j__strlen("ext-tsp-backward-distance");
  sub_2217250(&qword_2D0C380, "ext-tsp-backward-distance", v17);
  dword_2D0C3F8 = 640;
  qword_2D0C3A8 = v33;
  byte_2D0C40C = 1;
  byte_2D0C38A = byte_2D0C38A & 0x9F | 0x40;
  qword_2D0C3A0 = (__int64)"The maximum distance (in bytes) of a backward jump for ExtTSP";
  dword_2D0C408 = 640;
  sub_2218140(&qword_2D0C380);
  __cxa_atexit(sub_1FED260, &qword_2D0C380, &off_2B25620);
  v33 = j__strlen("The maximum size of a chain to create");
  sub_22BF540(&qword_2D0C2C0);
  v18 = _mm_load_si128(&v32);
  qword_2D0C340 = (__int64)off_2C712D0;
  qword_2D0C2C0 = (__int64)off_2C75710;
  xmmword_2D0C368 = (__int128)v18;
  qword_2D0C350 = (__int64)off_2BEAB98;
  dword_2D0C338 = 0;
  dword_2D0C348 = 0;
  byte_2D0C34C = 0;
  v19 = j__strlen("ext-tsp-max-chain-size");
  sub_2217250(&qword_2D0C2C0, "ext-tsp-max-chain-size", v19);
  dword_2D0C338 = 512;
  qword_2D0C2E8 = v33;
  byte_2D0C34C = 1;
  byte_2D0C2CA = byte_2D0C2CA & 0x9F | 0x40;
  qword_2D0C2E0 = (__int64)"The maximum size of a chain to create";
  dword_2D0C348 = 512;
  sub_2218140(&qword_2D0C2C0);
  __cxa_atexit(sub_1FED260, &qword_2D0C2C0, &off_2B25620);
  v33 = j__strlen("The maximum size of a chain to apply splitting");
  sub_22BF540(&qword_2D0C200);
  v20 = _mm_load_si128(&v32);
  qword_2D0C280 = (__int64)off_2C712D0;
  xmmword_2D0C2A8 = (__int128)v20;
  qword_2D0C200 = (__int64)off_2C75710;
  qword_2D0C290 = (__int64)off_2BEAB98;
  dword_2D0C278 = 0;
  dword_2D0C288 = 0;
  byte_2D0C28C = 0;
  sub_2217250(&qword_2D0C200, "ext-tsp-chain-split-threshold", 29);
  qword_2D0C220 = (__int64)"The maximum size of a chain to apply splitting";
  qword_2D0C228 = v33;
  dword_2D0C278 = 128;
  byte_2D0C20A = byte_2D0C20A & 0x9F | 0x40;
  byte_2D0C28C = 1;
  dword_2D0C288 = 128;
  sub_2218140(&qword_2D0C200);
  __cxa_atexit(sub_1FED260, &qword_2D0C200, &off_2B25620);
  v33 = j__strlen("The maximum ratio between densities of two chains for merging");
  sub_22BF540(&qword_2D0C140);
  v21 = _mm_load_si128((const __m128i *)&v31);
  qword_2D0C1C0 = (__int64)off_2C716B8;
  xmmword_2D0C1F0 = (__int128)v21;
  qword_2D0C140 = (__int64)off_2C716D8;
  qword_2D0C1D8 = (__int64)off_2BEABF8;
  qword_2D0C1B8 = 0;
  qword_2D0C1C8 = 0;
  byte_2D0C1D0 = 0;
  sub_2217250(&qword_2D0C140, "ext-tsp-max-merge-density-ratio", 31);
  qword_2D0C160 = (__int64)"The maximum ratio between densities of two chains for merging";
  qword_2D0C1B8 = 0x4059000000000000LL;
  qword_2D0C1C8 = 0x4059000000000000LL;
  byte_2D0C14A = byte_2D0C14A & 0x9F | 0x40;
  qword_2D0C168 = v33;
  byte_2D0C1D0 = 1;
  sub_2218140(&qword_2D0C140);
  __cxa_atexit(sub_20102F0, &qword_2D0C140, &off_2B25620);
  v33 = j__strlen("The size of the cache");
  sub_22BF540(&qword_2D0C080);
  v22 = _mm_load_si128(&v32);
  qword_2D0C100 = (__int64)off_2C712D0;
  qword_2D0C080 = (__int64)off_2C75710;
  xmmword_2D0C128 = (__int128)v22;
  qword_2D0C110 = (__int64)off_2BEAB98;
  dword_2D0C0F8 = 0;
  dword_2D0C108 = 0;
  byte_2D0C10C = 0;
  v23 = j__strlen("cdsort-cache-entries");
  sub_2217250(&qword_2D0C080, "cdsort-cache-entries", v23);
  qword_2D0C0A0 = (__int64)"The size of the cache";
  byte_2D0C08A = byte_2D0C08A & 0x9F | 0x40;
  qword_2D0C0A8 = v33;
  sub_2218140(&qword_2D0C080);
  __cxa_atexit(sub_1FED260, &qword_2D0C080, &off_2B25620);
  v33 = j__strlen("The size of a line in the cache");
  sub_22BF540(&qword_2D0BFC0);
  v24 = _mm_load_si128(&v32);
  qword_2D0C040 = (__int64)off_2C712D0;
  xmmword_2D0C068 = (__int128)v24;
  qword_2D0BFC0 = (__int64)off_2C75710;
  qword_2D0C050 = (__int64)off_2BEAB98;
  dword_2D0C038 = 0;
  dword_2D0C048 = 0;
  byte_2D0C04C = 0;
  sub_2217250(&qword_2D0BFC0, "cdsort-cache-size", 17);
  qword_2D0BFE0 = (__int64)"The size of a line in the cache";
  qword_2D0BFE8 = v33;
  byte_2D0BFCA = byte_2D0BFCA & 0x9F | 0x40;
  sub_2218140(&qword_2D0BFC0);
  __cxa_atexit(sub_1FED260, &qword_2D0BFC0, &off_2B25620);
  v33 = j__strlen("The maximum size of a chain to create");
  sub_22BF540(&qword_2D0BF00);
  v25 = _mm_load_si128(&v32);
  qword_2D0BF80 = (__int64)off_2C712D0;
  xmmword_2D0BFA8 = (__int128)v25;
  qword_2D0BF00 = (__int64)off_2C75710;
  qword_2D0BF90 = (__int64)off_2BEAB98;
  dword_2D0BF78 = 0;
  dword_2D0BF88 = 0;
  byte_2D0BF8C = 0;
  sub_2217250(&qword_2D0BF00, "cdsort-max-chain-size", 21);
  qword_2D0BF20 = (__int64)"The maximum size of a chain to create";
  qword_2D0BF28 = v33;
  byte_2D0BF0A = byte_2D0BF0A & 0x9F | 0x40;
  sub_2218140(&qword_2D0BF00);
  __cxa_atexit(sub_1FED260, &qword_2D0BF00, &off_2B25620);
  v26 = j__strlen("The power exponent for the distance-based locality");
  sub_22BF540(&qword_2D0BE40);
  v27 = _mm_load_si128((const __m128i *)&v31);
  qword_2D0BEC0 = (__int64)off_2C716B8;
  xmmword_2D0BEF0 = (__int128)v27;
  qword_2D0BE40 = (__int64)off_2C716D8;
  qword_2D0BED8 = (__int64)off_2BEABF8;
  qword_2D0BEB8 = 0;
  qword_2D0BEC8 = 0;
  byte_2D0BED0 = 0;
  sub_2217250(&qword_2D0BE40, "cdsort-distance-power", 21);
  qword_2D0BE60 = (__int64)"The power exponent for the distance-based locality";
  qword_2D0BE68 = v26;
  byte_2D0BE4A = byte_2D0BE4A & 0x9F | 0x40;
  sub_2218140(&qword_2D0BE40);
  __cxa_atexit(sub_20102F0, &qword_2D0BE40, &off_2B25620);
  v28 = j__strlen("The scale factor for the frequency-based locality");
  sub_22BF540(&qword_2D0BD80);
  v29 = _mm_load_si128((const __m128i *)&v31);
  qword_2D0BE00 = (__int64)off_2C716B8;
  xmmword_2D0BE30 = (__int128)v29;
  qword_2D0BD80 = (__int64)off_2C716D8;
  qword_2D0BE18 = (__int64)off_2BEABF8;
  qword_2D0BDF8 = 0;
  qword_2D0BE08 = 0;
  byte_2D0BE10 = 0;
  sub_2217250(&qword_2D0BD80, "cdsort-frequency-scale", 22);
  qword_2D0BDA0 = (__int64)"The scale factor for the frequency-based locality";
  qword_2D0BDA8 = v28;
  byte_2D0BD8A = byte_2D0BD8A & 0x9F | 0x40;
  sub_2218140(&qword_2D0BD80);
  __cxa_atexit(sub_20102F0, &qword_2D0BD80, &off_2B25620);
  qword_2D0BD70 = 0;
  xmmword_2D0BD60 = 0;
  return __cxa_atexit(sub_22BF520, &xmmword_2D0BD60, &off_2B25620);
}
