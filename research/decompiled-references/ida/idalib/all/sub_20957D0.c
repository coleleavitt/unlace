void __fastcall sub_20957D0(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *i; // r12
  _QWORD *v4; // rbx
  _QWORD *j; // r12
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rbx
  bool v12; // cf
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r15
  void *v17; // rdi
  _QWORD *v18; // r13
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  _QWORD *v22; // r12
  _QWORD *v23; // r14
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rbx
  void *v26; // rdi
  _QWORD *v27; // r15
  void *v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  __int64 *v31; // rbx
  __int64 *v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 *v36; // r12
  void *v37; // rdi
  void *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // r12
  void *v43; // rdi
  void *v44; // rdi
  void *v45; // rdi
  void *v46; // rdi
  __int64 *v47; // rax
  __int64 *v48; // r12
  __int64 *v49; // rbx
  __int64 *v50; // r13
  __int64 v51; // rdi
  unsigned int v52; // ecx
  __int64 v53; // rdi
  __int64 *v54; // rdx
  __int64 v55; // rsi
  unsigned int v56; // ecx
  __int64 *v57; // rbx
  __int64 v58; // rsi
  __int64 v59; // rdi
  double v60[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_QWORD **)(a1 + 32);
  *(_QWORD *)a1 = &off_2C724F8;
  for ( i = &v2[*(unsigned int *)(a1 + 40)]; i != v2; ++v2 )
  {
    if ( *v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
  }
  v4 = *(_QWORD **)(a1 + 240);
  for ( j = &v4[*(unsigned int *)(a1 + 248)]; j != v4; ++v4 )
  {
    if ( *v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
  }
  operator delete(*(_QWORD *)(a1 + 656), 16LL * *(unsigned int *)(a1 + 672), 8);
  operator delete(*(_QWORD *)(a1 + 632), 16LL * *(unsigned int *)(a1 + 648), 8);
  v6 = *(__int64 **)(a1 + 552);
  v7 = *(unsigned int *)(a1 + 560);
  v8 = &v6[v7];
  if ( v6 != v8 )
  {
    v9 = *(_QWORD *)(a1 + 552);
    while ( 1 )
    {
      v10 = (unsigned int)(((__int64)v6 - v9) >> 3) >> 7;
      v11 = 4096LL << v10;
      v12 = v10 < 0x1E;
      v13 = *v6;
      if ( !v12 )
        v11 = 0x40000000000LL;
      v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v15 = v13 + v11;
      if ( v13 == *(_QWORD *)(v9 + 8 * v7 - 8) )
        v15 = *(_QWORD *)(a1 + 536);
      v16 = v14 + 176;
      if ( v15 < v14 + 176 )
      {
LABEL_24:
        if ( v8 == ++v6 )
          break;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v17 = *(void **)(v16 - 24);
            v18 = (_QWORD *)(v16 - 176);
            if ( v17 != (void *)(v16 - 8) )
              free(v17);
            v19 = (void *)v18[15];
            if ( v19 != (void *)(v16 - 40) )
              free(v19);
            v20 = (void *)v18[11];
            if ( v20 != (void *)(v16 - 72) )
              free(v20);
            v21 = (void *)v18[1];
            if ( v21 == (void *)(v16 - 152) )
              break;
            free(v21);
            v16 += 176LL;
            if ( v15 < v16 )
              goto LABEL_24;
          }
          v16 += 176LL;
        }
        while ( v16 <= v15 );
        if ( v8 == ++v6 )
          break;
      }
      v9 = *(_QWORD *)(a1 + 552);
      v7 = *(unsigned int *)(a1 + 560);
    }
  }
  v22 = *(_QWORD **)(a1 + 600);
  v23 = &v22[2 * *(unsigned int *)(a1 + 608)];
  if ( v22 != v23 )
  {
    do
    {
      v24 = *v22 + v22[1];
      v25 = (*v22 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      while ( 1 )
      {
        v25 += 176LL;
        if ( v24 < v25 )
          break;
        while ( 1 )
        {
          v26 = *(void **)(v25 - 24);
          v27 = (_QWORD *)(v25 - 176);
          if ( v26 != (void *)(v25 - 8) )
            free(v26);
          v28 = (void *)v27[15];
          if ( v28 != (void *)(v25 - 40) )
            free(v28);
          v29 = (void *)v27[11];
          if ( v29 != (void *)(v25 - 72) )
            free(v29);
          v30 = (void *)v27[1];
          if ( v30 == (void *)(v25 - 152) )
            break;
          free(v30);
          v25 += 176LL;
          if ( v24 < v25 )
            goto LABEL_39;
        }
      }
LABEL_39:
      v22 += 2;
    }
    while ( v23 != v22 );
    v31 = *(__int64 **)(a1 + 600);
    v32 = &v31[2 * *(unsigned int *)(a1 + 608)];
    while ( v32 != v31 )
    {
      v33 = v31[1];
      v34 = *v31;
      v31 += 2;
      operator delete(v34, v33, 16);
    }
  }
  *(_DWORD *)(a1 + 608) = 0;
  v35 = *(unsigned int *)(a1 + 560);
  if ( !(_DWORD)v35 )
    goto LABEL_43;
  v47 = *(__int64 **)(a1 + 552);
  *(_QWORD *)(a1 + 616) = 0;
  v48 = v47 + 1;
  v49 = &v47[v35];
  v50 = v47 + 1;
  *(_QWORD *)&v60[0] = *v47 + 4096;
  *(__m128 *)(a1 + 536) = _mm_loadh_ps(v60);
  if ( v49 != v47 + 1 )
  {
    while ( 1 )
    {
      v52 = (unsigned int)(v50 - v47) >> 7;
      if ( v52 > 0x1D )
      {
        v51 = *v50++;
        operator delete(v51, 0x40000000000LL, 16);
        if ( v49 == v50 )
          goto LABEL_72;
      }
      else
      {
        v53 = *v50++;
        operator delete(v53, 4096LL << v52, 16);
        if ( v50 == v49 )
        {
LABEL_72:
          v47 = *(__int64 **)(a1 + 552);
          v48 = v47 + 1;
          v50 = v47 + 1;
          break;
        }
      }
      v47 = *(__int64 **)(a1 + 552);
    }
  }
  *(_DWORD *)(a1 + 560) = 1;
  v54 = v47;
  while ( 1 )
  {
    v55 = 0x40000000000LL;
    v56 = (unsigned int)(v47 - v54) >> 7;
    if ( v56 <= 0x1D )
      v55 = 4096LL << v56;
    operator delete(*v47, v55, 16);
    v47 = v48;
    if ( v48 == v50 )
      break;
    v54 = *(__int64 **)(a1 + 552);
    ++v48;
  }
  v57 = *(__int64 **)(a1 + 600);
  v36 = &v57[2 * *(unsigned int *)(a1 + 608)];
  if ( v57 != v36 )
  {
    do
    {
      v58 = v57[1];
      v59 = *v57;
      v57 += 2;
      operator delete(v59, v58, 16);
    }
    while ( v36 != v57 );
LABEL_43:
    v36 = *(__int64 **)(a1 + 600);
  }
  if ( v36 != (__int64 *)(a1 + 616) )
    free(v36);
  v37 = *(void **)(a1 + 552);
  if ( v37 != (void *)(a1 + 568) )
    free(v37);
  sub_2222F80(a1 + 520);
  if ( (*(_BYTE *)(a1 + 384) & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 392), 16LL * *(unsigned int *)(a1 + 400), 8);
  v38 = *(void **)(a1 + 240);
  if ( v38 != (void *)(a1 + 256) )
    free(v38);
  v39 = *(unsigned int *)(a1 + 232);
  v40 = *(_QWORD *)(a1 + 216);
  v41 = 96 * v39;
  if ( (_DWORD)v39 )
  {
    v42 = v40 + 96 * v39;
    do
    {
      while ( *(_QWORD *)v40 == -4096 || *(_QWORD *)v40 == -8192 || *(_BYTE *)(v40 + 28) )
      {
        v40 += 96;
        if ( v42 == v40 )
          goto LABEL_59;
      }
      v43 = *(void **)(v40 + 8);
      v40 += 96;
      free(v43);
    }
    while ( v42 != v40 );
LABEL_59:
    v40 = *(_QWORD *)(a1 + 216);
    v41 = 96LL * *(unsigned int *)(a1 + 232);
  }
  operator delete(v40, v41, 8);
  operator delete(*(_QWORD *)(a1 + 192), 16LL * *(unsigned int *)(a1 + 208), 8);
  v44 = *(void **)(a1 + 112);
  if ( v44 != (void *)(a1 + 128) )
    free(v44);
  v45 = *(void **)(a1 + 32);
  if ( v45 != (void *)(a1 + 48) )
    free(v45);
  v46 = *(void **)(a1 + 8);
  if ( v46 )
    operator delete(v46);
}
