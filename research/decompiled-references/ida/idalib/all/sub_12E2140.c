void __fastcall sub_12E2140(__int64 a1)
{
  __int64 v2; // rdi
  void (*v3)(void); // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 i; // r12
  __int64 v8; // rdi
  char *v9; // rdi
  int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // r12
  _QWORD *v13; // rax
  void *v14; // rdi
  unsigned int *v15; // rbp
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rdi
  void *v18; // rdi
  __int64 v19; // rdi
  char *v20; // rdi
  _QWORD *v21; // r14
  _QWORD *v22; // rbp
  _QWORD *v23; // rdi
  _QWORD *v24; // r13
  _QWORD *v25; // r12
  char *v26; // rdi
  void *v27; // rdi
  _QWORD *v28; // rdi
  _QWORD *v29; // r14
  _QWORD *v30; // rbp
  _QWORD *v31; // rdi
  _QWORD *v32; // r13
  _QWORD *v33; // r12
  char *v34; // rdi
  void *v35; // rdi
  _QWORD *v36; // rdi
  _QWORD *v37; // r13
  _QWORD *v38; // rbp
  _QWORD *v39; // rdi
  _QWORD *v40; // r14
  _QWORD *v41; // r12
  char *v42; // rdi
  void *v43; // rdi
  _QWORD *v44; // rdi
  _QWORD *v45; // rdi
  void *v46; // rdi
  __int64 v47; // rbp
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // r12
  void **v51; // r13
  void *v52; // rdi
  volatile signed __int32 *v53; // rdi
  volatile signed __int32 *v54; // rdi
  volatile signed __int32 *v55; // rdi
  void *v56; // rbp
  __int64 v57; // rdi
  void *v58; // rdi
  void *v59; // rdi
  void **v60; // rbp
  __int64 v61; // rax
  bool v62; // zf
  volatile signed __int32 *v63; // rdi
  __int64 v64; // r12
  void **v65; // r13
  void **v66; // rbp
  void *v67; // rdi
  void **v68; // rbp
  __int64 v69; // rax
  __int64 v70; // rsi
  void **v71; // r13
  void *v72; // rdi
  void *v73; // rdi
  __int64 v74; // rbp
  void *v75; // rdi
  __int64 v76; // r13
  void *v77; // rdi
  int v78; // eax
  __int64 v79; // rbp
  __int64 v80; // r12
  _QWORD *v81; // rax
  void *v82; // rdi
  void *v83; // rdi
  void *v84; // rdi
  void **v85; // r13
  void **v86; // rbp
  void **v87; // r13
  void **v88; // rbp
  volatile signed __int32 *v89; // rdi
  _DWORD *v90; // rbp
  volatile signed __int32 *v91; // rdi
  _DWORD *v92; // rdi
  __int64 v93; // r12
  __int64 v94; // rax
  _QWORD *v95; // rbp
  _QWORD *v96; // r13
  _QWORD *v97; // rdi
  _QWORD *v98; // r14
  _QWORD *v99; // rbp
  _QWORD *v100; // r13
  char *v101; // rdi
  int v102; // eax
  __int64 v103; // r15
  _QWORD *v104; // rax
  __int64 v105; // rbp
  int v106; // eax
  __int64 v107; // r13
  __int64 v108; // r14
  __int64 v109; // rax
  void *v110; // rdi
  void *v111; // rdi
  void *v112; // rdi
  void *v113; // rdi
  void **v114; // r13
  void **v115; // rbp
  void *v116; // rdi
  void *v117; // rdi
  _DWORD *v118; // rdi
  _DWORD *v119; // rbp
  _DWORD *v120; // rbp
  _DWORD *v121; // rdi
  volatile signed __int32 *v122; // rdi
  __int64 v123; // rbp
  void *v124; // rdi
  void *v125; // rdi
  void *v126; // rdi
  void *v127; // rdi
  void **v128; // r12
  void **v129; // rbx
  __int64 v130; // rbx
  void *v131; // rdi
  __int64 v132; // r12
  void *v133; // rdi
  void *v134; // rdi
  void *v135; // rdi
  void *v136; // rdi
  void *v137; // rdi
  __int64 v138; // [rsp+8h] [rbp-40h]

  if ( *(_BYTE *)(a1 + 312) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    if ( v2 )
    {
      v3 = *(void (**)(void))(*(_QWORD *)v2 + 32LL);
      if ( v3 != nullsub_556 )
        v3();
    }
  }
  sub_12DBF20((__int64 *)(a1 + 352));
  v4 = *(_QWORD *)(a1 + 240);
  if ( v4 )
  {
    if ( *(_BYTE *)(a1 + 321) )
    {
      v5 = *(_QWORD *)(v4 + 64);
      v6 = *(_QWORD *)(v5 + 264);
      for ( i = *(_QWORD *)(v5 + 272); i != v6; v6 += 40 )
      {
        v8 = *(_QWORD *)(v6 + 32);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
  }
  sub_12DC360(a1);
  if ( getenv("LIBCLANG_OBJTRACKING") )
    fprintf(stderr, "--- %u translation units\n", _InterlockedDecrement(&dword_2CD89AC));
  v9 = *(char **)(a1 + 2032);
  if ( *(_DWORD *)(a1 + 2044) )
  {
    v10 = *(_DWORD *)(a1 + 2040);
    if ( v10 )
    {
      v11 = 0;
      v12 = 8LL * (unsigned int)(v10 - 1) + 8;
      do
      {
        v13 = *(_QWORD **)&v9[v11];
        if ( v13 != (_QWORD *)-8LL && v13 )
        {
          operator delete(*(_QWORD *)&v9[v11], *v13 + 17LL, 8);
          v9 = *(char **)(a1 + 2032);
        }
        v11 += 8;
      }
      while ( v12 != v11 );
    }
  }
  free(v9);
  v14 = *(void **)(a1 + 2008);
  if ( v14 )
    operator delete(v14);
  v15 = *(unsigned int **)(a1 + 2000);
  if ( v15 )
  {
    v16 = *((volatile signed __int32 **)v15 + 4);
    if ( v16 )
      sub_4343A0(v16);
    operator delete(*(_QWORD *)v15, 24LL * v15[4], 8);
    operator delete(v15, 0x28u);
  }
  v17 = *(volatile signed __int32 **)(a1 + 1992);
  if ( v17 )
    sub_4343A0(v17);
  v18 = *(void **)(a1 + 1952);
  if ( v18 )
    operator delete(v18);
  v19 = *(_QWORD *)(a1 + 1936);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  if ( *(_BYTE *)(a1 + 1928) )
    sub_1392D90(a1 + 1840);
  v20 = *(char **)(a1 + 1816);
  if ( *(_DWORD *)(a1 + 1828) )
  {
    v78 = *(_DWORD *)(a1 + 1824);
    if ( v78 )
    {
      v79 = 0;
      v80 = 8LL * (unsigned int)(v78 - 1) + 8;
      do
      {
        v81 = *(_QWORD **)&v20[v79];
        if ( v81 && v81 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v20[v79], *v81 + 17LL, 8);
          v20 = *(char **)(a1 + 1816);
        }
        v79 += 8;
      }
      while ( v80 != v79 );
    }
  }
  free(v20);
  v21 = *(_QWORD **)(a1 + 1368);
  v22 = &v21[13 * *(unsigned int *)(a1 + 1376)];
  if ( v21 != v22 )
  {
    do
    {
      while ( 1 )
      {
        v22 -= 13;
        v23 = (_QWORD *)v22[10];
        v24 = (_QWORD *)v22[11];
        v25 = v23;
        if ( v24 != v23 )
        {
          do
          {
            while ( 1 )
            {
              v26 = (char *)v25[3];
              if ( v26 == (char *)(v25 + 5) )
                break;
              operator delete(v26);
              v25 += 8;
              if ( v24 == v25 )
                goto LABEL_39;
            }
            v25 += 8;
          }
          while ( v24 != v25 );
LABEL_39:
          v23 = (_QWORD *)v22[10];
        }
        if ( v23 )
          operator delete(v23);
        v27 = (void *)v22[7];
        if ( v27 )
          operator delete(v27);
        v28 = (_QWORD *)v22[3];
        if ( v28 == v22 + 5 )
          break;
        operator delete(v28);
        if ( v21 == v22 )
          goto LABEL_46;
      }
    }
    while ( v21 != v22 );
LABEL_46:
    v22 = *(_QWORD **)(a1 + 1368);
  }
  if ( v22 != (_QWORD *)(a1 + 1384) )
    free(v22);
  v29 = *(_QWORD **)(a1 + 936);
  v30 = &v29[13 * *(unsigned int *)(a1 + 944)];
  if ( v29 != v30 )
  {
    do
    {
      while ( 1 )
      {
        v30 -= 13;
        v31 = (_QWORD *)v30[10];
        v32 = (_QWORD *)v30[11];
        v33 = v31;
        if ( v32 != v31 )
        {
          do
          {
            while ( 1 )
            {
              v34 = (char *)v33[3];
              if ( v34 == (char *)(v33 + 5) )
                break;
              operator delete(v34);
              v33 += 8;
              if ( v32 == v33 )
                goto LABEL_53;
            }
            v33 += 8;
          }
          while ( v32 != v33 );
LABEL_53:
          v31 = (_QWORD *)v30[10];
        }
        if ( v31 )
          operator delete(v31);
        v35 = (void *)v30[7];
        if ( v35 )
          operator delete(v35);
        v36 = (_QWORD *)v30[3];
        if ( v36 == v30 + 5 )
          break;
        operator delete(v36);
        if ( v29 == v30 )
          goto LABEL_60;
      }
    }
    while ( v29 != v30 );
LABEL_60:
    v30 = *(_QWORD **)(a1 + 936);
  }
  if ( v30 != (_QWORD *)(a1 + 952) )
    free(v30);
  v37 = *(_QWORD **)(a1 + 408);
  v38 = &v37[16 * (unsigned __int64)*(unsigned int *)(a1 + 416)];
  if ( v37 != v38 )
  {
    do
    {
      while ( 1 )
      {
        v38 -= 16;
        v39 = (_QWORD *)v38[13];
        v40 = (_QWORD *)v38[14];
        v41 = v39;
        if ( v40 != v39 )
        {
          do
          {
            while ( 1 )
            {
              v42 = (char *)v41[2];
              if ( v42 == (char *)(v41 + 4) )
                break;
              operator delete(v42);
              v41 += 7;
              if ( v40 == v41 )
                goto LABEL_67;
            }
            v41 += 7;
          }
          while ( v40 != v41 );
LABEL_67:
          v39 = (_QWORD *)v38[13];
        }
        if ( v39 )
          operator delete(v39);
        v43 = (void *)v38[10];
        if ( v43 )
          operator delete(v43);
        v44 = (_QWORD *)v38[5];
        if ( v44 != v38 + 7 )
          operator delete(v44);
        v45 = (_QWORD *)v38[1];
        if ( v45 == v38 + 3 )
          break;
        operator delete(v45);
        if ( v37 == v38 )
          goto LABEL_76;
      }
    }
    while ( v37 != v38 );
LABEL_76:
    v38 = *(_QWORD **)(a1 + 408);
  }
  if ( v38 != (_QWORD *)(a1 + 424) )
    free(v38);
  v46 = *(void **)(a1 + 376);
  if ( v46 != (void *)(a1 + 392) )
    operator delete(v46);
  v47 = *(_QWORD *)(a1 + 352);
  v48 = *(unsigned int *)(a1 + 368);
  v49 = 16 * v48;
  if ( (_DWORD)v48 )
  {
    v50 = v47 + v49;
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v47 + 1) > 1 )
        {
          v51 = *(void ***)(v47 + 8);
          if ( v51 )
            break;
        }
        v47 += 16;
        if ( v50 == v47 )
          goto LABEL_89;
      }
      if ( *v51 != v51 + 2 )
        free(*v51);
      v47 += 16;
      operator delete(v51, 0x410u);
    }
    while ( v50 != v47 );
