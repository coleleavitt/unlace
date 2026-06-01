__int64 __fastcall sub_5E6380(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbp
  __int64 v4; // rax
  __int64 v5; // r12
  size_t v6; // r12
  int v7; // eax
  size_t v8; // rcx
  size_t v9; // r12
  const char *v10; // rsi
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
  const char *v27; // rsi
  int *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  size_t v37; // r12
  __int64 v38; // rax
  __int64 v39; // r14
  __m128i v40; // xmm0
  size_t v41; // r12
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // r12
  char v45; // al
  size_t v46; // r12
  size_t v47; // r12
  __int16 v48; // ax
  __int64 result; // rax
  __m128i v50; // xmm0
  __int16 v51; // dx
  void *v52; // rax
  void *v53; // rax
  const void *v54; // rsi
  void *v55; // rax
  void *v56; // rax
  void *v57; // rax
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // r15
  __int64 v61; // r12
  __int64 v62; // r13
  void *v63; // rax
  void *v64; // rax
  void *v65; // rax
  __int64 v66; // rax
  size_t v67; // rcx
  __int64 v68; // r13
  __int64 v69; // r14
  __int64 v70; // r13
  __int64 v71; // rdx
  const void **v72; // r12
  size_t v73; // r15
  void *v74; // rax
  void *v75; // rax
  const void *v76; // rsi
  void *v77; // rax
  const void *v78; // rsi
  __int64 v79; // rax
  size_t v80; // rcx
  __int64 v81; // r13
  __int64 v82; // r14
  __int64 v83; // r13
  __int64 v84; // rdx
  const void **v85; // r12
  size_t v86; // r15
  void *v87; // rax
  void *v88; // rax
  size_t n; // [rsp+0h] [rbp-40h]
  size_t na; // [rsp+0h] [rbp-40h]
  size_t nb; // [rsp+0h] [rbp-40h]
  size_t nc; // [rsp+0h] [rbp-40h]
  size_t nd; // [rsp+0h] [rbp-40h]
  size_t ne; // [rsp+0h] [rbp-40h]

  v2 = a2;
  v4 = *a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  v5 = a2[2];
  *(_QWORD *)a1 = v4;
  if ( v5 )
  {
    v52 = (void *)qalloc_or_throw(26 * v5, (const char *)a2);
    *(_QWORD *)(a1 + 24) = v5;
    a2 = (_QWORD *)a2[1];
    *(_QWORD *)(a1 + 8) = v52;
    memcpy(v52, a2, 26 * v5);
    *(_QWORD *)(a1 + 16) = v5;
  }
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  v6 = v2[5];
  if ( v6 )
  {
    v88 = (void *)qalloc_or_throw(v2[5], (const char *)a2);
    *(_QWORD *)(a1 + 32) = v88;
    a2 = (_QWORD *)v2[4];
    *(_QWORD *)(a1 + 48) = v6;
    memcpy(v88, a2, v6);
    *(_QWORD *)(a1 + 40) = v6;
  }
  *(_BYTE *)(a1 + 56) = *((_BYTE *)v2 + 56);
  v7 = *((_DWORD *)v2 + 15);
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  v8 = v2[9];
  *(_DWORD *)(a1 + 60) = v7;
  if ( v8 )
  {
    nd = v8;
    v79 = qalloc_or_throw(24 * v8, (const char *)a2);
    v80 = nd;
    *(_QWORD *)(a1 + 64) = v79;
    v81 = v79;
    v82 = 0;
    *(_QWORD *)(a1 + 80) = nd;
    while ( 1 )
    {
      v83 = 24 * v82 + v81;
      v84 = v2[8] + 24 * v82;
      *(_QWORD *)v83 = 0;
      v85 = (const void **)v84;
      *(_OWORD *)(v83 + 8) = 0;
      v86 = *(_QWORD *)(v84 + 8);
      if ( v86 )
      {
        ne = v80;
        v87 = (void *)qalloc_or_throw(*(_QWORD *)(v84 + 8), (const char *)a2);
        *(_QWORD *)v83 = v87;
        ++v82;
        *(_QWORD *)(v83 + 16) = v86;
        a2 = *v85;
        memcpy(v87, *v85, v86);
        v80 = ne;
        *(_QWORD *)(v83 + 8) = v86;
        if ( ne == v82 )
        {
LABEL_60:
          *(_QWORD *)(a1 + 72) = v80;
          break;
        }
      }
      else if ( v80 == ++v82 )
      {
        goto LABEL_60;
      }
      v81 = *(_QWORD *)(a1 + 64);
    }
  }
  *(_QWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  v9 = v2[12];
  if ( v9 )
  {
    v77 = (void *)qalloc_or_throw(v2[12], (const char *)a2);
    *(_QWORD *)(a1 + 88) = v77;
    v78 = (const void *)v2[11];
    *(_QWORD *)(a1 + 104) = v9;
    memcpy(v77, v78, v9);
    *(_QWORD *)(a1 + 96) = v9;
  }
  v10 = (const char *)(a1 + 120);
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = a1 + 120;
  *(_QWORD *)(a1 + 144) = a1 + 120;
  *(_QWORD *)(a1 + 152) = 0;
  v11 = (int *)v2[16];
  if ( v11 )
  {
    v12 = sub_5E2A80(v11, v10);
    v13 = v12;
    do
    {
      v14 = v13;
      v13 = *(_QWORD *)(v13 + 16);
    }
    while ( v13 );
    *(_QWORD *)(a1 + 136) = v14;
    v15 = v12;
    do
    {
      v16 = v15;
      v15 = *(_QWORD *)(v15 + 24);
    }
    while ( v15 );
    v17 = v2[19];
    *(_QWORD *)(a1 + 144) = v16;
    *(_QWORD *)(a1 + 128) = v12;
    *(_QWORD *)(a1 + 152) = v17;
  }
  *(_DWORD *)(a1 + 160) = *((_DWORD *)v2 + 40);
  *(_QWORD *)(a1 + 164) = *(_QWORD *)((char *)v2 + 164);
  *(_WORD *)(a1 + 172) = *((_WORD *)v2 + 86);
  v18 = *((_BYTE *)v2 + 174);
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  v19 = v2[23];
  *(_BYTE *)(a1 + 174) = v18;
  if ( v19 )
  {
    v75 = (void *)qalloc_or_throw(v19, v10);
    *(_QWORD *)(a1 + 176) = v75;
    v76 = (const void *)v2[22];
    *(_QWORD *)(a1 + 192) = v19;
    memcpy(v75, v76, v19);
    *(_QWORD *)(a1 + 184) = v19;
  }
  *(_DWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = a1 + 208;
  *(_QWORD *)(a1 + 232) = a1 + 208;
  *(_QWORD *)(a1 + 240) = 0;
  v20 = (int *)v2[27];
  if ( v20 )
  {
    v21 = sub_5E24A0(v20, (const char *)(a1 + 208));
    v22 = v21;
    do
    {
      v23 = v22;
      v22 = *(_QWORD *)(v22 + 16);
    }
    while ( v22 );
    *(_QWORD *)(a1 + 224) = v23;
    v24 = v21;
    do
    {
      v25 = v24;
      v24 = *(_QWORD *)(v24 + 24);
    }
    while ( v24 );
    v26 = v2[30];
    *(_QWORD *)(a1 + 232) = v25;
    *(_QWORD *)(a1 + 216) = v21;
    *(_QWORD *)(a1 + 240) = v26;
  }
  v27 = (const char *)(a1 + 256);
  *(_DWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = a1 + 256;
  *(_QWORD *)(a1 + 280) = a1 + 256;
  *(_QWORD *)(a1 + 288) = 0;
  v28 = (int *)v2[33];
  if ( v28 )
  {
    v29 = sub_5E2740(v28, v27);
    v30 = v29;
    do
    {
      v31 = v30;
      v30 = *(_QWORD *)(v30 + 16);
    }
    while ( v30 );
    *(_QWORD *)(a1 + 272) = v31;
    v32 = v29;
    do
    {
      v33 = v32;
      v32 = *(_QWORD *)(v32 + 24);
    }
    while ( v32 );
    v34 = v2[36];
    *(_QWORD *)(a1 + 280) = v33;
    *(_QWORD *)(a1 + 264) = v29;
    *(_QWORD *)(a1 + 288) = v34;
  }
  *(_QWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  v35 = v2[38];
  if ( v35 )
  {
    nb = v2[38];
    v66 = qalloc_or_throw(24 * v35, v27);
    v67 = nb;
    *(_QWORD *)(a1 + 296) = v66;
    v68 = v66;
    v69 = 0;
    *(_QWORD *)(a1 + 312) = nb;
    while ( 1 )
    {
      v70 = 24 * v69 + v68;
      v71 = v2[37] + 24 * v69;
      *(_QWORD *)v70 = 0;
      v72 = (const void **)v71;
      *(_OWORD *)(v70 + 8) = 0;
      v73 = *(_QWORD *)(v71 + 8);
      if ( v73 )
      {
        nc = v67;
        v74 = (void *)qalloc_or_throw(*(_QWORD *)(v71 + 8), v27);
        *(_QWORD *)v70 = v74;
        ++v69;
        *(_QWORD *)(v70 + 16) = v73;
        v27 = (const char *)*v72;
        memcpy(v74, *v72, v73);
        v67 = nc;
        *(_QWORD *)(v70 + 8) = v73;
        if ( nc == v69 )
        {
LABEL_54:
          *(_QWORD *)(a1 + 304) = v67;
          break;
        }
      }
      else if ( v67 == ++v69 )
      {
        goto LABEL_54;
      }
      v68 = *(_QWORD *)(a1 + 296);
    }
  }
  v36 = v2[40];
  *(_QWORD *)(a1 + 328) = 0;
  *(_OWORD *)(a1 + 336) = 0;
  v37 = v2[42];
  *(_QWORD *)(a1 + 320) = v36;
  if ( v37 )
  {
    v65 = (void *)qalloc_or_throw(v37, v27);
    *(_QWORD *)(a1 + 328) = v65;
    v27 = (const char *)v2[41];
    *(_QWORD *)(a1 + 344) = v37;
    memcpy(v65, v27, v37);
    *(_QWORD *)(a1 + 336) = v37;
  }
  *(_BYTE *)(a1 + 352) = *((_BYTE *)v2 + 352);
  *(_QWORD *)(a1 + 356) = *(_QWORD *)((char *)v2 + 356);
  v38 = *(_QWORD *)((char *)v2 + 364);
  *(_QWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 384) = 0;
  v39 = v2[48];
  *(_QWORD *)(a1 + 364) = v38;
  if ( v39 )
  {
    v58 = qalloc_or_throw(48 * v39, v27);
    *(_QWORD *)(a1 + 376) = v58;
    v59 = v58;
    v60 = 0;
    *(_QWORD *)(a1 + 392) = v39;
    while ( 1 )
    {
      v61 = 48 * v60 + v59;
      v62 = v2[47] + 48 * v60;
      *(_QWORD *)v61 = 0;
      *(_OWORD *)(v61 + 8) = 0;
      if ( *(_QWORD *)(v62 + 8) )
      {
        n = *(_QWORD *)(v62 + 8);
        v63 = (void *)qalloc_or_throw(n, v27);
        *(_QWORD *)v61 = v63;
        *(_QWORD *)(v61 + 16) = n;
        v27 = *(const char **)v62;
        memcpy(v63, *(const void **)v62, n);
        *(_QWORD *)(v61 + 8) = n;
      }
      *(_QWORD *)(v61 + 24) = 0;
      *(_OWORD *)(v61 + 32) = 0;
      if ( *(_QWORD *)(v62 + 32) )
      {
        na = *(_QWORD *)(v62 + 32);
        v64 = (void *)qalloc_or_throw(na, v27);
        *(_QWORD *)(v61 + 24) = v64;
        ++v60;
        *(_QWORD *)(v61 + 40) = na;
        v27 = *(const char **)(v62 + 24);
        memcpy(v64, v27, na);
        *(_QWORD *)(v61 + 32) = na;
        if ( v39 == v60 )
        {
LABEL_48:
          *(_QWORD *)(a1 + 384) = v39;
          break;
        }
      }
      else if ( v39 == ++v60 )
      {
        goto LABEL_48;
      }
      v59 = *(_QWORD *)(a1 + 376);
    }
  }
  v40 = _mm_loadu_si128((const __m128i *)v2 + 25);
  *(_QWORD *)(a1 + 416) = 0;
  *(__m128i *)(a1 + 400) = v40;
  *(_OWORD *)(a1 + 424) = 0;
  v41 = v2[53];
  if ( v41 )
  {
    v57 = (void *)qalloc_or_throw(v2[53], v27);
    *(_QWORD *)(a1 + 416) = v57;
    v27 = (const char *)v2[52];
    *(_QWORD *)(a1 + 432) = v41;
    memcpy(v57, v27, v41);
    *(_QWORD *)(a1 + 424) = v41;
  }
  v42 = v2[55];
  *(__m128i *)(a1 + 448) = _mm_loadu_si128((const __m128i *)v2 + 28);
  v43 = _mm_loadu_si128((const __m128i *)v2 + 29);
  *(_QWORD *)(a1 + 480) = 0;
  *(__m128i *)(a1 + 464) = v43;
  *(_OWORD *)(a1 + 488) = 0;
  v44 = v2[61];
  *(_QWORD *)(a1 + 440) = v42;
  if ( v44 )
  {
    v56 = (void *)qalloc_or_throw(32 * v44, v27);
    *(_QWORD *)(a1 + 480) = v56;
    v27 = (const char *)v2[60];
    *(_QWORD *)(a1 + 496) = v44;
    memcpy(v56, v27, 32 * v44);
    *(_QWORD *)(a1 + 488) = v44;
  }
  v45 = *((_BYTE *)v2 + 504);
  *(_QWORD *)(a1 + 512) = 0;
  *(_OWORD *)(a1 + 520) = 0;
  v46 = v2[65];
  *(_BYTE *)(a1 + 504) = v45;
  if ( v46 )
  {
    v55 = (void *)qalloc_or_throw(v46, v27);
    *(_QWORD *)(a1 + 512) = v55;
    v27 = (const char *)v2[64];
    *(_QWORD *)(a1 + 528) = v46;
    memcpy(v55, v27, v46);
    *(_QWORD *)(a1 + 520) = v46;
  }
  *(_QWORD *)(a1 + 536) = 0;
  *(_OWORD *)(a1 + 544) = 0;
  v47 = v2[68];
  if ( v47 )
  {
    v53 = (void *)qalloc_or_throw(v2[68], v27);
    *(_QWORD *)(a1 + 536) = v53;
    v54 = (const void *)v2[67];
    *(_QWORD *)(a1 + 552) = v47;
    memcpy(v53, v54, v47);
    *(_QWORD *)(a1 + 544) = v47;
  }
  v48 = *((_WORD *)v2 + 280);
  *(_DWORD *)(a1 + 568) = 0;
  *(_WORD *)(a1 + 560) = v48;
  jvalue_t_copy(a1 + 568, v2 + 71);
  result = *((unsigned __int8 *)v2 + 610);
  v50 = _mm_loadu_si128((const __m128i *)(v2 + 73));
  *(_QWORD *)(a1 + 600) = v2[75];
  v51 = *((_WORD *)v2 + 304);
  *(_BYTE *)(a1 + 610) = result;
  *(_WORD *)(a1 + 608) = v51;
  *(__m128i *)(a1 + 584) = v50;
  return result;
}

