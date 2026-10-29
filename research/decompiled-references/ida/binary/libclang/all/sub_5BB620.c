int sub_5BB620()
{
  __m128i v0; // xmm1
  __m128i v1; // xmm2
  __m128i v2; // xmm1
  __m128i v3; // xmm2
  __m128i v4; // xmm1
  __m128i v5; // xmm1
  __m128i v6; // xmm3
  __m128i v7; // xmm1
  __m128i v8; // xmm1
  __m128i v9; // xmm3
  __m128i v10; // xmm3
  __m128i v11; // xmm2
  __int64 v12; // r15
  __m128i v13; // xmm2
  __m128i v15; // [rsp+0h] [rbp-D8h] BYREF
  int *v16; // [rsp+10h] [rbp-C8h]
  __int64 (__fastcall **v17)(); // [rsp+18h] [rbp-C0h]
  __int64 (__fastcall **v18)(); // [rsp+20h] [rbp-B8h]
  __int64 (__fastcall **v19)(); // [rsp+28h] [rbp-B0h]
  __m128i v20; // [rsp+30h] [rbp-A8h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+40h] [rbp-98h]
  __int64 (__fastcall **v22)(); // [rsp+48h] [rbp-90h]
  __m128i v23; // [rsp+50h] [rbp-88h] BYREF
  _UNKNOWN **v24; // [rsp+60h] [rbp-78h]
  __int64 (__fastcall **v25)(); // [rsp+68h] [rbp-70h]
  __int64 (__fastcall **v26)(); // [rsp+70h] [rbp-68h]
  __int64 (__fastcall **v27)(); // [rsp+78h] [rbp-60h]
  int v28; // [rsp+80h] [rbp-58h] BYREF
  int v29; // [rsp+84h] [rbp-54h] BYREF
  int *v30; // [rsp+88h] [rbp-50h] BYREF
  const char *v31; // [rsp+90h] [rbp-48h] BYREF
  __int64 v32; // [rsp+98h] [rbp-40h]

  v23 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EC150), (__m128i)(unsigned __int64)nullsub_374);
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EC140), (__m128i)(unsigned __int64)nullsub_266);
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EC148), (__m128i)(unsigned __int64)nullsub_291);
  sub_3764CD0(&qword_4B0C7E0);
  v0 = _mm_load_si128(&v15);
  xmmword_4B0C878 = 0;
  xmmword_4B0C888 = (__int128)v0;
  v17 = (__int64 (__fastcall **)())&off_4A692B8;
  qword_4B0C860 = (__int64)&off_4A692B8;
  dword_4B0C858 = 0;
  dword_4B0C868 = 0;
  v18 = off_4A6DF20;
  qword_4B0C7E0 = (__int64)off_4A6DF20;
  v19 = off_49D91C8;
  qword_4B0C870 = (__int64)off_49D91C8;
  byte_4B0C86C = 0;
  sub_259F400(&qword_4B0C7E0, "inlinedefault-threshold", 23);
  dword_4B0C858 = 225;
  byte_4B0C86C = 1;
  dword_4B0C868 = 225;
  qword_4B0C808 = 37;
  qword_4B0C800 = (__int64)"Default amount of inlining to perform";
  byte_4B0C7EA = byte_4B0C7EA & 0x9F | 0x20;
  sub_259EC40(&qword_4B0C7E0);
  __cxa_atexit(sub_20B86E0, &qword_4B0C7E0, &off_47CFE00);
  v30 = &v28;
  v31 = "Ignore TTI attributes compatibility check between callee/caller during inline cost calculation";
  v16 = &v29;
  v32 = 94;
  LOBYTE(v28) = 0;
  v29 = 1;
  sub_2FF9DC0(qword_4B0C720, "ignore-tti-inline-compatible", &v29, &v30, &v31);
  __cxa_atexit(sub_1F6C9D0, qword_4B0C720, &off_47CFE00);
  sub_3764CD0(&qword_4B0C660);
  v1 = _mm_load_si128(&v20);
  word_4B0C6E8 = 0;
  xmmword_4B0C708 = (__int128)v1;
  xmmword_4B0C6F8 = 0;
  v24 = &off_4A64730;
  qword_4B0C6E0 = (__int64)&off_4A64730;
  v21 = off_4A6DFF0;
  qword_4B0C660 = (__int64)off_4A6DFF0;
  v22 = off_49D9168;
  qword_4B0C6F0 = (__int64)off_49D9168;
  byte_4B0C6D8 = 0;
  sub_259F400(&qword_4B0C660, "print-instruction-comments", 26);
  byte_4B0C6D8 = 0;
  qword_4B0C688 = 61;
  word_4B0C6E8 = 256;
  qword_4B0C680 = (__int64)"Prints comments for instruction based on inline cost analysis";
  byte_4B0C66A = byte_4B0C66A & 0x9F | 0x20;
  sub_259EC40(&qword_4B0C660);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0C660, &off_47CFE00);
  sub_3764CD0(&qword_4B0C5A0);
  v2 = _mm_load_si128(&v15);
  xmmword_4B0C638 = 0;
  qword_4B0C5A0 = (__int64)v18;
  qword_4B0C630 = (__int64)v19;
  xmmword_4B0C648 = (__int128)v2;
  qword_4B0C620 = (__int64)v17;
  dword_4B0C618 = 0;
  dword_4B0C628 = 0;
  byte_4B0C62C = 0;
  sub_259F400(&qword_4B0C5A0, "inline-threshold", 16);
  dword_4B0C618 = 225;
  byte_4B0C62C = 1;
  dword_4B0C628 = 225;
  qword_4B0C5C8 = 57;
  qword_4B0C5C0 = (__int64)"Control the amount of inlining to perform (default = 225)";
  byte_4B0C5AA = byte_4B0C5AA & 0x9F | 0x20;
  sub_259EC40(&qword_4B0C5A0);
  __cxa_atexit(sub_20B86E0, &qword_4B0C5A0, &off_47CFE00);
  v30 = &v28;
  v31 = "Threshold for inlining functions with inline hint";
  v32 = 49;
  v28 = 325;
  v29 = 1;
  sub_3765400(qword_4B0C4E0, "inlinehint-threshold", v16, &v30, &v31);
  __cxa_atexit(sub_20B86E0, qword_4B0C4E0, &off_47CFE00);
  v30 = &v28;
  v31 = "Threshold for inlining cold callsites";
  v32 = 37;
  v28 = 45;
  v29 = 1;
  sub_37655C0(qword_4B0C420, "inline-cold-callsite-threshold", v16, &v30, &v31);
  __cxa_atexit(sub_20B86E0, qword_4B0C420, &off_47CFE00);
  sub_3764CD0(&qword_4B0C360);
  v3 = _mm_load_si128(&v20);
  word_4B0C3E8 = 0;
  xmmword_4B0C408 = (__int128)v3;
  qword_4B0C3E0 = (__int64)v24;
  qword_4B0C360 = (__int64)v21;
  qword_4B0C3F0 = (__int64)v22;
  xmmword_4B0C3F8 = 0;
  byte_4B0C3D8 = 0;
  sub_259F400(&qword_4B0C360, "inline-enable-cost-benefit-analysis", 35);
  byte_4B0C3D8 = 0;
  qword_4B0C388 = 48;
  word_4B0C3E8 = 256;
  qword_4B0C380 = (__int64)"Enable the cost-benefit analysis for the inliner";
  byte_4B0C36A = byte_4B0C36A & 0x9F | 0x20;
  sub_259EC40(&qword_4B0C360);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0C360, &off_47CFE00);
  sub_3764CD0(&qword_4B0C2A0);
  v4 = _mm_load_si128(&v15);
  xmmword_4B0C338 = 0;
  qword_4B0C2A0 = (__int64)v18;
  qword_4B0C330 = (__int64)v19;
  qword_4B0C320 = (__int64)v17;
  xmmword_4B0C348 = (__int128)v4;
  dword_4B0C318 = 0;
  dword_4B0C328 = 0;
  byte_4B0C32C = 0;
  sub_259F400(&qword_4B0C2A0, "inline-savings-multiplier", 25);
  qword_4B0C2C0 = (__int64)"Multiplier to multiply cycle savings by during inlining";
  dword_4B0C318 = 8;
  byte_4B0C32C = 1;
  byte_4B0C2AA = byte_4B0C2AA & 0x9F | 0x20;
  dword_4B0C328 = 8;
  qword_4B0C2C8 = 55;
  sub_259EC40(&qword_4B0C2A0);
  __cxa_atexit(sub_20B86E0, &qword_4B0C2A0, &off_47CFE00);
  sub_3764CD0(&qword_4B0C1E0);
  v5 = _mm_load_si128(&v15);
  xmmword_4B0C278 = 0;
  qword_4B0C1E0 = (__int64)v18;
  qword_4B0C270 = (__int64)v19;
  xmmword_4B0C288 = (__int128)v5;
  qword_4B0C260 = (__int64)v17;
  dword_4B0C258 = 0;
  dword_4B0C268 = 0;
  byte_4B0C26C = 0;
  sub_259F400(&qword_4B0C1E0, "inline-savings-profitable-multiplier", 36);
  qword_4B0C200 = (__int64)"A multiplier on top of cycle savings to decide whether the savings won't justify the cost";
  dword_4B0C258 = 4;
  byte_4B0C26C = 1;
  byte_4B0C1EA = byte_4B0C1EA & 0x9F | 0x20;
  dword_4B0C268 = 4;
  qword_4B0C208 = 89;
  sub_259EC40(&qword_4B0C1E0);
  __cxa_atexit(sub_20B86E0, &qword_4B0C1E0, &off_47CFE00);
  v30 = &v28;
  v31 = "The maximum size of a callee that get's inlined without sufficient cycle savings";
  v32 = 80;
  v28 = 100;
  v29 = 1;
  sub_3765780(qword_4B0C120, "inline-size-allowance", v16, &v30, &v31);
  __cxa_atexit(sub_20B86E0, qword_4B0C120, &off_47CFE00);
  v30 = &v28;
  v31 = "Threshold for inlining functions with cold attribute";
  v32 = 52;
  v28 = 45;
  v29 = 1;
  sub_3765400(qword_4B0C060, "inlinecold-threshold", v16, &v30, &v31);
  __cxa_atexit(sub_20B86E0, qword_4B0C060, &off_47CFE00);
  v30 = &v28;
  v31 = "Threshold for hot callsites ";
  v32 = 28;
  v28 = 3000;
  v29 = 1;
  sub_3765940(qword_4B0BFA0, "hot-callsite-threshold", v16, &v30, &v31);
  __cxa_atexit(sub_20B86E0, qword_4B0BFA0, &off_47CFE00);
  v30 = &v28;
  v31 = "Threshold for locally hot callsites ";
  v32 = 36;
  v28 = 525;
  v29 = 1;
  sub_37655C0(qword_4B0BEE0, "locally-hot-callsite-threshold", v16, &v30, &v31);
  __cxa_atexit(sub_20B86E0, qword_4B0BEE0, &off_47CFE00);
  v30 = &v28;
  v31 = "Maximum block frequency, expressed as a percentage of caller's entry frequency, for a callsite to be cold in the"
        " absence of profile information.";
  v32 = 144;
  v28 = 2;
  v29 = 1;
  sub_3765940(qword_4B0BE20, "cold-callsite-rel-freq", v16, &v30, &v31);
  __cxa_atexit(sub_20B86E0, qword_4B0BE20, &off_47CFE00);
  sub_3764CD0(&qword_4B0BD60);
  v6 = _mm_load_si128(&v23);
  xmmword_4B0BE00 = 0;
  xmmword_4B0BE10 = (__int128)v6;
  v27 = off_4A6E4B8;
  qword_4B0BDE0 = (__int64)off_4A6E4B8;
  v26 = off_4A6E4D8;
  qword_4B0BD60 = (__int64)off_4A6E4D8;
  v25 = off_49D9258;
  qword_4B0BDF8 = (__int64)off_49D9258;
  qword_4B0BDD8 = 0;
  qword_4B0BDE8 = 0;
  byte_4B0BDF0 = 0;
  sub_259F400(&qword_4B0BD60, "hot-callsite-rel-freq", 21);
  qword_4B0BD80 = (__int64)"Minimum block frequency, expressed as a multiple of caller's entry frequency, for a callsite "
                           "to be hot in the absence of profile information.";
  qword_4B0BDD8 = 60;
  byte_4B0BDF0 = 1;
  byte_4B0BD6A = byte_4B0BD6A & 0x9F | 0x20;
  qword_4B0BDE8 = 60;
  qword_4B0BD88 = 141;
  sub_259EC40(&qword_4B0BD60);
  __cxa_atexit(sub_25D0820, &qword_4B0BD60, &off_47CFE00);
  sub_3764CD0(&qword_4B0BCA0);
  v7 = _mm_load_si128(&v15);
  xmmword_4B0BD38 = 0;
  qword_4B0BCA0 = (__int64)v18;
  qword_4B0BD30 = (__int64)v19;
  xmmword_4B0BD48 = (__int128)v7;
  qword_4B0BD20 = (__int64)v17;
  dword_4B0BD18 = 0;
  dword_4B0BD28 = 0;
  byte_4B0BD2C = 0;
  sub_259F400(&qword_4B0BCA0, "inline-instr-cost", 17);
  qword_4B0BCC0 = (__int64)"Cost of a single instruction when inlining";
  dword_4B0BD18 = 5;
  byte_4B0BD2C = 1;
  byte_4B0BCAA = byte_4B0BCAA & 0x9F | 0x20;
  dword_4B0BD28 = 5;
  qword_4B0BCC8 = 42;
  sub_259EC40(&qword_4B0BCA0);
  __cxa_atexit(sub_20B86E0, &qword_4B0BCA0, &off_47CFE00);
  v30 = &v28;
  v31 = "Cost of load/store instruction when inlining";
  v32 = 44;
  v28 = 0;
  v29 = 1;
  sub_3765780(qword_4B0BBE0, "inline-memaccess-cost", v16, &v30, &v31);
  __cxa_atexit(sub_20B86E0, qword_4B0BBE0, &off_47CFE00);
  sub_3764CD0(&qword_4B0BB20);
  v8 = _mm_load_si128(&v15);
  xmmword_4B0BBB8 = 0;
  qword_4B0BB20 = (__int64)v18;
  qword_4B0BBB0 = (__int64)v19;
  xmmword_4B0BBC8 = (__int128)v8;
  qword_4B0BBA0 = (__int64)v17;
  dword_4B0BB98 = 0;
  dword_4B0BBA8 = 0;
  byte_4B0BBAC = 0;
  sub_259F400(&qword_4B0BB20, "inline-call-penalty", 19);
  dword_4B0BB98 = 25;
  byte_4B0BBAC = 1;
  dword_4B0BBA8 = 25;
  qword_4B0BB48 = 55;
  byte_4B0BB2A = byte_4B0BB2A & 0x9F | 0x20;
  qword_4B0BB40 = (__int64)"Call penalty that is applied per callsite when inlining";
  sub_259EC40(&qword_4B0BB20);
  __cxa_atexit(sub_20B86E0, &qword_4B0BB20, &off_47CFE00);
  sub_3764CD0(&qword_4B0BA60);
  v9 = _mm_load_si128(&v23);
  v18 = v27;
  v17 = v26;
  v15.m128i_i64[0] = (__int64)v25;
  qword_4B0BAE0 = (__int64)v27;
  qword_4B0BA60 = (__int64)v26;
  qword_4B0BAF8 = (__int64)v25;
  xmmword_4B0BB00 = 0;
  xmmword_4B0BB10 = (__int128)v9;
  qword_4B0BAD8 = 0;
  qword_4B0BAE8 = 0;
  byte_4B0BAF0 = 0;
  sub_259F400(&qword_4B0BA60, "inline-max-stacksize", 20);
  qword_4B0BAD8 = -1;
  byte_4B0BAF0 = 1;
  qword_4B0BAE8 = -1;
  qword_4B0BA88 = 74;
  byte_4B0BA6A = byte_4B0BA6A & 0x9F | 0x20;
  qword_4B0BA80 = (__int64)"Do not inline functions with a stack size that exceeds the specified limit";
  sub_259EC40(&qword_4B0BA60);
  __cxa_atexit(sub_25D0820, &qword_4B0BA60, &off_47CFE00);
  sub_3764CD0(&qword_4B0B9A0);
  v10 = _mm_load_si128(&v23);
  qword_4B0BA38 = v15.m128i_i64[0];
  qword_4B0B9A0 = (__int64)v17;
  xmmword_4B0BA50 = (__int128)v10;
  qword_4B0BA20 = (__int64)v18;
  xmmword_4B0BA40 = 0;
  qword_4B0BA18 = 0;
  qword_4B0BA28 = 0;
  byte_4B0BA30 = 0;
  sub_259F400(&qword_4B0B9A0, "recursive-inline-max-stacksize", 30);
  qword_4B0BA18 = 1024;
  byte_4B0BA30 = 1;
  qword_4B0BA28 = 1024;
  qword_4B0B9C8 = 84;
  byte_4B0B9AA = byte_4B0B9AA & 0x9F | 0x20;
  qword_4B0B9C0 = (__int64)"Do not inline recursive functions with a stack size that exceeds the specified limit";
  sub_259EC40(&qword_4B0B9A0);
  __cxa_atexit(sub_25D0820, &qword_4B0B9A0, &off_47CFE00);
  sub_3764CD0(&qword_4B0B8E0);
  v11 = _mm_load_si128(&v20);
  v12 = (__int64)v24;
  word_4B0B968 = 0;
  qword_4B0B8E0 = (__int64)v21;
  qword_4B0B970 = (__int64)v22;
  xmmword_4B0B978 = 0;
  xmmword_4B0B988 = (__int128)v11;
  qword_4B0B960 = (__int64)v24;
  byte_4B0B958 = 0;
  sub_259F400(&qword_4B0B8E0, "inline-cost-full", 16);
  qword_4B0B908 = 85;
  byte_4B0B8EA = byte_4B0B8EA & 0x9F | 0x20;
  qword_4B0B900 = (__int64)"Compute the full inline cost of a call site even when the cost exceeds the threshold.";
  sub_259EC40(&qword_4B0B8E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0B8E0, &off_47CFE00);
  sub_3764CD0(&qword_4B0B820);
  v13 = _mm_load_si128(&v20);
  word_4B0B8A8 = 0;
  qword_4B0B820 = (__int64)v21;
  qword_4B0B8B0 = (__int64)v22;
  xmmword_4B0B8B8 = 0;
  xmmword_4B0B8C8 = (__int128)v13;
  qword_4B0B8A0 = v12;
  byte_4B0B898 = 0;
  sub_259F400(&qword_4B0B820, "inline-caller-superset-nobuiltin", 32);
  byte_4B0B898 = 1;
  word_4B0B8A8 = 257;
  qword_4B0B848 = 75;
  byte_4B0B82A = byte_4B0B82A & 0x9F | 0x20;
  qword_4B0B840 = (__int64)"Allow inlining when caller has a superset of callee's nobuiltin attributes.";
  sub_259EC40(&qword_4B0B820);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0B820, &off_47CFE00);
  v30 = &v28;
  v31 = "Disables evaluation of GetElementPtr with constant operands";
  v32 = 59;
  LOBYTE(v28) = 0;
  v29 = 1;
  sub_2FF9DC0(qword_4B0B760, "disable-gep-const-evaluation", v16, &v30, &v31);
  return __cxa_atexit(sub_1F6C9D0, qword_4B0B760, &off_47CFE00);
}

