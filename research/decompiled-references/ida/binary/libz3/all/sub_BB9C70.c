_QWORD *__fastcall sub_BB9C70(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r13
  _OWORD *v10; // rax
  __int64 v11; // rax
  _OWORD *v12; // rax
  __int64 v13; // rax
  _OWORD *v14; // rax
  _OWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rsi
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // r13
  unsigned int v27; // eax
  __int64 v28; // rax
  __m128 v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // r14
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rsi
  __m128 v35; // xmm0
  __int64 v36; // rax
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  unsigned __int64 v40; // r13
  unsigned int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rcx
  __m128 v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // rax
  _OWORD *v47; // rax
  _OWORD *v48; // rax
  _OWORD *v49; // rax
  _QWORD *result; // rax
  void *v51; // [rsp+0h] [rbp-88h]
  void *v52; // [rsp+0h] [rbp-88h]
  _BYTE v53[8]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v54[8]; // [rsp+40h] [rbp-48h] BYREF
  int v55[2]; // [rsp+48h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v55, "seq");
  v4 = sub_15DA4C0(v3 + 560, v55);
  sub_966710(a1, a2, v4);
  *(_QWORD *)a1 = off_1C73CA0;
  *(_QWORD *)(a1 + 56) = off_1C73E58;
  sub_180C0A0(a1 + 72);
  v5 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 120) = a1 + 72;
  *(_QWORD *)(a1 + 112) = a1 + 64;
  *(_QWORD *)(a1 + 144) = a1 + 64;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = v5;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = v5;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = v5;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = v5;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 328) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  *(_OWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  *(_OWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 576) = a1 + 3944;
  *(_QWORD *)(a1 + 608) = off_1C57E38;
  *(_QWORD *)(a1 + 616) = a1 + 568;
  *(_QWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_BYTE *)(a1 + 560) = 0;
  *(_DWORD *)(a1 + 564) = 0;
  *(_QWORD *)(a1 + 568) = a1;
  *(_QWORD *)(a1 + 600) = 0;
  *(_OWORD *)(a1 + 440) = 0;
  *(_OWORD *)(a1 + 456) = 0;
  *(_OWORD *)(a1 + 472) = 0;
  *(_OWORD *)(a1 + 504) = 0;
  *(_OWORD *)(a1 + 520) = 0;
  *(_OWORD *)(a1 + 536) = 0;
  *(_OWORD *)(a1 + 584) = 0;
  sub_BE5D00(a1 + 624, a1);
  *(_QWORD *)(a1 + 848) = *(_QWORD *)(a1 + 24);
  v6 = sub_186B270(0x80u);
  *(_BYTE *)(v6 + 8) = 0;
  *(_QWORD *)v6 = 0;
  *(_QWORD *)(v6 + 16) = 0;
  *(_BYTE *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 32) = 0;
  *(_BYTE *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0;
  *(_BYTE *)(v6 + 56) = 0;
  *(_QWORD *)(v6 + 64) = 0;
  *(_BYTE *)(v6 + 72) = 0;
  *(_QWORD *)(v6 + 80) = 0;
  *(_BYTE *)(v6 + 88) = 0;
  *(_QWORD *)(v6 + 96) = 0;
  *(_BYTE *)(v6 + 104) = 0;
  *(_QWORD *)(v6 + 112) = 0;
  *(_BYTE *)(v6 + 120) = 0;
  *(_QWORD *)(a1 + 856) = v6;
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 864) = 8;
  *(_DWORD *)(a1 + 872) = 0;
  *(_QWORD *)(a1 + 880) = v7;
  v8 = sub_186B270(0x80u);
  v9 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v8 = 0;
  *(_BYTE *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_BYTE *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 32) = 0;
  *(_BYTE *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_BYTE *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0;
  *(_BYTE *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 80) = 0;
  *(_BYTE *)(v8 + 88) = 0;
  *(_QWORD *)(v8 + 96) = 0;
  *(_BYTE *)(v8 + 104) = 0;
  *(_QWORD *)(v8 + 112) = 0;
  *(_BYTE *)(v8 + 120) = 0;
  *(_QWORD *)(a1 + 888) = v8;
  *(_QWORD *)(a1 + 896) = 8;
  *(_DWORD *)(a1 + 904) = 0;
  *(_QWORD *)(a1 + 912) = 0;
  *(_QWORD *)(a1 + 920) = v9;
  v10 = (_OWORD *)sub_186B270(0xC0u);
  *(_QWORD *)(a1 + 928) = v10;
  *(_OWORD *)((char *)v10 + 8) = 0;
  v10[2] = 0;
  *(_OWORD *)((char *)v10 + 56) = 0;
  v10[5] = 0;
  *(_OWORD *)((char *)v10 + 104) = 0;
  v10[8] = 0;
  *(_OWORD *)((char *)v10 + 152) = 0;
  v10[11] = 0;
  v11 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 936) = 8;
  *(_DWORD *)(a1 + 944) = 0;
  *(_QWORD *)(a1 + 952) = v9;
  *(_QWORD *)(a1 + 960) = 0;
  *(_QWORD *)(a1 + 968) = v9;
  *(_QWORD *)(a1 + 976) = 0;
  *(_QWORD *)(a1 + 984) = 0;
  *(_QWORD *)(a1 + 992) = v11;
  *(_QWORD *)(a1 + 1000) = 0;
  v12 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 1008) = v12;
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v13 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 1016) = 8;
  *(_DWORD *)(a1 + 1024) = 0;
  *(_DWORD *)(a1 + 1032) = 0;
  *(_QWORD *)(a1 + 1040) = v13;
  *(_QWORD *)(a1 + 1048) = 0;
  *(_QWORD *)(a1 + 1056) = v13;
  *(_QWORD *)(a1 + 1064) = 0;
  v14 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 1072) = v14;
  *(_QWORD *)(a1 + 1080) = 8;
  *(_DWORD *)(a1 + 1088) = 0;
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  v15 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 1096) = v15;
  *v15 = 0;
  v15[1] = 0;
  v15[2] = 0;
  v15[3] = 0;
  v16 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 1104) = 8;
  *(_DWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = v16;
  *(_QWORD *)(a1 + 1128) = 0;
  v17 = sub_186B270(0x80u);
  v18 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v17 = 0;
  *(_DWORD *)(v17 + 8) = 0;
  *(_QWORD *)(v17 + 16) = 0;
  *(_DWORD *)(v17 + 24) = 0;
  *(_QWORD *)(v17 + 32) = 0;
  *(_DWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 48) = 0;
  *(_DWORD *)(v17 + 56) = 0;
  *(_QWORD *)(v17 + 64) = 0;
  *(_DWORD *)(v17 + 72) = 0;
  *(_QWORD *)(v17 + 80) = 0;
  *(_DWORD *)(v17 + 88) = 0;
  *(_QWORD *)(v17 + 96) = 0;
  *(_DWORD *)(v17 + 104) = 0;
  *(_QWORD *)(v17 + 112) = 0;
  *(_DWORD *)(v17 + 120) = 0;
  *(_QWORD *)(a1 + 1136) = v17;
  *(_QWORD *)(a1 + 1144) = 8;
  *(_DWORD *)(a1 + 1152) = 0;
  *(_QWORD *)(a1 + 1160) = v18;
  *(_QWORD *)(a1 + 1168) = 0;
  *(_QWORD *)(a1 + 1176) = 0;
  *(_QWORD *)(a1 + 1184) = 0;
  *(_QWORD *)v55 = 0;
  sub_14B7810(a1 + 1192, v18, (int)v55, v19, v20, v21, (void *)(a1 + 1192));
  sub_18572D0(v55);
  v22 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v55 = 0;
  sub_14B7810(a1 + 1208, v22, (int)v55, v23, v24, v25, v51);
  sub_18572D0(v55);
  v26 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v55 = 0;
  *(_QWORD *)(a1 + 1224) = v26;
  sub_180C5A0(v53, "seq");
  v27 = sub_15DA4C0(v26 + 560, v53);
  v28 = sub_15D2690(v26, v27);
  *(__m128 *)(a1 + 1232) = _mm_loadh_ps((const double *)(v28 + 88));
  LODWORD(v28) = *(_DWORD *)(v28 + 16);
  *(_QWORD *)(a1 + 1304) = 0;
  *(_DWORD *)(a1 + 1248) = v28;
  v29 = _mm_loadh_ps((const double *)(a1 + 1224));
  *(_DWORD *)(a1 + 1272) = v28;
  *(_DWORD *)(a1 + 1296) = v28;
  v30 = *(_QWORD *)(a1 + 1224);
  *(_QWORD *)(a1 + 1320) = 0;
  *(_QWORD *)(a1 + 1312) = v30;
  *(_QWORD *)(a1 + 1328) = 0;
  *(_QWORD *)(a1 + 1336) = 0;
  *(_QWORD *)(a1 + 1344) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 1352) = 0;
  *(__m128 *)(a1 + 1256) = v29;
  *(__m128 *)(a1 + 1280) = v29;
  sub_16669D0(a1 + 1360, v26);
  *(_QWORD *)(a1 + 1376) = v26;
  *(_DWORD *)(a1 + 1384) = 256;
  *(_WORD *)(a1 + 1388) = 0;
  *(_DWORD *)(a1 + 1404) = 0;
  *(_QWORD *)(a1 + 1448) = a1 + 1464;
  *(_QWORD *)(a1 + 1456) = 0x1000000000LL;
  *(_OWORD *)(a1 + 1416) = 0;
  *(_OWORD *)(a1 + 1432) = 0;
  sub_14DC230(a1 + 1376, v55);
  sub_1551650(a1 + 1592, v26);
  *(_QWORD *)(a1 + 1640) = v26;
  *(_QWORD *)(a1 + 1656) = v26;
  *(_QWORD *)(a1 + 1672) = v26;
  *(_QWORD *)(a1 + 1648) = 0;
  *(_QWORD *)(a1 + 1664) = 0;
  *(_QWORD *)(a1 + 1680) = 0;
  *(_BYTE *)(a1 + 1688) = 1;
  sub_18572D0(v55);
  v31 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 1696) = v31;
  sub_180C5A0(v54, "seq");
  v32 = sub_15DA4C0(v31 + 560, v54);
  v33 = sub_15D2690(v31, v32);
  v34 = *(_QWORD *)(a1 + 24);
  *(__m128 *)(a1 + 1704) = _mm_loadh_ps((const double *)(v33 + 88));
  LODWORD(v33) = *(_DWORD *)(v33 + 16);
  *(_QWORD *)(a1 + 1776) = 0;
  *(_DWORD *)(a1 + 1720) = v33;
  v35 = _mm_loadh_ps((const double *)(a1 + 1696));
  *(_DWORD *)(a1 + 1744) = v33;
  *(_DWORD *)(a1 + 1768) = v33;
  v36 = *(_QWORD *)(a1 + 1696);
  *(_QWORD *)(a1 + 1792) = 0;
  *(_QWORD *)(a1 + 1784) = v36;
  *(_QWORD *)(a1 + 1800) = 0;
  *(_QWORD *)(a1 + 1808) = 0;
  *(_QWORD *)(a1 + 1816) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 1824) = 0;
  *(__m128 *)(a1 + 1728) = v35;
  *(__m128 *)(a1 + 1752) = v35;
  sub_16669D0(a1 + 1832, v34);
  sub_1407260(a1 + 1848, *(_QWORD *)(a1 + 24), v52);
  sub_BF5050(a1 + 2184, a1, (_DWORD)v52, v37, v38, v39, (_DWORD)v52, a1 - 56, a1 + 1696, a1 + 624, a1 + 1208, a1 + 72);
  v40 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 3440) = a1 + 2696;
  *(__m128i *)(a1 + 3424) = _mm_unpacklo_epi64((__m128i)v40, (__m128i)(unsigned __int64)(a1 + 56));
  sub_16669D0(a1 + 3448, v40);
  *(_QWORD *)(a1 + 3464) = v40;
  sub_180C5A0(v55, "seq");
  v41 = sub_15DA4C0(v40 + 560, v55);
  v42 = sub_15D2690(v40, v41);
  v43 = *(_QWORD *)(a1 + 3464);
  *(__m128 *)(a1 + 3472) = _mm_loadh_ps((const double *)(v42 + 88));
  LODWORD(v42) = *(_DWORD *)(v42 + 16);
  *(_QWORD *)(a1 + 3544) = 0;
  *(_DWORD *)(a1 + 3488) = v42;
  v44 = _mm_loadh_ps((const double *)(a1 + 3464));
  *(_DWORD *)(a1 + 3512) = v42;
  *(_DWORD *)(a1 + 3536) = v42;
  *(_QWORD *)(a1 + 3552) = v43;
  *(_QWORD *)(a1 + 3560) = 0;
  *(_QWORD *)(a1 + 3568) = 0;
  *(_QWORD *)(a1 + 3576) = 0;
  *(_QWORD *)(a1 + 3584) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 3592) = 0;
  *(_QWORD *)(a1 + 3600) = v40;
  *(_QWORD *)(a1 + 3608) = 0;
  *(_QWORD *)(a1 + 3616) = 0;
  *(__m128 *)(a1 + 3496) = v44;
  *(__m128 *)(a1 + 3520) = v44;
  sub_BE89D0(a1 + 3624, a1);
  sub_BE4A80(a1 + 3856, *(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 3992) = 0;
  *(_OWORD *)(a1 + 3944) = 0;
  *(_OWORD *)(a1 + 3960) = 0;
  *(_OWORD *)(a1 + 3976) = 0;
  sub_180C0A0(a1 + 3960);
  v45 = *(_QWORD *)(a1 + 24);
  *(_OWORD *)(a1 + 4000) = 0;
  *(_QWORD *)(a1 + 4072) = v45;
  *(_QWORD *)(a1 + 4088) = v45;
  *(_QWORD *)(a1 + 4104) = v45;
  *(_QWORD *)(a1 + 4120) = v45;
  *(_QWORD *)(a1 + 4136) = v45;
  *(_OWORD *)(a1 + 4016) = 0;
  *(_QWORD *)(a1 + 4152) = 0xFFFFFFFE00000001LL;
  v46 = *(_QWORD *)(a1 + 1704);
  *(_OWORD *)(a1 + 4032) = 0;
  *(_DWORD *)(a1 + 4048) = 0;
  LOBYTE(v46) = *(_BYTE *)(v46 + 81);
  *(_QWORD *)(a1 + 4080) = 0;
  *(_QWORD *)(a1 + 4096) = 0;
  *(_QWORD *)(a1 + 4112) = 0;
  *(_QWORD *)(a1 + 4128) = 0;
  *(_QWORD *)(a1 + 4144) = 0;
  *(_QWORD *)(a1 + 4160) = 0;
  *(_BYTE *)(a1 + 4168) = v46;
  *(_WORD *)(a1 + 4169) = 0;
  *(_OWORD *)(a1 + 4056) = 0;
  v47 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 4176) = v47;
  *(_QWORD *)(a1 + 4184) = 8;
  *(_DWORD *)(a1 + 4192) = 0;
  *v47 = 0;
  v47[1] = 0;
  v47[2] = 0;
  v47[3] = 0;
  v48 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 4200) = v48;
  *(_QWORD *)(a1 + 4208) = 8;
  *(_DWORD *)(a1 + 4216) = 0;
  *(_QWORD *)(a1 + 4224) = 0;
  *v48 = 0;
  v48[1] = 0;
  v48[2] = 0;
  v48[3] = 0;
  v49 = (_OWORD *)sub_186B270(0xC0u);
  *(_QWORD *)(a1 + 4232) = v49;
  *(_QWORD *)(a1 + 4240) = 8;
  *(_DWORD *)(a1 + 4248) = 0;
  *(_QWORD *)(a1 + 4256) = 0;
  *(_OWORD *)((char *)v49 + 8) = 0;
  v49[2] = 0;
  *(_OWORD *)((char *)v49 + 56) = 0;
  v49[5] = 0;
  *(_OWORD *)((char *)v49 + 104) = 0;
  v49[8] = 0;
  *(_OWORD *)((char *)v49 + 152) = 0;
  v49[11] = 0;
  result = (_QWORD *)sub_186B270(0x80u);
  *result = 0;
  result[2] = 0;
  result[4] = 0;
  result[6] = 0;
  result[8] = 0;
  result[10] = 0;
  result[12] = 0;
  result[14] = 0;
  *(_QWORD *)(a1 + 4264) = result;
  *(_QWORD *)(a1 + 4272) = 8;
  *(_DWORD *)(a1 + 4280) = 0;
  *(_QWORD *)(a1 + 4288) = 0;
  return result;
}

