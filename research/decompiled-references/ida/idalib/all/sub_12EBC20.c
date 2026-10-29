__int64 __fastcall sub_12EBC20(__int64 a1)
{
  __int64 v2; // rdi
  char *v3; // rbp
  char *v4; // r12
  char *v5; // r13
  char *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rbp
  void *v9; // rdi
  __int64 v10; // r12
  void *v11; // rdi
  char *v12; // rdi
  int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // r12
  _QWORD *v16; // rax
  _QWORD *v17; // r13
  _QWORD *v18; // rbp
  volatile signed __int32 *v19; // r12
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  __int64 v22; // rax
  bool v23; // zf
  void *v24; // rbp
  void *v25; // rbp
  void *v26; // rbp
  __int64 v27; // rdi
  void *v28; // rdi
  void (*v29)(void); // rax
  _DWORD *v30; // rdi
  _DWORD *v31; // rbp
  volatile signed __int32 *v32; // rdi
  __int64 v33; // rdi
  _DWORD *v34; // rdi
  _DWORD *v35; // rbp
  _DWORD *v36; // rbp
  _DWORD *v37; // rdi
  __int64 v38; // rbp
  void *v39; // rdi
  void *v40; // rdi
  void *v41; // rdi
  void *v42; // rdi
  void **v43; // r13
  void **v44; // r12
  char *v45; // rdi
  int v46; // eax
  __int64 v47; // r12
  __int64 v48; // r13
  _QWORD *v49; // rax
  int v50; // eax
  char *v51; // rdi
  __int64 v52; // r12
  __int64 v53; // r13
  _QWORD *v54; // rax
  int v55; // eax
  _DWORD *v56; // r12
  int v57; // eax
  void **v58; // r13
  void **v59; // r12
  void **v60; // r13
  void **v61; // r12
  void *v62; // rdi
  void *v63; // rdi
  void *v64; // rdi
  void *v65; // rdi
  void *v66; // rdi
  void *v67; // rdi
  _DWORD *v68; // rdi
  _QWORD *v69; // rbp
  volatile signed __int32 *v70; // rdi

  *(_QWORD *)a1 = &off_2BAFA98;
  v2 = *(_QWORD *)(a1 + 368);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *(char **)(a1 + 344);
  v4 = (char *)(a1 + 344);
  if ( v3 != (char *)(a1 + 344) )
  {
    while ( 1 )
    {
      v5 = *(char **)v3;
      if ( v3[96] )
        sub_228DAE0(v3 + 48);
      v6 = *((char **)v3 + 2);
      if ( v6 == v3 + 32 )
      {
        operator delete(v3);
        if ( v5 == v4 )
          break;
      }
      else
      {
        operator delete(v6);
        operator delete(v3);
        if ( v5 == v4 )
          break;
      }
      v3 = v5;
    }
  }
  v7 = *(_QWORD *)(a1 + 328);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *(_QWORD *)(a1 + 272);
  if ( v8 )
  {
    while ( 1 )
    {
      sub_12DC6A0(a1 + 256, *(_QWORD **)(v8 + 24));
      v9 = *(void **)(v8 + 64);
      v10 = *(_QWORD *)(v8 + 16);
      if ( v9 != (void *)(v8 + 80) )
        operator delete(v9);
      v11 = *(void **)(v8 + 32);
      if ( v11 == (void *)(v8 + 48) )
      {
        operator delete((void *)v8);
        if ( !v10 )
          break;
      }
      else
      {
        operator delete(v11);
        operator delete((void *)v8);
        if ( !v10 )
          break;
      }
      v8 = v10;
    }
  }
  v12 = *(char **)(a1 + 232);
  if ( *(_DWORD *)(a1 + 244) )
  {
    v13 = *(_DWORD *)(a1 + 240);
    if ( v13 )
    {
      v14 = 0;
      v15 = 8LL * (unsigned int)(v13 - 1) + 8;
      do
      {
        v16 = *(_QWORD **)&v12[v14];
        if ( v16 && v16 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v12[v14], *v16 + 9LL, 8);
          v12 = *(char **)(a1 + 232);
        }
        v14 += 8;
      }
      while ( v15 != v14 );
    }
  }
  free(v12);
  v17 = *(_QWORD **)(a1 + 216);
  v18 = *(_QWORD **)(a1 + 208);
  if ( v17 != v18 )
  {
    if ( &_pthread_key_create )
    {
      v19 = (volatile signed __int32 *)v18[1];
      if ( v19 )
        goto LABEL_32;
LABEL_30:
      while ( 1 )
      {
        v18 += 2;
        if ( v17 == v18 )
          break;
        while ( 1 )
        {
          v19 = (volatile signed __int32 *)v18[1];
          if ( !v19 )
            break;
LABEL_32:
          if ( _InterlockedSub(v19 + 2, 1u) )
            goto LABEL_30;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          if ( _InterlockedSub(v19 + 3, 1u) )
            goto LABEL_30;
          v18 += 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 24LL))(v19);
          if ( v17 == v18 )
            goto LABEL_35;
        }
      }
    }
    else
    {
      do
      {
        v56 = (_DWORD *)v18[1];
        if ( v56 )
        {
          v57 = v56[2];
          v56[2] = v57 - 1;
          if ( v57 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v56 + 16LL))(v56);
            v55 = v56[3];
            v56[3] = v55 - 1;
            if ( v55 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v56 + 24LL))(v56);
          }
        }
        v18 += 2;
      }
      while ( v17 != v18 );
    }
