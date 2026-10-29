int sub_2F7420()
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
  sub_1FF03C0(&qword_2CB4D60);
  dword_2CB4DD8 = 0;
  dword_2CB4DE8 = 0;
  v34 = _mm_loadh_ps((const double *)&off_2C4D900);
  xmmword_2CB4E08 = (__int128)v34;
  v35 = off_2C4B778;
  qword_2CB4D60 = (__int64)off_2C4B778;
  qword_2CB4DE0 = (__int64)off_2C47BB0;
  byte_2CB4DEC = 0;
  v37 = off_2BC0BC8;
  qword_2CB4DF0 = (__int64)off_2BC0BC8;
  v1 = j__strlen("inlinedefault-threshold");
  sub_21F3510(&qword_2CB4D60, "inlinedefault-threshold", v1);
  qword_2CB4D80 = (__int64)"Default amount of inlining to perform";
  qword_2CB4D88 = v0;
  dword_2CB4DD8 = 225;
  byte_2CB4DEC = 1;
  byte_2CB4D6A = byte_2CB4D6A & 0x9F | 0x20;
  dword_2CB4DE8 = 225;
  sub_21F4400(&qword_2CB4D60);
  __cxa_atexit(sub_1FF0490, &qword_2CB4D60, &off_2AFC540);
  v2 = j__strlen("Ignore TTI attributes compatibility check between callee/caller during inline cost calculation");
  v49 = "Ignore TTI attributes compatibility check between callee/caller during inline cost calculation";
  v50 = v2;
  v48 = &v46;
  LOBYTE(v46) = 0;
  v47 = 1;
  sub_1FF0510(&unk_2CB4CA0, "ignore-tti-inline-compatible", &v47, &v48, &v49, v3, v34.m128_u64[0], v34.m128_u64[1]);
  __cxa_atexit(sub_1FEA450, &unk_2CB4CA0, &off_2AFC540);
  v42 = j__strlen("Prints comments for instruction based on inline cost analysis");
  sub_1FF03C0(&qword_2CB4BE0);
  byte_2CB4C58 = 0;
  word_2CB4C68 = 0;
  v36 = _mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CB4C88 = (__int128)v36;
  v38 = off_2C474E8;
  v39 = off_2C4B848;
  qword_2CB4C60 = (__int64)off_2C474E8;
  v40 = off_2BC0B68;
  qword_2CB4C70 = (__int64)off_2BC0B68;
  qword_2CB4BE0 = (__int64)off_2C4B848;
  v4 = j__strlen("print-instruction-comments");
  sub_21F3510(&qword_2CB4BE0, "print-instruction-comments", v4);
  byte_2CB4C58 = 0;
  qword_2CB4C00 = (__int64)"Prints comments for instruction based on inline cost analysis";
  qword_2CB4C08 = v42;
  word_2CB4C68 = 256;
  byte_2CB4BEA = byte_2CB4BEA & 0x9F | 0x20;
  sub_21F4400(&qword_2CB4BE0);
  __cxa_atexit(sub_1FEA450, &qword_2CB4BE0, &off_2AFC540);
  v42 = j__strlen("Control the amount of inlining to perform (default = 225)");
  sub_1FF03C0(&qword_2CB4B20);
  si128 = _mm_load_si128((const __m128i *)&v34);
  qword_2CB4BA0 = (__int64)off_2C47BB0;
  xmmword_2CB4BC8 = (__int128)si128;
  qword_2CB4BB0 = (__int64)off_2BC0BC8;
  dword_2CB4B98 = 0;
  dword_2CB4BA8 = 0;
  byte_2CB4BAC = 0;
  qword_2CB4B20 = (__int64)off_2C4B778;
  v6 = j__strlen("inline-threshold");
  sub_21F3510(&qword_2CB4B20, "inline-threshold", v6);
  dword_2CB4B98 = 225;
  qword_2CB4B40 = (__int64)"Control the amount of inlining to perform (default = 225)";
  qword_2CB4B48 = v42;
  byte_2CB4BAC = 1;
  byte_2CB4B2A = byte_2CB4B2A & 0x9F | 0x20;
  dword_2CB4BA8 = 225;
  sub_21F4400(&qword_2CB4B20);
  __cxa_atexit(sub_1FF0490, &qword_2CB4B20, &off_2AFC540);
  v50 = j__strlen("Threshold for inlining functions with inline hint");
  v49 = "Threshold for inlining functions with inline hint";
  v48 = &v47;
  v47 = 325;
  v46 = 1;
  sub_1FF05F0(&unk_2CB4A60, "inlinehint-threshold", &v46, &v48, &v49);
  __cxa_atexit(sub_1FF0490, &unk_2CB4A60, &off_2AFC540);
  v50 = j__strlen("Threshold for inlining cold callsites");
  v49 = "Threshold for inlining cold callsites";
  v48 = &v47;
  v47 = 45;
  v46 = 1;
  sub_1FF06D0(&unk_2CB49A0, "inline-cold-callsite-threshold", &v46, &v48, &v49);
  __cxa_atexit(sub_1FF0490, &unk_2CB49A0, &off_2AFC540);
  v42 = j__strlen("Enable the cost-benefit analysis for the inliner");
  sub_1FF03C0(&qword_2CB48E0);
  v7 = _mm_load_si128((const __m128i *)&v36);
  word_2CB4968 = 0;
  qword_2CB4970 = (__int64)v40;
  xmmword_2CB4988 = (__int128)v7;
  qword_2CB4960 = (__int64)v38;
  qword_2CB48E0 = (__int64)v39;
  byte_2CB4958 = 0;
  v8 = j__strlen("inline-enable-cost-benefit-analysis");
  sub_21F3510(&qword_2CB48E0, "inline-enable-cost-benefit-analysis", v8);
  byte_2CB4958 = 0;
  qword_2CB4900 = (__int64)"Enable the cost-benefit analysis for the inliner";
  qword_2CB4908 = v42;
  word_2CB4968 = 256;
  byte_2CB48EA = byte_2CB48EA & 0x9F | 0x20;
  sub_21F4400(&qword_2CB48E0);
  __cxa_atexit(sub_1FEA450, &qword_2CB48E0, &off_2AFC540);
  v42 = j__strlen("Multiplier to multiply cycle savings by during inlining");
  sub_1FF03C0(&qword_2CB4820);
  v9 = _mm_load_si128((const __m128i *)&v34);
  qword_2CB48A0 = (__int64)off_2C47BB0;
  xmmword_2CB48C8 = (__int128)v9;
  qword_2CB48B0 = (__int64)v37;
  dword_2CB4898 = 0;
  dword_2CB48A8 = 0;
  byte_2CB48AC = 0;
  qword_2CB4820 = (__int64)v35;
  v10 = j__strlen("inline-savings-multiplier");
  sub_21F3510(&qword_2CB4820, "inline-savings-multiplier", v10);
  dword_2CB4898 = 8;
  qword_2CB4840 = (__int64)"Multiplier to multiply cycle savings by during inlining";
  qword_2CB4848 = v42;
  byte_2CB48AC = 1;
  byte_2CB482A = byte_2CB482A & 0x9F | 0x20;
  dword_2CB48A8 = 8;
  sub_21F4400(&qword_2CB4820);
  __cxa_atexit(sub_1FF0490, &qword_2CB4820, &off_2AFC540);
  v42 = j__strlen("A multiplier on top of cycle savings to decide whether the savings won't justify the cost");
  sub_1FF03C0(&qword_2CB4760);
  v11 = _mm_load_si128((const __m128i *)&v34);
  qword_2CB47E0 = (__int64)off_2C47BB0;
  xmmword_2CB4808 = (__int128)v11;
  qword_2CB47F0 = (__int64)v37;
  dword_2CB47D8 = 0;
  dword_2CB47E8 = 0;
  byte_2CB47EC = 0;
  qword_2CB4760 = (__int64)v35;
  v12 = j__strlen("inline-savings-profitable-multiplier");
  sub_21F3510(&qword_2CB4760, "inline-savings-profitable-multiplier", v12);
  dword_2CB47D8 = 4;
  qword_2CB4780 = (__int64)"A multiplier on top of cycle savings to decide whether the savings won't justify the cost";
  qword_2CB4788 = v42;
  byte_2CB47EC = 1;
  byte_2CB476A = byte_2CB476A & 0x9F | 0x20;
  dword_2CB47E8 = 4;
  sub_21F4400(&qword_2CB4760);
  __cxa_atexit(sub_1FF0490, &qword_2CB4760, &off_2AFC540);
  v50 = j__strlen("The maximum size of a callee that get's inlined without sufficient cycle savings");
  v49 = "The maximum size of a callee that get's inlined without sufficient cycle savings";
  v48 = &v47;
  v47 = 100;
  v46 = 1;
  sub_1FF07B0(&unk_2CB46A0, "inline-size-allowance", &v46, &v48, &v49);
  __cxa_atexit(sub_1FF0490, &unk_2CB46A0, &off_2AFC540);
  v13 = j__strlen("Threshold for inlining functions with cold attribute");
  v49 = "Threshold for inlining functions with cold attribute";
  v50 = v13;
  v48 = &v47;
  v47 = 45;
  v46 = 1;
  sub_1FF05F0(&unk_2CB45E0, "inlinecold-threshold", &v46, &v48, &v49);
  __cxa_atexit(sub_1FF0490, &unk_2CB45E0, &off_2AFC540);
  v50 = j__strlen("Threshold for hot callsites ");
  v49 = "Threshold for hot callsites ";
  v48 = &v47;
  v47 = 3000;
  v46 = 1;
  sub_1FF0890(&unk_2CB4520, "hot-callsite-threshold", &v46, &v48, &v49);
  __cxa_atexit(sub_1FF0490, &unk_2CB4520, &off_2AFC540);
  v50 = j__strlen("Threshold for locally hot callsites ");
  v49 = "Threshold for locally hot callsites ";
  v48 = &v47;
  v47 = 525;
  v46 = 1;
  sub_1FF06D0(&unk_2CB4460, "locally-hot-callsite-threshold", &v46, &v48, &v49);
  __cxa_atexit(sub_1FF0490, &unk_2CB4460, &off_2AFC540);
  v50 = j__strlen(
          "Maximum block frequency, expressed as a percentage of caller's entry frequency, for a callsite to be cold in t"
          "he absence of profile information.");
  v49 = "Maximum block frequency, expressed as a percentage of caller's entry frequency, for a callsite to be cold in the"
        " absence of profile information.";
  v48 = &v47;
  v47 = 2;
  v46 = 1;
  sub_1FF0890(&unk_2CB43A0, "cold-callsite-rel-freq", &v46, &v48, &v49);
  __cxa_atexit(sub_1FF0490, &unk_2CB43A0, &off_2AFC540);
  v42 = j__strlen(
          "Minimum block frequency, expressed as a multiple of caller's entry frequency, for a callsite to be hot in the "
          "absence of profile information.");
  sub_1FF03C0(&qword_2CB42E0);
  qword_2CB4358 = 0;
  qword_2CB4368 = 0;
  v41 = _mm_loadh_ps((const double *)off_2C4EC90);
  xmmword_2CB4390 = (__int128)v41;
  v45 = off_2C47B28;
  qword_2CB4360 = (__int64)off_2C47B28;
  v43 = off_2BC0C28;
  qword_2CB4378 = (__int64)off_2BC0C28;
  v44 = off_2C47B48;
  qword_2CB42E0 = (__int64)off_2C47B48;
  byte_2CB4370 = 0;
  v14 = j__strlen("hot-callsite-rel-freq");
  sub_21F3510(&qword_2CB42E0, "hot-callsite-rel-freq", v14);
  qword_2CB4358 = 60;
  qword_2CB4300 = (__int64)"Minimum block frequency, expressed as a multiple of caller's entry frequency, for a callsite "
                           "to be hot in the absence of profile information.";
  qword_2CB4308 = v42;
  byte_2CB4370 = 1;
  byte_2CB42EA = byte_2CB42EA & 0x9F | 0x20;
  qword_2CB4368 = 60;
  sub_21F4400(&qword_2CB42E0);
  __cxa_atexit(sub_1FF02C0, &qword_2CB42E0, &off_2AFC540);
  v42 = j__strlen("Cost of a single instruction when inlining");
  sub_1FF03C0(&qword_2CB4220);
  v15 = _mm_load_si128((const __m128i *)&v34);
  qword_2CB42A0 = (__int64)off_2C47BB0;
  xmmword_2CB42C8 = (__int128)v15;
  qword_2CB42B0 = (__int64)v37;
  dword_2CB4298 = 0;
  dword_2CB42A8 = 0;
  byte_2CB42AC = 0;
  qword_2CB4220 = (__int64)v35;
  v16 = j__strlen("inline-instr-cost");
  sub_21F3510(&qword_2CB4220, "inline-instr-cost", v16);
  dword_2CB4298 = 5;
  qword_2CB4240 = (__int64)"Cost of a single instruction when inlining";
  qword_2CB4248 = v42;
  byte_2CB42AC = 1;
  byte_2CB422A = byte_2CB422A & 0x9F | 0x20;
  dword_2CB42A8 = 5;
  sub_21F4400(&qword_2CB4220);
  __cxa_atexit(sub_1FF0490, &qword_2CB4220, &off_2AFC540);
  v50 = j__strlen("Cost of a single inline asm instruction when inlining");
  v49 = "Cost of a single inline asm instruction when inlining";
  v48 = &v47;
  v47 = 0;
  v46 = 1;
  sub_1FF07B0(&unk_2CB4160, "inline-asm-instr-cost", &v46, &v48, &v49);
  __cxa_atexit(sub_1FF0490, &unk_2CB4160, &off_2AFC540);
  v50 = j__strlen("Cost of load/store instruction when inlining");
  v49 = "Cost of load/store instruction when inlining";
  v48 = &v47;
  v47 = 0;
  v46 = 1;
  sub_1FF07B0(&unk_2CB40A0, "inline-memaccess-cost", &v46, &v48, &v49);
  __cxa_atexit(sub_1FF0490, &unk_2CB40A0, &off_2AFC540);
  v42 = j__strlen("Call penalty that is applied per callsite when inlining");
  sub_1FF03C0(&qword_2CB3FE0);
  v17 = _mm_load_si128((const __m128i *)&v34);
  qword_2CB4060 = (__int64)off_2C47BB0;
  xmmword_2CB4088 = (__int128)v17;
  qword_2CB4070 = (__int64)v37;
  dword_2CB4058 = 0;
  dword_2CB4068 = 0;
  byte_2CB406C = 0;
  qword_2CB3FE0 = (__int64)v35;
  v18 = j__strlen("inline-call-penalty");
  sub_21F3510(&qword_2CB3FE0, "inline-call-penalty", v18);
  dword_2CB4058 = 25;
  qword_2CB4008 = v42;
  byte_2CB406C = 1;
  byte_2CB3FEA = byte_2CB3FEA & 0x9F | 0x20;
  qword_2CB4000 = (__int64)"Call penalty that is applied per callsite when inlining";
  dword_2CB4068 = 25;
  sub_21F4400(&qword_2CB3FE0);
  __cxa_atexit(sub_1FF0490, &qword_2CB3FE0, &off_2AFC540);
  v19 = j__strlen("Do not inline functions with a stack size that exceeds the specified limit");
  sub_1FF03C0(&qword_2CB3F20);
  v20 = _mm_load_si128((const __m128i *)&v41);
  qword_2CB3F98 = 0;
  v42 = (size_t)v45;
  v37 = v44;
  v35 = v43;
  v34 = (__m128)v20;
  qword_2CB3FA0 = (__int64)v45;
  qword_2CB3F20 = (__int64)v44;
  qword_2CB3FB8 = (__int64)v43;
  xmmword_2CB3FD0 = (__int128)v20;
  qword_2CB3FA8 = 0;
  byte_2CB3FB0 = 0;
  v21 = j__strlen("inline-max-stacksize");
  sub_21F3510(&qword_2CB3F20, "inline-max-stacksize", v21);
  qword_2CB3F48 = v19;
  byte_2CB3FB0 = 1;
  byte_2CB3F2A = byte_2CB3F2A & 0x9F | 0x20;
  qword_2CB3F98 = -1;
  qword_2CB3FA8 = -1;
  qword_2CB3F40 = (__int64)"Do not inline functions with a stack size that exceeds the specified limit";
  sub_21F4400(&qword_2CB3F20);
  __cxa_atexit(sub_1FF02C0, &qword_2CB3F20, &off_2AFC540);
  v22 = j__strlen("Do not inline recursive functions with a stack size that exceeds the specified limit");
  sub_1FF03C0(&qword_2CB3E60);
  v23 = _mm_load_si128((const __m128i *)&v34);
  qword_2CB3ED8 = 0;
  qword_2CB3EE0 = v42;
  qword_2CB3E60 = (__int64)v37;
  xmmword_2CB3F10 = (__int128)v23;
  qword_2CB3EF8 = (__int64)v35;
  qword_2CB3EE8 = 0;
  byte_2CB3EF0 = 0;
  v24 = j__strlen("recursive-inline-max-stacksize");
  sub_21F3510(&qword_2CB3E60, "recursive-inline-max-stacksize", v24);
  qword_2CB3E88 = v22;
  qword_2CB3ED8 = 1024;
  byte_2CB3EF0 = 1;
  qword_2CB3EE8 = 1024;
  byte_2CB3E6A = byte_2CB3E6A & 0x9F | 0x20;
  qword_2CB3E80 = (__int64)"Do not inline recursive functions with a stack size that exceeds the specified limit";
  sub_21F4400(&qword_2CB3E60);
  __cxa_atexit(sub_1FF02C0, &qword_2CB3E60, &off_2AFC540);
  v25 = j__strlen("Compute the full inline cost of a call site even when the cost exceeds the threshold.");
  sub_1FF03C0(&qword_2CB3DA0);
  v26 = _mm_load_si128((const __m128i *)&v36);
  word_2CB3E28 = 0;
  xmmword_2CB3E48 = (__int128)v26;
  qword_2CB3E30 = (__int64)v40;
  qword_2CB3E20 = (__int64)v38;
  qword_2CB3DA0 = (__int64)v39;
  byte_2CB3E18 = 0;
  v27 = j__strlen("inline-cost-full");
  sub_21F3510(&qword_2CB3DA0, "inline-cost-full", v27);
  qword_2CB3DC8 = v25;
  byte_2CB3DAA = byte_2CB3DAA & 0x9F | 0x20;
  qword_2CB3DC0 = (__int64)"Compute the full inline cost of a call site even when the cost exceeds the threshold.";
  sub_21F4400(&qword_2CB3DA0);
  __cxa_atexit(sub_1FEA450, &qword_2CB3DA0, &off_2AFC540);
  v28 = j__strlen("Allow inlining when caller has a superset of callee's nobuiltin attributes.");
  sub_1FF03C0(&qword_2CB3CE0);
  v29 = _mm_load_si128((const __m128i *)&v36);
  word_2CB3D68 = 0;
  qword_2CB3D70 = (__int64)v40;
  xmmword_2CB3D88 = (__int128)v29;
  qword_2CB3D60 = (__int64)v38;
  qword_2CB3CE0 = (__int64)v39;
  byte_2CB3D58 = 0;
  v30 = j__strlen("inline-caller-superset-nobuiltin");
  sub_21F3510(&qword_2CB3CE0, "inline-caller-superset-nobuiltin", v30);
  word_2CB3D68 = 257;
  qword_2CB3D08 = v28;
  byte_2CB3D58 = 1;
  byte_2CB3CEA = byte_2CB3CEA & 0x9F | 0x20;
  qword_2CB3D00 = (__int64)"Allow inlining when caller has a superset of callee's nobuiltin attributes.";
  sub_21F4400(&qword_2CB3CE0);
  __cxa_atexit(sub_1FEA450, &qword_2CB3CE0, &off_2AFC540);
  v31 = j__strlen("Disables evaluation of GetElementPtr with constant operands");
  v49 = "Disables evaluation of GetElementPtr with constant operands";
  v50 = v31;
  v48 = &v46;
  LOBYTE(v46) = 0;
  v47 = 1;
  sub_1FF0510(&unk_2CB3C20, "disable-gep-const-evaluation", &v47, &v48, &v49, v32, v34.m128_u64[0], v34.m128_u64[1]);
  return __cxa_atexit(sub_1FEA450, &unk_2CB3C20, &off_2AFC540);
}

