int sub_344A30()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v10; // rdx
  __int128 v12; // [rsp+0h] [rbp-48h] BYREF
  __m128i v13[3]; // [rsp+10h] [rbp-38h] BYREF

  v0 = j__strlen("Max number of memchecks allowed per eliminated load on average");
  qword_2D056D0 = 0;
  v1 = v0;
  qword_2D056D8 = 0;
  qword_2D056E0 = 0;
  qword_2D056C0 = (__int64)&off_2C758B0;
  qword_2D056C8 = (unsigned int)qword_2D056C8 & 0x80000000;
  qword_2D05708 = 0x100000000LL;
  qword_2D056E8 = 0;
  qword_2D056F0 = 0;
  qword_2D056F8 = 0;
  qword_2D05700 = (__int64)&unk_2D05710;
  qword_2D05718 = (__int64)&unk_2D05730;
  qword_2D05720 = 1;
  dword_2D05728 = 0;
  byte_2D0572C = 1;
  v2 = sub_2210FF0("Max number of memchecks allowed per eliminated load on average");
  v3 = (unsigned int)qword_2D05708;
  v4 = (unsigned int)qword_2D05708 + 1LL;
  if ( v4 > HIDWORD(qword_2D05708) )
  {
    *(_QWORD *)&v12 = v2;
    sub_2237220((char *)&unk_2D05710 - 16, &unk_2D05710, v4, 8);
    v3 = (unsigned int)qword_2D05708;
    v2 = v12;
  }
  *(_QWORD *)(qword_2D05700 + 8 * v3) = v2;
  qword_2D05740 = (__int64)off_2C712D0;
  qword_2D056C0 = (__int64)off_2C75710;
  xmmword_2D05768 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  v12 = xmmword_2D05768;
  LODWORD(qword_2D05708) = qword_2D05708 + 1;
  qword_2D05750 = (__int64)off_2BEAB98;
  dword_2D05738 = 0;
  dword_2D05748 = 0;
  byte_2D0574C = 0;
  sub_2217250(&qword_2D056C0, "runtime-check-per-loop-load-elim", 32);
  qword_2D056E8 = v1;
  dword_2D05738 = 1;
  byte_2D0574C = 1;
  dword_2D05748 = 1;
  BYTE2(qword_2D056C8) = BYTE2(qword_2D056C8) & 0x9F | 0x20;
  qword_2D056E0 = (__int64)"Max number of memchecks allowed per eliminated load on average";
  sub_2218140(&qword_2D056C0);
  __cxa_atexit(sub_1FED260, &qword_2D056C0, &off_2B25620);
  v5 = j__strlen("The maximum number of SCEV checks allowed for Loop Load Elimination");
  byte_2D0566C = 1;
  qword_2D05610 = 0;
  v6 = v5;
  qword_2D05600 = (__int64)&off_2C758B0;
  qword_2D05608 = (unsigned int)qword_2D05608 & 0x80000000;
  qword_2D05648 = 0x100000000LL;
  qword_2D05618 = 0;
  qword_2D05620 = 0;
  qword_2D05628 = 0;
  qword_2D05630 = 0;
  qword_2D05638 = 0;
  qword_2D05640 = (__int64)&unk_2D05650;
  qword_2D05658 = (__int64)&unk_2D05670;
  qword_2D05660 = 1;
  dword_2D05668 = 0;
  v7 = sub_2210FF0("The maximum number of SCEV checks allowed for Loop Load Elimination");
  v8 = (unsigned int)qword_2D05648;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2D05648 + 1LL;
  if ( v10 > HIDWORD(qword_2D05648) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_2237220((char *)&unk_2D05650 - 16, &unk_2D05650, v10, 8);
    v8 = (unsigned int)qword_2D05648;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2D05640 + 8 * v8) = v7;
  qword_2D05680 = (__int64)off_2C712D0;
  qword_2D05600 = (__int64)off_2C75710;
  qword_2D05690 = (__int64)off_2BEAB98;
  xmmword_2D056A8 = (__int128)si128;
  LODWORD(qword_2D05648) = qword_2D05648 + 1;
  dword_2D05678 = 0;
  dword_2D05688 = 0;
  byte_2D0568C = 0;
  sub_2217250(&qword_2D05600, "loop-load-elimination-scev-check-threshold", 42);
  qword_2D05628 = v6;
  dword_2D05678 = 8;
  byte_2D0568C = 1;
  dword_2D05688 = 8;
  BYTE2(qword_2D05608) = BYTE2(qword_2D05608) & 0x9F | 0x20;
  qword_2D05620 = (__int64)"The maximum number of SCEV checks allowed for Loop Load Elimination";
  sub_2218140(&qword_2D05600);
  return __cxa_atexit(sub_1FED260, &qword_2D05600, &off_2B25620);
}
