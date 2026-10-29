int sub_3412C0()
{
  size_t v0; // r14
  size_t v1; // rax
  size_t v2; // r14
  __m128i si128; // xmm0
  size_t v4; // rax
  size_t v5; // r14
  __m128i v6; // xmm0
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // rax
  size_t v10; // r15
  __m128i v11; // xmm1
  size_t v12; // rax
  size_t v13; // r15
  __m128i v14; // xmm1
  size_t v15; // rax
  size_t v16; // r14
  __m128i v17; // xmm1
  size_t v18; // rax
  size_t v19; // r14
  __m128i v20; // xmm1
  size_t v21; // rax
  __m128i v23[4]; // [rsp+0h] [rbp-48h] BYREF

  v0 = j__strlen("Disable memory promotion in LICM pass");
  sub_200F820(&qword_2D03B40, 0, 0);
  word_2D03BC8 = 0;
  byte_2D03BB8 = 0;
  v23[0] = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  xmmword_2D03BE8 = (__int128)v23[0];
  qword_2D03BC0 = (__int64)off_2C714E8;
  qword_2D03B40 = (__int64)off_2C75848;
  qword_2D03BD0 = (__int64)off_2BEAB08;
  v1 = j__strlen("disable-licm-promotion");
  sub_2217250(&qword_2D03B40, "disable-licm-promotion", v1);
  word_2D03BC8 = 256;
  qword_2D03B68 = v0;
  byte_2D03BB8 = 0;
  byte_2D03B4A = byte_2D03B4A & 0x9F | 0x20;
  qword_2D03B60 = (__int64)"Disable memory promotion in LICM pass";
  sub_2218140(&qword_2D03B40);
  __cxa_atexit(sub_200E190, &qword_2D03B40, &off_2B25620);
  v2 = j__strlen("Enable control flow (and PHI) hoisting in LICM");
  sub_200F820(&qword_2D03A80, 0, 0);
  si128 = _mm_load_si128(v23);
  word_2D03B08 = 0;
  xmmword_2D03B28 = (__int128)si128;
  qword_2D03B00 = (__int64)off_2C714E8;
  qword_2D03A80 = (__int64)off_2C75848;
  qword_2D03B10 = (__int64)off_2BEAB08;
  byte_2D03AF8 = 0;
  v4 = j__strlen("licm-control-flow-hoisting");
  sub_2217250(&qword_2D03A80, "licm-control-flow-hoisting", v4);
  word_2D03B08 = 256;
  qword_2D03AA8 = v2;
  byte_2D03AF8 = 0;
  byte_2D03A8A = byte_2D03A8A & 0x9F | 0x20;
  qword_2D03AA0 = (__int64)"Enable control flow (and PHI) hoisting in LICM";
  sub_2218140(&qword_2D03A80);
  __cxa_atexit(sub_200E190, &qword_2D03A80, &off_2B25620);
  v5 = j__strlen("Force thread model single in LICM pass");
  sub_200F820(&qword_2D039C0, 0, 0);
  v6 = _mm_load_si128(v23);
  qword_2D03A40 = (__int64)off_2C714E8;
  word_2D03A48 = 0;
  xmmword_2D03A68 = (__int128)v6;
  qword_2D039C0 = (__int64)off_2C75848;
  qword_2D03A50 = (__int64)off_2BEAB08;
  byte_2D03A38 = 0;
  v7 = j__strlen("licm-force-thread-model-single");
  sub_2217250(&qword_2D039C0, "licm-force-thread-model-single", v7);
  word_2D03A48 = 256;
  qword_2D039E8 = v5;
  byte_2D03A38 = 0;
  byte_2D039CA = byte_2D039CA & 0x9F | 0x20;
  qword_2D039E0 = (__int64)"Force thread model single in LICM pass";
  sub_2218140(&qword_2D039C0);
  __cxa_atexit(sub_200E190, &qword_2D039C0, &off_2B25620);
  v8 = j__strlen("Max num uses visited for identifying load invariance in loop using invariant start (default = 8)");
  sub_200F820(&qword_2D03900, 0, 0);
  dword_2D03978 = 0;
  dword_2D03988 = 0;
  v23[0] = (__m128i)_mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2D039A8 = (__int128)v23[0];
  qword_2D03980 = (__int64)off_2C712D0;
  qword_2D03900 = (__int64)off_2C75710;
  qword_2D03990 = (__int64)off_2BEAB98;
  byte_2D0398C = 0;
  v9 = j__strlen("licm-max-num-uses-traversed");
  sub_2217250(&qword_2D03900, "licm-max-num-uses-traversed", v9);
  qword_2D03928 = v8;
  byte_2D0398C = 1;
  dword_2D03978 = 8;
  dword_2D03988 = 8;
  byte_2D0390A = byte_2D0390A & 0x9F | 0x20;
  qword_2D03920 = (__int64)"Max num uses visited for identifying load invariance in loop using invariant start (default = 8)";
  sub_2218140(&qword_2D03900);
  __cxa_atexit(sub_1FED260, &qword_2D03900, &off_2B25620);
  v10 = j__strlen(
          "Set upper limit for the number of transformations performed during a single round of hoisting the reassociated expressions.");
  sub_200F820(&qword_2D03840, 0, 0);
  v11 = _mm_load_si128(v23);
  qword_2D038C0 = (__int64)off_2C712D0;
  qword_2D03840 = (__int64)off_2C75710;
  xmmword_2D038E8 = (__int128)v11;
  qword_2D038D0 = (__int64)off_2BEAB98;
  dword_2D038B8 = 0;
  dword_2D038C8 = 0;
  byte_2D038CC = 0;
  v12 = j__strlen("licm-max-num-fp-reassociations");
  sub_2217250(&qword_2D03840, "licm-max-num-fp-reassociations", v12);
  qword_2D03860 = (__int64)"Set upper limit for the number of transformations performed during a single round of hoisting"
                           " the reassociated expressions.";
  qword_2D03868 = v10;
  dword_2D038B8 = 5;
  byte_2D038CC = 1;
  byte_2D0384A = byte_2D0384A & 0x9F | 0x20;
  dword_2D038C8 = 5;
  sub_2218140(&qword_2D03840);
  __cxa_atexit(sub_1FED260, &qword_2D03840, &off_2B25620);
  v13 = j__strlen(
          "Set upper limit for the number of transformations performed during a single round of hoisting the reassociated expressions.");
  sub_200F820(&qword_2D03780, 0, 0);
  v14 = _mm_load_si128(v23);
  qword_2D03800 = (__int64)off_2C712D0;
  qword_2D03780 = (__int64)off_2C75710;
  xmmword_2D03828 = (__int128)v14;
  qword_2D03810 = (__int64)off_2BEAB98;
  dword_2D037F8 = 0;
  dword_2D03808 = 0;
  byte_2D0380C = 0;
  v15 = j__strlen("licm-max-num-int-reassociations");
  sub_2217250(&qword_2D03780, "licm-max-num-int-reassociations", v15);
  qword_2D037A0 = (__int64)"Set upper limit for the number of transformations performed during a single round of hoisting"
                           " the reassociated expressions.";
  qword_2D037A8 = v13;
  dword_2D037F8 = 5;
  byte_2D0380C = 1;
  byte_2D0378A = byte_2D0378A & 0x9F | 0x20;
  dword_2D03808 = 5;
  sub_2218140(&qword_2D03780);
  __cxa_atexit(sub_1FED260, &qword_2D03780, &off_2B25620);
  v16 = j__strlen(
          "Enable imprecision in LICM in pathological cases, in exchange for faster compile. Caps the MemorySSA clobbering calls.");
  sub_200F820(qword_2D036C0, 0, 0);
  v17 = _mm_load_si128(v23);
  qword_2D036C0[0] = off_2C75710;
  qword_2D036C0[16] = off_2C712D0;
  qword_2D036C0[18] = off_2BEAB98;
  LODWORD(qword_2D036C0[15]) = 0;
  LODWORD(qword_2D036C0[17]) = 0;
  BYTE4(qword_2D036C0[17]) = 0;
  *(__m128i *)&qword_2D036C0[21] = v17;
  v18 = j__strlen("licm-mssa-optimization-cap");
  sub_2217250(qword_2D036C0, "licm-mssa-optimization-cap", v18);
  qword_2D036C0[5] = v16;
  LODWORD(qword_2D036C0[15]) = 100;
  BYTE4(qword_2D036C0[17]) = 1;
  LODWORD(qword_2D036C0[17]) = 100;
  BYTE2(qword_2D036C0[1]) = BYTE2(qword_2D036C0[1]) & 0x9F | 0x20;
  qword_2D036C0[4] = "Enable imprecision in LICM in pathological cases, in exchange for faster compile. Caps the MemorySS"
                     "A clobbering calls.";
  sub_2218140(qword_2D036C0);
  __cxa_atexit(sub_1FED260, qword_2D036C0, &off_2B25620);
  v19 = j__strlen(
          "[LICM & MemorySSA] When MSSA in LICM is disabled, this has no effect. When MSSA in LICM is enabled, then this "
          "is the maximum number of accesses allowed to be present in a loop in order to enable memory promotion.");
  sub_200F820(qword_2D03600, 0, 0);
  v20 = _mm_load_si128(v23);
  qword_2D03600[0] = off_2C75710;
  qword_2D03600[16] = off_2C712D0;
  qword_2D03600[18] = off_2BEAB98;
  LODWORD(qword_2D03600[15]) = 0;
  LODWORD(qword_2D03600[17]) = 0;
  BYTE4(qword_2D03600[17]) = 0;
  *(__m128i *)&qword_2D03600[21] = v20;
  v21 = j__strlen("licm-mssa-max-acc-promotion");
  sub_2217250(qword_2D03600, "licm-mssa-max-acc-promotion", v21);
  qword_2D03600[5] = v19;
  LODWORD(qword_2D03600[15]) = 250;
  BYTE4(qword_2D03600[17]) = 1;
  LODWORD(qword_2D03600[17]) = 250;
  BYTE2(qword_2D03600[1]) = BYTE2(qword_2D03600[1]) & 0x9F | 0x20;
  qword_2D03600[4] = "[LICM & MemorySSA] When MSSA in LICM is disabled, this has no effect. When MSSA in LICM is enabled,"
                     " then this is the maximum number of accesses allowed to be present in a loop in order to enable memory promotion.";
  sub_2218140(qword_2D03600);
  return __cxa_atexit(sub_1FED260, qword_2D03600, &off_2B25620);
}
