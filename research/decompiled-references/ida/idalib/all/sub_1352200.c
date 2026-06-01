unsigned __int64 __fastcall sub_1352200(__int64 a1, __int64 a2)
{
  __m128i *v4; // rdi
  __m128i v5; // xmm6
  __m128i v6; // xmm5
  __m128i v7; // xmm4
  __m128i v8; // xmm3
  __m128i v9; // xmm2
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int16 v13; // ax
  int v14; // eax
  char *v15; // r15
  signed __int64 v16; // r12
  unsigned __int64 v17; // rax
  __m128i v18; // xmm0
  char *v19; // r12
  char *v20; // rax
  char *v21; // r14
  char *v22; // r13
  char *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  signed __int64 v27; // r12
  char *v28; // rcx
  __m128i v29; // xmm0
  const void *v30; // rsi
  __int64 v31; // r12
  char *v32; // rcx
  unsigned __int64 v33; // r12
  __m128i v34; // xmm0
  __int64 v35; // r12
  const void *v36; // rsi
  size_t v37; // rax
  signed __int64 v38; // r12
  char *v39; // r15
  __m128i v40; // xmm0
  char *v41; // r12
  char *v42; // rcx
  char *v43; // r14
  __int64 v44; // r13
  void (__fastcall *v45)(char *, __int64, __int64); // rax
  char *v47; // [rsp+8h] [rbp-D0h] BYREF
  __m128i v48; // [rsp+10h] [rbp-C8h]
  __m128i v49; // [rsp+20h] [rbp-B8h]
  __m128i v50; // [rsp+30h] [rbp-A8h]
  __m128i v51; // [rsp+40h] [rbp-98h]
  __m128i v52; // [rsp+50h] [rbp-88h]
  __m128i v53; // [rsp+60h] [rbp-78h]
  __m128i v54; // [rsp+70h] [rbp-68h]
  __m128i v55; // [rsp+80h] [rbp-58h]
  __int64 v56; // [rsp+90h] [rbp-48h]
  __int16 v57; // [rsp+98h] [rbp-40h]

  v4 = (__m128i *)(a1 + 144);
  v48 = _mm_loadu_si128((const __m128i *)a2);
  v5 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  v49 = v5;
  v6 = _mm_loadu_si128((const __m128i *)(a2 + 32));
  v50 = v6;
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  v51 = v7;
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 64));
  v52 = v8;
  v9 = _mm_loadu_si128((const __m128i *)(a2 + 80));
  v53 = v9;
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 96));
  v54 = v10;
  v11 = _mm_loadu_si128((const __m128i *)(a2 + 112));
  v55 = v11;
  v56 = *(_QWORD *)(a2 + 128);
  v12 = v56;
  v57 = *(_WORD *)(a2 + 136);
  v13 = v57;
  v4[-9] = v48;
  v4[-8] = v5;
  v4[-7] = v6;
  v4[-6] = v7;
  v4[-5] = v8;
  v4[-4] = v9;
  v4[-1].m128i_i16[4] = v13;
  v4[-3] = v10;
  v4[-2] = v11;
  v4[-1].m128i_i64[0] = v12;
  *(_QWORD *)(a1 + 144) = a1 + 160;
  sub_12FAA20(v4, *(_BYTE **)(a2 + 144), *(_QWORD *)(a2 + 144) + *(_QWORD *)(a2 + 152));
  *(_QWORD *)(a1 + 176) = a1 + 192;
  sub_12FAA20((_QWORD *)(a1 + 176), *(_BYTE **)(a2 + 176), *(_QWORD *)(a2 + 176) + *(_QWORD *)(a2 + 184));
  *(_QWORD *)(a1 + 208) = a1 + 224;
  sub_12FAA20((_QWORD *)(a1 + 208), *(_BYTE **)(a2 + 208), *(_QWORD *)(a2 + 208) + *(_QWORD *)(a2 + 216));
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 240);
  *(_QWORD *)(a1 + 248) = a1 + 264;
  sub_12FAA20((_QWORD *)(a1 + 248), *(_BYTE **)(a2 + 248), *(_QWORD *)(a2 + 248) + *(_QWORD *)(a2 + 256));
  *(_QWORD *)(a1 + 280) = a1 + 296;
  sub_12FAA20((_QWORD *)(a1 + 280), *(_BYTE **)(a2 + 280), *(_QWORD *)(a2 + 280) + *(_QWORD *)(a2 + 288));
  *(_QWORD *)(a1 + 312) = a1 + 328;
  sub_12FAA20((_QWORD *)(a1 + 312), *(_BYTE **)(a2 + 312), *(_QWORD *)(a2 + 312) + *(_QWORD *)(a2 + 320));
  *(_QWORD *)(a1 + 344) = a1 + 360;
  sub_12FAA20((_QWORD *)(a1 + 344), *(_BYTE **)(a2 + 344), *(_QWORD *)(a2 + 344) + *(_QWORD *)(a2 + 352));
  *(_DWORD *)(a1 + 376) = *(_DWORD *)(a2 + 376);
  *(_QWORD *)(a1 + 384) = a1 + 400;
  sub_12FAA20((_QWORD *)(a1 + 384), *(_BYTE **)(a2 + 384), *(_QWORD *)(a2 + 384) + *(_QWORD *)(a2 + 392));
  *(_QWORD *)(a1 + 416) = a1 + 432;
  sub_12FAA20((_QWORD *)(a1 + 416), *(_BYTE **)(a2 + 416), *(_QWORD *)(a2 + 416) + *(_QWORD *)(a2 + 424));
  *(_QWORD *)(a1 + 448) = a1 + 464;
  sub_12FAA20((_QWORD *)(a1 + 448), *(_BYTE **)(a2 + 448), *(_QWORD *)(a2 + 448) + *(_QWORD *)(a2 + 456));
  *(_QWORD *)(a1 + 480) = a1 + 496;
  sub_12FAA20((_QWORD *)(a1 + 480), *(_BYTE **)(a2 + 480), *(_QWORD *)(a2 + 480) + *(_QWORD *)(a2 + 488));
  *(_QWORD *)(a1 + 512) = a1 + 528;
  sub_12FAA20((_QWORD *)(a1 + 512), *(_BYTE **)(a2 + 512), *(_QWORD *)(a2 + 512) + *(_QWORD *)(a2 + 520));
  *(_QWORD *)(a1 + 544) = a1 + 560;
  *(_QWORD *)(a1 + 552) = 0;
  if ( *(_DWORD *)(a2 + 552) )
    sub_1351ED0(a1 + 544, a2 + 544);
  *(_QWORD *)(a1 + 568) = 0;
  v14 = *(_DWORD *)(a2 + 568);
  *(_QWORD *)(a1 + 560) = a1 + 576;
  if ( v14 )
    sub_1351ED0(a1 + 560, a2 + 560);
  v15 = nullptr;
  *(_QWORD *)(a1 + 576) = a1 + 592;
  sub_12FAA20((_QWORD *)(a1 + 576), *(_BYTE **)(a2 + 576), *(_QWORD *)(a2 + 576) + *(_QWORD *)(a2 + 584));
  *(_QWORD *)(a1 + 608) = a1 + 624;
  sub_12FAA20((_QWORD *)(a1 + 608), *(_BYTE **)(a2 + 608), *(_QWORD *)(a2 + 608) + *(_QWORD *)(a2 + 616));
  *(_WORD *)(a1 + 640) = *(_WORD *)(a2 + 640);
  *(_WORD *)(a1 + 642) = *(_WORD *)(a2 + 642);
  *(_QWORD *)(a1 + 648) = a1 + 664;
  sub_12FAA20((_QWORD *)(a1 + 648), *(_BYTE **)(a2 + 648), *(_QWORD *)(a2 + 648) + *(_QWORD *)(a2 + 656));
  v16 = *(_QWORD *)(a2 + 688) - *(_QWORD *)(a2 + 680);
  *(_OWORD *)(a1 + 680) = 0;
  *(_QWORD *)(a1 + 696) = 0;
  v17 = 0xCCCCCCCCCCCCCCCDLL * (v16 >> 3);
  if ( v17 )
  {
    if ( v17 > 0x666666666666666LL )
      goto LABEL_45;
    v15 = (char *)operator new(v16);
  }
  v47 = v15;
  v18 = _mm_loadl_epi64((const __m128i *)&v47);
  *(_QWORD *)(a1 + 696) = &v15[v16];
  *(__m128i *)(a1 + 680) = _mm_unpacklo_epi64(v18, v18);
  v19 = *(char **)(a2 + 688);
  v20 = *(char **)(a2 + 680);
  if ( v19 != v20 )
  {
    v21 = *(char **)(a2 + 680);
    v22 = v15;
    do
    {
      v23 = v22;
      v47 = v20;
      v21 += 40;
      *(_QWORD *)v22 = v22 + 16;
      v22 += 40;
      sub_12FAA20(v23, *((_BYTE **)v21 - 5), *((_QWORD *)v21 - 5) + *((_QWORD *)v21 - 4));
      v20 = v47;
      *(v22 - 8) = *(v21 - 8);
      *(v22 - 7) = *(v21 - 7);
      *((_DWORD *)v22 - 1) = *((_DWORD *)v21 - 1);
    }
    while ( v19 != v21 );
    v15 += 8 * ((unsigned __int64)(v19 - 40 - v20) >> 3) + 40;
  }
  *(_QWORD *)(a1 + 688) = v15;
  *(_QWORD *)(a1 + 704) = a1 + 720;
  sub_12FAA20((_QWORD *)(a1 + 704), *(_BYTE **)(a2 + 704), *(_QWORD *)(a2 + 704) + *(_QWORD *)(a2 + 712));
  *(_QWORD *)(a1 + 736) = a1 + 752;
  sub_12FAA20((_QWORD *)(a1 + 736), *(_BYTE **)(a2 + 736), *(_QWORD *)(a2 + 736) + *(_QWORD *)(a2 + 744));
  *(_QWORD *)(a1 + 768) = a1 + 784;
  sub_12FAA20((_QWORD *)(a1 + 768), *(_BYTE **)(a2 + 768), *(_QWORD *)(a2 + 768) + *(_QWORD *)(a2 + 776));
  *(_QWORD *)(a1 + 800) = a1 + 816;
  sub_12FAA20((_QWORD *)(a1 + 800), *(_BYTE **)(a2 + 800), *(_QWORD *)(a2 + 800) + *(_QWORD *)(a2 + 808));
  *(_DWORD *)(a1 + 832) = *(_DWORD *)(a2 + 832);
  *(_QWORD *)(a1 + 840) = a1 + 856;
  sub_12FAA20((_QWORD *)(a1 + 840), *(_BYTE **)(a2 + 840), *(_QWORD *)(a2 + 840) + *(_QWORD *)(a2 + 848));
  sub_C23620(a1 + 872, (__int64 *)(a2 + 872));
  sub_C23620(a1 + 896, (__int64 *)(a2 + 896));
  *(_QWORD *)(a1 + 920) = a1 + 936;
  sub_12FAA20((_QWORD *)(a1 + 920), *(_BYTE **)(a2 + 920), *(_QWORD *)(a2 + 920) + *(_QWORD *)(a2 + 928));
  *(_QWORD *)(a1 + 952) = a1 + 968;
  sub_12FAA20((_QWORD *)(a1 + 952), *(_BYTE **)(a2 + 952), *(_QWORD *)(a2 + 952) + *(_QWORD *)(a2 + 960));
  *(_QWORD *)(a1 + 984) = a1 + 1000;
  sub_12FAA20((_QWORD *)(a1 + 984), *(_BYTE **)(a2 + 984), *(_QWORD *)(a2 + 984) + *(_QWORD *)(a2 + 992));
  *(_QWORD *)(a1 + 1016) = a1 + 1032;
  sub_12FAA20((_QWORD *)(a1 + 1016), *(_BYTE **)(a2 + 1016), *(_QWORD *)(a2 + 1016) + *(_QWORD *)(a2 + 1024));
  *(_QWORD *)(a1 + 1048) = a1 + 1064;
  sub_12FAA20((_QWORD *)(a1 + 1048), *(_BYTE **)(a2 + 1048), *(_QWORD *)(a2 + 1048) + *(_QWORD *)(a2 + 1056));
  *(_QWORD *)(a1 + 1080) = a1 + 1096;
  sub_12FAA20((_QWORD *)(a1 + 1080), *(_BYTE **)(a2 + 1080), *(_QWORD *)(a2 + 1080) + *(_QWORD *)(a2 + 1088));
  *(_QWORD *)(a1 + 1112) = a1 + 1128;
  sub_12FAA20((_QWORD *)(a1 + 1112), *(_BYTE **)(a2 + 1112), *(_QWORD *)(a2 + 1112) + *(_QWORD *)(a2 + 1120));
  *(_QWORD *)(a1 + 1144) = a1 + 1160;
  sub_12FAA20((_QWORD *)(a1 + 1144), *(_BYTE **)(a2 + 1144), *(_QWORD *)(a2 + 1144) + *(_QWORD *)(a2 + 1152));
  *(_QWORD *)(a1 + 1176) = a1 + 1192;
  sub_12FAA20((_QWORD *)(a1 + 1176), *(_BYTE **)(a2 + 1176), *(_QWORD *)(a2 + 1176) + *(_QWORD *)(a2 + 1184));
  *(_QWORD *)(a1 + 1208) = a1 + 1224;
  sub_12FAA20((_QWORD *)(a1 + 1208), *(_BYTE **)(a2 + 1208), *(_QWORD *)(a2 + 1208) + *(_QWORD *)(a2 + 1216));
  *(_QWORD *)(a1 + 1240) = a1 + 1256;
  sub_12FAA20((_QWORD *)(a1 + 1240), *(_BYTE **)(a2 + 1240), *(_QWORD *)(a2 + 1240) + *(_QWORD *)(a2 + 1248));
  sub_C23620(a1 + 1272, (__int64 *)(a2 + 1272));
  *(_QWORD *)(a1 + 1296) = a1 + 1312;
  sub_12FAA20((_QWORD *)(a1 + 1296), *(_BYTE **)(a2 + 1296), *(_QWORD *)(a2 + 1296) + *(_QWORD *)(a2 + 1304));
  *(_QWORD *)(a1 + 1328) = a1 + 1344;
  sub_12FAA20((_QWORD *)(a1 + 1328), *(_BYTE **)(a2 + 1328), *(_QWORD *)(a2 + 1328) + *(_QWORD *)(a2 + 1336));
  *(_QWORD *)(a1 + 1360) = a1 + 1376;
  sub_12FAA20((_QWORD *)(a1 + 1360), *(_BYTE **)(a2 + 1360), *(_QWORD *)(a2 + 1360) + *(_QWORD *)(a2 + 1368));
  *(_QWORD *)(a1 + 1392) = a1 + 1408;
  sub_12FAA20((_QWORD *)(a1 + 1392), *(_BYTE **)(a2 + 1392), *(_QWORD *)(a2 + 1392) + *(_QWORD *)(a2 + 1400));
  *(_QWORD *)(a1 + 1424) = a1 + 1440;
  sub_12FAA20((_QWORD *)(a1 + 1424), *(_BYTE **)(a2 + 1424), *(_QWORD *)(a2 + 1424) + *(_QWORD *)(a2 + 1432));
  *(_DWORD *)(a1 + 1456) = *(_DWORD *)(a2 + 1456);
  *(_QWORD *)(a1 + 1464) = a1 + 1480;
  sub_12FAA20((_QWORD *)(a1 + 1464), *(_BYTE **)(a2 + 1464), *(_QWORD *)(a2 + 1464) + *(_QWORD *)(a2 + 1472));
  *(_QWORD *)(a1 + 1496) = *(_QWORD *)(a2 + 1496);
  v24 = *(_QWORD *)(a2 + 1504);
  *(_QWORD *)(a1 + 1504) = v24;
  if ( v24 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v24 + 8), 1u);
    else
      ++*(_DWORD *)(v24 + 8);
  }
  *(_DWORD *)(a1 + 1512) = *(_DWORD *)(a2 + 1512);
  *(_QWORD *)(a1 + 1520) = a1 + 1536;
  sub_12FAA20((_QWORD *)(a1 + 1520), *(_BYTE **)(a2 + 1520), *(_QWORD *)(a2 + 1520) + *(_QWORD *)(a2 + 1528));
  *(_QWORD *)(a1 + 1552) = *(_QWORD *)(a2 + 1552);
  v25 = *(_QWORD *)(a2 + 1560);
  *(_QWORD *)(a1 + 1560) = v25;
  if ( v25 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v25 + 8), 1u);
    else
      ++*(_DWORD *)(v25 + 8);
  }
  *(_DWORD *)(a1 + 1568) = *(_DWORD *)(a2 + 1568);
  *(_QWORD *)(a1 + 1576) = a1 + 1592;
  sub_12FAA20((_QWORD *)(a1 + 1576), *(_BYTE **)(a2 + 1576), *(_QWORD *)(a2 + 1576) + *(_QWORD *)(a2 + 1584));
  *(_QWORD *)(a1 + 1608) = *(_QWORD *)(a2 + 1608);
  v26 = *(_QWORD *)(a2 + 1616);
  *(_QWORD *)(a1 + 1616) = v26;
  if ( v26 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
    else
      ++*(_DWORD *)(v26 + 8);
  }
  *(__m128i *)(a1 + 1624) = _mm_loadu_si128((const __m128i *)(a2 + 1624));
  *(__m128i *)(a1 + 1640) = _mm_loadu_si128((const __m128i *)(a2 + 1640));
  *(__m128i *)(a1 + 1656) = _mm_loadu_si128((const __m128i *)(a2 + 1656));
  v27 = *(_QWORD *)(a2 + 1680) - *(_QWORD *)(a2 + 1672);
  *(_QWORD *)(a1 + 1672) = 0;
  *(_QWORD *)(a1 + 1680) = 0;
  *(_QWORD *)(a1 + 1688) = 0;
  if ( v27 >> 3 )
  {
    if ( (unsigned __int64)(v27 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
      goto LABEL_45;
    v28 = (char *)operator new(v27);
  }
  else
  {
    v28 = nullptr;
  }
  v47 = v28;
  v29 = _mm_loadl_epi64((const __m128i *)&v47);
  *(_QWORD *)(a1 + 1688) = &v28[v27];
  *(__m128i *)(a1 + 1672) = _mm_unpacklo_epi64(v29, v29);
  v30 = *(const void **)(a2 + 1672);
  v31 = *(_QWORD *)(a2 + 1680) - (_QWORD)v30;
  if ( *(const void **)(a2 + 1680) != v30 )
    v28 = (char *)memmove(v28, v30, *(_QWORD *)(a2 + 1680) - (_QWORD)v30);
  *(_QWORD *)(a1 + 1680) = &v28[v31];
  v32 = nullptr;
  *(__m128i *)(a1 + 1696) = _mm_loadu_si128((const __m128i *)(a2 + 1696));
  *(__m128i *)(a1 + 1712) = _mm_loadu_si128((const __m128i *)(a2 + 1712));
  v33 = *(_QWORD *)(a2 + 1736) - *(_QWORD *)(a2 + 1728);
  *(_QWORD *)(a1 + 1728) = 0;
  *(_QWORD *)(a1 + 1736) = 0;
  *(_QWORD *)(a1 + 1744) = 0;
  if ( v33 )
    v32 = (char *)operator new(v33);
  v47 = v32;
  v34 = _mm_loadl_epi64((const __m128i *)&v47);
  *(_QWORD *)(a1 + 1744) = &v32[v33];
  v35 = 0;
  *(__m128i *)(a1 + 1728) = _mm_unpacklo_epi64(v34, v34);
  v36 = *(const void **)(a2 + 1728);
  v37 = *(_QWORD *)(a2 + 1736) - (_QWORD)v36;
  if ( v37 )
  {
    v35 = *(_QWORD *)(a2 + 1736) - (_QWORD)v36;
    v32 = (char *)memmove(v32, v36, v37);
  }
  *(_QWORD *)(a1 + 1736) = &v32[v35];
  sub_C23620(a1 + 1752, (__int64 *)(a2 + 1752));
  sub_C23620(a1 + 1776, (__int64 *)(a2 + 1776));
  *(__m128i *)(a1 + 1800) = _mm_loadu_si128((const __m128i *)(a2 + 1800));
  *(__m128i *)(a1 + 1816) = _mm_loadu_si128((const __m128i *)(a2 + 1816));
  *(__m128i *)(a1 + 1832) = _mm_loadu_si128((const __m128i *)(a2 + 1832));
  *(__m128i *)(a1 + 1848) = _mm_loadu_si128((const __m128i *)(a2 + 1848));
  *(_QWORD *)(a1 + 1864) = *(_QWORD *)(a2 + 1864);
  *(_QWORD *)(a1 + 1872) = a1 + 1888;
  sub_12FAA20((_QWORD *)(a1 + 1872), *(_BYTE **)(a2 + 1872), *(_QWORD *)(a2 + 1872) + *(_QWORD *)(a2 + 1880));
  *(_DWORD *)(a1 + 1904) = *(_DWORD *)(a2 + 1904);
  sub_C23620(a1 + 1912, (__int64 *)(a2 + 1912));
  sub_C23620(a1 + 1936, (__int64 *)(a2 + 1936));
  v38 = *(_QWORD *)(a2 + 1968) - *(_QWORD *)(a2 + 1960);
  *(_OWORD *)(a1 + 1960) = 0;
  *(_QWORD *)(a1 + 1976) = 0;
  if ( v38 >> 5 )
  {
    if ( (unsigned __int64)(v38 >> 5) <= 0x7FFFFFFFFFFFFFFLL )
    {
      v39 = (char *)operator new(v38);
      goto LABEL_33;
    }
LABEL_45:
    std::__throw_bad_alloc();
  }
  v39 = nullptr;
LABEL_33:
  v47 = v39;
  v40 = _mm_loadl_epi64((const __m128i *)&v47);
  *(_QWORD *)(a1 + 1976) = &v39[v38];
  *(__m128i *)(a1 + 1960) = _mm_unpacklo_epi64(v40, v40);
  v41 = *(char **)(a2 + 1968);
  v42 = *(char **)(a2 + 1960);
  if ( v41 != v42 )
  {
    v43 = v39;
    v44 = *(_QWORD *)(a2 + 1960);
    do
    {
      *((_QWORD *)v43 + 2) = 0;
      v45 = *(void (__fastcall **)(char *, __int64, __int64))(v44 + 16);
      if ( v45 )
      {
        v47 = v42;
        v45(v43, v44, 2);
        v42 = v47;
        *((_QWORD *)v43 + 3) = *(_QWORD *)(v44 + 24);
        *((_QWORD *)v43 + 2) = *(_QWORD *)(v44 + 16);
      }
      v44 += 32;
      v43 += 32;
    }
    while ( v41 != (char *)v44 );
    v39 += ((v41 - 32 - v42) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  }
  *(_QWORD *)(a1 + 1968) = v39;
  sub_C23620(a1 + 1984, (__int64 *)(a2 + 1984));
  sub_C23620(a1 + 2008, (__int64 *)(a2 + 2008));
  sub_C23620(a1 + 2032, (__int64 *)(a2 + 2032));
  *(_QWORD *)(a1 + 2056) = a1 + 2072;
  sub_12FAA20((_QWORD *)(a1 + 2056), *(_BYTE **)(a2 + 2056), *(_QWORD *)(a2 + 2056) + *(_QWORD *)(a2 + 2064));
  *(_QWORD *)(a1 + 2088) = a1 + 2104;
  sub_12FAA20((_QWORD *)(a1 + 2088), *(_BYTE **)(a2 + 2088), *(_QWORD *)(a2 + 2088) + *(_QWORD *)(a2 + 2096));
  *(_QWORD *)(a1 + 2120) = a1 + 2136;
  sub_12FAA20((_QWORD *)(a1 + 2120), *(_BYTE **)(a2 + 2120), *(_QWORD *)(a2 + 2120) + *(_QWORD *)(a2 + 2128));
  sub_C23620(a1 + 2152, (__int64 *)(a2 + 2152));
  sub_C23620(a1 + 2176, (__int64 *)(a2 + 2176));
  *(_QWORD *)(a1 + 2200) = a1 + 2216;
  sub_12FAA20((_QWORD *)(a1 + 2200), *(_BYTE **)(a2 + 2200), *(_QWORD *)(a2 + 2200) + *(_QWORD *)(a2 + 2208));
  *(_QWORD *)(a1 + 2232) = *(_QWORD *)(a2 + 2232);
  sub_C23620(a1 + 2240, (__int64 *)(a2 + 2240));
  *(__m128i *)(a1 + 2264) = _mm_loadu_si128((const __m128i *)(a2 + 2264));
  *(_QWORD *)(a1 + 2280) = *(_QWORD *)(a2 + 2280);
  *(_QWORD *)(a1 + 2288) = a1 + 2304;
  sub_12FAA20((_QWORD *)(a1 + 2288), *(_BYTE **)(a2 + 2288), *(_QWORD *)(a2 + 2288) + *(_QWORD *)(a2 + 2296));
  sub_C23620(a1 + 2320, (__int64 *)(a2 + 2320));
  *(_QWORD *)(a1 + 2344) = a1 + 2360;
  sub_12FAA20((_QWORD *)(a1 + 2344), *(_BYTE **)(a2 + 2344), *(_QWORD *)(a2 + 2344) + *(_QWORD *)(a2 + 2352));
  return sub_C23620(a1 + 2376, (__int64 *)(a2 + 2376));
}
