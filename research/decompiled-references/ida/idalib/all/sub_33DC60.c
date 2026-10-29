int sub_33DC60()
{
  size_t v0; // rax
  __m128i si128; // xmm0
  size_t v2; // rax
  __m128i v3; // xmm0
  size_t v4; // rax
  __m128i v5; // xmm0
  size_t v6; // rax
  __m128i v7; // xmm0
  size_t v8; // rax
  __m128i v9; // xmm0
  size_t v10; // rax
  size_t v11; // r14
  size_t v12; // rax
  size_t v13; // r14
  __m128i v14; // xmm1
  size_t v15; // rax
  size_t v16; // r14
  __m128i v17; // xmm1
  size_t v18; // rax
  size_t v19; // r14
  __m128i v20; // xmm1
  size_t v21; // rax
  __m128i v23[3]; // [rsp+0h] [rbp-38h] BYREF

  sub_200F820(&qword_2D020E0, 0, 0);
  word_2D02168 = 0;
  byte_2D02158 = 0;
  v23[0] = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  xmmword_2D02188 = (__int128)v23[0];
  qword_2D02160 = (__int64)off_2C714E8;
  qword_2D020E0 = (__int64)off_2C75848;
  qword_2D02170 = (__int64)off_2BEAB08;
  v0 = j__strlen("enable-pre");
  sub_2217250(&qword_2D020E0, "enable-pre", v0);
  word_2D02168 = 257;
  byte_2D02158 = 1;
  byte_2D020EA = byte_2D020EA & 0x9F | 0x20;
  sub_2218140(&qword_2D020E0);
  __cxa_atexit(sub_200E190, &qword_2D020E0, &off_2B25620);
  sub_200F820(&qword_2D02020, 0, 0);
  si128 = _mm_load_si128(v23);
  word_2D020A8 = 0;
  xmmword_2D020C8 = (__int128)si128;
  qword_2D020A0 = (__int64)off_2C714E8;
  qword_2D02020 = (__int64)off_2C75848;
  qword_2D020B0 = (__int64)off_2BEAB08;
  byte_2D02098 = 0;
  v2 = j__strlen("enable-load-pre");
  sub_2217250(&qword_2D02020, "enable-load-pre", v2);
  byte_2D02098 = 1;
  word_2D020A8 = 257;
  sub_2218140(&qword_2D02020);
  __cxa_atexit(sub_200E190, &qword_2D02020, &off_2B25620);
  sub_200F820(&qword_2D01F60, 0, 0);
  v3 = _mm_load_si128(v23);
  word_2D01FE8 = 0;
  xmmword_2D02008 = (__int128)v3;
  qword_2D01FE0 = (__int64)off_2C714E8;
  qword_2D01F60 = (__int64)off_2C75848;
  qword_2D01FF0 = (__int64)off_2BEAB08;
  byte_2D01FD8 = 0;
  v4 = j__strlen("enable-load-in-loop-pre");
  sub_2217250(&qword_2D01F60, "enable-load-in-loop-pre", v4);
  byte_2D01FD8 = 1;
  word_2D01FE8 = 257;
  sub_2218140(&qword_2D01F60);
  __cxa_atexit(sub_200E190, &qword_2D01F60, &off_2B25620);
  sub_200F820(&qword_2D01EA0, 0, 0);
  v5 = _mm_load_si128(v23);
  word_2D01F28 = 0;
  xmmword_2D01F48 = (__int128)v5;
  qword_2D01F20 = (__int64)off_2C714E8;
  qword_2D01EA0 = (__int64)off_2C75848;
  qword_2D01F30 = (__int64)off_2BEAB08;
  byte_2D01F18 = 0;
  v6 = j__strlen("enable-split-backedge-in-load-pre");
  sub_2217250(&qword_2D01EA0, "enable-split-backedge-in-load-pre", v6);
  byte_2D01F18 = 0;
  word_2D01F28 = 256;
  sub_2218140(&qword_2D01EA0);
  __cxa_atexit(sub_200E190, &qword_2D01EA0, &off_2B25620);
  sub_200F820(&qword_2D01DE0, 0, 0);
  v7 = _mm_load_si128(v23);
  word_2D01E68 = 0;
  xmmword_2D01E88 = (__int128)v7;
  qword_2D01E60 = (__int64)off_2C714E8;
  qword_2D01DE0 = (__int64)off_2C75848;
  qword_2D01E70 = (__int64)off_2BEAB08;
  byte_2D01E58 = 0;
  v8 = j__strlen("enable-gvn-memdep");
  sub_2217250(&qword_2D01DE0, "enable-gvn-memdep", v8);
  word_2D01E68 = 257;
  byte_2D01E58 = 1;
  sub_2218140(&qword_2D01DE0);
  __cxa_atexit(sub_200E190, &qword_2D01DE0, &off_2B25620);
  sub_200F820(&qword_2D01D20, 0, 0);
  v9 = _mm_load_si128(v23);
  qword_2D01DA0 = (__int64)off_2C714E8;
  xmmword_2D01DC8 = (__int128)v9;
  qword_2D01D20 = (__int64)off_2C75848;
  qword_2D01DB0 = (__int64)off_2BEAB08;
  byte_2D01D98 = 0;
  word_2D01DA8 = 0;
  v10 = j__strlen("enable-gvn-memoryssa");
  sub_2217250(&qword_2D01D20, "enable-gvn-memoryssa", v10);
  byte_2D01D98 = 0;
  word_2D01DA8 = 256;
  sub_2218140(&qword_2D01D20);
  __cxa_atexit(sub_200E190, &qword_2D01D20, &off_2B25620);
  v11 = j__strlen("Max number of dependences to attempt Load PRE (default = 100)");
  sub_200F820(&qword_2D01C60, 0, 0);
  dword_2D01CD8 = 0;
  dword_2D01CE8 = 0;
  v23[0] = (__m128i)_mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2D01D08 = (__int128)v23[0];
  qword_2D01CE0 = (__int64)off_2C712D0;
  qword_2D01C60 = (__int64)off_2C75710;
  qword_2D01CF0 = (__int64)off_2BEAB98;
  byte_2D01CEC = 0;
  v12 = j__strlen("gvn-max-num-deps");
  sub_2217250(&qword_2D01C60, "gvn-max-num-deps", v12);
  qword_2D01C88 = v11;
  dword_2D01CD8 = 100;
  byte_2D01CEC = 1;
  dword_2D01CE8 = 100;
  byte_2D01C6A = byte_2D01C6A & 0x9F | 0x20;
  qword_2D01C80 = (__int64)"Max number of dependences to attempt Load PRE (default = 100)";
  sub_2218140(&qword_2D01C60);
  __cxa_atexit(sub_1FED260, &qword_2D01C60, &off_2B25620);
  v13 = j__strlen(
          "Max number of blocks we're willing to speculate on (and recurse into) when deducing if a value is fully availa"
          "ble or not in GVN (default = 600)");
  sub_200F820(&qword_2D01BA0, 0, 0);
  v14 = _mm_load_si128(v23);
  qword_2D01C20 = (__int64)off_2C712D0;
  qword_2D01BA0 = (__int64)off_2C75710;
  xmmword_2D01C48 = (__int128)v14;
  qword_2D01C30 = (__int64)off_2BEAB98;
  dword_2D01C18 = 0;
  dword_2D01C28 = 0;
  byte_2D01C2C = 0;
  v15 = j__strlen("gvn-max-block-speculations");
  sub_2217250(&qword_2D01BA0, "gvn-max-block-speculations", v15);
  qword_2D01BC8 = v13;
  dword_2D01C18 = 600;
  byte_2D01C2C = 1;
  dword_2D01C28 = 600;
  byte_2D01BAA = byte_2D01BAA & 0x9F | 0x20;
  qword_2D01BC0 = (__int64)"Max number of blocks we're willing to speculate on (and recurse into) when deducing if a valu"
                           "e is fully available or not in GVN (default = 600)";
  sub_2218140(&qword_2D01BA0);
  __cxa_atexit(sub_1FED260, &qword_2D01BA0, &off_2B25620);
  v16 = j__strlen("Max number of visited instructions when trying to find dominating value of select dependency (default = 100)");
  sub_200F820(&qword_2D01AE0, 0, 0);
  v17 = _mm_load_si128(v23);
  qword_2D01B60 = (__int64)off_2C712D0;
  qword_2D01AE0 = (__int64)off_2C75710;
  xmmword_2D01B88 = (__int128)v17;
  qword_2D01B70 = (__int64)off_2BEAB98;
  dword_2D01B58 = 0;
  dword_2D01B68 = 0;
  byte_2D01B6C = 0;
  v18 = j__strlen("gvn-max-num-visited-insts");
  sub_2217250(&qword_2D01AE0, "gvn-max-num-visited-insts", v18);
  qword_2D01B08 = v16;
  dword_2D01B58 = 100;
  byte_2D01B6C = 1;
  dword_2D01B68 = 100;
  byte_2D01AEA = byte_2D01AEA & 0x9F | 0x20;
  qword_2D01B00 = (__int64)"Max number of visited instructions when trying to find dominating value of select dependency (default = 100)";
  sub_2218140(&qword_2D01AE0);
  __cxa_atexit(sub_1FED260, &qword_2D01AE0, &off_2B25620);
  v19 = j__strlen("Max number of instructions to scan in each basic block in GVN (default = 100)");
  sub_200F820(&qword_2D01A20, 0, 0);
  v20 = _mm_load_si128(v23);
  qword_2D01AA0 = (__int64)off_2C712D0;
  qword_2D01A20 = (__int64)off_2C75710;
  xmmword_2D01AC8 = (__int128)v20;
  qword_2D01AB0 = (__int64)off_2BEAB98;
  dword_2D01A98 = 0;
  dword_2D01AA8 = 0;
  byte_2D01AAC = 0;
  v21 = j__strlen("gvn-max-num-insns");
  sub_2217250(&qword_2D01A20, "gvn-max-num-insns", v21);
  qword_2D01A48 = v19;
  dword_2D01A98 = 100;
  byte_2D01AAC = 1;
  dword_2D01AA8 = 100;
  byte_2D01A2A = byte_2D01A2A & 0x9F | 0x20;
  qword_2D01A40 = (__int64)"Max number of instructions to scan in each basic block in GVN (default = 100)";
  sub_2218140(&qword_2D01A20);
  return __cxa_atexit(sub_1FED260, &qword_2D01A20, &off_2B25620);
}