LABEL_35:
    v18 = *(_QWORD **)(a1 + 208);
  }
  if ( v18 )
    operator delete(v18);
  v20 = *(volatile signed __int32 **)(a1 + 200);
  if ( v20 )
    sub_4343A0(v20);
  v21 = *(volatile signed __int32 **)(a1 + 184);
  if ( v21 )
    sub_4343A0(v21);
  v22 = *(_QWORD *)(a1 + 168);
  if ( v22 )
  {
    v23 = (*(_DWORD *)(v22 + 32))-- == 1;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v22 + 24) + 8LL))(v22 + 24);
  }
  v24 = *(void **)(a1 + 160);
  if ( v24 )
  {
    sub_224F490(*(_QWORD *)(a1 + 160));
    operator delete(v24, 0xB0u);
  }
  v25 = *(void **)(a1 + 152);
  if ( v25 )
  {
    sub_2251F50(*(void **)(a1 + 152));
    operator delete(v25, 0x70u);
  }
  v26 = *(void **)(a1 + 144);
  if ( v26 )
  {
    sub_1602330(*(_QWORD *)(a1 + 144));
    operator delete(v26, 0x4420u);
  }
  v27 = *(_QWORD *)(a1 + 136);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  v28 = *(void **)(a1 + 128);
  if ( v28 )
  {
    v29 = *(void (**)(void))(*(_QWORD *)v28 + 8LL);
    if ( (char *)v29 == (char *)sub_A55C70 )
      operator delete(v28, 0x10u);
    else
      v29();
  }
  v30 = *(_DWORD **)(a1 + 120);
  if ( v30 )
  {
    v23 = v30[2]-- == 1;
    if ( v23 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v30 + 8LL))(v30);
  }
  v31 = *(_DWORD **)(a1 + 112);
  if ( v31 )
  {
    v23 = (*v31)-- == 1;
    if ( v23 )
    {
      sub_A8A9B0((__int64)v31);
      operator delete(v31, 0x5B58u);
    }
  }
  v32 = *(volatile signed __int32 **)(a1 + 104);
  if ( v32 )
    sub_4343A0(v32);
  v33 = *(_QWORD *)(a1 + 88);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 24LL))(v33);
  v34 = *(_DWORD **)(a1 + 80);
  if ( v34 )
  {
    v23 = v34[2]-- == 1;
    if ( v23 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v34 + 56LL))(v34);
  }
  v35 = *(_DWORD **)(a1 + 72);
  if ( v35 )
  {
    v23 = (*v35)-- == 1;
    if ( v23 )
    {
      sub_101EB00((__int64)v35);
      operator delete(v35, 0x300u);
    }
  }
  v36 = *(_DWORD **)(a1 + 64);
  if ( v36 )
  {
    v23 = (*v36)-- == 1;
    if ( v23 )
    {
      sub_FD6C20((__int64)v36);
      operator delete(v36, 0x328u);
    }
  }
  v37 = *(_DWORD **)(a1 + 56);
  if ( v37 )
  {
    v23 = v37[50]-- == 1;
    if ( v23 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v37 + 8LL))(v37);
  }
  v38 = *(_QWORD *)(a1 + 48);
  if ( v38 )
  {
    v39 = *(void **)(v38 + 504);
    if ( v39 != (void *)(v38 + 520) )
      operator delete(v39);
    v40 = *(void **)(v38 + 472);
    if ( v40 != (void *)(v38 + 488) )
      operator delete(v40);
    v41 = *(void **)(v38 + 424);
    if ( v41 != (void *)(v38 + 440) )
      operator delete(v41);
    v42 = *(void **)(v38 + 368);
    if ( v42 != (void *)(v38 + 384) )
      operator delete(v42);
    v43 = *(void ***)(v38 + 336);
    v44 = *(void ***)(v38 + 328);
    if ( v43 != v44 )
    {
      do
      {
        while ( *v44 != v44 + 2 )
        {
          operator delete(*v44);
          v44 += 4;
          if ( v44 == v43 )
          {
            v44 = *(void ***)(v38 + 328);
            goto LABEL_91;
          }
        }
        v44 += 4;
      }
      while ( v43 != v44 );
      v44 = *(void ***)(v38 + 328);
    }
LABEL_91:
    if ( v44 )
      operator delete(v44);
    v45 = *(char **)(v38 + 304);
    if ( *(_DWORD *)(v38 + 316) )
    {
      v46 = *(_DWORD *)(v38 + 312);
      if ( v46 )
      {
        v47 = 0;
        v48 = 8LL * (unsigned int)(v46 - 1) + 8;
        do
        {
          v49 = *(_QWORD **)&v45[v47];
          if ( v49 != (_QWORD *)-8LL && v49 )
          {
            operator delete(*(_QWORD *)&v45[v47], *v49 + 17LL, 8);
            v45 = *(char **)(v38 + 304);
          }
          v47 += 8;
        }
        while ( v47 != v48 );
      }
    }
    free(v45);
    if ( *(_DWORD *)(v38 + 292) )
    {
      v50 = *(_DWORD *)(v38 + 288);
      v51 = *(char **)(v38 + 280);
      if ( v50 )
      {
        v52 = 0;
        v53 = 8LL * (unsigned int)(v50 - 1) + 8;
        do
        {
          v54 = *(_QWORD **)&v51[v52];
          if ( v54 != (_QWORD *)-8LL && v54 )
          {
            operator delete(*(_QWORD *)&v51[v52], *v54 + 17LL, 8);
            v51 = *(char **)(v38 + 280);
          }
          v52 += 8;
        }
        while ( v53 != v52 );
      }
    }
    else
    {
      v51 = *(char **)(v38 + 280);
    }
    free(v51);
    v58 = *(void ***)(v38 + 264);
    v59 = *(void ***)(v38 + 256);
    if ( v58 != v59 )
    {
      do
      {
        while ( *v59 != v59 + 2 )
        {
          operator delete(*v59);
          v59 += 4;
          if ( v58 == v59 )
            goto LABEL_120;
        }
        v59 += 4;
      }
      while ( v58 != v59 );
LABEL_120:
      v59 = *(void ***)(v38 + 256);
    }
    if ( v59 )
      operator delete(v59);
    v60 = *(void ***)(v38 + 240);
    v61 = *(void ***)(v38 + 232);
    if ( v60 != v61 )
    {
      do
      {
        while ( *v61 != v61 + 2 )
        {
          operator delete(*v61);
          v61 += 4;
          if ( v61 == v60 )
            goto LABEL_126;
        }
        v61 += 4;
      }
      while ( v60 != v61 );
LABEL_126:
      v61 = *(void ***)(v38 + 232);
    }
    if ( v61 )
      operator delete(v61);
    v62 = *(void **)(v38 + 200);
    if ( v62 != (void *)(v38 + 216) )
      operator delete(v62);
    v63 = *(void **)(v38 + 160);
    if ( v63 != (void *)(v38 + 176) )
      operator delete(v63);
    v64 = *(void **)(v38 + 128);
    if ( v64 != (void *)(v38 + 144) )
      operator delete(v64);
    v65 = *(void **)(v38 + 96);
    if ( v65 != (void *)(v38 + 112) )
      operator delete(v65);
    v66 = *(void **)(v38 + 64);
    if ( v66 != (void *)(v38 + 80) )
      operator delete(v66);
    v67 = *(void **)(v38 + 32);
    if ( v67 != (void *)(v38 + 48) )
      operator delete(v67);
    if ( *(_QWORD *)v38 != v38 + 16 )
      operator delete(*(void **)v38);
    operator delete((void *)v38, 0x218u);
  }
  v68 = *(_DWORD **)(a1 + 40);
  if ( v68 )
  {
    v23 = v68[50]-- == 1;
    if ( v23 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v68 + 8LL))(v68);
  }
  v69 = *(_QWORD **)(a1 + 32);
  if ( v69 )
  {
    v23 = (*(_DWORD *)v69)-- == 1;
    if ( v23 )
    {
      sub_FCAA60(v69);
      operator delete(v69, 0x3B90u);
    }
  }
  v70 = *(volatile signed __int32 **)(a1 + 24);
  if ( v70 )
    sub_4343A0(v70);
  return nullsub_686(a1);
}
