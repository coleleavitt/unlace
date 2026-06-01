int __fastcall sub_57B720(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm4
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm5
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm6
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm7
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm2
  __int64 v20; // rax
  __int64 v21; // rdx
  __m128i v22; // xmm3
  __int64 v23; // rax
  __int64 v24; // rdx
  __m128i v25; // xmm4
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128i v35; // xmm5
  __int64 v36; // rax
  __int64 v37; // rdx
  __m128i v38; // xmm6
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i v41; // xmm7
  __int64 v42; // rax
  __int64 v43; // rdx
  __m128i v44; // xmm1
  __m128i v45; // xmm2
  __int64 v46; // r15
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __m128i v49; // xmm3
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // rdx
  __m128i v56; // xmm4
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __m128i v61; // xmm6
  __int64 v62; // rax
  __int64 v63; // rdx
  __m128i v64; // xmm7
  __int64 v65; // rax
  __int64 v66; // rdx
  __m128i v67; // xmm1
  __int64 v68; // rax
  __int64 v69; // rdx
  __m128i v70; // xmm2
  int v71; // edx
  int v72; // ecx
  int v73; // r8d
  int v74; // r9d
  __int64 v75; // r15
  __int64 v76; // rax
  unsigned __int64 v77; // rdx
  __m128i v78; // xmm3
  __int64 v79; // r15
  __int64 v80; // rax
  unsigned __int64 v81; // rdx
  __m128i v82; // xmm4
  __int64 v83; // r13
  __int64 v84; // rax
  unsigned __int64 v85; // rdx
  __m128i v86; // xmm5
  __m128i v87; // xmm6
  __int64 v88; // r13
  __m128i v90; // [rsp+60h] [rbp-288h] BYREF
  __m128i v91; // [rsp+70h] [rbp-278h] BYREF
  __m128i v92; // [rsp+80h] [rbp-268h] BYREF
  __m128i v93; // [rsp+90h] [rbp-258h] BYREF
  __m128i v94; // [rsp+A0h] [rbp-248h] BYREF
  __m128i v95; // [rsp+B0h] [rbp-238h] BYREF
  _OWORD *v96; // [rsp+C0h] [rbp-228h]
  __int64 v97; // [rsp+C8h] [rbp-220h]
  int v98; // [rsp+D0h] [rbp-218h] BYREF
  int v99; // [rsp+D4h] [rbp-214h] BYREF
  int *v100; // [rsp+D8h] [rbp-210h] BYREF
  _QWORD v101[2]; // [rsp+E0h] [rbp-208h] BYREF
  __m128i v102; // [rsp+F0h] [rbp-1F8h] BYREF
  __m128i v103; // [rsp+100h] [rbp-1E8h] BYREF
  __int64 v104; // [rsp+110h] [rbp-1D8h]
  __m128i v105; // [rsp+120h] [rbp-1C8h] BYREF
  __m128i v106; // [rsp+130h] [rbp-1B8h] BYREF
  __int64 v107; // [rsp+140h] [rbp-1A8h]
  __m128i v108; // [rsp+150h] [rbp-198h] BYREF
  __m128i v109; // [rsp+160h] [rbp-188h] BYREF
  __int64 v110; // [rsp+170h] [rbp-178h]
  __m128i v111; // [rsp+180h] [rbp-168h] BYREF
  __m128i v112; // [rsp+190h] [rbp-158h] BYREF
  __m128i v113; // [rsp+1A0h] [rbp-148h] BYREF
  __m128i v114; // [rsp+1B0h] [rbp-138h] BYREF
  __m128i v115; // [rsp+1C0h] [rbp-128h] BYREF
  __m128i v116; // [rsp+1D0h] [rbp-118h] BYREF
  __m128i v117; // [rsp+1E0h] [rbp-108h] BYREF
  __int64 v118; // [rsp+1F0h] [rbp-F8h]
  void *ptr; // [rsp+200h] [rbp-E8h] BYREF
  __int64 v120; // [rsp+208h] [rbp-E0h]
  _OWORD v121[7]; // [rsp+210h] [rbp-D8h] BYREF
  __int64 v122; // [rsp+280h] [rbp-68h]

  qword_4AEE030 = 0;
  qword_4AEE038 = 0;
  qword_4AEE040 = 0;
  v93 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E8CF0), (__m128i)(unsigned __int64)nullsub_294);
  v95 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&byte_4AEB8F0);
  v91 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E8CE8), (__m128i)(unsigned __int64)nullsub_291);
  v92 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E8CF8), (__m128i)(unsigned __int64)nullsub_267);
  v90 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E8CC8), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AEE020 = (__int64)&off_4A6E058;
  qword_4AEE028 = (unsigned int)qword_4AEE028 & 0x80000000;
  v94 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&byte_4AECC30);
  qword_4AEE048 = 0;
  qword_4AEE078 = (__int64)&qword_4AEE090;
  qword_4AEE050 = 0;
  qword_4AEE058 = 0;
  qword_4AEE060 = (__int64)&qword_4AEE070;
  qword_4AEE068 = 0x100000000LL;
  qword_4AEE080 = 1;
  dword_4AEE088 = 0;
  byte_4AEE08C = 1;
  v1 = sub_259AC30(a1, &qword_4AEE070);
  v2 = (unsigned int)qword_4AEE068;
  v3 = (unsigned int)qword_4AEE068 + 1LL;
  if ( HIDWORD(qword_4AEE068) < v3 )
  {
    sub_25D6060(&qword_4AEE070 - 2, &qword_4AEE070, v3, 8);
    v2 = (unsigned int)qword_4AEE068;
  }
  v4 = _mm_load_si128(&v90);
  *(_QWORD *)(qword_4AEE060 + 8 * v2) = v1;
  word_4AEE0A8 = 0;
  xmmword_4AEE0B8 = 0;
  xmmword_4AEE0C8 = (__int128)v4;
  qword_4AEE0A0 = (__int64)&off_4A64730;
  LODWORD(qword_4AEE068) = qword_4AEE068 + 1;
  byte_4AEE098 = 0;
  qword_4AEE020 = (__int64)off_4A6DFF0;
  qword_4AEE0B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEE020, "asan-kernel", 11);
  qword_4AEE048 = 45;
  qword_4AEE040 = (__int64)"Enable KernelAddressSanitizer instrumentation";
  byte_4AEE098 = 0;
  BYTE2(qword_4AEE028) = BYTE2(qword_4AEE028) & 0x9F | 0x20;
  word_4AEE0A8 = 256;
  sub_259EC40(&qword_4AEE020);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEE020, &off_47CFE00);
  ptr = "Enable recovery mode (continue-after-error).";
  v105.m128i_i8[0] = 0;
  v111.m128i_i64[0] = (__int64)&v105;
  v108.m128i_i32[0] = 1;
  v120 = 44;
  sub_2C07390(qword_4AEDF60, "asan-recover", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AEDF60, &off_47CFE00);
  qword_4AEDEB0 = 0;
  qword_4AEDEE0 = (__int64)&qword_4AEDEF0;
  qword_4AEDEB8 = 0;
  qword_4AEDEA0 = (__int64)&off_4A6E058;
  qword_4AEDEA8 = (unsigned int)qword_4AEDEA8 & 0x80000000;
  qword_4AEDEF8 = (__int64)&qword_4AEDF10;
  qword_4AEDEC0 = 0;
  qword_4AEDEC8 = 0;
  qword_4AEDED0 = 0;
  qword_4AEDED8 = 0;
  qword_4AEDEE8 = 0x100000000LL;
  qword_4AEDF00 = 1;
  dword_4AEDF08 = 0;
  byte_4AEDF0C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AEDEF0);
  v6 = (unsigned int)qword_4AEDEE8;
  if ( HIDWORD(qword_4AEDEE8) < (unsigned __int64)(unsigned int)qword_4AEDEE8 + 1 )
  {
    v96 = (_OWORD *)v5;
    sub_25D6060(&qword_4AEDEF0 - 2, &qword_4AEDEF0, (unsigned int)qword_4AEDEE8 + 1LL, 8);
    v6 = (unsigned int)qword_4AEDEE8;
    v5 = (__int64)v96;
  }
  v7 = _mm_load_si128(&v90);
  *(_QWORD *)(qword_4AEDEE0 + 8 * v6) = v5;
  word_4AEDF28 = 0;
  xmmword_4AEDF38 = 0;
  xmmword_4AEDF48 = (__int128)v7;
  qword_4AEDF20 = (__int64)&off_4A64730;
  LODWORD(qword_4AEDEE8) = qword_4AEDEE8 + 1;
  byte_4AEDF18 = 0;
  qword_4AEDEA0 = (__int64)off_4A6DFF0;
  qword_4AEDF30 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEDEA0, "asan-guard-against-version-mismatch", 35);
  qword_4AEDEC8 = 48;
  qword_4AEDEC0 = (__int64)"Guard against compiler/runtime version mismatch.";
  byte_4AEDF18 = 1;
  BYTE2(qword_4AEDEA8) = BYTE2(qword_4AEDEA8) & 0x9F | 0x20;
  word_4AEDF28 = 257;
  sub_259EC40(&qword_4AEDEA0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEDEA0, &off_47CFE00);
  v105.m128i_i8[0] = 1;
  ptr = "instrument read instructions";
  v111.m128i_i64[0] = (__int64)&v105;
  v108.m128i_i32[0] = 1;
  v120 = 28;
  sub_2C07550(qword_4AEDDE0, "asan-instrument-reads", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AEDDE0, &off_47CFE00);
  ptr = "instrument write instructions";
  v105.m128i_i8[0] = 1;
  v111.m128i_i64[0] = (__int64)&v105;
  v108.m128i_i32[0] = 1;
  v120 = 29;
  sub_2C07710(qword_4AEDD20, "asan-instrument-writes", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AEDD20, &off_47CFE00);
  qword_4AEDC70 = 0;
  qword_4AEDCA0 = (__int64)&qword_4AEDCB0;
  qword_4AEDC78 = 0;
  qword_4AEDC60 = (__int64)&off_4A6E058;
  qword_4AEDC68 = (unsigned int)qword_4AEDC68 & 0x80000000;
  qword_4AEDCB8 = (__int64)&qword_4AEDCD0;
  qword_4AEDC80 = 0;
  qword_4AEDC88 = 0;
  qword_4AEDC90 = 0;
  qword_4AEDC98 = 0;
  qword_4AEDCA8 = 0x100000000LL;
  qword_4AEDCC0 = 1;
  dword_4AEDCC8 = 0;
  byte_4AEDCCC = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AEDCB0);
  v9 = (unsigned int)qword_4AEDCA8;
  if ( HIDWORD(qword_4AEDCA8) < (unsigned __int64)(unsigned int)qword_4AEDCA8 + 1 )
  {
    v96 = (_OWORD *)v8;
    sub_25D6060(&qword_4AEDCB0 - 2, &qword_4AEDCB0, (unsigned int)qword_4AEDCA8 + 1LL, 8);
    v9 = (unsigned int)qword_4AEDCA8;
    v8 = (__int64)v96;
  }
  v10 = _mm_load_si128(&v90);
  *(_QWORD *)(qword_4AEDCA0 + 8 * v9) = v8;
  word_4AEDCE8 = 0;
  xmmword_4AEDCF8 = 0;
  qword_4AEDCE0 = (__int64)&off_4A64730;
  xmmword_4AEDD08 = (__int128)v10;
  LODWORD(qword_4AEDCA8) = qword_4AEDCA8 + 1;
  qword_4AEDC60 = (__int64)off_4A6DFF0;
  byte_4AEDCD8 = 0;
  qword_4AEDCF0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEDC60, "asan-use-stack-safety", 21);
  byte_4AEDCD8 = 1;
  qword_4AEDC88 = 33;
  word_4AEDCE8 = 257;
  qword_4AEDC80 = (__int64)"Use Stack Safety analysis results";
  BYTE2(qword_4AEDC68) = BYTE2(qword_4AEDC68) & 0x98 | 0x20;
  sub_259EC40(&qword_4AEDC60);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEDC60, &off_47CFE00);
  v105.m128i_i8[0] = 1;
  ptr = "instrument atomic instructions (rmw, cmpxchg)";
  v111.m128i_i64[0] = (__int64)&v105;
  v108.m128i_i32[0] = 1;
  v120 = 45;
  sub_2C078D0(qword_4AEDBA0, "asan-instrument-atomics", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AEDBA0, &off_47CFE00);
  v105.m128i_i8[0] = 1;
  ptr = "instrument byval call arguments";
  v111.m128i_i64[0] = (__int64)&v105;
  v108.m128i_i32[0] = 1;
  v120 = 31;
  sub_2C07550(qword_4AEDAE0, "asan-instrument-byval", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AEDAE0, &off_47CFE00);
  v105.m128i_i8[0] = 0;
  ptr = "use instrumentation with slow path for all accesses";
  v111.m128i_i64[0] = (__int64)&v105;
  v108.m128i_i32[0] = 1;
  v120 = 51;
  sub_2C07550(qword_4AEDA20, "asan-always-slow-path", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AEDA20, &off_47CFE00);
  ptr = "Load shadow address into a local variable for each function";
  v105.m128i_i8[0] = 0;
  v111.m128i_i64[0] = (__int64)&v105;
  v108.m128i_i32[0] = 1;
  v120 = 59;
  sub_2C07A90(qword_4AED960, "asan-force-dynamic-shadow", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AED960, &off_47CFE00);
  qword_4AED8B0 = 0;
  qword_4AED8E0 = (__int64)&qword_4AED8F0;
  qword_4AED8B8 = 0;
  qword_4AED8A0 = (__int64)&off_4A6E058;
  qword_4AED8A8 = (unsigned int)qword_4AED8A8 & 0x80000000;
  qword_4AED8F8 = (__int64)&qword_4AED910;
  qword_4AED8C0 = 0;
  qword_4AED8C8 = 0;
  qword_4AED8D0 = 0;
  qword_4AED8D8 = 0;
  qword_4AED8E8 = 0x100000000LL;
  qword_4AED900 = 1;
  dword_4AED908 = 0;
  byte_4AED90C = 1;
  v11 = sub_259AC30(sub_1F6C9D0, &qword_4AED8F0);
  v12 = (unsigned int)qword_4AED8E8;
  if ( HIDWORD(qword_4AED8E8) < (unsigned __int64)(unsigned int)qword_4AED8E8 + 1 )
  {
    v96 = (_OWORD *)v11;
    sub_25D6060(&qword_4AED8F0 - 2, &qword_4AED8F0, (unsigned int)qword_4AED8E8 + 1LL, 8);
    v12 = (unsigned int)qword_4AED8E8;
    v11 = (__int64)v96;
  }
  v13 = _mm_load_si128(&v90);
  *(_QWORD *)(qword_4AED8E0 + 8 * v12) = v11;
  word_4AED928 = 0;
  xmmword_4AED938 = 0;
  qword_4AED920 = (__int64)&off_4A64730;
  xmmword_4AED948 = (__int128)v13;
  LODWORD(qword_4AED8E8) = qword_4AED8E8 + 1;
  qword_4AED8A0 = (__int64)off_4A6DFF0;
  byte_4AED918 = 0;
  qword_4AED930 = (__int64)off_49D9168;
  sub_259F400(&qword_4AED8A0, "asan-with-ifunc", 15);
  qword_4AED8C8 = 76;
  qword_4AED8C0 = (__int64)"Access dynamic shadow through an ifunc global on platforms that support this";
  byte_4AED918 = 1;
  BYTE2(qword_4AED8A8) = BYTE2(qword_4AED8A8) & 0x9F | 0x20;
  word_4AED928 = 257;
  sub_259EC40(&qword_4AED8A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AED8A0, &off_47CFE00);
  qword_4AED7F0 = 0;
  qword_4AED820 = (__int64)&qword_4AED830;
  qword_4AED7F8 = 0;
  qword_4AED7E0 = (__int64)&off_4A6E058;
  qword_4AED7E8 = (unsigned int)qword_4AED7E8 & 0x80000000;
  qword_4AED838 = (__int64)&qword_4AED850;
  qword_4AED800 = 0;
  qword_4AED808 = 0;
  qword_4AED810 = 0;
  qword_4AED818 = 0;
  qword_4AED828 = 0x100000000LL;
  qword_4AED840 = 1;
  dword_4AED848 = 0;
  byte_4AED84C = 1;
  v14 = sub_259AC30(sub_1F6C9D0, &qword_4AED830);
  v15 = (unsigned int)qword_4AED828;
  if ( HIDWORD(qword_4AED828) < (unsigned __int64)(unsigned int)qword_4AED828 + 1 )
  {
    v96 = (_OWORD *)v14;
    sub_25D6060(&qword_4AED830 - 2, &qword_4AED830, (unsigned int)qword_4AED828 + 1LL, 8);
    v15 = (unsigned int)qword_4AED828;
    v14 = (__int64)v96;
  }
  v16 = _mm_load_si128(&v90);
  *(_QWORD *)(qword_4AED820 + 8 * v15) = v14;
  word_4AED868 = 0;
  xmmword_4AED878 = 0;
  qword_4AED860 = (__int64)&off_4A64730;
  xmmword_4AED888 = (__int128)v16;
  LODWORD(qword_4AED828) = qword_4AED828 + 1;
  qword_4AED7E0 = (__int64)off_4A6DFF0;
  byte_4AED858 = 0;
  qword_4AED870 = (__int64)off_49D9168;
  sub_259F400(&qword_4AED7E0, "asan-with-ifunc-suppress-remat", 30);
  qword_4AED808 = 98;
  qword_4AED800 = (__int64)"Suppress rematerialization of dynamic shadow address by passing it through inline asm in prologue.";
  byte_4AED858 = 1;
  BYTE2(qword_4AED7E8) = BYTE2(qword_4AED7E8) & 0x9F | 0x20;
  word_4AED868 = 257;
  sub_259EC40(&qword_4AED7E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AED7E0, &off_47CFE00);
  qword_4AED730 = 0;
  qword_4AED760 = (__int64)&qword_4AED770;
  qword_4AED738 = 0;
  qword_4AED720 = (__int64)&off_4A6E058;
  qword_4AED728 = (unsigned int)qword_4AED728 & 0x80000000;
  qword_4AED778 = (__int64)&qword_4AED790;
  qword_4AED740 = 0;
  qword_4AED748 = 0;
  qword_4AED750 = 0;
  qword_4AED758 = 0;
  qword_4AED768 = 0x100000000LL;
  qword_4AED780 = 1;
  dword_4AED788 = 0;
  byte_4AED78C = 1;
  v17 = sub_259AC30(sub_1F6C9D0, &qword_4AED770);
  v18 = (unsigned int)qword_4AED768;
  if ( HIDWORD(qword_4AED768) < (unsigned __int64)(unsigned int)qword_4AED768 + 1 )
  {
    v96 = (_OWORD *)v17;
    sub_25D6060(&qword_4AED770 - 2, &qword_4AED770, (unsigned int)qword_4AED768 + 1LL, 8);
    v18 = (unsigned int)qword_4AED768;
    v17 = (__int64)v96;
  }
  v19 = _mm_load_si128(&v91);
  *(_QWORD *)(qword_4AED760 + 8 * v18) = v17;
  xmmword_4AED7B8 = 0;
  xmmword_4AED7C8 = (__int128)v19;
  qword_4AED7A0 = (__int64)&off_4A692B8;
  LODWORD(qword_4AED768) = qword_4AED768 + 1;
  byte_4AED7AC = 0;
  qword_4AED720 = (__int64)off_4A6DF20;
  dword_4AED798 = 0;
  dword_4AED7A8 = 0;
  qword_4AED7B0 = (__int64)off_49D91C8;
  sub_259F400(&qword_4AED720, "asan-max-ins-per-bb", 19);
  dword_4AED798 = 10000;
  qword_4AED740 = (__int64)"maximal number of instructions to instrument in any given BB";
  byte_4AED7AC = 1;
  dword_4AED7A8 = 10000;
  qword_4AED748 = 60;
  BYTE2(qword_4AED728) = BYTE2(qword_4AED728) & 0x9F | 0x20;
  sub_259EC40(&qword_4AED720);
  __cxa_atexit(sub_20B86E0, &qword_4AED720, &off_47CFE00);
  qword_4AED670 = 0;
  qword_4AED6A0 = (__int64)&qword_4AED6B0;
  qword_4AED678 = 0;
  qword_4AED660 = (__int64)&off_4A6E058;
  qword_4AED668 = (unsigned int)qword_4AED668 & 0x80000000;
  qword_4AED6B8 = (__int64)&qword_4AED6D0;
  qword_4AED680 = 0;
  qword_4AED688 = 0;
  qword_4AED690 = 0;
  qword_4AED698 = 0;
  qword_4AED6A8 = 0x100000000LL;
  qword_4AED6C0 = 1;
  dword_4AED6C8 = 0;
  byte_4AED6CC = 1;
  v20 = sub_259AC30(sub_20B86E0, &qword_4AED6B0);
  v21 = (unsigned int)qword_4AED6A8;
  if ( HIDWORD(qword_4AED6A8) < (unsigned __int64)(unsigned int)qword_4AED6A8 + 1 )
  {
    v96 = (_OWORD *)v20;
    sub_25D6060(&qword_4AED6B0 - 2, &qword_4AED6B0, (unsigned int)qword_4AED6A8 + 1LL, 8);
    v21 = (unsigned int)qword_4AED6A8;
    v20 = (__int64)v96;
  }
  v22 = _mm_load_si128(&v90);
  *(_QWORD *)(qword_4AED6A0 + 8 * v21) = v20;
  word_4AED6E8 = 0;
  xmmword_4AED6F8 = 0;
  qword_4AED6E0 = (__int64)&off_4A64730;
  xmmword_4AED708 = (__int128)v22;
  LODWORD(qword_4AED6A8) = qword_4AED6A8 + 1;
  qword_4AED660 = (__int64)off_4A6DFF0;
  byte_4AED6D8 = 0;
  qword_4AED6F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AED660, "asan-stack", 10);
  qword_4AED688 = 19;
  qword_4AED680 = (__int64)"Handle stack memory";
  byte_4AED6D8 = 1;
  BYTE2(qword_4AED668) = BYTE2(qword_4AED668) & 0x9F | 0x20;
  word_4AED6E8 = 257;
  sub_259EC40(&qword_4AED660);
  __cxa_atexit(sub_1F6C9D0, &qword_4AED660, &off_47CFE00);
  qword_4AED5B0 = 0;
  qword_4AED5E0 = (__int64)&qword_4AED5F0;
  qword_4AED5B8 = 0;
  qword_4AED5A0 = (__int64)&off_4A6E058;
  qword_4AED5A8 = (unsigned int)qword_4AED5A8 & 0x80000000;
  qword_4AED5F8 = (__int64)&qword_4AED610;
  qword_4AED5C0 = 0;
  qword_4AED5C8 = 0;
  qword_4AED5D0 = 0;
  qword_4AED5D8 = 0;
  qword_4AED5E8 = 0x100000000LL;
  qword_4AED600 = 1;
  dword_4AED608 = 0;
  byte_4AED60C = 1;
  v23 = sub_259AC30(sub_1F6C9D0, &qword_4AED5F0);
  v24 = (unsigned int)qword_4AED5E8;
  if ( HIDWORD(qword_4AED5E8) < (unsigned __int64)(unsigned int)qword_4AED5E8 + 1 )
  {
    v96 = (_OWORD *)v23;
    sub_25D6060(&qword_4AED5F0 - 2, &qword_4AED5F0, (unsigned int)qword_4AED5E8 + 1LL, 8);
    v24 = (unsigned int)qword_4AED5E8;
    v23 = (__int64)v96;
  }
  v25 = _mm_load_si128(&v92);
  *(_QWORD *)(qword_4AED5E0 + 8 * v24) = v23;
  xmmword_4AED638 = 0;
  xmmword_4AED648 = (__int128)v25;
  qword_4AED620 = (__int64)&off_4A64710;
  LODWORD(qword_4AED5E8) = qword_4AED5E8 + 1;
  byte_4AED62C = 0;
  qword_4AED5A0 = (__int64)off_4A6DEB8;
  dword_4AED618 = 0;
  dword_4AED628 = 0;
  qword_4AED630 = (__int64)off_49D9228;
  sub_259F400(&qword_4AED5A0, "asan-max-inline-poisoning-size", 30);
  qword_4AED5C8 = 65;
  qword_4AED5C0 = (__int64)"Inline shadow poisoning for blocks up to the given size in bytes.";
  dword_4AED618 = 64;
  byte_4AED62C = 1;
  dword_4AED628 = 64;
  BYTE2(qword_4AED5A8) = BYTE2(qword_4AED5A8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AED5A0);
  __cxa_atexit(sub_1F6C940, &qword_4AED5A0, &off_47CFE00);
  v108.m128i_i64[0] = (__int64)&v102;
  v111.m128i_i64[0] = (__int64)"never";
  v111.m128i_i64[1] = 5;
  v26 = _mm_load_si128(&v111);
  v112.m128i_i64[1] = (__int64)"Never detect stack use after return.";
  v112.m128i_i32[0] = 0;
  v121[0] = v26;
  v27 = _mm_load_si128(&v112);
  v113.m128i_i64[1] = (__int64)"runtime";
  v113.m128i_i64[0] = 36;
  v121[1] = v27;
  v28 = _mm_load_si128(&v113);
  v114.m128i_i64[0] = 7;
  v114.m128i_i32[2] = 1;
  v121[2] = v28;
  v29 = _mm_load_si128(&v114);
  v115.m128i_i64[0] = (__int64)"Detect stack use after return if binary flag 'ASAN_OPTIONS=detect_stack_use_after_return' is set.";
  v115.m128i_i64[1] = 97;
  v121[3] = v29;
  v30 = _mm_load_si128(&v115);
  v116.m128i_i64[0] = (__int64)"always";
  v116.m128i_i64[1] = 6;
  v121[4] = v30;
  v31 = _mm_load_si128(&v116);
  v117.m128i_i64[1] = (__int64)"Always detect stack use after return.";
  v96 = v121;
  ptr = v121;
  v102.m128i_i32[0] = 1;
  v105.m128i_i32[0] = 1;
  v117.m128i_i32[0] = 2;
  v118 = 37;
  v121[5] = v31;
  v32 = _mm_load_si128(&v117);
  v120 = 0x400000003LL;
  v111.m128i_i64[0] = (__int64)"Sets the mode of detection for stack-use-after-return.";
  v122 = 37;
  v111.m128i_i64[1] = 54;
  v121[6] = v32;
  sub_2C07C80(qword_4AED340, "asan-use-after-return", &v111, &ptr, &v105, &v108);
  if ( ptr != v96 )
    free(ptr);
  __cxa_atexit(sub_2C06740, qword_4AED340, &off_47CFE00);
  ptr = "Create redzones for byval arguments (extra copy required)";
  v105.m128i_i8[0] = 1;
  v111.m128i_i64[0] = (__int64)&v105;
  v108.m128i_i32[0] = 1;
  v120 = 57;
  sub_2C078D0(qword_4AED280, "asan-redzone-byval-args", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AED280, &off_47CFE00);
  qword_4AED1D0 = 0;
  qword_4AED200 = (__int64)&qword_4AED210;
  qword_4AED1D8 = 0;
  qword_4AED1C0 = (__int64)&off_4A6E058;
  qword_4AED1C8 = (unsigned int)qword_4AED1C8 & 0x80000000;
  qword_4AED218 = (__int64)&qword_4AED230;
  qword_4AED1E0 = 0;
  qword_4AED1E8 = 0;
  qword_4AED1F0 = 0;
  qword_4AED1F8 = 0;
  qword_4AED208 = 0x100000000LL;
  qword_4AED220 = 1;
  dword_4AED228 = 0;
  byte_4AED22C = 1;
  v33 = sub_259AC30(sub_1F6C9D0, &qword_4AED210);
  v34 = (unsigned int)qword_4AED208;
  if ( HIDWORD(qword_4AED208) < (unsigned __int64)(unsigned int)qword_4AED208 + 1 )
  {
    v97 = v33;
    sub_25D6060(&qword_4AED210 - 2, &qword_4AED210, (unsigned int)qword_4AED208 + 1LL, 8);
    v34 = (unsigned int)qword_4AED208;
    v33 = v97;
  }
  v35 = _mm_load_si128(&v90);
  *(_QWORD *)(qword_4AED200 + 8 * v34) = v33;
  word_4AED248 = 0;
  xmmword_4AED258 = 0;
  qword_4AED240 = (__int64)&off_4A64730;
  xmmword_4AED268 = (__int128)v35;
  LODWORD(qword_4AED208) = qword_4AED208 + 1;
  qword_4AED1C0 = (__int64)off_4A6DFF0;
  byte_4AED238 = 0;
  qword_4AED250 = (__int64)off_49D9168;
  sub_259F400(&qword_4AED1C0, "asan-use-after-scope", 20);
  qword_4AED1E8 = 27;
  qword_4AED1E0 = (__int64)"Check stack-use-after-scope";
  byte_4AED238 = 0;
  BYTE2(qword_4AED1C8) = BYTE2(qword_4AED1C8) & 0x9F | 0x20;
  word_4AED248 = 256;
  sub_259EC40(&qword_4AED1C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AED1C0, &off_47CFE00);
  v105.m128i_i8[0] = 1;
  ptr = "Handle global objects";
  v111.m128i_i64[0] = (__int64)&v105;
  v108.m128i_i32[0] = 1;
  v120 = 21;
  sub_2C07390(qword_4AED100, "asan-globals", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AED100, &off_47CFE00);
  v105.m128i_i8[0] = 1;
  ptr = "Handle C++ initializer order";
  v111.m128i_i64[0] = (__int64)&v105;
  v108.m128i_i32[0] = 1;
  v120 = 28;
  sub_2C07A90(qword_4AED040, "asan-initialization-order", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AED040, &off_47CFE00);
  v105.m128i_i8[0] = 0;
  ptr = "Instrument <, <=, >, >=, - with pointer operands";
  v111.m128i_i64[0] = (__int64)&v105;
  v108.m128i_i32[0] = 1;
  v120 = 48;
  sub_2C08130(qword_4AECF80, "asan-detect-invalid-pointer-pair", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AECF80, &off_47CFE00);
  v105.m128i_i8[0] = 0;
  ptr = "Instrument <, <=, >, >= with pointer operands";
  v111.m128i_i64[0] = (__int64)&v105;
  v108.m128i_i32[0] = 1;
  v120 = 45;
  sub_2C082F0(qword_4AECEC0, "asan-detect-invalid-pointer-cmp", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AECEC0, &off_47CFE00);
  ptr = "Instrument - operations with pointer operands";
  v105.m128i_i8[0] = 0;
  v111.m128i_i64[0] = (__int64)&v105;
  v108.m128i_i32[0] = 1;
  v120 = 45;
  sub_2C082F0(qword_4AECE00, "asan-detect-invalid-pointer-sub", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AECE00, &off_47CFE00);
  qword_4AECD50 = 0;
  qword_4AECD80 = (__int64)&qword_4AECD90;
  qword_4AECD58 = 0;
  qword_4AECD40 = (__int64)&off_4A6E058;
  qword_4AECD48 = (unsigned int)qword_4AECD48 & 0x80000000;
  qword_4AECD98 = (__int64)&qword_4AECDB0;
  qword_4AECD60 = 0;
  qword_4AECD68 = 0;
  qword_4AECD70 = 0;
  qword_4AECD78 = 0;
  qword_4AECD88 = 0x100000000LL;
  qword_4AECDA0 = 1;
  dword_4AECDA8 = 0;
  byte_4AECDAC = 1;
  v36 = sub_259AC30(sub_1F6C9D0, &qword_4AECD90);
  v37 = (unsigned int)qword_4AECD88;
  if ( HIDWORD(qword_4AECD88) < (unsigned __int64)(unsigned int)qword_4AECD88 + 1 )
  {
    v97 = v36;
    sub_25D6060(&qword_4AECD90 - 2, &qword_4AECD90, (unsigned int)qword_4AECD88 + 1LL, 8);
    v37 = (unsigned int)qword_4AECD88;
    v36 = v97;
  }
  v38 = _mm_load_si128(&v92);
  *(_QWORD *)(qword_4AECD80 + 8 * v37) = v36;
  xmmword_4AECDD8 = 0;
  xmmword_4AECDE8 = (__int128)v38;
  qword_4AECDC0 = (__int64)&off_4A64710;
  LODWORD(qword_4AECD88) = qword_4AECD88 + 1;
  byte_4AECDCC = 0;
  qword_4AECD40 = (__int64)off_4A6DEB8;
  dword_4AECDB8 = 0;
  dword_4AECDC8 = 0;
  qword_4AECDD0 = (__int64)off_49D9228;
  sub_259F400(&qword_4AECD40, "asan-realign-stack", 18);
  qword_4AECD68 = 54;
  qword_4AECD60 = (__int64)"Realign stack to the value of this flag (power of two)";
  dword_4AECDB8 = 32;
  byte_4AECDCC = 1;
  dword_4AECDC8 = 32;
  BYTE2(qword_4AECD48) = BYTE2(qword_4AECD48) & 0x9F | 0x20;
  sub_259EC40(&qword_4AECD40);
  __cxa_atexit(sub_1F6C940, &qword_4AECD40, &off_47CFE00);
  qword_4AECC90 = 0;
  qword_4AECCC0 = (__int64)&qword_4AECCD0;
  qword_4AECC98 = 0;
  qword_4AECC80 = (__int64)&off_4A6E058;
  qword_4AECC88 = (unsigned int)qword_4AECC88 & 0x80000000;
  qword_4AECCD8 = (__int64)&qword_4AECCF0;
  qword_4AECCA0 = 0;
  qword_4AECCA8 = 0;
  qword_4AECCB0 = 0;
  qword_4AECCB8 = 0;
  qword_4AECCC8 = 0x100000000LL;
  qword_4AECCE0 = 1;
  dword_4AECCE8 = 0;
  byte_4AECCEC = 1;
  v39 = sub_259AC30(sub_1F6C940, &qword_4AECCD0);
  v40 = (unsigned int)qword_4AECCC8;
  if ( HIDWORD(qword_4AECCC8) < (unsigned __int64)(unsigned int)qword_4AECCC8 + 1 )
  {
    v97 = v39;
    sub_25D6060(&qword_4AECCD0 - 2, &qword_4AECCD0, (unsigned int)qword_4AECCC8 + 1LL, 8);
    v40 = (unsigned int)qword_4AECCC8;
    v39 = v97;
  }
  v41 = _mm_load_si128(&v91);
  *(_QWORD *)(qword_4AECCC0 + 8 * v40) = v39;
  xmmword_4AECD18 = 0;
  xmmword_4AECD28 = (__int128)v41;
  qword_4AECD00 = (__int64)&off_4A692B8;
  LODWORD(qword_4AECCC8) = qword_4AECCC8 + 1;
  byte_4AECD0C = 0;
  qword_4AECC80 = (__int64)off_4A6DF20;
  dword_4AECCF8 = 0;
  dword_4AECD08 = 0;
  qword_4AECD10 = (__int64)off_49D91C8;
  sub_259F400(&qword_4AECC80, "asan-instrumentation-with-call-threshold", 40);
  qword_4AECCA8 = 156;
  qword_4AECCA0 = (__int64)"If the function being instrumented contains more than this number of memory accesses, use cal"
                           "lbacks instead of inline checks (-1 means never use callbacks).";
  dword_4AECCF8 = 7000;
  byte_4AECD0C = 1;
  dword_4AECD08 = 7000;
  BYTE2(qword_4AECC88) = BYTE2(qword_4AECC88) & 0x9F | 0x20;
  sub_259EC40(&qword_4AECC80);
  __cxa_atexit(sub_20B86E0, &qword_4AECC80, &off_47CFE00);
  qword_4AECB90 = 0;
  qword_4AECBC0 = (__int64)&qword_4AECBD0;
  qword_4AECB98 = 0;
  qword_4AECB80 = (__int64)&off_4A6E058;
  qword_4AECB88 = (unsigned int)qword_4AECB88 & 0x80000000;
  qword_4AECBD8 = (__int64)&qword_4AECBF0;
  qword_4AECBA0 = 0;
  qword_4AECBA8 = 0;
  qword_4AECBB0 = 0;
  qword_4AECBB8 = 0;
  qword_4AECBC8 = 0x100000000LL;
  qword_4AECBE0 = 1;
  dword_4AECBE8 = 0;
  byte_4AECBEC = 1;
  v42 = sub_259AC30(sub_20B86E0, &qword_4AECBD0);
  v43 = (unsigned int)qword_4AECBC8;
  if ( HIDWORD(qword_4AECBC8) < (unsigned __int64)(unsigned int)qword_4AECBC8 + 1 )
  {
    v97 = v42;
    sub_25D6060(&qword_4AECBD0 - 2, &qword_4AECBD0, (unsigned int)qword_4AECBC8 + 1LL, 8);
    v43 = (unsigned int)qword_4AECBC8;
    v42 = v97;
  }
  v44 = _mm_load_si128(&v94);
  v45 = _mm_load_si128(&v93);
  *(_QWORD *)(qword_4AECBC0 + 8 * v43) = v42;
  qword_4AECBF8 = (__int64)&byte_4AECC08;
  xmmword_4AECC18 = (__int128)v44;
  xmmword_4AECC50 = 0;
  qword_4AECB80 = (__int64)&off_4A6DF88;
  xmmword_4AECC60 = (__int128)v45;
  LODWORD(qword_4AECBC8) = qword_4AECBC8 + 1;
  qword_4AECC48 = (__int64)off_49D92E8;
  qword_4AECC00 = 0;
  byte_4AECC08 = 0;
  qword_4AECC28 = 0;
  byte_4AECC30 = 0;
  byte_4AECC40 = 0;
  sub_259F400(&qword_4AECB80, "asan-memory-access-callback-prefix", 34);
  qword_4AECBA0 = (__int64)"Prefix for memory access callbacks";
  strcpy((char *)v121, "__asan_");
  qword_4AECBA8 = 34;
  BYTE2(qword_4AECB88) = BYTE2(qword_4AECB88) & 0x9F | 0x20;
  ptr = v96;
  v120 = 7;
  std::string::_M_assign();
  byte_4AECC40 = 1;
  std::string::_M_assign();
  if ( ptr != v96 )
    operator delete(ptr, *(_QWORD *)&v121[0] + 1LL);
  sub_259EC40(&qword_4AECB80);
  __cxa_atexit(sub_2283FB0, &qword_4AECB80, &off_47CFE00);
  v111.m128i_i64[0] = (__int64)&v105;
  ptr = "Use prefix for memory intrinsics in KASAN mode";
  v105.m128i_i8[0] = 0;
  v108.m128i_i32[0] = 1;
  v120 = 46;
  sub_2C08130(qword_4AECAC0, "asan-kernel-mem-intrinsic-prefix", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AECAC0, &off_47CFE00);
  v111.m128i_i64[0] = (__int64)&v105;
  v105.m128i_i8[0] = 1;
  ptr = "instrument dynamic allocas";
  v108.m128i_i32[0] = 1;
  v120 = 26;
  sub_2C082F0(qword_4AECA00, "asan-instrument-dynamic-allocas", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AECA00, &off_47CFE00);
  qword_4AEC950 = 0;
  qword_4AEC980 = (__int64)&qword_4AEC990;
  qword_4AEC958 = 0;
  qword_4AEC940 = (__int64)&off_4A6E058;
  qword_4AEC948 = (unsigned int)qword_4AEC948 & 0x80000000;
  qword_4AEC998 = (__int64)&qword_4AEC9B0;
  qword_4AEC960 = 0;
  qword_4AEC968 = 0;
  qword_4AEC970 = 0;
  qword_4AEC978 = 0;
  qword_4AEC988 = 0x100000000LL;
  qword_4AEC9A0 = 1;
  dword_4AEC9A8 = 0;
  byte_4AEC9AC = 1;
  v46 = sub_259AC30(sub_1F6C9D0, &qword_4AEC990);
  v47 = (unsigned int)qword_4AEC988;
  v48 = (unsigned int)qword_4AEC988 + 1LL;
  if ( HIDWORD(qword_4AEC988) < v48 )
  {
    sub_25D6060(&qword_4AEC990 - 2, &qword_4AEC990, v48, 8);
    v47 = (unsigned int)qword_4AEC988;
  }
  v49 = _mm_load_si128(&v90);
  *(_QWORD *)(qword_4AEC980 + 8 * v47) = v46;
  word_4AEC9C8 = 0;
  xmmword_4AEC9E8 = (__int128)v49;
  qword_4AEC9C0 = (__int64)&off_4A64730;
  xmmword_4AEC9D8 = 0;
  LODWORD(qword_4AEC988) = qword_4AEC988 + 1;
  qword_4AEC940 = (__int64)off_4A6DFF0;
  byte_4AEC9B8 = 0;
  qword_4AEC9D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEC940, "asan-skip-promotable-allocas", 28);
  qword_4AEC968 = 36;
  qword_4AEC960 = (__int64)"Do not instrument promotable allocas";
  byte_4AEC9B8 = 1;
  BYTE2(qword_4AEC948) = BYTE2(qword_4AEC948) & 0x9F | 0x20;
  word_4AEC9C8 = 257;
  sub_259EC40(&qword_4AEC940);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEC940, &off_47CFE00);
  LODWORD(v101[0]) = 1;
  v94.m128i_i64[0] = (__int64)&v100;
  v108.m128i_i64[0] = (__int64)&v100;
  v102.m128i_i64[0] = (__int64)"global";
  v103.m128i_i64[1] = (__int64)"Use global constructors";
  v105.m128i_i64[0] = (__int64)"none";
  v106.m128i_i64[1] = (__int64)"No constructors";
  LODWORD(v100) = 1;
  v102.m128i_i64[1] = 6;
  v103.m128i_i32[0] = 1;
  v104 = 23;
  v105.m128i_i64[1] = 4;
  v106.m128i_i32[0] = 0;
  v107 = 15;
  sub_2C084B0(
    (unsigned int)&ptr,
    (unsigned int)&qword_4AEC940,
    v50,
    v51,
    v52,
    v53,
    (__int128)_mm_load_si128(&v105),
    (__int128)_mm_load_si128(&v106),
    15,
    (__int128)_mm_load_si128(&v102),
    (__int128)_mm_load_si128(&v103),
    23);
  v111.m128i_i64[1] = 30;
  v111.m128i_i64[0] = (__int64)"Sets the ASan constructor kind";
  sub_2C08540(qword_4AEC6E0, "asan-constructor-kind", &v111, &ptr, &v108, v101);
  if ( ptr != v96 )
    free(ptr);
  __cxa_atexit(sub_2C067E0, qword_4AEC6E0, &off_47CFE00);
  qword_4AEC630 = 0;
  qword_4AEC660 = (__int64)&qword_4AEC670;
  qword_4AEC638 = 0;
  qword_4AEC620 = (__int64)&off_4A6E058;
  qword_4AEC628 = (unsigned int)qword_4AEC628 & 0x80000000;
  qword_4AEC678 = (__int64)&qword_4AEC690;
  qword_4AEC640 = 0;
  qword_4AEC648 = 0;
  qword_4AEC650 = 0;
  qword_4AEC658 = 0;
  qword_4AEC668 = 0x100000000LL;
  qword_4AEC680 = 1;
  dword_4AEC688 = 0;
  byte_4AEC68C = 1;
  v54 = sub_259AC30(sub_2C067E0, &qword_4AEC670);
  v55 = (unsigned int)qword_4AEC668;
  if ( HIDWORD(qword_4AEC668) < (unsigned __int64)(unsigned int)qword_4AEC668 + 1 )
  {
    v97 = v54;
    sub_25D6060(&qword_4AEC670 - 2, &qword_4AEC670, (unsigned int)qword_4AEC668 + 1LL, 8);
    v55 = (unsigned int)qword_4AEC668;
    v54 = v97;
  }
  v56 = _mm_load_si128(&v91);
  *(_QWORD *)(qword_4AEC660 + 8 * v55) = v54;
  xmmword_4AEC6B8 = 0;
  xmmword_4AEC6C8 = (__int128)v56;
  qword_4AEC6A0 = (__int64)&off_4A692B8;
  LODWORD(qword_4AEC668) = qword_4AEC668 + 1;
  byte_4AEC6AC = 0;
  qword_4AEC620 = (__int64)off_4A6DF20;
  dword_4AEC698 = 0;
  dword_4AEC6A8 = 0;
  qword_4AEC6B0 = (__int64)off_49D91C8;
  sub_259F400(&qword_4AEC620, "asan-mapping-scale", 18);
  qword_4AEC648 = 28;
  qword_4AEC640 = (__int64)"scale of asan shadow mapping";
  dword_4AEC698 = 0;
  byte_4AEC6AC = 1;
  dword_4AEC6A8 = 0;
  BYTE2(qword_4AEC628) = BYTE2(qword_4AEC628) & 0x9F | 0x20;
  sub_259EC40(&qword_4AEC620);
  __cxa_atexit(sub_20B86E0, &qword_4AEC620, &off_47CFE00);
  qword_4AEC570 = 0;
  qword_4AEC5A0 = (__int64)&qword_4AEC5B0;
  qword_4AEC578 = 0;
  qword_4AEC560 = (__int64)&off_4A6E058;
  qword_4AEC568 = (unsigned int)qword_4AEC568 & 0x80000000;
  qword_4AEC5B8 = (__int64)&qword_4AEC5D0;
  qword_4AEC580 = 0;
  qword_4AEC588 = 0;
  qword_4AEC590 = 0;
  qword_4AEC598 = 0;
  qword_4AEC5A8 = 0x100000000LL;
  qword_4AEC5C0 = 1;
  dword_4AEC5C8 = 0;
  byte_4AEC5CC = 1;
  v57 = sub_259AC30(sub_20B86E0, &qword_4AEC5B0);
  v58 = (unsigned int)qword_4AEC5A8;
  if ( HIDWORD(qword_4AEC5A8) < (unsigned __int64)(unsigned int)qword_4AEC5A8 + 1 )
  {
    v97 = v57;
    sub_25D6060(&qword_4AEC5B0 - 2, &qword_4AEC5B0, (unsigned int)qword_4AEC5A8 + 1LL, 8);
    v58 = (unsigned int)qword_4AEC5A8;
    v57 = v97;
  }
  *(_QWORD *)(qword_4AEC5A0 + 8 * v58) = v57;
  xmmword_4AEC600 = 0;
  LODWORD(qword_4AEC5A8) = qword_4AEC5A8 + 1;
  qword_4AEC5E0 = (__int64)off_4A6E4B8;
  qword_4AEC5D8 = 0;
  byte_4AEC5F0 = 0;
  qword_4AEC560 = (__int64)off_4A6E4D8;
  qword_4AEC5E8 = 0;
  qword_4AEC5F8 = (__int64)off_49D9258;
  xmmword_4AEC610 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E8D00),
                                (__m128i)(unsigned __int64)nullsub_374);
  sub_259F400(&qword_4AEC560, "asan-mapping-offset", 19);
  qword_4AEC588 = 44;
  qword_4AEC580 = (__int64)"offset of asan shadow mapping [EXPERIMENTAL]";
  qword_4AEC5D8 = 0;
  byte_4AEC5F0 = 1;
  qword_4AEC5E8 = 0;
  BYTE2(qword_4AEC568) = BYTE2(qword_4AEC568) & 0x9F | 0x20;
  sub_259EC40(&qword_4AEC560);
  __cxa_atexit(sub_25D0820, &qword_4AEC560, &off_47CFE00);
  qword_4AEC4B0 = 0;
  qword_4AEC4E0 = (__int64)&qword_4AEC4F0;
  qword_4AEC4B8 = 0;
  qword_4AEC4A0 = (__int64)&off_4A6E058;
  qword_4AEC4A8 = (unsigned int)qword_4AEC4A8 & 0x80000000;
  qword_4AEC4F8 = (__int64)&qword_4AEC510;
  qword_4AEC4C0 = 0;
  qword_4AEC4C8 = 0;
  qword_4AEC4D0 = 0;
  qword_4AEC4D8 = 0;
  qword_4AEC4E8 = 0x100000000LL;
  qword_4AEC500 = 1;
  dword_4AEC508 = 0;
  byte_4AEC50C = 1;
  v59 = sub_259AC30(sub_25D0820, &qword_4AEC4F0);
  v60 = (unsigned int)qword_4AEC4E8;
  if ( HIDWORD(qword_4AEC4E8) < (unsigned __int64)(unsigned int)qword_4AEC4E8 + 1 )
  {
    v97 = v59;
    sub_25D6060(&qword_4AEC4F0 - 2, &qword_4AEC4F0, (unsigned int)qword_4AEC4E8 + 1LL, 8);
    v60 = (unsigned int)qword_4AEC4E8;
    v59 = v97;
  }
  v61 = _mm_load_si128(&v90);
  *(_QWORD *)(qword_4AEC4E0 + 8 * v60) = v59;
  xmmword_4AEC538 = 0;
  xmmword_4AEC548 = (__int128)v61;
  qword_4AEC520 = (__int64)&off_4A64730;
  word_4AEC528 = 0;
  LODWORD(qword_4AEC4E8) = qword_4AEC4E8 + 1;
  qword_4AEC4A0 = (__int64)off_4A6DFF0;
  byte_4AEC518 = 0;
  qword_4AEC530 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEC4A0, "asan-opt", 8);
  qword_4AEC4C8 = 24;
  qword_4AEC4C0 = (__int64)"Optimize instrumentation";
  byte_4AEC518 = 1;
  BYTE2(qword_4AEC4A8) = BYTE2(qword_4AEC4A8) & 0x9F | 0x20;
  word_4AEC528 = 257;
  sub_259EC40(&qword_4AEC4A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEC4A0, &off_47CFE00);
  ptr = "Optimize callbacks";
  LOBYTE(v101[0]) = 0;
  v111.m128i_i64[0] = (__int64)v101;
  v108.m128i_i32[0] = 1;
  v120 = 18;
  sub_2C078D0(qword_4AEC3E0, "asan-optimize-callbacks", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AEC3E0, &off_47CFE00);
  qword_4AEC330 = 0;
  qword_4AEC360 = (__int64)&qword_4AEC370;
  qword_4AEC338 = 0;
  qword_4AEC320 = (__int64)&off_4A6E058;
  qword_4AEC328 = (unsigned int)qword_4AEC328 & 0x80000000;
  qword_4AEC378 = (__int64)&qword_4AEC390;
  qword_4AEC340 = 0;
  qword_4AEC348 = 0;
  qword_4AEC350 = 0;
  qword_4AEC358 = 0;
  qword_4AEC368 = 0x100000000LL;
  qword_4AEC380 = 1;
  dword_4AEC388 = 0;
  byte_4AEC38C = 1;
  v62 = sub_259AC30(sub_1F6C9D0, &qword_4AEC370);
  v63 = (unsigned int)qword_4AEC368;
  if ( HIDWORD(qword_4AEC368) < (unsigned __int64)(unsigned int)qword_4AEC368 + 1 )
  {
    v97 = v62;
    sub_25D6060(&qword_4AEC370 - 2, &qword_4AEC370, (unsigned int)qword_4AEC368 + 1LL, 8);
    v63 = (unsigned int)qword_4AEC368;
    v62 = v97;
  }
  v64 = _mm_load_si128(&v90);
  *(_QWORD *)(qword_4AEC360 + 8 * v63) = v62;
  word_4AEC3A8 = 0;
  xmmword_4AEC3B8 = 0;
  qword_4AEC3A0 = (__int64)&off_4A64730;
  xmmword_4AEC3C8 = (__int128)v64;
  LODWORD(qword_4AEC368) = qword_4AEC368 + 1;
  qword_4AEC320 = (__int64)off_4A6DFF0;
  byte_4AEC398 = 0;
  qword_4AEC3B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEC320, "asan-opt-same-temp", 18);
  qword_4AEC348 = 34;
  qword_4AEC340 = (__int64)"Instrument the same temp just once";
  byte_4AEC398 = 1;
  BYTE2(qword_4AEC328) = BYTE2(qword_4AEC328) & 0x9F | 0x20;
  word_4AEC3A8 = 257;
  sub_259EC40(&qword_4AEC320);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEC320, &off_47CFE00);
  ptr = "Don't instrument scalar globals";
  LOBYTE(v101[0]) = 1;
  v111.m128i_i64[0] = (__int64)v101;
  v108.m128i_i32[0] = 1;
  v120 = 31;
  sub_2C089F0(qword_4AEC260, "asan-opt-globals", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AEC260, &off_47CFE00);
  qword_4AEC1B0 = 0;
  qword_4AEC1E0 = (__int64)&qword_4AEC1F0;
  qword_4AEC1B8 = 0;
  qword_4AEC1A0 = (__int64)&off_4A6E058;
  qword_4AEC1A8 = (unsigned int)qword_4AEC1A8 & 0x80000000;
  qword_4AEC1F8 = (__int64)&qword_4AEC210;
  qword_4AEC1C0 = 0;
  qword_4AEC1C8 = 0;
  qword_4AEC1D0 = 0;
  qword_4AEC1D8 = 0;
  qword_4AEC1E8 = 0x100000000LL;
  qword_4AEC200 = 1;
  dword_4AEC208 = 0;
  byte_4AEC20C = 1;
  v65 = sub_259AC30(sub_1F6C9D0, &qword_4AEC1F0);
  v66 = (unsigned int)qword_4AEC1E8;
  if ( HIDWORD(qword_4AEC1E8) < (unsigned __int64)(unsigned int)qword_4AEC1E8 + 1 )
  {
    v97 = v65;
    sub_25D6060(&qword_4AEC1F0 - 2, &qword_4AEC1F0, (unsigned int)qword_4AEC1E8 + 1LL, 8);
    v66 = (unsigned int)qword_4AEC1E8;
    v65 = v97;
  }
  v67 = _mm_load_si128(&v90);
  *(_QWORD *)(qword_4AEC1E0 + 8 * v66) = v65;
  word_4AEC228 = 0;
  xmmword_4AEC238 = 0;
  xmmword_4AEC248 = (__int128)v67;
  qword_4AEC220 = (__int64)&off_4A64730;
  LODWORD(qword_4AEC1E8) = qword_4AEC1E8 + 1;
  byte_4AEC218 = 0;
  qword_4AEC1A0 = (__int64)off_4A6DFF0;
  qword_4AEC230 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEC1A0, "asan-opt-stack", 14);
  qword_4AEC1C8 = 39;
  qword_4AEC1C0 = (__int64)"Don't instrument scalar stack variables";
  byte_4AEC218 = 0;
  BYTE2(qword_4AEC1A8) = BYTE2(qword_4AEC1A8) & 0x9F | 0x20;
  word_4AEC228 = 256;
  sub_259EC40(&qword_4AEC1A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEC1A0, &off_47CFE00);
  ptr = "Use dynamic alloca to represent stack variables";
  LOBYTE(v101[0]) = 1;
  v111.m128i_i64[0] = (__int64)v101;
  v108.m128i_i32[0] = 1;
  v120 = 47;
  sub_2C07A90(qword_4AEC0E0, "asan-stack-dynamic-alloca", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AEC0E0, &off_47CFE00);
  qword_4AEC030 = 0;
  qword_4AEC060 = (__int64)&qword_4AEC070;
  qword_4AEC038 = 0;
  qword_4AEC020 = (__int64)&off_4A6E058;
  qword_4AEC028 = (unsigned int)qword_4AEC028 & 0x80000000;
  qword_4AEC078 = (__int64)&qword_4AEC090;
  qword_4AEC040 = 0;
  qword_4AEC048 = 0;
  qword_4AEC050 = 0;
  qword_4AEC058 = 0;
  qword_4AEC068 = 0x100000000LL;
  qword_4AEC080 = 1;
  dword_4AEC088 = 0;
  byte_4AEC08C = 1;
  v68 = sub_259AC30(sub_1F6C9D0, &qword_4AEC070);
  v69 = (unsigned int)qword_4AEC068;
  if ( HIDWORD(qword_4AEC068) < (unsigned __int64)(unsigned int)qword_4AEC068 + 1 )
  {
    v90.m128i_i64[0] = v68;
    sub_25D6060(&qword_4AEC070 - 2, &qword_4AEC070, (unsigned int)qword_4AEC068 + 1LL, 8);
    v69 = (unsigned int)qword_4AEC068;
    v68 = v90.m128i_i64[0];
  }
  v70 = _mm_load_si128(&v92);
  *(_QWORD *)(qword_4AEC060 + 8 * v69) = v68;
  xmmword_4AEC0C8 = (__int128)v70;
  xmmword_4AEC0B8 = 0;
  qword_4AEC0A0 = (__int64)&off_4A64710;
  LODWORD(qword_4AEC068) = qword_4AEC068 + 1;
  byte_4AEC0AC = 0;
  qword_4AEC020 = (__int64)off_4A6DEB8;
  dword_4AEC098 = 0;
  dword_4AEC0A8 = 0;
  qword_4AEC0B0 = (__int64)off_49D9228;
  sub_259F400(&qword_4AEC020, "asan-force-experiment", 21);
  qword_4AEC048 = 43;
  qword_4AEC040 = (__int64)"Force optimization experiment (for testing)";
  dword_4AEC098 = 0;
  byte_4AEC0AC = 1;
  dword_4AEC0A8 = 0;
  BYTE2(qword_4AEC028) = BYTE2(qword_4AEC028) & 0x9F | 0x20;
  sub_259EC40(&qword_4AEC020);
  __cxa_atexit(sub_1F6C940, &qword_4AEC020, &off_47CFE00);
  ptr = "Use private aliases for global variables";
  LOBYTE(v101[0]) = 1;
  v111.m128i_i64[0] = (__int64)v101;
  v108.m128i_i32[0] = 1;
  v120 = 40;
  sub_2C07710(qword_4AEBF60, "asan-use-private-alias", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AEBF60, &off_47CFE00);
  ptr = "Use odr indicators to improve ODR reporting";
  LOBYTE(v101[0]) = 1;
  v111.m128i_i64[0] = (__int64)v101;
  v108.m128i_i32[0] = 1;
  v120 = 43;
  sub_2C07710(qword_4AEBEA0, "asan-use-odr-indicator", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AEBEA0, &off_47CFE00);
  ptr = "Use linker features to support dead code stripping of globals";
  LOBYTE(v101[0]) = 1;
  v111.m128i_i64[0] = (__int64)v101;
  v108.m128i_i32[0] = 1;
  v120 = 61;
  sub_2C07A90(qword_4AEBDE0, "asan-globals-live-support", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AEBDE0, &off_47CFE00);
  LOBYTE(v101[0]) = 1;
  ptr = "Place ASan constructors in comdat sections";
  v111.m128i_i64[0] = (__int64)v101;
  v108.m128i_i32[0] = 1;
  v120 = 42;
  sub_2C089F0(qword_4AEBD20, "asan-with-comdat", &ptr, &v108, &v111);
  __cxa_atexit(sub_1F6C9D0, qword_4AEBD20, &off_47CFE00);
  v99 = 1;
  v100 = &v98;
  v108.m128i_i64[0] = (__int64)"global";
  v109.m128i_i64[1] = (__int64)"Use global destructors";
  v111.m128i_i64[0] = (__int64)"none";
  v112.m128i_i64[1] = (__int64)"No destructors";
  v98 = 2;
  v108.m128i_i64[1] = 6;
  v109.m128i_i32[0] = 1;
  v110 = 22;
  v111.m128i_i64[1] = 4;
  v112.m128i_i32[0] = 0;
  v113.m128i_i64[0] = 14;
  sub_2C084B0(
    (unsigned int)&ptr,
    (unsigned int)qword_4AEBD20,
    v71,
    v72,
    v73,
    v74,
    (__int128)_mm_load_si128(&v111),
    (__int128)_mm_load_si128(&v112),
    14,
    (__int128)_mm_load_si128(&v108),
    (__int128)_mm_load_si128(&v109),
    22);
  v101[1] = 95;
  v101[0] = "Sets the ASan destructor kind. The default is to use the value provided to the pass constructor";
  sub_2C08BC0(qword_4AEBAC0, "asan-destructor-kind", v101, &ptr, v94.m128i_i64[0], &v99);
  if ( ptr != v96 )
    free(ptr);
  __cxa_atexit(sub_2C06880, qword_4AEBAC0, &off_47CFE00);
  qword_4AEBA10 = 0;
  qword_4AEBA40 = (__int64)&qword_4AEBA50;
  qword_4AEBA18 = 0;
  qword_4AEBA00 = (__int64)&off_4A6E058;
  qword_4AEBA08 = (unsigned int)qword_4AEBA08 & 0x80000000;
  qword_4AEBA58 = (__int64)&qword_4AEBA70;
  qword_4AEBA20 = 0;
  qword_4AEBA28 = 0;
  qword_4AEBA30 = 0;
  qword_4AEBA38 = 0;
  qword_4AEBA48 = 0x100000000LL;
  qword_4AEBA60 = 1;
  dword_4AEBA68 = 0;
  byte_4AEBA6C = 1;
  v75 = sub_259AC30(sub_2C06880, &qword_4AEBA50);
  v76 = (unsigned int)qword_4AEBA48;
  v77 = (unsigned int)qword_4AEBA48 + 1LL;
  if ( HIDWORD(qword_4AEBA48) < v77 )
  {
    sub_25D6060(&qword_4AEBA50 - 2, &qword_4AEBA50, v77, 8);
    v76 = (unsigned int)qword_4AEBA48;
  }
  v78 = _mm_load_si128(&v91);
  *(_QWORD *)(qword_4AEBA40 + 8 * v76) = v75;
  xmmword_4AEBA98 = 0;
  xmmword_4AEBAA8 = (__int128)v78;
  qword_4AEBA80 = (__int64)&off_4A692B8;
  LODWORD(qword_4AEBA48) = qword_4AEBA48 + 1;
  byte_4AEBA8C = 0;
  qword_4AEBA00 = (__int64)off_4A6DF20;
  dword_4AEBA78 = 0;
  dword_4AEBA88 = 0;
  qword_4AEBA90 = (__int64)off_49D91C8;
  sub_259F400(&qword_4AEBA00, "asan-debug", 10);
  qword_4AEBA28 = 5;
  qword_4AEBA20 = (__int64)"debug";
  dword_4AEBA78 = 0;
  byte_4AEBA8C = 1;
  dword_4AEBA88 = 0;
  BYTE2(qword_4AEBA08) = BYTE2(qword_4AEBA08) & 0x9F | 0x20;
  sub_259EC40(&qword_4AEBA00);
  __cxa_atexit(sub_20B86E0, &qword_4AEBA00, &off_47CFE00);
  qword_4AEB950 = 0;
  qword_4AEB980 = (__int64)&qword_4AEB990;
  qword_4AEB958 = 0;
  qword_4AEB940 = (__int64)&off_4A6E058;
  qword_4AEB948 = (unsigned int)qword_4AEB948 & 0x80000000;
  qword_4AEB998 = (__int64)&qword_4AEB9B0;
  qword_4AEB960 = 0;
  qword_4AEB968 = 0;
  qword_4AEB970 = 0;
  qword_4AEB978 = 0;
  qword_4AEB988 = 0x100000000LL;
  qword_4AEB9A0 = 1;
  dword_4AEB9A8 = 0;
  byte_4AEB9AC = 1;
  v79 = sub_259AC30(sub_20B86E0, &qword_4AEB990);
  v80 = (unsigned int)qword_4AEB988;
  v81 = (unsigned int)qword_4AEB988 + 1LL;
  if ( HIDWORD(qword_4AEB988) < v81 )
  {
    sub_25D6060(&qword_4AEB990 - 2, &qword_4AEB990, v81, 8);
    v80 = (unsigned int)qword_4AEB988;
  }
  v82 = _mm_load_si128(&v91);
  *(_QWORD *)(qword_4AEB980 + 8 * v80) = v79;
  xmmword_4AEB9D8 = 0;
  xmmword_4AEB9E8 = (__int128)v82;
  qword_4AEB9C0 = (__int64)&off_4A692B8;
  LODWORD(qword_4AEB988) = qword_4AEB988 + 1;
  byte_4AEB9CC = 0;
  qword_4AEB940 = (__int64)off_4A6DF20;
  dword_4AEB9B8 = 0;
  dword_4AEB9C8 = 0;
  qword_4AEB9D0 = (__int64)off_49D91C8;
  sub_259F400(&qword_4AEB940, "asan-debug-stack", 16);
  qword_4AEB968 = 11;
  qword_4AEB960 = (__int64)"debug stack";
  dword_4AEB9B8 = 0;
  byte_4AEB9CC = 1;
  dword_4AEB9C8 = 0;
  BYTE2(qword_4AEB948) = BYTE2(qword_4AEB948) & 0x9F | 0x20;
  sub_259EC40(&qword_4AEB940);
  __cxa_atexit(sub_20B86E0, &qword_4AEB940, &off_47CFE00);
  qword_4AEB888 = 0x100000000LL;
  qword_4AEB880 = (__int64)&qword_4AEB890;
  qword_4AEB850 = 0;
  qword_4AEB840 = (__int64)&off_4A6E058;
  qword_4AEB848 = (unsigned int)qword_4AEB848 & 0x80000000;
  qword_4AEB898 = (__int64)&qword_4AEB8B0;
  qword_4AEB858 = 0;
  qword_4AEB860 = 0;
  qword_4AEB868 = 0;
  qword_4AEB870 = 0;
  qword_4AEB878 = 0;
  qword_4AEB8A0 = 1;
  dword_4AEB8A8 = 0;
  byte_4AEB8AC = 1;
  v83 = sub_259AC30(sub_20B86E0, &qword_4AEB890);
  v84 = (unsigned int)qword_4AEB888;
  v85 = (unsigned int)qword_4AEB888 + 1LL;
  if ( HIDWORD(qword_4AEB888) < v85 )
  {
    sub_25D6060(&qword_4AEB890 - 2, &qword_4AEB890, v85, 8);
    v84 = (unsigned int)qword_4AEB888;
  }
  v86 = _mm_load_si128(&v95);
  v87 = _mm_load_si128(&v93);
  *(_QWORD *)(qword_4AEB880 + 8 * v84) = v83;
  qword_4AEB8B8 = (__int64)&byte_4AEB8C8;
  xmmword_4AEB8D8 = (__int128)v86;
  xmmword_4AEB910 = 0;
  qword_4AEB840 = (__int64)&off_4A6DF88;
  xmmword_4AEB920 = (__int128)v87;
  LODWORD(qword_4AEB888) = qword_4AEB888 + 1;
  qword_4AEB908 = (__int64)off_49D92E8;
  qword_4AEB8C0 = 0;
  byte_4AEB8C8 = 0;
  qword_4AEB8E8 = 0;
  byte_4AEB8F0 = 0;
  byte_4AEB900 = 0;
  sub_259F400(&qword_4AEB840, "asan-debug-func", 15);
  qword_4AEB868 = 10;
  BYTE2(qword_4AEB848) = BYTE2(qword_4AEB848) & 0x9F | 0x20;
  qword_4AEB860 = (__int64)"Debug func";
  sub_259EC40(&qword_4AEB840);
  __cxa_atexit(sub_2283FB0, &qword_4AEB840, &off_47CFE00);
  v88 = v94.m128i_i64[0];
  v101[0] = &v99;
  ptr = "Debug min inst";
  v99 = -1;
  LODWORD(v100) = 1;
  v120 = 14;
  sub_2C09070(qword_4AEB780, "asan-debug-min", &ptr, v94.m128i_i64[0], v101);
  __cxa_atexit(sub_20B86E0, qword_4AEB780, &off_47CFE00);
  v101[0] = &v99;
  v99 = -1;
  LODWORD(v100) = 1;
  ptr = "Debug max inst";
  v120 = 14;
  sub_2C09070(qword_4AEB6C0, "asan-debug-max", &ptr, v88, v101);
  return __cxa_atexit(sub_20B86E0, qword_4AEB6C0, &off_47CFE00);
}

