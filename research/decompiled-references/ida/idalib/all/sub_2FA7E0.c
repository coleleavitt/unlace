int sub_2FA7E0()
{
  size_t v0; // rbp
  size_t v1; // rax
  size_t v2; // rax
  __int64 v3; // r9
  size_t v4; // rax
  __m128i si128; // xmm1
  size_t v6; // rax
  __m128i v7; // xmm2
  size_t v8; // rax
  __m128i v9; // xmm1
  size_t v10; // rax
  __m128i v11; // xmm1
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  __m128i v15; // xmm1
  size_t v16; // rax
  __m128i v17; // xmm1
  size_t v18; // rax
  size_t v19; // r15
  __m128i v20; // xmm0
  size_t v21; // rax
  size_t v22; // r15
  __m128i v23; // xmm0
  size_t v24; // rax
  size_t v25; // r15
  __m128i v26; // xmm2
  size_t v27; // rax
  size_t v28; // r15
  __m128i v29; // xmm2
  size_t v30; // rax
  size_t v31; // rax
  __int64 v32; // r9
  __m128 v34; // [rsp+0h] [rbp-D8h] BYREF
  __int64 (__fastcall **v35)(); // [rsp+18h] [rbp-C0h]
  __m128 v36; // [rsp+20h] [rbp-B8h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+30h] [rbp-A8h]
  __int64 (__fastcall **v38)(); // [rsp+38h] [rbp-A0h]
  __int64 (__fastcall **v39)(); // [rsp+40h] [rbp-98h]
  __int64 (__fastcall **v40)(); // [rsp+48h] [rbp-90h]
  __m128 v41; // [rsp+50h] [rbp-88h] BYREF
  size_t v42; // [rsp+60h] [rbp-78h]
  __int64 (__fastcall **v43)(); // [rsp+68h] [rbp-70h]
  __int64 (__fastcall **v44)(); // [rsp+70h] [rbp-68h]
  __int64 (__fastcall **v45)(); // [rsp+78h] [rbp-60h]
  int v46; // [rsp+80h] [rbp-58h] BYREF
  int v47; // [rsp+84h] [rbp-54h] BYREF
  int *v48; // [rsp+88h] [rbp-50h] BYREF
  const char *v49; // [rsp+90h] [rbp-48h] BYREF
  size_t v50; // [rsp+98h] [rbp-40h]

  v0 = j__strlen("Default amount of inlining to perform");
  sub_2014100(&qword_2CDEC80);
  dword_2CDECF8 = 0;
  dword_2CDED08 = 0;
  v34 = _mm_loadh_ps((const double *)&off_2C77900);
  xmmword_2CDED28 = (__int128)v34;
  v35 = off_2C75778;
  qword_2CDEC80 = (__int64)off_2C75778;
  qword_2CDED00 = (__int64)off_2C71BB0;
  byte_2CDED0C = 0;
  v37 = off_2BEAB68;
  qword_2CDED10 = (__int64)off_2BEAB68;
  v1 = j__strlen("inlinedefault-threshold");
  sub_2217250(&qword_2CDEC80, "inlinedefault-threshold", v1);
  qword_2CDECA0 = (__int64)"Default amount of inlining to perform";
  qword_2CDECA8 = v0;
  dword_2CDECF8 = 225;
  byte_2CDED0C = 1;
  byte_2CDEC8A = byte_2CDEC8A & 0x9F | 0x20;
  dword_2CDED08 = 225;
  sub_2218140(&qword_2CDEC80);
  __cxa_atexit(sub_20141D0, &qword_2CDEC80, &off_2B25620);
  v2 = j__strlen("Ignore TTI attributes compatibility check between callee/caller during inline cost calculation");
  v49 = "Ignore TTI attributes compatibility check between callee/caller during inline cost calculation";
  v50 = v2;
  v48 = &v46;
  LOBYTE(v46) = 0;
  v47 = 1;
  sub_2014250(&unk_2CDEBC0, "ignore-tti-inline-compatible", &v47, &v48, &v49, v3, v34.m128_u64[0], v34.m128_u64[1]);
  __cxa_atexit(sub_200E190, &unk_2CDEBC0, &off_2B25620);
  v42 = j__strlen("Prints comments for instruction based on inline cost analysis");
  sub_2014100(&qword_2CDEB00);
  byte_2CDEB78 = 0;
  word_2CDEB88 = 0;
  v36 = _mm_loadh_ps((const double *)off_2C78368);
  xmmword_2CDEBA8 = (__int128)v36;
  v38 = off_2C714E8;
  v39 = off_2C75848;
  qword_2CDEB80 = (__int64)off_2C714E8;
  v40 = off_2BEAB08;
  qword_2CDEB90 = (__int64)off_2BEAB08;
  qword_2CDEB00 = (__int64)off_2C75848;
  v4 = j__strlen("print-instruction-comments");
  sub_2217250(&qword_2CDEB00, "print-instruction-comments", v4);
  byte_2CDEB78 = 0;
  qword_2CDEB20 = (__int64)"Prints comments for instruction based on inline cost analysis";
  qword_2CDEB28 = v42;
  word_2CDEB88 = 256;
  byte_2CDEB0A = byte_2CDEB0A & 0x9F | 0x20;
  sub_2218140(&qword_2CDEB00);
  __cxa_atexit(sub_200E190, &qword_2CDEB00, &off_2B25620);
  v42 = j__strlen("Control the amount of inlining to perform (default = 225)");
  sub_2014100(&qword_2CDEA40);
  si128 = _mm_load_si128((const __m128i *)&v34);
  qword_2CDEAC0 = (__int64)off_2C71BB0;
  xmmword_2CDEAE8 = (__int128)si128;
  qword_2CDEAD0 = (__int64)off_2BEAB68;
  dword_2CDEAB8 = 0;
  dword_2CDEAC8 = 0;
  byte_2CDEACC = 0;
  qword_2CDEA40 = (__int64)off_2C75778;
  v6 = j__strlen("inline-threshold");
  sub_2217250(&qword_2CDEA40, "inline-threshold", v6);
  dword_2CDEAB8 = 225;
  qword_2CDEA60 = (__int64)"Control the amount of inlining to perform (default = 225)";
  qword_2CDEA68 = v42;
  byte_2CDEACC = 1;
  byte_2CDEA4A = byte_2CDEA4A & 0x9F | 0x20;
  dword_2CDEAC8 = 225;
  sub_2218140(&qword_2CDEA40);
  __cxa_atexit(sub_20141D0, &qword_2CDEA40, &off_2B25620);
  v50 = j__strlen("Threshold for inlining functions with inline hint");
  v49 = "Threshold for inlining functions with inline hint";
  v48 = &v47;
  v47 = 325;
  v46 = 1;
  sub_2014330(&unk_2CDE980, "inlinehint-threshold", &v46, &v48, &v49);
  __cxa_atexit(sub_20141D0, &unk_2CDE980, &off_2B25620);
  v50 = j__strlen("Threshold for inlining cold callsites");
  v49 = "Threshold for inlining cold callsites";
  v48 = &v47;
  v47 = 45;
  v46 = 1;
  sub_2014410(&unk_2CDE8C0, "inline-cold-callsite-threshold", &v46, &v48, &v49);
  __cxa_atexit(sub_20141D0, &unk_2CDE8C0, &off_2B25620);
  v42 = j__strlen("Enable the cost-benefit analysis for the inliner");
  sub_2014100(&qword_2CDE800);
  v7 = _mm_load_si128((const __m128i *)&v36);
  word_2CDE888 = 0;
  qword_2CDE890 = (__int64)v40;
  xmmword_2CDE8A8 = (__int128)v7;
  qword_2CDE880 = (__int64)v38;
  qword_2CDE800 = (__int64)v39;
  byte_2CDE878 = 0;
  v8 = j__strlen("inline-enable-cost-benefit-analysis");
  sub_2217250(&qword_2CDE800, "inline-enable-cost-benefit-analysis", v8);
  byte_2CDE878 = 0;
  qword_2CDE820 = (__int64)"Enable the cost-benefit analysis for the inliner";
  qword_2CDE828 = v42;
  word_2CDE888 = 256;
  byte_2CDE80A = byte_2CDE80A & 0x9F | 0x20;
  sub_2218140(&qword_2CDE800);
  __cxa_atexit(sub_200E190, &qword_2CDE800, &off_2B25620);
  v42 = j__strlen("Multiplier to multiply cycle savings by during inlining");
  sub_2014100(&qword_2CDE740);
  v9 = _mm_load_si128((const __m128i *)&v34);
  qword_2CDE7C0 = (__int64)off_2C71BB0;
  xmmword_2CDE7E8 = (__int128)v9;
  qword_2CDE7D0 = (__int64)v37;
  dword_2CDE7B8 = 0;
  dword_2CDE7C8 = 0;
  byte_2CDE7CC = 0;
  qword_2CDE740 = (__int64)v35;
  v10 = j__strlen("inline-savings-multiplier");
  sub_2217250(&qword_2CDE740, "inline-savings-multiplier", v10);
  dword_2CDE7B8 = 8;
  qword_2CDE760 = (__int64)"Multiplier to multiply cycle savings by during inlining";
  qword_2CDE768 = v42;
  byte_2CDE7CC = 1;
  byte_2CDE74A = byte_2CDE74A & 0x9F | 0x20;
  dword_2CDE7C8 = 8;
  sub_2218140(&qword_2CDE740);
  __cxa_atexit(sub_20141D0, &qword_2CDE740, &off_2B25620);
  v42 = j__strlen("A multiplier on top of cycle savings to decide whether the savings won't justify the cost");
  sub_2014100(&qword_2CDE680);
  v11 = _mm_load_si128((const __m128i *)&v34);
  qword_2CDE700 = (__int64)off_2C71BB0;
  xmmword_2CDE728 = (__int128)v11;
  qword_2CDE710 = (__int64)v37;
  dword_2CDE6F8 = 0;
  dword_2CDE708 = 0;
  byte_2CDE70C = 0;
  qword_2CDE680 = (__int64)v35;
  v12 = j__strlen("inline-savings-profitable-multiplier");
  sub_2217250(&qword_2CDE680, "inline-savings-profitable-multiplier", v12);
  dword_2CDE6F8 = 4;
  qword_2CDE6A0 = (__int64)"A multiplier on top of cycle savings to decide whether the savings won't justify the cost";
  qword_2CDE6A8 = v42;
  byte_2CDE70C = 1;
  byte_2CDE68A = byte_2CDE68A & 0x9F | 0x20;
  dword_2CDE708 = 4;
  sub_2218140(&qword_2CDE680);
  __cxa_atexit(sub_20141D0, &qword_2CDE680, &off_2B25620);
  v50 = j__strlen("The maximum size of a callee that get's inlined without sufficient cycle savings");
  v49 = "The maximum size of a callee that get's inlined without sufficient cycle savings";
  v48 = &v47;
  v47 = 100;
  v46 = 1;
  sub_20144F0(&unk_2CDE5C0, "inline-size-allowance", &v46, &v48, &v49);
  __cxa_atexit(sub_20141D0, &unk_2CDE5C0, &off_2B25620);
  v13 = j__strlen("Threshold for inlining functions with cold attribute");
  v49 = "Threshold for inlining functions with cold attribute";
  v50 = v13;
  v48 = &v47;
  v47 = 45;
  v46 = 1;
  sub_2014330(&unk_2CDE500, "inlinecold-threshold", &v46, &v48, &v49);
  __cxa_atexit(sub_20141D0, &unk_2CDE500, &off_2B25620);
  v50 = j__strlen("Threshold for hot callsites ");
  v49 = "Threshold for hot callsites ";
  v48 = &v47;
  v47 = 3000;
  v46 = 1;
  sub_20145D0(&unk_2CDE440, "hot-callsite-threshold", &v46, &v48, &v49);
  __cxa_atexit(sub_20141D0, &unk_2CDE440, &off_2B25620);
  v50 = j__strlen("Threshold for locally hot callsites ");
  v49 = "Threshold for locally hot callsites ";
  v48 = &v47;
  v47 = 525;
  v46 = 1;
  sub_2014410(&unk_2CDE380, "locally-hot-callsite-threshold", &v46, &v48, &v49);
  __cxa_atexit(sub_20141D0, &unk_2CDE380, &off_2B25620);
  v50 = j__strlen(
          "Maximum block frequency, expressed as a percentage of caller's entry frequency, for a callsite to be cold in t"
          "he absence of profile information.");
  v49 = "Maximum block frequency, expressed as a percentage of caller's entry frequency, for a callsite to be cold in the"
        " absence of profile information.";
  v48 = &v47;
  v47 = 2;
  v46 = 1;
  sub_20145D0(&unk_2CDE2C0, "cold-callsite-rel-freq", &v46, &v48, &v49);
  __cxa_atexit(sub_20141D0, &unk_2CDE2C0, &off_2B25620);
  v42 = j__strlen(
          "Minimum block frequency, expressed as a multiple of caller's entry frequency, for a callsite to be hot in the "
          "absence of profile information.");
  sub_2014100(&qword_2CDE200);
  qword_2CDE278 = 0;
  qword_2CDE288 = 0;
  v41 = _mm_loadh_ps((const double *)off_2C78C90);
  xmmword_2CDE2B0 = (__int128)v41;
  v45 = off_2C71B28;
  qword_2CDE280 = (__int64)off_2C71B28;
  v43 = off_2BEABC8;
  qword_2CDE298 = (__int64)off_2BEABC8;
  v44 = off_2C71B48;
  qword_2CDE200 = (__int64)off_2C71B48;
  byte_2CDE290 = 0;
  v14 = j__strlen("hot-callsite-rel-freq");
  sub_2217250(&qword_2CDE200, "hot-callsite-rel-freq", v14);
  qword_2CDE278 = 60;
  qword_2CDE220 = (__int64)"Minimum block frequency, expressed as a multiple of caller's entry frequency, for a callsite "
                           "to be hot in the absence of profile information.";
  qword_2CDE228 = v42;
  byte_2CDE290 = 1;
  byte_2CDE20A = byte_2CDE20A & 0x9F | 0x20;
  qword_2CDE288 = 60;
  sub_2218140(&qword_2CDE200);
  __cxa_atexit(sub_2014000, &qword_2CDE200, &off_2B25620);
  v42 = j__strlen("Cost of a single instruction when inlining");
  sub_2014100(&qword_2CDE140);
  v15 = _mm_load_si128((const __m128i *)&v34);
  qword_2CDE1C0 = (__int64)off_2C71BB0;
  xmmword_2CDE1E8 = (__int128)v15;
  qword_2CDE1D0 = (__int64)v37;
  dword_2CDE1B8 = 0;
  dword_2CDE1C8 = 0;
  byte_2CDE1CC = 0;
  qword_2CDE140 = (__int64)v35;
  v16 = j__strlen("inline-instr-cost");
  sub_2217250(&qword_2CDE140, "inline-instr-cost", v16);
  dword_2CDE1B8 = 5;
  qword_2CDE160 = (__int64)"Cost of a single instruction when inlining";
  qword_2CDE168 = v42;
  byte_2CDE1CC = 1;
  byte_2CDE14A = byte_2CDE14A & 0x9F | 0x20;
  dword_2CDE1C8 = 5;
  sub_2218140(&qword_2CDE140);
  __cxa_atexit(sub_20141D0, &qword_2CDE140, &off_2B25620);
  v50 = j__strlen("Cost of a single inline asm instruction when inlining");
  v49 = "Cost of a single inline asm instruction when inlining";
  v48 = &v47;
  v47 = 0;
  v46 = 1;
  sub_20144F0(&unk_2CDE080, "inline-asm-instr-cost", &v46, &v48, &v49);
  __cxa_atexit(sub_20141D0, &unk_2CDE080, &off_2B25620);
  v50 = j__strlen("Cost of load/store instruction when inlining");
  v49 = "Cost of load/store instruction when inlining";
  v48 = &v47;
  v47 = 0;
  v46 = 1;
  sub_20144F0(&unk_2CDDFC0, "inline-memaccess-cost", &v46, &v48, &v49);
  __cxa_atexit(sub_20141D0, &unk_2CDDFC0, &off_2B25620);
  v42 = j__strlen("Call penalty that is applied per callsite when inlining");
  sub_2014100(&qword_2CDDF00);
  v17 = _mm_load_si128((const __m128i *)&v34);
  qword_2CDDF80 = (__int64)off_2C71BB0;
  xmmword_2CDDFA8 = (__int128)v17;
  qword_2CDDF90 = (__int64)v37;
  dword_2CDDF78 = 0;
  dword_2CDDF88 = 0;
  byte_2CDDF8C = 0;
  qword_2CDDF00 = (__int64)v35;
  v18 = j__strlen("inline-call-penalty");
  sub_2217250(&qword_2CDDF00, "inline-call-penalty", v18);
  dword_2CDDF78 = 25;
  qword_2CDDF28 = v42;
  byte_2CDDF8C = 1;
  byte_2CDDF0A = byte_2CDDF0A & 0x9F | 0x20;
  qword_2CDDF20 = (__int64)"Call penalty that is applied per callsite when inlining";
  dword_2CDDF88 = 25;
  sub_2218140(&qword_2CDDF00);
  __cxa_atexit(sub_20141D0, &qword_2CDDF00, &off_2B25620);
  v19 = j__strlen("Do not inline functions with a stack size that exceeds the specified limit");
  sub_2014100(&qword_2CDDE40);
  v20 = _mm_load_si128((const __m128i *)&v41);
  qword_2CDDEB8 = 0;
  v42 = (size_t)v45;
  v37 = v44;
  v35 = v43;
  v34 = (__m128)v20;
  qword_2CDDEC0 = (__int64)v45;
  qword_2CDDE40 = (__int64)v44;
  qword_2CDDED8 = (__int64)v43;
  xmmword_2CDDEF0 = (__int128)v20;
  qword_2CDDEC8 = 0;
  byte_2CDDED0 = 0;
  v21 = j__strlen("inline-max-stacksize");
  sub_2217250(&qword_2CDDE40, "inline-max-stacksize", v21);
  qword_2CDDE68 = v19;
  byte_2CDDED0 = 1;
  byte_2CDDE4A = byte_2CDDE4A & 0x9F | 0x20;
  qword_2CDDEB8 = -1;
  qword_2CDDEC8 = -1;
  qword_2CDDE60 = (__int64)"Do not inline functions with a stack size that exceeds the specified limit";
  sub_2218140(&qword_2CDDE40);
  __cxa_atexit(sub_2014000, &qword_2CDDE40, &off_2B25620);
  v22 = j__strlen("Do not inline recursive functions with a stack size that exceeds the specified limit");
  sub_2014100(&qword_2CDDD80);
  v23 = _mm_load_si128((const __m128i *)&v34);
  qword_2CDDDF8 = 0;
  qword_2CDDE00 = v42;
  qword_2CDDD80 = (__int64)v37;
  xmmword_2CDDE30 = (__int128)v23;
  qword_2CDDE18 = (__int64)v35;
  qword_2CDDE08 = 0;
  byte_2CDDE10 = 0;
  v24 = j__strlen("recursive-inline-max-stacksize");
  sub_2217250(&qword_2CDDD80, "recursive-inline-max-stacksize", v24);
  qword_2CDDDA8 = v22;
  qword_2CDDDF8 = 1024;
  byte_2CDDE10 = 1;
  qword_2CDDE08 = 1024;
  byte_2CDDD8A = byte_2CDDD8A & 0x9F | 0x20;
  qword_2CDDDA0 = (__int64)"Do not inline recursive functions with a stack size that exceeds the specified limit";
  sub_2218140(&qword_2CDDD80);
  __cxa_atexit(sub_2014000, &qword_2CDDD80, &off_2B25620);
  v25 = j__strlen("Compute the full inline cost of a call site even when the cost exceeds the threshold.");
  sub_2014100(&qword_2CDDCC0);
  v26 = _mm_load_si128((const __m128i *)&v36);
  word_2CDDD48 = 0;
  xmmword_2CDDD68 = (__int128)v26;
  qword_2CDDD50 = (__int64)v40;
  qword_2CDDD40 = (__int64)v38;
  qword_2CDDCC0 = (__int64)v39;
  byte_2CDDD38 = 0;
  v27 = j__strlen("inline-cost-full");
  sub_2217250(&qword_2CDDCC0, "inline-cost-full", v27);
  qword_2CDDCE8 = v25;
  byte_2CDDCCA = byte_2CDDCCA & 0x9F | 0x20;
  qword_2CDDCE0 = (__int64)"Compute the full inline cost of a call site even when the cost exceeds the threshold.";
  sub_2218140(&qword_2CDDCC0);
  __cxa_atexit(sub_200E190, &qword_2CDDCC0, &off_2B25620);
  v28 = j__strlen("Allow inlining when caller has a superset of callee's nobuiltin attributes.");
  sub_2014100(&qword_2CDDC00);
  v29 = _mm_load_si128((const __m128i *)&v36);
  word_2CDDC88 = 0;
  qword_2CDDC90 = (__int64)v40;
  xmmword_2CDDCA8 = (__int128)v29;
  qword_2CDDC80 = (__int64)v38;
  qword_2CDDC00 = (__int64)v39;
  byte_2CDDC78 = 0;
  v30 = j__strlen("inline-caller-superset-nobuiltin");
  sub_2217250(&qword_2CDDC00, "inline-caller-superset-nobuiltin", v30);
  word_2CDDC88 = 257;
  qword_2CDDC28 = v28;
  byte_2CDDC78 = 1;
  byte_2CDDC0A = byte_2CDDC0A & 0x9F | 0x20;
  qword_2CDDC20 = (__int64)"Allow inlining when caller has a superset of callee's nobuiltin attributes.";
  sub_2218140(&qword_2CDDC00);
  __cxa_atexit(sub_200E190, &qword_2CDDC00, &off_2B25620);
  v31 = j__strlen("Disables evaluation of GetElementPtr with constant operands");
  v49 = "Disables evaluation of GetElementPtr with constant operands";
  v50 = v31;
  v48 = &v46;
  LOBYTE(v46) = 0;
  v47 = 1;
  sub_2014250(&unk_2CDDB40, "disable-gep-const-evaluation", &v47, &v48, &v49, v32, v34.m128_u64[0], v34.m128_u64[1]);
  return __cxa_atexit(sub_200E190, &unk_2CDDB40, &off_2B25620);
}
