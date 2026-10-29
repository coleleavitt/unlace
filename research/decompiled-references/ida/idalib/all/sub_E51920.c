void __fastcall sub_E51920(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  unsigned __int64 v5; // r13
  void *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  void *v19; // rax
  __int64 v20; // rdx
  const void *v21; // rsi
  char *v22; // rdi
  __int64 v23; // rsi
  const __m128i *v24; // r12
  __int64 v25; // rax
  void *v26; // rsi
  __int64 v27; // rdx
  __m128i v28; // xmm3
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // eax
  void *v36; // rax
  __int64 v37; // rdx
  const void *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  void *v44; // rax
  __int64 v45; // rdx
  const void *v46; // rsi
  _BYTE *v47; // rdi
  __int64 v48; // rsi
  const __m128i *v49; // rbx
  __int64 v50; // rax
  void *v51; // rdx
  __int64 v52; // rcx
  __m128i v53; // xmm1
  const __m128i *v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // r10d
  __int64 v58; // r11
  __int128 *v59; // r8
  __int64 v60; // rax
  __int64 v61; // rax
  void *v62; // rsi
  __int64 v63; // rdx
  __m128i v64; // xmm2
  void *v65; // rax
  __int64 v66; // rdx
  const void *v67; // rsi
  __int64 v68; // [rsp+10h] [rbp-238h]
  int v69; // [rsp+1Ch] [rbp-22Ch]
  __int64 (__fastcall **v70)(); // [rsp+20h] [rbp-228h] BYREF
  int v71; // [rsp+28h] [rbp-220h]
  __int128 v72; // [rsp+30h] [rbp-218h]
  __int64 v73; // [rsp+40h] [rbp-208h]
  char v74; // [rsp+48h] [rbp-200h]
  int v75; // [rsp+4Ch] [rbp-1FCh]
  void *ptr; // [rsp+50h] [rbp-1F8h] BYREF
  __int64 v77; // [rsp+58h] [rbp-1F0h]
  _BYTE v78[64]; // [rsp+60h] [rbp-1E8h] BYREF
  void *v79; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v80; // [rsp+A8h] [rbp-1A0h]
  __int128 v81; // [rsp+B0h] [rbp-198h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-188h]
  char v83; // [rsp+C8h] [rbp-180h]
  int v84; // [rsp+CCh] [rbp-17Ch]
  __int64 v85; // [rsp+F0h] [rbp-158h] BYREF
  void **v86; // [rsp+F8h] [rbp-150h]
  _WORD v87[4]; // [rsp+100h] [rbp-148h] BYREF
  __int64 v88; // [rsp+108h] [rbp-140h]
  int v89; // [rsp+110h] [rbp-138h]
  int v90; // [rsp+114h] [rbp-134h]
  int v91; // [rsp+118h] [rbp-130h]
  int v92; // [rsp+11Ch] [rbp-12Ch]
  void **p_base; // [rsp+120h] [rbp-128h] BYREF
  void *base; // [rsp+128h] [rbp-120h] BYREF
  __int64 v95; // [rsp+130h] [rbp-118h]
  _BYTE v96[64]; // [rsp+138h] [rbp-110h] BYREF
  _BYTE *v97; // [rsp+178h] [rbp-D0h]
  __int64 v98; // [rsp+180h] [rbp-C8h]
  _BYTE v99[64]; // [rsp+188h] [rbp-C0h] BYREF
  void ***p_p_base; // [rsp+1C8h] [rbp-80h]
  __int64 v101; // [rsp+1D0h] [rbp-78h]
  void *v102; // [rsp+1D8h] [rbp-70h]
  __int64 v103; // [rsp+1E0h] [rbp-68h]
  unsigned int v104; // [rsp+1E8h] [rbp-60h]
  void *v105; // [rsp+1F0h] [rbp-58h]
  __int64 v106; // [rsp+1F8h] [rbp-50h]
  unsigned int v107; // [rsp+200h] [rbp-48h]

  v5 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 40 > 6 )
  {
    sub_E51590((__int64 *)a1, a2, a3, 0, a4);
    return;
  }
  if ( *(_BYTE *)(a1 + 18) )
  {
    ptr = v78;
    v77 = 0x400000000LL;
    goto LABEL_4;
  }
  a4 = 0;
  LODWORD(v80) = 0;
  v97 = v99;
  v79 = &off_2BEBF60;
  v7 = *(_QWORD *)a1;
  memset(v87, 0, 3);
  v85 = v7;
  v8 = *(_QWORD *)(a1 + 24);
  v83 = 0;
  v88 = v8;
  LODWORD(v8) = *(_DWORD *)(a1 + 32);
  v84 = 1;
  v89 = v8;
  LODWORD(v8) = *(_DWORD *)(a1 + 40);
  v82 = 0;
  v91 = v8;
  LODWORD(v8) = *(_DWORD *)(a1 + 44);
  v81 = 0;
  v92 = v8;
  base = v96;
  v95 = 0x400000000LL;
  v98 = 0x400000000LL;
  p_p_base = &p_base;
  p_base = &base;
  v86 = &v79;
  v90 = 0;
  v101 = 0;
  v102 = nullptr;
  v103 = 0;
  v104 = 0;
  operator delete(0, 0, 8);
  v13 = *(_DWORD *)(a1 + 248);
  v104 = v13;
  if ( v13 )
  {
    v65 = (void *)sub_22300B0(16LL * v13, 8, v9, v10, v11, v12);
    v66 = *(_QWORD *)(a1 + 240);
    v67 = *(const void **)(a1 + 232);
    v102 = v65;
    v103 = v66;
    memcpy(v65, v67, 16LL * v104);
  }
  else
  {
    v102 = nullptr;
    v103 = 0;
  }
  v105 = nullptr;
  v106 = 0;
  v107 = 0;
  operator delete(0, 0, 8);
  v18 = *(unsigned int *)(a1 + 272);
  v107 = v18;
  if ( (_DWORD)v18 )
  {
    v19 = (void *)sub_22300B0(24 * v18, 8, v14, v15, v16, v17);
    v20 = *(_QWORD *)(a1 + 264);
    v21 = *(const void **)(a1 + 256);
    v105 = v19;
    v106 = v20;
    memcpy(v19, v21, 24LL * v107);
  }
  else
  {
    v105 = nullptr;
    v106 = 0;
  }
  *(_WORD *)((char *)v87 + 1) = 257;
  sub_E3FB80(&v85, *(_QWORD *)(v5 + 48));
  v22 = (char *)base;
  v23 = 16LL * (unsigned int)v95;
  if ( (unsigned __int64)v23 > 0x10 )
  {
    qsort(base, v23 >> 4, 0x10u, (__compar_fn_t)sub_E39370);
    v22 = (char *)base;
    v23 = 16LL * (unsigned int)v95;
  }
  v24 = (const __m128i *)&v22[v23];
  v25 = sub_E38C40((__int64)v22, (__int64)&v22[v23]);
  v26 = base;
  v27 = ((_BYTE *)base + 16 * (unsigned int)v95 - (_BYTE *)v24) >> 4;
  if ( (_BYTE *)base + 16 * (unsigned int)v95 - (_BYTE *)v24 > 0 )
  {
    do
    {
      v28 = _mm_loadu_si128(v24);
      v25 += 16;
      ++v24;
      *(__m128i *)(v25 - 16) = v28;
      --v27;
    }
    while ( v27 );
    v26 = base;
  }
  v77 = 0x400000000LL;
  LODWORD(v95) = (v25 - (__int64)v26) >> 4;
  ptr = v78;
  if ( (_DWORD)v95 )
    sub_E3BE20((__int64 *)&ptr, (__int64 *)&base);
  sub_E3B410((__int64)&v85);
  sub_227B480(&v79);
  if ( !(_DWORD)v77 )
  {
LABEL_4:
    sub_E51590((__int64 *)a1, v5, 0, 0, a4);
    v6 = ptr;
    if ( ptr == v78 )
      return;
    goto LABEL_5;
  }
  v70 = &off_2BEBF60;
  v29 = *(_QWORD *)a1;
  memset(v87, 0, 3);
  v85 = v29;
  v86 = (void **)&v70;
  v30 = *(_QWORD *)(a1 + 24);
  v97 = v99;
  v88 = v30;
  LODWORD(v30) = *(_DWORD *)(a1 + 32);
  v71 = 0;
  v89 = v30;
  LODWORD(v30) = *(_DWORD *)(a1 + 40);
  v74 = 0;
  v91 = v30;
  LODWORD(v30) = *(_DWORD *)(a1 + 44);
  v75 = 1;
  v92 = v30;
  base = v96;
  v95 = 0x400000000LL;
  v98 = 0x400000000LL;
  p_p_base = &p_base;
  p_base = &base;
  v73 = 0;
  v72 = 0;
  v90 = 0;
  v101 = 0;
  v102 = nullptr;
  v103 = 0;
  v104 = 0;
  operator delete(0, 0, 8);
  v35 = *(_DWORD *)(a1 + 248);
  v104 = v35;
  if ( v35 )
  {
    v36 = (void *)sub_22300B0(16LL * v35, 8, v31, v32, v33, v34);
    v37 = *(_QWORD *)(a1 + 240);
    v38 = *(const void **)(a1 + 232);
    v102 = v36;
    v103 = v37;
    memcpy(v36, v38, 16LL * v104);
  }
  else
  {
    v102 = nullptr;
    v103 = 0;
  }
  v105 = nullptr;
  v106 = 0;
  v107 = 0;
  operator delete(0, 0, 8);
  v43 = *(unsigned int *)(a1 + 272);
  v107 = v43;
  if ( (_DWORD)v43 )
  {
    v44 = (void *)sub_22300B0(24 * v43, 8, v39, v40, v41, v42);
    v45 = *(_QWORD *)(a1 + 264);
    v46 = *(const void **)(a1 + 256);
    v105 = v44;
    v106 = v45;
    memcpy(v44, v46, 24LL * v107);
  }
  else
  {
    v105 = nullptr;
    v106 = 0;
  }
  *(_WORD *)((char *)v87 + 1) = 257;
  sub_E51590(&v85, v5, 0, 0, (__m128)0LL);
  v47 = base;
  v48 = 16LL * (unsigned int)v95;
  if ( (unsigned __int64)v48 > 0x10 )
  {
    qsort(base, v48 >> 4, 0x10u, (__compar_fn_t)sub_E39370);
    v47 = base;
    v48 = 16LL * (unsigned int)v95;
  }
  v49 = (const __m128i *)&v47[v48];
  v50 = sub_E38C40((__int64)v47, (__int64)&v47[v48]);
  v51 = base;
  v52 = ((_BYTE *)base + 16 * (unsigned int)v95 - &v47[v48]) >> 4;
  if ( (_BYTE *)base + 16 * (unsigned int)v95 - &v47[v48] > 0 )
  {
    do
    {
      v53 = _mm_loadu_si128(v49);
      v50 += 16;
      ++v49;
      *(__m128i *)(v50 - 16) = v53;
      --v52;
    }
    while ( v52 );
    v51 = base;
  }
  v54 = (const __m128i *)&v81;
  v79 = &v81;
  v55 = (unsigned int)((v50 - (__int64)v51) >> 4);
  LODWORD(v95) = (v50 - (__int64)v51) >> 4;
  v56 = (unsigned int)v77;
  v80 = 0x400000000LL;
  v57 = v77;
  if ( (_DWORD)v77 )
  {
    v58 = (unsigned int)v77;
    v59 = &v81;
    if ( (unsigned int)v77 > 4uLL )
    {
      v69 = v77;
      v68 = (unsigned int)v77;
      sub_2237220(&v79, &v81, (unsigned int)v77, 16);
      v58 = (unsigned int)v77;
      v59 = (__int128 *)v79;
      v55 = (unsigned int)v95;
      v56 = v68;
      v57 = v69;
      v54 = (const __m128i *)((char *)v79 + 16 * (unsigned int)v80);
    }
    v60 = v56;
    if ( &v59[v60] != (__int128 *)v54 )
    {
      do
      {
        v54->m128i_i64[0] = 0;
        ++v54;
        v54[-1].m128i_i64[1] = 0;
      }
      while ( &v59[v60] != (__int128 *)v54 );
      v59 = (__int128 *)v79;
      v54 = (const __m128i *)((char *)v79 + v60 * 16);
    }
    LODWORD(v80) = v57;
    v51 = base;
  }
  else
  {
    v58 = 0;
    v59 = &v81;
  }
  v61 = sub_E38FC0((__int64)ptr, (__int64)ptr + 16 * v58, (__int64)v51, (__int64)v51 + 16 * v55, (__int64)v59);
  v62 = v79;
  v63 = ((_BYTE *)v79 + 16 * (unsigned int)v80 - (_BYTE *)v54) >> 4;
  if ( (_BYTE *)v79 + 16 * (unsigned int)v80 - (_BYTE *)v54 > 0 )
  {
    do
    {
      v64 = _mm_loadu_si128(v54);
      v61 += 16;
      ++v54;
      *(__m128i *)(v61 - 16) = v64;
      --v63;
    }
    while ( v63 );
    v62 = v79;
  }
  LODWORD(v80) = (v61 - (__int64)v62) >> 4;
  sub_E51590((__int64 *)a1, v5, 0, (__int64)&v79, (__m128)0LL);
  if ( v79 != &v81 )
    free(v79);
  sub_E3B410((__int64)&v85);
  sub_227B480(&v70);
  v6 = ptr;
  if ( ptr != v78 )
LABEL_5:
    free(v6);
}
