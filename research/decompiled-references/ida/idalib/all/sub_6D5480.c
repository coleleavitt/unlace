void __fastcall sub_6D5480(__int64 a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  char *v5; // rbp
  void *v6; // rdi
  void *v7; // rdi
  char *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 j; // r12
  char *v12; // rbp
  void *v13; // rdi
  void *v14; // rdi
  void (__fastcall *v15)(__int64, __int64, __int64); // rax
  void (__fastcall *v16)(__int64, __int64, __int64); // rax
  void (__fastcall *v17)(__int64, __int64, __int64); // rax
  void *v18; // rdi
  char *v19; // rdx
  __int64 v20; // r12
  __int64 k; // rbp
  char *v22; // rax
  void *v23; // rdi
  char *v24; // rdi
  __int64 v25; // r13
  __int64 m; // r12
  char *v27; // rbp
  void *v28; // rdi
  void *v29; // rdi
  _QWORD *v30; // r12
  _QWORD *v31; // r13
  __int64 v32; // rbp
  void *v33; // rdi
  _QWORD *v34; // rbp
  void *v35; // rdi
  void *v36; // rdi
  char *v37; // rdx
  __int64 v38; // r12
  __int64 n; // rbp
  char *v40; // rax
  void *v41; // rdi
  _QWORD *v42; // rbp
  void *v43; // rdi
  void *v44; // rdi
  _QWORD *v45; // rbp
  _QWORD *v46; // r12
  void *v47; // rdi
  void *v48; // rdi
  char *v49; // rdx
  __int64 v50; // r12
  __int64 ii; // rbp
  char *v52; // rax
  void *v53; // rdi
  char *v54; // rdx
  __int64 v55; // r12
  __int64 jj; // rbp
  char *v57; // rax
  void *v58; // rdi
  void *v59; // rdi

  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v2 = *(char **)(a1 + 592);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 600);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[64 * i];
        v6 = *((void **)v5 + 3);
        if ( v6 )
        {
          *((_QWORD *)v5 + 4) = 0;
          qfree(v6);
        }
        v7 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v7);
        }
        v2 = *(char **)(a1 + 592);
      }
    }
    *(_QWORD *)(a1 + 600) = 0;
    qfree(v2);
  }
  v8 = *(char **)(a1 + 560);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 568);
    if ( v9 )
    {
      v10 = 0;
      for ( j = 0; j != v9; ++j )
      {
        v12 = &v8[v10];
        v13 = *(void **)&v8[v10 + 24];
        if ( v13 )
        {
          *((_QWORD *)v12 + 4) = 0;
          qfree(v13);
        }
        v14 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *((_QWORD *)v12 + 1) = 0;
          qfree(v14);
        }
        v8 = *(char **)(a1 + 560);
        v10 += 56;
      }
    }
    *(_QWORD *)(a1 + 568) = 0;
    qfree(v8);
  }
  v15 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 544);
  if ( v15 )
    v15(a1 + 528, a1 + 528, 3);
  v16 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 512);
  if ( v16 )
    v16(a1 + 496, a1 + 496, 3);
  v17 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 480);
  if ( v17 )
    v17(a1 + 464, a1 + 464, 3);
  v18 = *(void **)(a1 + 440);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 448) = 0;
    qfree(v18);
  }
  v19 = *(char **)(a1 + 416);
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 424);
    if ( v20 )
    {
      for ( k = 0; k != v20; ++k )
      {
        v22 = &v19[24 * k];
        v23 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          qfree(v23);
          v19 = *(char **)(a1 + 416);
        }
      }
    }
    *(_QWORD *)(a1 + 424) = 0;
    qfree(v19);
  }
  v24 = *(char **)(a1 + 392);
  if ( v24 )
  {
    v25 = *(_QWORD *)(a1 + 400);
    if ( v25 )
    {
      for ( m = 0; m != v25; ++m )
      {
        v27 = &v24[64 * m];
        clear_tinfo_t(v27 + 48);
        v28 = *((void **)v27 + 3);
        if ( v28 )
        {
          *((_QWORD *)v27 + 4) = 0;
          qfree(v28);
        }
        v29 = *(void **)v27;
        if ( *(_QWORD *)v27 )
        {
          *((_QWORD *)v27 + 1) = 0;
          qfree(v29);
        }
        v24 = *(char **)(a1 + 392);
      }
    }
    *(_QWORD *)(a1 + 400) = 0;
    qfree(v24);
  }
  v30 = *(_QWORD **)(a1 + 336);
  while ( v30 )
  {
    v31 = v30;
    v30 = (_QWORD *)*v30;
    v32 = v31[2];
    if ( v32 )
    {
      operator delete(*(_QWORD *)(v32 + 40), 16LL * *(unsigned int *)(v32 + 56), 8);
      operator delete(*(_QWORD *)(v32 + 16), 16LL * *(unsigned int *)(v32 + 32), 8);
      operator delete((void *)v32, 0x40u);
    }
    operator delete(v31, 0x18u);
  }
  memset(*(void **)(a1 + 320), 0, 8LL * *(_QWORD *)(a1 + 328));
  v33 = *(void **)(a1 + 320);
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  if ( v33 != (void *)(a1 + 368) )
    operator delete(v33, 8LL * *(_QWORD *)(a1 + 328));
  v34 = *(_QWORD **)(a1 + 280);
  while ( v34 )
  {
    v35 = v34;
    v34 = (_QWORD *)*v34;
    operator delete(v35, 0x18u);
  }
  memset(*(void **)(a1 + 264), 0, 8LL * *(_QWORD *)(a1 + 272));
  v36 = *(void **)(a1 + 264);
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  if ( v36 != (void *)(a1 + 312) )
    operator delete(v36, 8LL * *(_QWORD *)(a1 + 272));
  v37 = *(char **)(a1 + 240);
  if ( v37 )
  {
    v38 = *(_QWORD *)(a1 + 248);
    if ( v38 )
    {
      for ( n = 0; n != v38; ++n )
      {
        v40 = &v37[24 * n];
        v41 = *(void **)v40;
        if ( *(_QWORD *)v40 )
        {
          *((_QWORD *)v40 + 1) = 0;
          qfree(v41);
          v37 = *(char **)(a1 + 240);
        }
      }
    }
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v37);
  }
  v42 = *(_QWORD **)(a1 + 200);
  while ( v42 )
  {
    v43 = v42;
    v42 = (_QWORD *)*v42;
    operator delete(v43, 0x10u);
  }
  memset(*(void **)(a1 + 184), 0, 8LL * *(_QWORD *)(a1 + 192));
  v44 = *(void **)(a1 + 184);
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  if ( v44 != (void *)(a1 + 232) )
    operator delete(v44, 8LL * *(_QWORD *)(a1 + 192));
  v45 = *(_QWORD **)(a1 + 144);
  while ( v45 )
  {
    v46 = v45;
    v45 = (_QWORD *)*v45;
    v47 = (void *)v46[1];
    if ( v47 )
    {
      v46[2] = 0;
      qfree(v47);
    }
    operator delete(v46, 0x30u);
  }
  memset(*(void **)(a1 + 128), 0, 8LL * *(_QWORD *)(a1 + 136));
  v48 = *(void **)(a1 + 128);
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  if ( v48 != (void *)(a1 + 176) )
    operator delete(v48, 8LL * *(_QWORD *)(a1 + 136));
  v49 = *(char **)(a1 + 96);
  if ( v49 )
  {
    v50 = *(_QWORD *)(a1 + 104);
    if ( v50 )
    {
      for ( ii = 0; ii != v50; ++ii )
      {
        v52 = &v49[24 * ii];
        v53 = *(void **)v52;
        if ( *(_QWORD *)v52 )
        {
          *((_QWORD *)v52 + 1) = 0;
          qfree(v53);
          v49 = *(char **)(a1 + 96);
        }
      }
    }
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v49);
  }
  v54 = *(char **)(a1 + 72);
  if ( v54 )
  {
    v55 = *(_QWORD *)(a1 + 80);
    if ( v55 )
    {
      for ( jj = 0; jj != v55; ++jj )
      {
        v57 = &v54[24 * jj];
        v58 = *(void **)v57;
        if ( *(_QWORD *)v57 )
        {
          *((_QWORD *)v57 + 1) = 0;
          qfree(v58);
          v54 = *(char **)(a1 + 72);
        }
      }
    }
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v54);
  }
  v59 = *(void **)(a1 + 24);
  if ( v59 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v59);
  }
}
