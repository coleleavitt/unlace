void __fastcall sub_9855D0(__int64 a1)
{
  unsigned int *v2; // rbp
  unsigned int *v3; // rbp
  unsigned int *v4; // r13
  _QWORD *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // r12
  void *v9; // rdi
  void (*v10)(void); // rax
  __int64 *v11; // rbp
  __int64 *v12; // r12
  __int64 i; // rax
  __int64 v14; // rsi
  unsigned int v15; // ecx
  __int64 v16; // rdi
  __int64 *v17; // rbp
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  void *v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // r13
  void *v27; // rdi
  void *v28; // rbp
  void *v29; // rbp
  __int64 v30; // rbp
  void *v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rbx
  void *v34; // rdi
  __int64 v35; // rbp
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // r12
  __int64 *v38; // r15
  __int64 *v39; // r13
  __int64 j; // rax
  __int64 v41; // rsi
  unsigned int v42; // ecx
  __int64 v43; // rdi
  __int64 *v44; // r13
  __int64 *v45; // r14
  __int64 v46; // rsi
  __int64 v47; // rdi
  void *v48; // rdi
  __int64 *v49; // r14
  __int64 *v50; // r12
  __int64 k; // rax
  __int64 v52; // rsi
  unsigned int v53; // ecx
  __int64 v54; // rdi
  __int64 *v55; // r12
  __int64 *v56; // r13
  __int64 v57; // rsi
  __int64 v58; // rdi
  void *v59; // rdi

  v2 = *(unsigned int **)(a1 + 112);
  if ( v2 )
  {
    operator delete(*(_QWORD *)v2, 16LL * v2[4], 8);
    operator delete(v2, 0x18u);
  }
  v3 = *(unsigned int **)(a1 + 240);
  if ( v3 )
  {
    operator delete(*(_QWORD *)v3, 16LL * v3[4], 8);
    operator delete(v3, 0x18u);
  }
  v4 = *(unsigned int **)(a1 + 248);
  if ( v4 )
  {
    v5 = *(_QWORD **)v4;
    v6 = v4[4];
    v7 = 2 * v6;
    if ( (_DWORD)v6 )
    {
      v8 = &v5[v7];
      do
      {
        if ( *v5 != -4096 && *v5 != -8192 )
        {
          v9 = (void *)v5[1];
          if ( v9 )
          {
            v10 = *(void (**)(void))(*(_QWORD *)v9 + 8LL);
            if ( (char *)v10 == (char *)sub_984430 )
              operator delete(v9, 8u);
            else
              v10();
          }
        }
        v5 += 2;
      }
      while ( v8 != v5 );
      v5 = *(_QWORD **)v4;
      v7 = 2LL * v4[4];
    }
    operator delete(v5, v7 * 8, 8);
    operator delete(v4, 0x18u);
  }
  v11 = *(__int64 **)(a1 + 160);
  v12 = &v11[*(unsigned int *)(a1 + 168)];
  if ( v11 != v12 )
  {
    for ( i = *(_QWORD *)(a1 + 160); ; i = *(_QWORD *)(a1 + 160) )
    {
      v14 = 0x40000000000LL;
      v15 = (unsigned int)(((__int64)v11 - i) >> 3) >> 7;
      if ( v15 <= 0x1D )
        v14 = 4096LL << v15;
      v16 = *v11++;
      operator delete(v16, v14, 16);
      if ( v12 == v11 )
        break;
    }
  }
  v17 = *(__int64 **)(a1 + 208);
  v18 = &v17[2 * *(unsigned int *)(a1 + 216)];
  if ( v17 != v18 )
  {
    do
    {
      v19 = v17[1];
      v20 = *v17;
      v17 += 2;
      operator delete(v20, v19, 16);
    }
    while ( v18 != v17 );
    v18 = *(__int64 **)(a1 + 208);
  }
  if ( v18 != (__int64 *)(a1 + 224) )
    free(v18);
  v21 = *(void **)(a1 + 160);
  if ( v21 != (void *)(a1 + 176) )
    free(v21);
  v22 = *(_QWORD *)(a1 + 136);
  if ( v22 )
  {
    v23 = *(_QWORD *)(v22 + 72);
    v24 = *(unsigned int *)(v22 + 88);
    v25 = 80 * v24;
    if ( (_DWORD)v24 )
    {
      v26 = v23 + 80 * v24;
      do
      {
        while ( 1 )
        {
          if ( (unsigned int)(*(_DWORD *)v23 + 2) > 1 )
          {
            v27 = *(void **)(v23 + 8);
            if ( v27 != (void *)(v23 + 24) )
              break;
          }
          v23 += 80;
          if ( v26 == v23 )
            goto LABEL_36;
        }
        free(v27);
        v23 += 80;
      }
      while ( v26 != v23 );
LABEL_36:
      v23 = *(_QWORD *)(v22 + 72);
      v25 = 80LL * *(unsigned int *)(v22 + 88);
    }
    operator delete(v23, v25, 8);
    if ( *(_QWORD *)v22 != v22 + 16 )
      free(*(void **)v22);
    operator delete((void *)v22, 0x60u);
  }
  v28 = *(void **)(a1 + 128);
  if ( v28 )
  {
    sub_EC5B50(*(_QWORD *)(a1 + 128));
    operator delete(v28, 8u);
  }
  v29 = *(void **)(a1 + 32);
  if ( v29 )
  {
    sub_9A8ED0(*(_QWORD *)(a1 + 32));
    operator delete(v29, 0x10u);
  }
  v30 = *(_QWORD *)(a1 + 24);
  if ( v30 )
  {
    operator delete(*(_QWORD *)(v30 + 88), 16LL * *(unsigned int *)(v30 + 104), 8);
    v31 = *(void **)(v30 + 64);
    if ( v31 )
      operator delete(v31);
    v32 = *(_QWORD *)(v30 + 32);
    if ( (v32 & 4) != 0 )
    {
      v37 = v32 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v37 )
      {
        v38 = *(__int64 **)(v37 + 16);
        v39 = &v38[*(unsigned int *)(v37 + 24)];
        if ( v38 != v39 )
        {
          for ( j = *(_QWORD *)(v37 + 16); ; j = *(_QWORD *)(v37 + 16) )
          {
            v41 = 0x40000000000LL;
            v42 = (unsigned int)(((__int64)v38 - j) >> 3) >> 7;
            if ( v42 <= 0x1D )
              v41 = 4096LL << v42;
            v43 = *v38++;
            operator delete(v43, v41, 16);
            if ( v39 == v38 )
              break;
          }
        }
        v44 = *(__int64 **)(v37 + 64);
        v45 = &v44[2 * *(unsigned int *)(v37 + 72)];
        if ( v44 != v45 )
        {
          do
          {
            v46 = v44[1];
            v47 = *v44;
            v44 += 2;
            operator delete(v47, v46, 16);
          }
          while ( v45 != v44 );
          v45 = *(__int64 **)(v37 + 64);
        }
        if ( v45 != (__int64 *)(v37 + 80) )
          free(v45);
        v48 = *(void **)(v37 + 16);
        if ( v48 != (void *)(v37 + 32) )
          free(v48);
        operator delete((void *)v37, 0x60u);
      }
    }
    operator delete((void *)v30, 0x70u);
  }
  v33 = *(_QWORD *)(a1 + 16);
  if ( v33 )
  {
    operator delete(*(_QWORD *)(v33 + 88), 16LL * *(unsigned int *)(v33 + 104), 8);
    v34 = *(void **)(v33 + 64);
    if ( v34 )
      operator delete(v34);
    v35 = *(_QWORD *)(v33 + 32);
    if ( (v35 & 4) != 0 )
    {
      v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v36 )
      {
        v49 = *(__int64 **)(v36 + 16);
        v50 = &v49[*(unsigned int *)(v36 + 24)];
        if ( v49 != v50 )
        {
          for ( k = *(_QWORD *)(v36 + 16); ; k = *(_QWORD *)(v36 + 16) )
          {
            v52 = 0x40000000000LL;
            v53 = (unsigned int)(((__int64)v49 - k) >> 3) >> 7;
            if ( v53 <= 0x1D )
              v52 = 4096LL << v53;
            v54 = *v49++;
            operator delete(v54, v52, 16);
            if ( v50 == v49 )
              break;
          }
        }
        v55 = *(__int64 **)(v36 + 64);
        v56 = &v55[2 * *(unsigned int *)(v36 + 72)];
        if ( v55 != v56 )
        {
          do
          {
            v57 = v55[1];
            v58 = *v55;
            v55 += 2;
            operator delete(v58, v57, 16);
          }
          while ( v56 != v55 );
          v56 = *(__int64 **)(v36 + 64);
        }
        if ( v56 != (__int64 *)(v36 + 80) )
          free(v56);
        v59 = *(void **)(v36 + 16);
        if ( v59 != (void *)(v36 + 32) )
          free(v59);
        operator delete((void *)v36, 0x60u);
      }
    }
    operator delete((void *)v33, 0x70u);
  }
}
