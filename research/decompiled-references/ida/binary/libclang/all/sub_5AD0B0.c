int __fastcall sub_5AD0B0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm2
  __m128i v3; // xmm3
  __m128i v4; // xmm1
  __int64 v5; // r13
  __int64 v6; // rax
  __m128i v7; // xmm7
  char v8; // al
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int64 *v11; // r9
  __int64 v12; // rax
  __m128i v13; // xmm4
  char v14; // al
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm5
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm6
  __int64 v22; // rax
  __int64 v23; // rdx
  __m128i v24; // xmm7
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // xmm4
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm5
  __int64 v31; // rax
  __int64 v32; // rdx
  __m128i v33; // xmm6
  __int64 v34; // rax
  __int64 v35; // rdx
  __m128i v36; // xmm7
  __int64 v37; // rax
  __int64 v38; // rdx
  __m128i v39; // xmm1
  __int64 v40; // rax
  __int64 v41; // rdx
  __m128i v42; // xmm2
  __int64 v43; // rax
  __int64 v44; // rdx
  __m128i v45; // xmm3
  __int64 v46; // rax
  __int64 v47; // rdx
  __m128i v48; // xmm4
  __int64 v49; // rax
  __int64 v50; // rdx
  __m128i v51; // xmm5
  __int64 v52; // rax
  __int64 v53; // rdx
  __m128i v54; // xmm6
  __int64 v55; // rax
  __int64 v56; // rdx
  __m128i v57; // xmm7
  __int64 v58; // rax
  __int64 v59; // rdx
  __m128i v60; // xmm1
  __int64 v61; // rbp
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __m128i v64; // xmm2
  __m128i v66; // [rsp+0h] [rbp-78h] BYREF
  __m128i v67; // [rsp+10h] [rbp-68h] BYREF
  __m128i v68; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v69; // [rsp+38h] [rbp-40h]

  v2 = _mm_loadl_epi64((const __m128i *)&off_49EBAE0);
  v3 = _mm_loadl_epi64((const __m128i *)&off_49EBAE8);
  v4 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EBAD8), (__m128i)(unsigned __int64)nullsub_444);
  qword_4B06600[2] = 0;
  v66 = v4;
  qword_4B06600[0] = (__int64)&off_4A6E058;
  v67 = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)nullsub_267);
  qword_4B06600[1] &= 0x80000000uLL;
  v68 = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)nullsub_266);
  qword_4B06600[3] = 0;
  qword_4B06600[4] = 0;
  qword_4B06600[5] = 0;
  qword_4B06600[6] = 0;
  qword_4B06600[7] = 0;
  qword_4B06600[8] = (__int64)&qword_4B06600[10];
  qword_4B06600[11] = (__int64)&qword_4B06600[14];
  qword_4B06600[9] = 0x100000000LL;
  qword_4B06600[12] = 1;
  LODWORD(qword_4B06600[13]) = 0;
  BYTE4(qword_4B06600[13]) = 1;
  v5 = sub_259AC30(a1, a2);
  v6 = LODWORD(qword_4B06600[9]);
  if ( HIDWORD(qword_4B06600[9]) < (unsigned __int64)(v6 + 1) )
  {
    sub_25D6060(&qword_4B06600[8], &qword_4B06600[10], v6 + 1, 8);
    v6 = LODWORD(qword_4B06600[9]);
  }
  v7 = _mm_load_si128(&v68);
  *(_QWORD *)(qword_4B06600[8] + 8 * v6) = v5;
  LOWORD(qword_4B06600[17]) = 0;
  ++LODWORD(qword_4B06600[9]);
  qword_4B06600[16] = (__int64)&off_4A64730;
  *(_OWORD *)&qword_4B06600[19] = 0;
  LOBYTE(qword_4B06600[15]) = 0;
  qword_4B06600[0] = (__int64)off_4A6DFF0;
  *(__m128i *)&qword_4B06600[21] = v7;
  qword_4B06600[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B06600, "enable-ext-tsp-block-placement", 30);
  v8 = BYTE2(qword_4B06600[1]);
  LOWORD(qword_4B06600[17]) = 256;
  LOBYTE(qword_4B06600[15]) = 0;
  qword_4B06600[5] = 90;
  BYTE2(qword_4B06600[1]) = v8 & 0x9F | 0x20;
  qword_4B06600[4] = (__int64)"Enable machine block placement based on the ext-tsp model, optimizing I-cache utilization.";
  sub_259EC40(qword_4B06600);
  __cxa_atexit(sub_1F6C9D0, qword_4B06600, &off_47CFE00);
  qword_4B06540[0] = (__int64)&off_4A6E058;
  qword_4B06540[1] &= 0x80000000uLL;
  qword_4B06540[8] = (__int64)&qword_4B06540[10];
  v69 = &qword_4B06540[10];
  qword_4B06540[2] = 0;
  qword_4B06540[3] = 0;
  qword_4B06540[4] = 0;
  qword_4B06540[5] = 0;
  qword_4B06540[6] = 0;
  qword_4B06540[7] = 0;
  qword_4B06540[9] = 0x100000000LL;
  qword_4B06540[11] = (__int64)&qword_4B06540[14];
  qword_4B06540[12] = 1;
  LODWORD(qword_4B06540[13]) = 0;
  BYTE4(qword_4B06540[13]) = 1;
  v9 = sub_259AC30(sub_1F6C9D0, &qword_4B06540[10]);
  v10 = v69;
  v11 = (__int64 *)v9;
  v12 = LODWORD(qword_4B06540[9]);
  if ( HIDWORD(qword_4B06540[9]) < (unsigned __int64)(v12 + 1) )
  {
    v69 = v11;
    sub_25D6060(&qword_4B06540[8], v10, v12 + 1, 8);
    v12 = LODWORD(qword_4B06540[9]);
    v11 = v69;
  }
  v13 = _mm_load_si128(&v68);
  *(_QWORD *)(qword_4B06540[8] + 8 * v12) = v11;
  LOWORD(qword_4B06540[17]) = 0;
  *(_OWORD *)&qword_4B06540[19] = 0;
  *(__m128i *)&qword_4B06540[21] = v13;
  qword_4B06540[16] = (__int64)&off_4A64730;
  ++LODWORD(qword_4B06540[9]);
  LOBYTE(qword_4B06540[15]) = 0;
  qword_4B06540[0] = (__int64)off_4A6DFF0;
  qword_4B06540[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B06540, "ext-tsp-apply-without-profile", 29);
  qword_4B06540[4] = (__int64)"Whether to apply ext-tsp placement for instances w/o profile";
  v14 = BYTE2(qword_4B06540[1]);
  LOWORD(qword_4B06540[17]) = 257;
  qword_4B06540[5] = 60;
  LOBYTE(qword_4B06540[15]) = 1;
  BYTE2(qword_4B06540[1]) = v14 & 0x9F | 0x20;
  sub_259EC40(qword_4B06540);
  __cxa_atexit(sub_1F6C9D0, qword_4B06540, &off_47CFE00);
  qword_4B06490 = 0;
  qword_4B06480 = (__int64)&off_4A6E058;
  qword_4B06488 = (unsigned int)qword_4B06488 & 0x80000000;
  qword_4B064C0 = (__int64)&qword_4B064D0;
  qword_4B06498 = 0;
  qword_4B064A0 = 0;
  qword_4B064A8 = 0;
  qword_4B064B0 = 0;
  qword_4B064B8 = 0;
  qword_4B064C8 = 0x100000000LL;
  qword_4B064D8 = (__int64)&qword_4B064F0;
  qword_4B064E0 = 1;
  dword_4B064E8 = 0;
  byte_4B064EC = 1;
  v15 = sub_259AC30(sub_1F6C9D0, &qword_4B064D0);
  v16 = (unsigned int)qword_4B064C8;
  v17 = (unsigned int)qword_4B064C8 + 1LL;
  if ( HIDWORD(qword_4B064C8) < v17 )
  {
    sub_25D6060(&qword_4B064D0 - 2, &qword_4B064D0, v17, 8);
    v16 = (unsigned int)qword_4B064C8;
  }
  v18 = _mm_load_si128(&v66);
  *(_QWORD *)(qword_4B064C0 + 8 * v16) = v15;
  xmmword_4B06520 = 0;
  xmmword_4B06530 = (__int128)v18;
  qword_4B06500 = (__int64)off_4A76748;
  LODWORD(qword_4B064C8) = qword_4B064C8 + 1;
  byte_4B06510 = 0;
  qword_4B06480 = (__int64)off_4A76768;
  qword_4B064F8 = 0;
  qword_4B06508 = 0;
  qword_4B06518 = (__int64)off_49D9288;
  sub_259F400(&qword_4B06480, "ext-tsp-forward-weight-cond", 27);
  byte_4B06510 = 1;
  qword_4B064A8 = 56;
  BYTE2(qword_4B06488) = BYTE2(qword_4B06488) & 0x9F | 0x40;
  qword_4B064F8 = 0x3FB999999999999ALL;
  qword_4B06508 = 0x3FB999999999999ALL;
  qword_4B064A0 = (__int64)"The weight of conditional forward jumps for ExtTSP value";
  sub_259EC40(&qword_4B06480);
  __cxa_atexit(sub_2A4E990, &qword_4B06480, &off_47CFE00);
  qword_4B063D0 = 0;
  qword_4B063C0 = (__int64)&off_4A6E058;
  qword_4B063C8 = (unsigned int)qword_4B063C8 & 0x80000000;
  qword_4B06400 = (__int64)&qword_4B06410;
  qword_4B063D8 = 0;
  qword_4B063E0 = 0;
  qword_4B063E8 = 0;
  qword_4B063F0 = 0;
  qword_4B063F8 = 0;
  qword_4B06408 = 0x100000000LL;
  qword_4B06418 = (__int64)&qword_4B06430;
  qword_4B06420 = 1;
  dword_4B06428 = 0;
  byte_4B0642C = 1;
  v19 = sub_259AC30(sub_2A4E990, &qword_4B06410);
  v20 = (unsigned int)qword_4B06408;
  if ( HIDWORD(qword_4B06408) < (unsigned __int64)(unsigned int)qword_4B06408 + 1 )
  {
    v68.m128i_i64[0] = v19;
    sub_25D6060(&qword_4B06410 - 2, &qword_4B06410, (unsigned int)qword_4B06408 + 1LL, 8);
    v20 = (unsigned int)qword_4B06408;
    v19 = v68.m128i_i64[0];
  }
  v21 = _mm_load_si128(&v66);
  *(_QWORD *)(qword_4B06400 + 8 * v20) = v19;
  qword_4B06440 = (__int64)off_4A76748;
  xmmword_4B06460 = 0;
  xmmword_4B06470 = (__int128)v21;
  qword_4B063C0 = (__int64)off_4A76768;
  LODWORD(qword_4B06408) = qword_4B06408 + 1;
  byte_4B06450 = 0;
  qword_4B06458 = (__int64)off_49D9288;
  qword_4B06438 = 0;
  qword_4B06448 = 0;
  sub_259F400(&qword_4B063C0, "ext-tsp-forward-weight-uncond", 29);
  byte_4B06450 = 1;
  qword_4B063E8 = 58;
  BYTE2(qword_4B063C8) = BYTE2(qword_4B063C8) & 0x9F | 0x40;
  qword_4B06438 = 0x3FB999999999999ALL;
  qword_4B06448 = 0x3FB999999999999ALL;
  qword_4B063E0 = (__int64)"The weight of unconditional forward jumps for ExtTSP value";
  sub_259EC40(&qword_4B063C0);
  __cxa_atexit(sub_2A4E990, &qword_4B063C0, &off_47CFE00);
  qword_4B06310 = 0;
  qword_4B06300 = (__int64)&off_4A6E058;
  qword_4B06308 = (unsigned int)qword_4B06308 & 0x80000000;
  qword_4B06340 = (__int64)&qword_4B06350;
  qword_4B06318 = 0;
  qword_4B06320 = 0;
  qword_4B06328 = 0;
  qword_4B06330 = 0;
  qword_4B06338 = 0;
  qword_4B06348 = 0x100000000LL;
  qword_4B06358 = (__int64)&qword_4B06370;
  qword_4B06360 = 1;
  dword_4B06368 = 0;
  byte_4B0636C = 1;
  v22 = sub_259AC30(sub_2A4E990, &qword_4B06350);
  v23 = (unsigned int)qword_4B06348;
  if ( HIDWORD(qword_4B06348) < (unsigned __int64)(unsigned int)qword_4B06348 + 1 )
  {
    v68.m128i_i64[0] = v22;
    sub_25D6060(&qword_4B06350 - 2, &qword_4B06350, (unsigned int)qword_4B06348 + 1LL, 8);
    v23 = (unsigned int)qword_4B06348;
    v22 = v68.m128i_i64[0];
  }
  v24 = _mm_load_si128(&v66);
  *(_QWORD *)(qword_4B06340 + 8 * v23) = v22;
  qword_4B06380 = (__int64)off_4A76748;
  xmmword_4B063A0 = 0;
  xmmword_4B063B0 = (__int128)v24;
  qword_4B06300 = (__int64)off_4A76768;
  LODWORD(qword_4B06348) = qword_4B06348 + 1;
  byte_4B06390 = 0;
  qword_4B06398 = (__int64)off_49D9288;
  qword_4B06378 = 0;
  qword_4B06388 = 0;
  sub_259F400(&qword_4B06300, "ext-tsp-backward-weight-cond", 28);
  byte_4B06390 = 1;
  qword_4B06328 = 57;
  BYTE2(qword_4B06308) = BYTE2(qword_4B06308) & 0x9F | 0x40;
  qword_4B06378 = 0x3FB999999999999ALL;
  qword_4B06388 = 0x3FB999999999999ALL;
  qword_4B06320 = (__int64)"The weight of conditional backward jumps for ExtTSP value";
  sub_259EC40(&qword_4B06300);
  __cxa_atexit(sub_2A4E990, &qword_4B06300, &off_47CFE00);
  qword_4B06250 = 0;
  qword_4B06240 = (__int64)&off_4A6E058;
  qword_4B06248 = (unsigned int)qword_4B06248 & 0x80000000;
  qword_4B06280 = (__int64)&qword_4B06290;
  qword_4B06258 = 0;
  qword_4B06260 = 0;
  qword_4B06268 = 0;
  qword_4B06270 = 0;
  qword_4B06278 = 0;
  qword_4B06288 = 0x100000000LL;
  qword_4B06298 = (__int64)&qword_4B062B0;
  qword_4B062A0 = 1;
  dword_4B062A8 = 0;
  byte_4B062AC = 1;
  v25 = sub_259AC30(sub_2A4E990, &qword_4B06290);
  v26 = (unsigned int)qword_4B06288;
  if ( HIDWORD(qword_4B06288) < (unsigned __int64)(unsigned int)qword_4B06288 + 1 )
  {
    v68.m128i_i64[0] = v25;
    sub_25D6060(&qword_4B06290 - 2, &qword_4B06290, (unsigned int)qword_4B06288 + 1LL, 8);
    v26 = (unsigned int)qword_4B06288;
    v25 = v68.m128i_i64[0];
  }
  v27 = _mm_load_si128(&v66);
  *(_QWORD *)(qword_4B06280 + 8 * v26) = v25;
  qword_4B062C0 = (__int64)off_4A76748;
  xmmword_4B062E0 = 0;
  xmmword_4B062F0 = (__int128)v27;
  qword_4B06240 = (__int64)off_4A76768;
  LODWORD(qword_4B06288) = qword_4B06288 + 1;
  byte_4B062D0 = 0;
  qword_4B062D8 = (__int64)off_49D9288;
  qword_4B062B8 = 0;
  qword_4B062C8 = 0;
  sub_259F400(&qword_4B06240, "ext-tsp-backward-weight-uncond", 30);
  byte_4B062D0 = 1;
  qword_4B06268 = 59;
  BYTE2(qword_4B06248) = BYTE2(qword_4B06248) & 0x9F | 0x40;
  qword_4B062B8 = 0x3FB999999999999ALL;
  qword_4B062C8 = 0x3FB999999999999ALL;
  qword_4B06260 = (__int64)"The weight of unconditional backward jumps for ExtTSP value";
  sub_259EC40(&qword_4B06240);
  __cxa_atexit(sub_2A4E990, &qword_4B06240, &off_47CFE00);
  qword_4B06190 = 0;
  qword_4B06180 = (__int64)&off_4A6E058;
  qword_4B06188 = (unsigned int)qword_4B06188 & 0x80000000;
  qword_4B061C0 = (__int64)&qword_4B061D0;
  qword_4B06198 = 0;
  qword_4B061A0 = 0;
  qword_4B061A8 = 0;
  qword_4B061B0 = 0;
  qword_4B061B8 = 0;
  qword_4B061C8 = 0x100000000LL;
  qword_4B061D8 = (__int64)&qword_4B061F0;
  qword_4B061E0 = 1;
  dword_4B061E8 = 0;
  byte_4B061EC = 1;
  v28 = sub_259AC30(sub_2A4E990, &qword_4B061D0);
  v29 = (unsigned int)qword_4B061C8;
  if ( HIDWORD(qword_4B061C8) < (unsigned __int64)(unsigned int)qword_4B061C8 + 1 )
  {
    v68.m128i_i64[0] = v28;
    sub_25D6060(&qword_4B061D0 - 2, &qword_4B061D0, (unsigned int)qword_4B061C8 + 1LL, 8);
    v29 = (unsigned int)qword_4B061C8;
    v28 = v68.m128i_i64[0];
  }
  v30 = _mm_load_si128(&v66);
  *(_QWORD *)(qword_4B061C0 + 8 * v29) = v28;
  qword_4B06200 = (__int64)off_4A76748;
  xmmword_4B06230 = (__int128)v30;
  LODWORD(qword_4B061C8) = qword_4B061C8 + 1;
  qword_4B06180 = (__int64)off_4A76768;
  xmmword_4B06220 = 0;
  byte_4B06210 = 0;
  qword_4B06218 = (__int64)off_49D9288;
  qword_4B061F8 = 0;
  qword_4B06208 = 0;
  sub_259F400(&qword_4B06180, "ext-tsp-fallthrough-weight-cond", 31);
  byte_4B06210 = 1;
  qword_4B061F8 = 0x3FF0000000000000LL;
  qword_4B06208 = 0x3FF0000000000000LL;
  BYTE2(qword_4B06188) = BYTE2(qword_4B06188) & 0x9F | 0x40;
  qword_4B061A0 = (__int64)"The weight of conditional fallthrough jumps for ExtTSP value";
  qword_4B061A8 = 60;
  sub_259EC40(&qword_4B06180);
  __cxa_atexit(sub_2A4E990, &qword_4B06180, &off_47CFE00);
  qword_4B060D0 = 0;
  qword_4B060C0 = (__int64)&off_4A6E058;
  qword_4B060C8 = (unsigned int)qword_4B060C8 & 0x80000000;
  qword_4B06100 = (__int64)&qword_4B06110;
  qword_4B060D8 = 0;
  qword_4B060E0 = 0;
  qword_4B060E8 = 0;
  qword_4B060F0 = 0;
  qword_4B060F8 = 0;
  qword_4B06108 = 0x100000000LL;
  qword_4B06118 = (__int64)&qword_4B06130;
  qword_4B06120 = 1;
  dword_4B06128 = 0;
  byte_4B0612C = 1;
  v31 = sub_259AC30(sub_2A4E990, &qword_4B06110);
  v32 = (unsigned int)qword_4B06108;
  if ( HIDWORD(qword_4B06108) < (unsigned __int64)(unsigned int)qword_4B06108 + 1 )
  {
    v68.m128i_i64[0] = v31;
    sub_25D6060(&qword_4B06110 - 2, &qword_4B06110, (unsigned int)qword_4B06108 + 1LL, 8);
    v32 = (unsigned int)qword_4B06108;
    v31 = v68.m128i_i64[0];
  }
  v33 = _mm_load_si128(&v66);
  *(_QWORD *)(qword_4B06100 + 8 * v32) = v31;
  qword_4B06140 = (__int64)off_4A76748;
  xmmword_4B06170 = (__int128)v33;
  LODWORD(qword_4B06108) = qword_4B06108 + 1;
  qword_4B060C0 = (__int64)off_4A76768;
  xmmword_4B06160 = 0;
  byte_4B06150 = 0;
  qword_4B06158 = (__int64)off_49D9288;
  qword_4B06138 = 0;
  qword_4B06148 = 0;
  sub_259F400(&qword_4B060C0, "ext-tsp-fallthrough-weight-uncond", 33);
  byte_4B06150 = 1;
  qword_4B06138 = 0x3FF0CCCCCCCCCCCDLL;
  qword_4B06148 = 0x3FF0CCCCCCCCCCCDLL;
  BYTE2(qword_4B060C8) = BYTE2(qword_4B060C8) & 0x9F | 0x40;
  qword_4B060E0 = (__int64)"The weight of unconditional fallthrough jumps for ExtTSP value";
  qword_4B060E8 = 62;
  sub_259EC40(&qword_4B060C0);
  __cxa_atexit(sub_2A4E990, &qword_4B060C0, &off_47CFE00);
  qword_4B06010 = 0;
  qword_4B06000 = (__int64)&off_4A6E058;
  qword_4B06008 = (unsigned int)qword_4B06008 & 0x80000000;
  qword_4B06040 = (__int64)&qword_4B06050;
  qword_4B06018 = 0;
  qword_4B06020 = 0;
  qword_4B06028 = 0;
  qword_4B06030 = 0;
  qword_4B06038 = 0;
  qword_4B06048 = 0x100000000LL;
  qword_4B06058 = (__int64)&qword_4B06070;
  qword_4B06060 = 1;
  dword_4B06068 = 0;
  byte_4B0606C = 1;
  v34 = sub_259AC30(sub_2A4E990, &qword_4B06050);
  v35 = (unsigned int)qword_4B06048;
  if ( HIDWORD(qword_4B06048) < (unsigned __int64)(unsigned int)qword_4B06048 + 1 )
  {
    v68.m128i_i64[0] = v34;
    sub_25D6060(&qword_4B06050 - 2, &qword_4B06050, (unsigned int)qword_4B06048 + 1LL, 8);
    v35 = (unsigned int)qword_4B06048;
    v34 = v68.m128i_i64[0];
  }
  v36 = _mm_load_si128(&v67);
  *(_QWORD *)(qword_4B06040 + 8 * v35) = v34;
  xmmword_4B06098 = 0;
  xmmword_4B060A8 = (__int128)v36;
  qword_4B06080 = (__int64)&off_4A64710;
  LODWORD(qword_4B06048) = qword_4B06048 + 1;
  byte_4B0608C = 0;
  qword_4B06000 = (__int64)off_4A6DEB8;
  dword_4B06078 = 0;
  dword_4B06088 = 0;
  qword_4B06090 = (__int64)off_49D9228;
  sub_259F400(&qword_4B06000, "ext-tsp-forward-distance", 24);
  dword_4B06078 = 1024;
  byte_4B0608C = 1;
  dword_4B06088 = 1024;
  qword_4B06028 = 60;
  BYTE2(qword_4B06008) = BYTE2(qword_4B06008) & 0x9F | 0x40;
  qword_4B06020 = (__int64)"The maximum distance (in bytes) of a forward jump for ExtTSP";
  sub_259EC40(&qword_4B06000);
  __cxa_atexit(sub_1F6C940, &qword_4B06000, &off_47CFE00);
  qword_4B05F50 = 0;
  qword_4B05F40 = (__int64)&off_4A6E058;
  qword_4B05F48 = (unsigned int)qword_4B05F48 & 0x80000000;
  qword_4B05F80 = (__int64)&qword_4B05F90;
  qword_4B05F58 = 0;
  qword_4B05F60 = 0;
  qword_4B05F68 = 0;
  qword_4B05F70 = 0;
  qword_4B05F78 = 0;
  qword_4B05F88 = 0x100000000LL;
  qword_4B05F98 = (__int64)&qword_4B05FB0;
  qword_4B05FA0 = 1;
  dword_4B05FA8 = 0;
  byte_4B05FAC = 1;
  v37 = sub_259AC30(sub_1F6C940, &qword_4B05F90);
  v38 = (unsigned int)qword_4B05F88;
  if ( HIDWORD(qword_4B05F88) < (unsigned __int64)(unsigned int)qword_4B05F88 + 1 )
  {
    v68.m128i_i64[0] = v37;
    sub_25D6060(&qword_4B05F90 - 2, &qword_4B05F90, (unsigned int)qword_4B05F88 + 1LL, 8);
    v38 = (unsigned int)qword_4B05F88;
    v37 = v68.m128i_i64[0];
  }
  v39 = _mm_load_si128(&v67);
  *(_QWORD *)(qword_4B05F80 + 8 * v38) = v37;
  xmmword_4B05FD8 = 0;
  xmmword_4B05FE8 = (__int128)v39;
  qword_4B05FC0 = (__int64)&off_4A64710;
  LODWORD(qword_4B05F88) = qword_4B05F88 + 1;
  byte_4B05FCC = 0;
  qword_4B05F40 = (__int64)off_4A6DEB8;
  dword_4B05FB8 = 0;
  dword_4B05FC8 = 0;
  qword_4B05FD0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B05F40, "ext-tsp-backward-distance", 25);
  dword_4B05FB8 = 640;
  byte_4B05FCC = 1;
  dword_4B05FC8 = 640;
  qword_4B05F68 = 61;
  BYTE2(qword_4B05F48) = BYTE2(qword_4B05F48) & 0x9F | 0x40;
  qword_4B05F60 = (__int64)"The maximum distance (in bytes) of a backward jump for ExtTSP";
  sub_259EC40(&qword_4B05F40);
  __cxa_atexit(sub_1F6C940, &qword_4B05F40, &off_47CFE00);
  qword_4B05E90 = 0;
  qword_4B05E80 = (__int64)&off_4A6E058;
  qword_4B05E88 = (unsigned int)qword_4B05E88 & 0x80000000;
  qword_4B05EC0 = (__int64)&qword_4B05ED0;
  qword_4B05E98 = 0;
  qword_4B05EA0 = 0;
  qword_4B05EA8 = 0;
  qword_4B05EB0 = 0;
  qword_4B05EB8 = 0;
  qword_4B05EC8 = 0x100000000LL;
  qword_4B05ED8 = (__int64)&qword_4B05EF0;
  qword_4B05EE0 = 1;
  dword_4B05EE8 = 0;
  byte_4B05EEC = 1;
  v40 = sub_259AC30(sub_1F6C940, &qword_4B05ED0);
  v41 = (unsigned int)qword_4B05EC8;
  if ( HIDWORD(qword_4B05EC8) < (unsigned __int64)(unsigned int)qword_4B05EC8 + 1 )
  {
    v68.m128i_i64[0] = v40;
    sub_25D6060(&qword_4B05ED0 - 2, &qword_4B05ED0, (unsigned int)qword_4B05EC8 + 1LL, 8);
    v41 = (unsigned int)qword_4B05EC8;
    v40 = v68.m128i_i64[0];
  }
  v42 = _mm_load_si128(&v67);
  *(_QWORD *)(qword_4B05EC0 + 8 * v41) = v40;
  xmmword_4B05F18 = 0;
  xmmword_4B05F28 = (__int128)v42;
  qword_4B05F00 = (__int64)&off_4A64710;
  LODWORD(qword_4B05EC8) = qword_4B05EC8 + 1;
  byte_4B05F0C = 0;
  qword_4B05E80 = (__int64)off_4A6DEB8;
  dword_4B05EF8 = 0;
  dword_4B05F08 = 0;
  qword_4B05F10 = (__int64)off_49D9228;
  sub_259F400(&qword_4B05E80, "ext-tsp-max-chain-size", 22);
  dword_4B05EF8 = 512;
  byte_4B05F0C = 1;
  dword_4B05F08 = 512;
  qword_4B05EA8 = 37;
  BYTE2(qword_4B05E88) = BYTE2(qword_4B05E88) & 0x9F | 0x40;
  qword_4B05EA0 = (__int64)"The maximum size of a chain to create";
  sub_259EC40(&qword_4B05E80);
  __cxa_atexit(sub_1F6C940, &qword_4B05E80, &off_47CFE00);
  qword_4B05DD0 = 0;
  qword_4B05DC0 = (__int64)&off_4A6E058;
  qword_4B05DC8 = (unsigned int)qword_4B05DC8 & 0x80000000;
  qword_4B05E00 = (__int64)&qword_4B05E10;
  qword_4B05DD8 = 0;
  qword_4B05DE0 = 0;
  qword_4B05DE8 = 0;
  qword_4B05DF0 = 0;
  qword_4B05DF8 = 0;
  qword_4B05E08 = 0x100000000LL;
  qword_4B05E18 = (__int64)&qword_4B05E30;
  qword_4B05E20 = 1;
  dword_4B05E28 = 0;
  byte_4B05E2C = 1;
  v43 = sub_259AC30(sub_1F6C940, &qword_4B05E10);
  v44 = (unsigned int)qword_4B05E08;
  if ( HIDWORD(qword_4B05E08) < (unsigned __int64)(unsigned int)qword_4B05E08 + 1 )
  {
    v68.m128i_i64[0] = v43;
    sub_25D6060(&qword_4B05E10 - 2, &qword_4B05E10, (unsigned int)qword_4B05E08 + 1LL, 8);
    v44 = (unsigned int)qword_4B05E08;
    v43 = v68.m128i_i64[0];
  }
  v45 = _mm_load_si128(&v67);
  *(_QWORD *)(qword_4B05E00 + 8 * v44) = v43;
  xmmword_4B05E58 = 0;
  xmmword_4B05E68 = (__int128)v45;
  qword_4B05E40 = (__int64)&off_4A64710;
  LODWORD(qword_4B05E08) = qword_4B05E08 + 1;
  byte_4B05E4C = 0;
  qword_4B05DC0 = (__int64)off_4A6DEB8;
  dword_4B05E38 = 0;
  dword_4B05E48 = 0;
  qword_4B05E50 = (__int64)off_49D9228;
  sub_259F400(&qword_4B05DC0, "ext-tsp-chain-split-threshold", 29);
  dword_4B05E38 = 128;
  byte_4B05E4C = 1;
  dword_4B05E48 = 128;
  qword_4B05DE8 = 46;
  BYTE2(qword_4B05DC8) = BYTE2(qword_4B05DC8) & 0x9F | 0x40;
  qword_4B05DE0 = (__int64)"The maximum size of a chain to apply splitting";
  sub_259EC40(&qword_4B05DC0);
  __cxa_atexit(sub_1F6C940, &qword_4B05DC0, &off_47CFE00);
  qword_4B05D10 = 0;
  qword_4B05D00 = (__int64)&off_4A6E058;
  qword_4B05D08 = (unsigned int)qword_4B05D08 & 0x80000000;
  qword_4B05D40 = (__int64)&qword_4B05D50;
  qword_4B05D18 = 0;
  qword_4B05D20 = 0;
  qword_4B05D28 = 0;
  qword_4B05D30 = 0;
  qword_4B05D38 = 0;
  qword_4B05D48 = 0x100000000LL;
  qword_4B05D58 = (__int64)&qword_4B05D70;
  qword_4B05D60 = 1;
  dword_4B05D68 = 0;
  byte_4B05D6C = 1;
  v46 = sub_259AC30(sub_1F6C940, &qword_4B05D50);
  v47 = (unsigned int)qword_4B05D48;
  if ( HIDWORD(qword_4B05D48) < (unsigned __int64)(unsigned int)qword_4B05D48 + 1 )
  {
    v68.m128i_i64[0] = v46;
    sub_25D6060(&qword_4B05D50 - 2, &qword_4B05D50, (unsigned int)qword_4B05D48 + 1LL, 8);
    v47 = (unsigned int)qword_4B05D48;
    v46 = v68.m128i_i64[0];
  }
  v48 = _mm_load_si128(&v66);
  *(_QWORD *)(qword_4B05D40 + 8 * v47) = v46;
  qword_4B05D80 = (__int64)off_4A76748;
  xmmword_4B05DB0 = (__int128)v48;
  LODWORD(qword_4B05D48) = qword_4B05D48 + 1;
  qword_4B05D00 = (__int64)off_4A76768;
  xmmword_4B05DA0 = 0;
  byte_4B05D90 = 0;
  qword_4B05D98 = (__int64)off_49D9288;
  qword_4B05D78 = 0;
  qword_4B05D88 = 0;
  sub_259F400(&qword_4B05D00, "ext-tsp-max-merge-density-ratio", 31);
  byte_4B05D90 = 1;
  qword_4B05D78 = 0x4059000000000000LL;
  qword_4B05D88 = 0x4059000000000000LL;
  BYTE2(qword_4B05D08) = BYTE2(qword_4B05D08) & 0x9F | 0x40;
  qword_4B05D20 = (__int64)"The maximum ratio between densities of two chains for merging";
  qword_4B05D28 = 61;
  sub_259EC40(&qword_4B05D00);
  __cxa_atexit(sub_2A4E990, &qword_4B05D00, &off_47CFE00);
  qword_4B05C50 = 0;
  qword_4B05C40 = (__int64)&off_4A6E058;
  qword_4B05C48 = (unsigned int)qword_4B05C48 & 0x80000000;
  qword_4B05C80 = (__int64)&qword_4B05C90;
  qword_4B05C58 = 0;
  qword_4B05C60 = 0;
  qword_4B05C68 = 0;
  qword_4B05C70 = 0;
  qword_4B05C78 = 0;
  qword_4B05C88 = 0x100000000LL;
  qword_4B05C98 = (__int64)&qword_4B05CB0;
  qword_4B05CA0 = 1;
  dword_4B05CA8 = 0;
  byte_4B05CAC = 1;
  v49 = sub_259AC30(sub_2A4E990, &qword_4B05C90);
  v50 = (unsigned int)qword_4B05C88;
  if ( HIDWORD(qword_4B05C88) < (unsigned __int64)(unsigned int)qword_4B05C88 + 1 )
  {
    v68.m128i_i64[0] = v49;
    sub_25D6060(&qword_4B05C90 - 2, &qword_4B05C90, (unsigned int)qword_4B05C88 + 1LL, 8);
    v50 = (unsigned int)qword_4B05C88;
    v49 = v68.m128i_i64[0];
  }
  v51 = _mm_load_si128(&v67);
  *(_QWORD *)(qword_4B05C80 + 8 * v50) = v49;
  xmmword_4B05CD8 = 0;
  xmmword_4B05CE8 = (__int128)v51;
  qword_4B05CC0 = (__int64)&off_4A64710;
  LODWORD(qword_4B05C88) = qword_4B05C88 + 1;
  byte_4B05CCC = 0;
  qword_4B05C40 = (__int64)off_4A6DEB8;
  dword_4B05CB8 = 0;
  dword_4B05CC8 = 0;
  qword_4B05CD0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B05C40, "cdsort-cache-entries", 20);
  qword_4B05C68 = 21;
  BYTE2(qword_4B05C48) = BYTE2(qword_4B05C48) & 0x9F | 0x40;
  qword_4B05C60 = (__int64)"The size of the cache";
  sub_259EC40(&qword_4B05C40);
  __cxa_atexit(sub_1F6C940, &qword_4B05C40, &off_47CFE00);
  qword_4B05B90 = 0;
  qword_4B05B80 = (__int64)&off_4A6E058;
  qword_4B05B88 = (unsigned int)qword_4B05B88 & 0x80000000;
  qword_4B05BC0 = (__int64)&qword_4B05BD0;
  qword_4B05B98 = 0;
  qword_4B05BA0 = 0;
  qword_4B05BA8 = 0;
  qword_4B05BB0 = 0;
  qword_4B05BB8 = 0;
  qword_4B05BC8 = 0x100000000LL;
  qword_4B05BD8 = (__int64)&qword_4B05BF0;
  qword_4B05BE0 = 1;
  dword_4B05BE8 = 0;
  byte_4B05BEC = 1;
  v52 = sub_259AC30(sub_1F6C940, &qword_4B05BD0);
  v53 = (unsigned int)qword_4B05BC8;
  if ( HIDWORD(qword_4B05BC8) < (unsigned __int64)(unsigned int)qword_4B05BC8 + 1 )
  {
    v68.m128i_i64[0] = v52;
    sub_25D6060(&qword_4B05BD0 - 2, &qword_4B05BD0, (unsigned int)qword_4B05BC8 + 1LL, 8);
    v53 = (unsigned int)qword_4B05BC8;
    v52 = v68.m128i_i64[0];
  }
  v54 = _mm_load_si128(&v67);
  *(_QWORD *)(qword_4B05BC0 + 8 * v53) = v52;
  xmmword_4B05C18 = 0;
  xmmword_4B05C28 = (__int128)v54;
  qword_4B05C00 = (__int64)&off_4A64710;
  LODWORD(qword_4B05BC8) = qword_4B05BC8 + 1;
  byte_4B05C0C = 0;
  qword_4B05B80 = (__int64)off_4A6DEB8;
  dword_4B05BF8 = 0;
  dword_4B05C08 = 0;
  qword_4B05C10 = (__int64)off_49D9228;
  sub_259F400(&qword_4B05B80, "cdsort-cache-size", 17);
  qword_4B05BA8 = 31;
  BYTE2(qword_4B05B88) = BYTE2(qword_4B05B88) & 0x9F | 0x40;
  qword_4B05BA0 = (__int64)"The size of a line in the cache";
  sub_259EC40(&qword_4B05B80);
  __cxa_atexit(sub_1F6C940, &qword_4B05B80, &off_47CFE00);
  qword_4B05AD0 = 0;
  qword_4B05AC0 = (__int64)&off_4A6E058;
  qword_4B05AC8 = (unsigned int)qword_4B05AC8 & 0x80000000;
  qword_4B05B00 = (__int64)&qword_4B05B10;
  qword_4B05AD8 = 0;
  qword_4B05AE0 = 0;
  qword_4B05AE8 = 0;
  qword_4B05AF0 = 0;
  qword_4B05AF8 = 0;
  qword_4B05B08 = 0x100000000LL;
  qword_4B05B18 = (__int64)&qword_4B05B30;
  qword_4B05B20 = 1;
  dword_4B05B28 = 0;
  byte_4B05B2C = 1;
  v55 = sub_259AC30(sub_1F6C940, &qword_4B05B10);
  v56 = (unsigned int)qword_4B05B08;
  if ( HIDWORD(qword_4B05B08) < (unsigned __int64)(unsigned int)qword_4B05B08 + 1 )
  {
    v68.m128i_i64[0] = v55;
    sub_25D6060(&qword_4B05B10 - 2, &qword_4B05B10, (unsigned int)qword_4B05B08 + 1LL, 8);
    v56 = (unsigned int)qword_4B05B08;
    v55 = v68.m128i_i64[0];
  }
  v57 = _mm_load_si128(&v67);
  *(_QWORD *)(qword_4B05B00 + 8 * v56) = v55;
  xmmword_4B05B58 = 0;
  xmmword_4B05B68 = (__int128)v57;
  qword_4B05B40 = (__int64)&off_4A64710;
  LODWORD(qword_4B05B08) = qword_4B05B08 + 1;
  byte_4B05B4C = 0;
  qword_4B05AC0 = (__int64)off_4A6DEB8;
  dword_4B05B38 = 0;
  dword_4B05B48 = 0;
  qword_4B05B50 = (__int64)off_49D9228;
  sub_259F400(&qword_4B05AC0, "cdsort-max-chain-size", 21);
  qword_4B05AE8 = 37;
  BYTE2(qword_4B05AC8) = BYTE2(qword_4B05AC8) & 0x9F | 0x40;
  qword_4B05AE0 = (__int64)"The maximum size of a chain to create";
  sub_259EC40(&qword_4B05AC0);
  __cxa_atexit(sub_1F6C940, &qword_4B05AC0, &off_47CFE00);
  qword_4B05A10 = 0;
  qword_4B05A00 = (__int64)&off_4A6E058;
  qword_4B05A08 = (unsigned int)qword_4B05A08 & 0x80000000;
  qword_4B05A40 = (__int64)&qword_4B05A50;
  qword_4B05A18 = 0;
  qword_4B05A20 = 0;
  qword_4B05A28 = 0;
  qword_4B05A30 = 0;
  qword_4B05A38 = 0;
  qword_4B05A48 = 0x100000000LL;
  qword_4B05A58 = (__int64)&qword_4B05A70;
  qword_4B05A60 = 1;
  dword_4B05A68 = 0;
  byte_4B05A6C = 1;
  v58 = sub_259AC30(sub_1F6C940, &qword_4B05A50);
  v59 = (unsigned int)qword_4B05A48;
  if ( HIDWORD(qword_4B05A48) < (unsigned __int64)(unsigned int)qword_4B05A48 + 1 )
  {
    v67.m128i_i64[0] = v58;
    sub_25D6060(&qword_4B05A50 - 2, &qword_4B05A50, (unsigned int)qword_4B05A48 + 1LL, 8);
    v59 = (unsigned int)qword_4B05A48;
    v58 = v67.m128i_i64[0];
  }
  v60 = _mm_load_si128(&v66);
  *(_QWORD *)(qword_4B05A40 + 8 * v59) = v58;
  qword_4B05A80 = (__int64)off_4A76748;
  xmmword_4B05AA0 = 0;
  xmmword_4B05AB0 = (__int128)v60;
  qword_4B05A00 = (__int64)off_4A76768;
  LODWORD(qword_4B05A48) = qword_4B05A48 + 1;
  byte_4B05A90 = 0;
  qword_4B05A98 = (__int64)off_49D9288;
  qword_4B05A78 = 0;
  qword_4B05A88 = 0;
  sub_259F400(&qword_4B05A00, "cdsort-distance-power", 21);
  qword_4B05A28 = 50;
  BYTE2(qword_4B05A08) = BYTE2(qword_4B05A08) & 0x9F | 0x40;
  qword_4B05A20 = (__int64)"The power exponent for the distance-based locality";
  sub_259EC40(&qword_4B05A00);
  __cxa_atexit(sub_2A4E990, &qword_4B05A00, &off_47CFE00);
  qword_4B05988 = 0x100000000LL;
  qword_4B05940 = (__int64)&off_4A6E058;
  qword_4B05948 = (unsigned int)qword_4B05948 & 0x80000000;
  qword_4B05980 = (__int64)&qword_4B05990;
  qword_4B05950 = 0;
  qword_4B05958 = 0;
  qword_4B05960 = 0;
  qword_4B05968 = 0;
  qword_4B05970 = 0;
  qword_4B05978 = 0;
  qword_4B05998 = (__int64)&qword_4B059B0;
  qword_4B059A0 = 1;
  dword_4B059A8 = 0;
  byte_4B059AC = 1;
  v61 = sub_259AC30(sub_2A4E990, &qword_4B05990);
  v62 = (unsigned int)qword_4B05988;
  v63 = (unsigned int)qword_4B05988 + 1LL;
  if ( HIDWORD(qword_4B05988) < v63 )
  {
    sub_25D6060(&qword_4B05990 - 2, &qword_4B05990, v63, 8);
    v62 = (unsigned int)qword_4B05988;
  }
  v64 = _mm_load_si128(&v66);
  *(_QWORD *)(qword_4B05980 + 8 * v62) = v61;
  qword_4B059C0 = (__int64)off_4A76748;
  xmmword_4B059E0 = 0;
  xmmword_4B059F0 = (__int128)v64;
  qword_4B05940 = (__int64)off_4A76768;
  LODWORD(qword_4B05988) = qword_4B05988 + 1;
  byte_4B059D0 = 0;
  qword_4B059D8 = (__int64)off_49D9288;
  qword_4B059B8 = 0;
  qword_4B059C8 = 0;
  sub_259F400(&qword_4B05940, "cdsort-frequency-scale", 22);
  qword_4B05968 = 49;
  BYTE2(qword_4B05948) = BYTE2(qword_4B05948) & 0x9F | 0x40;
  qword_4B05960 = (__int64)"The scale factor for the frequency-based locality";
  sub_259EC40(&qword_4B05940);
  __cxa_atexit(sub_2A4E990, &qword_4B05940, &off_47CFE00);
  qword_4B05930 = 0;
  xmmword_4B05920 = 0;
  return __cxa_atexit(sub_360E5B0, &xmmword_4B05920, &off_47CFE00);
}

