__int64 __fastcall sub_AFEDF0(__int64 a1)
{
  void *v2; // r13
  int v3; // eax
  _BYTE *v4; // r12
  size_t v5; // rbp
  __m128i v6; // xmm0
  size_t v7; // rax
  _BYTE *v8; // r12
  size_t v9; // rbp
  size_t v10; // rax
  __int128 v11; // xmm0
  int v12; // edx
  char v13; // al
  __m128i v14; // xmm0
  __int64 v15; // rcx
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rsi
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int128 v26; // xmm0
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 result; // rax
  __int64 v38; // rax
  __int64 v39; // r14
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  void *v42; // rdi
  _BYTE *v43; // rsi
  __int64 v44; // r14
  unsigned __int64 v45; // rdi
  __int64 v46; // rax
  void *v47; // rdi
  _BYTE *v48; // rsi

  v2 = (void *)(a1 + 1072);
  sub_1858C20(a1 + 944);
  sub_1863170(a1 + 944, a1 + 80);
  v3 = *(_DWORD *)(a1 + 183);
  v4 = *(_BYTE **)(a1 + 1056);
  v5 = *(_QWORD *)(a1 + 232);
  *(__m128i *)(a1 + 952) = _mm_loadu_si128((const __m128i *)(a1 + 120));
  *(__m128i *)(a1 + 968) = _mm_loadu_si128((const __m128i *)(a1 + 136));
  *(__m128i *)(a1 + 984) = _mm_loadu_si128((const __m128i *)(a1 + 152));
  *(__m128i *)(a1 + 1000) = _mm_loadu_si128((const __m128i *)(a1 + 168));
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 192));
  *(_DWORD *)(a1 + 1015) = v3;
  *(__m128i *)(a1 + 1024) = v6;
  *(__m128i *)(a1 + 1040) = _mm_loadu_si128((const __m128i *)(a1 + 208));
  if ( v4 == (_BYTE *)(a1 + 1072) )
  {
    if ( v5 <= 0xF )
    {
LABEL_3:
      if ( !v5 )
        goto LABEL_4;
      goto LABEL_17;
    }
    if ( (v5 & 0x8000000000000000LL) != 0LL )
      goto LABEL_43;
    v38 = 30;
    if ( v5 >= 0x1E )
      v38 = v5;
    v39 = v38;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 1072);
    if ( v7 >= v5 )
      goto LABEL_3;
    if ( (v5 & 0x8000000000000000LL) != 0LL )
      goto LABEL_43;
    v39 = 2 * v7;
    if ( v5 < 2 * v7 )
    {
      if ( (v7 & 0x4000000000000000LL) != 0 )
        goto LABEL_41;
      v40 = v39 + 1;
      goto LABEL_14;
    }
    v39 = v5;
  }
  v40 = v39 + 1;
  if ( v39 + 1 < 0 )
    goto LABEL_41;
LABEL_14:
  v41 = operator new(v40);
  v42 = *(void **)(a1 + 1056);
  v4 = (_BYTE *)v41;
  if ( v2 != v42 )
    operator delete(v42, *(_QWORD *)(a1 + 1072) + 1LL);
  *(_QWORD *)(a1 + 1056) = v4;
  *(_QWORD *)(a1 + 1072) = v39;
LABEL_17:
  v43 = *(_BYTE **)(a1 + 224);
  if ( v5 == 1 )
    *v4 = *v43;
  else
    memcpy(v4, v43, v5);
  v4 = *(_BYTE **)(a1 + 1056);
LABEL_4:
  *(_QWORD *)(a1 + 1064) = v5;
  v4[v5] = 0;
  v8 = *(_BYTE **)(a1 + 1088);
  v9 = *(_QWORD *)(a1 + 264);
  if ( v8 != (_BYTE *)(a1 + 1104) )
  {
    v10 = *(_QWORD *)(a1 + 1104);
    if ( v10 >= v9 )
      goto LABEL_6;
    if ( (v9 & 0x8000000000000000LL) == 0LL )
    {
      v44 = 2 * v10;
      if ( v9 >= 2 * v10 )
        goto LABEL_22;
      v45 = v44 + 1;
      if ( (v10 & 0x4000000000000000LL) == 0 )
        goto LABEL_24;
LABEL_41:
      std::__throw_bad_alloc();
    }
LABEL_43:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v9 <= 0xF )
  {
LABEL_6:
    if ( !v9 )
      goto LABEL_7;
    goto LABEL_27;
  }
  if ( (v9 & 0x8000000000000000LL) != 0LL )
    goto LABEL_43;
  if ( v9 <= 0x1D )
  {
    v45 = 31;
    v44 = 30;
    goto LABEL_24;
  }
