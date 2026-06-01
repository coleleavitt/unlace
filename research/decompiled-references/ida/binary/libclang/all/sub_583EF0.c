int __fastcall sub_583EF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __m128i v8; // xmm1
  __m128i v9; // xmm1
  __m128i v10; // xmm1
  __m128i v11; // xmm1
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  __m128i v15; // xmm3
  __m128i v16; // xmm3
  __int64 v17; // r9
  __m128i v19; // [rsp+0h] [rbp-98h] BYREF
  int *v20; // [rsp+10h] [rbp-88h]
  __int64 (__fastcall **v21)(); // [rsp+18h] [rbp-80h]
  __int64 (__fastcall **v22)(); // [rsp+20h] [rbp-78h]
  __int64 (__fastcall **v23)(); // [rsp+28h] [rbp-70h]
  __m128i v24; // [rsp+30h] [rbp-68h] BYREF
  char v25; // [rsp+43h] [rbp-55h] BYREF
  int v26; // [rsp+44h] [rbp-54h] BYREF
  char *v27; // [rsp+48h] [rbp-50h] BYREF
  const char *v28; // [rsp+50h] [rbp-48h] BYREF
  __int64 v29; // [rsp+58h] [rbp-40h]

  v28 = "Disable branch optimizations in CodeGenPrepare";
  v24 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E9380), (__m128i)(unsigned __int64)nullsub_267);
  v19 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E9378), (__m128i)(unsigned __int64)nullsub_266);
  v27 = &v25;
  v29 = 46;
  v25 = 0;
  v26 = 1;
  sub_2FF9880(qword_4AF1DC0, "disable-cgp-branch-opts", &v26, &v27, &v28, a6, v19.m128i_i64[0], v19.m128i_i64[1]);
  __cxa_atexit(sub_1F6C9D0, qword_4AF1DC0, &off_47CFE00);
  v20 = &v26;
  v27 = &v25;
  v28 = "Disable GC optimizations in CodeGenPrepare";
  v29 = 42;
  v25 = 0;
  v26 = 1;
  sub_2FF9A40(qword_4AF1D00, "disable-cgp-gc-opts", &v26, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF1D00, &off_47CFE00);
  v27 = &v25;
  v28 = "Disable select to branch conversion.";
  v29 = 36;
  v25 = 0;
  v26 = 1;
  sub_2FF9C00(qword_4AF1C40, "disable-cgp-select2branch", &v26, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF1C40, &off_47CFE00);
  v27 = &v25;
  v28 = "Address sinking in CGP using GEPs.";
  v29 = 34;
  v25 = 1;
  v26 = 1;
  sub_2FF9A40(&qword_4AF1B80, "addr-sink-using-gep", &v26, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF1B80, &off_47CFE00);
  sub_2FEDCE0(&qword_4AF1AC0);
  v6 = _mm_load_si128(&v19);
  word_4AF1B48 = 0;
  xmmword_4AF1B58 = 0;
  xmmword_4AF1B68 = (__int128)v6;
  v21 = (__int64 (__fastcall **)())&off_4A64730;
  qword_4AF1B40 = (__int64)&off_4A64730;
  byte_4AF1B38 = 0;
  v22 = off_4A6DFF0;
  qword_4AF1AC0 = (__int64)off_4A6DFF0;
  v23 = off_49D9168;
  qword_4AF1B50 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF1AC0, "enable-andcmp-sinking", 21);
  byte_4AF1B38 = 1;
  qword_4AF1AE8 = 37;
  word_4AF1B48 = 257;
  byte_4AF1ACA = byte_4AF1ACA & 0x9F | 0x20;
  qword_4AF1AE0 = (__int64)"Enable sinking and/cmp into branches.";
  sub_259EC40(&qword_4AF1AC0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF1AC0, &off_47CFE00);
  v27 = &v25;
  v28 = "Disable store(extract) optimizations in CodeGenPrepare";
  v29 = 54;
  v25 = 0;
  v26 = 1;
  sub_2FF9C00(qword_4AF1A00, "disable-cgp-store-extract", v20, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF1A00, &off_47CFE00);
  sub_2FEDCE0(&qword_4AF1940);
  v7 = _mm_load_si128(&v19);
  word_4AF19C8 = 0;
  qword_4AF19D0 = (__int64)v23;
  xmmword_4AF19D8 = 0;
  xmmword_4AF19E8 = (__int128)v7;
  qword_4AF1940 = (__int64)v22;
  qword_4AF19C0 = (__int64)v21;
  byte_4AF19B8 = 0;
  sub_259F400(&qword_4AF1940, "stress-cgp-store-extract", 24);
  byte_4AF19B8 = 0;
  word_4AF19C8 = 256;
  qword_4AF1968 = 58;
  qword_4AF1960 = (__int64)"Stress test store(extract) optimizations in CodeGenPrepare";
  byte_4AF194A = byte_4AF194A & 0x9F | 0x20;
  sub_259EC40(&qword_4AF1940);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF1940, &off_47CFE00);
  v27 = &v25;
  v28 = "Disable ext(promotable(ld)) -> promoted(ext(ld)) optimization in CodeGenPrepare";
  v29 = 79;
  v25 = 0;
  v26 = 1;
  sub_2FF9DC0(qword_4AF1880, "disable-cgp-ext-ld-promotion", v20, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF1880, &off_47CFE00);
  v27 = &v25;
  v28 = "Stress test ext(promotable(ld)) -> promoted(ext(ld)) optimization in CodeGenPrepare";
  v29 = 83;
  v25 = 0;
  v26 = 1;
  sub_2FF9F80(qword_4AF17C0, "stress-cgp-ext-ld-promotion", v20, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF17C0, &off_47CFE00);
  v27 = &v25;
  v28 = "Disable protection against removing loop preheaders";
  v29 = 51;
  v25 = 0;
  v26 = 1;
  sub_2FFA140(qword_4AF1700, "disable-preheader-prot", v20, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF1700, &off_47CFE00);
  sub_2FEDCE0(&qword_4AF1640);
  v8 = _mm_load_si128(&v19);
  word_4AF16C8 = 0;
  qword_4AF16D0 = (__int64)v23;
  xmmword_4AF16D8 = 0;
  qword_4AF1640 = (__int64)v22;
  xmmword_4AF16E8 = (__int128)v8;
  qword_4AF16C0 = (__int64)v21;
  byte_4AF16B8 = 0;
  sub_259F400(&qword_4AF1640, "profile-guided-section-prefix", 29);
  byte_4AF16B8 = 1;
  qword_4AF1668 = 61;
  word_4AF16C8 = 257;
  byte_4AF164A = byte_4AF164A & 0x9F | 0x20;
  qword_4AF1660 = (__int64)"Use profile info to add section prefix for hot/cold functions";
  sub_259EC40(&qword_4AF1640);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF1640, &off_47CFE00);
  sub_2FEDCE0(&qword_4AF1580);
  v9 = _mm_load_si128(&v19);
  word_4AF1608 = 0;
  qword_4AF1610 = (__int64)v23;
  qword_4AF1580 = (__int64)v22;
  xmmword_4AF1618 = 0;
  xmmword_4AF1628 = (__int128)v9;
  qword_4AF1600 = (__int64)v21;
  byte_4AF15F8 = 0;
  sub_259F400(&qword_4AF1580, "profile-unknown-in-special-section", 34);
  qword_4AF15A8 = 385;
  qword_4AF15A0 = (__int64)"In profiling mode like sampleFDO, if a function doesn't have profile, we cannot tell the func"
                           "tion is cold for sure because it may be a function newly added without ever being sampled. Wi"
                           "th the flag enabled, compiler can put such profile unknown functions into a special section, "
                           "so runtime system can choose to handle it in a different way than .text section, to save RAM for example. ";
  byte_4AF158A = byte_4AF158A & 0x9F | 0x20;
  sub_259EC40(&qword_4AF1580);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF1580, &off_47CFE00);
  sub_2FEDCE0(&qword_4AF14C0);
  v10 = _mm_load_si128(&v19);
  word_4AF1548 = 0;
  qword_4AF14C0 = (__int64)v22;
  xmmword_4AF1568 = (__int128)v10;
  qword_4AF1550 = (__int64)v23;
  xmmword_4AF1558 = 0;
  qword_4AF1540 = (__int64)v21;
  byte_4AF1538 = 0;
  sub_259F400(&qword_4AF14C0, "bbsections-guided-section-prefix", 32);
  byte_4AF1538 = 1;
  qword_4AF14E8 = 303;
  word_4AF1548 = 257;
  byte_4AF14CA = byte_4AF14CA & 0x9F | 0x20;
  qword_4AF14E0 = (__int64)"Use the basic-block-sections profile to determine the text section prefix for hot functions. "
                           "Functions with basic-block-sections profile will be placed in `.text.hot` regardless of their"
                           " FDO profile info. Other functions won't be impacted, i.e., their prefixes will be decided by"
                           " FDO/sampleFDO profiles.";
  sub_259EC40(&qword_4AF14C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF14C0, &off_47CFE00);
  sub_2FEDCE0(&qword_4AF1400);
  xmmword_4AF14A0 = 0;
  byte_4AF1490 = 0;
  qword_4AF1480 = (__int64)off_4A6E4B8;
  qword_4AF1478 = 0;
  qword_4AF1488 = 0;
  qword_4AF1400 = (__int64)off_4A6E4D8;
  qword_4AF1498 = (__int64)off_49D9258;
  xmmword_4AF14B0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9388),
                                (__m128i)(unsigned __int64)nullsub_374);
  sub_259F400(&qword_4AF1400, "cgp-freq-ratio-to-skip-merge", 28);
  qword_4AF1478 = 2;
  byte_4AF1490 = 1;
  qword_4AF1488 = 2;
  qword_4AF1428 = 117;
  qword_4AF1420 = (__int64)"Skip merging empty blocks if (frequency of empty block) / (frequency of destination block) is"
                           " greater than this ratio";
  byte_4AF140A = byte_4AF140A & 0x9F | 0x20;
  sub_259EC40(&qword_4AF1400);
  __cxa_atexit(sub_25D0820, &qword_4AF1400, &off_47CFE00);
  sub_2FEDCE0(&qword_4AF1340);
  v11 = _mm_load_si128(&v19);
  qword_4AF13D0 = (__int64)v23;
  word_4AF13C8 = 0;
  qword_4AF1340 = (__int64)v22;
  xmmword_4AF13D8 = 0;
  xmmword_4AF13E8 = (__int128)v11;
  qword_4AF13C0 = (__int64)v21;
  byte_4AF13B8 = 0;
  sub_259F400(&qword_4AF1340, "force-split-store", 17);
  byte_4AF13B8 = 0;
  word_4AF13C8 = 256;
  qword_4AF1368 = 59;
  qword_4AF1360 = (__int64)"Force store splitting no matter what the target query says.";
  byte_4AF134A = byte_4AF134A & 0x9F | 0x20;
  sub_259EC40(&qword_4AF1340);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF1340, &off_47CFE00);
  sub_2FEDCE0(&qword_4AF1280);
  v12 = _mm_load_si128(&v19);
  qword_4AF1310 = (__int64)v23;
  word_4AF1308 = 0;
  xmmword_4AF1318 = 0;
  xmmword_4AF1328 = (__int128)v12;
  qword_4AF1280 = (__int64)v22;
  qword_4AF1300 = (__int64)v21;
  byte_4AF12F8 = 0;
  sub_259F400(&qword_4AF1280, "cgp-type-promotion-merge", 24);
  qword_4AF12A8 = 67;
  byte_4AF12F8 = 1;
  qword_4AF12A0 = (__int64)"Enable merging of redundant sexts when one is dominating the other.";
  byte_4AF128A = byte_4AF128A & 0x9F | 0x20;
  word_4AF1308 = 257;
  sub_259EC40(&qword_4AF1280);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF1280, &off_47CFE00);
  v27 = &v25;
  v28 = "Disables combining addressing modes with different parts in optimizeMemoryInst.";
  v29 = 79;
  v25 = 0;
  v26 = 1;
  sub_2F2A940(qword_4AF11C0, "disable-complex-addr-modes", v20, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF11C0, &off_47CFE00);
  sub_2FEDCE0(&qword_4AF1100);
  v13 = _mm_load_si128(&v19);
  qword_4AF1190 = (__int64)v23;
  word_4AF1188 = 0;
  qword_4AF1100 = (__int64)v22;
  xmmword_4AF1198 = 0;
  xmmword_4AF11A8 = (__int128)v13;
  qword_4AF1180 = (__int64)v21;
  byte_4AF1178 = 0;
  sub_259F400(&qword_4AF1100, "addr-sink-new-phis", 18);
  byte_4AF1178 = 0;
  word_4AF1188 = 256;
  qword_4AF1128 = 42;
  qword_4AF1120 = (__int64)"Allow creation of Phis in Address sinking.";
  byte_4AF110A = byte_4AF110A & 0x9F | 0x20;
  sub_259EC40(&qword_4AF1100);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF1100, &off_47CFE00);
  sub_2FEDCE0(&qword_4AF1040);
  v14 = _mm_load_si128(&v19);
  qword_4AF10D0 = (__int64)v23;
  word_4AF10C8 = 0;
  xmmword_4AF10E8 = (__int128)v14;
  xmmword_4AF10D8 = 0;
  qword_4AF1040 = (__int64)v22;
  qword_4AF10C0 = (__int64)v21;
  byte_4AF10B8 = 0;
  sub_259F400(&qword_4AF1040, "addr-sink-new-select", 20);
  byte_4AF10B8 = 1;
  qword_4AF1068 = 45;
  byte_4AF104A = byte_4AF104A & 0x9F | 0x20;
  word_4AF10C8 = 257;
  qword_4AF1060 = (__int64)"Allow creation of selects in Address sinking.";
  sub_259EC40(&qword_4AF1040);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF1040, &off_47CFE00);
  v27 = &v25;
  v28 = "Allow combining of BaseReg field in Address sinking.";
  v29 = 52;
  v25 = 1;
  v26 = 1;
  sub_2F2A940(qword_4AF0F80, "addr-sink-combine-base-reg", v20, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF0F80, &off_47CFE00);
  v27 = &v25;
  v28 = "Allow combining of BaseGV field in Address sinking.";
  v29 = 51;
  v25 = 1;
  v26 = 1;
  sub_2FF9C00(qword_4AF0EC0, "addr-sink-combine-base-gv", v20, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF0EC0, &off_47CFE00);
  v27 = &v25;
  v28 = "Allow combining of BaseOffs field in Address sinking.";
  v29 = 53;
  v25 = 1;
  v26 = 1;
  sub_2FF9F80(qword_4AF0E00, "addr-sink-combine-base-offs", v20, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF0E00, &off_47CFE00);
  v27 = &v25;
  v28 = "Allow combining of ScaledReg field in Address sinking.";
  v29 = 54;
  v25 = 1;
  v26 = 1;
  sub_2FF9DC0(qword_4AF0D40, "addr-sink-combine-scaled-reg", v20, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF0D40, &off_47CFE00);
  v27 = &v25;
  v28 = "Enable splitting large offset of GEP.";
  v29 = 37;
  v25 = 1;
  v26 = 1;
  sub_2F2A940(qword_4AF0C80, "cgp-split-large-offset-gep", v20, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF0C80, &off_47CFE00);
  v27 = &v25;
  v28 = "Enable ICMP_EQ to ICMP_S(L|G)T conversion.";
  v29 = 42;
  v25 = 0;
  v26 = 1;
  sub_2FF9A40(qword_4AF0BC0, "cgp-icmp-eq2icmp-st", v20, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF0BC0, &off_47CFE00);
  v27 = &v25;
  v28 = "Enable BFI update verification for CodeGenPrepare.";
  v29 = 50;
  v25 = 0;
  v26 = 1;
  sub_2FFA140(qword_4AF0B00, "cgp-verify-bfi-updates", v20, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF0B00, &off_47CFE00);
  v27 = &v25;
  v28 = "Enable converting phi types in CodeGenPrepare";
  v29 = 45;
  v25 = 1;
  v26 = 1;
  sub_2FFA140(qword_4AF0A40, "cgp-optimize-phi-types", v20, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AF0A40, &off_47CFE00);
  sub_2FEDCE0(&qword_4AF0980);
  v15 = _mm_load_si128(&v24);
  xmmword_4AF0A18 = 0;
  xmmword_4AF0A28 = (__int128)v15;
  v22 = (__int64 (__fastcall **)())&off_4A64710;
  qword_4AF0A00 = (__int64)&off_4A64710;
  v21 = off_4A6DEB8;
  qword_4AF0980 = (__int64)off_4A6DEB8;
  v19.m128i_i64[0] = (__int64)off_49D9228;
  qword_4AF0A10 = (__int64)off_49D9228;
  dword_4AF09F8 = 0;
  dword_4AF0A08 = 0;
  byte_4AF0A0C = 0;
  sub_259F400(&qword_4AF0980, "cgpp-huge-func", 14);
  dword_4AF09F8 = 10000;
  byte_4AF0A0C = 1;
  dword_4AF0A08 = 10000;
  qword_4AF09A8 = 33;
  byte_4AF098A = byte_4AF098A & 0x9F | 0x20;
  qword_4AF09A0 = (__int64)"Least BB number of huge function.";
  sub_259EC40(&qword_4AF0980);
  __cxa_atexit(sub_1F6C940, &qword_4AF0980, &off_47CFE00);
  sub_2FEDCE0(&qword_4AF08C0);
  v16 = _mm_load_si128(&v24);
  qword_4AF0950 = v19.m128i_i64[0];
  qword_4AF0940 = (__int64)v22;
  qword_4AF08C0 = (__int64)v21;
  xmmword_4AF0958 = 0;
  xmmword_4AF0968 = (__int128)v16;
  dword_4AF0938 = 0;
  dword_4AF0948 = 0;
  byte_4AF094C = 0;
  sub_259F400(&qword_4AF08C0, "cgp-max-address-users-to-scan", 29);
  dword_4AF0938 = 100;
  byte_4AF094C = 1;
  dword_4AF0948 = 100;
  qword_4AF08E8 = 38;
  byte_4AF08CA = byte_4AF08CA & 0x9F | 0x20;
  qword_4AF08E0 = (__int64)"Max number of address users to look at";
  sub_259EC40(&qword_4AF08C0);
  __cxa_atexit(sub_1F6C940, &qword_4AF08C0, &off_47CFE00);
  v27 = &v25;
  v28 = "Disable elimination of dead PHI nodes.";
  v29 = 38;
  v25 = 0;
  v26 = 1;
  sub_2FF9880(qword_4AF0800, "disable-cgp-delete-phis", v20, &v27, &v28, v17, v19.m128i_i64[0], v19.m128i_i64[1]);
  return __cxa_atexit(sub_1F6C9D0, qword_4AF0800, &off_47CFE00);
}

