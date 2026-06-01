int sub_33DF00()
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
  sub_1FEBAE0(&qword_2CD9C20, 0, 0);
  word_2CD9CA8 = 0;
  byte_2CD9C98 = 0;
  v23[0] = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CD9CC8 = (__int128)v23[0];
  qword_2CD9CA0 = (__int64)off_2C474E8;
  qword_2CD9C20 = (__int64)off_2C4B848;
  qword_2CD9CB0 = (__int64)off_2BC0B68;
  v1 = j__strlen("disable-licm-promotion");
  sub_21F3510(&qword_2CD9C20, "disable-licm-promotion", v1);
  word_2CD9CA8 = 256;
  qword_2CD9C48 = v0;
  byte_2CD9C98 = 0;
  byte_2CD9C2A = byte_2CD9C2A & 0x9F | 0x20;
  qword_2CD9C40 = (__int64)"Disable memory promotion in LICM pass";
  sub_21F4400(&qword_2CD9C20);
  __cxa_atexit(sub_1FEA450, &qword_2CD9C20, &off_2AFC540);
  v2 = j__strlen("Enable control flow (and PHI) hoisting in LICM");
  sub_1FEBAE0(&qword_2CD9B60, 0, 0);
  si128 = _mm_load_si128(v23);
  word_2CD9BE8 = 0;
  xmmword_2CD9C08 = (__int128)si128;
  qword_2CD9BE0 = (__int64)off_2C474E8;
  qword_2CD9B60 = (__int64)off_2C4B848;
  qword_2CD9BF0 = (__int64)off_2BC0B68;
  byte_2CD9BD8 = 0;
  v4 = j__strlen("licm-control-flow-hoisting");
  sub_21F3510(&qword_2CD9B60, "licm-control-flow-hoisting", v4);
  word_2CD9BE8 = 256;
  qword_2CD9B88 = v2;
  byte_2CD9BD8 = 0;
  byte_2CD9B6A = byte_2CD9B6A & 0x9F | 0x20;
  qword_2CD9B80 = (__int64)"Enable control flow (and PHI) hoisting in LICM";
  sub_21F4400(&qword_2CD9B60);
  __cxa_atexit(sub_1FEA450, &qword_2CD9B60, &off_2AFC540);
  v5 = j__strlen("Force thread model single in LICM pass");
  sub_1FEBAE0(&qword_2CD9AA0, 0, 0);
  v6 = _mm_load_si128(v23);
  qword_2CD9B20 = (__int64)off_2C474E8;
  word_2CD9B28 = 0;
  xmmword_2CD9B48 = (__int128)v6;
  qword_2CD9AA0 = (__int64)off_2C4B848;
  qword_2CD9B30 = (__int64)off_2BC0B68;
  byte_2CD9B18 = 0;
  v7 = j__strlen("licm-force-thread-model-single");
  sub_21F3510(&qword_2CD9AA0, "licm-force-thread-model-single", v7);
  word_2CD9B28 = 256;
  qword_2CD9AC8 = v5;
  byte_2CD9B18 = 0;
  byte_2CD9AAA = byte_2CD9AAA & 0x9F | 0x20;
  qword_2CD9AC0 = (__int64)"Force thread model single in LICM pass";
  sub_21F4400(&qword_2CD9AA0);
  __cxa_atexit(sub_1FEA450, &qword_2CD9AA0, &off_2AFC540);
  v8 = j__strlen("Max num uses visited for identifying load invariance in loop using invariant start (default = 8)");
  sub_1FEBAE0(&qword_2CD99E0, 0, 0);
  dword_2CD9A58 = 0;
  dword_2CD9A68 = 0;
  v23[0] = (__m128i)_mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CD9A88 = (__int128)v23[0];
  qword_2CD9A60 = (__int64)off_2C472D0;
  qword_2CD99E0 = (__int64)off_2C4B710;
  qword_2CD9A70 = (__int64)off_2BC0BF8;
  byte_2CD9A6C = 0;
  v9 = j__strlen("licm-max-num-uses-traversed");
  sub_21F3510(&qword_2CD99E0, "licm-max-num-uses-traversed", v9);
  qword_2CD9A08 = v8;
  byte_2CD9A6C = 1;
  dword_2CD9A58 = 8;
  dword_2CD9A68 = 8;
  byte_2CD99EA = byte_2CD99EA & 0x9F | 0x20;
  qword_2CD9A00 = (__int64)"Max num uses visited for identifying load invariance in loop using invariant start (default = 8)";
  sub_21F4400(&qword_2CD99E0);
  __cxa_atexit(sub_1FC9520, &qword_2CD99E0, &off_2AFC540);
  v10 = j__strlen(
          "Set upper limit for the number of transformations performed during a single round of hoisting the reassociated expressions.");
  sub_1FEBAE0(&qword_2CD9920, 0, 0);
  v11 = _mm_load_si128(v23);
  qword_2CD99A0 = (__int64)off_2C472D0;
  qword_2CD9920 = (__int64)off_2C4B710;
  xmmword_2CD99C8 = (__int128)v11;
  qword_2CD99B0 = (__int64)off_2BC0BF8;
  dword_2CD9998 = 0;
  dword_2CD99A8 = 0;
  byte_2CD99AC = 0;
  v12 = j__strlen("licm-max-num-fp-reassociations");
  sub_21F3510(&qword_2CD9920, "licm-max-num-fp-reassociations", v12);
  qword_2CD9940 = (__int64)"Set upper limit for the number of transformations performed during a single round of hoisting"
                           " the reassociated expressions.";
  qword_2CD9948 = v10;
  dword_2CD9998 = 5;
  byte_2CD99AC = 1;
  byte_2CD992A = byte_2CD992A & 0x9F | 0x20;
  dword_2CD99A8 = 5;
  sub_21F4400(&qword_2CD9920);
  __cxa_atexit(sub_1FC9520, &qword_2CD9920, &off_2AFC540);
  v13 = j__strlen(
          "Set upper limit for the number of transformations performed during a single round of hoisting the reassociated expressions.");
  sub_1FEBAE0(&qword_2CD9860, 0, 0);
  v14 = _mm_load_si128(v23);
  qword_2CD98E0 = (__int64)off_2C472D0;
  qword_2CD9860 = (__int64)off_2C4B710;
  xmmword_2CD9908 = (__int128)v14;
  qword_2CD98F0 = (__int64)off_2BC0BF8;
  dword_2CD98D8 = 0;
  dword_2CD98E8 = 0;
  byte_2CD98EC = 0;
  v15 = j__strlen("licm-max-num-int-reassociations");
  sub_21F3510(&qword_2CD9860, "licm-max-num-int-reassociations", v15);
  qword_2CD9880 = (__int64)"Set upper limit for the number of transformations performed during a single round of hoisting"
                           " the reassociated expressions.";
  qword_2CD9888 = v13;
  dword_2CD98D8 = 5;
  byte_2CD98EC = 1;
  byte_2CD986A = byte_2CD986A & 0x9F | 0x20;
  dword_2CD98E8 = 5;
  sub_21F4400(&qword_2CD9860);
  __cxa_atexit(sub_1FC9520, &qword_2CD9860, &off_2AFC540);
  v16 = j__strlen(
          "Enable imprecision in LICM in pathological cases, in exchange for faster compile. Caps the MemorySSA clobbering calls.");
  sub_1FEBAE0(qword_2CD97A0, 0, 0);
  v17 = _mm_load_si128(v23);
  qword_2CD97A0[0] = off_2C4B710;
  qword_2CD97A0[16] = off_2C472D0;
  qword_2CD97A0[18] = off_2BC0BF8;
  LODWORD(qword_2CD97A0[15]) = 0;
  LODWORD(qword_2CD97A0[17]) = 0;
  BYTE4(qword_2CD97A0[17]) = 0;
  *(__m128i *)&qword_2CD97A0[21] = v17;
  v18 = j__strlen("licm-mssa-optimization-cap");
  sub_21F3510(qword_2CD97A0, "licm-mssa-optimization-cap", v18);
  qword_2CD97A0[5] = v16;
  LODWORD(qword_2CD97A0[15]) = 100;
  BYTE4(qword_2CD97A0[17]) = 1;
  LODWORD(qword_2CD97A0[17]) = 100;
  BYTE2(qword_2CD97A0[1]) = BYTE2(qword_2CD97A0[1]) & 0x9F | 0x20;
  qword_2CD97A0[4] = "Enable imprecision in LICM in pathological cases, in exchange for faster compile. Caps the MemorySS"
                     "A clobbering calls.";
  sub_21F4400(qword_2CD97A0);
  __cxa_atexit(sub_1FC9520, qword_2CD97A0, &off_2AFC540);
  v19 = j__strlen(
          "[LICM & MemorySSA] When MSSA in LICM is disabled, this has no effect. When MSSA in LICM is enabled, then this "
          "is the maximum number of accesses allowed to be present in a loop in order to enable memory promotion.");
  sub_1FEBAE0(qword_2CD96E0, 0, 0);
  v20 = _mm_load_si128(v23);
  qword_2CD96E0[0] = off_2C4B710;
  qword_2CD96E0[16] = off_2C472D0;
  qword_2CD96E0[18] = off_2BC0BF8;
  LODWORD(qword_2CD96E0[15]) = 0;
  LODWORD(qword_2CD96E0[17]) = 0;
  BYTE4(qword_2CD96E0[17]) = 0;
  *(__m128i *)&qword_2CD96E0[21] = v20;
  v21 = j__strlen("licm-mssa-max-acc-promotion");
  sub_21F3510(qword_2CD96E0, "licm-mssa-max-acc-promotion", v21);
  qword_2CD96E0[5] = v19;
  LODWORD(qword_2CD96E0[15]) = 250;
  BYTE4(qword_2CD96E0[17]) = 1;
  LODWORD(qword_2CD96E0[17]) = 250;
  BYTE2(qword_2CD96E0[1]) = BYTE2(qword_2CD96E0[1]) & 0x9F | 0x20;
  qword_2CD96E0[4] = "[LICM & MemorySSA] When MSSA in LICM is disabled, this has no effect. When MSSA in LICM is enabled,"
                     " then this is the maximum number of accesses allowed to be present in a loop in order to enable memory promotion.";
  sub_21F4400(qword_2CD96E0);
  return __cxa_atexit(sub_1FC9520, qword_2CD96E0, &off_2AFC540);
}

