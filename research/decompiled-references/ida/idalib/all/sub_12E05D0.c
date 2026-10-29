__int64 __fastcall sub_12E05D0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rsi
  __int64 v5; // rdi
  __m128i v6; // xmm12
  __m128i v7; // xmm11
  __m128i v8; // xmm10
  __m128i v9; // xmm9
  __m128i v10; // xmm8
  __m128i v11; // xmm7
  __m128i v12; // xmm6
  __m128i v13; // xmm5
  __m128i v14; // xmm4
  __m128i v15; // xmm3
  __m128i v16; // xmm2
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  int v19; // edx
  int v20; // eax
  __m128i v21; // xmm1
  int *v22; // rsi
  __int64 v23; // rax
  __int64 i; // rdx
  __int64 j; // rdx
  __int64 v26; // rdx
  signed __int64 v27; // r12
  _QWORD *v28; // r15
  unsigned __int64 v29; // rax
  __m128i v30; // xmm0
  _QWORD *v31; // r12
  _QWORD *v32; // rax
  _QWORD *v33; // r14
  _QWORD *v34; // r13
  _QWORD *v35; // rdi
  __int64 result; // rax
  _QWORD *v37; // [rsp+8h] [rbp-130h] BYREF
  __m128i v38; // [rsp+10h] [rbp-128h]
  __m128i v39; // [rsp+20h] [rbp-118h]
  __m128i v40; // [rsp+30h] [rbp-108h]
  __m128i v41; // [rsp+40h] [rbp-F8h]
  __m128i v42; // [rsp+50h] [rbp-E8h]
  __m128i v43; // [rsp+60h] [rbp-D8h]
  __m128i v44; // [rsp+70h] [rbp-C8h]
  __m128i v45; // [rsp+80h] [rbp-B8h]
  __m128i v46; // [rsp+90h] [rbp-A8h]
  __m128i v47; // [rsp+A0h] [rbp-98h]
  __m128i v48; // [rsp+B0h] [rbp-88h]
  __m128i v49; // [rsp+C0h] [rbp-78h]
  __m128i v50; // [rsp+D0h] [rbp-68h]
  int v51; // [rsp+E0h] [rbp-58h]
  __int16 v52; // [rsp+E4h] [rbp-54h]
  __int64 v53[8]; // [rsp+F8h] [rbp-40h] BYREF

  v3 = (__int64 *)(a2 + 248);
  v5 = a1 + 248;
  v6 = _mm_loadu_si128((const __m128i *)(v3 - 31));
  v38 = v6;
  v7 = _mm_loadu_si128((const __m128i *)(v3 - 29));
  v39 = v7;
  v8 = _mm_loadu_si128((const __m128i *)(v3 - 27));
  v40 = v8;
  v9 = _mm_loadu_si128((const __m128i *)(v3 - 25));
  v41 = v9;
  v10 = _mm_loadu_si128((const __m128i *)(v3 - 23));
  v42 = v10;
  v11 = _mm_loadu_si128((const __m128i *)(v3 - 21));
  v43 = v11;
  v12 = _mm_loadu_si128((const __m128i *)(v3 - 19));
  v44 = v12;
  v13 = _mm_loadu_si128((const __m128i *)(v3 - 17));
  v45 = v13;
  v14 = _mm_loadu_si128((const __m128i *)(v3 - 15));
  v46 = v14;
  v15 = _mm_loadu_si128((const __m128i *)(v3 - 13));
  v47 = v15;
  v16 = _mm_loadu_si128((const __m128i *)(v3 - 11));
  v48 = v16;
  v17 = _mm_loadu_si128((const __m128i *)(v3 - 9));
  v49 = v17;
  v18 = _mm_loadu_si128((const __m128i *)(v3 - 7));
  v50 = v18;
  v51 = *((_DWORD *)v3 - 10);
  v19 = v51;
  v52 = *((_WORD *)v3 - 18);
  *(_WORD *)(v5 - 36) = v52;
  v20 = *((_DWORD *)v3 - 8);
  *(_DWORD *)(v5 - 40) = v19;
  *(_DWORD *)(v5 - 32) = v20;
  LOBYTE(v20) = *((_BYTE *)v3 - 8);
  *(__m128i *)(v5 - 72) = v17;
  v21 = _mm_loadu_si128((const __m128i *)(v3 - 3));
  *(_BYTE *)(v5 - 8) = v20;
  *(__m128i *)(v5 - 248) = v6;
  *(__m128i *)(v5 - 232) = v7;
  *(__m128i *)(v5 - 216) = v8;
  *(__m128i *)(v5 - 200) = v9;
  *(__m128i *)(v5 - 184) = v10;
  *(__m128i *)(v5 - 168) = v11;
  *(__m128i *)(v5 - 152) = v12;
  *(__m128i *)(v5 - 136) = v13;
  *(__m128i *)(v5 - 120) = v14;
  *(__m128i *)(v5 - 104) = v15;
  *(__m128i *)(v5 - 56) = v18;
  *(__m128i *)(v5 - 24) = v21;
  *(__m128i *)(v5 - 88) = v16;
  sub_C23620(v5, v3);
  sub_C23620(a1 + 272, (__int64 *)(a2 + 272));
  sub_C23620(a1 + 296, (__int64 *)(a2 + 296));
  sub_C23620(a1 + 320, (__int64 *)(a2 + 320));
  sub_C23620(a1 + 344, (__int64 *)(a2 + 344));
  *(__m128i *)(a1 + 368) = _mm_loadu_si128((const __m128i *)(a2 + 368));
  *(_DWORD *)(a1 + 384) = *(_DWORD *)(a2 + 384);
  *(_DWORD *)(a1 + 388) = *(_DWORD *)(a2 + 388);
  *(_QWORD *)(a1 + 392) = a1 + 408;
  sub_12DB130((_QWORD *)(a1 + 392), *(_BYTE **)(a2 + 392), *(_QWORD *)(a2 + 392) + *(_QWORD *)(a2 + 400));
  *(_QWORD *)(a1 + 424) = a1 + 440;
  sub_12DB130((_QWORD *)(a1 + 424), *(_BYTE **)(a2 + 424), *(_QWORD *)(a2 + 424) + *(_QWORD *)(a2 + 432));
  *(_QWORD *)(a1 + 456) = a1 + 472;
  sub_12DB130((_QWORD *)(a1 + 456), *(_BYTE **)(a2 + 456), *(_QWORD *)(a2 + 456) + *(_QWORD *)(a2 + 464));
  *(_QWORD *)(a1 + 488) = a1 + 504;
  sub_12DB130((_QWORD *)(a1 + 488), *(_BYTE **)(a2 + 488), *(_QWORD *)(a2 + 488) + *(_QWORD *)(a2 + 496));
  sub_C23620(a1 + 520, (__int64 *)(a2 + 520));
  sub_C23620(a1 + 544, (__int64 *)(a2 + 544));
  *(_BYTE *)(a1 + 568) = *(_BYTE *)(a2 + 568);
  sub_C23620(a1 + 576, (__int64 *)(a2 + 576));
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = a1 + 608;
  *(_QWORD *)(a1 + 632) = a1 + 608;
  v22 = *(int **)(a2 + 616);
  *(_DWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  if ( v22 )
  {
    v53[0] = a1 + 600;
    v23 = sub_C2C3E0(a1 + 600, v22, a1 + 608, (__int64)v53);
    for ( i = v23; *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 16) )
      ;
    *(_QWORD *)(a1 + 624) = i;
    for ( j = v23; *(_QWORD *)(j + 24); j = *(_QWORD *)(j + 24) )
      ;
    *(_QWORD *)(a1 + 632) = j;
    v26 = *(_QWORD *)(a2 + 640);
    *(_QWORD *)(a1 + 616) = v23;
    *(_QWORD *)(a1 + 640) = v26;
  }
  v27 = *(_QWORD *)(a2 + 656) - *(_QWORD *)(a2 + 648);
  v28 = nullptr;
  *(_OWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 664) = 0;
  v29 = 0x6DB6DB6DB6DB6DB7LL * (v27 >> 3);
  if ( v29 )
  {
    if ( v29 > 0x492492492492492LL )
      std::__throw_bad_alloc();
    v28 = (_QWORD *)operator new(v27);
  }
  v37 = v28;
  v30 = _mm_loadl_epi64((const __m128i *)&v37);
  *(_QWORD *)(a1 + 664) = (char *)v28 + v27;
  *(__m128i *)(a1 + 648) = _mm_unpacklo_epi64(v30, v30);
  v31 = *(_QWORD **)(a2 + 656);
  v32 = *(_QWORD **)(a2 + 648);
  if ( v31 != v32 )
  {
    v33 = *(_QWORD **)(a2 + 648);
    v34 = v28;
    do
    {
      v35 = v34;
      v37 = v32;
      v33 += 7;
      *v34 = v34 + 2;
      v34 += 7;
      sub_12DB130(v35, (_BYTE *)*(v33 - 7), *(v33 - 7) + *(v33 - 6));
      v32 = v37;
      *(__m128i *)(v34 - 3) = _mm_loadu_si128((const __m128i *)(v33 - 3));
      *((_DWORD *)v34 - 2) = *((_DWORD *)v33 - 2);
      *((_DWORD *)v34 - 1) = *((_DWORD *)v33 - 1);
    }
    while ( v31 != v33 );
    v28 += 7
         * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)((char *)(v31 - 7) - (char *)v32) >> 3)) & 0x1FFFFFFFFFFFFFFFLL)
         + 7;
  }
  *(_QWORD *)(a1 + 656) = v28;
  *(_QWORD *)(a1 + 672) = a1 + 688;
  sub_12DB130((_QWORD *)(a1 + 672), *(_BYTE **)(a2 + 672), *(_QWORD *)(a2 + 672) + *(_QWORD *)(a2 + 680));
  *(_QWORD *)(a1 + 704) = a1 + 720;
  sub_12DB130((_QWORD *)(a1 + 704), *(_BYTE **)(a2 + 704), *(_QWORD *)(a2 + 704) + *(_QWORD *)(a2 + 712));
  *(_QWORD *)(a1 + 736) = *(_QWORD *)(a2 + 736);
  *(_BYTE *)(a1 + 744) = *(_BYTE *)(a2 + 744);
  *(_DWORD *)(a1 + 748) = *(_DWORD *)(a2 + 748);
  *(_DWORD *)(a1 + 752) = *(_DWORD *)(a2 + 752);
  sub_C23620(a1 + 760, (__int64 *)(a2 + 760));
  *(_QWORD *)(a1 + 784) = a1 + 800;
  sub_12DB130((_QWORD *)(a1 + 784), *(_BYTE **)(a2 + 784), *(_QWORD *)(a2 + 784) + *(_QWORD *)(a2 + 792));
  *(_BYTE *)(a1 + 816) = *(_BYTE *)(a2 + 816);
  *(_BYTE *)(a1 + 817) = *(_BYTE *)(a2 + 817);
  *(_QWORD *)(a1 + 824) = a1 + 840;
  sub_12DB130((_QWORD *)(a1 + 824), *(_BYTE **)(a2 + 824), *(_QWORD *)(a2 + 824) + *(_QWORD *)(a2 + 832));
  *(_DWORD *)(a1 + 856) = *(_DWORD *)(a2 + 856);
  *(_BYTE *)(a1 + 860) = *(_BYTE *)(a2 + 860);
  *(_BYTE *)(a1 + 861) = *(_BYTE *)(a2 + 861);
  *(_BYTE *)(a1 + 862) = *(_BYTE *)(a2 + 862);
  result = *(unsigned __int8 *)(a2 + 863);
  *(_BYTE *)(a1 + 863) = result;
  return result;
}
