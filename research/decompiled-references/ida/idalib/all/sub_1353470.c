__int64 __fastcall sub_1353470(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  signed __int64 v5; // r13
  unsigned __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // r15
  __int64 v9; // r14
  _BYTE *v10; // rax
  char v11; // al
  _BYTE *v12; // rsi
  signed __int64 v13; // r13
  signed __int64 v14; // r13
  _QWORD *v15; // r12
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // r15
  __int64 v19; // r14
  _BYTE *v20; // rsi
  signed __int64 v21; // r13
  __int64 v22; // r14
  _BYTE *v23; // rax
  int *v24; // rsi
  __int64 v25; // rax
  __int64 i; // rdx
  __int64 j; // rdx
  __int64 v28; // rdx
  char v29; // al
  char v30; // al
  char v31; // al
  char v32; // al
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdi
  __int64 v39; // r12
  unsigned int v40; // r15d
  char v41; // al
  char v42; // al
  char v43; // al
  char v44; // al
  char v45; // al
  char v46; // al
  char v47; // al
  char v48; // al
  char v49; // al
  char v50; // al
  char v51; // al
  char v52; // al
  char v53; // al
  char v54; // al
  int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  __int64 result; // rax
  __int64 v60; // rax
  int v61; // edx
  __int64 v62; // r14
  __int64 v63; // r13
  __int64 v64; // r12
  __int64 v65; // r14
  void *v66; // rax
  size_t v67; // rdx
  unsigned __int64 v68; // rdi
  const void *v69; // rax
  __int64 v70; // rsi
  __int64 *v71; // r13
  __int64 v72; // rsi
  __int64 *k; // r14
  void *v74; // rax
  size_t v75; // rdx
  unsigned __int64 v76; // rdi
  __int64 v77; // rax
  __m128i src; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v79[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = nullptr;
  *(_QWORD *)a1 = a1 + 16;
  sub_12FAA20((_QWORD *)a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  v5 = *(_QWORD *)(a2 + 40) - *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v6 = 0xCCCCCCCCCCCCCCCDLL * (v5 >> 3);
  if ( v6 )
  {
    if ( v6 > 0x666666666666666LL )
      goto LABEL_66;
    v2 = (_QWORD *)operator new(v5);
  }
  src.m128i_i64[0] = (__int64)v2;
  v7 = _mm_loadl_epi64(&src);
  *(_QWORD *)(a1 + 48) = (char *)v2 + v5;
  *(__m128i *)(a1 + 32) = _mm_unpacklo_epi64(v7, v7);
  v8 = *(_QWORD *)(a2 + 40);
  v9 = *(_QWORD *)(a2 + 32);
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      *v2 = v2 + 2;
      v12 = *(_BYTE **)v9;
      v13 = *(_QWORD *)(v9 + 8);
      if ( v13 + *(_QWORD *)v9 && !v12 )
        goto LABEL_30;
      if ( (unsigned __int64)v13 > 0xF )
        break;
      v10 = (_BYTE *)*v2;
      if ( v13 == 1 )
      {
        *v10 = *v12;
        v10 = (_BYTE *)*v2;
      }
      else if ( v13 )
      {
        goto LABEL_16;
      }
LABEL_7:
      v2[1] = v13;
      v9 += 40;
      v2 += 5;
      v10[v13] = 0;
      *((_DWORD *)v2 - 2) = *(_DWORD *)(v9 - 8);
      v11 = *(_BYTE *)(v9 - 4) & 1 | *((_BYTE *)v2 - 4) & 0xFE;
      *((_BYTE *)v2 - 4) = v11;
      *((_BYTE *)v2 - 4) = *(_BYTE *)(v9 - 4) & 2 | v11 & 0xFD;
      if ( v8 == v9 )
        goto LABEL_17;
    }
    if ( v13 < 0 )
LABEL_65:
      std::__throw_length_error("basic_string::_M_create");
    src.m128i_i64[0] = *(_QWORD *)v9;
    v10 = (_BYTE *)operator new(v13 + 1);
    v2[2] = v13;
    v12 = (_BYTE *)src.m128i_i64[0];
    *v2 = v10;
LABEL_16:
    memcpy(v10, v12, v13);
    v10 = (_BYTE *)*v2;
    goto LABEL_7;
  }
LABEL_17:
  v14 = *(_QWORD *)(a2 + 64) - *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 40) = v2;
  *(_OWORD *)(a1 + 56) = 0;
  v15 = nullptr;
  *(_QWORD *)(a1 + 72) = 0;
  v16 = 0xCCCCCCCCCCCCCCCDLL * (v14 >> 3);
  if ( !v16 )
    goto LABEL_20;
  if ( v16 > 0x666666666666666LL )
