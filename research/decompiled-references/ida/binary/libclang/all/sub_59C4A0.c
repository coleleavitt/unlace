int sub_59C4A0()
{
  __m128i v0; // xmm0
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm2
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm2
  __m128i v16; // [rsp+0h] [rbp-B8h] BYREF
  char *v17; // [rsp+18h] [rbp-A0h]
  int *v18; // [rsp+20h] [rbp-98h]
  char **v19; // [rsp+28h] [rbp-90h]
  __m128i v20; // [rsp+30h] [rbp-88h] BYREF
  const char **v21; // [rsp+40h] [rbp-78h]
  __int64 (__fastcall **v22)(); // [rsp+48h] [rbp-70h]
  __int64 (__fastcall **v23)(); // [rsp+50h] [rbp-68h]
  _UNKNOWN **v24; // [rsp+58h] [rbp-60h]
  char v25; // [rsp+63h] [rbp-55h] BYREF
  int v26; // [rsp+64h] [rbp-54h] BYREF
  char *v27; // [rsp+68h] [rbp-50h] BYREF
  const char *v28; // [rsp+70h] [rbp-48h] BYREF
  __int64 v29; // [rsp+78h] [rbp-40h]

  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB2A0), (__m128i)(unsigned __int64)nullsub_266);
  v16 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB2A8), (__m128i)(unsigned __int64)nullsub_267);
  sub_33EF4D0(&qword_4AFEC40);
  v0 = _mm_load_si128(&v16);
  xmmword_4AFECD8 = 0;
  xmmword_4AFECE8 = (__int128)v0;
  qword_4AFECC0 = (__int64)&off_4A64710;
  dword_4AFECB8 = 0;
  qword_4AFEC40 = (__int64)off_4A6DEB8;
  byte_4AFECCC = 0;
  qword_4AFECD0 = (__int64)off_49D9228;
  dword_4AFECC8 = 0;
  sub_259F400(&qword_4AFEC40, "align-all-blocks", 16);
  qword_4AFEC68 = 103;
  qword_4AFEC60 = (__int64)"Force the alignment of all blocks in the function in log2 format (e.g 4 means align on 16B boundaries).";
  dword_4AFECB8 = 0;
  byte_4AFECCC = 1;
  dword_4AFECC8 = 0;
  byte_4AFEC4A = byte_4AFEC4A & 0x9F | 0x20;
  sub_259EC40(&qword_4AFEC40);
  __cxa_atexit(sub_1F6C940, &qword_4AFEC40, &off_47CFE00);
  sub_33EF4D0(&qword_4AFEB80);
  v1 = _mm_load_si128(&v16);
  xmmword_4AFEC18 = 0;
  xmmword_4AFEC28 = (__int128)v1;
  qword_4AFEC00 = (__int64)&off_4A64710;
  qword_4AFEB80 = (__int64)off_4A6DEB8;
  qword_4AFEC10 = (__int64)off_49D9228;
  dword_4AFEBF8 = 0;
  dword_4AFEC08 = 0;
  byte_4AFEC0C = 0;
  sub_259F400(&qword_4AFEB80, "align-all-nofallthru-blocks", 27);
  qword_4AFEBA8 = 167;
  qword_4AFEBA0 = (__int64)"Force the alignment of all blocks that have no fall-through predecessors (i.e. don't add nops"
                           " that are executed). In log2 format (e.g 4 means align on 16B boundaries).";
  dword_4AFEBF8 = 0;
  byte_4AFEC0C = 1;
  dword_4AFEC08 = 0;
  byte_4AFEB8A = byte_4AFEB8A & 0x9F | 0x20;
  sub_259EC40(&qword_4AFEB80);
  __cxa_atexit(sub_1F6C940, &qword_4AFEB80, &off_47CFE00);
  sub_33EF4D0(&qword_4AFEAC0);
  v2 = _mm_load_si128(&v16);
  xmmword_4AFEB58 = 0;
  xmmword_4AFEB68 = (__int128)v2;
  qword_4AFEB40 = (__int64)&off_4A64710;
  qword_4AFEAC0 = (__int64)off_4A6DEB8;
  qword_4AFEB50 = (__int64)off_49D9228;
  dword_4AFEB38 = 0;
  dword_4AFEB48 = 0;
  byte_4AFEB4C = 0;
  sub_259F400(&qword_4AFEAC0, "max-bytes-for-alignment", 23);
  qword_4AFEAE8 = 73;
  qword_4AFEAE0 = (__int64)"Forces the maximum bytes allowed to be emitted when padding for alignment";
  dword_4AFEB38 = 0;
  byte_4AFEB4C = 1;
  dword_4AFEB48 = 0;
  byte_4AFEACA = byte_4AFEACA & 0x9F | 0x20;
  sub_259EC40(&qword_4AFEAC0);
  __cxa_atexit(sub_1F6C940, &qword_4AFEAC0, &off_47CFE00);
  sub_33EF4D0(&qword_4AFEA00);
  v3 = _mm_load_si128(&v16);
  xmmword_4AFEA98 = 0;
  xmmword_4AFEAA8 = (__int128)v3;
  qword_4AFEA80 = (__int64)&off_4A64710;
  qword_4AFEA00 = (__int64)off_4A6DEB8;
  qword_4AFEA90 = (__int64)off_49D9228;
  dword_4AFEA78 = 0;
  dword_4AFEA88 = 0;
  byte_4AFEA8C = 0;
  sub_259F400(&qword_4AFEA00, "block-placement-exit-block-bias", 31);
  qword_4AFEA28 = 104;
  qword_4AFEA20 = (__int64)"Block frequency percentage a loop exit block needs over the original exit to be considered the new exit.";
  dword_4AFEA78 = 0;
  byte_4AFEA8C = 1;
  dword_4AFEA88 = 0;
  byte_4AFEA0A = byte_4AFEA0A & 0x9F | 0x20;
  sub_259EC40(&qword_4AFEA00);
  __cxa_atexit(sub_1F6C940, &qword_4AFEA00, &off_47CFE00);
  sub_33EF4D0(&qword_4AFE940);
  v4 = _mm_load_si128(&v16);
  xmmword_4AFE9D8 = 0;
  xmmword_4AFE9E8 = (__int128)v4;
  qword_4AFE9C0 = (__int64)&off_4A64710;
  qword_4AFE940 = (__int64)off_4A6DEB8;
  qword_4AFE9D0 = (__int64)off_49D9228;
  dword_4AFE9B8 = 0;
  dword_4AFE9C8 = 0;
  byte_4AFE9CC = 0;
  sub_259F400(&qword_4AFE940, "loop-to-cold-block-ratio", 24);
  qword_4AFE968 = 108;
  qword_4AFE960 = (__int64)"Outline loop blocks from loop chain if (frequency of loop) / (frequency of block) is greater than this ratio";
  dword_4AFE9B8 = 5;
  byte_4AFE9CC = 1;
  dword_4AFE9C8 = 5;
  byte_4AFE94A = byte_4AFE94A & 0x9F | 0x20;
  sub_259EC40(&qword_4AFE940);
  __cxa_atexit(sub_1F6C940, &qword_4AFE940, &off_47CFE00);
  v26 = 1;
  v19 = &v27;
  v28 = "Force outlining cold blocks from loops.";
  v18 = &v26;
  v21 = &v28;
  v17 = &v25;
  v27 = &v25;
  v25 = 0;
  v29 = 39;
  sub_33F6250(qword_4AFE880, "force-loop-cold-block", &v28, &v27, &v26);
  __cxa_atexit(sub_1F6C9D0, qword_4AFE880, &off_47CFE00);
  v25 = 0;
  v27 = v17;
  v28 = "Model the cost of loop rotation more precisely by using profile data.";
  v26 = 1;
  v29 = 69;
  sub_33F6250(qword_4AFE7C0, "precise-rotation-cost", v21, v19, v18);
  __cxa_atexit(sub_1F6C9D0, qword_4AFE7C0, &off_47CFE00);
  v25 = 0;
  v26 = 1;
  v28 = "Force the use of precise cost loop rotation strategy.";
  v27 = v17;
  v29 = 53;
  sub_33F6410(qword_4AFE700, "force-precise-rotation-cost", v21, v19, v18);
  __cxa_atexit(sub_1F6C9D0, qword_4AFE700, &off_47CFE00);
  sub_33EF4D0(&qword_4AFE640);
  v5 = _mm_load_si128(&v16);
  xmmword_4AFE6D8 = 0;
  xmmword_4AFE6E8 = (__int128)v5;
  qword_4AFE6C0 = (__int64)&off_4A64710;
  qword_4AFE640 = (__int64)off_4A6DEB8;
  qword_4AFE6D0 = (__int64)off_49D9228;
  dword_4AFE6B8 = 0;
  dword_4AFE6C8 = 0;
  byte_4AFE6CC = 0;
  sub_259F400(&qword_4AFE640, "misfetch-cost", 13);
  qword_4AFE668 = 130;
  qword_4AFE660 = (__int64)"Cost that models the probabilistic risk of an instruction misfetch due to a jump comparing to"
                           " falling through, whose cost is zero.";
  dword_4AFE6B8 = 1;
  byte_4AFE6CC = 1;
  dword_4AFE6C8 = 1;
  byte_4AFE64A = byte_4AFE64A & 0x9F | 0x20;
  sub_259EC40(&qword_4AFE640);
  __cxa_atexit(sub_1F6C940, &qword_4AFE640, &off_47CFE00);
  sub_33EF4D0(&qword_4AFE580);
  v6 = _mm_load_si128(&v16);
  xmmword_4AFE618 = 0;
  xmmword_4AFE628 = (__int128)v6;
  qword_4AFE600 = (__int64)&off_4A64710;
  qword_4AFE580 = (__int64)off_4A6DEB8;
  qword_4AFE610 = (__int64)off_49D9228;
  dword_4AFE5F8 = 0;
  dword_4AFE608 = 0;
  byte_4AFE60C = 0;
  sub_259F400(&qword_4AFE580, "jump-inst-cost", 14);
  qword_4AFE5A8 = 26;
  qword_4AFE5A0 = (__int64)"Cost of jump instructions.";
  dword_4AFE5F8 = 1;
  byte_4AFE60C = 1;
  dword_4AFE608 = 1;
  byte_4AFE58A = byte_4AFE58A & 0x9F | 0x20;
  sub_259EC40(&qword_4AFE580);
  __cxa_atexit(sub_1F6C940, &qword_4AFE580, &off_47CFE00);
  sub_33EF4D0(&qword_4AFE4C0);
  v7 = _mm_load_si128(&v20);
  word_4AFE548 = 0;
  xmmword_4AFE568 = (__int128)v7;
  xmmword_4AFE558 = 0;
  v24 = &off_4A64730;
  qword_4AFE540 = (__int64)&off_4A64730;
  v23 = off_4A6DFF0;
  qword_4AFE4C0 = (__int64)off_4A6DFF0;
  v22 = off_49D9168;
  qword_4AFE550 = (__int64)off_49D9168;
  byte_4AFE538 = 0;
  sub_259F400(&qword_4AFE4C0, "tail-dup-placement", 18);
  qword_4AFE4E0 = (__int64)"Perform tail duplication during placement. Creates more fallthrough opportunities in outline branches.";
  word_4AFE548 = 257;
  byte_4AFE538 = 1;
  qword_4AFE4E8 = 102;
  byte_4AFE4CA = byte_4AFE4CA & 0x9F | 0x20;
  sub_259EC40(&qword_4AFE4C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFE4C0, &off_47CFE00);
  v25 = 1;
  v26 = 1;
  v28 = "Perform branch folding during placement. Reduces code size.";
  v27 = v17;
  v29 = 59;
  sub_33F6250(qword_4AFE400, "branch-fold-placement", v21, v19, v18);
  __cxa_atexit(sub_1F6C9D0, qword_4AFE400, &off_47CFE00);
  sub_33EF4D0(&qword_4AFE340);
  v8 = _mm_load_si128(&v16);
  xmmword_4AFE3D8 = 0;
  xmmword_4AFE3E8 = (__int128)v8;
  qword_4AFE3C0 = (__int64)&off_4A64710;
  qword_4AFE340 = (__int64)off_4A6DEB8;
  qword_4AFE3D0 = (__int64)off_49D9228;
  dword_4AFE3B8 = 0;
  dword_4AFE3C8 = 0;
  byte_4AFE3CC = 0;
  sub_259F400(&qword_4AFE340, "tail-dup-placement-threshold", 28);
  qword_4AFE368 = 132;
  qword_4AFE360 = (__int64)"Instruction cutoff for tail duplication during layout. Tail merging during layout is forced t"
                           "o have a threshold that won't conflict.";
  dword_4AFE3B8 = 2;
  byte_4AFE3CC = 1;
  dword_4AFE3C8 = 2;
  byte_4AFE34A = byte_4AFE34A & 0x9F | 0x20;
  sub_259EC40(&qword_4AFE340);
  __cxa_atexit(sub_1F6C940, &qword_4AFE340, &off_47CFE00);
  sub_33EF4D0(&qword_4AFE280);
  v9 = _mm_load_si128(&v16);
  xmmword_4AFE318 = 0;
  xmmword_4AFE328 = (__int128)v9;
  qword_4AFE300 = (__int64)&off_4A64710;
  qword_4AFE280 = (__int64)off_4A6DEB8;
  qword_4AFE310 = (__int64)off_49D9228;
  dword_4AFE2F8 = 0;
  dword_4AFE308 = 0;
  byte_4AFE30C = 0;
  sub_259F400(&qword_4AFE280, "tail-dup-placement-aggressive-threshold", 39);
  qword_4AFE2A8 = 156;
  qword_4AFE2A0 = (__int64)"Instruction cutoff for aggressive tail duplication during layout. Used at -O3. Tail merging d"
                           "uring layout is forced to have a threshold that won't conflict.";
  dword_4AFE2F8 = 4;
  byte_4AFE30C = 1;
  dword_4AFE308 = 4;
  byte_4AFE28A = byte_4AFE28A & 0x9F | 0x20;
  sub_259EC40(&qword_4AFE280);
  __cxa_atexit(sub_1F6C940, &qword_4AFE280, &off_47CFE00);
  sub_33EF4D0(&qword_4AFE1C0);
  v10 = _mm_load_si128(&v16);
  xmmword_4AFE258 = 0;
  xmmword_4AFE268 = (__int128)v10;
  qword_4AFE240 = (__int64)&off_4A64710;
  qword_4AFE1C0 = (__int64)off_4A6DEB8;
  qword_4AFE250 = (__int64)off_49D9228;
  dword_4AFE238 = 0;
  dword_4AFE248 = 0;
  byte_4AFE24C = 0;
  sub_259F400(&qword_4AFE1C0, "tail-dup-placement-penalty", 26);
  qword_4AFE1E8 = 213;
  qword_4AFE1E0 = (__int64)"Cost penalty for blocks that can avoid breaking CFG by copying. Copying can increase fallthro"
                           "ugh, but it also increases icache pressure. This parameter controls the penalty to account fo"
                           "r that. Percent as integer.";
  dword_4AFE238 = 2;
  byte_4AFE24C = 1;
  dword_4AFE248 = 2;
  byte_4AFE1CA = byte_4AFE1CA & 0x9F | 0x20;
  sub_259EC40(&qword_4AFE1C0);
  __cxa_atexit(sub_1F6C940, &qword_4AFE1C0, &off_47CFE00);
  sub_33EF4D0(&qword_4AFE100);
  v11 = _mm_load_si128(&v16);
  xmmword_4AFE198 = 0;
  xmmword_4AFE1A8 = (__int128)v11;
  qword_4AFE180 = (__int64)&off_4A64710;
  qword_4AFE100 = (__int64)off_4A6DEB8;
  qword_4AFE190 = (__int64)off_49D9228;
  dword_4AFE178 = 0;
  dword_4AFE188 = 0;
  byte_4AFE18C = 0;
  sub_259F400(&qword_4AFE100, "tail-dup-profile-percent-threshold", 34);
  qword_4AFE128 = 167;
  qword_4AFE120 = (__int64)"If profile count information is used in tail duplication cost model, the gained fall through "
                           "number from tail duplication should be at least this percent of hot count.";
  dword_4AFE178 = 50;
  byte_4AFE18C = 1;
  dword_4AFE188 = 50;
  byte_4AFE10A = byte_4AFE10A & 0x9F | 0x20;
  sub_259EC40(&qword_4AFE100);
  __cxa_atexit(sub_1F6C940, &qword_4AFE100, &off_47CFE00);
  sub_33EF4D0(&qword_4AFE040);
  v12 = _mm_load_si128(&v16);
  xmmword_4AFE0D8 = 0;
  xmmword_4AFE0E8 = (__int128)v12;
  qword_4AFE0C0 = (__int64)&off_4A64710;
  qword_4AFE040 = (__int64)off_4A6DEB8;
  qword_4AFE0D0 = (__int64)off_49D9228;
  dword_4AFE0B8 = 0;
  dword_4AFE0C8 = 0;
  byte_4AFE0CC = 0;
  sub_259F400(&qword_4AFE040, "triangle-chain-count", 20);
  qword_4AFE068 = 126;
  qword_4AFE060 = (__int64)"Number of triangle-shaped-CFG's that need to be in a row for the triangle tail duplication he"
                           "uristic to kick in. 0 to disable.";
  dword_4AFE0B8 = 2;
  byte_4AFE0CC = 1;
  dword_4AFE0C8 = 2;
  byte_4AFE04A = byte_4AFE04A & 0x9F | 0x20;
  sub_259EC40(&qword_4AFE040);
  __cxa_atexit(sub_1F6C940, &qword_4AFE040, &off_47CFE00);
  v27 = v17;
  v28 = "If true, basic blocks are re-numbered before MBP layout is printed into a dot graph. Only used when a function i"
        "s being printed.";
  v26 = 1;
  v25 = 0;
  v29 = 128;
  sub_33F6410(qword_4AFDF80, "renumber-blocks-before-view", v21, v19, v18);
  __cxa_atexit(sub_1F6C9D0, qword_4AFDF80, &off_47CFE00);
  sub_33EF4D0(&qword_4AFDEC0);
  v13 = _mm_load_si128(&v16);
  xmmword_4AFDF58 = 0;
  xmmword_4AFDF68 = (__int128)v13;
  qword_4AFDF40 = (__int64)&off_4A64710;
  qword_4AFDEC0 = (__int64)off_4A6DEB8;
  qword_4AFDF50 = (__int64)off_49D9228;
  dword_4AFDF38 = 0;
  dword_4AFDF48 = 0;
  byte_4AFDF4C = 0;
  sub_259F400(&qword_4AFDEC0, "ext-tsp-block-placement-max-blocks", 34);
  qword_4AFDEE8 = 76;
  qword_4AFDEE0 = (__int64)"Maximum number of basic blocks in a function to run ext-TSP block placement.";
  dword_4AFDF38 = -1;
  byte_4AFDF4C = 1;
  dword_4AFDF48 = -1;
  byte_4AFDECA = byte_4AFDECA & 0x9F | 0x20;
  sub_259EC40(&qword_4AFDEC0);
  __cxa_atexit(sub_1F6C940, &qword_4AFDEC0, &off_47CFE00);
  sub_33EF4D0(&qword_4AFDE00);
  v14 = _mm_load_si128(&v20);
  word_4AFDE88 = 0;
  qword_4AFDE80 = (__int64)v24;
  qword_4AFDE00 = (__int64)v23;
  qword_4AFDE90 = (__int64)v22;
  xmmword_4AFDE98 = 0;
  xmmword_4AFDEA8 = (__int128)v14;
  byte_4AFDE78 = 0;
  sub_259F400(&qword_4AFDE00, "apply-ext-tsp-for-size", 22);
  word_4AFDE88 = 256;
  byte_4AFDE78 = 0;
  qword_4AFDE28 = 43;
  byte_4AFDE0A = byte_4AFDE0A & 0x9F | 0x20;
  qword_4AFDE20 = (__int64)"Use ext-tsp for size-aware block placement.";
  sub_259EC40(&qword_4AFDE00);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AFDE00, &off_47CFE00);
}

