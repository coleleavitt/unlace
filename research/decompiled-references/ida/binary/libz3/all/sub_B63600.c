__int64 __fastcall sub_B63600(__int64 *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  size_t v4; // rdi
  unsigned int *v5; // r12
  __int64 result; // rax
  __int64 v7; // r14
  _QWORD *v8; // r14
  __int64 v9; // rax
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  char *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int128 v16; // xmm0
  __int64 v17; // rcx
  __int64 v18; // rcx
  __m128i v19; // xmm0
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int128 v29; // xmm0
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __int64 v32; // rcx
  __int128 v33; // xmm0
  __m128i v34; // xmm0
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ecx
  _QWORD *v39; // rsi
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __int64 v42; // rcx
  unsigned int v43; // edi
  unsigned int v44; // r8d
  unsigned int v45; // eax
  _QWORD *v46; // r15
  _QWORD *v47; // rdi
  _QWORD *v48; // rdi
  unsigned __int64 v49; // rcx
  char *v50; // rsi
  __int64 v51; // r9
  unsigned int v52; // edi
  unsigned int v53; // edi
  unsigned int v54; // esi
  __int64 v55; // r8
  unsigned __int64 v56; // rsi
  char *v57; // rdi
  char *v58; // r9
  unsigned int v59; // r8d
  unsigned int v60; // r8d
  unsigned int v61; // edi
  __int64 v62; // r10
  _QWORD *v63; // rax
  char **exception; // rbx
  __int64 v65[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !*a1 )
  {
    v63 = (_QWORD *)sub_186B270(0x5F8u);
    *v63 = 2;
    result = (__int64)(v63 + 1);
    *a1 = result;
    return result;
  }
  v2 = *(_DWORD *)(*a1 - 8);
  v3 = (3 * v2 + 1) >> 1;
  v4 = 760 * v3 + 8;
  if ( 760 * v2 + 8 >= (unsigned int)v4 || v2 >= v3 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v65, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v65);
    sub_233E40((__int64)v65);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v5 = (unsigned int *)sub_186B270(v4);
  result = *a1;
  if ( !*a1 )
  {
    v5[1] = 0;
    goto LABEL_35;
  }
  v7 = *(unsigned int *)(result - 4);
  v5[1] = v7;
  v8 = (_QWORD *)(result + 760 * v7);
  if ( (_QWORD *)result == v8 )
    goto LABEL_26;
  v9 = result + 120;
  v10 = v5 + 2;
  while ( 1 )
  {
    v38 = *(_DWORD *)(v9 - 56);
    v39 = v10 + 30;
    *(__m128i *)v10 = _mm_loadu_si128((const __m128i *)(v9 - 120));
    v40 = _mm_loadu_si128((const __m128i *)(v9 - 104));
    v10[16] = v38;
    *((__m128i *)v10 + 1) = v40;
    *((__m128i *)v10 + 2) = _mm_loadu_si128((const __m128i *)(v9 - 88));
    *((__m128i *)v10 + 3) = _mm_loadu_si128((const __m128i *)(v9 - 72));
    *(__m128i *)(v10 + 18) = _mm_loadu_si128((const __m128i *)(v9 - 48));
    v41 = _mm_loadu_si128((const __m128i *)(v9 - 32));
    *((_QWORD *)v10 + 13) = v10 + 30;
    v42 = *(_QWORD *)(v9 - 16);
    *(__m128i *)(v10 + 22) = v41;
    if ( v42 != v9 )
    {
      *((_QWORD *)v10 + 13) = v42;
      *((_QWORD *)v10 + 15) = *(_QWORD *)v9;
LABEL_8:
      v11 = *(_QWORD *)(v9 - 8);
      goto LABEL_9;
    }
    v11 = *(_QWORD *)(v9 - 8);
    v43 = v11 + 1;
    if ( (unsigned int)(v11 + 1) >= 8 )
    {
      *v39 = *(_QWORD *)v9;
      *(_QWORD *)((char *)v39 + v43 - 8) = *(_QWORD *)(v9 + v43 - 8);
      v49 = (unsigned __int64)(v10 + 32) & 0xFFFFFFFFFFFFFFF8LL;
      v50 = (char *)v39 - v49;
      v51 = v9 - (_QWORD)v50;
      v52 = ((_DWORD)v50 + v43) & 0xFFFFFFF8;
      if ( v52 >= 8 )
      {
        v53 = v52 & 0xFFFFFFF8;
        v54 = 0;
        do
        {
          v55 = v54;
          v54 += 8;
          *(_QWORD *)(v49 + v55) = *(_QWORD *)(v51 + v55);
        }
        while ( v54 < v53 );
      }
      goto LABEL_8;
    }
    if ( (v43 & 4) != 0 )
    {
      *(_DWORD *)v39 = *(_DWORD *)v9;
      *(_DWORD *)((char *)v39 + v43 - 4) = *(_DWORD *)(v9 + v43 - 4);
      v11 = *(_QWORD *)(v9 - 8);
    }
    else if ( (_DWORD)v11 != -1 )
    {
      *(_BYTE *)v39 = *(_BYTE *)v9;
      if ( (v43 & 2) == 0 )
        goto LABEL_8;
      *(_WORD *)((char *)v39 + v43 - 2) = *(_WORD *)(v9 + v43 - 2);
      v11 = *(_QWORD *)(v9 - 8);
    }
LABEL_9:
    v12 = v10 + 38;
    *((_QWORD *)v10 + 14) = v11;
    v13 = (char *)(v9 + 32);
    *(_QWORD *)(v9 - 16) = v9;
    *(_QWORD *)(v9 - 8) = 0;
    *(_BYTE *)v9 = 0;
    *((_QWORD *)v10 + 17) = v10 + 38;
    v14 = *(_QWORD *)(v9 + 16);
    if ( v14 != v9 + 32 )
    {
      *((_QWORD *)v10 + 17) = v14;
      *((_QWORD *)v10 + 19) = *(_QWORD *)(v9 + 32);
LABEL_11:
      v15 = *(_QWORD *)(v9 + 24);
      goto LABEL_12;
    }
    v15 = *(_QWORD *)(v9 + 24);
    v44 = v15 + 1;
    if ( (unsigned int)(v15 + 1) >= 8 )
    {
      *v12 = *(_QWORD *)v13;
      *(_QWORD *)((char *)v12 + v44 - 8) = *(_QWORD *)&v13[v44 - 8];
      v56 = (unsigned __int64)(v10 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      v57 = (char *)v12 - v56;
      v58 = (char *)(v13 - v57);
      v59 = ((_DWORD)v57 + v44) & 0xFFFFFFF8;
      if ( v59 >= 8 )
      {
        v60 = v59 & 0xFFFFFFF8;
        v61 = 0;
        do
        {
          v62 = v61;
          v61 += 8;
          *(_QWORD *)(v56 + v62) = *(_QWORD *)&v58[v62];
        }
        while ( v61 < v60 );
      }
      goto LABEL_11;
    }
    if ( (v44 & 4) != 0 )
    {
      *(_DWORD *)v12 = *(_DWORD *)v13;
      *(_DWORD *)((char *)v12 + v44 - 4) = *(_DWORD *)&v13[v44 - 4];
      v15 = *(_QWORD *)(v9 + 24);
    }
    else if ( (_DWORD)v15 != -1 )
    {
      *(_BYTE *)v12 = *v13;
      if ( (v44 & 2) == 0 )
        goto LABEL_11;
      *(_WORD *)((char *)v12 + v44 - 2) = *(_WORD *)&v13[v44 - 2];
      v15 = *(_QWORD *)(v9 + 24);
    }
LABEL_12:
    *(_QWORD *)(v9 + 16) = v13;
    v16 = *(_OWORD *)(v9 + 48);
    v10 += 190;
    *((_QWORD *)v10 - 77) = v15;
    v17 = *(_QWORD *)(v9 + 64);
    *(_QWORD *)(v9 + 24) = 0;
    *(_BYTE *)(v9 + 32) = 0;
    *((_QWORD *)v10 - 72) = v17;
    LOBYTE(v17) = *(_BYTE *)(v9 + 72);
    *((_OWORD *)v10 - 37) = v16;
    *((_BYTE *)v10 - 568) = v17;
    *(_QWORD *)(v10 - 141) = *(_QWORD *)(v9 + 76);
    *((_WORD *)v10 - 278) = *(_WORD *)(v9 + 84);
    *(v10 - 138) = *(_DWORD *)(v9 + 88);
    *(v10 - 137) = *(_DWORD *)(v9 + 92);
    *((_QWORD *)v10 - 68) = *(_QWORD *)(v9 + 96);
    *(v10 - 134) = *(_DWORD *)(v9 + 104);
    *((_BYTE *)v10 - 532) = *(_BYTE *)(v9 + 108);
    *(v10 - 132) = *(_DWORD *)(v9 + 112);
    v18 = *(_QWORD *)(v9 + 120);
    *((__m128i *)v10 - 32) = _mm_loadu_si128((const __m128i *)(v9 + 128));
    v19 = _mm_loadu_si128((const __m128i *)(v9 + 144));
    *((_QWORD *)v10 - 65) = v18;
    *((__m128i *)v10 - 31) = v19;
    v20 = *(_QWORD *)(v9 + 272);
    *((__m128i *)v10 - 30) = _mm_loadu_si128((const __m128i *)(v9 + 160));
    v21 = _mm_loadu_si128((const __m128i *)(v9 + 176));
    *((_QWORD *)v10 - 46) = v20;
    LODWORD(v20) = *(_DWORD *)(v9 + 320);
    *((__m128i *)v10 - 29) = v21;
    v22 = _mm_loadu_si128((const __m128i *)(v9 + 192));
    *(v10 - 80) = v20;
    v23 = *(_QWORD *)(v9 + 324);
    *((__m128i *)v10 - 28) = v22;
    v24 = _mm_loadu_si128((const __m128i *)(v9 + 208));
    *(_QWORD *)(v10 - 79) = v23;
    LODWORD(v23) = *(_DWORD *)(v9 + 332);
    *((__m128i *)v10 - 27) = v24;
    v25 = _mm_loadu_si128((const __m128i *)(v9 + 224));
    *(v10 - 77) = v23;
    v26 = *(_QWORD *)(v9 + 336);
    *((__m128i *)v10 - 26) = v25;
    v27 = _mm_loadu_si128((const __m128i *)(v9 + 240));
    *((_QWORD *)v10 - 38) = v26;
    LODWORD(v26) = *(_DWORD *)(v9 + 344);
    *((__m128i *)v10 - 25) = v27;
    v28 = _mm_loadu_si128((const __m128i *)(v9 + 256));
    *(v10 - 74) = v26;
    *((__m128i *)v10 - 24) = v28;
    *(__m128i *)(v10 - 91) = _mm_loadu_si128((const __m128i *)(v9 + 276));
    *((__m128i *)v10 - 22) = _mm_loadu_si128((const __m128i *)(v9 + 288));
    *((__m128i *)v10 - 21) = _mm_loadu_si128((const __m128i *)(v9 + 304));
    v29 = *(_OWORD *)(v9 + 368);
    *(v10 - 73) = *(_DWORD *)(v9 + 348);
    LOWORD(v26) = *(_WORD *)(v9 + 352);
    *((_OWORD *)v10 - 17) = v29;
    v30 = _mm_loadu_si128((const __m128i *)(v9 + 384));
    *((_WORD *)v10 - 144) = v26;
    LODWORD(v26) = *(_DWORD *)(v9 + 356);
    *((__m128i *)v10 - 16) = v30;
    v31 = _mm_loadu_si128((const __m128i *)(v9 + 408));
    *(v10 - 71) = v26;
    LOBYTE(v26) = *(_BYTE *)(v9 + 360);
    *(__m128i *)(v10 - 58) = v31;
    *((_BYTE *)v10 - 280) = v26;
    *(v10 - 69) = *(_DWORD *)(v9 + 364);
    *(v10 - 60) = *(_DWORD *)(v9 + 400);
    *((_BYTE *)v10 - 236) = *(_BYTE *)(v9 + 404);
    *((_QWORD *)v10 - 27) = *(_QWORD *)(v9 + 424);
    *((_BYTE *)v10 - 208) = *(_BYTE *)(v9 + 432);
    *(v10 - 51) = *(_DWORD *)(v9 + 436);
    *(v10 - 50) = *(_DWORD *)(v9 + 440);
    *((_BYTE *)v10 - 196) = *(_BYTE *)(v9 + 444);
    *((_QWORD *)v10 - 24) = *(_QWORD *)(v9 + 448);
    v31.m128i_i64[0] = *(_QWORD *)(v9 + 488);
    *((_WORD *)v10 - 92) = *(_WORD *)(v9 + 456);
    v32 = *(_QWORD *)(v9 + 460);
    *((_QWORD *)v10 - 19) = v31.m128i_i64[0];
    v33 = *(_OWORD *)(v9 + 504);
    *(_QWORD *)(v10 - 45) = v32;
    LODWORD(v32) = *(_DWORD *)(v9 + 468);
    *(_OWORD *)(v10 - 34) = v33;
    *(_QWORD *)&v33 = *(_QWORD *)(v9 + 536);
    *(v10 - 43) = v32;
    LODWORD(v32) = *(_DWORD *)(v9 + 472);
    *((_QWORD *)v10 - 13) = v33;
    v34 = _mm_loadu_si128((const __m128i *)(v9 + 544));
    *(v10 - 42) = v32;
    LOBYTE(v32) = *(_BYTE *)(v9 + 476);
    *((__m128i *)v10 - 6) = v34;
    v34.m128i_i64[0] = *(_QWORD *)(v9 + 568);
    *((_BYTE *)v10 - 164) = v32;
    v35 = *(_QWORD *)(v9 + 480);
    *((_QWORD *)v10 - 9) = v34.m128i_i64[0];
    *((_QWORD *)v10 - 20) = v35;
    *((_BYTE *)v10 - 144) = *(_BYTE *)(v9 + 496);
    *(v10 - 30) = *(_DWORD *)(v9 + 520);
    *((_BYTE *)v10 - 116) = *(_BYTE *)(v9 + 524);
    *((_QWORD *)v10 - 14) = *(_QWORD *)(v9 + 528);
    *(v10 - 20) = *(_DWORD *)(v9 + 560);
    v34.m128i_i64[0] = *(_QWORD *)(v9 + 616);
    *(v10 - 16) = *(_DWORD *)(v9 + 576);
    v36 = *(_QWORD *)(v9 + 584);
    *((_QWORD *)v10 - 3) = v34.m128i_i64[0];
    *((_QWORD *)v10 - 7) = v36;
    *(v10 - 12) = *(_DWORD *)(v9 + 592);
    *((_WORD *)v10 - 22) = *(_WORD *)(v9 + 596);
    *(v10 - 10) = *(_DWORD *)(v9 + 600);
    *(_QWORD *)(v10 - 9) = *(_QWORD *)(v9 + 604);
    *((_BYTE *)v10 - 28) = *(_BYTE *)(v9 + 612);
    *((_BYTE *)v10 - 16) = *(_BYTE *)(v9 + 624);
    *((_QWORD *)v10 - 1) = *(_QWORD *)(v9 + 632);
    v37 = v9 + 760;
    result = v9 + 640;
    if ( v8 == (_QWORD *)result )
      break;
    v9 = v37;
  }
  v8 = (_QWORD *)*a1;
  if ( *a1 )
  {
LABEL_26:
    v45 = *((_DWORD *)v8 - 1);
    if ( v45 )
    {
      v46 = &v8[95 * v45];
      do
      {
        v47 = (_QWORD *)v8[17];
        if ( v47 != v8 + 19 )
          operator delete(v47, v8[19] + 1LL);
        v48 = (_QWORD *)v8[13];
        if ( v48 != v8 + 15 )
          operator delete(v48, v8[15] + 1LL);
        v8 += 95;
      }
      while ( v8 != v46 );
      v8 = (_QWORD *)*a1;
    }
    result = sub_186B220(v8 - 1);
  }
LABEL_35:
  *a1 = (__int64)(v5 + 2);
  *v5 = v3;
  return result;
}