LABEL_89:
    v47 = *(_QWORD *)(a1 + 352);
    v49 = 16LL * *(unsigned int *)(a1 + 368);
  }
  operator delete(v47, v49, 8);
  v52 = *(void **)(a1 + 328);
  if ( v52 )
    operator delete(v52);
  *(_QWORD *)(a1 + 288) = &off_2BAF8F0;
  nullsub_686(a1 + 288);
  v53 = *(volatile signed __int32 **)(a1 + 280);
  if ( v53 )
    sub_4343A0(v53);
  v54 = *(volatile signed __int32 **)(a1 + 264);
  if ( v54 )
    sub_4343A0(v54);
  v55 = *(volatile signed __int32 **)(a1 + 248);
  if ( v55 )
    sub_4343A0(v55);
  v56 = *(void **)(a1 + 232);
  if ( v56 )
  {
    sub_1602330(*(_QWORD *)(a1 + 232));
    operator delete(v56, 0x4420u);
  }
  v57 = *(_QWORD *)(a1 + 224);
  if ( v57 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 8LL))(v57);
  v58 = *(void **)(a1 + 192);
  if ( v58 != (void *)(a1 + 208) )
    operator delete(v58);
  v59 = *(void **)(a1 + 160);
  if ( v59 != (void *)(a1 + 176) )
    operator delete(v59);
  v60 = *(void ***)(a1 + 152);
  if ( v60 )
  {
    sub_1F6C190(v60 + 38);
    sub_12DB5C0((__int64)(v60 + 19));
    if ( *v60 != v60 + 3 )
      free(*v60);
    operator delete(v60, 0xF38u);
  }
  v61 = *(_QWORD *)(a1 + 136);
  if ( v61 )
  {
    v62 = (*(_DWORD *)(v61 + 32))-- == 1;
    if ( v62 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v61 + 24) + 8LL))(v61 + 24);
  }
  v63 = *(volatile signed __int32 **)(a1 + 128);
  if ( v63 )
    sub_4343A0(v63);
  v64 = *(_QWORD *)(a1 + 112);
  if ( v64 )
  {
    sub_9B4A30((void ***)(v64 + 600));
    v65 = *(void ***)(v64 + 328);
    v66 = &v65[2 * *(unsigned int *)(v64 + 336)];
    if ( v65 != v66 )
    {
      do
      {
        while ( 1 )
        {
          v66 -= 2;
          v67 = *v66;
          if ( (char *)*v66 + 4096 != nullptr && (char *)*v66 + 0x2000 != nullptr )
          {
            if ( v67 )
              break;
          }
          if ( v65 == v66 )
          {
            v66 = *(void ***)(v64 + 328);
            goto LABEL_121;
          }
        }
        operator delete[](v67);
      }
      while ( v65 != v66 );
      v66 = *(void ***)(v64 + 328);
    }
LABEL_121:
    if ( v66 != (void **)(v64 + 344) )
      free(v66);
    v68 = *(void ***)(v64 + 304);
    v69 = *(unsigned int *)(v64 + 320);
    v70 = 16 * v69;
    v71 = &v68[2 * v69];
    if ( (_DWORD)v69 )
    {
      do
      {
        while ( 1 )
        {
          v72 = *v68;
          if ( (char *)*v68 + 4096 != nullptr && (char *)*v68 + 0x2000 != nullptr )
          {
            if ( v72 )
              break;
          }
          v68 += 2;
          if ( v71 == v68 )
            goto LABEL_127;
        }
        operator delete[](v72);
        v68 += 2;
      }
      while ( v71 != v68 );
LABEL_127:
      v68 = *(void ***)(v64 + 304);
      v70 = 16LL * *(unsigned int *)(v64 + 320);
    }
    operator delete(v68, v70, 8);
    v73 = *(void **)(v64 + 248);
    if ( v73 != (void *)(v64 + 264) )
      operator delete(v73);
    sub_9B4A30((void ***)(v64 + 224));
    v74 = *(_QWORD *)(v64 + 192);
    if ( v74 )
    {
      while ( 1 )
      {
        sub_12DC6A0(v64 + 176, *(_QWORD **)(v74 + 24));
        v75 = *(void **)(v74 + 64);
        v76 = *(_QWORD *)(v74 + 16);
        if ( v75 != (void *)(v74 + 80) )
          operator delete(v75);
        v77 = *(void **)(v74 + 32);
        if ( v77 == (void *)(v74 + 48) )
        {
          operator delete((void *)v74);
          if ( !v76 )
            break;
        }
        else
        {
          operator delete(v77);
          operator delete((void *)v74);
          if ( !v76 )
            break;
        }
        v74 = v76;
      }
    }
    v82 = *(void **)(v64 + 144);
    if ( v82 != (void *)(v64 + 160) )
      operator delete(v82);
    v83 = *(void **)(v64 + 112);
    if ( v83 != (void *)(v64 + 128) )
      operator delete(v83);
    v84 = *(void **)(v64 + 80);
    if ( v84 != (void *)(v64 + 96) )
      operator delete(v84);
    v85 = *(void ***)(v64 + 64);
    v86 = *(void ***)(v64 + 56);
    if ( v85 != v86 )
    {
      do
      {
        while ( *v86 != v86 + 2 )
        {
          operator delete(*v86);
          v86 += 5;
          if ( v86 == v85 )
          {
            v86 = *(void ***)(v64 + 56);
            goto LABEL_166;
          }
        }
        v86 += 5;
      }
      while ( v85 != v86 );
      v86 = *(void ***)(v64 + 56);
    }
LABEL_166:
    if ( v86 )
      operator delete(v86);
    v87 = *(void ***)(v64 + 40);
    v88 = *(void ***)(v64 + 32);
    if ( v87 != v88 )
    {
      do
      {
        while ( *v88 != v88 + 2 )
        {
          operator delete(*v88);
          v88 += 5;
          if ( v88 == v87 )
          {
            v88 = *(void ***)(v64 + 32);
            goto LABEL_172;
          }
        }
        v88 += 5;
      }
      while ( v87 != v88 );
      v88 = *(void ***)(v64 + 32);
    }
LABEL_172:
    if ( v88 )
      operator delete(v88);
    if ( *(_QWORD *)v64 != v64 + 16 )
      operator delete(*(void **)v64);
    operator delete((void *)v64, 0x278u);
  }
  v89 = *(volatile signed __int32 **)(a1 + 104);
  if ( v89 )
    sub_4343A0(v89);
  v90 = *(_DWORD **)(a1 + 88);
  if ( v90 )
  {
    v62 = (*v90)-- == 1;
    if ( v62 )
    {
      sub_A8A9B0((__int64)v90);
      operator delete(v90, 0x5B58u);
    }
  }
  v91 = *(volatile signed __int32 **)(a1 + 80);
  if ( v91 )
    sub_4343A0(v91);
  v92 = *(_DWORD **)(a1 + 64);
  if ( v92 )
  {
    v62 = v92[50]-- == 1;
    if ( v62 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v92 + 8LL))(v92);
  }
  v93 = *(_QWORD *)(a1 + 56);
  if ( v93 )
  {
    sub_9B7090(v93 + 1416);
    free(*(void **)(v93 + 1392));
    v94 = *(unsigned int *)(v93 + 1384);
    if ( (_DWORD)v94 )
    {
      v95 = *(_QWORD **)(v93 + 1368);
      v96 = &v95[12 * v94];
      do
      {
        if ( *v95 != -4096 && *v95 != -8192 )
        {
          v97 = (_QWORD *)v95[1];
          if ( v97 != v95 + 4 )
            free(v97);
        }
        v95 += 12;
      }
      while ( v96 != v95 );
      v94 = *(unsigned int *)(v93 + 1384);
    }
    operator delete(*(_QWORD *)(v93 + 1368), 96 * v94, 8);
    operator delete(*(_QWORD *)(v93 + 1344), 16LL * *(unsigned int *)(v93 + 1360), 8);
    operator delete(*(_QWORD *)(v93 + 1320), 16LL * *(unsigned int *)(v93 + 1336), 8);
    operator delete(*(_QWORD *)(v93 + 1296), 24LL * *(unsigned int *)(v93 + 1312), 8);
    sub_13F3340(v93 + 632);
    v98 = *(_QWORD **)(v93 + 616);
    v99 = *(_QWORD **)(v93 + 608);
    if ( v98 != v99 )
    {
      do
      {
        v100 = (_QWORD *)v99[1];
        if ( v100 )
        {
          v101 = (char *)v100[2];
          if ( *((_DWORD *)v100 + 7) )
          {
            v102 = *((_DWORD *)v100 + 6);
            if ( v102 )
            {
              v103 = 0;
              v138 = 8LL * (unsigned int)(v102 - 1) + 8;
              do
              {
                v104 = *(_QWORD **)&v101[v103];
                if ( v104 && v104 != (_QWORD *)-8LL )
                {
                  operator delete(*(_QWORD *)&v101[v103], *v104 + 25LL, 8);
                  v101 = (char *)v100[2];
                }
                v103 += 8;
              }
              while ( v138 != v103 );
            }
          }
          free(v101);
          if ( *v100 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v100 + 8LL))(*v100);
          operator delete(v100, 0x28u);
        }
        v99 += 2;
      }
      while ( v98 != v99 );
      v99 = *(_QWORD **)(v93 + 608);
    }
    if ( v99 )
      operator delete(v99);
    v105 = *(_QWORD *)(v93 + 600);
    if ( v105 )
    {
      if ( *(_DWORD *)(v105 + 12) )
      {
        v106 = *(_DWORD *)(v105 + 8);
        if ( v106 )
        {
          v107 = 0;
          v108 = 8LL * (unsigned int)(v106 - 1) + 8;
          do
          {
            v109 = *(_QWORD *)(*(_QWORD *)v105 + v107);
            if ( v109 != -8 )
            {
              if ( v109 )
              {
                v110 = *(void **)(v109 + 8);
                if ( v110 != (void *)(v109 + 24) )
                  operator delete(v110);
              }
            }
            v107 += 8;
          }
          while ( v108 != v107 );
        }
      }
      sub_9B7090(v105 + 24);
      free(*(void **)v105);
      operator delete((void *)v105, 0x78u);
    }
    sub_9B7090(v93 + 504);
    free(*(void **)(v93 + 480));
    sub_9B7090(v93 + 384);
    free(*(void **)(v93 + 360));
    v111 = *(void **)(v93 + 336);
    if ( v111 )
      operator delete(v111);
    v112 = *(void **)(v93 + 304);
    if ( v112 != (void *)(v93 + 320) )
      operator delete(v112);
    v113 = *(void **)(v93 + 272);
    if ( v113 != (void *)(v93 + 288) )
      operator delete(v113);
    v114 = *(void ***)(v93 + 256);
    v115 = *(void ***)(v93 + 248);
    if ( v114 != v115 )
    {
      do
      {
        while ( *v115 != v115 + 2 )
        {
          operator delete(*v115);
          v115 += 5;
          if ( v115 == v114 )
          {
            v115 = *(void ***)(v93 + 248);
            goto LABEL_232;
          }
        }
        v115 += 5;
      }
      while ( v114 != v115 );
      v115 = *(void ***)(v93 + 248);
    }
