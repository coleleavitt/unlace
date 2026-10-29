int sub_2FF8C0()
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
  sub_1FF58E0(&unk_2CB8C60, "scalar-evolution-max-iterations", &v53, &v56);
  __cxa_atexit(sub_1FC9520, &unk_2CB8C60, &off_2AFC540);
  v1 = j__strlen("Verify ScalarEvolution's backedge taken counts (slow)");
  sub_1FF5810(&qword_2CB8BA0);
  byte_2CB8C29 = 0;
  qword_2CB8C18 = 0;
  qword_2CB8C20 = (__int64)off_2C474E8;
  xmmword_2CB8C48 = (__int128)_mm_loadh_ps((const double *)off_2C4D8E8);
  qword_2CB8BA0 = (__int64)off_2C47D10;
  qword_2CB8C30 = (__int64)off_2BC0B68;
  v2 = j__strlen("verify-scev");
  sub_21F3510(&qword_2CB8BA0, "verify-scev", v2);
  byte_2CB8BAA = byte_2CB8BAA & 0x9F | 0x20;
  if ( qword_2CB8C18 )
  {
    v3 = sub_2259990();
    v58 = 259;
    v56 = "cl::location(x) specified more than once!";
    sub_21ED980(&qword_2CB8BA0, &v56, 0, 0, v3);
  }
  else
  {
    byte_2CB8C29 = 1;
    qword_2CB8C18 = (__int64)byte_2CB8D18;
    byte_2CB8C28 = byte_2CB8D18[0];
  }
  qword_2CB8BC8 = v1;
  qword_2CB8BC0 = (__int64)"Verify ScalarEvolution's backedge taken counts (slow)";
  sub_21F4400(&qword_2CB8BA0);
  __cxa_atexit(sub_1FF1930, &qword_2CB8BA0, &off_2AFC540);
  v4 = j__strlen("Enable stricter verification with -verify-scev is passed");
  sub_1FF5810(&qword_2CB8AE0);
  word_2CB8B68 = 0;
  qword_2CB8B60 = (__int64)off_2C474E8;
  v47 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CB8B88 = (__int128)v47;
  v51 = off_2C4B848;
  qword_2CB8B70 = (__int64)off_2BC0B68;
  byte_2CB8B58 = 0;
  qword_2CB8AE0 = (__int64)off_2C4B848;
  v5 = j__strlen("verify-scev-strict");
  sub_21F3510(&qword_2CB8AE0, "verify-scev-strict", v5);
  qword_2CB8B08 = v4;
  qword_2CB8B00 = (__int64)"Enable stricter verification with -verify-scev is passed";
  byte_2CB8AEA = byte_2CB8AEA & 0x9F | 0x20;
  sub_21F4400(&qword_2CB8AE0);
  __cxa_atexit(sub_1FEA450, &qword_2CB8AE0, &off_2AFC540);
  v6 = j__strlen("Verify IR correctness when making sensitive SCEV queries (slow)");
  sub_1FF5810(&qword_2CB8A20);
  v7 = _mm_load_si128(&v47);
  word_2CB8AA8 = 0;
  xmmword_2CB8AC8 = (__int128)v7;
  qword_2CB8AA0 = (__int64)off_2C474E8;
  qword_2CB8A20 = (__int64)off_2C4B848;
  qword_2CB8AB0 = (__int64)off_2BC0B68;
  byte_2CB8A98 = 0;
  v8 = j__strlen("scev-verify-ir");
  sub_21F3510(&qword_2CB8A20, "scev-verify-ir", v8);
  qword_2CB8A48 = v6;
  byte_2CB8A98 = 0;
  qword_2CB8A40 = (__int64)"Verify IR correctness when making sensitive SCEV queries (slow)";
  word_2CB8AA8 = 256;
  byte_2CB8A2A = byte_2CB8A2A & 0x9F | 0x20;
  sub_21F4400(&qword_2CB8A20);
  __cxa_atexit(sub_1FEA450, &qword_2CB8A20, &off_2AFC540);
  v55 = &v54;
  v54 = 32;
  v9 = j__strlen("Threshold for inlining multiplication operands into a SCEV");
  v10 = v49;
  v11 = v50;
  v56 = "Threshold for inlining multiplication operands into a SCEV";
  v12 = v48;
  v57 = v9;
  v53 = 1;
  sub_1FF5A90(&unk_2CB8960, "scev-mulops-inline-threshold", v48, v50, v49);
  __cxa_atexit(sub_1FC9520, &unk_2CB8960, &off_2AFC540);
  v55 = &v54;
  v54 = 500;
  v13 = j__strlen("Threshold for inlining addition operands into a SCEV");
  v56 = "Threshold for inlining addition operands into a SCEV";
  v57 = v13;
  v53 = 1;
  sub_1FF5A90(&unk_2CB88A0, "scev-addops-inline-threshold", v12, v11, v10);
  __cxa_atexit(sub_1FC9520, &unk_2CB88A0, &off_2AFC540);
  v55 = &v54;
  v54 = 32;
  v14 = j__strlen("Maximum depth of recursive SCEV complexity comparisons");
  v49 = v10;
  v57 = v14;
  v56 = "Maximum depth of recursive SCEV complexity comparisons";
  v50 = v11;
  v48 = v12;
  v53 = 1;
  sub_1FF5C40(&unk_2CB87E0, "scalar-evolution-max-scev-compare-depth", v12, v11, v10);
  __cxa_atexit(sub_1FC9520, &unk_2CB87E0, &off_2AFC540);
  v52 = j__strlen("Maximum depth of recursive SCEV operations implication analysis");
  sub_1FF5810(&qword_2CB8720);
  dword_2CB8798 = 0;
  dword_2CB87A8 = 0;
  v46 = _mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CB87C8 = (__int128)v46;
  qword_2CB87A0 = (__int64)off_2C472D0;
  qword_2CB8720 = (__int64)off_2C4B710;
  qword_2CB87B0 = (__int64)off_2BC0BF8;
  byte_2CB87AC = 0;
  v15 = j__strlen("scalar-evolution-max-scev-operations-implication-depth");
  sub_21F3510(&qword_2CB8720, "scalar-evolution-max-scev-operations-implication-depth", v15);
  qword_2CB8740 = (__int64)"Maximum depth of recursive SCEV operations implication analysis";
  dword_2CB8798 = 2;
  byte_2CB87AC = 1;
  dword_2CB87A8 = 2;
  qword_2CB8748 = v52;
  byte_2CB872A = byte_2CB872A & 0x9F | 0x20;
  sub_21F4400(&qword_2CB8720);
  __cxa_atexit(sub_1FC9520, &qword_2CB8720, &off_2AFC540);
  v52 = j__strlen("Maximum depth of recursive value complexity comparisons");
  sub_1FF5810(&qword_2CB8660);
  si128 = _mm_load_si128((const __m128i *)&v46);
  qword_2CB86E0 = (__int64)off_2C472D0;
  qword_2CB8660 = (__int64)off_2C4B710;
  xmmword_2CB8708 = (__int128)si128;
  qword_2CB86F0 = (__int64)off_2BC0BF8;
  dword_2CB86D8 = 0;
  dword_2CB86E8 = 0;
  byte_2CB86EC = 0;
  v17 = j__strlen("scalar-evolution-max-value-compare-depth");
  sub_21F3510(&qword_2CB8660, "scalar-evolution-max-value-compare-depth", v17);
  qword_2CB8680 = (__int64)"Maximum depth of recursive value complexity comparisons";
  dword_2CB86D8 = 2;
  qword_2CB8688 = v52;
  byte_2CB86EC = 1;
  byte_2CB866A = byte_2CB866A & 0x9F | 0x20;
  dword_2CB86E8 = 2;
  sub_21F4400(&qword_2CB8660);
  __cxa_atexit(sub_1FC9520, &qword_2CB8660, &off_2AFC540);
  v52 = j__strlen("Maximum depth of recursive arithmetics");
  sub_1FF5810(&qword_2CB85A0);
  v18 = _mm_load_si128((const __m128i *)&v46);
  qword_2CB8620 = (__int64)off_2C472D0;
  qword_2CB85A0 = (__int64)off_2C4B710;
  xmmword_2CB8648 = (__int128)v18;
  qword_2CB8630 = (__int64)off_2BC0BF8;
  dword_2CB8618 = 0;
  dword_2CB8628 = 0;
  byte_2CB862C = 0;
  v19 = j__strlen("scalar-evolution-max-arith-depth");
  sub_21F3510(&qword_2CB85A0, "scalar-evolution-max-arith-depth", v19);
  qword_2CB85C0 = (__int64)"Maximum depth of recursive arithmetics";
  qword_2CB85C8 = v52;
  dword_2CB8618 = 32;
  byte_2CB862C = 1;
  byte_2CB85AA = byte_2CB85AA & 0x9F | 0x20;
  dword_2CB8628 = 32;
  sub_21F4400(&qword_2CB85A0);
  __cxa_atexit(sub_1FC9520, &qword_2CB85A0, &off_2AFC540);
  v52 = j__strlen("Maximum depth of recursive constant evolving");
  sub_1FF5810(&qword_2CB84E0);
  v20 = _mm_load_si128((const __m128i *)&v46);
  qword_2CB8560 = (__int64)off_2C472D0;
  qword_2CB84E0 = (__int64)off_2C4B710;
  xmmword_2CB8588 = (__int128)v20;
  qword_2CB8570 = (__int64)off_2BC0BF8;
  dword_2CB8558 = 0;
  dword_2CB8568 = 0;
  byte_2CB856C = 0;
  v21 = j__strlen("scalar-evolution-max-constant-evolving-depth");
  sub_21F3510(&qword_2CB84E0, "scalar-evolution-max-constant-evolving-depth", v21);
  dword_2CB8558 = 32;
  byte_2CB856C = 1;
  dword_2CB8568 = 32;
  qword_2CB8500 = (__int64)"Maximum depth of recursive constant evolving";
  byte_2CB84EA = byte_2CB84EA & 0x9F | 0x20;
  qword_2CB8508 = v52;
  sub_21F4400(&qword_2CB84E0);
  __cxa_atexit(sub_1FC9520, &qword_2CB84E0, &off_2AFC540);
  v55 = &v54;
  v54 = 8;
  v22 = j__strlen("Maximum depth of recursive SExt/ZExt/Trunc");
  v56 = "Maximum depth of recursive SExt/ZExt/Trunc";
  v57 = v22;
  v53 = 1;
  sub_1FF58E0(&unk_2CB8420, "scalar-evolution-max-cast-depth", v48, v50);
  __cxa_atexit(sub_1FC9520, &unk_2CB8420, &off_2AFC540);
  v52 = j__strlen("Max coefficients in AddRec during evolving");
  sub_1FF5810(&qword_2CB8360);
  v23 = _mm_load_si128((const __m128i *)&v46);
  qword_2CB83E0 = (__int64)off_2C472D0;
  qword_2CB8360 = (__int64)off_2C4B710;
  xmmword_2CB8408 = (__int128)v23;
  qword_2CB83F0 = (__int64)off_2BC0BF8;
  dword_2CB83D8 = 0;
  dword_2CB83E8 = 0;
  byte_2CB83EC = 0;
  v24 = j__strlen("scalar-evolution-max-add-rec-size");
  sub_21F3510(&qword_2CB8360, "scalar-evolution-max-add-rec-size", v24);
  dword_2CB83D8 = 8;
  qword_2CB8388 = v52;
  byte_2CB83EC = 1;
  qword_2CB8380 = (__int64)"Max coefficients in AddRec during evolving";
  byte_2CB836A = byte_2CB836A & 0x9F | 0x20;
  dword_2CB83E8 = 8;
  sub_21F4400(&qword_2CB8360);
  __cxa_atexit(sub_1FC9520, &qword_2CB8360, &off_2AFC540);
  v52 = j__strlen("Size of the expression which is considered huge");
  sub_1FF5810(&qword_2CB82A0);
  v25 = _mm_load_si128((const __m128i *)&v46);
  qword_2CB8320 = (__int64)off_2C472D0;
  qword_2CB82A0 = (__int64)off_2C4B710;
  xmmword_2CB8348 = (__int128)v25;
  qword_2CB8330 = (__int64)off_2BC0BF8;
  dword_2CB8318 = 0;
  dword_2CB8328 = 0;
  byte_2CB832C = 0;
  v26 = j__strlen("scalar-evolution-huge-expr-threshold");
  sub_21F3510(&qword_2CB82A0, "scalar-evolution-huge-expr-threshold", v26);
  dword_2CB8318 = 4096;
  qword_2CB82C8 = v52;
  byte_2CB832C = 1;
  qword_2CB82C0 = (__int64)"Size of the expression which is considered huge";
  byte_2CB82AA = byte_2CB82AA & 0x9F | 0x20;
  dword_2CB8328 = 4096;
  sub_21F4400(&qword_2CB82A0);
  __cxa_atexit(sub_1FC9520, &qword_2CB82A0, &off_2AFC540);
  v52 = j__strlen("Threshold for switching to iteratively computing SCEV ranges");
  sub_1FF5810(&qword_2CB81E0);
  v27 = _mm_load_si128((const __m128i *)&v46);
  qword_2CB8260 = (__int64)off_2C472D0;
  qword_2CB81E0 = (__int64)off_2C4B710;
  xmmword_2CB8288 = (__int128)v27;
  qword_2CB8270 = (__int64)off_2BC0BF8;
  dword_2CB8258 = 0;
  dword_2CB8268 = 0;
  byte_2CB826C = 0;
  v28 = j__strlen("scev-range-iter-threshold");
  sub_21F3510(&qword_2CB81E0, "scev-range-iter-threshold", v28);
  dword_2CB8258 = 32;
  qword_2CB8208 = v52;
  byte_2CB826C = 1;
  qword_2CB8200 = (__int64)"Threshold for switching to iteratively computing SCEV ranges";
  byte_2CB81EA = byte_2CB81EA & 0x9F | 0x20;
  dword_2CB8268 = 32;
  sub_21F4400(&qword_2CB81E0);
  __cxa_atexit(sub_1FC9520, &qword_2CB81E0, &off_2AFC540);
  v52 = j__strlen("Maximum depth for recursive loop guard collection");
  sub_1FF5810(&qword_2CB8120);
  v29 = _mm_load_si128((const __m128i *)&v46);
  qword_2CB81A0 = (__int64)off_2C472D0;
  qword_2CB8120 = (__int64)off_2C4B710;
  xmmword_2CB81C8 = (__int128)v29;
  qword_2CB81B0 = (__int64)off_2BC0BF8;
  dword_2CB8198 = 0;
  dword_2CB81A8 = 0;
  byte_2CB81AC = 0;
  v30 = j__strlen("scalar-evolution-max-loop-guard-collection-depth");
  sub_21F3510(&qword_2CB8120, "scalar-evolution-max-loop-guard-collection-depth", v30);
  dword_2CB8198 = 1;
  qword_2CB8148 = v52;
  byte_2CB81AC = 1;
  qword_2CB8140 = (__int64)"Maximum depth for recursive loop guard collection";
  byte_2CB812A = byte_2CB812A & 0x9F | 0x20;
  dword_2CB81A8 = 1;
  sub_21F4400(&qword_2CB8120);
  __cxa_atexit(sub_1FC9520, &qword_2CB8120, &off_2AFC540);
  v31 = j__strlen("When printing analysis, include information on every instruction");
  sub_1FF5810(&qword_2CB8060);
  v32 = _mm_load_si128(&v47);
  v33 = (__int64)v51;
  word_2CB80E8 = 0;
  xmmword_2CB8108 = (__int128)v32;
  qword_2CB80E0 = (__int64)off_2C474E8;
  qword_2CB8060 = (__int64)v51;
  qword_2CB80F0 = (__int64)off_2BC0B68;
  byte_2CB80D8 = 0;
  v34 = j__strlen("scalar-evolution-classify-expressions");
  sub_21F3510(&qword_2CB8060, "scalar-evolution-classify-expressions", v34);
  qword_2CB8088 = v31;
  word_2CB80E8 = 257;
  byte_2CB80D8 = 1;
  byte_2CB806A = byte_2CB806A & 0x9F | 0x20;
  qword_2CB8080 = (__int64)"When printing analysis, include information on every instruction";
  sub_21F4400(&qword_2CB8060);
  __cxa_atexit(sub_1FEA450, &qword_2CB8060, &off_2AFC540);
  v35 = j__strlen("Use more powerful methods of sharpening expression ranges. May be costly in terms of compile time");
  sub_1FF5810(&qword_2CB7FA0);
  v36 = _mm_load_si128(&v47);
  word_2CB8028 = 0;
  xmmword_2CB8048 = (__int128)v36;
  qword_2CB8020 = (__int64)off_2C474E8;
  qword_2CB7FA0 = v33;
  qword_2CB8030 = (__int64)off_2BC0B68;
  byte_2CB8018 = 0;
  v37 = j__strlen("scalar-evolution-use-expensive-range-sharpening");
  sub_21F3510(&qword_2CB7FA0, "scalar-evolution-use-expensive-range-sharpening", v37);
  word_2CB8028 = 256;
  qword_2CB7FC8 = v35;
  byte_2CB8018 = 0;
  byte_2CB7FAA = byte_2CB7FAA & 0x9F | 0x20;
  qword_2CB7FC0 = (__int64)"Use more powerful methods of sharpening expression ranges. May be costly in terms of compile time";
  sub_21F4400(&qword_2CB7FA0);
  __cxa_atexit(sub_1FEA450, &qword_2CB7FA0, &off_2AFC540);
  v55 = &v54;
  v54 = 8;
  v38 = j__strlen("Maximum amount of nodes to process while searching SCEVUnknown Phi strongly connected components");
  v56 = "Maximum amount of nodes to process while searching SCEVUnknown Phi strongly connected components";
  v57 = v38;
  v53 = 1;
  sub_1FF5C40(&unk_2CB7EE0, "scalar-evolution-max-scc-analysis-depth", v48, v50, v49);
  __cxa_atexit(sub_1FC9520, &unk_2CB7EE0, &off_2AFC540);
  v39 = j__strlen("Handle <= and >= in finite loops");
  sub_1FF5810(&qword_2CB7E20);
  v40 = _mm_load_si128(&v47);
  word_2CB7EA8 = 0;
  xmmword_2CB7EC8 = (__int128)v40;
  qword_2CB7EA0 = (__int64)off_2C474E8;
  qword_2CB7E20 = v33;
  qword_2CB7EB0 = (__int64)off_2BC0B68;
  byte_2CB7E98 = 0;
  v41 = j__strlen("scalar-evolution-finite-loop");
  sub_21F3510(&qword_2CB7E20, "scalar-evolution-finite-loop", v41);
  word_2CB7EA8 = 257;
  qword_2CB7E48 = v39;
  byte_2CB7E98 = 1;
  byte_2CB7E2A = byte_2CB7E2A & 0x9F | 0x20;
  qword_2CB7E40 = (__int64)"Handle <= and >= in finite loops";
  sub_21F4400(&qword_2CB7E20);
  __cxa_atexit(sub_1FEA450, &qword_2CB7E20, &off_2AFC540);
  v42 = j__strlen("Infer nuw/nsw flags using context where suitable");
  sub_1FF5810(&qword_2CB7D60);
  v43 = _mm_load_si128(&v47);
  word_2CB7DE8 = 0;
  xmmword_2CB7E08 = (__int128)v43;
  qword_2CB7DE0 = (__int64)off_2C474E8;
  qword_2CB7D60 = v33;
  qword_2CB7DF0 = (__int64)off_2BC0B68;
  byte_2CB7DD8 = 0;
  v44 = j__strlen("scalar-evolution-use-context-for-no-wrap-flag-strenghening");
  sub_21F3510(&qword_2CB7D60, "scalar-evolution-use-context-for-no-wrap-flag-strenghening", v44);
  qword_2CB7D88 = v42;
  word_2CB7DE8 = 257;
  byte_2CB7DD8 = 1;
  byte_2CB7D6A = byte_2CB7D6A & 0x9F | 0x20;
  qword_2CB7D80 = (__int64)"Infer nuw/nsw flags using context where suitable";
  sub_21F4400(&qword_2CB7D60);
  return __cxa_atexit(sub_1FEA450, &qword_2CB7D60, &off_2AFC540);
}

