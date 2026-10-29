int __fastcall sub_346AD0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __m128i v10; // xmm2
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __m128i v14; // xmm3
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm4
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm5
  __m128i v24; // [rsp+0h] [rbp-48h] BYREF
  __int64 v25; // [rsp+18h] [rbp-30h]

  qword_2CDEAF0 = 0;
  qword_2CDEAF8 = 0;
  qword_2CDEB00 = 0;
  qword_2CDEAE0 = (__int64)&off_2C4B8B0;
  qword_2CDEAE8 = (unsigned int)qword_2CDEAE8 & 0x80000000;
  qword_2CDEB28 = 0x100000000LL;
  qword_2CDEB08 = 0;
  qword_2CDEB10 = 0;
  qword_2CDEB18 = 0;
  qword_2CDEB20 = (__int64)&unk_2CDEB30;
  qword_2CDEB38 = (__int64)&unk_2CDEB50;
  qword_2CDEB40 = 1;
  dword_2CDEB48 = 0;
  byte_2CDEB4C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CDEB28;
  v3 = (unsigned int)qword_2CDEB28 + 1LL;
  if ( v3 > HIDWORD(qword_2CDEB28) )
  {
    v24.m128i_i64[0] = v1;
    sub_22134E0((char *)&unk_2CDEB30 - 16, &unk_2CDEB30, v3, 8);
    v2 = (unsigned int)qword_2CDEB28;
    v1 = v24.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDEB20 + 8 * v2) = v1;
  qword_2CDEB60 = (__int64)off_2C474E8;
  qword_2CDEAE0 = (__int64)off_2C4B848;
  v24 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  word_2CDEB68 = 0;
  xmmword_2CDEB88 = (__int128)v24;
  qword_2CDEB70 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDEB28) = qword_2CDEB28 + 1;
  byte_2CDEB58 = 0;
  sub_21F3510(&qword_2CDEAE0, "spp-all-backedges", 17);
  word_2CDEB68 = 256;
  byte_2CDEB58 = 0;
  BYTE2(qword_2CDEAE8) = BYTE2(qword_2CDEAE8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDEAE0);
  __cxa_atexit(sub_1FEA450, &qword_2CDEAE0, &off_2AFC540);
  qword_2CDEA30 = 0;
  qword_2CDEA20 = (__int64)&off_2C4B8B0;
  qword_2CDEA28 = (unsigned int)qword_2CDEA28 & 0x80000000;
  qword_2CDEA68 = 0x100000000LL;
  qword_2CDEA38 = 0;
  qword_2CDEA40 = 0;
  qword_2CDEA48 = 0;
  qword_2CDEA50 = 0;
  qword_2CDEA58 = 0;
  qword_2CDEA60 = (__int64)&unk_2CDEA70;
  qword_2CDEA78 = (__int64)&unk_2CDEA90;
  qword_2CDEA80 = 1;
  dword_2CDEA88 = 0;
  byte_2CDEA8C = 1;
  v4 = sub_21ED2B0((const char *)sub_1FEA450);
  v5 = (unsigned int)qword_2CDEA68;
  v6 = (unsigned int)qword_2CDEA68 + 1LL;
  if ( v6 > HIDWORD(qword_2CDEA68) )
  {
    v25 = v4;
    sub_22134E0((char *)&unk_2CDEA70 - 16, &unk_2CDEA70, v6, 8);
    v5 = (unsigned int)qword_2CDEA68;
    v4 = v25;
  }
  *(_QWORD *)(qword_2CDEA60 + 8 * v5) = v4;
  xmmword_2CDEAC8 = (__int128)_mm_loadh_ps((const double *)&off_2C4D900);
  LODWORD(qword_2CDEA68) = qword_2CDEA68 + 1;
  qword_2CDEAA0 = (__int64)off_2C47BB0;
  dword_2CDEA98 = 0;
  byte_2CDEAAC = 0;
  qword_2CDEA20 = (__int64)off_2C4B778;
  dword_2CDEAA8 = 0;
  qword_2CDEAB0 = (__int64)off_2BC0BC8;
  sub_21F3510(&qword_2CDEA20, "spp-counted-loop-trip-width", 27);
  dword_2CDEA98 = 32;
  byte_2CDEAAC = 1;
  dword_2CDEAA8 = 32;
  BYTE2(qword_2CDEA28) = BYTE2(qword_2CDEA28) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDEA20);
  __cxa_atexit(sub_1FF0490, &qword_2CDEA20, &off_2AFC540);
  qword_2CDE970 = 0;
  qword_2CDE960 = (__int64)&off_2C4B8B0;
  qword_2CDE968 = (unsigned int)qword_2CDE968 & 0x80000000;
  qword_2CDE9A8 = 0x100000000LL;
  qword_2CDE978 = 0;
  qword_2CDE980 = 0;
  qword_2CDE988 = 0;
  qword_2CDE990 = 0;
  qword_2CDE998 = 0;
  qword_2CDE9A0 = (__int64)&unk_2CDE9B0;
  qword_2CDE9B8 = (__int64)&unk_2CDE9D0;
  qword_2CDE9C0 = 1;
  dword_2CDE9C8 = 0;
  byte_2CDE9CC = 1;
  v7 = sub_21ED2B0((const char *)sub_1FF0490);
  v8 = (unsigned int)qword_2CDE9A8;
  v9 = (unsigned int)qword_2CDE9A8 + 1LL;
  if ( v9 > HIDWORD(qword_2CDE9A8) )
  {
    v25 = v7;
    sub_22134E0((char *)&unk_2CDE9B0 - 16, &unk_2CDE9B0, v9, 8);
    v8 = (unsigned int)qword_2CDE9A8;
    v7 = v25;
  }
  v10 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_2CDE9A0 + 8 * v8) = v7;
  qword_2CDE9E0 = (__int64)off_2C474E8;
  qword_2CDE960 = (__int64)off_2C4B848;
  word_2CDE9E8 = 0;
  xmmword_2CDEA08 = (__int128)v10;
  qword_2CDE9F0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDE9A8) = qword_2CDE9A8 + 1;
  byte_2CDE9D8 = 0;
  sub_21F3510(&qword_2CDE960, "spp-split-backedge", 18);
  word_2CDE9E8 = 256;
  byte_2CDE9D8 = 0;
  BYTE2(qword_2CDE968) = BYTE2(qword_2CDE968) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDE960);
  __cxa_atexit(sub_1FEA450, &qword_2CDE960, &off_2AFC540);
  qword_2CDE8B0 = 0;
  qword_2CDE8A0 = (__int64)&off_2C4B8B0;
  qword_2CDE8A8 = (unsigned int)qword_2CDE8A8 & 0x80000000;
  qword_2CDE8E8 = 0x100000000LL;
  qword_2CDE8B8 = 0;
  qword_2CDE8C0 = 0;
  qword_2CDE8C8 = 0;
  qword_2CDE8D0 = 0;
  qword_2CDE8D8 = 0;
  qword_2CDE8E0 = (__int64)&unk_2CDE8F0;
  qword_2CDE8F8 = (__int64)&unk_2CDE910;
  qword_2CDE900 = 1;
  dword_2CDE908 = 0;
  byte_2CDE90C = 1;
  v11 = sub_21ED2B0((const char *)sub_1FEA450);
  v12 = (unsigned int)qword_2CDE8E8;
  v13 = (unsigned int)qword_2CDE8E8 + 1LL;
  if ( v13 > HIDWORD(qword_2CDE8E8) )
  {
    v25 = v11;
    sub_22134E0((char *)&unk_2CDE8F0 - 16, &unk_2CDE8F0, v13, 8);
    v12 = (unsigned int)qword_2CDE8E8;
    v11 = v25;
  }
  v14 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_2CDE8E0 + 8 * v12) = v11;
  qword_2CDE920 = (__int64)off_2C474E8;
  word_2CDE928 = 0;
  qword_2CDE8A0 = (__int64)off_2C4B848;
  xmmword_2CDE948 = (__int128)v14;
  qword_2CDE930 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDE8E8) = qword_2CDE8E8 + 1;
  byte_2CDE918 = 0;
  sub_21F3510(&qword_2CDE8A0, "spp-no-entry", 12);
  word_2CDE928 = 256;
  byte_2CDE918 = 0;
  BYTE2(qword_2CDE8A8) = BYTE2(qword_2CDE8A8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDE8A0);
  __cxa_atexit(sub_1FEA450, &qword_2CDE8A0, &off_2AFC540);
  qword_2CDE7F0 = 0;
  qword_2CDE7E0 = (__int64)&off_2C4B8B0;
  qword_2CDE7E8 = (unsigned int)qword_2CDE7E8 & 0x80000000;
  qword_2CDE828 = 0x100000000LL;
  qword_2CDE7F8 = 0;
  qword_2CDE800 = 0;
  qword_2CDE808 = 0;
  qword_2CDE810 = 0;
  qword_2CDE818 = 0;
  qword_2CDE820 = (__int64)&unk_2CDE830;
  qword_2CDE838 = (__int64)&unk_2CDE850;
  qword_2CDE840 = 1;
  dword_2CDE848 = 0;
  byte_2CDE84C = 1;
  v15 = sub_21ED2B0((const char *)sub_1FEA450);
  v16 = (unsigned int)qword_2CDE828;
  v17 = (unsigned int)qword_2CDE828 + 1LL;
  if ( v17 > HIDWORD(qword_2CDE828) )
  {
    v25 = v15;
    sub_22134E0((char *)&unk_2CDE830 - 16, &unk_2CDE830, v17, 8);
    v16 = (unsigned int)qword_2CDE828;
    v15 = v25;
  }
  v18 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_2CDE820 + 8 * v16) = v15;
  qword_2CDE860 = (__int64)off_2C474E8;
  qword_2CDE7E0 = (__int64)off_2C4B848;
  word_2CDE868 = 0;
  xmmword_2CDE888 = (__int128)v18;
  qword_2CDE870 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDE828) = qword_2CDE828 + 1;
  byte_2CDE858 = 0;
  sub_21F3510(&qword_2CDE7E0, "spp-no-call", 11);
  word_2CDE868 = 256;
  byte_2CDE858 = 0;
  BYTE2(qword_2CDE7E8) = BYTE2(qword_2CDE7E8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDE7E0);
  __cxa_atexit(sub_1FEA450, &qword_2CDE7E0, &off_2AFC540);
  qword_2CDE730 = 0;
  qword_2CDE720 = (__int64)&off_2C4B8B0;
  qword_2CDE728 = (unsigned int)qword_2CDE728 & 0x80000000;
  qword_2CDE768 = 0x100000000LL;
  qword_2CDE738 = 0;
  qword_2CDE740 = 0;
  qword_2CDE748 = 0;
  qword_2CDE750 = 0;
  qword_2CDE758 = 0;
  qword_2CDE760 = (__int64)&unk_2CDE770;
  qword_2CDE778 = (__int64)&unk_2CDE790;
  qword_2CDE780 = 1;
  dword_2CDE788 = 0;
  byte_2CDE78C = 1;
  v19 = sub_21ED2B0((const char *)sub_1FEA450);
  v20 = (unsigned int)qword_2CDE768;
  v21 = (unsigned int)qword_2CDE768 + 1LL;
  if ( v21 > HIDWORD(qword_2CDE768) )
  {
    v25 = v19;
    sub_22134E0((char *)&unk_2CDE770 - 16, &unk_2CDE770, v21, 8);
    v20 = (unsigned int)qword_2CDE768;
    v19 = v25;
  }
  v22 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_2CDE760 + 8 * v20) = v19;
  word_2CDE7A8 = 0;
  qword_2CDE7A0 = (__int64)off_2C474E8;
  qword_2CDE720 = (__int64)off_2C4B848;
  qword_2CDE7B0 = (__int64)off_2BC0B68;
  xmmword_2CDE7C8 = (__int128)v22;
  LODWORD(qword_2CDE768) = qword_2CDE768 + 1;
  byte_2CDE798 = 0;
  sub_21F3510(&qword_2CDE720, "spp-no-backedge", 15);
  word_2CDE7A8 = 256;
  byte_2CDE798 = 0;
  BYTE2(qword_2CDE728) = BYTE2(qword_2CDE728) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDE720);
  return __cxa_atexit(sub_1FEA450, &qword_2CDE720, &off_2AFC540);
}