LABEL_232:
    if ( v115 )
      operator delete(v115);
    sub_9B7090(v93 + 144);
    free(*(void **)(v93 + 120));
    v116 = *(void **)(v93 + 72);
    if ( v116 )
      operator delete(v116);
    v117 = *(void **)(v93 + 48);
    if ( v117 )
      operator delete(v117);
    operator delete(*(_QWORD *)(v93 + 8), 8LL * *(unsigned int *)(v93 + 24), 4);
    operator delete((void *)v93, 0x5F8u);
  }
  v118 = *(_DWORD **)(a1 + 48);
  if ( v118 )
  {
    v62 = v118[2]-- == 1;
    if ( v62 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v118 + 56LL))(v118);
  }
  v119 = *(_DWORD **)(a1 + 40);
  if ( v119 )
  {
    v62 = (*v119)-- == 1;
    if ( v62 )
    {
      sub_101EB00((__int64)v119);
      operator delete(v119, 0x300u);
    }
  }
  v120 = *(_DWORD **)(a1 + 32);
  if ( v120 )
  {
    v62 = (*v120)-- == 1;
    if ( v62 )
    {
      sub_FD6C20((__int64)v120);
      operator delete(v120, 0x328u);
    }
  }
  v121 = *(_DWORD **)(a1 + 24);
  if ( v121 )
    sub_12E0530(v121);
  v122 = *(volatile signed __int32 **)(a1 + 16);
  if ( v122 )
    sub_4343A0(v122);
  v123 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v124 = *(void **)(v123 + 824);
    if ( v124 != (void *)(v123 + 840) )
      operator delete(v124);
    v125 = *(void **)(v123 + 784);
    if ( v125 != (void *)(v123 + 800) )
      operator delete(v125);
    sub_9B4A30((void ***)(v123 + 760));
    v126 = *(void **)(v123 + 704);
    if ( v126 != (void *)(v123 + 720) )
      operator delete(v126);
    v127 = *(void **)(v123 + 672);
    if ( v127 != (void *)(v123 + 688) )
      operator delete(v127);
    v128 = *(void ***)(v123 + 656);
    v129 = *(void ***)(v123 + 648);
    if ( v128 != v129 )
    {
      do
      {
        while ( *v129 != v129 + 2 )
        {
          operator delete(*v129);
          v129 += 7;
          if ( v129 == v128 )
          {
            v129 = *(void ***)(v123 + 648);
            goto LABEL_265;
          }
        }
        v129 += 7;
      }
      while ( v128 != v129 );
      v129 = *(void ***)(v123 + 648);
    }
