__int64 __fastcall sub_602240(__int64 a1, __int64 a2)
{
  __m128i v4; // xmm0
  __int64 v5; // r12
  size_t v6; // r12
  int v7; // eax
  size_t v8; // rcx
  size_t v9; // r12
  __int64 v10; // rsi
  int *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // al
  size_t v19; // r12
  int *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  int *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  size_t v36; // r12
  __int64 v37; // rax
  __int64 v38; // r14
  __m128i v39; // xmm0
  size_t v40; // r12
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // r12
  char v44; // al
  size_t v45; // r12
  size_t v46; // r12
  __int16 v47; // ax
  __int64 result; // rax
  __m128i v49; // xmm0
  __int16 v50; // dx
  void *v51; // rax
  const void *v52; // rsi
  void *v53; // rax
  const void *v54; // rsi
  void *v55; // rax
  const void *v56; // rsi
  void *v57; // rax
  const void *v58; // rsi
  void *v59; // rax
  const void *v60; // rsi
  __int64 v61; // rax
  __int64 v62; // r12
  __int64 v63; // r15
  __int64 v64; // r12
  __int64 v65; // r13
  void *v66; // rax
  void *v67; // rax
  void *v68; // rax
  const void *v69; // rsi
  __int64 v70; // rax
  size_t v71; // rcx
  __int64 v72; // r13
  __int64 v73; // r14
  __int64 v74; // r13
  __int64 v75; // rdx
  const void **v76; // r12
  size_t v77; // r15
  void *v78; // rax
  void *v79; // rax
  const void *v80; // rsi
  void *v81; // rax
  const void *v82; // rsi
  __int64 v83; // rax
  size_t v84; // rcx
  __int64 v85; // r13
  __int64 v86; // r14
  __int64 v87; // r13
  __int64 v88; // rdx
  const void **v89; // r12
  size_t v90; // r15
  void *v91; // rax
  void *v92; // rax
  const void *v93; // rsi
  size_t n; // [rsp+8h] [rbp-40h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t nc; // [rsp+8h] [rbp-40h]
  size_t nd; // [rsp+8h] [rbp-40h]
  size_t ne; // [rsp+8h] [rbp-40h]

  v4 = _mm_loadu_si128((const __m128i *)a2);
  *(_QWORD *)(a1 + 16) = 0;
  *(__m128i *)a1 = v4;
  *(_OWORD *)(a1 + 24) = 0;
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 )
  {
    v51 = (void *)qalloc_or_throw(26 * v5);
    *(_QWORD *)(a1 + 32) = v5;
    v52 = *(const void **)(a2 + 16);
    *(_QWORD *)(a1 + 16) = v51;
    memcpy(v51, v52, 26 * v5);
    *(_QWORD *)(a1 + 24) = v5;
  }
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
  {
    v92 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 48));
    *(_QWORD *)(a1 + 40) = v92;
    v93 = *(const void **)(a2 + 40);
    *(_QWORD *)(a1 + 56) = v6;
    memcpy(v92, v93, v6);
    *(_QWORD *)(a1 + 48) = v6;
  }
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 64);
  v7 = *(_DWORD *)(a2 + 68);
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  v8 = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 68) = v7;
  if ( v8 )
  {
    nd = v8;
    v83 = qalloc_or_throw(24 * v8);
    v84 = nd;
    *(_QWORD *)(a1 + 72) = v83;
    v85 = v83;
    v86 = 0;
    *(_QWORD *)(a1 + 88) = nd;
    while ( 1 )
    {
      v87 = 24 * v86 + v85;
      v88 = *(_QWORD *)(a2 + 72) + 24 * v86;
      *(_QWORD *)v87 = 0;
      v89 = (const void **)v88;
      *(_OWORD *)(v87 + 8) = 0;
      v90 = *(_QWORD *)(v88 + 8);
      if ( v90 )
      {
        ne = v84;
        v91 = (void *)qalloc_or_throw(*(_QWORD *)(v88 + 8));
        *(_QWORD *)v87 = v91;
        ++v86;
        *(_QWORD *)(v87 + 16) = v90;
        memcpy(v91, *v89, v90);
        v84 = ne;
        *(_QWORD *)(v87 + 8) = v90;
        if ( ne == v86 )
        {
LABEL_60:
          *(_QWORD *)(a1 + 80) = v84;
          break;
        }
      }
      else if ( v84 == ++v86 )
      {
        goto LABEL_60;
      }
      v85 = *(_QWORD *)(a1 + 72);
    }
  }
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  v9 = *(_QWORD *)(a2 + 104);
  if ( v9 )
  {
    v81 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 104));
    *(_QWORD *)(a1 + 96) = v81;
    v82 = *(const void **)(a2 + 96);
    *(_QWORD *)(a1 + 112) = v9;
    memcpy(v81, v82, v9);
    *(_QWORD *)(a1 + 104) = v9;
  }
  v10 = a1 + 128;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = a1 + 128;
  *(_QWORD *)(a1 + 152) = a1 + 128;
  *(_QWORD *)(a1 + 160) = 0;
  v11 = *(int **)(a2 + 136);
  if ( v11 )
  {
    v12 = sub_5FE940(v11, v10);
    v13 = v12;
    do
    {
      v14 = v13;
      v13 = *(_QWORD *)(v13 + 16);
    }
    while ( v13 );
    *(_QWORD *)(a1 + 144) = v14;
    v15 = v12;
    do
    {
      v16 = v15;
      v15 = *(_QWORD *)(v15 + 24);
    }
    while ( v15 );
    v17 = *(_QWORD *)(a2 + 160);
    *(_QWORD *)(a1 + 152) = v16;
    *(_QWORD *)(a1 + 136) = v12;
    *(_QWORD *)(a1 + 160) = v17;
  }
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(a2 + 168);
  *(_QWORD *)(a1 + 172) = *(_QWORD *)(a2 + 172);
  *(_WORD *)(a1 + 180) = *(_WORD *)(a2 + 180);
  v18 = *(_BYTE *)(a2 + 182);
  *(_QWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  v19 = *(_QWORD *)(a2 + 192);
  *(_BYTE *)(a1 + 182) = v18;
  if ( v19 )
  {
    v79 = (void *)qalloc_or_throw(v19);
    *(_QWORD *)(a1 + 184) = v79;
    v80 = *(const void **)(a2 + 184);
    *(_QWORD *)(a1 + 200) = v19;
    memcpy(v79, v80, v19);
    *(_QWORD *)(a1 + 192) = v19;
  }
  *(_DWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = a1 + 216;
  *(_QWORD *)(a1 + 240) = a1 + 216;
  *(_QWORD *)(a1 + 248) = 0;
  v20 = *(int **)(a2 + 224);
  if ( v20 )
  {
    v21 = sub_5FE370(v20, a1 + 216);
    v22 = v21;
    do
    {
      v23 = v22;
      v22 = *(_QWORD *)(v22 + 16);
    }
    while ( v22 );
    *(_QWORD *)(a1 + 232) = v23;
    v24 = v21;
    do
    {
      v25 = v24;
      v24 = *(_QWORD *)(v24 + 24);
    }
    while ( v24 );
    v26 = *(_QWORD *)(a2 + 248);
    *(_QWORD *)(a1 + 240) = v25;
    *(_QWORD *)(a1 + 224) = v21;
    *(_QWORD *)(a1 + 248) = v26;
  }
  *(_DWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = a1 + 264;
  *(_QWORD *)(a1 + 288) = a1 + 264;
  *(_QWORD *)(a1 + 296) = 0;
  v27 = *(int **)(a2 + 272);
  if ( v27 )
  {
    v28 = sub_5FE610(v27, a1 + 264);
    v29 = v28;
    do
    {
      v30 = v29;
      v29 = *(_QWORD *)(v29 + 16);
    }
    while ( v29 );
    *(_QWORD *)(a1 + 280) = v30;
    v31 = v28;
    do
    {
      v32 = v31;
      v31 = *(_QWORD *)(v31 + 24);
    }
    while ( v31 );
    v33 = *(_QWORD *)(a2 + 296);
    *(_QWORD *)(a1 + 288) = v32;
    *(_QWORD *)(a1 + 272) = v28;
    *(_QWORD *)(a1 + 296) = v33;
  }
  *(_QWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 312) = 0;
  v34 = *(_QWORD *)(a2 + 312);
  if ( v34 )
  {
    nb = *(_QWORD *)(a2 + 312);
    v70 = qalloc_or_throw(24 * v34);
    v71 = nb;
    *(_QWORD *)(a1 + 304) = v70;
    v72 = v70;
    v73 = 0;
    *(_QWORD *)(a1 + 320) = nb;
    while ( 1 )
    {
      v74 = 24 * v73 + v72;
      v75 = *(_QWORD *)(a2 + 304) + 24 * v73;
      *(_QWORD *)v74 = 0;
      v76 = (const void **)v75;
      *(_OWORD *)(v74 + 8) = 0;
      v77 = *(_QWORD *)(v75 + 8);
      if ( v77 )
      {
        nc = v71;
        v78 = (void *)qalloc_or_throw(*(_QWORD *)(v75 + 8));
        *(_QWORD *)v74 = v78;
        ++v73;
        *(_QWORD *)(v74 + 16) = v77;
        memcpy(v78, *v76, v77);
        v71 = nc;
        *(_QWORD *)(v74 + 8) = v77;
        if ( nc == v73 )
        {
LABEL_54:
          *(_QWORD *)(a1 + 312) = v71;
          break;
        }
      }
      else if ( v71 == ++v73 )
      {
        goto LABEL_54;
      }
      v72 = *(_QWORD *)(a1 + 304);
    }
  }
  v35 = *(_QWORD *)(a2 + 328);
  *(_QWORD *)(a1 + 336) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  v36 = *(_QWORD *)(a2 + 344);
  *(_QWORD *)(a1 + 328) = v35;
  if ( v36 )
  {
    v68 = (void *)qalloc_or_throw(v36);
    *(_QWORD *)(a1 + 336) = v68;
    v69 = *(const void **)(a2 + 336);
    *(_QWORD *)(a1 + 352) = v36;
    memcpy(v68, v69, v36);
    *(_QWORD *)(a1 + 344) = v36;
  }
  *(_BYTE *)(a1 + 360) = *(_BYTE *)(a2 + 360);
  *(_QWORD *)(a1 + 364) = *(_QWORD *)(a2 + 364);
  v37 = *(_QWORD *)(a2 + 372);
  *(_QWORD *)(a1 + 384) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  v38 = *(_QWORD *)(a2 + 392);
  *(_QWORD *)(a1 + 372) = v37;
  if ( v38 )
  {
    v61 = qalloc_or_throw(48 * v38);
    *(_QWORD *)(a1 + 384) = v61;
    v62 = v61;
    v63 = 0;
    *(_QWORD *)(a1 + 400) = v38;
    while ( 1 )
    {
      v64 = 48 * v63 + v62;
      v65 = *(_QWORD *)(a2 + 384) + 48 * v63;
      *(_QWORD *)v64 = 0;
      *(_OWORD *)(v64 + 8) = 0;
      if ( *(_QWORD *)(v65 + 8) )
      {
        n = *(_QWORD *)(v65 + 8);
        v66 = (void *)qalloc_or_throw(n);
        *(_QWORD *)v64 = v66;
        *(_QWORD *)(v64 + 16) = n;
        memcpy(v66, *(const void **)v65, n);
        *(_QWORD *)(v64 + 8) = n;
      }
      *(_QWORD *)(v64 + 24) = 0;
      *(_OWORD *)(v64 + 32) = 0;
      if ( *(_QWORD *)(v65 + 32) )
      {
        na = *(_QWORD *)(v65 + 32);
        v67 = (void *)qalloc_or_throw(na);
        *(_QWORD *)(v64 + 24) = v67;
        ++v63;
        *(_QWORD *)(v64 + 40) = na;
        memcpy(v67, *(const void **)(v65 + 24), na);
        *(_QWORD *)(v64 + 32) = na;
        if ( v38 == v63 )
        {
LABEL_48:
          *(_QWORD *)(a1 + 392) = v38;
          break;
        }
      }
      else if ( v38 == ++v63 )
      {
        goto LABEL_48;
      }
      v62 = *(_QWORD *)(a1 + 384);
    }
  }
  v39 = _mm_loadu_si128((const __m128i *)(a2 + 408));
  *(_QWORD *)(a1 + 424) = 0;
  *(__m128i *)(a1 + 408) = v39;
  *(_OWORD *)(a1 + 432) = 0;
  v40 = *(_QWORD *)(a2 + 432);
  if ( v40 )
  {
    v59 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 432));
    *(_QWORD *)(a1 + 424) = v59;
    v60 = *(const void **)(a2 + 424);
    *(_QWORD *)(a1 + 440) = v40;
    memcpy(v59, v60, v40);
    *(_QWORD *)(a1 + 432) = v40;
  }
  v41 = *(_QWORD *)(a2 + 448);
  *(__m128i *)(a1 + 456) = _mm_loadu_si128((const __m128i *)(a2 + 456));
  v42 = _mm_loadu_si128((const __m128i *)(a2 + 472));
  *(_QWORD *)(a1 + 488) = 0;
  *(__m128i *)(a1 + 472) = v42;
  *(_OWORD *)(a1 + 496) = 0;
  v43 = *(_QWORD *)(a2 + 496);
  *(_QWORD *)(a1 + 448) = v41;
  if ( v43 )
  {
    v57 = (void *)qalloc_or_throw(32 * v43);
    *(_QWORD *)(a1 + 488) = v57;
    v58 = *(const void **)(a2 + 488);
    *(_QWORD *)(a1 + 504) = v43;
    memcpy(v57, v58, 32 * v43);
    *(_QWORD *)(a1 + 496) = v43;
  }
  v44 = *(_BYTE *)(a2 + 512);
  *(_QWORD *)(a1 + 520) = 0;
  *(_OWORD *)(a1 + 528) = 0;
  v45 = *(_QWORD *)(a2 + 528);
  *(_BYTE *)(a1 + 512) = v44;
  if ( v45 )
  {
    v55 = (void *)qalloc_or_throw(v45);
    *(_QWORD *)(a1 + 520) = v55;
    v56 = *(const void **)(a2 + 520);
    *(_QWORD *)(a1 + 536) = v45;
    memcpy(v55, v56, v45);
    *(_QWORD *)(a1 + 528) = v45;
  }
  *(_QWORD *)(a1 + 544) = 0;
  *(_OWORD *)(a1 + 552) = 0;
  v46 = *(_QWORD *)(a2 + 552);
  if ( v46 )
  {
    v53 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 552));
    *(_QWORD *)(a1 + 544) = v53;
    v54 = *(const void **)(a2 + 544);
    *(_QWORD *)(a1 + 560) = v46;
    memcpy(v53, v54, v46);
    *(_QWORD *)(a1 + 552) = v46;
  }
  v47 = *(_WORD *)(a2 + 568);
  *(_DWORD *)(a1 + 576) = 0;
  *(_WORD *)(a1 + 568) = v47;
  jvalue_t_copy(a1 + 576, a2 + 576);
  result = *(unsigned __int8 *)(a2 + 618);
  v49 = _mm_loadu_si128((const __m128i *)(a2 + 592));
  *(_QWORD *)(a1 + 608) = *(_QWORD *)(a2 + 608);
  v50 = *(_WORD *)(a2 + 616);
  *(_BYTE *)(a1 + 618) = result;
  *(_WORD *)(a1 + 616) = v50;
  *(__m128i *)(a1 + 592) = v49;
  return result;
}
