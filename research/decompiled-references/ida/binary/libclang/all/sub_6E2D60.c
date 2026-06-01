unsigned __int64 __fastcall sub_6E2D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v11; // rdi
  __m128i si128; // xmm1
  __m128i v13; // xmm1
  __int64 v14; // r13
  __int64 v15; // r13
  _QWORD *v16; // rax
  __int64 v17; // r13
  __m128i v18; // xmm1
  __int16 v19; // ax
  char v20; // cl
  char v21; // dl
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  char v24; // dl
  __m128i v25; // xmm0
  __int64 v26; // rax
  char *v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // rbp
  unsigned __int64 result; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rdi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdi
  __int64 v37; // rsi
  signed __int64 v38; // rsi
  _QWORD *v39; // rdx
  _QWORD *v40; // rax
  void *v41; // rdi
  _QWORD *v42; // r12
  _QWORD *v43; // r12
  size_t v44; // r12
  _QWORD src[8]; // [rsp+18h] [rbp-40h] BYREF

  v11 = a1 + 24;
  *(_DWORD *)(v11 - 24) = 0;
  *(_QWORD *)(a1 + 8) = v11;
  *(_QWORD *)(a1 + 16) = 0;
  sub_25ABF10(v11, 6);
  sub_25ABF10(a1 + 40, 6);
  sub_25ABF10(a1 + 56, 9);
  sub_25ABF10(a1 + 72, 6);
  sub_25ABF10(a1 + 88, 6);
  sub_25ABF10(a1 + 104, 6);
  sub_25ABF10(a1 + 120, 6);
  sub_25ABF10(a1 + 136, 6);
  sub_25ABF10(a1 + 152, 8);
  *(_QWORD *)(a1 + 168) = a1;
  sub_25ABF10(a1 + 176, 6);
  *(_QWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  sub_25ABF10(a1 + 216, 6);
  *(_QWORD *)(a1 + 232) = a1;
  sub_25ABF10(a1 + 240, 6);
  *(_QWORD *)(a1 + 256) = a1;
  sub_25ABF10(a1 + 264, 6);
  *(_QWORD *)(a1 + 280) = a1;
  sub_25ABF10(a1 + 288, 6);
  sub_25ABF10(a1 + 304, 6);
  *(_QWORD *)(a1 + 320) = a1;
  sub_25ABF10(a1 + 328, 6);
  sub_25ABF10(a1 + 344, 6);
  *(_QWORD *)(a1 + 360) = a1;
  sub_25ABF10(a1 + 368, 6);
  sub_25ABF10(a1 + 384, 12);
  *(_QWORD *)(a1 + 400) = a1;
  sub_25ABF10(a1 + 408, 6);
  *(_QWORD *)(a1 + 424) = a1;
  sub_25ABF10(a1 + 432, 6);
  *(_QWORD *)(a1 + 448) = a1;
  sub_25ABF10(a1 + 456, 6);
  sub_25ABF10(a1 + 472, 6);
  sub_25ABF10(a1 + 488, 6);
  sub_25ABF10(a1 + 504, 6);
  sub_25ABF10(a1 + 520, 6);
  sub_25ABF10(a1 + 536, 6);
  *(_QWORD *)(a1 + 552) = a1;
  sub_25ABF10(a1 + 560, 9);
  sub_25ABF10(a1 + 576, 6);
  sub_25ABF10(a1 + 592, 6);
  sub_25ABF10(a1 + 608, 9);
  sub_25ABF10(a1 + 624, 6);
  sub_25ABF10(a1 + 640, 6);
  *(_QWORD *)(a1 + 656) = a1;
  sub_25ABF10(a1 + 664, 6);
  sub_25ABF10(a1 + 680, 6);
  sub_25ABF10(a1 + 696, 6);
  sub_25ABF10(a1 + 712, 6);
  *(_DWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 736) = 0;
  sub_25ABF10(a1 + 752, 6);
  sub_25ABF10(a1 + 768, 6);
  sub_25ABF10(a1 + 784, 6);
  sub_25ABF10(a1 + 800, 6);
  sub_25ABF10(a1 + 816, 6);
  sub_25ABF10(a1 + 832, 6);
  *(_QWORD *)(a1 + 848) = a1;
  sub_25ABF10(a1 + 856, 6);
  sub_25ABF10(a1 + 872, 6);
  sub_25ABF10(a1 + 888, 6);
  sub_25ABF10(a1 + 904, 6);
  sub_25ABF10(a1 + 920, 6);
  sub_25ABF10(a1 + 936, 6);
  sub_25ABF10(a1 + 952, 6);
  *(_QWORD *)(a1 + 968) = a1;
  sub_25ABF10(a1 + 976, 6);
  *(_QWORD *)(a1 + 992) = a1;
  sub_25ABF10(a1 + 1000, 6);
  *(_QWORD *)(a1 + 1016) = a1;
  sub_25ABF10(a1 + 1024, 6);
  *(_DWORD *)(a1 + 1064) = 0;
  *(_QWORD *)(a1 + 1056) = 0;
  *(_DWORD *)(a1 + 1088) = 0;
  *(_QWORD *)(a1 + 1072) = 0;
  *(_QWORD *)(a1 + 1080) = 0;
  *(_DWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1096) = 0;
  *(_QWORD *)(a1 + 1104) = 0;
  *(_DWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = 0;
  *(_DWORD *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  *(_QWORD *)(a1 + 1152) = 0;
  *(_DWORD *)(a1 + 1184) = 0;
  *(_QWORD *)(a1 + 1168) = 0;
  *(_QWORD *)(a1 + 1176) = 0;
  *(_DWORD *)(a1 + 1208) = 0;
  *(_QWORD *)(a1 + 1192) = 0;
  *(_QWORD *)(a1 + 1200) = 0;
  *(_DWORD *)(a1 + 1232) = 0;
  *(_QWORD *)(a1 + 1216) = 0;
  *(_QWORD *)(a1 + 1224) = 0;
  *(_OWORD *)(a1 + 1040) = 0;
  sub_25ABF10(a1 + 1240, 6);
  sub_25ABF10(a1 + 1256, 6);
  sub_25ABF10(a1 + 1272, 6);
  si128 = _mm_load_si128((const __m128i *)byte_3C7E640);
  *(_QWORD *)(a1 + 1320) = a1 + 1336;
  *(_QWORD *)(a1 + 1288) = 0;
  *(_DWORD *)(a1 + 1312) = 0;
  *(_QWORD *)(a1 + 1328) = 0;
  *(_BYTE *)(a1 + 1336) = 0;
  *(__m128i *)(a1 + 1296) = si128;
  sub_25ABF10(a1 + 1352, 6);
  *(_QWORD *)(a1 + 1368) = a1;
  *(_OWORD *)(a1 + 1448) = 0;
  *(_OWORD *)(a1 + 1472) = 0;
  *(_OWORD *)(a1 + 1488) = 0;
  *(_OWORD *)(a1 + 1504) = 0;
  *(_OWORD *)(a1 + 1528) = 0;
  *(_OWORD *)(a1 + 1544) = 0;
  *(_OWORD *)(a1 + 1560) = 0;
  *(_OWORD *)(a1 + 1576) = 0;
  *(_OWORD *)(a1 + 1592) = 0;
  *(_OWORD *)(a1 + 1608) = 0;
  *(_QWORD *)(a1 + 1376) = 0;
  *(_QWORD *)(a1 + 1384) = 0;
  *(_QWORD *)(a1 + 1392) = 0;
  *(_QWORD *)(a1 + 1400) = 0;
  *(_QWORD *)(a1 + 1408) = 0;
  *(_QWORD *)(a1 + 1416) = 0;
  *(_QWORD *)(a1 + 1424) = 0;
  *(_QWORD *)(a1 + 1432) = 0;
  *(_QWORD *)(a1 + 1440) = 0;
  *(_QWORD *)(a1 + 1464) = 0;
  *(_QWORD *)(a1 + 1520) = 0;
  *(_DWORD *)(a1 + 1640) = 0;
  *(_QWORD *)(a1 + 1624) = 0;
  *(_QWORD *)(a1 + 1632) = 0;
  *(_DWORD *)(a1 + 1664) = 0;
  *(_QWORD *)(a1 + 1648) = 0;
  *(_QWORD *)(a1 + 1656) = 0;
  *(_DWORD *)(a1 + 1688) = 0;
  *(_QWORD *)(a1 + 1672) = 0;
  *(_QWORD *)(a1 + 1680) = 0;
  *(_DWORD *)(a1 + 1712) = 0;
  *(_QWORD *)(a1 + 1696) = 0;
  v13 = _mm_load_si128((const __m128i *)byte_3C7E640);
  *(_OWORD *)(a1 + 1720) = 0;
  *(__m128i *)(a1 + 1736) = v13;
  *(_QWORD *)(a1 + 1704) = 0;
  *(_DWORD *)(a1 + 1768) = 0;
  *(_QWORD *)(a1 + 1752) = 0;
  *(_QWORD *)(a1 + 1760) = 0;
  *(_DWORD *)(a1 + 1792) = 0;
  *(_QWORD *)(a1 + 1776) = 0;
  *(_QWORD *)(a1 + 1784) = 0;
  *(_DWORD *)(a1 + 1816) = 0;
  *(_QWORD *)(a1 + 1800) = 0;
  *(_QWORD *)(a1 + 1808) = 0;
  *(_DWORD *)(a1 + 1840) = 0;
  *(_QWORD *)(a1 + 1824) = 0;
  *(_QWORD *)(a1 + 1832) = 0;
  *(_DWORD *)(a1 + 1864) = 0;
  *(_QWORD *)(a1 + 1848) = 0;
  *(_QWORD *)(a1 + 1856) = 0;
  *(_DWORD *)(a1 + 1888) = 0;
  *(_QWORD *)(a1 + 1872) = 0;
  *(_QWORD *)(a1 + 1880) = 0;
  *(_DWORD *)(a1 + 1912) = 0;
  *(_QWORD *)(a1 + 1896) = 0;
  *(_QWORD *)(a1 + 1904) = 0;
  *(_DWORD *)(a1 + 1936) = 0;
  *(_QWORD *)(a1 + 1920) = 0;
  *(_QWORD *)(a1 + 1928) = 0;
  *(_DWORD *)(a1 + 1960) = 0;
  *(_QWORD *)(a1 + 1944) = 0;
  *(_QWORD *)(a1 + 1952) = 0;
  *(_DWORD *)(a1 + 1984) = 0;
  *(_QWORD *)(a1 + 1968) = 0;
  *(_QWORD *)(a1 + 1992) = a1 + 2008;
  *(_QWORD *)(a1 + 2160) = a2;
  *(_QWORD *)(a1 + 1976) = 0;
  *(_QWORD *)(a1 + 2000) = 0;
  *(_DWORD *)(a1 + 2024) = 0;
  *(_QWORD *)(a1 + 2008) = 0;
  *(_QWORD *)(a1 + 2016) = 0;
  *(_QWORD *)(a1 + 2032) = a1 + 2048;
  *(_QWORD *)(a1 + 2040) = 0;
  *(_DWORD *)(a1 + 2064) = 0;
  *(_QWORD *)(a1 + 2048) = 0;
  *(_QWORD *)(a1 + 2056) = 0;
  *(_DWORD *)(a1 + 2088) = 0;
  *(_QWORD *)(a1 + 2072) = 0;
  *(_QWORD *)(a1 + 2080) = 0;
  *(_QWORD *)(a1 + 2144) = 0;
  *(_QWORD *)(a1 + 2152) = a3;
  *(_OWORD *)(a1 + 2096) = 0;
  *(_OWORD *)(a1 + 2112) = 0;
  *(_OWORD *)(a1 + 2128) = 0;
  v14 = operator new(0x10u);
  sub_CA1BE0(v14, *(_QWORD *)(a1 + 2160) + 240LL, a3);
  *(_QWORD *)(a1 + 2168) = v14;
  v15 = operator new(0x20u);
  v16 = *(_QWORD **)(a1 + 2160);
  sub_D62950(
    v15,
    v16[33],
    (__int64)(v16[34] - v16[33]) >> 5,
    v16[36],
    (__int64)(v16[37] - v16[36]) >> 5,
    a3,
    v16[39],
    (__int64)(v16[40] - v16[39]) >> 5);
  *(_QWORD *)(a1 + 2176) = v15;
  v17 = operator new(0x18u);
  sub_CA19F0(
    v17,
    *(_QWORD *)(*(_QWORD *)(a1 + 2160) + 336LL),
    (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 2160) + 344LL) - *(_QWORD *)(*(_QWORD *)(a1 + 2160) + 336LL)) >> 5,
    a3);
  *(_QWORD *)(a1 + 2184) = v17;
  *(_QWORD *)(a1 + 2208) = a1 + 2224;
  v18 = _mm_load_si128((const __m128i *)&xmmword_3C7E570);
  *(_QWORD *)(a1 + 2256) = a1 + 2272;
  *(_QWORD *)(a1 + 2192) = 0;
  *(_QWORD *)(a1 + 2200) = 0;
  *(_QWORD *)(a1 + 2216) = 0x400000000LL;
  *(_QWORD *)(a1 + 2264) = 0;
  *(__m128i *)(a1 + 2272) = v18;
  sub_C6FEF0(a1 + 2288);
  *(_QWORD *)(a1 + 17272) = 0;
  v19 = *(_WORD *)(a1 + 17304);
  *(_OWORD *)(a1 + 17288) = 0;
  *(_BYTE *)(a1 + 17281) = 0;
  v21 = *(_BYTE *)(a2 + 3);
  v20 = *(_BYTE *)(a2 + 1);
  *(_WORD *)(a1 + 17304) = v19 & 0xFE00 | 2;
  v22 = (*(_WORD *)a2 & 0x1008) != 0;
  *(_QWORD *)(a1 + 17312) = 0;
  v23 = ((unsigned __int64)((*(_DWORD *)a2 & 0x10000080) == 128) << 34)
      | ((unsigned __int64)((v21 & 8) != 0) << 33)
      | ((unsigned __int64)((v20 & 0x10) == 0) << 30)
      | ((unsigned __int64)((v20 & 8) == 0) << 29)
      | ((unsigned __int64)((*(_BYTE *)a2 & 2) != 0) << 28)
      | ((unsigned __int64)((v20 & 0x10) != 0) << 27)
      | ((unsigned __int64)(*(_BYTE *)a2 & 1) << 26)
      | ((unsigned __int64)((v20 & 8) != 0) << 25)
      | (v22 << 24)
      | ((unsigned __int64)((v20 & 8) != 0) << 9)
      | 0x660800442000LL
      | ((unsigned __int64)((v21 & 4) != 0) << 23);
  v24 = *(_BYTE *)(a2 + 89);
  *(_QWORD *)(a1 + 17344) = a4;
  *(_QWORD *)(a1 + 17320) = 0;
  *(_QWORD *)(a1 + 17352) = a5;
  *(_QWORD *)(a1 + 17328) = 0;
  *(_QWORD *)(a1 + 17336) = 0;
  *(_QWORD *)(a1 + 17304) = *(_QWORD *)(a1 + 17304) & 0xFFFF0000000001FFLL | ((unsigned __int64)(v24 & 1) << 47) | v23;
  *(_QWORD *)(a1 + 17360) = a6;
  *(_DWORD *)(a1 + 17368) = a7;
  sub_791F00(a1 + 17376, a1);
  *(_BYTE *)(a1 + 18216) = 0;
  *(_QWORD *)(a1 + 18224) = a3;
  *(_DWORD *)(a1 + 18248) = 0;
  *(_QWORD *)(a1 + 18232) = 0;
  *(_QWORD *)(a1 + 18240) = 0;
  *(_DWORD *)(a1 + 18272) = 0;
  *(_QWORD *)(a1 + 18256) = 0;
  *(_QWORD *)(a1 + 18264) = 0;
  *(_DWORD *)(a1 + 18296) = 0;
  *(_QWORD *)(a1 + 18280) = 0;
  *(_QWORD *)(a1 + 18288) = 0;
  *(_BYTE *)(a1 + 18304) = 0;
  *(_DWORD *)(a1 + 18328) = 0;
  *(_QWORD *)(a1 + 18312) = 0;
  *(_QWORD *)(a1 + 18320) = 0;
  *(_DWORD *)(a1 + 18352) = 0;
  *(_QWORD *)(a1 + 18336) = 0;
  *(_QWORD *)(a1 + 18344) = 0;
  *(_DWORD *)(a1 + 18376) = 0;
  *(_QWORD *)(a1 + 18360) = 0;
  *(_QWORD *)(a1 + 18368) = 0;
  *(_DWORD *)(a1 + 18400) = 0;
  *(_QWORD *)(a1 + 18384) = 0;
  *(_QWORD *)(a1 + 18392) = 0;
  *(_OWORD *)(a1 + 18200) = 0;
  sub_76A330(a1 + 18408, a1 + 2192, a2 + 536);
  *(_OWORD *)(a1 + 18472) = 0;
  *(_OWORD *)(a1 + 18488) = 0;
  *(_OWORD *)(a1 + 18504) = 0;
  *(_OWORD *)(a1 + 18520) = 0;
  *(_OWORD *)(a1 + 18536) = 0;
  *(_OWORD *)(a1 + 18552) = 0;
  *(_OWORD *)(a1 + 18568) = 0;
  *(_OWORD *)(a1 + 18584) = 0;
  *(_OWORD *)(a1 + 18600) = 0;
  *(_OWORD *)(a1 + 18616) = 0;
  *(_OWORD *)(a1 + 18632) = 0;
  *(_OWORD *)(a1 + 18648) = 0;
  *(_OWORD *)(a1 + 18664) = 0;
  *(_OWORD *)(a1 + 18680) = 0;
  *(_OWORD *)(a1 + 18696) = 0;
  *(_OWORD *)(a1 + 18712) = 0;
  *(_OWORD *)(a1 + 18728) = 0;
  *(_OWORD *)(a1 + 18744) = 0;
  *(_OWORD *)(a1 + 18760) = 0;
  *(_OWORD *)(a1 + 18776) = 0;
  *(_OWORD *)(a1 + 18792) = 0;
  *(_OWORD *)(a1 + 18808) = 0;
  *(_OWORD *)(a1 + 18824) = 0;
  *(_OWORD *)(a1 + 18840) = 0;
  *(_OWORD *)(a1 + 18856) = 0;
  *(_OWORD *)(a1 + 18872) = 0;
  *(_OWORD *)(a1 + 18888) = 0;
  *(_OWORD *)(a1 + 18904) = 0;
  *(_OWORD *)(a1 + 18920) = 0;
  *(_OWORD *)(a1 + 18936) = 0;
  *(_OWORD *)(a1 + 18952) = 0;
  *(_OWORD *)(a1 + 18968) = 0;
  *(_OWORD *)(a1 + 18984) = 0;
  *(_OWORD *)(a1 + 19000) = 0;
  *(_OWORD *)(a1 + 19016) = 0;
  *(_OWORD *)(a1 + 19032) = 0;
  *(_OWORD *)(a1 + 19048) = 0;
  *(_OWORD *)(a1 + 19064) = 0;
  *(_OWORD *)(a1 + 19080) = 0;
  *(_OWORD *)(a1 + 19096) = 0;
  *(_OWORD *)(a1 + 19112) = 0;
  *(_OWORD *)(a1 + 19128) = 0;
  *(_OWORD *)(a1 + 19144) = 0;
  *(_OWORD *)(a1 + 19160) = 0;
  *(_OWORD *)(a1 + 19176) = 0;
  *(_OWORD *)(a1 + 19192) = 0;
  *(_OWORD *)(a1 + 19208) = 0;
  *(_OWORD *)(a1 + 19224) = 0;
  *(_OWORD *)(a1 + 19240) = 0;
  *(_OWORD *)(a1 + 19256) = 0;
  *(_OWORD *)(a1 + 19272) = 0;
  *(_OWORD *)(a1 + 19288) = 0;
  *(_OWORD *)(a1 + 19304) = 0;
  *(_OWORD *)(a1 + 19320) = 0;
  *(_OWORD *)(a1 + 19336) = 0;
  *(_OWORD *)(a1 + 19352) = 0;
  *(_OWORD *)(a1 + 19368) = 0;
  *(_OWORD *)(a1 + 19384) = 0;
  *(_OWORD *)(a1 + 19400) = 0;
  *(_OWORD *)(a1 + 19416) = 0;
  *(_OWORD *)(a1 + 19432) = 0;
  *(_OWORD *)(a1 + 19448) = 0;
  *(_OWORD *)(a1 + 19464) = 0;
  *(_OWORD *)(a1 + 19480) = 0;
  *(_OWORD *)(a1 + 19496) = 0;
  *(_OWORD *)(a1 + 19512) = 0;
  *(_OWORD *)(a1 + 19528) = 0;
  *(_OWORD *)(a1 + 19544) = 0;
  *(_OWORD *)(a1 + 19560) = 0;
  *(_OWORD *)(a1 + 19576) = 0;
  *(_OWORD *)(a1 + 19592) = 0;
  *(_OWORD *)(a1 + 19608) = 0;
  *(_OWORD *)(a1 + 19624) = 0;
  *(_OWORD *)(a1 + 19640) = 0;
  *(_OWORD *)(a1 + 19656) = 0;
  *(_OWORD *)(a1 + 19672) = 0;
  *(_OWORD *)(a1 + 19688) = 0;
  *(_OWORD *)(a1 + 19704) = 0;
  *(_OWORD *)(a1 + 19720) = 0;
  *(_OWORD *)(a1 + 19736) = 0;
  *(_OWORD *)(a1 + 19752) = 0;
  *(_OWORD *)(a1 + 19768) = 0;
  *(_OWORD *)(a1 + 19784) = 0;
  *(_OWORD *)(a1 + 19800) = 0;
  *(_OWORD *)(a1 + 19816) = 0;
  *(_OWORD *)(a1 + 19832) = 0;
  *(_OWORD *)(a1 + 19848) = 0;
  *(_OWORD *)(a1 + 19864) = 0;
  *(_OWORD *)(a1 + 19880) = 0;
  *(_OWORD *)(a1 + 19896) = 0;
  *(_OWORD *)(a1 + 19912) = 0;
  *(_OWORD *)(a1 + 19928) = 0;
  *(_OWORD *)(a1 + 19944) = 0;
  *(_OWORD *)(a1 + 19960) = 0;
  *(_OWORD *)(a1 + 19976) = 0;
  *(_OWORD *)(a1 + 19992) = 0;
  *(_OWORD *)(a1 + 20008) = 0;
  *(_OWORD *)(a1 + 20024) = 0;
  *(_OWORD *)(a1 + 20040) = 0;
  *(_OWORD *)(a1 + 20056) = 0;
  *(_OWORD *)(a1 + 20072) = 0;
  *(_OWORD *)(a1 + 20088) = 0;
  *(_OWORD *)(a1 + 20104) = 0;
  *(_OWORD *)(a1 + 20120) = 0;
  *(_OWORD *)(a1 + 20136) = 0;
  *(_OWORD *)(a1 + 20152) = 0;
  *(_OWORD *)(a1 + 20168) = 0;
  *(_OWORD *)(a1 + 20184) = 0;
  *(_OWORD *)(a1 + 20200) = 0;
  *(_OWORD *)(a1 + 20216) = 0;
  *(_OWORD *)(a1 + 20232) = 0;
  *(_OWORD *)(a1 + 20248) = 0;
  *(_OWORD *)(a1 + 20264) = 0;
  *(_OWORD *)(a1 + 20280) = 0;
  *(_OWORD *)(a1 + 20296) = 0;
  *(_OWORD *)(a1 + 20312) = 0;
  *(_OWORD *)(a1 + 20328) = 0;
  *(_OWORD *)(a1 + 20344) = 0;
  *(_OWORD *)(a1 + 20360) = 0;
  *(_OWORD *)(a1 + 20376) = 0;
  *(_OWORD *)(a1 + 20392) = 0;
  *(_OWORD *)(a1 + 20408) = 0;
  *(_OWORD *)(a1 + 20424) = 0;
  *(_OWORD *)(a1 + 20440) = 0;
  *(_OWORD *)(a1 + 20456) = 0;
  *(_OWORD *)(a1 + 20472) = 0;
  *(_OWORD *)(a1 + 20488) = 0;
  *(_OWORD *)(a1 + 20504) = 0;
  *(_OWORD *)(a1 + 20520) = 0;
  *(_OWORD *)(a1 + 20536) = 0;
  *(_OWORD *)(a1 + 20552) = 0;
  *(_OWORD *)(a1 + 20568) = 0;
  *(_OWORD *)(a1 + 20584) = 0;
  *(_OWORD *)(a1 + 20600) = 0;
  *(_OWORD *)(a1 + 20616) = 0;
  *(_OWORD *)(a1 + 20632) = 0;
  *(_OWORD *)(a1 + 20648) = 0;
  *(_OWORD *)(a1 + 20664) = 0;
  *(_OWORD *)(a1 + 20680) = 0;
  *(_OWORD *)(a1 + 20696) = 0;
  *(_OWORD *)(a1 + 20712) = 0;
  *(_OWORD *)(a1 + 20728) = 0;
  *(_OWORD *)(a1 + 20744) = 0;
  *(_OWORD *)(a1 + 20760) = 0;
  *(_OWORD *)(a1 + 20776) = 0;
  *(_OWORD *)(a1 + 20792) = 0;
  *(_OWORD *)(a1 + 20808) = 0;
  *(_OWORD *)(a1 + 20824) = 0;
  *(_OWORD *)(a1 + 20840) = 0;
  *(_OWORD *)(a1 + 20856) = 0;
  *(_OWORD *)(a1 + 20872) = 0;
  *(_OWORD *)(a1 + 20888) = 0;
  *(_OWORD *)(a1 + 20904) = 0;
  *(_OWORD *)(a1 + 20920) = 0;
  *(_OWORD *)(a1 + 20936) = 0;
  *(_OWORD *)(a1 + 20952) = 0;
  *(_OWORD *)(a1 + 20968) = 0;
  *(_OWORD *)(a1 + 20984) = 0;
  *(_OWORD *)(a1 + 21000) = 0;
  *(_OWORD *)(a1 + 21016) = 0;
  *(_OWORD *)(a1 + 21032) = 0;
  *(_OWORD *)(a1 + 21048) = 0;
  *(_OWORD *)(a1 + 21064) = 0;
  *(_OWORD *)(a1 + 21080) = 0;
  *(_OWORD *)(a1 + 21096) = 0;
  *(_OWORD *)(a1 + 21112) = 0;
  *(_OWORD *)(a1 + 21128) = 0;
  *(_OWORD *)(a1 + 21144) = 0;
  *(_OWORD *)(a1 + 21160) = 0;
  *(_OWORD *)(a1 + 21176) = 0;
  *(_OWORD *)(a1 + 21192) = 0;
  *(_OWORD *)(a1 + 21208) = 0;
  *(_OWORD *)(a1 + 21224) = 0;
  *(_OWORD *)(a1 + 21240) = 0;
  *(_OWORD *)(a1 + 21256) = 0;
  *(_OWORD *)(a1 + 21272) = 0;
  *(_OWORD *)(a1 + 21288) = 0;
  *(_OWORD *)(a1 + 21304) = 0;
  *(_OWORD *)(a1 + 21320) = 0;
  *(_OWORD *)(a1 + 21336) = 0;
  *(_OWORD *)(a1 + 21352) = 0;
  *(_OWORD *)(a1 + 21368) = 0;
  *(_OWORD *)(a1 + 21384) = 0;
  *(_OWORD *)(a1 + 21400) = 0;
  *(_OWORD *)(a1 + 21416) = 0;
  *(_OWORD *)(a1 + 21432) = 0;
  *(_OWORD *)(a1 + 21448) = 0;
  *(_OWORD *)(a1 + 21464) = 0;
  *(_OWORD *)(a1 + 21480) = 0;
  *(_OWORD *)(a1 + 21496) = 0;
  *(_OWORD *)(a1 + 21512) = 0;
  *(_OWORD *)(a1 + 21528) = 0;
  *(_OWORD *)(a1 + 21544) = 0;
  *(_OWORD *)(a1 + 21560) = 0;
  *(_OWORD *)(a1 + 21576) = 0;
  *(_OWORD *)(a1 + 21592) = 0;
  *(_OWORD *)(a1 + 21608) = 0;
  *(_OWORD *)(a1 + 21624) = 0;
  *(_OWORD *)(a1 + 21640) = 0;
  *(_OWORD *)(a1 + 21656) = 0;
  *(_OWORD *)(a1 + 21672) = 0;
  *(_OWORD *)(a1 + 21688) = 0;
  *(_OWORD *)(a1 + 21704) = 0;
  *(_OWORD *)(a1 + 21720) = 0;
  *(_OWORD *)(a1 + 21736) = 0;
  *(_OWORD *)(a1 + 21752) = 0;
  *(_OWORD *)(a1 + 21768) = 0;
  *(_OWORD *)(a1 + 21784) = 0;
  *(_OWORD *)(a1 + 21800) = 0;
  *(_OWORD *)(a1 + 21816) = 0;
  *(_OWORD *)(a1 + 21832) = 0;
  *(_OWORD *)(a1 + 21848) = 0;
  *(_OWORD *)(a1 + 21864) = 0;
  *(_OWORD *)(a1 + 21880) = 0;
  *(_OWORD *)(a1 + 21896) = 0;
  *(_OWORD *)(a1 + 21912) = 0;
  *(_OWORD *)(a1 + 21928) = 0;
  *(_OWORD *)(a1 + 21944) = 0;
  *(_OWORD *)(a1 + 21960) = 0;
  *(_OWORD *)(a1 + 21976) = 0;
  *(_OWORD *)(a1 + 21992) = 0;
  *(_OWORD *)(a1 + 22008) = 0;
  *(_OWORD *)(a1 + 22024) = 0;
  *(_OWORD *)(a1 + 22040) = 0;
  *(_OWORD *)(a1 + 22056) = 0;
  *(_OWORD *)(a1 + 22072) = 0;
  *(_OWORD *)(a1 + 22088) = 0;
  *(_OWORD *)(a1 + 22104) = 0;
  *(_OWORD *)(a1 + 22120) = 0;
  *(_OWORD *)(a1 + 22136) = 0;
  *(_OWORD *)(a1 + 22152) = 0;
  *(_OWORD *)(a1 + 22168) = 0;
  *(_OWORD *)(a1 + 22184) = 0;
  *(_OWORD *)(a1 + 22200) = 0;
  *(_OWORD *)(a1 + 22216) = 0;
  *(_OWORD *)(a1 + 22232) = 0;
  *(_OWORD *)(a1 + 22248) = 0;
  *(_OWORD *)(a1 + 22264) = 0;
  *(_OWORD *)(a1 + 22280) = 0;
  *(_OWORD *)(a1 + 22296) = 0;
  *(_OWORD *)(a1 + 22312) = 0;
  *(_OWORD *)(a1 + 22328) = 0;
  *(_OWORD *)(a1 + 22344) = 0;
  *(_OWORD *)(a1 + 22360) = 0;
  *(_OWORD *)(a1 + 22376) = 0;
  *(_OWORD *)(a1 + 22392) = 0;
  *(_OWORD *)(a1 + 22408) = 0;
  *(_OWORD *)(a1 + 22424) = 0;
  *(_OWORD *)(a1 + 22440) = 0;
  *(_OWORD *)(a1 + 22456) = 0;
  *(_OWORD *)(a1 + 22472) = 0;
  *(_OWORD *)(a1 + 22488) = 0;
  *(_OWORD *)(a1 + 22504) = 0;
  *(_OWORD *)(a1 + 22520) = 0;
  *(_OWORD *)(a1 + 22536) = 0;
  *(_OWORD *)(a1 + 22552) = 0;
  *(_OWORD *)(a1 + 22568) = 0;
  *(_DWORD *)(a1 + 22600) = 0;
  *(_QWORD *)(a1 + 22584) = 0;
  *(_QWORD *)(a1 + 22592) = 0;
  *(_DWORD *)(a1 + 22624) = 0;
  *(_QWORD *)(a1 + 22608) = 0;
  *(_QWORD *)(a1 + 22616) = 0;
  *(_QWORD *)(a1 + 22632) = a1 + 22648;
  *(_QWORD *)(a1 + 22808) = a1 + 22824;
  *(_OWORD *)(a1 + 23088) = 0;
  v25 = _mm_load_si128((const __m128i *)&xmmword_3C7E650);
  *(_QWORD *)(a1 + 22816) = 0x1000000000LL;
  *(_QWORD *)(a1 + 23144) = a1 + 23160;
  *(_OWORD *)(a1 + 22760) = 0;
  *(_OWORD *)(a1 + 22776) = 0;
  *(_OWORD *)(a1 + 22792) = 0;
  *(__m128i *)(a1 + 23128) = v25;
  *(_QWORD *)(a1 + 22640) = 0;
  *(_DWORD *)(a1 + 22664) = 0;
  *(_QWORD *)(a1 + 22648) = 0;
  *(_QWORD *)(a1 + 22656) = 0;
  *(_DWORD *)(a1 + 22688) = 0;
  *(_QWORD *)(a1 + 22672) = 0;
  *(_QWORD *)(a1 + 22680) = 0;
  *(_DWORD *)(a1 + 22712) = 0;
  *(_QWORD *)(a1 + 22696) = 0;
  *(_QWORD *)(a1 + 22704) = 0;
  *(_QWORD *)(a1 + 22720) = a1;
  *(_DWORD *)(a1 + 22744) = 0;
  *(_QWORD *)(a1 + 22728) = 0;
  *(_QWORD *)(a1 + 22736) = 0;
  *(_QWORD *)(a1 + 22752) = 0;
  *(_QWORD *)(a1 + 23080) = 0;
  *(_QWORD *)(a1 + 23104) = 0;
  *(_QWORD *)(a1 + 23112) = 0;
  *(_QWORD *)(a1 + 23120) = 0;
  *(_QWORD *)(a1 + 23152) = 0x400000000LL;
  *(_DWORD *)(a1 + 23208) = 0;
  *(_QWORD *)(a1 + 23192) = 0;
  *(_QWORD *)(a1 + 23200) = 0;
  v26 = sub_782C90(a1);
  v27 = *(char **)(a1 + 23096);
  v28 = *(__int64 **)(a1 + 23088);
  v29 = v26;
  if ( v27 == (char *)v28 )
  {
    src[0] = v26;
    if ( *(_QWORD *)(a1 + 23104) - (_QWORD)v27 > 7u )
    {
      *(_QWORD *)v27 = v26;
      result = *(_QWORD *)(a1 + 2112);
      v44 = 8;
      goto LABEL_23;
    }
  }
  else
  {
    result = *(_QWORD *)(a1 + 2112);
    if ( *((_QWORD *)v27 - 1) != result )
      goto LABEL_3;
    v37 = *(_QWORD *)(a1 + 23104);
    src[0] = v29;
    if ( (unsigned __int64)(v37 - (_QWORD)v28) > 7 )
    {
      v38 = v27 - (char *)v28;
      if ( (unsigned __int64)(v27 - (char *)v28) > 7 )
      {
        *v28 = v29;
        v39 = v28 + 1;
        if ( v39 != *(_QWORD **)(a1 + 23096) )
          *(_QWORD *)(a1 + 23096) = v39;
        result = *(_QWORD *)(a1 + 2112);
        goto LABEL_3;
      }
      v44 = 8 - v38;
      if ( 8 - v38 > 8 )
      {
        v27 = (char *)memcpy(v27, (char *)src + v38, v44);
        result = *(_QWORD *)(a1 + 2112);
      }
LABEL_23:
      *(_QWORD *)(a1 + 23096) = &v27[v44];
      goto LABEL_3;
    }
  }
  v40 = (_QWORD *)operator new(8u);
  v41 = *(void **)(a1 + 23088);
  *v40 = v29;
  v42 = v40;
  if ( v41 )
    operator delete(v41, *(_QWORD *)(a1 + 23104) - (_QWORD)v41);
  *(_QWORD *)(a1 + 23088) = v42;
  v43 = v42 + 1;
  result = *(_QWORD *)(a1 + 2112);
  *(_QWORD *)(a1 + 23096) = v43;
  *(_QWORD *)(a1 + 23104) = v43;
LABEL_3:
  if ( result )
  {
    v31 = *(_QWORD *)(result + 80);
    *(_QWORD *)(v29 + 80) = v31;
    v32 = sub_6E2C00((unsigned __int64 *)(v31 + 72), v31);
    v33 = *(_QWORD *)(v29 + 80);
    *(_QWORD *)(v29 + 72) = v32 & 0xFFFFFFFFFFFFFFFCLL;
    *(_WORD *)(v29 + 30) |= *(_WORD *)(v32 + 30) & 0x26;
    v34 = *(_QWORD *)(v33 + 72);
    v35 = v34 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v34 & 1) != 0 )
    {
      if ( v35 )
      {
        if ( (v34 & 4) != 0 )
        {
          v36 = v34 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v36 )
          {
            *(_QWORD *)(v36 + 16) = v29;
            goto LABEL_9;
          }
        }
      }
    }
    else if ( v35 > 3 )
    {
      result = sub_6D4E90((_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL), v29) | 1;
      *(_QWORD *)(v33 + 72) = result;
      goto LABEL_10;
    }
    v35 = v29 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_9:
    result = v35 | 1;
    *(_QWORD *)(v33 + 72) = result;
  }
LABEL_10:
  *(_QWORD *)(a1 + 2112) = v29;
  return result;
}