LABEL_66:
    std::__throw_bad_alloc();
  v15 = (_QWORD *)operator new(v14);
LABEL_20:
  src.m128i_i64[0] = (__int64)v15;
  v17 = _mm_loadl_epi64(&src);
  *(_QWORD *)(a1 + 72) = (char *)v15 + v14;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v17, v17);
  v18 = *(_QWORD *)(a2 + 64);
  v19 = *(_QWORD *)(a2 + 56);
  if ( v18 != v19 )
  {
    *v15 = v15 + 2;
    v20 = *(_BYTE **)v19;
    v21 = *(_QWORD *)(v19 + 8);
    if ( v21 + *(_QWORD *)v19 && !v20 )
LABEL_30:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v22 = v19 + 40;
    while ( (unsigned __int64)v21 <= 0xF )
    {
      v23 = (_BYTE *)*v15;
      if ( v21 != 1 )
      {
        if ( !v21 )
          goto LABEL_27;
        goto LABEL_33;
      }
      *v23 = *v20;
      v23 = (_BYTE *)*v15;
LABEL_27:
      v15[1] = v21;
      v15 += 5;
      v23[v21] = 0;
      *((_BYTE *)v15 - 8) = *(_BYTE *)(v22 - 8);
      if ( v18 == v22 )
        goto LABEL_36;
      v22 += 40;
      *v15 = v15 + 2;
      v20 = *(_BYTE **)(v22 - 40);
      v21 = *(_QWORD *)(v22 - 32);
      if ( &v20[v21] && !v20 )
        goto LABEL_30;
    }
    src.m128i_i64[0] = (__int64)v20;
    if ( v21 < 0 )
      goto LABEL_65;
    v23 = (_BYTE *)operator new(v21 + 1);
    v15[2] = v21;
    v20 = (_BYTE *)src.m128i_i64[0];
    *v15 = v23;
LABEL_33:
    memcpy(v23, v20, v21);
    v23 = (_BYTE *)*v15;
    goto LABEL_27;
  }
