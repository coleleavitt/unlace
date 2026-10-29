int sub_3535A0()
{
  size_t v0; // rbp
  size_t v1; // rax
  size_t v2; // rax
  __m128i si128; // xmm1
  size_t v4; // rax
  __m128i v5; // xmm2
  size_t v6; // rax
  size_t v7; // rax
  __int64 v8; // r9
  __m128i v9; // xmm2
  size_t v10; // rax
  __m128i v11; // xmm1
  size_t v12; // rax
  __m128i v13; // xmm1
  size_t v14; // rax
  __m128i v15; // xmm2
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  __m128i v19; // xmm2
  size_t v20; // rax
  __m128i v21; // xmm1
  size_t v22; // rax
  size_t v23; // rax
  __m128i v24; // xmm1
  size_t v25; // rax
  __m128i v26; // xmm1
  size_t v27; // rax
  __m128i v28; // xmm2
  size_t v29; // rax
  size_t v30; // r14
  __m128i v31; // xmm1
  size_t v32; // rax
  __m128 v34; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v35; // [rsp+10h] [rbp-98h] BYREF
  char *v36; // [rsp+28h] [rbp-80h]
  const char **v37; // [rsp+30h] [rbp-78h]
  char **v38; // [rsp+38h] [rbp-70h]
  int *v39; // [rsp+40h] [rbp-68h]
  size_t v40; // [rsp+48h] [rbp-60h]
  char v41; // [rsp+53h] [rbp-55h] BYREF
  int v42; // [rsp+54h] [rbp-54h] BYREF
  char *v43; // [rsp+58h] [rbp-50h] BYREF
  const char *v44; // [rsp+60h] [rbp-48h] BYREF
  size_t v45; // [rsp+68h] [rbp-40h]

  v0 = j__strlen("Temporary development switch used to gradually uplift SimplifyCFG into preserving DomTree,");
  sub_22A4E70(qword_2CE6500);
  LOBYTE(qword_2CE6500[15]) = 0;
  LOWORD(qword_2CE6500[17]) = 0;
  v35 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  qword_2CE6500[16] = off_2C474E8;
  *(__m128i *)&qword_2CE6500[21] = v35;
  qword_2CE6500[0] = off_2C4B848;
  qword_2CE6500[18] = off_2BC0B68;
  v1 = j__strlen("simplifycfg-require-and-preserve-domtree");
  sub_21F3510(qword_2CE6500, "simplifycfg-require-and-preserve-domtree", v1);
  qword_2CE6500[5] = v0;
  BYTE2(qword_2CE6500[1]) = BYTE2(qword_2CE6500[1]) & 0x9F | 0x20;
  qword_2CE6500[4] = "Temporary development switch used to gradually uplift SimplifyCFG into preserving DomTree,";
  sub_21F4400(qword_2CE6500);
  __cxa_atexit(sub_1FEA450, qword_2CE6500, &off_2AFC540);
  v36 = (char *)j__strlen("Control the amount of phi node folding to perform (default = 2)");
  sub_22A4E70(&qword_2CE6440);
  dword_2CE64B8 = 0;
  dword_2CE64C8 = 0;
  v34 = _mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CE64E8 = (__int128)v34;
  qword_2CE64C0 = (__int64)off_2C472D0;
  qword_2CE6440 = (__int64)off_2C4B710;
  qword_2CE64D0 = (__int64)off_2BC0BF8;
  byte_2CE64CC = 0;
  v2 = j__strlen("phi-node-folding-threshold");
  sub_21F3510(&qword_2CE6440, "phi-node-folding-threshold", v2);
  dword_2CE64B8 = 2;
  qword_2CE6468 = (__int64)v36;
  byte_2CE64CC = 1;
  byte_2CE644A = byte_2CE644A & 0x9F | 0x20;
  qword_2CE6460 = (__int64)"Control the amount of phi node folding to perform (default = 2)";
  dword_2CE64C8 = 2;
  sub_21F4400(&qword_2CE6440);
  __cxa_atexit(sub_1FC9520, &qword_2CE6440, &off_2AFC540);
  v36 = (char *)j__strlen(
                  "Control the maximal total instruction cost that we are willing to speculatively execute to fold a 2-en"
                  "try PHI node into a select (default = 4)");
  sub_22A4E70(&qword_2CE6380);
  si128 = _mm_load_si128((const __m128i *)&v34);
  qword_2CE6400 = (__int64)off_2C472D0;
  qword_2CE6380 = (__int64)off_2C4B710;
  xmmword_2CE6428 = (__int128)si128;
  qword_2CE6410 = (__int64)off_2BC0BF8;
  dword_2CE63F8 = 0;
  dword_2CE6408 = 0;
  byte_2CE640C = 0;
  v4 = j__strlen("two-entry-phi-node-folding-threshold");
  sub_21F3510(&qword_2CE6380, "two-entry-phi-node-folding-threshold", v4);
  dword_2CE63F8 = 4;
  qword_2CE63A8 = (__int64)v36;
  byte_2CE640C = 1;
  byte_2CE638A = byte_2CE638A & 0x9F | 0x20;
  qword_2CE63A0 = (__int64)"Control the maximal total instruction cost that we are willing to speculatively execute to fo"
                           "ld a 2-entry PHI node into a select (default = 4)";
  dword_2CE6408 = 4;
  sub_21F4400(&qword_2CE6380);
  __cxa_atexit(sub_1FC9520, &qword_2CE6380, &off_2AFC540);
  v36 = (char *)j__strlen("Hoist common instructions up to the parent block");
  sub_22A4E70(&qword_2CE62C0);
  v5 = _mm_load_si128(&v35);
  word_2CE6348 = 0;
  xmmword_2CE6368 = (__int128)v5;
  qword_2CE6340 = (__int64)off_2C474E8;
  qword_2CE62C0 = (__int64)off_2C4B848;
  qword_2CE6350 = (__int64)off_2BC0B68;
  byte_2CE6338 = 0;
  v6 = j__strlen("simplifycfg-hoist-common");
  sub_21F3510(&qword_2CE62C0, "simplifycfg-hoist-common", v6);
  word_2CE6348 = 257;
  byte_2CE6338 = 1;
  qword_2CE62E8 = (__int64)v36;
  byte_2CE62CA = byte_2CE62CA & 0x9F | 0x20;
  qword_2CE62E0 = (__int64)"Hoist common instructions up to the parent block";
  sub_21F4400(&qword_2CE62C0);
  __cxa_atexit(sub_1FEA450, &qword_2CE62C0, &off_2AFC540);
  v7 = j__strlen("Hoist loads if the target supports conditional faulting");
  v41 = 1;
  v45 = v7;
  v44 = "Hoist loads if the target supports conditional faulting";
  v37 = &v44;
  v38 = &v43;
  v39 = &v42;
  v36 = &v41;
  v43 = &v41;
  v42 = 1;
  sub_22A4F40(
    &unk_2CE6200,
    "simplifycfg-hoist-loads-with-cond-faulting",
    &v42,
    &v43,
    &v44,
    v8,
    v34.m128_u64[0],
    v34.m128_u64[1],
    v35.m128i_i64[0],
    v35.m128i_i64[1]);
  __cxa_atexit(sub_1FEA450, &unk_2CE6200, &off_2AFC540);
  v40 = j__strlen("Hoist stores if the target supports conditional faulting");
  sub_22A4E70(&qword_2CE6140);
  v9 = _mm_load_si128(&v35);
  word_2CE61C8 = 0;
  xmmword_2CE61E8 = (__int128)v9;
  qword_2CE61C0 = (__int64)off_2C474E8;
  qword_2CE6140 = (__int64)off_2C4B848;
  qword_2CE61D0 = (__int64)off_2BC0B68;
  byte_2CE61B8 = 0;
  v10 = j__strlen("simplifycfg-hoist-stores-with-cond-faulting");
  sub_21F3510(&qword_2CE6140, "simplifycfg-hoist-stores-with-cond-faulting", v10);
  byte_2CE61B8 = 1;
  word_2CE61C8 = 257;
  qword_2CE6160 = (__int64)"Hoist stores if the target supports conditional faulting";
  byte_2CE614A = byte_2CE614A & 0x9F | 0x20;
  qword_2CE6168 = v40;
  sub_21F4400(&qword_2CE6140);
  __cxa_atexit(sub_1FEA450, &qword_2CE6140, &off_2AFC540);
  v40 = j__strlen(
          "Control the maximal conditional load/store that we are willing to speculatively execute to eliminate condition"
          "al branch (default = 6)");
  sub_22A4E70(&qword_2CE6080);
  v11 = _mm_load_si128((const __m128i *)&v34);
  qword_2CE6100 = (__int64)off_2C472D0;
  qword_2CE6080 = (__int64)off_2C4B710;
  xmmword_2CE6128 = (__int128)v11;
  qword_2CE6110 = (__int64)off_2BC0BF8;
  dword_2CE60F8 = 0;
  dword_2CE6108 = 0;
  byte_2CE610C = 0;
  v12 = j__strlen("hoist-loads-stores-with-cond-faulting-threshold");
  sub_21F3510(&qword_2CE6080, "hoist-loads-stores-with-cond-faulting-threshold", v12);
  dword_2CE60F8 = 6;
  byte_2CE610C = 1;
  dword_2CE6108 = 6;
  qword_2CE60A0 = (__int64)"Control the maximal conditional load/store that we are willing to speculatively execute to el"
                           "iminate conditional branch (default = 6)";
  byte_2CE608A = byte_2CE608A & 0x9F | 0x20;
  qword_2CE60A8 = v40;
  sub_21F4400(&qword_2CE6080);
  __cxa_atexit(sub_1FC9520, &qword_2CE6080, &off_2AFC540);
  v40 = j__strlen("Allow reordering across at most this many instructions when hoisting");
  sub_22A4E70(&qword_2CE5FC0);
  v13 = _mm_load_si128((const __m128i *)&v34);
  qword_2CE6040 = (__int64)off_2C472D0;
  qword_2CE5FC0 = (__int64)off_2C4B710;
  xmmword_2CE6068 = (__int128)v13;
  qword_2CE6050 = (__int64)off_2BC0BF8;
  dword_2CE6038 = 0;
  dword_2CE6048 = 0;
  byte_2CE604C = 0;
  v14 = j__strlen("simplifycfg-hoist-common-skip-limit");
  sub_21F3510(&qword_2CE5FC0, "simplifycfg-hoist-common-skip-limit", v14);
  dword_2CE6038 = 20;
  byte_2CE604C = 1;
  dword_2CE6048 = 20;
  qword_2CE5FE0 = (__int64)"Allow reordering across at most this many instructions when hoisting";
  byte_2CE5FCA = byte_2CE5FCA & 0x9F | 0x20;
  qword_2CE5FE8 = v40;
  sub_21F4400(&qword_2CE5FC0);
  __cxa_atexit(sub_1FC9520, &qword_2CE5FC0, &off_2AFC540);
  v40 = j__strlen("Sink common instructions down to the end block");
  sub_22A4E70(&qword_2CE5F00);
  v15 = _mm_load_si128(&v35);
  word_2CE5F88 = 0;
  xmmword_2CE5FA8 = (__int128)v15;
  qword_2CE5F80 = (__int64)off_2C474E8;
  qword_2CE5F00 = (__int64)off_2C4B848;
  qword_2CE5F90 = (__int64)off_2BC0B68;
  byte_2CE5F78 = 0;
  v16 = j__strlen("simplifycfg-sink-common");
  sub_21F3510(&qword_2CE5F00, "simplifycfg-sink-common", v16);
  word_2CE5F88 = 257;
  byte_2CE5F78 = 1;
  qword_2CE5F20 = (__int64)"Sink common instructions down to the end block";
  byte_2CE5F0A = byte_2CE5F0A & 0x9F | 0x20;
  qword_2CE5F28 = v40;
  sub_21F4400(&qword_2CE5F00);
  __cxa_atexit(sub_1FEA450, &qword_2CE5F00, &off_2AFC540);
  v17 = j__strlen("Hoist conditional stores if an unconditional store precedes");
  v44 = "Hoist conditional stores if an unconditional store precedes";
  v45 = v17;
  v41 = 1;
  v43 = v36;
  v42 = 1;
  sub_22A50F0(&unk_2CE5E40, "simplifycfg-hoist-cond-stores", v39, v38, v37);
  __cxa_atexit(sub_1FEA450, &unk_2CE5E40, &off_2AFC540);
  v18 = j__strlen(
          "Hoist conditional stores even if an unconditional store does not precede - hoist multiple conditional stores i"
          "nto a single predicated store");
  v44 = "Hoist conditional stores even if an unconditional store does not precede - hoist multiple conditional stores int"
        "o a single predicated store";
  v45 = v18;
  v41 = 1;
  v43 = v36;
  v42 = 1;
  sub_22A50F0(&unk_2CE5D80, "simplifycfg-merge-cond-stores", v39, v38, v37);
  __cxa_atexit(sub_1FEA450, &unk_2CE5D80, &off_2AFC540);
  v45 = j__strlen(
          "When merging conditional stores, do so even if the resultant basic blocks are unlikely to be if-converted as a result");
  v44 = "When merging conditional stores, do so even if the resultant basic blocks are unlikely to be if-converted as a result";
  v41 = 0;
  v43 = v36;
  v42 = 1;
  sub_22A4F40(
    &unk_2CE5CC0,
    "simplifycfg-merge-cond-stores-aggressively",
    v39,
    v38,
    v37,
    "When merging conditional stores, do so even if the resultant basic blocks are unlikely to be if-converted as a result",
    v34.m128_u64[0],
    v34.m128_u64[1],
    v35.m128i_i64[0],
    v35.m128i_i64[1]);
  __cxa_atexit(sub_1FEA450, &unk_2CE5CC0, &off_2AFC540);
  v36 = (char *)j__strlen("Allow exactly one expensive instruction to be speculatively executed");
  sub_22A4E70(&qword_2CE5C00);
  v19 = _mm_load_si128(&v35);
  word_2CE5C88 = 0;
  xmmword_2CE5CA8 = (__int128)v19;
  qword_2CE5C80 = (__int64)off_2C474E8;
  qword_2CE5C00 = (__int64)off_2C4B848;
  qword_2CE5C90 = (__int64)off_2BC0B68;
  byte_2CE5C78 = 0;
  v20 = j__strlen("speculate-one-expensive-inst");
  sub_21F3510(&qword_2CE5C00, "speculate-one-expensive-inst", v20);
  word_2CE5C88 = 257;
  qword_2CE5C28 = (__int64)v36;
  byte_2CE5C78 = 1;
  byte_2CE5C0A = byte_2CE5C0A & 0x9F | 0x20;
  qword_2CE5C20 = (__int64)"Allow exactly one expensive instruction to be speculatively executed";
  sub_21F4400(&qword_2CE5C00);
  __cxa_atexit(sub_1FEA450, &qword_2CE5C00, &off_2AFC540);
  v36 = (char *)j__strlen("Limit maximum recursion depth when calculating costs of speculatively executed instructions");
  sub_22A4E70(&qword_2CE5B40);
  v21 = _mm_load_si128((const __m128i *)&v34);
  qword_2CE5BC0 = (__int64)off_2C472D0;
  qword_2CE5B40 = (__int64)off_2C4B710;
  xmmword_2CE5BE8 = (__int128)v21;
  qword_2CE5BD0 = (__int64)off_2BC0BF8;
  dword_2CE5BB8 = 0;
  dword_2CE5BC8 = 0;
  byte_2CE5BCC = 0;
  v22 = j__strlen("max-speculation-depth");
  sub_21F3510(&qword_2CE5B40, "max-speculation-depth", v22);
  dword_2CE5BB8 = 10;
  qword_2CE5B68 = (__int64)v36;
  byte_2CE5BCC = 1;
  byte_2CE5B4A = byte_2CE5B4A & 0x9F | 0x20;
  qword_2CE5B60 = (__int64)"Limit maximum recursion depth when calculating costs of speculatively executed instructions";
  dword_2CE5BC8 = 10;
  sub_21F4400(&qword_2CE5B40);
  __cxa_atexit(sub_1FC9520, &qword_2CE5B40, &off_2AFC540);
  v36 = (char *)j__strlen("Max size of a block which is still considered small enough to thread through");
  sub_22A4E70(&qword_2CE5A80);
  dword_2CE5AF8 = 0;
  dword_2CE5B08 = 0;
  qword_2CE5B00 = (__int64)off_2C47BB0;
  xmmword_2CE5B28 = (__int128)_mm_loadh_ps((const double *)&off_2C4D900);
  byte_2CE5B0C = 0;
  qword_2CE5A80 = (__int64)off_2C4B778;
  qword_2CE5B10 = (__int64)off_2BC0BC8;
  v23 = j__strlen("simplifycfg-max-small-block-size");
  sub_21F3510(&qword_2CE5A80, "simplifycfg-max-small-block-size", v23);
  dword_2CE5AF8 = 10;
  qword_2CE5AA8 = (__int64)v36;
  byte_2CE5B0C = 1;
  byte_2CE5A8A = byte_2CE5A8A & 0x9F | 0x20;
  qword_2CE5AA0 = (__int64)"Max size of a block which is still considered small enough to thread through";
  dword_2CE5B08 = 10;
  sub_21F4400(&qword_2CE5A80);
  __cxa_atexit(sub_1FF0490, &qword_2CE5A80, &off_2AFC540);
  v36 = (char *)j__strlen("Maximum cost of combining conditions when folding branches");
  sub_22A4E70(&qword_2CE59C0);
  v24 = _mm_load_si128((const __m128i *)&v34);
  qword_2CE5A40 = (__int64)off_2C472D0;
  qword_2CE59C0 = (__int64)off_2C4B710;
  xmmword_2CE5A68 = (__int128)v24;
  qword_2CE5A50 = (__int64)off_2BC0BF8;
  dword_2CE5A38 = 0;
  dword_2CE5A48 = 0;
  byte_2CE5A4C = 0;
  v25 = j__strlen("simplifycfg-branch-fold-threshold");
  sub_21F3510(&qword_2CE59C0, "simplifycfg-branch-fold-threshold", v25);
  dword_2CE5A38 = 2;
  qword_2CE59E8 = (__int64)v36;
  byte_2CE5A4C = 1;
  byte_2CE59CA = byte_2CE59CA & 0x9F | 0x20;
  qword_2CE59E0 = (__int64)"Maximum cost of combining conditions when folding branches";
  dword_2CE5A48 = 2;
  sub_21F4400(&qword_2CE59C0);
  __cxa_atexit(sub_1FC9520, &qword_2CE59C0, &off_2AFC540);
  v36 = (char *)j__strlen(
                  "Multiplier to apply to threshold when determining whether or not to fold branch to common destination "
                  "when vector operations are present");
  sub_22A4E70(&qword_2CE5900);
  v26 = _mm_load_si128((const __m128i *)&v34);
  qword_2CE5980 = (__int64)off_2C472D0;
  qword_2CE5900 = (__int64)off_2C4B710;
  xmmword_2CE59A8 = (__int128)v26;
  qword_2CE5990 = (__int64)off_2BC0BF8;
  dword_2CE5978 = 0;
  dword_2CE5988 = 0;
  byte_2CE598C = 0;
  v27 = j__strlen("simplifycfg-branch-fold-common-dest-vector-multiplier");
  sub_21F3510(&qword_2CE5900, "simplifycfg-branch-fold-common-dest-vector-multiplier", v27);
  dword_2CE5978 = 2;
  qword_2CE5928 = (__int64)v36;
  byte_2CE598C = 1;
  byte_2CE590A = byte_2CE590A & 0x9F | 0x20;
  qword_2CE5920 = (__int64)"Multiplier to apply to threshold when determining whether or not to fold branch to common des"
                           "tination when vector operations are present";
  dword_2CE5988 = 2;
  sub_21F4400(&qword_2CE5900);
  __cxa_atexit(sub_1FC9520, &qword_2CE5900, &off_2AFC540);
  v36 = (char *)j__strlen("Allow SimplifyCFG to merge invokes together when appropriate");
  sub_22A4E70(&qword_2CE5840);
  v28 = _mm_load_si128(&v35);
  qword_2CE58C0 = (__int64)off_2C474E8;
  xmmword_2CE58E8 = (__int128)v28;
  qword_2CE5840 = (__int64)off_2C4B848;
  qword_2CE58D0 = (__int64)off_2BC0B68;
  byte_2CE58B8 = 0;
  word_2CE58C8 = 0;
  v29 = j__strlen("simplifycfg-merge-compatible-invokes");
  sub_21F3510(&qword_2CE5840, "simplifycfg-merge-compatible-invokes", v29);
  byte_2CE58B8 = 1;
  qword_2CE5868 = (__int64)v36;
  byte_2CE584A = byte_2CE584A & 0x9F | 0x20;
  word_2CE58C8 = 257;
  qword_2CE5860 = (__int64)"Allow SimplifyCFG to merge invokes together when appropriate";
  sub_21F4400(&qword_2CE5840);
  __cxa_atexit(sub_1FEA450, &qword_2CE5840, &off_2AFC540);
  v30 = j__strlen("Limit cases to analyze when converting a switch to select");
  sub_22A4E70(&qword_2CE5780);
  v31 = _mm_load_si128((const __m128i *)&v34);
  qword_2CE5800 = (__int64)off_2C472D0;
  qword_2CE5780 = (__int64)off_2C4B710;
  xmmword_2CE5828 = (__int128)v31;
  qword_2CE5810 = (__int64)off_2BC0BF8;
  dword_2CE57F8 = 0;
  dword_2CE5808 = 0;
  byte_2CE580C = 0;
  v32 = j__strlen("max-switch-cases-per-result");
  sub_21F3510(&qword_2CE5780, "max-switch-cases-per-result", v32);
  qword_2CE57A8 = v30;
  dword_2CE57F8 = 16;
  byte_2CE580C = 1;
  dword_2CE5808 = 16;
  byte_2CE578A = byte_2CE578A & 0x9F | 0x20;
  qword_2CE57A0 = (__int64)"Limit cases to analyze when converting a switch to select";
  sub_21F4400(&qword_2CE5780);
  return __cxa_atexit(sub_1FC9520, &qword_2CE5780, &off_2AFC540);
}

