void __fastcall sub_1B485D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128 v5; // xmm0
  _QWORD *v6; // rax
  __m128i *v7; // rax
  __m128i si128; // xmm0
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 *v20; // rbp
  __int64 *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edi
  double v29[5]; // [rsp+0h] [rbp-28h] BYREF

  *(_WORD *)(a1 + 20) = 0;
  *(_QWORD *)&v29[0] = a3;
  *(_QWORD *)(a1 + 56) = a1 + 72;
  *(_QWORD *)&v29[1] = a2;
  *(_QWORD *)(a1 + 96) = a1 + 112;
  *(_QWORD *)(a1 + 136) = a1 + 152;
  v5 = _mm_loadh_ps(v29);
  *(_QWORD *)(a1 + 176) = a1 + 192;
  *(_QWORD *)(a1 + 24) = a4;
  *(__m128 *)a1 = v5;
  *(_DWORD *)(a1 + 16) = 103;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = a1 + 232;
  *(_QWORD *)(a1 + 256) = a1 + 272;
  *(_QWORD *)(a1 + 296) = a1 + 312;
  *(_QWORD *)(a1 + 336) = a1 + 352;
  *(_QWORD *)(a1 + 376) = a1 + 392;
  *(_QWORD *)(a1 + 416) = a1 + 432;
  *(_QWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_DWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 456) = a1 + 472;
  *(_QWORD *)(a1 + 496) = a1 + 512;
  *(_QWORD *)(a1 + 536) = a1 + 552;
  *(_QWORD *)(a1 + 576) = a1 + 592;
  *(_QWORD *)(a1 + 616) = a1 + 632;
  *(_QWORD *)(a1 + 656) = a1 + 672;
  *(_QWORD *)(a1 + 696) = a1 + 712;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 480) = 0;
  *(_DWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_DWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_DWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 600) = 0;
  *(_DWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  *(_DWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 680) = 0;
  *(_DWORD *)(a1 + 688) = 0;
  *(_QWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 736) = a1 + 752;
  *(_QWORD *)(a1 + 776) = a1 + 792;
  *(_QWORD *)(a1 + 816) = a1 + 832;
  *(_QWORD *)(a1 + 856) = a1 + 872;
  *(_QWORD *)(a1 + 896) = a1 + 912;
  *(_QWORD *)(a1 + 936) = a1 + 952;
  *(_QWORD *)(a1 + 976) = a1 + 992;
  *(_DWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 752) = 0;
  *(_QWORD *)(a1 + 760) = 0;
  *(_DWORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 784) = 0;
  *(_QWORD *)(a1 + 792) = 0;
  *(_QWORD *)(a1 + 800) = 0;
  *(_DWORD *)(a1 + 808) = 0;
  *(_QWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 840) = 0;
  *(_DWORD *)(a1 + 848) = 0;
  *(_DWORD *)(a1 + 864) = 0;
  *(_QWORD *)(a1 + 868) = 0;
  *(_QWORD *)(a1 + 876) = 0;
  *(_QWORD *)(a1 + 884) = 0;
  *(_QWORD *)(a1 + 904) = 0;
  *(_QWORD *)(a1 + 912) = 0;
  *(_QWORD *)(a1 + 920) = 0;
  *(_DWORD *)(a1 + 928) = 0;
  *(_QWORD *)(a1 + 944) = 0;
  *(_QWORD *)(a1 + 952) = 0;
  *(_QWORD *)(a1 + 960) = 0;
  *(_DWORD *)(a1 + 968) = 0;
  *(_QWORD *)(a1 + 984) = 0;
  *(_QWORD *)(a1 + 1016) = a1 + 1032;
  *(_QWORD *)(a1 + 1056) = a1 + 1072;
  *(_QWORD *)(a1 + 1096) = a1 + 1112;
  *(_QWORD *)(a1 + 1136) = a1 + 1152;
  *(_QWORD *)(a1 + 1176) = a1 + 1192;
  *(_QWORD *)(a1 + 1216) = a1 + 1232;
  *(_QWORD *)(a1 + 992) = 0;
  *(_QWORD *)(a1 + 1000) = 0;
  *(_DWORD *)(a1 + 1008) = 0;
  *(_QWORD *)(a1 + 1024) = 0;
  *(_QWORD *)(a1 + 1032) = 0;
  *(_QWORD *)(a1 + 1040) = 0;
  *(_DWORD *)(a1 + 1048) = 0;
  *(_QWORD *)(a1 + 1064) = 0;
  *(_QWORD *)(a1 + 1072) = 0;
  *(_QWORD *)(a1 + 1080) = 0;
  *(_DWORD *)(a1 + 1088) = 0;
  *(_QWORD *)(a1 + 1104) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_DWORD *)(a1 + 1128) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  *(_QWORD *)(a1 + 1152) = 0;
  *(_QWORD *)(a1 + 1160) = 0;
  *(_DWORD *)(a1 + 1168) = 0;
  *(_QWORD *)(a1 + 1184) = 0;
  *(_QWORD *)(a1 + 1192) = 0;
  *(_QWORD *)(a1 + 1200) = 0;
  *(_DWORD *)(a1 + 1208) = 0;
  *(_QWORD *)(a1 + 1224) = 0;
  *(_QWORD *)(a1 + 1232) = 0;
  *(_QWORD *)(a1 + 1240) = 0;
  *(_DWORD *)(a1 + 1248) = 0;
  *(_QWORD *)(a1 + 1256) = a1 + 1272;
  *(_QWORD *)(a1 + 1296) = a1 + 1312;
  *(_QWORD *)(a1 + 1360) = a1 + 1376;
  *(_QWORD *)(a1 + 1312) = a1 + 1328;
  *(_QWORD *)(a1 + 1408) = a1 + 1424;
  *(_QWORD *)(a1 + 1320) = 0x700000000LL;
  *(_QWORD *)(a1 + 1368) = 0x700000000LL;
  *(_QWORD *)(a1 + 1416) = 0x700000000LL;
  *(_QWORD *)(a1 + 1456) = a1 + 1472;
  *(_QWORD *)(a1 + 1464) = 0x700000000LL;
  *(_QWORD *)(a1 + 1512) = 0x700000000LL;
  v6 = (_QWORD *)(a1 + 1560);
  *(_QWORD *)(a1 + 1504) = a1 + 1520;
  *(_DWORD *)(a1 + 1288) = 0;
  *(_QWORD *)(a1 + 1264) = 0;
  *(_QWORD *)(a1 + 1272) = 0;
  *(_QWORD *)(a1 + 1280) = 0;
  *(_QWORD *)(a1 + 1304) = 0;
  for ( *(_QWORD *)(a1 + 1552) = 1; (_QWORD *)(a1 + 1624) != v6; v6 += 2 )
    *v6 = -4096;
  *(_QWORD *)(a1 + 1624) = 1;
  if ( a1 + 1632 != a1 + 1664 )
  {
    v7 = (__m128i *)(a1 + 1632);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
    do
      *v7++ = si128;
    while ( (__m128i *)(a1 + 1664) != v7 );
  }
  v9 = *(unsigned int *)(a2 + 344);
  if ( (_DWORD)v9
    && (v23 = *(_QWORD *)(a2 + 336) + 6776 * v9 - 6776, *(_QWORD *)(v23 + 6768) == *(_QWORD *)(a2 + 328))
    && (v24 = *(unsigned int *)(v23 + 8), v25 = *(unsigned int *)(a2 + 27504), (unsigned int)v24 > (unsigned int)v25)
    && (v26 = v24 - v25) != 0
    && (v27 = *(_QWORD *)v23 + 1688 * (v26 - 1)) != 0 )
  {
    v28 = *(_DWORD *)(v27 + 976);
    *(_DWORD *)(a1 + 16) = v28;
    if ( !sub_FFE8A0(v28) )
      return;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 103;
    if ( !sub_FFE8A0(103) )
      return;
  }
  v12 = *(_QWORD *)a1;
  v13 = *(unsigned int *)(*(_QWORD *)a1 + 344LL);
  if ( !(_DWORD)v13
    || (v14 = *(_QWORD *)(v12 + 336) + 6776 * v13 - 6776, *(_QWORD *)(v14 + 6768) != *(_QWORD *)(v12 + 328))
    || (v15 = *(unsigned int *)(v14 + 8), v16 = *(unsigned int *)(v12 + 27504), (unsigned int)v15 <= (unsigned int)v16)
    || (v17 = v15 - v16) == 0 )
  {
    BUG();
  }
  v18 = v17 - 1;
  v19 = *(_QWORD *)v14 + 1688 * v18;
  v20 = *(__int64 **)(v19 + 1232);
  v21 = &v20[*(unsigned int *)(v19 + 1240)];
  while ( v21 != v20 )
  {
    v22 = *v20++;
    sub_1B48300(a1, v22, v19, v18, v10, v11);
  }
}
