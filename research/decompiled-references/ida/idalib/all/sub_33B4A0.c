int sub_33B4A0()
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
  sub_21E91E0("dse-memoryssa", v1, "Controls which MemoryDefs are eliminated.", v0);
  v2 = j__strlen("Enable partial-overwrite tracking in DSE");
  sub_200F820(&qword_2D011E0, 0, 0);
  word_2D01268 = 0;
  byte_2D01258 = 0;
  v25 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  xmmword_2D01288 = (__int128)v25;
  qword_2D01260 = (__int64)off_2C714E8;
  qword_2D011E0 = (__int64)off_2C75848;
  qword_2D01270 = (__int64)off_2BEAB08;
  v3 = j__strlen("enable-dse-partial-overwrite-tracking");
  sub_2217250(&qword_2D011E0, "enable-dse-partial-overwrite-tracking", v3);
  word_2D01268 = 257;
  qword_2D01208 = v2;
  byte_2D01258 = 1;
  byte_2D011EA = byte_2D011EA & 0x9F | 0x20;
  qword_2D01200 = (__int64)"Enable partial-overwrite tracking in DSE";
  sub_2218140(&qword_2D011E0);
  __cxa_atexit(sub_200E190, &qword_2D011E0, &off_2B25620);
  v4 = j__strlen("Enable partial store merging in DSE");
  sub_200F820(&qword_2D01120, 0, 0);
  v5 = _mm_load_si128(&v25);
  word_2D011A8 = 0;
  xmmword_2D011C8 = (__int128)v5;
  qword_2D011A0 = (__int64)off_2C714E8;
  qword_2D01120 = (__int64)off_2C75848;
  qword_2D011B0 = (__int64)off_2BEAB08;
  byte_2D01198 = 0;
  v6 = j__strlen("enable-dse-partial-store-merging");
  sub_2217250(&qword_2D01120, "enable-dse-partial-store-merging", v6);
  word_2D011A8 = 257;
  qword_2D01148 = v4;
  byte_2D01198 = 1;
  byte_2D0112A = byte_2D0112A & 0x9F | 0x20;
  qword_2D01140 = (__int64)"Enable partial store merging in DSE";
  sub_2218140(&qword_2D01120);
  __cxa_atexit(sub_200E190, &qword_2D01120, &off_2B25620);
  v7 = j__strlen("The number of memory instructions to scan for dead store elimination (default = 150)");
  v29 = &v27;
  v30 = "The number of memory instructions to scan for dead store elimination (default = 150)";
  v31 = v7;
  v28 = 1;
  v27 = 150;
  sub_21E90F0(&unk_2D01060, "dse-memoryssa-scanlimit", &v29, &v28, &v30);
  __cxa_atexit(sub_1FED260, &unk_2D01060, &off_2B25620);
  v31 = j__strlen("The maximum number of steps while walking upwards to find MemoryDefs that may be killed (default = 90)");
  v30 = "The maximum number of steps while walking upwards to find MemoryDefs that may be killed (default = 90)";
  v29 = &v27;
  v28 = 1;
  v27 = 90;
  sub_21E90F0(&unk_2D00FA0, "dse-memoryssa-walklimit", &v29, &v28, &v30);
  __cxa_atexit(sub_1FED260, &unk_2D00FA0, &off_2B25620);
  v26 = j__strlen("The maximum number candidates that only partially overwrite the killing MemoryDef to consider (default = 5)");
  sub_200F820(&qword_2D00EE0, 0, 0);
  dword_2D00F58 = 0;
  dword_2D00F68 = 0;
  v24 = _mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2D00F88 = (__int128)v24;
  qword_2D00F60 = (__int64)off_2C712D0;
  qword_2D00EE0 = (__int64)off_2C75710;
  qword_2D00F70 = (__int64)off_2BEAB98;
  byte_2D00F6C = 0;
  v8 = j__strlen("dse-memoryssa-partial-store-limit");
  sub_2217250(&qword_2D00EE0, "dse-memoryssa-partial-store-limit", v8);
  dword_2D00F58 = 5;
  qword_2D00F08 = v26;
  byte_2D00F6C = 1;
  byte_2D00EEA = byte_2D00EEA & 0x9F | 0x20;
  qword_2D00F00 = (__int64)"The maximum number candidates that only partially overwrite the killing MemoryDef to consider (default = 5)";
  dword_2D00F68 = 5;
  sub_2218140(&qword_2D00EE0);
  __cxa_atexit(sub_1FED260, &qword_2D00EE0, &off_2B25620);
  v26 = j__strlen(
          "The number of MemoryDefs we consider as candidates to eliminated other stores per basic block (default = 5000)");
  sub_200F820(&qword_2D00E20, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v24);
  qword_2D00EA0 = (__int64)off_2C712D0;
  qword_2D00E20 = (__int64)off_2C75710;
  xmmword_2D00EC8 = (__int128)si128;
  qword_2D00EB0 = (__int64)off_2BEAB98;
  dword_2D00E98 = 0;
  dword_2D00EA8 = 0;
  byte_2D00EAC = 0;
  v10 = j__strlen("dse-memoryssa-defs-per-block-limit");
  sub_2217250(&qword_2D00E20, "dse-memoryssa-defs-per-block-limit", v10);
  dword_2D00E98 = 5000;
  qword_2D00E48 = v26;
  byte_2D00EAC = 1;
  byte_2D00E2A = byte_2D00E2A & 0x9F | 0x20;
  qword_2D00E40 = (__int64)"The number of MemoryDefs we consider as candidates to eliminated other stores per basic block"
                           " (default = 5000)";
  dword_2D00EA8 = 5000;
  sub_2218140(&qword_2D00E20);
  __cxa_atexit(sub_1FED260, &qword_2D00E20, &off_2B25620);
  v26 = j__strlen("The cost of a step in the same basic block as the killing MemoryDef(default = 1)");
  sub_200F820(&qword_2D00D60, 0, 0);
  v11 = _mm_load_si128((const __m128i *)&v24);
  qword_2D00DE0 = (__int64)off_2C712D0;
  qword_2D00D60 = (__int64)off_2C75710;
  xmmword_2D00E08 = (__int128)v11;
  qword_2D00DF0 = (__int64)off_2BEAB98;
  dword_2D00DD8 = 0;
  dword_2D00DE8 = 0;
  byte_2D00DEC = 0;
  v12 = j__strlen("dse-memoryssa-samebb-cost");
  sub_2217250(&qword_2D00D60, "dse-memoryssa-samebb-cost", v12);
  dword_2D00DD8 = 1;
  qword_2D00D88 = v26;
  byte_2D00DEC = 1;
  byte_2D00D6A = byte_2D00D6A & 0x9F | 0x20;
  qword_2D00D80 = (__int64)"The cost of a step in the same basic block as the killing MemoryDef(default = 1)";
  dword_2D00DE8 = 1;
  sub_2218140(&qword_2D00D60);
  __cxa_atexit(sub_1FED260, &qword_2D00D60, &off_2B25620);
  v26 = j__strlen("The cost of a step in a different basic block than the killing MemoryDef(default = 5)");
  sub_200F820(&qword_2D00CA0, 0, 0);
  v13 = _mm_load_si128((const __m128i *)&v24);
  qword_2D00D20 = (__int64)off_2C712D0;
  qword_2D00CA0 = (__int64)off_2C75710;
  xmmword_2D00D48 = (__int128)v13;
  qword_2D00D30 = (__int64)off_2BEAB98;
  dword_2D00D18 = 0;
  dword_2D00D28 = 0;
  byte_2D00D2C = 0;
  v14 = j__strlen("dse-memoryssa-otherbb-cost");
  sub_2217250(&qword_2D00CA0, "dse-memoryssa-otherbb-cost", v14);
  dword_2D00D18 = 5;
  qword_2D00CC8 = v26;
  byte_2D00D2C = 1;
  byte_2D00CAA = byte_2D00CAA & 0x9F | 0x20;
  qword_2D00CC0 = (__int64)"The cost of a step in a different basic block than the killing MemoryDef(default = 5)";
  dword_2D00D28 = 5;
  sub_2218140(&qword_2D00CA0);
  __cxa_atexit(sub_1FED260, &qword_2D00CA0, &off_2B25620);
  v26 = j__strlen(
          "The maximum number of blocks to check when trying to prove that all paths to an exit go through a killing bloc"
          "k (default = 50)");
  sub_200F820(&qword_2D00BE0, 0, 0);
  v15 = _mm_load_si128((const __m128i *)&v24);
  qword_2D00C60 = (__int64)off_2C712D0;
  qword_2D00BE0 = (__int64)off_2C75710;
  xmmword_2D00C88 = (__int128)v15;
  qword_2D00C70 = (__int64)off_2BEAB98;
  dword_2D00C58 = 0;
  dword_2D00C68 = 0;
  byte_2D00C6C = 0;
  v16 = j__strlen("dse-memoryssa-path-check-limit");
  sub_2217250(&qword_2D00BE0, "dse-memoryssa-path-check-limit", v16);
  dword_2D00C58 = 50;
  qword_2D00C08 = v26;
  byte_2D00C6C = 1;
  byte_2D00BEA = byte_2D00BEA & 0x9F | 0x20;
  qword_2D00C00 = (__int64)"The maximum number of blocks to check when trying to prove that all paths to an exit go throu"
                           "gh a killing block (default = 50)";
  dword_2D00C68 = 50;
  sub_2218140(&qword_2D00BE0);
  __cxa_atexit(sub_1FED260, &qword_2D00BE0, &off_2B25620);
  v17 = j__strlen("Allow DSE to optimize memory accesses.");
  sub_200F820(&qword_2D00B20, 0, 0);
  v18 = _mm_load_si128(&v25);
  qword_2D00BA0 = (__int64)off_2C714E8;
  word_2D00BA8 = 0;
  xmmword_2D00BC8 = (__int128)v18;
  qword_2D00B20 = (__int64)off_2C75848;
  qword_2D00BB0 = (__int64)off_2BEAB08;
  byte_2D00B98 = 0;
  v19 = j__strlen("dse-optimize-memoryssa");
  sub_2217250(&qword_2D00B20, "dse-optimize-memoryssa", v19);
  word_2D00BA8 = 257;
  qword_2D00B48 = v17;
  byte_2D00B98 = 1;
  byte_2D00B2A = byte_2D00B2A & 0x9F | 0x20;
  qword_2D00B40 = (__int64)"Allow DSE to optimize memory accesses.";
  sub_2218140(&qword_2D00B20);
  __cxa_atexit(sub_200E190, &qword_2D00B20, &off_2B25620);
  v20 = j__strlen("Enable the initializes attr improvement in DSE");
  sub_200F820(&qword_2D00A60, 0, 0);
  v21 = _mm_load_si128(&v25);
  word_2D00AE8 = 0;
  xmmword_2D00B08 = (__int128)v21;
  qword_2D00AE0 = (__int64)off_2C714E8;
  qword_2D00A60 = (__int64)off_2C75848;
  qword_2D00AF0 = (__int64)off_2BEAB08;
  byte_2D00AD8 = 0;
  v22 = j__strlen("enable-dse-initializes-attr-improvement");
  sub_2217250(&qword_2D00A60, "enable-dse-initializes-attr-improvement", v22);
  word_2D00AE8 = 257;
  qword_2D00A88 = v20;
  byte_2D00AD8 = 1;
  byte_2D00A6A = byte_2D00A6A & 0x9F | 0x20;
  qword_2D00A80 = (__int64)"Enable the initializes attr improvement in DSE";
  sub_2218140(&qword_2D00A60);
  return __cxa_atexit(sub_200E190, &qword_2D00A60, &off_2B25620);
}
