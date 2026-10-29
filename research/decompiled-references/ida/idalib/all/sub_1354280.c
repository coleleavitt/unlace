_BYTE *__fastcall sub_1354280(__int64 a1, __int64 a2)
{
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  char v22; // al
  char v23; // al
  char v24; // al
  char v25; // al
  char v26; // al
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // al
  char v31; // al
  char v32; // al
  char v33; // al
  char v34; // al
  int v35; // eax
  int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 i; // rdx
  __int64 j; // rdx
  __int64 v41; // rdx
  signed __int64 v42; // r12
  __int64 v43; // rax
  __m128i v44; // xmm0
  char *v45; // rdx
  char *v46; // r8
  char *v47; // rcx
  _QWORD *v48; // rdi
  __int64 v49; // rsi
  __int64 v51; // rsi
  __m128i v52; // [rsp+8h] [rbp-30h] BYREF
  __int64 v53[4]; // [rsp+18h] [rbp-20h] BYREF

  v4 = *(_BYTE *)a2 & 1 | *(_BYTE *)a1 & 0xFE;
  *(_BYTE *)a1 = v4;
  v5 = *(_BYTE *)a2 & 2 | v4 & 0xFD;
  *(_BYTE *)a1 = v5;
  v6 = *(_BYTE *)a2 & 4 | v5 & 0xFB;
  *(_BYTE *)a1 = v6;
  v7 = *(_BYTE *)a2 & 8 | v6 & 0xF7;
  *(_BYTE *)a1 = v7;
  v8 = *(_BYTE *)a2 & 0x10 | v7 & 0xEF;
  *(_BYTE *)a1 = v8;
  v9 = *(_BYTE *)a2 & 0x20 | v8 & 0xDF;
  *(_BYTE *)a1 = v9;
  v10 = *(_BYTE *)a2 & 0x40 | v9 & 0xBF;
  *(_BYTE *)a1 = v10;
  *(_BYTE *)a1 = *(_BYTE *)a2 & 0x80 | v10 & 0x7F;
  v11 = *(_BYTE *)(a2 + 1) & 1 | *(_BYTE *)(a1 + 1) & 0xFE;
  *(_BYTE *)(a1 + 1) = v11;
  v12 = *(_BYTE *)(a2 + 1) & 2 | v11 & 0xFD;
  *(_BYTE *)(a1 + 1) = v12;
  v13 = *(_BYTE *)(a2 + 1) & 4 | v12 & 0xFB;
  *(_BYTE *)(a1 + 1) = v13;
  v14 = *(_BYTE *)(a2 + 1) & 8 | v13 & 0xF7;
  *(_BYTE *)(a1 + 1) = v14;
  v15 = *(_BYTE *)(a2 + 1) & 0x10 | v14 & 0xEF;
  *(_BYTE *)(a1 + 1) = v15;
  v16 = *(_BYTE *)(a2 + 1) & 0x20 | v15 & 0xDF;
  *(_BYTE *)(a1 + 1) = v16;
  v17 = *(_BYTE *)(a2 + 1) & 0x40 | v16 & 0xBF;
  *(_BYTE *)(a1 + 1) = v17;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1) & 0x80 | v17 & 0x7F;
  v18 = *(_BYTE *)(a2 + 2) & 1 | *(_BYTE *)(a1 + 2) & 0xFE;
  *(_BYTE *)(a1 + 2) = v18;
  v19 = *(_BYTE *)(a2 + 2) & 2 | v18 & 0xFD;
  *(_BYTE *)(a1 + 2) = v19;
  v20 = *(_BYTE *)(a2 + 2) & 4 | v19 & 0xFB;
  *(_BYTE *)(a1 + 2) = v20;
  v21 = *(_BYTE *)(a2 + 2) & 8 | v20 & 0xF7;
  *(_BYTE *)(a1 + 2) = v21;
  v22 = *(_BYTE *)(a2 + 2) & 0x10 | v21 & 0xEF;
  *(_BYTE *)(a1 + 2) = v22;
  v23 = *(_BYTE *)(a2 + 2) & 0x20 | v22 & 0xDF;
  *(_BYTE *)(a1 + 2) = v23;
  v24 = *(_BYTE *)(a2 + 2) & 0x40 | v23 & 0xBF;
  *(_BYTE *)(a1 + 2) = v24;
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 2) & 0x80 | v24 & 0x7F;
  v25 = *(_BYTE *)(a2 + 3) & 1 | *(_BYTE *)(a1 + 3) & 0xFE;
  *(_BYTE *)(a1 + 3) = v25;
  v26 = *(_BYTE *)(a2 + 3) & 2 | v25 & 0xFD;
  *(_BYTE *)(a1 + 3) = v26;
  v27 = *(_BYTE *)(a2 + 3) & 4 | v26 & 0xFB;
  *(_BYTE *)(a1 + 3) = v27;
  v28 = *(_BYTE *)(a2 + 3) & 8 | v27 & 0xF7;
  *(_BYTE *)(a1 + 3) = v28;
  v29 = *(_BYTE *)(a2 + 3) & 0x10 | v28 & 0xEF;
  *(_BYTE *)(a1 + 3) = v29;
  v30 = *(_BYTE *)(a2 + 3) & 0x20 | v29 & 0xDF;
  *(_BYTE *)(a1 + 3) = v30;
  v31 = *(_BYTE *)(a2 + 3) & 0x40 | v30 & 0xBF;
  *(_BYTE *)(a1 + 3) = v31;
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3) & 0x80 | v31 & 0x7F;
  v32 = *(_BYTE *)(a2 + 4) & 1 | *(_BYTE *)(a1 + 4) & 0xFE;
  *(_BYTE *)(a1 + 4) = v32;
  v33 = *(_BYTE *)(a2 + 4) & 2 | v32 & 0xFD;
  *(_BYTE *)(a1 + 4) = v33;
  v34 = *(_BYTE *)(a2 + 4) & 4 | v33 & 0xFB;
  *(_BYTE *)(a1 + 4) = v34;
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a2 + 4) & 8 | v34 & 0xF7;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  v35 = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 16) = v35;
  v36 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 24) = a1 + 40;
  if ( v36 )
    sub_1353170(a1 + 24, a2 + 24);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  sub_12FAA20((_QWORD *)(a1 + 40), *(_BYTE **)(a2 + 40), *(_QWORD *)(a2 + 40) + *(_QWORD *)(a2 + 48));
  *(_QWORD *)(a1 + 72) = a1 + 88;
  sub_12FAA20((_QWORD *)(a1 + 72), *(_BYTE **)(a2 + 72), *(_QWORD *)(a2 + 72) + *(_QWORD *)(a2 + 80));
  *(_QWORD *)(a1 + 104) = a1 + 120;
  sub_12FAA20((_QWORD *)(a1 + 104), *(_BYTE **)(a2 + 104), *(_QWORD *)(a2 + 104) + *(_QWORD *)(a2 + 112));
  *(_QWORD *)(a1 + 136) = a1 + 152;
  sub_12FAA20((_QWORD *)(a1 + 136), *(_BYTE **)(a2 + 136), *(_QWORD *)(a2 + 136) + *(_QWORD *)(a2 + 144));
  *(_QWORD *)(a1 + 168) = a1 + 184;
  sub_12FAA20((_QWORD *)(a1 + 168), *(_BYTE **)(a2 + 168), *(_QWORD *)(a2 + 168) + *(_QWORD *)(a2 + 176));
  *(_DWORD *)(a1 + 200) = *(_DWORD *)(a2 + 200);
  *(_DWORD *)(a1 + 204) = *(_DWORD *)(a2 + 204);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 208);
  *(_QWORD *)(a1 + 216) = a1 + 232;
  sub_12FAA20((_QWORD *)(a1 + 216), *(_BYTE **)(a2 + 216), *(_QWORD *)(a2 + 216) + *(_QWORD *)(a2 + 224));
  *(_QWORD *)(a1 + 248) = a1 + 264;
  sub_12FAA20((_QWORD *)(a1 + 248), *(_BYTE **)(a2 + 248), *(_QWORD *)(a2 + 248) + *(_QWORD *)(a2 + 256));
  sub_C23620(a1 + 280, (__int64 *)(a2 + 280));
  *(_QWORD *)(a1 + 304) = a1 + 320;
  sub_12FAA20((_QWORD *)(a1 + 304), *(_BYTE **)(a2 + 304), *(_QWORD *)(a2 + 304) + *(_QWORD *)(a2 + 312));
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = a1 + 344;
  *(_QWORD *)(a1 + 368) = a1 + 344;
  v37 = *(_QWORD *)(a2 + 352);
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  if ( v37 )
  {
    v53[0] = a1 + 336;
    v38 = sub_1353F10(a1 + 336, v37, a1 + 344, (__int64)v53);
    for ( i = v38; *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 16) )
      ;
    *(_QWORD *)(a1 + 360) = i;
    for ( j = v38; *(_QWORD *)(j + 24); j = *(_QWORD *)(j + 24) )
      ;
    *(_QWORD *)(a1 + 368) = j;
    v41 = *(_QWORD *)(a2 + 376);
    *(_QWORD *)(a1 + 352) = v38;
    *(_QWORD *)(a1 + 376) = v41;
  }
  sub_C23620(a1 + 384, (__int64 *)(a2 + 384));
  sub_C23620(a1 + 408, (__int64 *)(a2 + 408));
  v42 = *(_QWORD *)(a2 + 440) - *(_QWORD *)(a2 + 432);
  *(_OWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  if ( v42 >> 4 )
  {
    if ( (unsigned __int64)(v42 >> 4) > 0xFFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v43 = operator new(v42);
  }
  else
  {
    v43 = 0;
  }
  v52.m128i_i64[0] = v43;
  v44 = _mm_loadl_epi64(&v52);
  *(_QWORD *)(a1 + 448) = v43 + v42;
  *(__m128i *)(a1 + 432) = _mm_unpacklo_epi64(v44, v44);
  v45 = *(char **)(a2 + 440);
  v46 = *(char **)(a2 + 432);
  if ( v45 != v46 )
  {
    v47 = *(char **)(a2 + 432);
    v48 = (_QWORD *)v43;
    if ( &_pthread_key_create )
    {
      do
      {
        *v48 = *(_QWORD *)v47;
        v49 = *((_QWORD *)v47 + 1);
        v48[1] = v49;
        if ( v49 )
          _InterlockedAdd((volatile signed __int32 *)(v49 + 8), 1u);
        v47 += 16;
        v48 += 2;
      }
      while ( v45 != v47 );
    }
    else
    {
      do
      {
        *v48 = *(_QWORD *)v47;
        v51 = *((_QWORD *)v47 + 1);
        v48[1] = v51;
        if ( v51 )
          ++*(_DWORD *)(v51 + 8);
        v47 += 16;
        v48 += 2;
      }
      while ( v45 != v47 );
    }
    v43 += ((v45 - 16 - v46) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  *(_QWORD *)(a1 + 440) = v43;
  sub_C23620(a1 + 456, (__int64 *)(a2 + 456));
  sub_C23620(a1 + 480, (__int64 *)(a2 + 480));
  sub_C23620(a1 + 504, (__int64 *)(a2 + 504));
  sub_C23620(a1 + 528, (__int64 *)(a2 + 528));
  sub_C23620(a1 + 552, (__int64 *)(a2 + 552));
  sub_C23620(a1 + 576, (__int64 *)(a2 + 576));
  *(_QWORD *)(a1 + 600) = a1 + 616;
  sub_12FAA20((_QWORD *)(a1 + 600), *(_BYTE **)(a2 + 600), *(_QWORD *)(a2 + 600) + *(_QWORD *)(a2 + 608));
  *(_QWORD *)(a1 + 632) = a1 + 648;
  sub_12FAA20((_QWORD *)(a1 + 632), *(_BYTE **)(a2 + 632), *(_QWORD *)(a2 + 632) + *(_QWORD *)(a2 + 640));
  sub_10F33D0(a1 + 664, a2 + 664);
  *(_BYTE *)(a1 + 728) = 0;
  if ( *(_BYTE *)(a2 + 728) )
  {
    sub_C23620(a1 + 704, (__int64 *)(a2 + 704));
    *(_BYTE *)(a1 + 728) = 1;
  }
  *(_QWORD *)(a1 + 736) = a1 + 752;
  sub_12FAA20((_QWORD *)(a1 + 736), *(_BYTE **)(a2 + 736), *(_QWORD *)(a2 + 736) + *(_QWORD *)(a2 + 744));
  *(_DWORD *)(a1 + 768) = *(_DWORD *)(a2 + 768);
  *(_BYTE *)(a1 + 772) = *(_BYTE *)(a2 + 772) & 1 | *(_BYTE *)(a1 + 772) & 0xFE;
  *(_QWORD *)(a1 + 776) = a1 + 792;
  sub_12FAA20((_QWORD *)(a1 + 776), *(_BYTE **)(a2 + 776), *(_QWORD *)(a2 + 776) + *(_QWORD *)(a2 + 784));
  *(_QWORD *)(a1 + 808) = a1 + 824;
  sub_12FAA20((_QWORD *)(a1 + 808), *(_BYTE **)(a2 + 808), *(_QWORD *)(a2 + 808) + *(_QWORD *)(a2 + 816));
  *(_QWORD *)(a1 + 840) = a1 + 856;
  return sub_12FAA20((_QWORD *)(a1 + 840), *(_BYTE **)(a2 + 840), *(_QWORD *)(a2 + 840) + *(_QWORD *)(a2 + 848));
}
