int sub_581FC0()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __m128i v2; // xmm3
  __int64 v3; // rax
  __int64 v4; // rdx
  __m128i v5; // xmm4
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i v8; // xmm5
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __m128i v12; // xmm6
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __m128i v20; // [rsp+0h] [rbp-88h] BYREF
  int *v21; // [rsp+10h] [rbp-78h]
  char **v22; // [rsp+18h] [rbp-70h]
  const char **v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+28h] [rbp-60h]
  char v25; // [rsp+33h] [rbp-55h] BYREF
  int v26; // [rsp+34h] [rbp-54h] BYREF
  char *v27; // [rsp+38h] [rbp-50h] BYREF
  const char *v28; // [rsp+40h] [rbp-48h] BYREF
  __int64 v29; // [rsp+48h] [rbp-40h]

  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E90D0), (__m128i)(unsigned __int64)nullsub_266);
  sub_2F2A730(qword_4AF0060, "list-burr", "Bottom-up register reduction list scheduling", sub_2F2B690);
  sub_2E1D380(qword_4AEF180, qword_4AF0060);
  __cxa_atexit(sub_2E11E00, qword_4AF0060, &off_47CFE00);
  sub_2F2A730(qword_4AF0020, "source", "Similar to list-burr but schedules in source order when possible", sub_2F2B9E0);
  sub_2E1D380(qword_4AEF180, qword_4AF0020);
  __cxa_atexit(sub_2E11E00, qword_4AF0020, &off_47CFE00);
  sub_2F2A730(
    qword_4AEFFE0,
    "list-hybrid",
    "Bottom-up register pressure aware list scheduling which tries to balance latency and register pressure",
    sub_2F2BD40);
  sub_2E1D380(qword_4AEF180, qword_4AEFFE0);
  __cxa_atexit(sub_2E11E00, qword_4AEFFE0, &off_47CFE00);
  sub_2F2A730(
    qword_4AEFFA0,
    "list-ilp",
    "Bottom-up register pressure aware list scheduling which tries to balance ILP and register pressure",
    sub_2F2B160);
  sub_2E1D380(qword_4AEF180, qword_4AEFFA0);
  __cxa_atexit(sub_2E11E00, qword_4AEFFA0, &off_47CFE00);
  v22 = &v27;
  v28 = "Disable cycle-level precision during preRA scheduling";
  v21 = &v26;
  v29 = 53;
  v25 = 0;
  v27 = &v25;
  v26 = 1;
  v23 = &v28;
  sub_2F2A780(qword_4AEFEE0, "disable-sched-cycles", &v26, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AEFEE0, &off_47CFE00);
  v29 = 46;
  v28 = "Disable regpressure priority in sched=list-ilp";
  v25 = 0;
  v27 = &v25;
  v26 = 1;
  sub_2F2A940(qword_4AEFE20, "disable-sched-reg-pressure", &v26, &v27, &v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AEFE20, &off_47CFE00);
  qword_4AEFD70 = 0;
  qword_4AEFD78 = 0;
  qword_4AEFD60 = (__int64)&off_4A6E058;
  qword_4AEFD68 = (unsigned int)qword_4AEFD68 & 0x80000000;
  qword_4AEFD80 = 0;
  qword_4AEFD88 = 0;
  qword_4AEFD90 = 0;
  qword_4AEFD98 = 0;
  qword_4AEFDA0 = (__int64)&qword_4AEFDB0;
  qword_4AEFDA8 = 0x100000000LL;
  qword_4AEFDB8 = (__int64)&qword_4AEFDD0;
  qword_4AEFDC0 = 1;
  dword_4AEFDC8 = 0;
  byte_4AEFDCC = 1;
  v0 = sub_259AC30(sub_1F6C9D0, &qword_4AEFDB0);
  v1 = (unsigned int)qword_4AEFDA8;
  if ( HIDWORD(qword_4AEFDA8) < (unsigned __int64)(unsigned int)qword_4AEFDA8 + 1 )
  {
    v24 = v0;
    sub_25D6060(&qword_4AEFDB0 - 2, &qword_4AEFDB0, (unsigned int)qword_4AEFDA8 + 1LL, 8);
    v1 = (unsigned int)qword_4AEFDA8;
    v0 = v24;
  }
  v2 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4AEFDA0 + 8 * v1) = v0;
  word_4AEFDE8 = 0;
  xmmword_4AEFDF8 = 0;
  qword_4AEFDE0 = (__int64)&off_4A64730;
  xmmword_4AEFE08 = (__int128)v2;
  LODWORD(qword_4AEFDA8) = qword_4AEFDA8 + 1;
  qword_4AEFD60 = (__int64)off_4A6DFF0;
  byte_4AEFDD8 = 0;
  qword_4AEFDF0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEFD60, "disable-sched-live-uses", 23);
  byte_4AEFDD8 = 1;
  qword_4AEFD88 = 43;
  BYTE2(qword_4AEFD68) = BYTE2(qword_4AEFD68) & 0x9F | 0x20;
  word_4AEFDE8 = 257;
  qword_4AEFD80 = (__int64)"Disable live use priority in sched=list-ilp";
  sub_259EC40(&qword_4AEFD60);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEFD60, &off_47CFE00);
  qword_4AEFCB0 = 0;
  qword_4AEFCE0 = (__int64)&qword_4AEFCF0;
  qword_4AEFCB8 = 0;
  qword_4AEFCA0 = (__int64)&off_4A6E058;
  qword_4AEFCA8 = (unsigned int)qword_4AEFCA8 & 0x80000000;
  qword_4AEFCC0 = 0;
  qword_4AEFCC8 = 0;
  qword_4AEFCD0 = 0;
  qword_4AEFCD8 = 0;
  qword_4AEFCE8 = 0x100000000LL;
  qword_4AEFCF8 = (__int64)&qword_4AEFD10;
  qword_4AEFD00 = 1;
  dword_4AEFD08 = 0;
  byte_4AEFD0C = 1;
  v3 = sub_259AC30(sub_1F6C9D0, &qword_4AEFCF0);
  v4 = (unsigned int)qword_4AEFCE8;
  if ( HIDWORD(qword_4AEFCE8) < (unsigned __int64)(unsigned int)qword_4AEFCE8 + 1 )
  {
    v24 = v3;
    sub_25D6060(&qword_4AEFCF0 - 2, &qword_4AEFCF0, (unsigned int)qword_4AEFCE8 + 1LL, 8);
    v4 = (unsigned int)qword_4AEFCE8;
    v3 = v24;
  }
  v5 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4AEFCE0 + 8 * v4) = v3;
  xmmword_4AEFD38 = 0;
  xmmword_4AEFD48 = (__int128)v5;
  qword_4AEFD20 = (__int64)&off_4A64730;
  word_4AEFD28 = 0;
  LODWORD(qword_4AEFCE8) = qword_4AEFCE8 + 1;
  qword_4AEFCA0 = (__int64)off_4A6DFF0;
  byte_4AEFD18 = 0;
  qword_4AEFD30 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEFCA0, "disable-sched-vrcycle", 21);
  byte_4AEFD18 = 0;
  qword_4AEFCC8 = 50;
  BYTE2(qword_4AEFCA8) = BYTE2(qword_4AEFCA8) & 0x9F | 0x20;
  word_4AEFD28 = 256;
  qword_4AEFCC0 = (__int64)"Disable virtual register cycle interference checks";
  sub_259EC40(&qword_4AEFCA0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEFCA0, &off_47CFE00);
  v28 = "Disable physreg def-use affinity";
  v29 = 32;
  v25 = 0;
  v27 = &v25;
  v26 = 1;
  sub_2F2A940(qword_4AEFBE0, "disable-sched-physreg-join", v21, v22, v23);
  __cxa_atexit(sub_1F6C9D0, qword_4AEFBE0, &off_47CFE00);
  v25 = 1;
  v28 = "Disable no-stall priority in sched=list-ilp";
  v29 = 43;
  v27 = &v25;
  v26 = 1;
  sub_2F2A780(qword_4AEFB20, "disable-sched-stalls", v21, v22, v23);
  __cxa_atexit(sub_1F6C9D0, qword_4AEFB20, &off_47CFE00);
  qword_4AEFA70 = 0;
  qword_4AEFAA0 = (__int64)&qword_4AEFAB0;
  qword_4AEFA78 = 0;
  qword_4AEFA60 = (__int64)&off_4A6E058;
  qword_4AEFA68 = (unsigned int)qword_4AEFA68 & 0x80000000;
  qword_4AEFA80 = 0;
  qword_4AEFA88 = 0;
  qword_4AEFA90 = 0;
  qword_4AEFA98 = 0;
  qword_4AEFAA8 = 0x100000000LL;
  qword_4AEFAB8 = (__int64)&qword_4AEFAD0;
  qword_4AEFAC0 = 1;
  dword_4AEFAC8 = 0;
  byte_4AEFACC = 1;
  v6 = sub_259AC30(sub_1F6C9D0, &qword_4AEFAB0);
  v7 = (unsigned int)qword_4AEFAA8;
  if ( HIDWORD(qword_4AEFAA8) < (unsigned __int64)(unsigned int)qword_4AEFAA8 + 1 )
  {
    v24 = v6;
    sub_25D6060(&qword_4AEFAB0 - 2, &qword_4AEFAB0, (unsigned int)qword_4AEFAA8 + 1LL, 8);
    v7 = (unsigned int)qword_4AEFAA8;
    v6 = v24;
  }
  v8 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4AEFAA0 + 8 * v7) = v6;
  word_4AEFAE8 = 0;
  xmmword_4AEFAF8 = 0;
  qword_4AEFAE0 = (__int64)&off_4A64730;
  xmmword_4AEFB08 = (__int128)v8;
  LODWORD(qword_4AEFAA8) = qword_4AEFAA8 + 1;
  qword_4AEFA60 = (__int64)off_4A6DFF0;
  byte_4AEFAD8 = 0;
  qword_4AEFAF0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEFA60, "disable-sched-critical-path", 27);
  byte_4AEFAD8 = 0;
  qword_4AEFA88 = 48;
  BYTE2(qword_4AEFA68) = BYTE2(qword_4AEFA68) & 0x9F | 0x20;
  word_4AEFAE8 = 256;
  qword_4AEFA80 = (__int64)"Disable critical path priority in sched=list-ilp";
  sub_259EC40(&qword_4AEFA60);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEFA60, &off_47CFE00);
  v27 = &v25;
  v29 = 51;
  v28 = "Disable scheduled-height priority in sched=list-ilp";
  v25 = 0;
  v26 = 1;
  sub_2F2A780(qword_4AEF9A0, "disable-sched-height", v21, v22, v23);
  __cxa_atexit(sub_1F6C9D0, qword_4AEF9A0, &off_47CFE00);
  qword_4AEF8F0 = 0;
  qword_4AEF920 = (__int64)&qword_4AEF930;
  qword_4AEF8F8 = 0;
  qword_4AEF8E0 = (__int64)&off_4A6E058;
  qword_4AEF8E8 = (unsigned int)qword_4AEF8E8 & 0x80000000;
  qword_4AEF900 = 0;
  qword_4AEF908 = 0;
  qword_4AEF910 = 0;
  qword_4AEF918 = 0;
  qword_4AEF928 = 0x100000000LL;
  qword_4AEF938 = (__int64)&qword_4AEF950;
  qword_4AEF940 = 1;
  dword_4AEF948 = 0;
  byte_4AEF94C = 1;
  v9 = sub_259AC30(sub_1F6C9D0, &qword_4AEF930);
  v10 = (unsigned int)qword_4AEF928;
  v11 = (unsigned int)qword_4AEF928 + 1LL;
  if ( HIDWORD(qword_4AEF928) < v11 )
  {
    sub_25D6060(&qword_4AEF930 - 2, &qword_4AEF930, v11, 8);
    v10 = (unsigned int)qword_4AEF928;
  }
  v12 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4AEF920 + 8 * v10) = v9;
  word_4AEF968 = 0;
  xmmword_4AEF978 = 0;
  xmmword_4AEF988 = (__int128)v12;
  qword_4AEF960 = (__int64)&off_4A64730;
  LODWORD(qword_4AEF928) = qword_4AEF928 + 1;
  byte_4AEF958 = 0;
  qword_4AEF8E0 = (__int64)off_4A6DFF0;
  qword_4AEF970 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEF8E0, "disable-2addr-hack", 18);
  byte_4AEF958 = 1;
  qword_4AEF908 = 36;
  BYTE2(qword_4AEF8E8) = BYTE2(qword_4AEF8E8) & 0x9F | 0x20;
  word_4AEF968 = 257;
  qword_4AEF900 = (__int64)"Disable scheduler's two-address hack";
  sub_259EC40(&qword_4AEF8E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEF8E0, &off_47CFE00);
  qword_4AEF830 = 0;
  qword_4AEF860 = (__int64)&qword_4AEF870;
  qword_4AEF838 = 0;
  qword_4AEF820 = (__int64)&off_4A6E058;
  qword_4AEF828 = (unsigned int)qword_4AEF828 & 0x80000000;
  qword_4AEF840 = 0;
  qword_4AEF848 = 0;
  qword_4AEF850 = 0;
  qword_4AEF858 = 0;
  qword_4AEF868 = 0x100000000LL;
  qword_4AEF878 = (__int64)&qword_4AEF890;
  qword_4AEF880 = 1;
  dword_4AEF888 = 0;
  byte_4AEF88C = 1;
  v13 = sub_259AC30(sub_1F6C9D0, &qword_4AEF870);
  v14 = (unsigned int)qword_4AEF868;
  v15 = (unsigned int)qword_4AEF868 + 1LL;
  if ( HIDWORD(qword_4AEF868) < v15 )
  {
    sub_25D6060(&qword_4AEF870 - 2, &qword_4AEF870, v15, 8);
    v14 = (unsigned int)qword_4AEF868;
  }
  *(_QWORD *)(qword_4AEF860 + 8 * v14) = v13;
  xmmword_4AEF8B8 = 0;
  LODWORD(qword_4AEF868) = qword_4AEF868 + 1;
  qword_4AEF8A0 = (__int64)&off_4A692B8;
  dword_4AEF898 = 0;
  byte_4AEF8AC = 0;
  qword_4AEF820 = (__int64)off_4A6DF20;
  dword_4AEF8A8 = 0;
  qword_4AEF8B0 = (__int64)off_49D91C8;
  xmmword_4AEF8C8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E90D8),
                                (__m128i)(unsigned __int64)nullsub_291);
  sub_259F400(&qword_4AEF820, "max-sched-reorder", 17);
  dword_4AEF898 = 6;
  byte_4AEF8AC = 1;
  dword_4AEF8A8 = 6;
  qword_4AEF848 = 76;
  BYTE2(qword_4AEF828) = BYTE2(qword_4AEF828) & 0x9F | 0x20;
  qword_4AEF840 = (__int64)"Number of instructions to allow ahead of the critical path in sched=list-ilp";
  sub_259EC40(&qword_4AEF820);
  __cxa_atexit(sub_20B86E0, &qword_4AEF820, &off_47CFE00);
  qword_4AEF7C0 = 1;
  qword_4AEF7A0 = (__int64)&qword_4AEF7B0;
  qword_4AEF770 = 0;
  qword_4AEF760 = (__int64)&off_4A6E058;
  qword_4AEF768 = (unsigned int)qword_4AEF768 & 0x80000000;
  qword_4AEF778 = 0;
  qword_4AEF780 = 0;
  qword_4AEF788 = 0;
  qword_4AEF790 = 0;
  qword_4AEF798 = 0;
  qword_4AEF7A8 = 0x100000000LL;
  qword_4AEF7B8 = (__int64)&qword_4AEF7D0;
  dword_4AEF7C8 = 0;
  byte_4AEF7CC = 1;
  v16 = sub_259AC30(sub_20B86E0, &qword_4AEF7B0);
  v17 = (unsigned int)qword_4AEF7A8;
  v18 = (unsigned int)qword_4AEF7A8 + 1LL;
  if ( HIDWORD(qword_4AEF7A8) < v18 )
  {
    sub_25D6060(&qword_4AEF7B0 - 2, &qword_4AEF7B0, v18, 8);
    v17 = (unsigned int)qword_4AEF7A8;
  }
  *(_QWORD *)(qword_4AEF7A0 + 8 * v17) = v16;
  xmmword_4AEF7F8 = 0;
  LODWORD(qword_4AEF7A8) = qword_4AEF7A8 + 1;
  qword_4AEF7E0 = (__int64)&off_4A64710;
  dword_4AEF7D8 = 0;
  byte_4AEF7EC = 0;
  qword_4AEF760 = (__int64)off_4A6DEB8;
  dword_4AEF7E8 = 0;
  qword_4AEF7F0 = (__int64)off_49D9228;
  xmmword_4AEF808 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E90E0),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AEF760, "sched-avg-ipc", 13);
  dword_4AEF7D8 = 1;
  byte_4AEF7EC = 1;
  dword_4AEF7E8 = 1;
  qword_4AEF788 = 51;
  BYTE2(qword_4AEF768) = BYTE2(qword_4AEF768) & 0x9F | 0x20;
  qword_4AEF780 = (__int64)"Average inst/cycle when no target itinerary exists.";
  sub_259EC40(&qword_4AEF760);
  return __cxa_atexit(sub_1F6C940, &qword_4AEF760, &off_47CFE00);
}

