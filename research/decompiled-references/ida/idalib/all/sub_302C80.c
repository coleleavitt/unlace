int sub_302C80()
{
  size_t v0; // rax
  size_t v1; // rbp
  size_t v2; // rax
  __int64 v3; // rax
  size_t v4; // rbp
  size_t v5; // rax
  size_t v6; // rbx
  __m128i v7; // xmm2
  size_t v8; // rax
  size_t v9; // rax
  int **v10; // rbp
  const char **v11; // r12
  int *v12; // rbx
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  __m128i si128; // xmm1
  size_t v17; // rax
  __m128i v18; // xmm1
  size_t v19; // rax
  __m128i v20; // xmm1
  size_t v21; // rax
  size_t v22; // rax
  __m128i v23; // xmm1
  size_t v24; // rax
  __m128i v25; // xmm1
  size_t v26; // rax
  __m128i v27; // xmm1
  size_t v28; // rax
  __m128i v29; // xmm1
  size_t v30; // rax
  size_t v31; // rbx
  __m128i v32; // xmm2
  __int64 v33; // rbp
  size_t v34; // rax
  size_t v35; // rbx
  __m128i v36; // xmm2
  size_t v37; // rax
  size_t v38; // rax
  size_t v39; // rbx
  __m128i v40; // xmm2
  size_t v41; // rax
  size_t v42; // rbx
  __m128i v43; // xmm2
  size_t v44; // rax
  __m128 v46; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v47; // [rsp+10h] [rbp-B8h] BYREF
  int *v48; // [rsp+28h] [rbp-A0h]
  int **v49; // [rsp+30h] [rbp-98h]
  const char **v50; // [rsp+38h] [rbp-90h]
  __int64 (__fastcall **v51)(); // [rsp+40h] [rbp-88h]
  size_t v52; // [rsp+48h] [rbp-80h]
  int v53; // [rsp+50h] [rbp-78h] BYREF
  int v54; // [rsp+54h] [rbp-74h] BYREF
  int *v55; // [rsp+58h] [rbp-70h] BYREF
  const char *v56; // [rsp+60h] [rbp-68h] BYREF
  size_t v57; // [rsp+68h] [rbp-60h]
  __int16 v58; // [rsp+80h] [rbp-48h]

  v54 = 100;
  v55 = &v54;
  v0 = j__strlen("Maximum number of iterations SCEV will symbolically execute a constant derived loop");
  v49 = &v55;
  v56 = "Maximum number of iterations SCEV will symbolically execute a constant derived loop";
  v57 = v0;
  v48 = &v53;
  v53 = 2;
  v50 = &v56;
  sub_2019620(&unk_2CE2B80, "scalar-evolution-max-iterations", &v53, &v56);
  __cxa_atexit(sub_1FED260, &unk_2CE2B80, &off_2B25620);
  v1 = j__strlen("Verify ScalarEvolution's backedge taken counts (slow)");
  sub_2019550(&qword_2CE2AC0);
  byte_2CE2B49 = 0;
  qword_2CE2B38 = 0;
  qword_2CE2B40 = (__int64)off_2C714E8;
  xmmword_2CE2B68 = (__int128)_mm_loadh_ps((const double *)off_2C778E8);
  qword_2CE2AC0 = (__int64)off_2C71D10;
  qword_2CE2B50 = (__int64)off_2BEAB08;
  v2 = j__strlen("verify-scev");
  sub_2217250(&qword_2CE2AC0, "verify-scev", v2);
  byte_2CE2ACA = byte_2CE2ACA & 0x9F | 0x20;
  if ( qword_2CE2B38 )
  {
    v3 = sub_227D6D0();
    v58 = 259;
    v56 = "cl::location(x) specified more than once!";
    sub_22116C0(&qword_2CE2AC0, &v56, 0, 0, v3);
  }
  else
  {
    byte_2CE2B49 = 1;
    qword_2CE2B38 = (__int64)byte_2CE2C38;
    byte_2CE2B48 = byte_2CE2C38[0];
  }
  qword_2CE2AE8 = v1;
  qword_2CE2AE0 = (__int64)"Verify ScalarEvolution's backedge taken counts (slow)";
  sub_2218140(&qword_2CE2AC0);
  __cxa_atexit(sub_2015670, &qword_2CE2AC0, &off_2B25620);
  v4 = j__strlen("Enable stricter verification with -verify-scev is passed");
  sub_2019550(&qword_2CE2A00);
  word_2CE2A88 = 0;
  qword_2CE2A80 = (__int64)off_2C714E8;
  v47 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  xmmword_2CE2AA8 = (__int128)v47;
  v51 = off_2C75848;
  qword_2CE2A90 = (__int64)off_2BEAB08;
  byte_2CE2A78 = 0;
  qword_2CE2A00 = (__int64)off_2C75848;
  v5 = j__strlen("verify-scev-strict");
  sub_2217250(&qword_2CE2A00, "verify-scev-strict", v5);
  qword_2CE2A28 = v4;
  qword_2CE2A20 = (__int64)"Enable stricter verification with -verify-scev is passed";
  byte_2CE2A0A = byte_2CE2A0A & 0x9F | 0x20;
  sub_2218140(&qword_2CE2A00);
  __cxa_atexit(sub_200E190, &qword_2CE2A00, &off_2B25620);
  v6 = j__strlen("Verify IR correctness when making sensitive SCEV queries (slow)");
  sub_2019550(&qword_2CE2940);
  v7 = _mm_load_si128(&v47);
  word_2CE29C8 = 0;
  xmmword_2CE29E8 = (__int128)v7;
  qword_2CE29C0 = (__int64)off_2C714E8;
  qword_2CE2940 = (__int64)off_2C75848;
  qword_2CE29D0 = (__int64)off_2BEAB08;
  byte_2CE29B8 = 0;
  v8 = j__strlen("scev-verify-ir");
  sub_2217250(&qword_2CE2940, "scev-verify-ir", v8);
  qword_2CE2968 = v6;
  byte_2CE29B8 = 0;
  qword_2CE2960 = (__int64)"Verify IR correctness when making sensitive SCEV queries (slow)";
  word_2CE29C8 = 256;
  byte_2CE294A = byte_2CE294A & 0x9F | 0x20;
  sub_2218140(&qword_2CE2940);
  __cxa_atexit(sub_200E190, &qword_2CE2940, &off_2B25620);
  v55 = &v54;
  v54 = 32;
  v9 = j__strlen("Threshold for inlining multiplication operands into a SCEV");
  v10 = v49;
  v11 = v50;
  v56 = "Threshold for inlining multiplication operands into a SCEV";
  v12 = v48;
  v57 = v9;
  v53 = 1;
  sub_20197D0(&unk_2CE2880, "scev-mulops-inline-threshold", v48, v50, v49);
  __cxa_atexit(sub_1FED260, &unk_2CE2880, &off_2B25620);
  v55 = &v54;
  v54 = 500;
  v13 = j__strlen("Threshold for inlining addition operands into a SCEV");
  v56 = "Threshold for inlining addition operands into a SCEV";
  v57 = v13;
  v53 = 1;
  sub_20197D0(&unk_2CE27C0, "scev-addops-inline-threshold", v12, v11, v10);
  __cxa_atexit(sub_1FED260, &unk_2CE27C0, &off_2B25620);
  v55 = &v54;
  v54 = 32;
  v14 = j__strlen("Maximum depth of recursive SCEV complexity comparisons");
  v49 = v10;
  v57 = v14;
  v56 = "Maximum depth of recursive SCEV complexity comparisons";
  v50 = v11;
  v48 = v12;
  v53 = 1;
  sub_2019980(&unk_2CE2700, "scalar-evolution-max-scev-compare-depth", v12, v11, v10);
  __cxa_atexit(sub_1FED260, &unk_2CE2700, &off_2B25620);
  v52 = j__strlen("Maximum depth of recursive SCEV operations implication analysis");
  sub_2019550(&qword_2CE2640);
  dword_2CE26B8 = 0;
  dword_2CE26C8 = 0;
  v46 = _mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2CE26E8 = (__int128)v46;
  qword_2CE26C0 = (__int64)off_2C712D0;
  qword_2CE2640 = (__int64)off_2C75710;
  qword_2CE26D0 = (__int64)off_2BEAB98;
  byte_2CE26CC = 0;
  v15 = j__strlen("scalar-evolution-max-scev-operations-implication-depth");
  sub_2217250(&qword_2CE2640, "scalar-evolution-max-scev-operations-implication-depth", v15);
  qword_2CE2660 = (__int64)"Maximum depth of recursive SCEV operations implication analysis";
  dword_2CE26B8 = 2;
  byte_2CE26CC = 1;
  dword_2CE26C8 = 2;
  qword_2CE2668 = v52;
  byte_2CE264A = byte_2CE264A & 0x9F | 0x20;
  sub_2218140(&qword_2CE2640);
  __cxa_atexit(sub_1FED260, &qword_2CE2640, &off_2B25620);
  v52 = j__strlen("Maximum depth of recursive value complexity comparisons");
  sub_2019550(&qword_2CE2580);
  si128 = _mm_load_si128((const __m128i *)&v46);
  qword_2CE2600 = (__int64)off_2C712D0;
  qword_2CE2580 = (__int64)off_2C75710;
  xmmword_2CE2628 = (__int128)si128;
  qword_2CE2610 = (__int64)off_2BEAB98;
  dword_2CE25F8 = 0;
  dword_2CE2608 = 0;
  byte_2CE260C = 0;
  v17 = j__strlen("scalar-evolution-max-value-compare-depth");
  sub_2217250(&qword_2CE2580, "scalar-evolution-max-value-compare-depth", v17);
  qword_2CE25A0 = (__int64)"Maximum depth of recursive value complexity comparisons";
  dword_2CE25F8 = 2;
  qword_2CE25A8 = v52;
  byte_2CE260C = 1;
  byte_2CE258A = byte_2CE258A & 0x9F | 0x20;
  dword_2CE2608 = 2;
  sub_2218140(&qword_2CE2580);
  __cxa_atexit(sub_1FED260, &qword_2CE2580, &off_2B25620);
  v52 = j__strlen("Maximum depth of recursive arithmetics");
  sub_2019550(&qword_2CE24C0);
  v18 = _mm_load_si128((const __m128i *)&v46);
  qword_2CE2540 = (__int64)off_2C712D0;
  qword_2CE24C0 = (__int64)off_2C75710;
  xmmword_2CE2568 = (__int128)v18;
  qword_2CE2550 = (__int64)off_2BEAB98;
  dword_2CE2538 = 0;
  dword_2CE2548 = 0;
  byte_2CE254C = 0;
  v19 = j__strlen("scalar-evolution-max-arith-depth");
  sub_2217250(&qword_2CE24C0, "scalar-evolution-max-arith-depth", v19);
  qword_2CE24E0 = (__int64)"Maximum depth of recursive arithmetics";
  qword_2CE24E8 = v52;
  dword_2CE2538 = 32;
  byte_2CE254C = 1;
  byte_2CE24CA = byte_2CE24CA & 0x9F | 0x20;
  dword_2CE2548 = 32;
  sub_2218140(&qword_2CE24C0);
  __cxa_atexit(sub_1FED260, &qword_2CE24C0, &off_2B25620);
  v52 = j__strlen("Maximum depth of recursive constant evolving");
  sub_2019550(&qword_2CE2400);
  v20 = _mm_load_si128((const __m128i *)&v46);
  qword_2CE2480 = (__int64)off_2C712D0;
  qword_2CE2400 = (__int64)off_2C75710;
  xmmword_2CE24A8 = (__int128)v20;
  qword_2CE2490 = (__int64)off_2BEAB98;
  dword_2CE2478 = 0;
  dword_2CE2488 = 0;
  byte_2CE248C = 0;
  v21 = j__strlen("scalar-evolution-max-constant-evolving-depth");
  sub_2217250(&qword_2CE2400, "scalar-evolution-max-constant-evolving-depth", v21);
  dword_2CE2478 = 32;
  byte_2CE248C = 1;
  dword_2CE2488 = 32;
  qword_2CE2420 = (__int64)"Maximum depth of recursive constant evolving";
  byte_2CE240A = byte_2CE240A & 0x9F | 0x20;
  qword_2CE2428 = v52;
  sub_2218140(&qword_2CE2400);
  __cxa_atexit(sub_1FED260, &qword_2CE2400, &off_2B25620);
  v55 = &v54;
  v54 = 8;
  v22 = j__strlen("Maximum depth of recursive SExt/ZExt/Trunc");
  v56 = "Maximum depth of recursive SExt/ZExt/Trunc";
  v57 = v22;
  v53 = 1;
  sub_2019620(&unk_2CE2340, "scalar-evolution-max-cast-depth", v48, v50);
  __cxa_atexit(sub_1FED260, &unk_2CE2340, &off_2B25620);
  v52 = j__strlen("Max coefficients in AddRec during evolving");
  sub_2019550(&qword_2CE2280);
  v23 = _mm_load_si128((const __m128i *)&v46);
  qword_2CE2300 = (__int64)off_2C712D0;
  qword_2CE2280 = (__int64)off_2C75710;
  xmmword_2CE2328 = (__int128)v23;
  qword_2CE2310 = (__int64)off_2BEAB98;
  dword_2CE22F8 = 0;
  dword_2CE2308 = 0;
  byte_2CE230C = 0;
  v24 = j__strlen("scalar-evolution-max-add-rec-size");
  sub_2217250(&qword_2CE2280, "scalar-evolution-max-add-rec-size", v24);
  dword_2CE22F8 = 8;
  qword_2CE22A8 = v52;
  byte_2CE230C = 1;
  qword_2CE22A0 = (__int64)"Max coefficients in AddRec during evolving";
  byte_2CE228A = byte_2CE228A & 0x9F | 0x20;
  dword_2CE2308 = 8;
  sub_2218140(&qword_2CE2280);
  __cxa_atexit(sub_1FED260, &qword_2CE2280, &off_2B25620);
  v52 = j__strlen("Size of the expression which is considered huge");
  sub_2019550(&qword_2CE21C0);
  v25 = _mm_load_si128((const __m128i *)&v46);
  qword_2CE2240 = (__int64)off_2C712D0;
  qword_2CE21C0 = (__int64)off_2C75710;
  xmmword_2CE2268 = (__int128)v25;
  qword_2CE2250 = (__int64)off_2BEAB98;
  dword_2CE2238 = 0;
  dword_2CE2248 = 0;
  byte_2CE224C = 0;
  v26 = j__strlen("scalar-evolution-huge-expr-threshold");
  sub_2217250(&qword_2CE21C0, "scalar-evolution-huge-expr-threshold", v26);
  dword_2CE2238 = 4096;
  qword_2CE21E8 = v52;
  byte_2CE224C = 1;
  qword_2CE21E0 = (__int64)"Size of the expression which is considered huge";
  byte_2CE21CA = byte_2CE21CA & 0x9F | 0x20;
  dword_2CE2248 = 4096;
  sub_2218140(&qword_2CE21C0);
  __cxa_atexit(sub_1FED260, &qword_2CE21C0, &off_2B25620);
  v52 = j__strlen("Threshold for switching to iteratively computing SCEV ranges");
  sub_2019550(&qword_2CE2100);
  v27 = _mm_load_si128((const __m128i *)&v46);
  qword_2CE2180 = (__int64)off_2C712D0;
  qword_2CE2100 = (__int64)off_2C75710;
  xmmword_2CE21A8 = (__int128)v27;
  qword_2CE2190 = (__int64)off_2BEAB98;
  dword_2CE2178 = 0;
  dword_2CE2188 = 0;
  byte_2CE218C = 0;
  v28 = j__strlen("scev-range-iter-threshold");
  sub_2217250(&qword_2CE2100, "scev-range-iter-threshold", v28);
  dword_2CE2178 = 32;
  qword_2CE2128 = v52;
  byte_2CE218C = 1;
  qword_2CE2120 = (__int64)"Threshold for switching to iteratively computing SCEV ranges";
  byte_2CE210A = byte_2CE210A & 0x9F | 0x20;
  dword_2CE2188 = 32;
  sub_2218140(&qword_2CE2100);
  __cxa_atexit(sub_1FED260, &qword_2CE2100, &off_2B25620);
  v52 = j__strlen("Maximum depth for recursive loop guard collection");
  sub_2019550(&qword_2CE2040);
  v29 = _mm_load_si128((const __m128i *)&v46);
  qword_2CE20C0 = (__int64)off_2C712D0;
  qword_2CE2040 = (__int64)off_2C75710;
  xmmword_2CE20E8 = (__int128)v29;
  qword_2CE20D0 = (__int64)off_2BEAB98;
  dword_2CE20B8 = 0;
  dword_2CE20C8 = 0;
  byte_2CE20CC = 0;
  v30 = j__strlen("scalar-evolution-max-loop-guard-collection-depth");
  sub_2217250(&qword_2CE2040, "scalar-evolution-max-loop-guard-collection-depth", v30);
  dword_2CE20B8 = 1;
  qword_2CE2068 = v52;
  byte_2CE20CC = 1;
  qword_2CE2060 = (__int64)"Maximum depth for recursive loop guard collection";
  byte_2CE204A = byte_2CE204A & 0x9F | 0x20;
  dword_2CE20C8 = 1;
  sub_2218140(&qword_2CE2040);
  __cxa_atexit(sub_1FED260, &qword_2CE2040, &off_2B25620);
  v31 = j__strlen("When printing analysis, include information on every instruction");
  sub_2019550(&qword_2CE1F80);
  v32 = _mm_load_si128(&v47);
  v33 = (__int64)v51;
  word_2CE2008 = 0;
  xmmword_2CE2028 = (__int128)v32;
  qword_2CE2000 = (__int64)off_2C714E8;
  qword_2CE1F80 = (__int64)v51;
  qword_2CE2010 = (__int64)off_2BEAB08;
  byte_2CE1FF8 = 0;
  v34 = j__strlen("scalar-evolution-classify-expressions");
  sub_2217250(&qword_2CE1F80, "scalar-evolution-classify-expressions", v34);
  qword_2CE1FA8 = v31;
  word_2CE2008 = 257;
  byte_2CE1FF8 = 1;
  byte_2CE1F8A = byte_2CE1F8A & 0x9F | 0x20;
  qword_2CE1FA0 = (__int64)"When printing analysis, include information on every instruction";
  sub_2218140(&qword_2CE1F80);
  __cxa_atexit(sub_200E190, &qword_2CE1F80, &off_2B25620);
  v35 = j__strlen("Use more powerful methods of sharpening expression ranges. May be costly in terms of compile time");
  sub_2019550(&qword_2CE1EC0);
  v36 = _mm_load_si128(&v47);
  word_2CE1F48 = 0;
  xmmword_2CE1F68 = (__int128)v36;
  qword_2CE1F40 = (__int64)off_2C714E8;
  qword_2CE1EC0 = v33;
  qword_2CE1F50 = (__int64)off_2BEAB08;
  byte_2CE1F38 = 0;
  v37 = j__strlen("scalar-evolution-use-expensive-range-sharpening");
  sub_2217250(&qword_2CE1EC0, "scalar-evolution-use-expensive-range-sharpening", v37);
  word_2CE1F48 = 256;
  qword_2CE1EE8 = v35;
  byte_2CE1F38 = 0;
  byte_2CE1ECA = byte_2CE1ECA & 0x9F | 0x20;
  qword_2CE1EE0 = (__int64)"Use more powerful methods of sharpening expression ranges. May be costly in terms of compile time";
  sub_2218140(&qword_2CE1EC0);
  __cxa_atexit(sub_200E190, &qword_2CE1EC0, &off_2B25620);
  v55 = &v54;
  v54 = 8;
  v38 = j__strlen("Maximum amount of nodes to process while searching SCEVUnknown Phi strongly connected components");
  v56 = "Maximum amount of nodes to process while searching SCEVUnknown Phi strongly connected components";
  v57 = v38;
  v53 = 1;
  sub_2019980(&unk_2CE1E00, "scalar-evolution-max-scc-analysis-depth", v48, v50, v49);
  __cxa_atexit(sub_1FED260, &unk_2CE1E00, &off_2B25620);
  v39 = j__strlen("Handle <= and >= in finite loops");
  sub_2019550(&qword_2CE1D40);
  v40 = _mm_load_si128(&v47);
  word_2CE1DC8 = 0;
  xmmword_2CE1DE8 = (__int128)v40;
  qword_2CE1DC0 = (__int64)off_2C714E8;
  qword_2CE1D40 = v33;
  qword_2CE1DD0 = (__int64)off_2BEAB08;
  byte_2CE1DB8 = 0;
  v41 = j__strlen("scalar-evolution-finite-loop");
  sub_2217250(&qword_2CE1D40, "scalar-evolution-finite-loop", v41);
  word_2CE1DC8 = 257;
  qword_2CE1D68 = v39;
  byte_2CE1DB8 = 1;
  byte_2CE1D4A = byte_2CE1D4A & 0x9F | 0x20;
  qword_2CE1D60 = (__int64)"Handle <= and >= in finite loops";
  sub_2218140(&qword_2CE1D40);
  __cxa_atexit(sub_200E190, &qword_2CE1D40, &off_2B25620);
  v42 = j__strlen("Infer nuw/nsw flags using context where suitable");
  sub_2019550(&qword_2CE1C80);
  v43 = _mm_load_si128(&v47);
  word_2CE1D08 = 0;
  xmmword_2CE1D28 = (__int128)v43;
  qword_2CE1D00 = (__int64)off_2C714E8;
  qword_2CE1C80 = v33;
  qword_2CE1D10 = (__int64)off_2BEAB08;
  byte_2CE1CF8 = 0;
  v44 = j__strlen("scalar-evolution-use-context-for-no-wrap-flag-strenghening");
  sub_2217250(&qword_2CE1C80, "scalar-evolution-use-context-for-no-wrap-flag-strenghening", v44);
  qword_2CE1CA8 = v42;
  word_2CE1D08 = 257;
  byte_2CE1CF8 = 1;
  byte_2CE1C8A = byte_2CE1C8A & 0x9F | 0x20;
  qword_2CE1CA0 = (__int64)"Infer nuw/nsw flags using context where suitable";
  sub_2218140(&qword_2CE1C80);
  return __cxa_atexit(sub_200E190, &qword_2CE1C80, &off_2B25620);
}
