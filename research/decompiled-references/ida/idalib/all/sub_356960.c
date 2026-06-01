int sub_356960()
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
  sub_22C8BB0(qword_2D10420);
  LOBYTE(qword_2D10420[15]) = 0;
  LOWORD(qword_2D10420[17]) = 0;
  v35 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  qword_2D10420[16] = off_2C714E8;
  *(__m128i *)&qword_2D10420[21] = v35;
  qword_2D10420[0] = off_2C75848;
  qword_2D10420[18] = off_2BEAB08;
  v1 = j__strlen("simplifycfg-require-and-preserve-domtree");
  sub_2217250(qword_2D10420, "simplifycfg-require-and-preserve-domtree", v1);
  qword_2D10420[5] = v0;
  BYTE2(qword_2D10420[1]) = BYTE2(qword_2D10420[1]) & 0x9F | 0x20;
  qword_2D10420[4] = "Temporary development switch used to gradually uplift SimplifyCFG into preserving DomTree,";
  sub_2218140(qword_2D10420);
  __cxa_atexit(sub_200E190, qword_2D10420, &off_2B25620);
  v36 = (char *)j__strlen("Control the amount of phi node folding to perform (default = 2)");
  sub_22C8BB0(&qword_2D10360);
  dword_2D103D8 = 0;
  dword_2D103E8 = 0;
  v34 = _mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2D10408 = (__int128)v34;
  qword_2D103E0 = (__int64)off_2C712D0;
  qword_2D10360 = (__int64)off_2C75710;
  qword_2D103F0 = (__int64)off_2BEAB98;
  byte_2D103EC = 0;
  v2 = j__strlen("phi-node-folding-threshold");
  sub_2217250(&qword_2D10360, "phi-node-folding-threshold", v2);
  dword_2D103D8 = 2;
  qword_2D10388 = (__int64)v36;
  byte_2D103EC = 1;
  byte_2D1036A = byte_2D1036A & 0x9F | 0x20;
  qword_2D10380 = (__int64)"Control the amount of phi node folding to perform (default = 2)";
  dword_2D103E8 = 2;
  sub_2218140(&qword_2D10360);
  __cxa_atexit(sub_1FED260, &qword_2D10360, &off_2B25620);
  v36 = (char *)j__strlen(
                  "Control the maximal total instruction cost that we are willing to speculatively execute to fold a 2-en"
                  "try PHI node into a select (default = 4)");
  sub_22C8BB0(&qword_2D102A0);
  si128 = _mm_load_si128((const __m128i *)&v34);
  qword_2D10320 = (__int64)off_2C712D0;
  qword_2D102A0 = (__int64)off_2C75710;
  xmmword_2D10348 = (__int128)si128;
  qword_2D10330 = (__int64)off_2BEAB98;
  dword_2D10318 = 0;
  dword_2D10328 = 0;
  byte_2D1032C = 0;
  v4 = j__strlen("two-entry-phi-node-folding-threshold");
  sub_2217250(&qword_2D102A0, "two-entry-phi-node-folding-threshold", v4);
  dword_2D10318 = 4;
  qword_2D102C8 = (__int64)v36;
  byte_2D1032C = 1;
  byte_2D102AA = byte_2D102AA & 0x9F | 0x20;
  qword_2D102C0 = (__int64)"Control the maximal total instruction cost that we are willing to speculatively execute to fo"
                           "ld a 2-entry PHI node into a select (default = 4)";
  dword_2D10328 = 4;
  sub_2218140(&qword_2D102A0);
  __cxa_atexit(sub_1FED260, &qword_2D102A0, &off_2B25620);
  v36 = (char *)j__strlen("Hoist common instructions up to the parent block");
  sub_22C8BB0(&qword_2D101E0);
  v5 = _mm_load_si128(&v35);
  word_2D10268 = 0;
  xmmword_2D10288 = (__int128)v5;
  qword_2D10260 = (__int64)off_2C714E8;
  qword_2D101E0 = (__int64)off_2C75848;
  qword_2D10270 = (__int64)off_2BEAB08;
  byte_2D10258 = 0;
  v6 = j__strlen("simplifycfg-hoist-common");
  sub_2217250(&qword_2D101E0, "simplifycfg-hoist-common", v6);
  word_2D10268 = 257;
  byte_2D10258 = 1;
  qword_2D10208 = (__int64)v36;
  byte_2D101EA = byte_2D101EA & 0x9F | 0x20;
  qword_2D10200 = (__int64)"Hoist common instructions up to the parent block";
  sub_2218140(&qword_2D101E0);
  __cxa_atexit(sub_200E190, &qword_2D101E0, &off_2B25620);
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
  sub_22C8C80(
    &unk_2D10120,
    "simplifycfg-hoist-loads-with-cond-faulting",
    &v42,
    &v43,
    &v44,
    v8,
    v34.m128_u64[0],
    v34.m128_u64[1],
    v35.m128i_i64[0],
    v35.m128i_i64[1]);
  __cxa_atexit(sub_200E190, &unk_2D10120, &off_2B25620);
  v40 = j__strlen("Hoist stores if the target supports conditional faulting");
  sub_22C8BB0(&qword_2D10060);
  v9 = _mm_load_si128(&v35);
  word_2D100E8 = 0;
  xmmword_2D10108 = (__int128)v9;
  qword_2D100E0 = (__int64)off_2C714E8;
  qword_2D10060 = (__int64)off_2C75848;
  qword_2D100F0 = (__int64)off_2BEAB08;
  byte_2D100D8 = 0;
  v10 = j__strlen("simplifycfg-hoist-stores-with-cond-faulting");
  sub_2217250(&qword_2D10060, "simplifycfg-hoist-stores-with-cond-faulting", v10);
  byte_2D100D8 = 1;
  word_2D100E8 = 257;
  qword_2D10080 = (__int64)"Hoist stores if the target supports conditional faulting";
  byte_2D1006A = byte_2D1006A & 0x9F | 0x20;
  qword_2D10088 = v40;
  sub_2218140(&qword_2D10060);
  __cxa_atexit(sub_200E190, &qword_2D10060, &off_2B25620);
  v40 = j__strlen(
          "Control the maximal conditional load/store that we are willing to speculatively execute to eliminate condition"
          "al branch (default = 6)");
  sub_22C8BB0(&qword_2D0FFA0);
  v11 = _mm_load_si128((const __m128i *)&v34);
  qword_2D10020 = (__int64)off_2C712D0;
  qword_2D0FFA0 = (__int64)off_2C75710;
  xmmword_2D10048 = (__int128)v11;
  qword_2D10030 = (__int64)off_2BEAB98;
  dword_2D10018 = 0;
  dword_2D10028 = 0;
  byte_2D1002C = 0;
  v12 = j__strlen("hoist-loads-stores-with-cond-faulting-threshold");
  sub_2217250(&qword_2D0FFA0, "hoist-loads-stores-with-cond-faulting-threshold", v12);
  dword_2D10018 = 6;
  byte_2D1002C = 1;
  dword_2D10028 = 6;
  qword_2D0FFC0 = (__int64)"Control the maximal conditional load/store that we are willing to speculatively execute to el"
                           "iminate conditional branch (default = 6)";
  byte_2D0FFAA = byte_2D0FFAA & 0x9F | 0x20;
  qword_2D0FFC8 = v40;
  sub_2218140(&qword_2D0FFA0);
  __cxa_atexit(sub_1FED260, &qword_2D0FFA0, &off_2B25620);
  v40 = j__strlen("Allow reordering across at most this many instructions when hoisting");
  sub_22C8BB0(&qword_2D0FEE0);
  v13 = _mm_load_si128((const __m128i *)&v34);
  qword_2D0FF60 = (__int64)off_2C712D0;
  qword_2D0FEE0 = (__int64)off_2C75710;
  xmmword_2D0FF88 = (__int128)v13;
  qword_2D0FF70 = (__int64)off_2BEAB98;
  dword_2D0FF58 = 0;
  dword_2D0FF68 = 0;
  byte_2D0FF6C = 0;
  v14 = j__strlen("simplifycfg-hoist-common-skip-limit");
  sub_2217250(&qword_2D0FEE0, "simplifycfg-hoist-common-skip-limit", v14);
  dword_2D0FF58 = 20;
  byte_2D0FF6C = 1;
  dword_2D0FF68 = 20;
  qword_2D0FF00 = (__int64)"Allow reordering across at most this many instructions when hoisting";
  byte_2D0FEEA = byte_2D0FEEA & 0x9F | 0x20;
  qword_2D0FF08 = v40;
  sub_2218140(&qword_2D0FEE0);
  __cxa_atexit(sub_1FED260, &qword_2D0FEE0, &off_2B25620);
  v40 = j__strlen("Sink common instructions down to the end block");
  sub_22C8BB0(&qword_2D0FE20);
  v15 = _mm_load_si128(&v35);
  word_2D0FEA8 = 0;
  xmmword_2D0FEC8 = (__int128)v15;
  qword_2D0FEA0 = (__int64)off_2C714E8;
  qword_2D0FE20 = (__int64)off_2C75848;
  qword_2D0FEB0 = (__int64)off_2BEAB08;
  byte_2D0FE98 = 0;
  v16 = j__strlen("simplifycfg-sink-common");
  sub_2217250(&qword_2D0FE20, "simplifycfg-sink-common", v16);
  word_2D0FEA8 = 257;
  byte_2D0FE98 = 1;
  qword_2D0FE40 = (__int64)"Sink common instructions down to the end block";
  byte_2D0FE2A = byte_2D0FE2A & 0x9F | 0x20;
  qword_2D0FE48 = v40;
  sub_2218140(&qword_2D0FE20);
  __cxa_atexit(sub_200E190, &qword_2D0FE20, &off_2B25620);
  v17 = j__strlen("Hoist conditional stores if an unconditional store precedes");
  v44 = "Hoist conditional stores if an unconditional store precedes";
  v45 = v17;
  v41 = 1;
  v43 = v36;
  v42 = 1;
  sub_22C8E30(&unk_2D0FD60, "simplifycfg-hoist-cond-stores", v39, v38, v37);
  __cxa_atexit(sub_200E190, &unk_2D0FD60, &off_2B25620);
  v18 = j__strlen(
          "Hoist conditional stores even if an unconditional store does not precede - hoist multiple conditional stores i"
          "nto a single predicated store");
  v44 = "Hoist conditional stores even if an unconditional store does not precede - hoist multiple conditional stores int"
        "o a single predicated store";
  v45 = v18;
  v41 = 1;
  v43 = v36;
  v42 = 1;
  sub_22C8E30(&unk_2D0FCA0, "simplifycfg-merge-cond-stores", v39, v38, v37);
  __cxa_atexit(sub_200E190, &unk_2D0FCA0, &off_2B25620);
  v45 = j__strlen(
          "When merging conditional stores, do so even if the resultant basic blocks are unlikely to be if-converted as a result");
  v44 = "When merging conditional stores, do so even if the resultant basic blocks are unlikely to be if-converted as a result";
  v41 = 0;
  v43 = v36;
  v42 = 1;
  sub_22C8C80(
    &unk_2D0FBE0,
    "simplifycfg-merge-cond-stores-aggressively",
    v39,
    v38,
    v37,
    "When merging conditional stores, do so even if the resultant basic blocks are unlikely to be if-converted as a result",
    v34.m128_u64[0],
    v34.m128_u64[1],
    v35.m128i_i64[0],
    v35.m128i_i64[1]);
  __cxa_atexit(sub_200E190, &unk_2D0FBE0, &off_2B25620);
  v36 = (char *)j__strlen("Allow exactly one expensive instruction to be speculatively executed");
  sub_22C8BB0(&qword_2D0FB20);
  v19 = _mm_load_si128(&v35);
  word_2D0FBA8 = 0;
  xmmword_2D0FBC8 = (__int128)v19;
  qword_2D0FBA0 = (__int64)off_2C714E8;
  qword_2D0FB20 = (__int64)off_2C75848;
  qword_2D0FBB0 = (__int64)off_2BEAB08;
  byte_2D0FB98 = 0;
  v20 = j__strlen("speculate-one-expensive-inst");
  sub_2217250(&qword_2D0FB20, "speculate-one-expensive-inst", v20);
  word_2D0FBA8 = 257;
  qword_2D0FB48 = (__int64)v36;
  byte_2D0FB98 = 1;
  byte_2D0FB2A = byte_2D0FB2A & 0x9F | 0x20;
  qword_2D0FB40 = (__int64)"Allow exactly one expensive instruction to be speculatively executed";
  sub_2218140(&qword_2D0FB20);
  __cxa_atexit(sub_200E190, &qword_2D0FB20, &off_2B25620);
  v36 = (char *)j__strlen("Limit maximum recursion depth when calculating costs of speculatively executed instructions");
  sub_22C8BB0(&qword_2D0FA60);
  v21 = _mm_load_si128((const __m128i *)&v34);
  qword_2D0FAE0 = (__int64)off_2C712D0;
  qword_2D0FA60 = (__int64)off_2C75710;
  xmmword_2D0FB08 = (__int128)v21;
  qword_2D0FAF0 = (__int64)off_2BEAB98;
  dword_2D0FAD8 = 0;
  dword_2D0FAE8 = 0;
  byte_2D0FAEC = 0;
  v22 = j__strlen("max-speculation-depth");
  sub_2217250(&qword_2D0FA60, "max-speculation-depth", v22);
  dword_2D0FAD8 = 10;
  qword_2D0FA88 = (__int64)v36;
  byte_2D0FAEC = 1;
  byte_2D0FA6A = byte_2D0FA6A & 0x9F | 0x20;
  qword_2D0FA80 = (__int64)"Limit maximum recursion depth when calculating costs of speculatively executed instructions";
  dword_2D0FAE8 = 10;
  sub_2218140(&qword_2D0FA60);
  __cxa_atexit(sub_1FED260, &qword_2D0FA60, &off_2B25620);
  v36 = (char *)j__strlen("Max size of a block which is still considered small enough to thread through");
  sub_22C8BB0(&qword_2D0F9A0);
  dword_2D0FA18 = 0;
  dword_2D0FA28 = 0;
  qword_2D0FA20 = (__int64)off_2C71BB0;
  xmmword_2D0FA48 = (__int128)_mm_loadh_ps((const double *)&off_2C77900);
  byte_2D0FA2C = 0;
  qword_2D0F9A0 = (__int64)off_2C75778;
  qword_2D0FA30 = (__int64)off_2BEAB68;
  v23 = j__strlen("simplifycfg-max-small-block-size");
  sub_2217250(&qword_2D0F9A0, "simplifycfg-max-small-block-size", v23);
  dword_2D0FA18 = 10;
  qword_2D0F9C8 = (__int64)v36;
  byte_2D0FA2C = 1;
  byte_2D0F9AA = byte_2D0F9AA & 0x9F | 0x20;
  qword_2D0F9C0 = (__int64)"Max size of a block which is still considered small enough to thread through";
  dword_2D0FA28 = 10;
  sub_2218140(&qword_2D0F9A0);
  __cxa_atexit(sub_20141D0, &qword_2D0F9A0, &off_2B25620);
  v36 = (char *)j__strlen("Maximum cost of combining conditions when folding branches");
  sub_22C8BB0(&qword_2D0F8E0);
  v24 = _mm_load_si128((const __m128i *)&v34);
  qword_2D0F960 = (__int64)off_2C712D0;
  qword_2D0F8E0 = (__int64)off_2C75710;
  xmmword_2D0F988 = (__int128)v24;
  qword_2D0F970 = (__int64)off_2BEAB98;
  dword_2D0F958 = 0;
  dword_2D0F968 = 0;
  byte_2D0F96C = 0;
  v25 = j__strlen("simplifycfg-branch-fold-threshold");
  sub_2217250(&qword_2D0F8E0, "simplifycfg-branch-fold-threshold", v25);
  dword_2D0F958 = 2;
  qword_2D0F908 = (__int64)v36;
  byte_2D0F96C = 1;
  byte_2D0F8EA = byte_2D0F8EA & 0x9F | 0x20;
  qword_2D0F900 = (__int64)"Maximum cost of combining conditions when folding branches";
  dword_2D0F968 = 2;
  sub_2218140(&qword_2D0F8E0);
  __cxa_atexit(sub_1FED260, &qword_2D0F8E0, &off_2B25620);
  v36 = (char *)j__strlen(
                  "Multiplier to apply to threshold when determining whether or not to fold branch to common destination "
                  "when vector operations are present");
  sub_22C8BB0(&qword_2D0F820);
  v26 = _mm_load_si128((const __m128i *)&v34);
  qword_2D0F8A0 = (__int64)off_2C712D0;
  qword_2D0F820 = (__int64)off_2C75710;
  xmmword_2D0F8C8 = (__int128)v26;
  qword_2D0F8B0 = (__int64)off_2BEAB98;
  dword_2D0F898 = 0;
  dword_2D0F8A8 = 0;
  byte_2D0F8AC = 0;
  v27 = j__strlen("simplifycfg-branch-fold-common-dest-vector-multiplier");
  sub_2217250(&qword_2D0F820, "simplifycfg-branch-fold-common-dest-vector-multiplier", v27);
  dword_2D0F898 = 2;
  qword_2D0F848 = (__int64)v36;
  byte_2D0F8AC = 1;
  byte_2D0F82A = byte_2D0F82A & 0x9F | 0x20;
  qword_2D0F840 = (__int64)"Multiplier to apply to threshold when determining whether or not to fold branch to common des"
                           "tination when vector operations are present";
  dword_2D0F8A8 = 2;
  sub_2218140(&qword_2D0F820);
  __cxa_atexit(sub_1FED260, &qword_2D0F820, &off_2B25620);
  v36 = (char *)j__strlen("Allow SimplifyCFG to merge invokes together when appropriate");
  sub_22C8BB0(&qword_2D0F760);
  v28 = _mm_load_si128(&v35);
  qword_2D0F7E0 = (__int64)off_2C714E8;
  xmmword_2D0F808 = (__int128)v28;
  qword_2D0F760 = (__int64)off_2C75848;
  qword_2D0F7F0 = (__int64)off_2BEAB08;
  byte_2D0F7D8 = 0;
  word_2D0F7E8 = 0;
  v29 = j__strlen("simplifycfg-merge-compatible-invokes");
  sub_2217250(&qword_2D0F760, "simplifycfg-merge-compatible-invokes", v29);
  byte_2D0F7D8 = 1;
  qword_2D0F788 = (__int64)v36;
  byte_2D0F76A = byte_2D0F76A & 0x9F | 0x20;
  word_2D0F7E8 = 257;
  qword_2D0F780 = (__int64)"Allow SimplifyCFG to merge invokes together when appropriate";
  sub_2218140(&qword_2D0F760);
  __cxa_atexit(sub_200E190, &qword_2D0F760, &off_2B25620);
  v30 = j__strlen("Limit cases to analyze when converting a switch to select");
  sub_22C8BB0(&qword_2D0F6A0);
  v31 = _mm_load_si128((const __m128i *)&v34);
  qword_2D0F720 = (__int64)off_2C712D0;
  qword_2D0F6A0 = (__int64)off_2C75710;
  xmmword_2D0F748 = (__int128)v31;
  qword_2D0F730 = (__int64)off_2BEAB98;
  dword_2D0F718 = 0;
  dword_2D0F728 = 0;
  byte_2D0F72C = 0;
  v32 = j__strlen("max-switch-cases-per-result");
  sub_2217250(&qword_2D0F6A0, "max-switch-cases-per-result", v32);
  qword_2D0F6C8 = v30;
  dword_2D0F718 = 16;
  byte_2D0F72C = 1;
  dword_2D0F728 = 16;
  byte_2D0F6AA = byte_2D0F6AA & 0x9F | 0x20;
  qword_2D0F6C0 = (__int64)"Limit cases to analyze when converting a switch to select";
  sub_2218140(&qword_2D0F6A0);
  return __cxa_atexit(sub_1FED260, &qword_2D0F6A0, &off_2B25620);
}
