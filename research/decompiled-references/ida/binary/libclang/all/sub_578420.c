int sub_578420()
{
  __m128i v0; // xmm0
  __m128i *v1; // rax
  __int64 v2; // rdx
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __m128i v8; // xmm3
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm4
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm5
  __m128i v17; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v18; // [rsp+18h] [rbp-1E0h]
  int v19; // [rsp+2Ch] [rbp-1CCh] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-1B0h]
  _BYTE v23[160]; // [rsp+50h] [rbp-1A8h] BYREF
  __m128i v24; // [rsp+F0h] [rbp-108h] BYREF
  __m128i v25; // [rsp+100h] [rbp-F8h] BYREF
  __m128i v26; // [rsp+110h] [rbp-E8h] BYREF
  __m128i v27; // [rsp+120h] [rbp-D8h] BYREF
  __m128i v28; // [rsp+130h] [rbp-C8h] BYREF
  __m128i v29; // [rsp+140h] [rbp-B8h] BYREF
  __m128i v30; // [rsp+150h] [rbp-A8h] BYREF
  __m128i v31; // [rsp+160h] [rbp-98h] BYREF
  __m128i v32; // [rsp+170h] [rbp-88h] BYREF
  __m128i v33; // [rsp+180h] [rbp-78h] BYREF
  __m128i v34; // [rsp+190h] [rbp-68h] BYREF
  __m128i v35; // [rsp+1A0h] [rbp-58h] BYREF
  __int64 v36; // [rsp+1B0h] [rbp-48h]

  v20[0] = "Enable extended information within the SHT_LLVM_BB_ADDR_MAP that is extracted from PGO related analysis.";
  v24.m128i_i64[0] = (__int64)"none";
  v25.m128i_i64[1] = (__int64)"Disable all options";
  v26.m128i_i64[1] = (__int64)"func-entry-count";
  v28.m128i_i64[0] = (__int64)"Function Entry Count";
  v29.m128i_i64[0] = (__int64)"bb-freq";
  v30.m128i_i64[1] = (__int64)"Basic Block Frequency";
  v17 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E7EB8), (__m128i)(unsigned __int64)nullsub_266);
  v20[1] = 104;
  v24.m128i_i64[1] = 4;
  v25.m128i_i32[0] = 0;
  v26.m128i_i64[0] = 19;
  v27.m128i_i64[0] = 16;
  v27.m128i_i32[2] = 1;
  v28.m128i_i64[1] = 20;
  v29.m128i_i64[1] = 7;
  v30.m128i_i32[0] = 2;
  v31.m128i_i64[0] = 21;
  v31.m128i_i64[1] = (__int64)"br-prob";
  v33.m128i_i64[0] = (__int64)"Branch Probability";
  v34.m128i_i64[0] = (__int64)"all";
  v35.m128i_i64[1] = (__int64)"Enable all options";
  v32.m128i_i64[0] = 7;
  v22 = 0x400000000LL;
  v32.m128i_i32[2] = 3;
  v33.m128i_i64[1] = 18;
  v34.m128i_i64[1] = 3;
  v35.m128i_i32[0] = 4;
  v36 = 18;
  ptr = v23;
  sub_25D6060(&ptr, v23, 5, 40);
  v0 = _mm_load_si128(&v24);
  v24.m128i_i32[0] = 1;
  v19 = 1;
  v1 = (__m128i *)((char *)ptr + 40 * (unsigned int)v22);
  v2 = v36;
  *v1 = v0;
  v3 = _mm_load_si128(&v25);
  v1[12].m128i_i64[0] = v2;
  v1[1] = v3;
  v4 = _mm_load_si128(&v26);
  LODWORD(v22) = v22 + 5;
  v1[2] = v4;
  v1[3] = _mm_load_si128(&v27);
  v1[4] = _mm_load_si128(&v28);
  v1[5] = _mm_load_si128(&v29);
  v1[6] = _mm_load_si128(&v30);
  v1[7] = _mm_load_si128(&v31);
  v1[8] = _mm_load_si128(&v32);
  v1[9] = _mm_load_si128(&v33);
  v1[10] = _mm_load_si128(&v34);
  v1[11] = _mm_load_si128(&v35);
  sub_2A66880(qword_4AE9700, "pgo-analysis-map", &v19, &v24, &ptr, v20, v17.m128i_i64[0], v17.m128i_i64[1]);
  if ( ptr != v23 )
    free(ptr);
  __cxa_atexit(sub_2A51E20, qword_4AE9700, &off_47CFE00);
  qword_4AE9680 = (__int64)&qword_4AE9690;
  qword_4AE9650 = 0;
  qword_4AE9640 = (__int64)&off_4A6E058;
  qword_4AE9648 = (unsigned int)qword_4AE9648 & 0x80000000;
  qword_4AE9658 = 0;
  qword_4AE9660 = 0;
  qword_4AE9668 = 0;
  qword_4AE9670 = 0;
  qword_4AE9678 = 0;
  qword_4AE9688 = 0x100000000LL;
  qword_4AE9698 = (__int64)&qword_4AE96B0;
  qword_4AE96A0 = 1;
  dword_4AE96A8 = 0;
  byte_4AE96AC = 1;
  v5 = sub_259AC30(sub_2A51E20, &qword_4AE9690);
  v6 = (unsigned int)qword_4AE9688;
  v7 = (unsigned int)qword_4AE9688 + 1LL;
  if ( HIDWORD(qword_4AE9688) < v7 )
  {
    sub_25D6060(&qword_4AE9690 - 2, &qword_4AE9690, v7, 8);
    v6 = (unsigned int)qword_4AE9688;
  }
  v8 = _mm_load_si128(&v17);
  *(_QWORD *)(qword_4AE9680 + 8 * v6) = v5;
  word_4AE96C8 = 0;
  xmmword_4AE96D8 = 0;
  qword_4AE96C0 = (__int64)&off_4A64730;
  xmmword_4AE96E8 = (__int128)v8;
  LODWORD(qword_4AE9688) = qword_4AE9688 + 1;
  qword_4AE9640 = (__int64)off_4A6DFF0;
  byte_4AE96B8 = 0;
  qword_4AE96D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE9640, "basic-block-address-map-skip-bb-entries", 39);
  qword_4AE9660 = (__int64)"Skip emitting basic block entries in the SHT_LLVM_BB_ADDR_MAP section. It's used to save bina"
                           "ry size when BB entries are unnecessary for some PGOAnalysisMap features.";
  qword_4AE9668 = 166;
  byte_4AE96B8 = 0;
  word_4AE96C8 = 256;
  BYTE2(qword_4AE9648) = BYTE2(qword_4AE9648) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE9640);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE9640, &off_47CFE00);
  qword_4AE9590 = 0;
  qword_4AE95C0 = (__int64)&qword_4AE95D0;
  qword_4AE9598 = 0;
  qword_4AE9580 = (__int64)&off_4A6E058;
  qword_4AE9588 = (unsigned int)qword_4AE9588 & 0x80000000;
  qword_4AE95A0 = 0;
  qword_4AE95A8 = 0;
  qword_4AE95B0 = 0;
  qword_4AE95B8 = 0;
  qword_4AE95C8 = 0x100000000LL;
  qword_4AE95D8 = (__int64)&qword_4AE95F0;
  qword_4AE95E0 = 1;
  dword_4AE95E8 = 0;
  byte_4AE95EC = 1;
  v9 = sub_259AC30(sub_1F6C9D0, &qword_4AE95D0);
  v10 = (unsigned int)qword_4AE95C8;
  if ( HIDWORD(qword_4AE95C8) < (unsigned __int64)(unsigned int)qword_4AE95C8 + 1 )
  {
    v18 = v9;
    sub_25D6060(&qword_4AE95D0 - 2, &qword_4AE95D0, (unsigned int)qword_4AE95C8 + 1LL, 8);
    v10 = (unsigned int)qword_4AE95C8;
    v9 = v18;
  }
  v11 = _mm_load_si128(&v17);
  *(_QWORD *)(qword_4AE95C0 + 8 * v10) = v9;
  word_4AE9608 = 0;
  xmmword_4AE9618 = 0;
  qword_4AE9600 = (__int64)&off_4A64730;
  xmmword_4AE9628 = (__int128)v11;
  LODWORD(qword_4AE95C8) = qword_4AE95C8 + 1;
  qword_4AE9580 = (__int64)off_4A6DFF0;
  byte_4AE95F8 = 0;
  qword_4AE9610 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE9580, "emit-jump-table-sizes-section", 29);
  qword_4AE95A8 = 56;
  qword_4AE95A0 = (__int64)"Emit a section containing jump table addresses and sizes";
  byte_4AE95F8 = 0;
  word_4AE9608 = 256;
  BYTE2(qword_4AE9588) = BYTE2(qword_4AE9588) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE9580);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE9580, &off_47CFE00);
  qword_4AE9508 = 0x100000000LL;
  qword_4AE9500 = (__int64)&qword_4AE9510;
  qword_4AE94D0 = 0;
  qword_4AE94C0 = (__int64)&off_4A6E058;
  qword_4AE94C8 = (unsigned int)qword_4AE94C8 & 0x80000000;
  qword_4AE94D8 = 0;
  qword_4AE94E0 = 0;
  qword_4AE94E8 = 0;
  qword_4AE94F0 = 0;
  qword_4AE94F8 = 0;
  qword_4AE9518 = (__int64)&qword_4AE9530;
  qword_4AE9520 = 1;
  dword_4AE9528 = 0;
  byte_4AE952C = 1;
  v12 = sub_259AC30(sub_1F6C9D0, &qword_4AE9510);
  v13 = (unsigned int)qword_4AE9508;
  v14 = (unsigned int)qword_4AE9508 + 1LL;
  if ( HIDWORD(qword_4AE9508) < v14 )
  {
    sub_25D6060(&qword_4AE9510 - 2, &qword_4AE9510, v14, 8);
    v13 = (unsigned int)qword_4AE9508;
  }
  v15 = _mm_load_si128(&v17);
  *(_QWORD *)(qword_4AE9500 + 8 * v13) = v12;
  word_4AE9548 = 0;
  xmmword_4AE9558 = 0;
  xmmword_4AE9568 = (__int128)v15;
  qword_4AE9540 = (__int64)&off_4A64730;
  LODWORD(qword_4AE9508) = qword_4AE9508 + 1;
  byte_4AE9538 = 0;
  qword_4AE94C0 = (__int64)off_4A6DFF0;
  qword_4AE9550 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE94C0, "asm-print-latency", 17);
  word_4AE9548 = 256;
  qword_4AE94E0 = (__int64)"Print instruction latencies as verbose asm comments";
  qword_4AE94E8 = 51;
  byte_4AE9538 = 0;
  BYTE2(qword_4AE94C8) = BYTE2(qword_4AE94C8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE94C0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AE94C0, &off_47CFE00);
}