LABEL_265:
    if ( v129 )
      operator delete(v129);
    v130 = *(_QWORD *)(v123 + 616);
    if ( v130 )
    {
      while ( 1 )
      {
        sub_998560(v123 + 600, *(_QWORD **)(v130 + 24));
        v131 = *(void **)(v130 + 64);
        v132 = *(_QWORD *)(v130 + 16);
        if ( v131 != (void *)(v130 + 80) )
          operator delete(v131);
        v133 = *(void **)(v130 + 32);
        if ( v133 == (void *)(v130 + 48) )
        {
          operator delete((void *)v130);
          if ( !v132 )
            break;
        }
        else
        {
          operator delete(v133);
          operator delete((void *)v130);
          if ( !v132 )
            break;
        }
        v130 = v132;
      }
    }
    sub_9B4A30((void ***)(v123 + 576));
    sub_9B4A30((void ***)(v123 + 544));
    sub_9B4A30((void ***)(v123 + 520));
    v134 = *(void **)(v123 + 488);
    if ( v134 != (void *)(v123 + 504) )
      operator delete(v134);
    v135 = *(void **)(v123 + 456);
    if ( v135 != (void *)(v123 + 472) )
      operator delete(v135);
    v136 = *(void **)(v123 + 424);
    if ( v136 != (void *)(v123 + 440) )
      operator delete(v136);
    v137 = *(void **)(v123 + 392);
    if ( v137 != (void *)(v123 + 408) )
      operator delete(v137);
    sub_9B4A30((void ***)(v123 + 344));
    sub_9B4A30((void ***)(v123 + 320));
    sub_9B4A30((void ***)(v123 + 296));
    sub_9B4A30((void ***)(v123 + 272));
    sub_9B4A30((void ***)(v123 + 248));
    operator delete((void *)v123, 0x360u);
  }
}
