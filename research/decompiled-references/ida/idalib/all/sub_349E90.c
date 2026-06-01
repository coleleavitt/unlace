int __fastcall sub_349E90(const char *a1)
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

  qword_2D08A10 = 0;
  qword_2D08A18 = 0;
  qword_2D08A20 = 0;
  qword_2D08A00 = (__int64)&off_2C758B0;
  qword_2D08A08 = (unsigned int)qword_2D08A08 & 0x80000000;
  qword_2D08A48 = 0x100000000LL;
  qword_2D08A28 = 0;
  qword_2D08A30 = 0;
  qword_2D08A38 = 0;
  qword_2D08A40 = (__int64)&unk_2D08A50;
  qword_2D08A58 = (__int64)&unk_2D08A70;
  qword_2D08A60 = 1;
  dword_2D08A68 = 0;
  byte_2D08A6C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D08A48;
  v3 = (unsigned int)qword_2D08A48 + 1LL;
  if ( v3 > HIDWORD(qword_2D08A48) )
  {
    v24.m128i_i64[0] = v1;
    sub_2237220((char *)&unk_2D08A50 - 16, &unk_2D08A50, v3, 8);
    v2 = (unsigned int)qword_2D08A48;
    v1 = v24.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D08A40 + 8 * v2) = v1;
  qword_2D08A80 = (__int64)off_2C714E8;
  qword_2D08A00 = (__int64)off_2C75848;
  v24 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  word_2D08A88 = 0;
  xmmword_2D08AA8 = (__int128)v24;
  qword_2D08A90 = (__int64)off_2BEAB08;
  LODWORD(qword_2D08A48) = qword_2D08A48 + 1;
  byte_2D08A78 = 0;
  sub_2217250(&qword_2D08A00, "spp-all-backedges", 17);
  word_2D08A88 = 256;
  byte_2D08A78 = 0;
  BYTE2(qword_2D08A08) = BYTE2(qword_2D08A08) & 0x9F | 0x20;
  sub_2218140(&qword_2D08A00);
  __cxa_atexit(sub_200E190, &qword_2D08A00, &off_2B25620);
  qword_2D08950 = 0;
  qword_2D08940 = (__int64)&off_2C758B0;
  qword_2D08948 = (unsigned int)qword_2D08948 & 0x80000000;
  qword_2D08988 = 0x100000000LL;
  qword_2D08958 = 0;
  qword_2D08960 = 0;
  qword_2D08968 = 0;
  qword_2D08970 = 0;
  qword_2D08978 = 0;
  qword_2D08980 = (__int64)&unk_2D08990;
  qword_2D08998 = (__int64)&unk_2D089B0;
  qword_2D089A0 = 1;
  dword_2D089A8 = 0;
  byte_2D089AC = 1;
  v4 = sub_2210FF0((const char *)sub_200E190);
  v5 = (unsigned int)qword_2D08988;
  v6 = (unsigned int)qword_2D08988 + 1LL;
  if ( v6 > HIDWORD(qword_2D08988) )
  {
    v25 = v4;
    sub_2237220((char *)&unk_2D08990 - 16, &unk_2D08990, v6, 8);
    v5 = (unsigned int)qword_2D08988;
    v4 = v25;
  }
  *(_QWORD *)(qword_2D08980 + 8 * v5) = v4;
  xmmword_2D089E8 = (__int128)_mm_loadh_ps((const double *)&off_2C77900);
  LODWORD(qword_2D08988) = qword_2D08988 + 1;
  qword_2D089C0 = (__int64)off_2C71BB0;
  dword_2D089B8 = 0;
  byte_2D089CC = 0;
  qword_2D08940 = (__int64)off_2C75778;
  dword_2D089C8 = 0;
  qword_2D089D0 = (__int64)off_2BEAB68;
  sub_2217250(&qword_2D08940, "spp-counted-loop-trip-width", 27);
  dword_2D089B8 = 32;
  byte_2D089CC = 1;
  dword_2D089C8 = 32;
  BYTE2(qword_2D08948) = BYTE2(qword_2D08948) & 0x9F | 0x20;
  sub_2218140(&qword_2D08940);
  __cxa_atexit(sub_20141D0, &qword_2D08940, &off_2B25620);
  qword_2D08890 = 0;
  qword_2D08880 = (__int64)&off_2C758B0;
  qword_2D08888 = (unsigned int)qword_2D08888 & 0x80000000;
  qword_2D088C8 = 0x100000000LL;
  qword_2D08898 = 0;
  qword_2D088A0 = 0;
  qword_2D088A8 = 0;
  qword_2D088B0 = 0;
  qword_2D088B8 = 0;
  qword_2D088C0 = (__int64)&unk_2D088D0;
  qword_2D088D8 = (__int64)&unk_2D088F0;
  qword_2D088E0 = 1;
  dword_2D088E8 = 0;
  byte_2D088EC = 1;
  v7 = sub_2210FF0((const char *)sub_20141D0);
  v8 = (unsigned int)qword_2D088C8;
  v9 = (unsigned int)qword_2D088C8 + 1LL;
  if ( v9 > HIDWORD(qword_2D088C8) )
  {
    v25 = v7;
    sub_2237220((char *)&unk_2D088D0 - 16, &unk_2D088D0, v9, 8);
    v8 = (unsigned int)qword_2D088C8;
    v7 = v25;
  }
  v10 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_2D088C0 + 8 * v8) = v7;
  qword_2D08900 = (__int64)off_2C714E8;
  qword_2D08880 = (__int64)off_2C75848;
  word_2D08908 = 0;
  xmmword_2D08928 = (__int128)v10;
  qword_2D08910 = (__int64)off_2BEAB08;
  LODWORD(qword_2D088C8) = qword_2D088C8 + 1;
  byte_2D088F8 = 0;
  sub_2217250(&qword_2D08880, "spp-split-backedge", 18);
  word_2D08908 = 256;
  byte_2D088F8 = 0;
  BYTE2(qword_2D08888) = BYTE2(qword_2D08888) & 0x9F | 0x20;
  sub_2218140(&qword_2D08880);
  __cxa_atexit(sub_200E190, &qword_2D08880, &off_2B25620);
  qword_2D087D0 = 0;
  qword_2D087C0 = (__int64)&off_2C758B0;
  qword_2D087C8 = (unsigned int)qword_2D087C8 & 0x80000000;
  qword_2D08808 = 0x100000000LL;
  qword_2D087D8 = 0;
  qword_2D087E0 = 0;
  qword_2D087E8 = 0;
  qword_2D087F0 = 0;
  qword_2D087F8 = 0;
  qword_2D08800 = (__int64)&unk_2D08810;
  qword_2D08818 = (__int64)&unk_2D08830;
  qword_2D08820 = 1;
  dword_2D08828 = 0;
  byte_2D0882C = 1;
  v11 = sub_2210FF0((const char *)sub_200E190);
  v12 = (unsigned int)qword_2D08808;
  v13 = (unsigned int)qword_2D08808 + 1LL;
  if ( v13 > HIDWORD(qword_2D08808) )
  {
    v25 = v11;
    sub_2237220((char *)&unk_2D08810 - 16, &unk_2D08810, v13, 8);
    v12 = (unsigned int)qword_2D08808;
    v11 = v25;
  }
  v14 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_2D08800 + 8 * v12) = v11;
  qword_2D08840 = (__int64)off_2C714E8;
  word_2D08848 = 0;
  qword_2D087C0 = (__int64)off_2C75848;
  xmmword_2D08868 = (__int128)v14;
  qword_2D08850 = (__int64)off_2BEAB08;
  LODWORD(qword_2D08808) = qword_2D08808 + 1;
  byte_2D08838 = 0;
  sub_2217250(&qword_2D087C0, "spp-no-entry", 12);
  word_2D08848 = 256;
  byte_2D08838 = 0;
  BYTE2(qword_2D087C8) = BYTE2(qword_2D087C8) & 0x9F | 0x20;
  sub_2218140(&qword_2D087C0);
  __cxa_atexit(sub_200E190, &qword_2D087C0, &off_2B25620);
  qword_2D08710 = 0;
  qword_2D08700 = (__int64)&off_2C758B0;
  qword_2D08708 = (unsigned int)qword_2D08708 & 0x80000000;
  qword_2D08748 = 0x100000000LL;
  qword_2D08718 = 0;
  qword_2D08720 = 0;
  qword_2D08728 = 0;
  qword_2D08730 = 0;
  qword_2D08738 = 0;
  qword_2D08740 = (__int64)&unk_2D08750;
  qword_2D08758 = (__int64)&unk_2D08770;
  qword_2D08760 = 1;
  dword_2D08768 = 0;
  byte_2D0876C = 1;
  v15 = sub_2210FF0((const char *)sub_200E190);
  v16 = (unsigned int)qword_2D08748;
  v17 = (unsigned int)qword_2D08748 + 1LL;
  if ( v17 > HIDWORD(qword_2D08748) )
  {
    v25 = v15;
    sub_2237220((char *)&unk_2D08750 - 16, &unk_2D08750, v17, 8);
    v16 = (unsigned int)qword_2D08748;
    v15 = v25;
  }
  v18 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_2D08740 + 8 * v16) = v15;
  qword_2D08780 = (__int64)off_2C714E8;
  qword_2D08700 = (__int64)off_2C75848;
  word_2D08788 = 0;
  xmmword_2D087A8 = (__int128)v18;
  qword_2D08790 = (__int64)off_2BEAB08;
  LODWORD(qword_2D08748) = qword_2D08748 + 1;
  byte_2D08778 = 0;
  sub_2217250(&qword_2D08700, "spp-no-call", 11);
  word_2D08788 = 256;
  byte_2D08778 = 0;
  BYTE2(qword_2D08708) = BYTE2(qword_2D08708) & 0x9F | 0x20;
  sub_2218140(&qword_2D08700);
  __cxa_atexit(sub_200E190, &qword_2D08700, &off_2B25620);
  qword_2D08650 = 0;
  qword_2D08640 = (__int64)&off_2C758B0;
  qword_2D08648 = (unsigned int)qword_2D08648 & 0x80000000;
  qword_2D08688 = 0x100000000LL;
  qword_2D08658 = 0;
  qword_2D08660 = 0;
  qword_2D08668 = 0;
  qword_2D08670 = 0;
  qword_2D08678 = 0;
  qword_2D08680 = (__int64)&unk_2D08690;
  qword_2D08698 = (__int64)&unk_2D086B0;
  qword_2D086A0 = 1;
  dword_2D086A8 = 0;
  byte_2D086AC = 1;
  v19 = sub_2210FF0((const char *)sub_200E190);
  v20 = (unsigned int)qword_2D08688;
  v21 = (unsigned int)qword_2D08688 + 1LL;
  if ( v21 > HIDWORD(qword_2D08688) )
  {
    v25 = v19;
    sub_2237220((char *)&unk_2D08690 - 16, &unk_2D08690, v21, 8);
    v20 = (unsigned int)qword_2D08688;
    v19 = v25;
  }
  v22 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_2D08680 + 8 * v20) = v19;
  word_2D086C8 = 0;
  qword_2D086C0 = (__int64)off_2C714E8;
  qword_2D08640 = (__int64)off_2C75848;
  qword_2D086D0 = (__int64)off_2BEAB08;
  xmmword_2D086E8 = (__int128)v22;
  LODWORD(qword_2D08688) = qword_2D08688 + 1;
  byte_2D086B8 = 0;
  sub_2217250(&qword_2D08640, "spp-no-backedge", 15);
  word_2D086C8 = 256;
  byte_2D086B8 = 0;
  BYTE2(qword_2D08648) = BYTE2(qword_2D08648) & 0x9F | 0x20;
  sub_2218140(&qword_2D08640);
  return __cxa_atexit(sub_200E190, &qword_2D08640, &off_2B25620);
}
