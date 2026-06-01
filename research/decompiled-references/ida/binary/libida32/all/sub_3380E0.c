int sub_3380E0()
{
  size_t v0; // r12
  size_t v1; // rax
  size_t v2; // rbp
  size_t v3; // rax
  size_t v4; // rbp
  __m128i v5; // xmm1
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  __m128i si128; // xmm0
  size_t v10; // rax
  __m128i v11; // xmm0
  size_t v12; // rax
  __m128i v13; // xmm0
  size_t v14; // rax
  __m128i v15; // xmm0
  size_t v16; // rax
  size_t v17; // rbp
  __m128i v18; // xmm1
  size_t v19; // rax
  size_t v20; // rbp
  __m128i v21; // xmm1
  size_t v22; // rax
  __m128 v24; // [rsp+0h] [rbp-88h] BYREF
  __m128i v25; // [rsp+10h] [rbp-78h] BYREF
  size_t v26; // [rsp+28h] [rbp-60h]
  int v27; // [rsp+30h] [rbp-58h] BYREF
  int v28; // [rsp+34h] [rbp-54h] BYREF
  int *v29; // [rsp+38h] [rbp-50h] BYREF
  const char *v30; // [rsp+40h] [rbp-48h] BYREF
  size_t v31; // [rsp+48h] [rbp-40h]

  v0 = j__strlen("Controls which MemoryDefs are eliminated.");
  v1 = j__strlen("dse-memoryssa");
  sub_21C54A0("dse-memoryssa", v1, "Controls which MemoryDefs are eliminated.", v0);
  v2 = j__strlen("Enable partial-overwrite tracking in DSE");
  sub_1FEBAE0(&qword_2CD72C0, 0, 0);
  word_2CD7348 = 0;
  byte_2CD7338 = 0;
  v25 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CD7368 = (__int128)v25;
  qword_2CD7340 = (__int64)off_2C474E8;
  qword_2CD72C0 = (__int64)off_2C4B848;
  qword_2CD7350 = (__int64)off_2BC0B68;
  v3 = j__strlen("enable-dse-partial-overwrite-tracking");
  sub_21F3510(&qword_2CD72C0, "enable-dse-partial-overwrite-tracking", v3);
  word_2CD7348 = 257;
  qword_2CD72E8 = v2;
  byte_2CD7338 = 1;
  byte_2CD72CA = byte_2CD72CA & 0x9F | 0x20;
  qword_2CD72E0 = (__int64)"Enable partial-overwrite tracking in DSE";
  sub_21F4400(&qword_2CD72C0);
  __cxa_atexit(sub_1FEA450, &qword_2CD72C0, &off_2AFC540);
  v4 = j__strlen("Enable partial store merging in DSE");
  sub_1FEBAE0(&qword_2CD7200, 0, 0);
  v5 = _mm_load_si128(&v25);
  word_2CD7288 = 0;
  xmmword_2CD72A8 = (__int128)v5;
  qword_2CD7280 = (__int64)off_2C474E8;
  qword_2CD7200 = (__int64)off_2C4B848;
  qword_2CD7290 = (__int64)off_2BC0B68;
  byte_2CD7278 = 0;
  v6 = j__strlen("enable-dse-partial-store-merging");
  sub_21F3510(&qword_2CD7200, "enable-dse-partial-store-merging", v6);
  word_2CD7288 = 257;
  qword_2CD7228 = v4;
  byte_2CD7278 = 1;
  byte_2CD720A = byte_2CD720A & 0x9F | 0x20;
  qword_2CD7220 = (__int64)"Enable partial store merging in DSE";
  sub_21F4400(&qword_2CD7200);
  __cxa_atexit(sub_1FEA450, &qword_2CD7200, &off_2AFC540);
  v7 = j__strlen("The number of memory instructions to scan for dead store elimination (default = 150)");
  v29 = &v27;
  v30 = "The number of memory instructions to scan for dead store elimination (default = 150)";
  v31 = v7;
  v28 = 1;
  v27 = 150;
  sub_21C53B0(&unk_2CD7140, "dse-memoryssa-scanlimit", &v29, &v28, &v30);
  __cxa_atexit(sub_1FC9520, &unk_2CD7140, &off_2AFC540);
  v31 = j__strlen("The maximum number of steps while walking upwards to find MemoryDefs that may be killed (default = 90)");
  v30 = "The maximum number of steps while walking upwards to find MemoryDefs that may be killed (default = 90)";
  v29 = &v27;
  v28 = 1;
  v27 = 90;
  sub_21C53B0(&unk_2CD7080, "dse-memoryssa-walklimit", &v29, &v28, &v30);
  __cxa_atexit(sub_1FC9520, &unk_2CD7080, &off_2AFC540);
  v26 = j__strlen("The maximum number candidates that only partially overwrite the killing MemoryDef to consider (default = 5)");
  sub_1FEBAE0(&qword_2CD6FC0, 0, 0);
  dword_2CD7038 = 0;
  dword_2CD7048 = 0;
  v24 = _mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CD7068 = (__int128)v24;
  qword_2CD7040 = (__int64)off_2C472D0;
  qword_2CD6FC0 = (__int64)off_2C4B710;
  qword_2CD7050 = (__int64)off_2BC0BF8;
  byte_2CD704C = 0;
  v8 = j__strlen("dse-memoryssa-partial-store-limit");
  sub_21F3510(&qword_2CD6FC0, "dse-memoryssa-partial-store-limit", v8);
  dword_2CD7038 = 5;
  qword_2CD6FE8 = v26;
  byte_2CD704C = 1;
  byte_2CD6FCA = byte_2CD6FCA & 0x9F | 0x20;
  qword_2CD6FE0 = (__int64)"The maximum number candidates that only partially overwrite the killing MemoryDef to consider (default = 5)";
  dword_2CD7048 = 5;
  sub_21F4400(&qword_2CD6FC0);
  __cxa_atexit(sub_1FC9520, &qword_2CD6FC0, &off_2AFC540);
  v26 = j__strlen(
          "The number of MemoryDefs we consider as candidates to eliminated other stores per basic block (default = 5000)");
  sub_1FEBAE0(&qword_2CD6F00, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v24);
  qword_2CD6F80 = (__int64)off_2C472D0;
  qword_2CD6F00 = (__int64)off_2C4B710;
  xmmword_2CD6FA8 = (__int128)si128;
  qword_2CD6F90 = (__int64)off_2BC0BF8;
  dword_2CD6F78 = 0;
  dword_2CD6F88 = 0;
  byte_2CD6F8C = 0;
  v10 = j__strlen("dse-memoryssa-defs-per-block-limit");
  sub_21F3510(&qword_2CD6F00, "dse-memoryssa-defs-per-block-limit", v10);
  dword_2CD6F78 = 5000;
  qword_2CD6F28 = v26;
  byte_2CD6F8C = 1;
  byte_2CD6F0A = byte_2CD6F0A & 0x9F | 0x20;
  qword_2CD6F20 = (__int64)"The number of MemoryDefs we consider as candidates to eliminated other stores per basic block"
                           " (default = 5000)";
  dword_2CD6F88 = 5000;
  sub_21F4400(&qword_2CD6F00);
  __cxa_atexit(sub_1FC9520, &qword_2CD6F00, &off_2AFC540);
  v26 = j__strlen("The cost of a step in the same basic block as the killing MemoryDef(default = 1)");
  sub_1FEBAE0(&qword_2CD6E40, 0, 0);
  v11 = _mm_load_si128((const __m128i *)&v24);
  qword_2CD6EC0 = (__int64)off_2C472D0;
  qword_2CD6E40 = (__int64)off_2C4B710;
  xmmword_2CD6EE8 = (__int128)v11;
  qword_2CD6ED0 = (__int64)off_2BC0BF8;
  dword_2CD6EB8 = 0;
  dword_2CD6EC8 = 0;
  byte_2CD6ECC = 0;
  v12 = j__strlen("dse-memoryssa-samebb-cost");
  sub_21F3510(&qword_2CD6E40, "dse-memoryssa-samebb-cost", v12);
  dword_2CD6EB8 = 1;
  qword_2CD6E68 = v26;
  byte_2CD6ECC = 1;
  byte_2CD6E4A = byte_2CD6E4A & 0x9F | 0x20;
  qword_2CD6E60 = (__int64)"The cost of a step in the same basic block as the killing MemoryDef(default = 1)";
  dword_2CD6EC8 = 1;
  sub_21F4400(&qword_2CD6E40);
  __cxa_atexit(sub_1FC9520, &qword_2CD6E40, &off_2AFC540);
  v26 = j__strlen("The cost of a step in a different basic block than the killing MemoryDef(default = 5)");
  sub_1FEBAE0(&qword_2CD6D80, 0, 0);
  v13 = _mm_load_si128((const __m128i *)&v24);
  qword_2CD6E00 = (__int64)off_2C472D0;
  qword_2CD6D80 = (__int64)off_2C4B710;
  xmmword_2CD6E28 = (__int128)v13;
  qword_2CD6E10 = (__int64)off_2BC0BF8;
  dword_2CD6DF8 = 0;
  dword_2CD6E08 = 0;
  byte_2CD6E0C = 0;
  v14 = j__strlen("dse-memoryssa-otherbb-cost");
  sub_21F3510(&qword_2CD6D80, "dse-memoryssa-otherbb-cost", v14);
  dword_2CD6DF8 = 5;
  qword_2CD6DA8 = v26;
  byte_2CD6E0C = 1;
  byte_2CD6D8A = byte_2CD6D8A & 0x9F | 0x20;
  qword_2CD6DA0 = (__int64)"The cost of a step in a different basic block than the killing MemoryDef(default = 5)";
  dword_2CD6E08 = 5;
  sub_21F4400(&qword_2CD6D80);
  __cxa_atexit(sub_1FC9520, &qword_2CD6D80, &off_2AFC540);
  v26 = j__strlen(
          "The maximum number of blocks to check when trying to prove that all paths to an exit go through a killing bloc"
          "k (default = 50)");
  sub_1FEBAE0(&qword_2CD6CC0, 0, 0);
  v15 = _mm_load_si128((const __m128i *)&v24);
  qword_2CD6D40 = (__int64)off_2C472D0;
  qword_2CD6CC0 = (__int64)off_2C4B710;
  xmmword_2CD6D68 = (__int128)v15;
  qword_2CD6D50 = (__int64)off_2BC0BF8;
  dword_2CD6D38 = 0;
  dword_2CD6D48 = 0;
  byte_2CD6D4C = 0;
  v16 = j__strlen("dse-memoryssa-path-check-limit");
  sub_21F3510(&qword_2CD6CC0, "dse-memoryssa-path-check-limit", v16);
  dword_2CD6D38 = 50;
  qword_2CD6CE8 = v26;
  byte_2CD6D4C = 1;
  byte_2CD6CCA = byte_2CD6CCA & 0x9F | 0x20;
  qword_2CD6CE0 = (__int64)"The maximum number of blocks to check when trying to prove that all paths to an exit go throu"
                           "gh a killing block (default = 50)";
  dword_2CD6D48 = 50;
  sub_21F4400(&qword_2CD6CC0);
  __cxa_atexit(sub_1FC9520, &qword_2CD6CC0, &off_2AFC540);
  v17 = j__strlen("Allow DSE to optimize memory accesses.");
  sub_1FEBAE0(&qword_2CD6C00, 0, 0);
  v18 = _mm_load_si128(&v25);
  qword_2CD6C80 = (__int64)off_2C474E8;
  word_2CD6C88 = 0;
  xmmword_2CD6CA8 = (__int128)v18;
  qword_2CD6C00 = (__int64)off_2C4B848;
  qword_2CD6C90 = (__int64)off_2BC0B68;
  byte_2CD6C78 = 0;
  v19 = j__strlen("dse-optimize-memoryssa");
  sub_21F3510(&qword_2CD6C00, "dse-optimize-memoryssa", v19);
  word_2CD6C88 = 257;
  qword_2CD6C28 = v17;
  byte_2CD6C78 = 1;
  byte_2CD6C0A = byte_2CD6C0A & 0x9F | 0x20;
  qword_2CD6C20 = (__int64)"Allow DSE to optimize memory accesses.";
  sub_21F4400(&qword_2CD6C00);
  __cxa_atexit(sub_1FEA450, &qword_2CD6C00, &off_2AFC540);
  v20 = j__strlen("Enable the initializes attr improvement in DSE");
  sub_1FEBAE0(&qword_2CD6B40, 0, 0);
  v21 = _mm_load_si128(&v25);
  word_2CD6BC8 = 0;
  xmmword_2CD6BE8 = (__int128)v21;
  qword_2CD6BC0 = (__int64)off_2C474E8;
  qword_2CD6B40 = (__int64)off_2C4B848;
  qword_2CD6BD0 = (__int64)off_2BC0B68;
  byte_2CD6BB8 = 0;
  v22 = j__strlen("enable-dse-initializes-attr-improvement");
  sub_21F3510(&qword_2CD6B40, "enable-dse-initializes-attr-improvement", v22);
  word_2CD6BC8 = 257;
  qword_2CD6B68 = v20;
  byte_2CD6BB8 = 1;
  byte_2CD6B4A = byte_2CD6B4A & 0x9F | 0x20;
  qword_2CD6B60 = (__int64)"Enable the initializes attr improvement in DSE";
  sub_21F4400(&qword_2CD6B40);
  return __cxa_atexit(sub_1FEA450, &qword_2CD6B40, &off_2AFC540);
}

