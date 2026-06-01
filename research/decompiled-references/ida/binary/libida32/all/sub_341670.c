int sub_341670()
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
  qword_2CDB7B0 = 0;
  v1 = v0;
  qword_2CDB7B8 = 0;
  qword_2CDB7C0 = 0;
  qword_2CDB7A0 = (__int64)&off_2C4B8B0;
  qword_2CDB7A8 = (unsigned int)qword_2CDB7A8 & 0x80000000;
  qword_2CDB7E8 = 0x100000000LL;
  qword_2CDB7C8 = 0;
  qword_2CDB7D0 = 0;
  qword_2CDB7D8 = 0;
  qword_2CDB7E0 = (__int64)&unk_2CDB7F0;
  qword_2CDB7F8 = (__int64)&unk_2CDB810;
  qword_2CDB800 = 1;
  dword_2CDB808 = 0;
  byte_2CDB80C = 1;
  v2 = sub_21ED2B0("Max number of memchecks allowed per eliminated load on average");
  v3 = (unsigned int)qword_2CDB7E8;
  v4 = (unsigned int)qword_2CDB7E8 + 1LL;
  if ( v4 > HIDWORD(qword_2CDB7E8) )
  {
    *(_QWORD *)&v12 = v2;
    sub_22134E0((char *)&unk_2CDB7F0 - 16, &unk_2CDB7F0, v4, 8);
    v3 = (unsigned int)qword_2CDB7E8;
    v2 = v12;
  }
  *(_QWORD *)(qword_2CDB7E0 + 8 * v3) = v2;
  qword_2CDB820 = (__int64)off_2C472D0;
  qword_2CDB7A0 = (__int64)off_2C4B710;
  xmmword_2CDB848 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  v12 = xmmword_2CDB848;
  LODWORD(qword_2CDB7E8) = qword_2CDB7E8 + 1;
  qword_2CDB830 = (__int64)off_2BC0BF8;
  dword_2CDB818 = 0;
  dword_2CDB828 = 0;
  byte_2CDB82C = 0;
  sub_21F3510(&qword_2CDB7A0, "runtime-check-per-loop-load-elim", 32);
  qword_2CDB7C8 = v1;
  dword_2CDB818 = 1;
  byte_2CDB82C = 1;
  dword_2CDB828 = 1;
  BYTE2(qword_2CDB7A8) = BYTE2(qword_2CDB7A8) & 0x9F | 0x20;
  qword_2CDB7C0 = (__int64)"Max number of memchecks allowed per eliminated load on average";
  sub_21F4400(&qword_2CDB7A0);
  __cxa_atexit(sub_1FC9520, &qword_2CDB7A0, &off_2AFC540);
  v5 = j__strlen("The maximum number of SCEV checks allowed for Loop Load Elimination");
  byte_2CDB74C = 1;
  qword_2CDB6F0 = 0;
  v6 = v5;
  qword_2CDB6E0 = (__int64)&off_2C4B8B0;
  qword_2CDB6E8 = (unsigned int)qword_2CDB6E8 & 0x80000000;
  qword_2CDB728 = 0x100000000LL;
  qword_2CDB6F8 = 0;
  qword_2CDB700 = 0;
  qword_2CDB708 = 0;
  qword_2CDB710 = 0;
  qword_2CDB718 = 0;
  qword_2CDB720 = (__int64)&unk_2CDB730;
  qword_2CDB738 = (__int64)&unk_2CDB750;
  qword_2CDB740 = 1;
  dword_2CDB748 = 0;
  v7 = sub_21ED2B0("The maximum number of SCEV checks allowed for Loop Load Elimination");
  v8 = (unsigned int)qword_2CDB728;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2CDB728 + 1LL;
  if ( v10 > HIDWORD(qword_2CDB728) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_22134E0((char *)&unk_2CDB730 - 16, &unk_2CDB730, v10, 8);
    v8 = (unsigned int)qword_2CDB728;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2CDB720 + 8 * v8) = v7;
  qword_2CDB760 = (__int64)off_2C472D0;
  qword_2CDB6E0 = (__int64)off_2C4B710;
  qword_2CDB770 = (__int64)off_2BC0BF8;
  xmmword_2CDB788 = (__int128)si128;
  LODWORD(qword_2CDB728) = qword_2CDB728 + 1;
  dword_2CDB758 = 0;
  dword_2CDB768 = 0;
  byte_2CDB76C = 0;
  sub_21F3510(&qword_2CDB6E0, "loop-load-elimination-scev-check-threshold", 42);
  qword_2CDB708 = v6;
  dword_2CDB758 = 8;
  byte_2CDB76C = 1;
  dword_2CDB768 = 8;
  BYTE2(qword_2CDB6E8) = BYTE2(qword_2CDB6E8) & 0x9F | 0x20;
  qword_2CDB700 = (__int64)"The maximum number of SCEV checks allowed for Loop Load Elimination";
  sub_21F4400(&qword_2CDB6E0);
  return __cxa_atexit(sub_1FC9520, &qword_2CDB6E0, &off_2AFC540);
}

