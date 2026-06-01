int sub_33A8A0()
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

  sub_1FEBAE0(&qword_2CD81C0, 0, 0);
  word_2CD8248 = 0;
  byte_2CD8238 = 0;
  v23[0] = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CD8268 = (__int128)v23[0];
  qword_2CD8240 = (__int64)off_2C474E8;
  qword_2CD81C0 = (__int64)off_2C4B848;
  qword_2CD8250 = (__int64)off_2BC0B68;
  v0 = j__strlen("enable-pre");
  sub_21F3510(&qword_2CD81C0, "enable-pre", v0);
  word_2CD8248 = 257;
  byte_2CD8238 = 1;
  byte_2CD81CA = byte_2CD81CA & 0x9F | 0x20;
  sub_21F4400(&qword_2CD81C0);
  __cxa_atexit(sub_1FEA450, &qword_2CD81C0, &off_2AFC540);
  sub_1FEBAE0(&qword_2CD8100, 0, 0);
  si128 = _mm_load_si128(v23);
  word_2CD8188 = 0;
  xmmword_2CD81A8 = (__int128)si128;
  qword_2CD8180 = (__int64)off_2C474E8;
  qword_2CD8100 = (__int64)off_2C4B848;
  qword_2CD8190 = (__int64)off_2BC0B68;
  byte_2CD8178 = 0;
  v2 = j__strlen("enable-load-pre");
  sub_21F3510(&qword_2CD8100, "enable-load-pre", v2);
  byte_2CD8178 = 1;
  word_2CD8188 = 257;
  sub_21F4400(&qword_2CD8100);
  __cxa_atexit(sub_1FEA450, &qword_2CD8100, &off_2AFC540);
  sub_1FEBAE0(&qword_2CD8040, 0, 0);
  v3 = _mm_load_si128(v23);
  word_2CD80C8 = 0;
  xmmword_2CD80E8 = (__int128)v3;
  qword_2CD80C0 = (__int64)off_2C474E8;
  qword_2CD8040 = (__int64)off_2C4B848;
  qword_2CD80D0 = (__int64)off_2BC0B68;
  byte_2CD80B8 = 0;
  v4 = j__strlen("enable-load-in-loop-pre");
  sub_21F3510(&qword_2CD8040, "enable-load-in-loop-pre", v4);
  byte_2CD80B8 = 1;
  word_2CD80C8 = 257;
  sub_21F4400(&qword_2CD8040);
  __cxa_atexit(sub_1FEA450, &qword_2CD8040, &off_2AFC540);
  sub_1FEBAE0(&qword_2CD7F80, 0, 0);
  v5 = _mm_load_si128(v23);
  word_2CD8008 = 0;
  xmmword_2CD8028 = (__int128)v5;
  qword_2CD8000 = (__int64)off_2C474E8;
  qword_2CD7F80 = (__int64)off_2C4B848;
  qword_2CD8010 = (__int64)off_2BC0B68;
  byte_2CD7FF8 = 0;
  v6 = j__strlen("enable-split-backedge-in-load-pre");
  sub_21F3510(&qword_2CD7F80, "enable-split-backedge-in-load-pre", v6);
  byte_2CD7FF8 = 0;
  word_2CD8008 = 256;
  sub_21F4400(&qword_2CD7F80);
  __cxa_atexit(sub_1FEA450, &qword_2CD7F80, &off_2AFC540);
  sub_1FEBAE0(&qword_2CD7EC0, 0, 0);
  v7 = _mm_load_si128(v23);
  word_2CD7F48 = 0;
  xmmword_2CD7F68 = (__int128)v7;
  qword_2CD7F40 = (__int64)off_2C474E8;
  qword_2CD7EC0 = (__int64)off_2C4B848;
  qword_2CD7F50 = (__int64)off_2BC0B68;
  byte_2CD7F38 = 0;
  v8 = j__strlen("enable-gvn-memdep");
  sub_21F3510(&qword_2CD7EC0, "enable-gvn-memdep", v8);
  word_2CD7F48 = 257;
  byte_2CD7F38 = 1;
  sub_21F4400(&qword_2CD7EC0);
  __cxa_atexit(sub_1FEA450, &qword_2CD7EC0, &off_2AFC540);
  sub_1FEBAE0(&qword_2CD7E00, 0, 0);
  v9 = _mm_load_si128(v23);
  qword_2CD7E80 = (__int64)off_2C474E8;
  xmmword_2CD7EA8 = (__int128)v9;
  qword_2CD7E00 = (__int64)off_2C4B848;
  qword_2CD7E90 = (__int64)off_2BC0B68;
  byte_2CD7E78 = 0;
  word_2CD7E88 = 0;
  v10 = j__strlen("enable-gvn-memoryssa");
  sub_21F3510(&qword_2CD7E00, "enable-gvn-memoryssa", v10);
  byte_2CD7E78 = 0;
  word_2CD7E88 = 256;
  sub_21F4400(&qword_2CD7E00);
  __cxa_atexit(sub_1FEA450, &qword_2CD7E00, &off_2AFC540);
  v11 = j__strlen("Max number of dependences to attempt Load PRE (default = 100)");
  sub_1FEBAE0(&qword_2CD7D40, 0, 0);
  dword_2CD7DB8 = 0;
  dword_2CD7DC8 = 0;
  v23[0] = (__m128i)_mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CD7DE8 = (__int128)v23[0];
  qword_2CD7DC0 = (__int64)off_2C472D0;
  qword_2CD7D40 = (__int64)off_2C4B710;
  qword_2CD7DD0 = (__int64)off_2BC0BF8;
  byte_2CD7DCC = 0;
  v12 = j__strlen("gvn-max-num-deps");
  sub_21F3510(&qword_2CD7D40, "gvn-max-num-deps", v12);
  qword_2CD7D68 = v11;
  dword_2CD7DB8 = 100;
  byte_2CD7DCC = 1;
  dword_2CD7DC8 = 100;
  byte_2CD7D4A = byte_2CD7D4A & 0x9F | 0x20;
  qword_2CD7D60 = (__int64)"Max number of dependences to attempt Load PRE (default = 100)";
  sub_21F4400(&qword_2CD7D40);
  __cxa_atexit(sub_1FC9520, &qword_2CD7D40, &off_2AFC540);
  v13 = j__strlen(
          "Max number of blocks we're willing to speculate on (and recurse into) when deducing if a value is fully availa"
          "ble or not in GVN (default = 600)");
  sub_1FEBAE0(&qword_2CD7C80, 0, 0);
  v14 = _mm_load_si128(v23);
  qword_2CD7D00 = (__int64)off_2C472D0;
  qword_2CD7C80 = (__int64)off_2C4B710;
  xmmword_2CD7D28 = (__int128)v14;
  qword_2CD7D10 = (__int64)off_2BC0BF8;
  dword_2CD7CF8 = 0;
  dword_2CD7D08 = 0;
  byte_2CD7D0C = 0;
  v15 = j__strlen("gvn-max-block-speculations");
  sub_21F3510(&qword_2CD7C80, "gvn-max-block-speculations", v15);
  qword_2CD7CA8 = v13;
  dword_2CD7CF8 = 600;
  byte_2CD7D0C = 1;
  dword_2CD7D08 = 600;
  byte_2CD7C8A = byte_2CD7C8A & 0x9F | 0x20;
  qword_2CD7CA0 = (__int64)"Max number of blocks we're willing to speculate on (and recurse into) when deducing if a valu"
                           "e is fully available or not in GVN (default = 600)";
  sub_21F4400(&qword_2CD7C80);
  __cxa_atexit(sub_1FC9520, &qword_2CD7C80, &off_2AFC540);
  v16 = j__strlen("Max number of visited instructions when trying to find dominating value of select dependency (default = 100)");
  sub_1FEBAE0(&qword_2CD7BC0, 0, 0);
  v17 = _mm_load_si128(v23);
  qword_2CD7C40 = (__int64)off_2C472D0;
  qword_2CD7BC0 = (__int64)off_2C4B710;
  xmmword_2CD7C68 = (__int128)v17;
  qword_2CD7C50 = (__int64)off_2BC0BF8;
  dword_2CD7C38 = 0;
  dword_2CD7C48 = 0;
  byte_2CD7C4C = 0;
  v18 = j__strlen("gvn-max-num-visited-insts");
  sub_21F3510(&qword_2CD7BC0, "gvn-max-num-visited-insts", v18);
  qword_2CD7BE8 = v16;
  dword_2CD7C38 = 100;
  byte_2CD7C4C = 1;
  dword_2CD7C48 = 100;
  byte_2CD7BCA = byte_2CD7BCA & 0x9F | 0x20;
  qword_2CD7BE0 = (__int64)"Max number of visited instructions when trying to find dominating value of select dependency (default = 100)";
  sub_21F4400(&qword_2CD7BC0);
  __cxa_atexit(sub_1FC9520, &qword_2CD7BC0, &off_2AFC540);
  v19 = j__strlen("Max number of instructions to scan in each basic block in GVN (default = 100)");
  sub_1FEBAE0(&qword_2CD7B00, 0, 0);
  v20 = _mm_load_si128(v23);
  qword_2CD7B80 = (__int64)off_2C472D0;
  qword_2CD7B00 = (__int64)off_2C4B710;
  xmmword_2CD7BA8 = (__int128)v20;
  qword_2CD7B90 = (__int64)off_2BC0BF8;
  dword_2CD7B78 = 0;
  dword_2CD7B88 = 0;
  byte_2CD7B8C = 0;
  v21 = j__strlen("gvn-max-num-insns");
  sub_21F3510(&qword_2CD7B00, "gvn-max-num-insns", v21);
  qword_2CD7B28 = v19;
  dword_2CD7B78 = 100;
  byte_2CD7B8C = 1;
  dword_2CD7B88 = 100;
  byte_2CD7B0A = byte_2CD7B0A & 0x9F | 0x20;
  qword_2CD7B20 = (__int64)"Max number of instructions to scan in each basic block in GVN (default = 100)";
  sub_21F4400(&qword_2CD7B00);
  return __cxa_atexit(sub_1FC9520, &qword_2CD7B00, &off_2AFC540);
}

