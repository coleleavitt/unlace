void __fastcall sub_961890(__int64 a1)
{
  void *v2; // rbp
  void *v3; // rbp
  unsigned int *v4; // r13
  _QWORD *v5; // rbp
  __int64 v6; // rax
  _QWORD *v7; // r12
  void *v8; // rdi
  void (*v9)(void); // rax
  __int64 v10; // rbp
  __int64 v11; // r12
  char *v12; // rbp
  char *v13; // r12
  void *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r13
  void *v19; // rdi
  void *v20; // rbp
  void *v21; // rbp
  _QWORD *v22; // rbp
  void *v23; // rdi
  __int64 v24; // r12
  _QWORD *v25; // rbx
  void *v26; // rdi
  __int64 v27; // rbp
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // r12
  __int64 v30; // r15
  __int64 v31; // r13
  char *v32; // r13
  char *v33; // r14
  void *v34; // rdi
  __int64 v35; // r14
  __int64 v36; // r12
  char *v37; // r12
  char *v38; // r13
  void *v39; // rdi

  v2 = *(void **)(a1 + 112);
  if ( v2 )
  {
    operator delete();
    operator delete(v2, 0x18u);
  }
  v3 = *(void **)(a1 + 240);
  if ( v3 )
  {
    operator delete();
    operator delete(v3, 0x18u);
  }
  v4 = *(unsigned int **)(a1 + 248);
  if ( v4 )
  {
    v5 = *(_QWORD **)v4;
    v6 = v4[4];
    if ( (_DWORD)v6 )
    {
      v7 = &v5[2 * v6];
      do
      {
        if ( *v5 != -4096 && *v5 != -8192 )
        {
          v8 = (void *)v5[1];
          if ( v8 )
          {
            v9 = *(void (**)(void))(*(_QWORD *)v8 + 8LL);
            if ( (char *)v9 == (char *)sub_9606F0 )
              operator delete(v8, 8u);
            else
              v9();
          }
        }
        v5 += 2;
      }
      while ( v7 != v5 );
    }
    operator delete();
    operator delete(v4, 0x18u);
  }
  v10 = *(_QWORD *)(a1 + 160);
  v11 = v10 + 8LL * *(unsigned int *)(a1 + 168);
  while ( v11 != v10 )
  {
    v10 += 8;
    operator delete();
  }
  v12 = *(char **)(a1 + 208);
  v13 = &v12[16 * *(unsigned int *)(a1 + 216)];
  if ( v12 != v13 )
  {
    do
    {
      v12 += 16;
      operator delete();
    }
    while ( v13 != v12 );
    v13 = *(char **)(a1 + 208);
  }
  if ( v13 != (char *)(a1 + 224) )
    free(v13);
  v14 = *(void **)(a1 + 160);
  if ( v14 != (void *)(a1 + 176) )
    free(v14);
  v15 = *(_QWORD *)(a1 + 136);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 72);
    v17 = *(unsigned int *)(v15 + 88);
    if ( (_DWORD)v17 )
    {
      v18 = v16 + 80 * v17;
      do
      {
        while ( 1 )
        {
          if ( (unsigned int)(*(_DWORD *)v16 + 2) > 1 )
          {
            v19 = *(void **)(v16 + 8);
            if ( v19 != (void *)(v16 + 24) )
              break;
          }
          v16 += 80;
          if ( v18 == v16 )
            goto LABEL_31;
        }
        free(v19);
        v16 += 80;
      }
      while ( v18 != v16 );
    }
LABEL_31:
    operator delete();
    if ( *(_QWORD *)v15 != v15 + 16 )
      free(*(void **)v15);
    operator delete((void *)v15, 0x60u);
  }
  v20 = *(void **)(a1 + 128);
  if ( v20 )
  {
    sub_EA1E10(*(_QWORD *)(a1 + 128));
    operator delete(v20, 8u);
  }
  v21 = *(void **)(a1 + 32);
  if ( v21 )
  {
    sub_985190(*(_QWORD *)(a1 + 32));
    operator delete(v21, 0x10u);
  }
  v22 = *(_QWORD **)(a1 + 24);
  if ( v22 )
  {
    operator delete();
    v23 = (void *)v22[8];
    if ( v23 )
      operator delete(v23);
    v24 = v22[4];
    if ( (v24 & 4) != 0 )
    {
      v29 = v24 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 16);
        v31 = v30 + 8LL * *(unsigned int *)(v29 + 24);
        while ( v31 != v30 )
        {
          v30 += 8;
          operator delete();
        }
        v32 = *(char **)(v29 + 64);
        v33 = &v32[16 * *(unsigned int *)(v29 + 72)];
        if ( v32 != v33 )
        {
          do
          {
            v32 += 16;
            operator delete();
          }
          while ( v33 != v32 );
          v33 = *(char **)(v29 + 64);
        }
        if ( v33 != (char *)(v29 + 80) )
          free(v33);
        v34 = *(void **)(v29 + 16);
        if ( v34 != (void *)(v29 + 32) )
          free(v34);
        operator delete((void *)v29, 0x60u);
      }
    }
    operator delete(v22, 0x70u);
  }
  v25 = *(_QWORD **)(a1 + 16);
  if ( v25 )
  {
    operator delete();
    v26 = (void *)v25[8];
    if ( v26 )
      operator delete(v26);
    v27 = v25[4];
    if ( (v27 & 4) != 0 )
    {
      v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v28 )
      {
        v35 = *(_QWORD *)(v28 + 16);
        v36 = v35 + 8LL * *(unsigned int *)(v28 + 24);
        while ( v36 != v35 )
        {
          v35 += 8;
          operator delete();
        }
        v37 = *(char **)(v28 + 64);
        v38 = &v37[16 * *(unsigned int *)(v28 + 72)];
        if ( v37 != v38 )
        {
          do
          {
            v37 += 16;
            operator delete();
          }
          while ( v38 != v37 );
          v38 = *(char **)(v28 + 64);
        }
        if ( v38 != (char *)(v28 + 80) )
          free(v38);
        v39 = *(void **)(v28 + 16);
        if ( v39 != (void *)(v28 + 32) )
          free(v39);
        operator delete((void *)v28, 0x60u);
      }
    }
    operator delete(v25, 0x70u);
  }
}