LABEL_22:
  v45 = v9 + 1;
  if ( (__int64)(v9 + 1) < 0 )
    goto LABEL_41;
  v44 = *(_QWORD *)(a1 + 264);
LABEL_24:
  v46 = operator new(v45);
  v47 = *(void **)(a1 + 1088);
  v8 = (_BYTE *)v46;
  if ( (void *)(a1 + 1104) != v47 )
    operator delete(v47, *(_QWORD *)(a1 + 1104) + 1LL);
  *(_QWORD *)(a1 + 1088) = v8;
  *(_QWORD *)(a1 + 1104) = v44;
LABEL_27:
  v48 = *(_BYTE **)(a1 + 256);
  if ( v9 == 1 )
    *v8 = *v48;
  else
    memcpy(v8, v48, v9);
  v8 = *(_BYTE **)(a1 + 1088);
LABEL_7:
  *(_QWORD *)(a1 + 1096) = v9;
  v8[v9] = 0;
  v11 = *(_OWORD *)(a1 + 288);
  v12 = *(_DWORD *)(a1 + 344);
  *(_QWORD *)(a1 + 1136) = *(_QWORD *)(a1 + 304);
  v13 = *(_BYTE *)(a1 + 312);
  *(_OWORD *)(a1 + 1120) = v11;
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 368));
  v15 = *(_QWORD *)(a1 + 336);
  *(_BYTE *)(a1 + 1144) = v13;
  v16 = *(_QWORD *)(a1 + 316);
  *(__m128i *)(a1 + 1200) = v14;
  v17 = _mm_loadu_si128((const __m128i *)(a1 + 384));
  v18 = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(a1 + 1148) = v16;
  LOWORD(v16) = *(_WORD *)(a1 + 324);
  *(__m128i *)(a1 + 1216) = v17;
  v19 = _mm_loadu_si128((const __m128i *)(a1 + 400));
  *(_WORD *)(a1 + 1156) = v16;
  LOBYTE(v16) = *(_BYTE *)(a1 + 348);
  *(__m128i *)(a1 + 1232) = v19;
  v20 = _mm_loadu_si128((const __m128i *)(a1 + 416));
  *(_BYTE *)(a1 + 1180) = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 352);
  *(_DWORD *)(a1 + 1176) = v12;
  *(_DWORD *)(a1 + 1184) = v16;
  v21 = *(_QWORD *)(a1 + 360);
  *(_QWORD *)(a1 + 1160) = v18;
  *(_QWORD *)(a1 + 1192) = v21;
  *(_QWORD *)(a1 + 1168) = v15;
  *(__m128i *)(a1 + 1248) = v20;
  LODWORD(v21) = *(_DWORD *)(a1 + 511);
  *(__m128i *)(a1 + 1264) = _mm_loadu_si128((const __m128i *)(a1 + 432));
  *(__m128i *)(a1 + 1280) = _mm_loadu_si128((const __m128i *)(a1 + 448));
  *(__m128i *)(a1 + 1296) = _mm_loadu_si128((const __m128i *)(a1 + 464));
  *(__m128i *)(a1 + 1312) = _mm_loadu_si128((const __m128i *)(a1 + 480));
  *(__m128i *)(a1 + 1328) = _mm_loadu_si128((const __m128i *)(a1 + 496));
  v22 = _mm_loadu_si128((const __m128i *)(a1 + 516));
  *(_DWORD *)(a1 + 1343) = v21;
  LODWORD(v21) = *(_DWORD *)(a1 + 560);
  *(__m128i *)(a1 + 1348) = v22;
  v23 = _mm_loadu_si128((const __m128i *)(a1 + 525));
  *(_DWORD *)(a1 + 1392) = v21;
  v24 = *(_QWORD *)(a1 + 564);
  *(__m128i *)(a1 + 1357) = v23;
  v25 = _mm_loadu_si128((const __m128i *)(a1 + 544));
  *(_QWORD *)(a1 + 1396) = v24;
  LODWORD(v24) = *(_DWORD *)(a1 + 572);
  *(__m128i *)(a1 + 1376) = v25;
  *(_DWORD *)(a1 + 1404) = v24;
  *(_DWORD *)(a1 + 1408) = *(_DWORD *)(a1 + 576);
  *(_BYTE *)(a1 + 1412) = *(_BYTE *)(a1 + 580);
  *(_DWORD *)(a1 + 1416) = *(_DWORD *)(a1 + 584);
  *(_DWORD *)(a1 + 1420) = *(_DWORD *)(a1 + 588);
  v26 = *(_OWORD *)(a1 + 608);
  v27 = *(_QWORD *)(a1 + 676);
  *(_WORD *)(a1 + 1424) = *(_WORD *)(a1 + 592);
  LODWORD(v24) = *(_DWORD *)(a1 + 596);
  *(_OWORD *)(a1 + 1440) = v26;
  v28 = _mm_loadu_si128((const __m128i *)(a1 + 624));
  *(_DWORD *)(a1 + 1428) = v24;
  LOBYTE(v24) = *(_BYTE *)(a1 + 600);
  *(_QWORD *)(a1 + 1508) = v27;
  v29 = *(_QWORD *)(a1 + 700);
  *(_BYTE *)(a1 + 1432) = v24;
  LODWORD(v24) = *(_DWORD *)(a1 + 604);
  *(__m128i *)(a1 + 1456) = v28;
  v30 = _mm_loadu_si128((const __m128i *)(a1 + 648));
  *(_DWORD *)(a1 + 1436) = v24;
  LODWORD(v24) = *(_DWORD *)(a1 + 640);
  *(__m128i *)(a1 + 1480) = v30;
  *(_DWORD *)(a1 + 1472) = v24;
  *(_BYTE *)(a1 + 1476) = *(_BYTE *)(a1 + 644);
  *(_QWORD *)(a1 + 1496) = *(_QWORD *)(a1 + 664);
  *(_BYTE *)(a1 + 1504) = *(_BYTE *)(a1 + 672);
  *(_BYTE *)(a1 + 1516) = *(_BYTE *)(a1 + 684);
  *(_QWORD *)(a1 + 1520) = *(_QWORD *)(a1 + 688);
  *(_WORD *)(a1 + 1528) = *(_WORD *)(a1 + 696);
  LOBYTE(v24) = *(_BYTE *)(a1 + 716);
  *(_QWORD *)(a1 + 1532) = v29;
  v30.m128i_i64[0] = *(_QWORD *)(a1 + 728);
  *(_BYTE *)(a1 + 1548) = v24;
  v31 = *(_QWORD *)(a1 + 720);
  *(_QWORD *)(a1 + 1560) = v30.m128i_i64[0];
  v32 = *(_OWORD *)(a1 + 744);
  v33 = *(_QWORD *)(a1 + 708);
  *(_QWORD *)(a1 + 1552) = v31;
  LOBYTE(v31) = *(_BYTE *)(a1 + 736);
  *(_OWORD *)(a1 + 1576) = v32;
  *(_QWORD *)&v32 = *(_QWORD *)(a1 + 776);
  *(_BYTE *)(a1 + 1568) = v31;
  LODWORD(v31) = *(_DWORD *)(a1 + 760);
  *(_QWORD *)(a1 + 1608) = v32;
  v34 = _mm_loadu_si128((const __m128i *)(a1 + 784));
  *(_DWORD *)(a1 + 1592) = v31;
  LOBYTE(v31) = *(_BYTE *)(a1 + 764);
  *(__m128i *)(a1 + 1616) = v34;
  v34.m128i_i64[0] = *(_QWORD *)(a1 + 808);
  *(_BYTE *)(a1 + 1596) = v31;
  v35 = *(_QWORD *)(a1 + 768);
  *(_QWORD *)(a1 + 1640) = v34.m128i_i64[0];
  *(_QWORD *)(a1 + 1600) = v35;
  LODWORD(v35) = *(_DWORD *)(a1 + 800);
  *(_QWORD *)(a1 + 1540) = v33;
  *(_DWORD *)(a1 + 1632) = v35;
  *(_DWORD *)(a1 + 1648) = *(_DWORD *)(a1 + 816);
  *(_QWORD *)(a1 + 1656) = *(_QWORD *)(a1 + 824);
  *(_DWORD *)(a1 + 1664) = *(_DWORD *)(a1 + 832);
  *(_WORD *)(a1 + 1668) = *(_WORD *)(a1 + 836);
  v34.m128i_i64[0] = *(_QWORD *)(a1 + 856);
  *(_DWORD *)(a1 + 1672) = *(_DWORD *)(a1 + 840);
  v36 = *(_QWORD *)(a1 + 844);
  *(_QWORD *)(a1 + 1688) = v34.m128i_i64[0];
  *(_QWORD *)(a1 + 1676) = v36;
  *(_BYTE *)(a1 + 1684) = *(_BYTE *)(a1 + 852);
  *(_BYTE *)(a1 + 1696) = *(_BYTE *)(a1 + 864);
  result = *(_QWORD *)(a1 + 872);
  *(_QWORD *)(a1 + 1704) = result;
  return result;
}