LABEL_36:
  *(_QWORD *)(a1 + 64) = v15;
  *(_QWORD *)(a1 + 80) = a1 + 96;
  sub_12FAA20((_QWORD *)(a1 + 80), *(_BYTE **)(a2 + 80), *(_QWORD *)(a2 + 80) + *(_QWORD *)(a2 + 88));
  *(_QWORD *)(a1 + 112) = a1 + 128;
  sub_12FAA20((_QWORD *)(a1 + 112), *(_BYTE **)(a2 + 112), *(_QWORD *)(a2 + 112) + *(_QWORD *)(a2 + 120));
  *(_QWORD *)(a1 + 144) = a1 + 160;
  sub_12FAA20((_QWORD *)(a1 + 144), *(_BYTE **)(a2 + 144), *(_QWORD *)(a2 + 144) + *(_QWORD *)(a2 + 152));
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = a1 + 184;
  *(_QWORD *)(a1 + 208) = a1 + 184;
  v24 = *(int **)(a2 + 192);
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  if ( v24 )
  {
    v79[0] = a1 + 176;
    v25 = sub_12E0BE0(a1 + 176, v24, a1 + 184, (__int64)v79);
    for ( i = v25; *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 16) )
      ;
    *(_QWORD *)(a1 + 200) = i;
    for ( j = v25; *(_QWORD *)(j + 24); j = *(_QWORD *)(j + 24) )
      ;
    *(_QWORD *)(a1 + 208) = j;
    v28 = *(_QWORD *)(a2 + 216);
    *(_QWORD *)(a1 + 192) = v25;
    *(_QWORD *)(a1 + 216) = v28;
  }
  sub_C23620(a1 + 224, (__int64 *)(a2 + 224));
  *(_QWORD *)(a1 + 248) = a1 + 264;
  sub_12FAA20((_QWORD *)(a1 + 248), *(_BYTE **)(a2 + 248), *(_QWORD *)(a2 + 248) + *(_QWORD *)(a2 + 256));
  v29 = *(_BYTE *)(a2 + 280) & 1 | *(_BYTE *)(a1 + 280) & 0xFE;
  *(_BYTE *)(a1 + 280) = v29;
  v30 = *(_BYTE *)(a2 + 280) & 2 | v29 & 0xFD;
  *(_BYTE *)(a1 + 280) = v30;
  v31 = *(_BYTE *)(a2 + 280) & 4 | v30 & 0xFB;
  *(_BYTE *)(a1 + 280) = v31;
  v32 = *(_BYTE *)(a2 + 280) & 8 | v31 & 0xF7;
  *(_BYTE *)(a1 + 280) = v32;
  *(_BYTE *)(a1 + 280) = *(_BYTE *)(a2 + 280) & 0x10 | v32 & 0xEF;
  *(_DWORD *)(a1 + 284) = *(_DWORD *)(a2 + 284);
  *(_DWORD *)(a1 + 288) = *(_DWORD *)(a2 + 288);
  v33 = *(_QWORD *)(a2 + 296);
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 296) = v33;
  *(_QWORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 320) = 0;
  operator delete(0, 0, 8);
  v38 = *(unsigned int *)(a2 + 320);
  *(_DWORD *)(a1 + 320) = v38;
  if ( (_DWORD)v38 )
  {
    v60 = sub_22300B0(16 * v38, 8, v34, v35, v36, v37);
    v61 = *(_DWORD *)(a2 + 312);
    v62 = *(unsigned int *)(a1 + 320);
    *(_QWORD *)(a1 + 304) = v60;
    v63 = *(_QWORD *)(a2 + 304);
    *(_DWORD *)(a1 + 312) = v61;
    *(_DWORD *)(a1 + 316) = *(_DWORD *)(a2 + 316);
    if ( v62 )
    {
      v64 = v60;
      v65 = v60 + 16 * v62;
      do
      {
        v68 = *(unsigned int *)(v63 + 8);
        *(_DWORD *)(v64 + 8) = v68;
        *(_DWORD *)(v64 + 12) = *(_DWORD *)(v63 + 12);
        v69 = *(const void **)v63;
        if ( *(_QWORD *)v63 == -8192 || v69 == (const void *)-4096LL )
        {
          *(_QWORD *)v64 = v69;
        }
        else
        {
          v66 = (void *)operator new[](v68);
          v67 = *(unsigned int *)(v64 + 8);
          *(_QWORD *)v64 = v66;
          memcpy(v66, *(const void **)v63, v67);
        }
        v64 += 16;
        v63 += 16;
      }
      while ( v65 != v64 );
    }
  }
  else
  {
    *(_QWORD *)(a1 + 304) = 0;
    *(_QWORD *)(a1 + 312) = 0;
  }
  v39 = a1 + 344;
  *(_QWORD *)(a1 + 336) = 0x1000000000LL;
  v40 = *(_DWORD *)(a2 + 336);
  *(_QWORD *)(a1 + 328) = a1 + 344;
  if ( v40 && a1 + 328 != a2 + 328 )
  {
    v70 = v40;
    if ( v40 > 0x10uLL )
    {
      sub_12DE810(a1 + 328, v40);
      v39 = *(_QWORD *)(a1 + 328);
      v70 = *(unsigned int *)(a2 + 336);
    }
    v71 = *(__int64 **)(a2 + 328);
    v72 = 2 * v70;
    for ( k = &v71[v72]; k != v71; v39 += 16 )
    {
      while ( 1 )
      {
        v76 = *((unsigned int *)v71 + 2);
        *(_DWORD *)(v39 + 8) = v76;
        *(_DWORD *)(v39 + 12) = *((_DWORD *)v71 + 3);
        v77 = *v71;
        if ( *v71 == -4096 || v77 == -8192 )
          break;
        v74 = (void *)operator new[](v76);
        v75 = *(unsigned int *)(v39 + 8);
        v71 += 2;
        v39 += 16;
        *(_QWORD *)(v39 - 16) = v74;
        memcpy(v74, (const void *)*(v71 - 2), v75);
        if ( k == v71 )
          goto LABEL_64;
      }
      v71 += 2;
      *(_QWORD *)v39 = v77;
    }
LABEL_64:
    *(_DWORD *)(a1 + 336) = v40;
  }
  sub_C23620(a1 + 600, (__int64 *)(a2 + 600));
  v41 = *(_BYTE *)(a2 + 624) & 1 | *(_BYTE *)(a1 + 624) & 0xFE;
  *(_BYTE *)(a1 + 624) = v41;
  v42 = *(_BYTE *)(a2 + 624) & 2 | v41 & 0xFD;
  *(_BYTE *)(a1 + 624) = v42;
  v43 = *(_BYTE *)(a2 + 624) & 4 | v42 & 0xFB;
  *(_BYTE *)(a1 + 624) = v43;
  v44 = *(_BYTE *)(a2 + 624) & 8 | v43 & 0xF7;
  *(_BYTE *)(a1 + 624) = v44;
  v45 = *(_BYTE *)(a2 + 624) & 0x10 | v44 & 0xEF;
  *(_BYTE *)(a1 + 624) = v45;
  v46 = *(_BYTE *)(a2 + 624) & 0x20 | v45 & 0xDF;
  *(_BYTE *)(a1 + 624) = v46;
  v47 = *(_BYTE *)(a2 + 624) & 0x40 | v46 & 0xBF;
  *(_BYTE *)(a1 + 624) = v47;
  *(_BYTE *)(a1 + 624) = *(_BYTE *)(a2 + 624) & 0x80 | v47 & 0x7F;
  v48 = *(_BYTE *)(a2 + 625) & 1 | *(_BYTE *)(a1 + 625) & 0xFE;
  *(_BYTE *)(a1 + 625) = v48;
  v49 = *(_BYTE *)(a2 + 625) & 2 | v48 & 0xFD;
  *(_BYTE *)(a1 + 625) = v49;
  v50 = *(_BYTE *)(a2 + 625) & 4 | v49 & 0xFB;
  *(_BYTE *)(a1 + 625) = v50;
  v51 = *(_BYTE *)(a2 + 625) & 8 | v50 & 0xF7;
  *(_BYTE *)(a1 + 625) = v51;
  v52 = *(_BYTE *)(a2 + 625) & 0x10 | v51 & 0xEF;
  *(_BYTE *)(a1 + 625) = v52;
  v53 = *(_BYTE *)(a2 + 625) & 0x20 | v52 & 0xDF;
  *(_BYTE *)(a1 + 625) = v53;
  v54 = *(_BYTE *)(a2 + 625) & 0x40 | v53 & 0xBF;
  *(_BYTE *)(a1 + 625) = v54;
  *(_BYTE *)(a1 + 625) = *(_BYTE *)(a2 + 625) & 0x80 | v54 & 0x7F;
  v55 = *(_BYTE *)(a2 + 626) & 1 | *(_BYTE *)(a1 + 626) & 0xFE;
  *(_BYTE *)(a1 + 626) = v55;
  v56 = *(_BYTE *)(a2 + 626) & 2 | v55 & 0xFFFFFFFD;
  *(_BYTE *)(a1 + 626) = v56;
  v57 = *(_BYTE *)(a2 + 626) & 4 | v56 & 0xFFFFFFFB;
  *(_BYTE *)(a1 + 626) = v57;
  v58 = *(_BYTE *)(a2 + 626) & 8 | v57 & 0xFFFFFFF7;
  *(_BYTE *)(a1 + 626) = v58;
  result = *(_BYTE *)(a2 + 626) & 0x10 | v58 & 0xFFFFFFEF;
  *(_BYTE *)(a1 + 626) = result;
  return result;
}
