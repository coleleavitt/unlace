int __fastcall sub_5C0790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm6
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __m128i v20; // xmm7
  int *v21; // r15
  __int64 v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm3
  __int64 v26; // rax
  __int64 v27; // rdx
  __m128i v28; // xmm4
  __int64 v29; // rax
  __int64 v30; // rdx
  __m128i v31; // xmm5
  __int64 v32; // rax
  __int64 v33; // rdx
  __m128i v34; // xmm6
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __m128i v38; // xmm7
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i v41; // xmm3
  __int64 v42; // rax
  __int64 v43; // rdx
  __m128i v44; // xmm4
  __int64 v45; // rax
  __int64 v46; // rdx
  __m128i v47; // xmm5
  __int64 v48; // r14
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __m128i v51; // xmm6
  __int64 v52; // rax
  __int64 v53; // rdx
  __m128i v54; // xmm7
  __int64 v55; // rax
  __int64 v56; // rdx
  __m128i v57; // xmm1
  __int64 v58; // r12
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __m128i v61; // xmm2
  __m128i v63; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v64; // [rsp+10h] [rbp-B8h] BYREF
  const char **v65; // [rsp+28h] [rbp-A0h]
  int *v66; // [rsp+30h] [rbp-98h]
  int **v67; // [rsp+38h] [rbp-90h]
  int *v68; // [rsp+40h] [rbp-88h]
  __int64 v69; // [rsp+48h] [rbp-80h]
  int v70; // [rsp+50h] [rbp-78h] BYREF
  int v71; // [rsp+54h] [rbp-74h] BYREF
  int *v72; // [rsp+58h] [rbp-70h] BYREF
  const char *v73; // [rsp+60h] [rbp-68h] BYREF
  __int64 v74; // [rsp+68h] [rbp-60h]
  __int16 v75; // [rsp+80h] [rbp-48h]

  v70 = 100;
  v68 = &v70;
  v72 = &v70;
  v73 = "Maximum number of iterations SCEV will symbolically execute a constant derived loop";
  v65 = &v73;
  v67 = &v72;
  v64 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EC460), (__m128i)(unsigned __int64)nullsub_266);
  v63 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EC458), (__m128i)(unsigned __int64)nullsub_267);
  v66 = &v71;
  v74 = 83;
  v71 = 2;
  sub_37E3D10(
    qword_4B0F280,
    "scalar-evolution-max-iterations",
    &v71,
    &v73,
    &v72,
    a6,
    v63.m128i_i64[0],
    v63.m128i_i64[1],
    v64.m128i_i64[0],
    v64.m128i_i64[1]);
  __cxa_atexit(sub_1F6C940, qword_4B0F280, &off_47CFE00);
  qword_4B0F1D0 = 0;
  qword_4B0F1D8 = 0;
  qword_4B0F1C0 = (__int64)&off_4A6E058;
  qword_4B0F1C8 = (unsigned int)qword_4B0F1C8 & 0x80000000;
  qword_4B0F1E0 = 0;
  qword_4B0F1E8 = 0;
  qword_4B0F1F0 = 0;
  qword_4B0F1F8 = 0;
  qword_4B0F200 = (__int64)&qword_4B0F210;
  qword_4B0F208 = 0x100000000LL;
  qword_4B0F218 = (__int64)&qword_4B0F230;
  qword_4B0F220 = 1;
  dword_4B0F228 = 0;
  byte_4B0F22C = 1;
  v6 = sub_259AC30(sub_1F6C940, &qword_4B0F210);
  v7 = (unsigned int)qword_4B0F208;
  v8 = (unsigned int)qword_4B0F208 + 1LL;
  if ( HIDWORD(qword_4B0F208) < v8 )
  {
    sub_25D6060(&qword_4B0F210 - 2, &qword_4B0F210, v8, 8);
    v7 = (unsigned int)qword_4B0F208;
  }
  *(_QWORD *)(qword_4B0F200 + 8 * v7) = v6;
  xmmword_4B0F258 = 0;
  LODWORD(qword_4B0F208) = qword_4B0F208 + 1;
  qword_4B0F240 = (__int64)&off_4A64730;
  qword_4B0F238 = 0;
  byte_4B0F249 = 0;
  qword_4B0F1C0 = (__int64)off_4A6D260;
  qword_4B0F250 = (__int64)off_49D9168;
  xmmword_4B0F268 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC468),
                                (__m128i)(unsigned __int64)nullsub_329);
  sub_259F400(&qword_4B0F1C0, "verify-scev", 11);
  BYTE2(qword_4B0F1C8) = BYTE2(qword_4B0F1C8) & 0x9F | 0x20;
  if ( qword_4B0F238 )
  {
    v11 = sub_26260E0(&qword_4B0F1C0, "verify-scev", v9, v10);
    v75 = 259;
    v73 = "cl::location(x) specified more than once!";
    sub_2598800(&qword_4B0F1C0, v65, 0, 0, v11, v12);
  }
  else
  {
    byte_4B0F249 = 1;
    qword_4B0F238 = (__int64)byte_4B0F338;
    byte_4B0F248 = byte_4B0F338[0];
  }
  qword_4B0F1E8 = 53;
  qword_4B0F1E0 = (__int64)"Verify ScalarEvolution's backedge taken counts (slow)";
  sub_259EC40(&qword_4B0F1C0);
  __cxa_atexit(sub_23D25A0, &qword_4B0F1C0, &off_47CFE00);
  qword_4B0F110 = 0;
  qword_4B0F100 = (__int64)&off_4A6E058;
  qword_4B0F108 = (unsigned int)qword_4B0F108 & 0x80000000;
  qword_4B0F140 = (__int64)&qword_4B0F150;
  qword_4B0F118 = 0;
  qword_4B0F120 = 0;
  qword_4B0F128 = 0;
  qword_4B0F130 = 0;
  qword_4B0F138 = 0;
  qword_4B0F148 = 0x100000000LL;
  qword_4B0F158 = (__int64)&qword_4B0F170;
  qword_4B0F160 = 1;
  dword_4B0F168 = 0;
  byte_4B0F16C = 1;
  v13 = sub_259AC30(sub_23D25A0, &qword_4B0F150);
  v14 = (unsigned int)qword_4B0F148;
  v15 = (unsigned int)qword_4B0F148 + 1LL;
  if ( HIDWORD(qword_4B0F148) < v15 )
  {
    sub_25D6060(&qword_4B0F150 - 2, &qword_4B0F150, v15, 8);
    v14 = (unsigned int)qword_4B0F148;
  }
  v16 = _mm_load_si128(&v64);
  *(_QWORD *)(qword_4B0F140 + 8 * v14) = v13;
  word_4B0F188 = 0;
  xmmword_4B0F198 = 0;
  qword_4B0F180 = (__int64)&off_4A64730;
  xmmword_4B0F1A8 = (__int128)v16;
  LODWORD(qword_4B0F148) = qword_4B0F148 + 1;
  qword_4B0F100 = (__int64)off_4A6DFF0;
  byte_4B0F178 = 0;
  qword_4B0F190 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0F100, "verify-scev-strict", 18);
  qword_4B0F128 = 56;
  BYTE2(qword_4B0F108) = BYTE2(qword_4B0F108) & 0x9F | 0x20;
  qword_4B0F120 = (__int64)"Enable stricter verification with -verify-scev is passed";
  sub_259EC40(&qword_4B0F100);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0F100, &off_47CFE00);
  qword_4B0F050 = 0;
  qword_4B0F040 = (__int64)&off_4A6E058;
  qword_4B0F048 = (unsigned int)qword_4B0F048 & 0x80000000;
  qword_4B0F080 = (__int64)&qword_4B0F090;
  qword_4B0F058 = 0;
  qword_4B0F060 = 0;
  qword_4B0F068 = 0;
  qword_4B0F070 = 0;
  qword_4B0F078 = 0;
  qword_4B0F088 = 0x100000000LL;
  qword_4B0F098 = (__int64)&qword_4B0F0B0;
  qword_4B0F0A0 = 1;
  dword_4B0F0A8 = 0;
  byte_4B0F0AC = 1;
  v17 = sub_259AC30(sub_1F6C9D0, &qword_4B0F090);
  v18 = (unsigned int)qword_4B0F088;
  v19 = (unsigned int)qword_4B0F088 + 1LL;
  if ( HIDWORD(qword_4B0F088) < v19 )
  {
    sub_25D6060(&qword_4B0F090 - 2, &qword_4B0F090, v19, 8);
    v18 = (unsigned int)qword_4B0F088;
  }
  v20 = _mm_load_si128(&v64);
  *(_QWORD *)(qword_4B0F080 + 8 * v18) = v17;
  word_4B0F0C8 = 0;
  xmmword_4B0F0D8 = 0;
  qword_4B0F0C0 = (__int64)&off_4A64730;
  xmmword_4B0F0E8 = (__int128)v20;
  LODWORD(qword_4B0F088) = qword_4B0F088 + 1;
  qword_4B0F040 = (__int64)off_4A6DFF0;
  byte_4B0F0B8 = 0;
  qword_4B0F0D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0F040, "scev-verify-ir", 14);
  qword_4B0F068 = 63;
  byte_4B0F0B8 = 0;
  BYTE2(qword_4B0F048) = BYTE2(qword_4B0F048) & 0x9F | 0x20;
  qword_4B0F060 = (__int64)"Verify IR correctness when making sensitive SCEV queries (slow)";
  word_4B0F0C8 = 256;
  sub_259EC40(&qword_4B0F040);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0F040, &off_47CFE00);
  v21 = v68;
  v72 = v68;
  v73 = "Threshold for inlining multiplication operands into a SCEV";
  v70 = 32;
  v74 = 58;
  v71 = 1;
  sub_37E3ED0(qword_4B0EF80, "scev-mulops-inline-threshold", v66, v65, v67);
  __cxa_atexit(sub_1F6C940, qword_4B0EF80, &off_47CFE00);
  v72 = v21;
  v73 = "Threshold for inlining addition operands into a SCEV";
  v70 = 500;
  v74 = 52;
  v71 = 1;
  sub_37E3ED0(qword_4B0EEC0, "scev-addops-inline-threshold", v66, v65, v67);
  __cxa_atexit(sub_1F6C940, qword_4B0EEC0, &off_47CFE00);
  v72 = v21;
  v73 = "Maximum depth of recursive SCEV complexity comparisons";
  v70 = 32;
  v74 = 54;
  v71 = 1;
  sub_37E4090(qword_4B0EE00, "scalar-evolution-max-scev-compare-depth", v66, v65, v67);
  __cxa_atexit(sub_1F6C940, qword_4B0EE00, &off_47CFE00);
  qword_4B0ED50 = 0;
  qword_4B0ED40 = (__int64)&off_4A6E058;
  qword_4B0ED48 = (unsigned int)qword_4B0ED48 & 0x80000000;
  qword_4B0ED80 = (__int64)&qword_4B0ED90;
  qword_4B0ED58 = 0;
  qword_4B0ED60 = 0;
  qword_4B0ED68 = 0;
  qword_4B0ED70 = 0;
  qword_4B0ED78 = 0;
  qword_4B0ED88 = 0x100000000LL;
  qword_4B0ED98 = (__int64)&qword_4B0EDB0;
  qword_4B0EDA0 = 1;
  dword_4B0EDA8 = 0;
  byte_4B0EDAC = 1;
  v22 = sub_259AC30(sub_1F6C940, &qword_4B0ED90);
  v23 = (unsigned int)qword_4B0ED88;
  v24 = (unsigned int)qword_4B0ED88 + 1LL;
  if ( HIDWORD(qword_4B0ED88) < v24 )
  {
    sub_25D6060(&qword_4B0ED90 - 2, &qword_4B0ED90, v24, 8);
    v23 = (unsigned int)qword_4B0ED88;
  }
  v25 = _mm_load_si128(&v63);
  *(_QWORD *)(qword_4B0ED80 + 8 * v23) = v22;
  xmmword_4B0EDD8 = 0;
  xmmword_4B0EDE8 = (__int128)v25;
  qword_4B0EDC0 = (__int64)&off_4A64710;
  LODWORD(qword_4B0ED88) = qword_4B0ED88 + 1;
  byte_4B0EDCC = 0;
  qword_4B0ED40 = (__int64)off_4A6DEB8;
  dword_4B0EDB8 = 0;
  dword_4B0EDC8 = 0;
  qword_4B0EDD0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B0ED40, "scalar-evolution-max-scev-operations-implication-depth", 54);
  qword_4B0ED68 = 63;
  dword_4B0EDB8 = 2;
  byte_4B0EDCC = 1;
  dword_4B0EDC8 = 2;
  BYTE2(qword_4B0ED48) = BYTE2(qword_4B0ED48) & 0x9F | 0x20;
  qword_4B0ED60 = (__int64)"Maximum depth of recursive SCEV operations implication analysis";
  sub_259EC40(&qword_4B0ED40);
  __cxa_atexit(sub_1F6C940, &qword_4B0ED40, &off_47CFE00);
  qword_4B0EC90 = 0;
  qword_4B0EC80 = (__int64)&off_4A6E058;
  qword_4B0EC88 = (unsigned int)qword_4B0EC88 & 0x80000000;
  qword_4B0ECC0 = (__int64)&qword_4B0ECD0;
  qword_4B0EC98 = 0;
  qword_4B0ECA0 = 0;
  qword_4B0ECA8 = 0;
  qword_4B0ECB0 = 0;
  qword_4B0ECB8 = 0;
  qword_4B0ECC8 = 0x100000000LL;
  qword_4B0ECD8 = (__int64)&qword_4B0ECF0;
  qword_4B0ECE0 = 1;
  dword_4B0ECE8 = 0;
  byte_4B0ECEC = 1;
  v26 = sub_259AC30(sub_1F6C940, &qword_4B0ECD0);
  v27 = (unsigned int)qword_4B0ECC8;
  if ( HIDWORD(qword_4B0ECC8) < (unsigned __int64)(unsigned int)qword_4B0ECC8 + 1 )
  {
    v69 = v26;
    sub_25D6060(&qword_4B0ECD0 - 2, &qword_4B0ECD0, (unsigned int)qword_4B0ECC8 + 1LL, 8);
    v27 = (unsigned int)qword_4B0ECC8;
    v26 = v69;
  }
  v28 = _mm_load_si128(&v63);
  *(_QWORD *)(qword_4B0ECC0 + 8 * v27) = v26;
  qword_4B0ED00 = (__int64)&off_4A64710;
  xmmword_4B0ED18 = 0;
  xmmword_4B0ED28 = (__int128)v28;
  qword_4B0EC80 = (__int64)off_4A6DEB8;
  LODWORD(qword_4B0ECC8) = qword_4B0ECC8 + 1;
  byte_4B0ED0C = 0;
  qword_4B0ED10 = (__int64)off_49D9228;
  dword_4B0ECF8 = 0;
  dword_4B0ED08 = 0;
  sub_259F400(&qword_4B0EC80, "scalar-evolution-max-value-compare-depth", 40);
  qword_4B0ECA8 = 55;
  dword_4B0ECF8 = 2;
  byte_4B0ED0C = 1;
  dword_4B0ED08 = 2;
  BYTE2(qword_4B0EC88) = BYTE2(qword_4B0EC88) & 0x9F | 0x20;
  qword_4B0ECA0 = (__int64)"Maximum depth of recursive value complexity comparisons";
  sub_259EC40(&qword_4B0EC80);
  __cxa_atexit(sub_1F6C940, &qword_4B0EC80, &off_47CFE00);
  qword_4B0EBD0 = 0;
  qword_4B0EBC0 = (__int64)&off_4A6E058;
  qword_4B0EBC8 = (unsigned int)qword_4B0EBC8 & 0x80000000;
  qword_4B0EC00 = (__int64)&qword_4B0EC10;
  qword_4B0EBD8 = 0;
  qword_4B0EBE0 = 0;
  qword_4B0EBE8 = 0;
  qword_4B0EBF0 = 0;
  qword_4B0EBF8 = 0;
  qword_4B0EC08 = 0x100000000LL;
  qword_4B0EC18 = (__int64)&qword_4B0EC30;
  qword_4B0EC20 = 1;
  dword_4B0EC28 = 0;
  byte_4B0EC2C = 1;
  v29 = sub_259AC30(sub_1F6C940, &qword_4B0EC10);
  v30 = (unsigned int)qword_4B0EC08;
  if ( HIDWORD(qword_4B0EC08) < (unsigned __int64)(unsigned int)qword_4B0EC08 + 1 )
  {
    v69 = v29;
    sub_25D6060(&qword_4B0EC10 - 2, &qword_4B0EC10, (unsigned int)qword_4B0EC08 + 1LL, 8);
    v30 = (unsigned int)qword_4B0EC08;
    v29 = v69;
  }
  v31 = _mm_load_si128(&v63);
  *(_QWORD *)(qword_4B0EC00 + 8 * v30) = v29;
  qword_4B0EC40 = (__int64)&off_4A64710;
  xmmword_4B0EC58 = 0;
  xmmword_4B0EC68 = (__int128)v31;
  qword_4B0EBC0 = (__int64)off_4A6DEB8;
  LODWORD(qword_4B0EC08) = qword_4B0EC08 + 1;
  byte_4B0EC4C = 0;
  qword_4B0EC50 = (__int64)off_49D9228;
  dword_4B0EC38 = 0;
  dword_4B0EC48 = 0;
  sub_259F400(&qword_4B0EBC0, "scalar-evolution-max-arith-depth", 32);
  qword_4B0EBE8 = 38;
  dword_4B0EC38 = 32;
  byte_4B0EC4C = 1;
  dword_4B0EC48 = 32;
  BYTE2(qword_4B0EBC8) = BYTE2(qword_4B0EBC8) & 0x9F | 0x20;
  qword_4B0EBE0 = (__int64)"Maximum depth of recursive arithmetics";
  sub_259EC40(&qword_4B0EBC0);
  __cxa_atexit(sub_1F6C940, &qword_4B0EBC0, &off_47CFE00);
  qword_4B0EB10 = 0;
  qword_4B0EB00 = (__int64)&off_4A6E058;
  qword_4B0EB08 = (unsigned int)qword_4B0EB08 & 0x80000000;
  qword_4B0EB40 = (__int64)&qword_4B0EB50;
  qword_4B0EB18 = 0;
  qword_4B0EB20 = 0;
  qword_4B0EB28 = 0;
  qword_4B0EB30 = 0;
  qword_4B0EB38 = 0;
  qword_4B0EB48 = 0x100000000LL;
  qword_4B0EB58 = (__int64)&qword_4B0EB70;
  qword_4B0EB60 = 1;
  dword_4B0EB68 = 0;
  byte_4B0EB6C = 1;
  v32 = sub_259AC30(sub_1F6C940, &qword_4B0EB50);
  v33 = (unsigned int)qword_4B0EB48;
  if ( HIDWORD(qword_4B0EB48) < (unsigned __int64)(unsigned int)qword_4B0EB48 + 1 )
  {
    v69 = v32;
    sub_25D6060(&qword_4B0EB50 - 2, &qword_4B0EB50, (unsigned int)qword_4B0EB48 + 1LL, 8);
    v33 = (unsigned int)qword_4B0EB48;
    v32 = v69;
  }
  v34 = _mm_load_si128(&v63);
  *(_QWORD *)(qword_4B0EB40 + 8 * v33) = v32;
  qword_4B0EB80 = (__int64)&off_4A64710;
  xmmword_4B0EB98 = 0;
  xmmword_4B0EBA8 = (__int128)v34;
  qword_4B0EB00 = (__int64)off_4A6DEB8;
  LODWORD(qword_4B0EB48) = qword_4B0EB48 + 1;
  byte_4B0EB8C = 0;
  qword_4B0EB90 = (__int64)off_49D9228;
  dword_4B0EB78 = 0;
  dword_4B0EB88 = 0;
  sub_259F400(&qword_4B0EB00, "scalar-evolution-max-constant-evolving-depth", 44);
  qword_4B0EB28 = 44;
  dword_4B0EB78 = 32;
  byte_4B0EB8C = 1;
  dword_4B0EB88 = 32;
  BYTE2(qword_4B0EB08) = BYTE2(qword_4B0EB08) & 0x9F | 0x20;
  qword_4B0EB20 = (__int64)"Maximum depth of recursive constant evolving";
  sub_259EC40(&qword_4B0EB00);
  __cxa_atexit(sub_1F6C940, &qword_4B0EB00, &off_47CFE00);
  v72 = v68;
  v73 = "Maximum depth of recursive SExt/ZExt/Trunc";
  v70 = 8;
  v74 = 42;
  v71 = 1;
  sub_37E3D10(
    qword_4B0EA40,
    "scalar-evolution-max-cast-depth",
    v66,
    v65,
    v67,
    v35,
    v63.m128i_i64[0],
    v63.m128i_i64[1],
    v64.m128i_i64[0],
    v64.m128i_i64[1]);
  __cxa_atexit(sub_1F6C940, qword_4B0EA40, &off_47CFE00);
  qword_4B0E990 = 0;
  qword_4B0E980 = (__int64)&off_4A6E058;
  qword_4B0E988 = (unsigned int)qword_4B0E988 & 0x80000000;
  qword_4B0E9C0 = (__int64)&qword_4B0E9D0;
  qword_4B0E998 = 0;
  qword_4B0E9A0 = 0;
  qword_4B0E9A8 = 0;
  qword_4B0E9B0 = 0;
  qword_4B0E9B8 = 0;
  qword_4B0E9C8 = 0x100000000LL;
  qword_4B0E9D8 = (__int64)&qword_4B0E9F0;
  qword_4B0E9E0 = 1;
  dword_4B0E9E8 = 0;
  byte_4B0E9EC = 1;
  v36 = sub_259AC30(sub_1F6C940, &qword_4B0E9D0);
  v37 = (unsigned int)qword_4B0E9C8;
  if ( HIDWORD(qword_4B0E9C8) < (unsigned __int64)(unsigned int)qword_4B0E9C8 + 1 )
  {
    v69 = v36;
    sub_25D6060(&qword_4B0E9D0 - 2, &qword_4B0E9D0, (unsigned int)qword_4B0E9C8 + 1LL, 8);
    v37 = (unsigned int)qword_4B0E9C8;
    v36 = v69;
  }
  v38 = _mm_load_si128(&v63);
  *(_QWORD *)(qword_4B0E9C0 + 8 * v37) = v36;
  qword_4B0EA00 = (__int64)&off_4A64710;
  xmmword_4B0EA18 = 0;
  xmmword_4B0EA28 = (__int128)v38;
  qword_4B0E980 = (__int64)off_4A6DEB8;
  LODWORD(qword_4B0E9C8) = qword_4B0E9C8 + 1;
  byte_4B0EA0C = 0;
  qword_4B0EA10 = (__int64)off_49D9228;
  dword_4B0E9F8 = 0;
  dword_4B0EA08 = 0;
  sub_259F400(&qword_4B0E980, "scalar-evolution-max-add-rec-size", 33);
  qword_4B0E9A8 = 42;
  dword_4B0E9F8 = 8;
  byte_4B0EA0C = 1;
  dword_4B0EA08 = 8;
  BYTE2(qword_4B0E988) = BYTE2(qword_4B0E988) & 0x9F | 0x20;
  qword_4B0E9A0 = (__int64)"Max coefficients in AddRec during evolving";
  sub_259EC40(&qword_4B0E980);
  __cxa_atexit(sub_1F6C940, &qword_4B0E980, &off_47CFE00);
  qword_4B0E8D0 = 0;
  qword_4B0E8C0 = (__int64)&off_4A6E058;
  qword_4B0E8C8 = (unsigned int)qword_4B0E8C8 & 0x80000000;
  qword_4B0E900 = (__int64)&qword_4B0E910;
  qword_4B0E8D8 = 0;
  qword_4B0E8E0 = 0;
  qword_4B0E8E8 = 0;
  qword_4B0E8F0 = 0;
  qword_4B0E8F8 = 0;
  qword_4B0E908 = 0x100000000LL;
  qword_4B0E918 = (__int64)&qword_4B0E930;
  qword_4B0E920 = 1;
  dword_4B0E928 = 0;
  byte_4B0E92C = 1;
  v39 = sub_259AC30(sub_1F6C940, &qword_4B0E910);
  v40 = (unsigned int)qword_4B0E908;
  if ( HIDWORD(qword_4B0E908) < (unsigned __int64)(unsigned int)qword_4B0E908 + 1 )
  {
    v69 = v39;
    sub_25D6060(&qword_4B0E910 - 2, &qword_4B0E910, (unsigned int)qword_4B0E908 + 1LL, 8);
    v40 = (unsigned int)qword_4B0E908;
    v39 = v69;
  }
  v41 = _mm_load_si128(&v63);
  *(_QWORD *)(qword_4B0E900 + 8 * v40) = v39;
  qword_4B0E940 = (__int64)&off_4A64710;
  xmmword_4B0E958 = 0;
  xmmword_4B0E968 = (__int128)v41;
  qword_4B0E8C0 = (__int64)off_4A6DEB8;
  LODWORD(qword_4B0E908) = qword_4B0E908 + 1;
  byte_4B0E94C = 0;
  qword_4B0E950 = (__int64)off_49D9228;
  dword_4B0E938 = 0;
  dword_4B0E948 = 0;
  sub_259F400(&qword_4B0E8C0, "scalar-evolution-huge-expr-threshold", 36);
  qword_4B0E8E8 = 47;
  dword_4B0E938 = 4096;
  byte_4B0E94C = 1;
  dword_4B0E948 = 4096;
  BYTE2(qword_4B0E8C8) = BYTE2(qword_4B0E8C8) & 0x9F | 0x20;
  qword_4B0E8E0 = (__int64)"Size of the expression which is considered huge";
  sub_259EC40(&qword_4B0E8C0);
  __cxa_atexit(sub_1F6C940, &qword_4B0E8C0, &off_47CFE00);
  qword_4B0E810 = 0;
  qword_4B0E800 = (__int64)&off_4A6E058;
  qword_4B0E808 = (unsigned int)qword_4B0E808 & 0x80000000;
  qword_4B0E840 = (__int64)&qword_4B0E850;
  qword_4B0E818 = 0;
  qword_4B0E820 = 0;
  qword_4B0E828 = 0;
  qword_4B0E830 = 0;
  qword_4B0E838 = 0;
  qword_4B0E848 = 0x100000000LL;
  qword_4B0E858 = (__int64)&qword_4B0E870;
  qword_4B0E860 = 1;
  dword_4B0E868 = 0;
  byte_4B0E86C = 1;
  v42 = sub_259AC30(sub_1F6C940, &qword_4B0E850);
  v43 = (unsigned int)qword_4B0E848;
  if ( HIDWORD(qword_4B0E848) < (unsigned __int64)(unsigned int)qword_4B0E848 + 1 )
  {
    v69 = v42;
    sub_25D6060(&qword_4B0E850 - 2, &qword_4B0E850, (unsigned int)qword_4B0E848 + 1LL, 8);
    v43 = (unsigned int)qword_4B0E848;
    v42 = v69;
  }
  v44 = _mm_load_si128(&v63);
  *(_QWORD *)(qword_4B0E840 + 8 * v43) = v42;
  qword_4B0E880 = (__int64)&off_4A64710;
  xmmword_4B0E898 = 0;
  xmmword_4B0E8A8 = (__int128)v44;
  qword_4B0E800 = (__int64)off_4A6DEB8;
  LODWORD(qword_4B0E848) = qword_4B0E848 + 1;
  byte_4B0E88C = 0;
  qword_4B0E890 = (__int64)off_49D9228;
  dword_4B0E878 = 0;
  dword_4B0E888 = 0;
  sub_259F400(&qword_4B0E800, "scev-range-iter-threshold", 25);
  qword_4B0E828 = 60;
  dword_4B0E878 = 32;
  byte_4B0E88C = 1;
  dword_4B0E888 = 32;
  BYTE2(qword_4B0E808) = BYTE2(qword_4B0E808) & 0x9F | 0x20;
  qword_4B0E820 = (__int64)"Threshold for switching to iteratively computing SCEV ranges";
  sub_259EC40(&qword_4B0E800);
  __cxa_atexit(sub_1F6C940, &qword_4B0E800, &off_47CFE00);
  qword_4B0E750 = 0;
  qword_4B0E740 = (__int64)&off_4A6E058;
  qword_4B0E748 = (unsigned int)qword_4B0E748 & 0x80000000;
  qword_4B0E780 = (__int64)&qword_4B0E790;
  qword_4B0E758 = 0;
  qword_4B0E760 = 0;
  qword_4B0E768 = 0;
  qword_4B0E770 = 0;
  qword_4B0E778 = 0;
  qword_4B0E788 = 0x100000000LL;
  qword_4B0E798 = (__int64)&qword_4B0E7B0;
  qword_4B0E7A0 = 1;
  dword_4B0E7A8 = 0;
  byte_4B0E7AC = 1;
  v45 = sub_259AC30(sub_1F6C940, &qword_4B0E790);
  v46 = (unsigned int)qword_4B0E788;
  if ( HIDWORD(qword_4B0E788) < (unsigned __int64)(unsigned int)qword_4B0E788 + 1 )
  {
    v69 = v45;
    sub_25D6060(&qword_4B0E790 - 2, &qword_4B0E790, (unsigned int)qword_4B0E788 + 1LL, 8);
    v46 = (unsigned int)qword_4B0E788;
    v45 = v69;
  }
  v47 = _mm_load_si128(&v63);
  *(_QWORD *)(qword_4B0E780 + 8 * v46) = v45;
  qword_4B0E7C0 = (__int64)&off_4A64710;
  xmmword_4B0E7D8 = 0;
  xmmword_4B0E7E8 = (__int128)v47;
  qword_4B0E740 = (__int64)off_4A6DEB8;
  LODWORD(qword_4B0E788) = qword_4B0E788 + 1;
  byte_4B0E7CC = 0;
  qword_4B0E7D0 = (__int64)off_49D9228;
  dword_4B0E7B8 = 0;
  dword_4B0E7C8 = 0;
  sub_259F400(&qword_4B0E740, "scalar-evolution-max-loop-guard-collection-depth", 48);
  qword_4B0E768 = 49;
  dword_4B0E7B8 = 1;
  byte_4B0E7CC = 1;
  dword_4B0E7C8 = 1;
  BYTE2(qword_4B0E748) = BYTE2(qword_4B0E748) & 0x9F | 0x20;
  qword_4B0E760 = (__int64)"Maximum depth for recursive loop guard collection";
  sub_259EC40(&qword_4B0E740);
  __cxa_atexit(sub_1F6C940, &qword_4B0E740, &off_47CFE00);
  qword_4B0E690 = 0;
  qword_4B0E680 = (__int64)&off_4A6E058;
  qword_4B0E688 = (unsigned int)qword_4B0E688 & 0x80000000;
  qword_4B0E6C0 = (__int64)&qword_4B0E6D0;
  qword_4B0E698 = 0;
  qword_4B0E6A0 = 0;
  qword_4B0E6A8 = 0;
  qword_4B0E6B0 = 0;
  qword_4B0E6B8 = 0;
  qword_4B0E6C8 = 0x100000000LL;
  qword_4B0E6D8 = (__int64)&qword_4B0E6F0;
  qword_4B0E6E0 = 1;
  dword_4B0E6E8 = 0;
  byte_4B0E6EC = 1;
  v48 = sub_259AC30(sub_1F6C940, &qword_4B0E6D0);
  v49 = (unsigned int)qword_4B0E6C8;
  v50 = (unsigned int)qword_4B0E6C8 + 1LL;
  if ( HIDWORD(qword_4B0E6C8) < v50 )
  {
    sub_25D6060(&qword_4B0E6D0 - 2, &qword_4B0E6D0, v50, 8);
    v49 = (unsigned int)qword_4B0E6C8;
  }
  v51 = _mm_load_si128(&v64);
  *(_QWORD *)(qword_4B0E6C0 + 8 * v49) = v48;
  word_4B0E708 = 0;
  xmmword_4B0E718 = 0;
  qword_4B0E700 = (__int64)&off_4A64730;
  xmmword_4B0E728 = (__int128)v51;
  LODWORD(qword_4B0E6C8) = qword_4B0E6C8 + 1;
  qword_4B0E680 = (__int64)off_4A6DFF0;
  byte_4B0E6F8 = 0;
  qword_4B0E710 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0E680, "scalar-evolution-classify-expressions", 37);
  byte_4B0E6F8 = 1;
  word_4B0E708 = 257;
  qword_4B0E6A8 = 64;
  BYTE2(qword_4B0E688) = BYTE2(qword_4B0E688) & 0x9F | 0x20;
  qword_4B0E6A0 = (__int64)"When printing analysis, include information on every instruction";
  sub_259EC40(&qword_4B0E680);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0E680, &off_47CFE00);
  qword_4B0E5D0 = 0;
  qword_4B0E5C0 = (__int64)&off_4A6E058;
  qword_4B0E5C8 = (unsigned int)qword_4B0E5C8 & 0x80000000;
  qword_4B0E600 = (__int64)&qword_4B0E610;
  qword_4B0E5D8 = 0;
  qword_4B0E5E0 = 0;
  qword_4B0E5E8 = 0;
  qword_4B0E5F0 = 0;
  qword_4B0E5F8 = 0;
  qword_4B0E608 = 0x100000000LL;
  qword_4B0E618 = (__int64)&qword_4B0E630;
  qword_4B0E620 = 1;
  dword_4B0E628 = 0;
  byte_4B0E62C = 1;
  v52 = sub_259AC30(sub_1F6C9D0, &qword_4B0E610);
  v53 = (unsigned int)qword_4B0E608;
  if ( HIDWORD(qword_4B0E608) < (unsigned __int64)(unsigned int)qword_4B0E608 + 1 )
  {
    v63.m128i_i64[0] = v52;
    sub_25D6060(&qword_4B0E610 - 2, &qword_4B0E610, (unsigned int)qword_4B0E608 + 1LL, 8);
    v53 = (unsigned int)qword_4B0E608;
    v52 = v63.m128i_i64[0];
  }
  v54 = _mm_load_si128(&v64);
  *(_QWORD *)(qword_4B0E600 + 8 * v53) = v52;
  xmmword_4B0E658 = 0;
  xmmword_4B0E668 = (__int128)v54;
  qword_4B0E640 = (__int64)&off_4A64730;
  word_4B0E648 = 0;
  LODWORD(qword_4B0E608) = qword_4B0E608 + 1;
  qword_4B0E5C0 = (__int64)off_4A6DFF0;
  byte_4B0E638 = 0;
  qword_4B0E650 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0E5C0, "scalar-evolution-use-expensive-range-sharpening", 47);
  byte_4B0E638 = 0;
  qword_4B0E5E8 = 97;
  BYTE2(qword_4B0E5C8) = BYTE2(qword_4B0E5C8) & 0x9F | 0x20;
  word_4B0E648 = 256;
  qword_4B0E5E0 = (__int64)"Use more powerful methods of sharpening expression ranges. May be costly in terms of compile time";
  sub_259EC40(&qword_4B0E5C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0E5C0, &off_47CFE00);
  v72 = v68;
  v73 = "Maximum amount of nodes to process while searching SCEVUnknown Phi strongly connected components";
  v70 = 8;
  v74 = 96;
  v71 = 1;
  sub_37E4090(qword_4B0E500, "scalar-evolution-max-scc-analysis-depth", v66, v65, v67);
  __cxa_atexit(sub_1F6C940, qword_4B0E500, &off_47CFE00);
  qword_4B0E450 = 0;
  qword_4B0E440 = (__int64)&off_4A6E058;
  qword_4B0E448 = (unsigned int)qword_4B0E448 & 0x80000000;
  qword_4B0E480 = (__int64)&qword_4B0E490;
  qword_4B0E458 = 0;
  qword_4B0E460 = 0;
  qword_4B0E468 = 0;
  qword_4B0E470 = 0;
  qword_4B0E478 = 0;
  qword_4B0E488 = 0x100000000LL;
  qword_4B0E498 = (__int64)&qword_4B0E4B0;
  qword_4B0E4A0 = 1;
  dword_4B0E4A8 = 0;
  byte_4B0E4AC = 1;
  v55 = sub_259AC30(sub_1F6C940, &qword_4B0E490);
  v56 = (unsigned int)qword_4B0E488;
  if ( HIDWORD(qword_4B0E488) < (unsigned __int64)(unsigned int)qword_4B0E488 + 1 )
  {
    v63.m128i_i64[0] = v55;
    sub_25D6060(&qword_4B0E490 - 2, &qword_4B0E490, (unsigned int)qword_4B0E488 + 1LL, 8);
    v56 = (unsigned int)qword_4B0E488;
    v55 = v63.m128i_i64[0];
  }
  v57 = _mm_load_si128(&v64);
  *(_QWORD *)(qword_4B0E480 + 8 * v56) = v55;
  word_4B0E4C8 = 0;
  xmmword_4B0E4D8 = 0;
  qword_4B0E4C0 = (__int64)&off_4A64730;
  xmmword_4B0E4E8 = (__int128)v57;
  LODWORD(qword_4B0E488) = qword_4B0E488 + 1;
  qword_4B0E440 = (__int64)off_4A6DFF0;
  byte_4B0E4B8 = 0;
  qword_4B0E4D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0E440, "scalar-evolution-finite-loop", 28);
  qword_4B0E468 = 32;
  byte_4B0E4B8 = 1;
  word_4B0E4C8 = 257;
  BYTE2(qword_4B0E448) = BYTE2(qword_4B0E448) & 0x9F | 0x20;
  qword_4B0E460 = (__int64)"Handle <= and >= in finite loops";
  sub_259EC40(&qword_4B0E440);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0E440, &off_47CFE00);
  qword_4B0E3C8 = 0x100000000LL;
  qword_4B0E380 = (__int64)&off_4A6E058;
  qword_4B0E388 = (unsigned int)qword_4B0E388 & 0x80000000;
  qword_4B0E3C0 = (__int64)&qword_4B0E3D0;
  qword_4B0E390 = 0;
  qword_4B0E398 = 0;
  qword_4B0E3A0 = 0;
  qword_4B0E3A8 = 0;
  qword_4B0E3B0 = 0;
  qword_4B0E3B8 = 0;
  qword_4B0E3D8 = (__int64)&qword_4B0E3F0;
  qword_4B0E3E0 = 1;
  dword_4B0E3E8 = 0;
  byte_4B0E3EC = 1;
  v58 = sub_259AC30(sub_1F6C9D0, &qword_4B0E3D0);
  v59 = (unsigned int)qword_4B0E3C8;
  v60 = (unsigned int)qword_4B0E3C8 + 1LL;
  if ( HIDWORD(qword_4B0E3C8) < v60 )
  {
    sub_25D6060(&qword_4B0E3D0 - 2, &qword_4B0E3D0, v60, 8);
    v59 = (unsigned int)qword_4B0E3C8;
  }
  v61 = _mm_load_si128(&v64);
  *(_QWORD *)(qword_4B0E3C0 + 8 * v59) = v58;
  word_4B0E408 = 0;
  xmmword_4B0E418 = 0;
  xmmword_4B0E428 = (__int128)v61;
  qword_4B0E400 = (__int64)&off_4A64730;
  LODWORD(qword_4B0E3C8) = qword_4B0E3C8 + 1;
  byte_4B0E3F8 = 0;
  qword_4B0E380 = (__int64)off_4A6DFF0;
  qword_4B0E410 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0E380, "scalar-evolution-use-context-for-no-wrap-flag-strenghening", 58);
  word_4B0E408 = 257;
  qword_4B0E3A8 = 48;
  byte_4B0E3F8 = 1;
  BYTE2(qword_4B0E388) = BYTE2(qword_4B0E388) & 0x9F | 0x20;
  qword_4B0E3A0 = (__int64)"Infer nuw/nsw flags using context where suitable";
  sub_259EC40(&qword_4B0E380);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B0E380, &off_47CFE00);
}

