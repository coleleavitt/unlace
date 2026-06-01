void __fastcall sub_FB2EE0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // r12
  char *v5; // rbp
  char *v6; // r12
  void *v7; // rdi
  _DWORD *v8; // rbp
  char *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r12
  char *v12; // rbp
  char *v13; // r12
  void *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r12
  char *v17; // rbp
  char *v18; // r12
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 *v27; // r12
  void *v28; // rdi
  __int64 *v29; // r14
  __int64 v30; // rax
  __int64 *v31; // r15
  __int64 v32; // rdx
  unsigned int v33; // ecx
  __int64 v34; // r12
  bool v35; // cf
  __int64 v36; // rcx
  unsigned __int64 v37; // r12
  unsigned __int64 i; // rbp
  __int64 v39; // rdi
  _QWORD *v40; // r12
  _QWORD *v41; // r13
  unsigned __int64 v42; // r14
  unsigned __int64 j; // rbp
  __int64 v44; // rdi
  __int64 v45; // rbp
  __int64 v46; // r12
  __int64 v47; // rdx
  __int64 *v48; // r12
  void *v49; // rdi
  void *v50; // rdi
  volatile signed __int32 *v51; // rdi
  int v52; // eax
  __int64 v53; // r12
  __int64 v54; // r13
  __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // r12
  _QWORD *v58; // r13
  _QWORD *v59; // rbp
  _QWORD *v60; // rdx
  unsigned int v61; // ecx
  __int64 *v62; // rbp
  _QWORD *v63; // rax
  _QWORD *v64; // r12
  _QWORD *v65; // r13
  _QWORD *v66; // rbp
  _QWORD *v67; // rdx
  unsigned int v68; // ecx
  __int64 *v69; // rbp
  double v70[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 800);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *(_QWORD *)(a1 + 696);
  v4 = v3 + 8LL * *(unsigned int *)(a1 + 704);
  while ( v4 != v3 )
  {
    v3 += 8;
    operator delete();
  }
  v5 = *(char **)(a1 + 744);
  v6 = &v5[16 * *(unsigned int *)(a1 + 752)];
  if ( v5 != v6 )
  {
    do
    {
      v5 += 16;
      operator delete();
    }
    while ( v6 != v5 );
    v6 = *(char **)(a1 + 744);
  }
  if ( v6 != (char *)(a1 + 760) )
    free(v6);
  v7 = *(void **)(a1 + 696);
  if ( v7 != (void *)(a1 + 712) )
    free(v7);
  operator delete();
  v8 = *(_DWORD **)(a1 + 640);
  if ( v8 )
  {
    v9 = *(char **)v8;
    if ( v8[3] )
    {
      v52 = v8[2];
      if ( v52 )
      {
        v53 = 0;
        v54 = 8LL * (unsigned int)(v52 - 1) + 8;
        do
        {
          v55 = *(_QWORD *)&v9[v53];
          if ( v55 && v55 != -8 )
          {
            operator delete();
            v9 = *(char **)v8;
          }
          v53 += 8;
        }
        while ( v54 != v53 );
      }
    }
    free(v9);
    operator delete(v8, 0x18u);
  }
  v10 = *(_QWORD *)(a1 + 560);
  v11 = v10 + 8LL * *(unsigned int *)(a1 + 568);
  while ( v11 != v10 )
  {
    v10 += 8;
    operator delete();
  }
  v12 = *(char **)(a1 + 608);
  v13 = &v12[16 * *(unsigned int *)(a1 + 616)];
  if ( v12 != v13 )
  {
    do
    {
      v12 += 16;
      operator delete();
    }
    while ( v13 != v12 );
    v13 = *(char **)(a1 + 608);
  }
  if ( v13 != (char *)(a1 + 624) )
    free(v13);
  v14 = *(void **)(a1 + 560);
  if ( v14 != (void *)(a1 + 576) )
    free(v14);
  free(*(void **)(a1 + 520));
  v15 = *(_QWORD *)(a1 + 440);
  v16 = v15 + 8LL * *(unsigned int *)(a1 + 448);
  while ( v16 != v15 )
  {
    v15 += 8;
    operator delete();
  }
  v17 = *(char **)(a1 + 488);
  v18 = &v17[16 * *(unsigned int *)(a1 + 496)];
  if ( v17 != v18 )
  {
    do
    {
      v17 += 16;
      operator delete();
    }
    while ( v18 != v17 );
    v18 = *(char **)(a1 + 488);
  }
  if ( v18 != (char *)(a1 + 504) )
    free(v18);
  v19 = *(void **)(a1 + 440);
  if ( v19 != (void *)(a1 + 456) )
    free(v19);
  free(*(void **)(a1 + 400));
  v20 = *(void **)(a1 + 384);
  if ( (void *)(a1 + 400) != v20 )
    free(v20);
  v21 = *(void **)(a1 + 336);
  if ( v21 != (void *)(a1 + 352) )
    free(v21);
  v22 = *(void **)(a1 + 288);
  if ( v22 != (void *)(a1 + 304) )
    free(v22);
  operator delete();
  v23 = 24LL * *(unsigned int *)(a1 + 256);
  operator delete();
  v24 = *(_QWORD *)(a1 + 208);
  v25 = *(unsigned int *)(a1 + 168);
  v26 = v24 + 16LL * *(unsigned int *)(a1 + 216);
  if ( v24 != v26 )
  {
    do
    {
      v23 = *(_QWORD *)(v24 + 8);
      v24 += 16;
      operator delete();
    }
    while ( v26 != v24 );
    v25 = *(unsigned int *)(a1 + 168);
  }
  *(_DWORD *)(a1 + 216) = 0;
  if ( !(_DWORD)v25 )
    goto LABEL_43;
  v63 = *(_QWORD **)(a1 + 160);
  *(_QWORD *)(a1 + 224) = 0;
  v64 = v63 + 1;
  v65 = &v63[v25];
  v66 = v63 + 1;
  *(_QWORD *)&v70[0] = *v63 + 4096LL;
  *(__m128 *)(a1 + 144) = _mm_loadh_ps(v70);
  if ( v65 != v63 + 1 )
  {
    do
    {
      ++v66;
      operator delete();
      v63 = *(_QWORD **)(a1 + 160);
    }
    while ( v65 != v66 );
    v64 = v63 + 1;
    v66 = v63 + 1;
  }
  *(_DWORD *)(a1 + 168) = 1;
  v67 = v63;
  while ( 1 )
  {
    v23 = 0x40000000000LL;
    v68 = (unsigned int)(v63 - v67) >> 7;
    if ( v68 <= 0x1D )
      v23 = 4096LL << v68;
    operator delete();
    v63 = v64;
    if ( v64 == v66 )
      break;
    v67 = *(_QWORD **)(a1 + 160);
    ++v64;
  }
  v69 = *(__int64 **)(a1 + 208);
  v27 = &v69[2 * *(unsigned int *)(a1 + 216)];
  if ( v69 != v27 )
  {
    do
    {
      v23 = v69[1];
      v69 += 2;
      operator delete();
    }
    while ( v27 != v69 );
LABEL_43:
    v27 = *(__int64 **)(a1 + 208);
  }
  if ( v27 != (__int64 *)(a1 + 224) )
    free(v27);
  v28 = *(void **)(a1 + 160);
  if ( v28 != (void *)(a1 + 176) )
    free(v28);
  v29 = *(__int64 **)(a1 + 64);
  v30 = *(unsigned int *)(a1 + 72);
  v31 = &v29[v30];
  if ( v29 != v31 )
  {
    v32 = *(_QWORD *)(a1 + 64);
    while ( 1 )
    {
      v33 = (unsigned int)(((__int64)v29 - v32) >> 3) >> 7;
      v34 = 4096LL << v33;
      v35 = v33 < 0x1E;
      v36 = *v29;
      if ( !v35 )
        v34 = 0x40000000000LL;
      v37 = v36 + v34;
      if ( v36 == *(_QWORD *)(v32 + 8 * v30 - 8) )
        v37 = *(_QWORD *)(a1 + 48);
      for ( i = ((v36 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 96; i <= v37; i += 96LL )
      {
        v39 = i - 96;
        sub_FB26B0(v39);
      }
      if ( v31 == ++v29 )
        break;
      v32 = *(_QWORD *)(a1 + 64);
      v30 = *(unsigned int *)(a1 + 72);
    }
  }
  v40 = *(_QWORD **)(a1 + 112);
  v41 = &v40[2 * *(unsigned int *)(a1 + 120)];
  if ( v40 != v41 )
  {
    do
    {
      v42 = *v40 + v40[1];
      for ( j = ((*v40 + 7LL) & 0xFFFFFFFFFFFFFFF8LL) + 96; v42 >= j; j += 96LL )
      {
        v44 = j - 96;
        sub_FB26B0(v44);
      }
      v40 += 2;
    }
    while ( v41 != v40 );
    v45 = *(_QWORD *)(a1 + 112);
    v46 = v45 + 16LL * *(unsigned int *)(a1 + 120);
    while ( v46 != v45 )
    {
      v23 = *(_QWORD *)(v45 + 8);
      v45 += 16;
      operator delete();
    }
  }
  v47 = *(unsigned int *)(a1 + 72);
  *(_DWORD *)(a1 + 120) = 0;
  if ( !(_DWORD)v47 )
    goto LABEL_65;
  *(_QWORD *)(a1 + 128) = 0;
  v56 = *(_QWORD **)(a1 + 64);
  v57 = v56 + 1;
  v58 = &v56[v47];
  v59 = v56 + 1;
  *(_QWORD *)&v70[0] = *v56 + 4096LL;
  *(__m128 *)(a1 + 48) = _mm_loadh_ps(v70);
  if ( v58 != v56 + 1 )
  {
    do
    {
      ++v59;
      operator delete();
      v56 = *(_QWORD **)(a1 + 64);
    }
    while ( v58 != v59 );
    v57 = v56 + 1;
    v59 = v56 + 1;
  }
  *(_DWORD *)(a1 + 72) = 1;
  v60 = v56;
  while ( 1 )
  {
    v23 = 0x40000000000LL;
    v61 = (unsigned int)(v56 - v60) >> 7;
    if ( v61 <= 0x1D )
      v23 = 4096LL << v61;
    operator delete();
    v56 = v57;
    if ( v57 == v59 )
      break;
    v60 = *(_QWORD **)(a1 + 64);
    ++v57;
  }
  v62 = *(__int64 **)(a1 + 112);
  v48 = &v62[2 * *(unsigned int *)(a1 + 120)];
  if ( v62 != v48 )
  {
    do
    {
      v23 = v62[1];
      v62 += 2;
      operator delete();
    }
    while ( v48 != v62 );
LABEL_65:
    v48 = *(__int64 **)(a1 + 112);
  }
  if ( v48 != (__int64 *)(a1 + 128) )
    free(v48);
  v49 = *(void **)(a1 + 64);
  if ( v49 != (void *)(a1 + 80) )
    free(v49);
  v50 = *(void **)(a1 + 16);
  if ( v50 != (void *)(a1 + 32) )
    operator delete(v50);
  v51 = *(volatile signed __int32 **)(a1 + 8);
  if ( v51 )
  {
    if ( !_InterlockedSub(v51 + 2, 1u) )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v51 + 8LL))(v51, v23);
  }
}

