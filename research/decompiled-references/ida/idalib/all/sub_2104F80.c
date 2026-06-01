void __fastcall sub_2104F80(__int64 a1)
{
  int v2; // eax
  char *v3; // rdi
  __int64 v4; // r12
  _QWORD *v5; // r14
  void **v6; // r15
  void **v7; // rbp
  _QWORD *v8; // r15
  _QWORD *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r13
  void *v12; // rdi
  int v13; // eax
  char *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r12
  _QWORD *v17; // rax
  int v18; // eax
  char *v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // r12
  _QWORD *v22; // rax
  __int64 v23; // rbp
  void *v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rbp
  void *v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rbp
  void *v30; // rdi
  __int64 v31; // r12
  char *v32; // rdi
  __int64 v33; // rbp
  void *v34; // rdi
  __int64 v35; // r12
  int v36; // eax
  __int64 v37; // rbp
  __int64 v38; // r12
  _QWORD *v39; // rax
  char *v40; // rdi
  void *v41; // rdi
  void *v42; // rdi
  void *v43; // rdi
  __int64 v44; // r12
  __int64 v45; // rbp
  void *v46; // rdi
  void *v47; // rdi
  __int64 v48; // rdi
  void *v49; // rdi
  __int64 v50; // r12
  unsigned __int64 v51; // r8
  void **v52; // r13
  void **v53; // r15
  void ***v54; // rdx
  void **v55; // rbp
  void **v56; // r14
  void **v57; // rax
  __int64 v58; // rsi
  void *v59; // rdi
  void **v60; // rdi
  void **v61; // rdi
  void *v62; // rdi
  void **v63; // rbp
  unsigned __int64 v64; // r13
  void *v65; // rdi
  __int64 v66; // r13
  __int64 v67; // rbp
  __int64 v68; // rsi
  __int64 v69; // rdi
  void *v70; // rdi
  __int64 v71; // rbp
  __int64 v72; // r13
  void *v73; // rdi
  void *v74; // rdi
  char *v75; // rdi
  void (__fastcall *v76)(__int64, __int64, __int64); // rax
  void *v77; // rdi
  char **v78; // r12
  void **v79; // r13
  void **v80; // rbp
  char *v81; // r13
  char *v82; // rbp
  char *v83; // rdi
  void *v84; // rdi
  int v85; // eax
  __int64 v86; // rbp
  __int64 v87; // r12
  _QWORD *v88; // rax
  void **v89; // rdi
  int v90; // eax
  __int64 v91; // rbp
  __int64 v92; // r13
  _QWORD *v93; // rax
  __int64 v94; // [rsp+8h] [rbp-60h]
  unsigned __int64 v95; // [rsp+8h] [rbp-60h]
  __int64 v96; // [rsp+10h] [rbp-58h]
  void ***v97; // [rsp+10h] [rbp-58h]
  __int64 v98; // [rsp+18h] [rbp-50h]
  void **v99; // [rsp+20h] [rbp-48h]
  __int64 v100; // [rsp+28h] [rbp-40h]

  if ( *(_BYTE *)(a1 + 2336) )
    sub_2103AC0(a1);
  operator delete(*(_QWORD *)(a1 + 2408), 16LL * *(unsigned int *)(a1 + 2424), 8);
  operator delete(*(_QWORD *)(a1 + 2384), 32LL * *(unsigned int *)(a1 + 2400), 8);
  if ( *(_DWORD *)(a1 + 2372) )
  {
    v2 = *(_DWORD *)(a1 + 2368);
    v3 = *(char **)(a1 + 2360);
    if ( v2 )
    {
      v4 = 0;
      v98 = 8LL * (unsigned int)(v2 - 1) + 8;
      do
      {
        v5 = *(_QWORD **)&v3[v4];
        if ( v5 != (_QWORD *)-8LL && v5 )
        {
          v6 = (void **)v5[9];
          v7 = (void **)v5[8];
          v94 = *v5 + 97LL;
          if ( v6 != v7 )
          {
            do
            {
              while ( *v7 != v7 + 2 )
              {
                operator delete(*v7);
                v7 += 4;
                if ( v6 == v7 )
                  goto LABEL_11;
              }
              v7 += 4;
            }
            while ( v6 != v7 );
LABEL_11:
            v7 = (void **)v5[8];
          }
          if ( v7 )
            operator delete(v7);
          v8 = (_QWORD *)v5[6];
          v9 = (_QWORD *)v5[5];
          if ( v8 != v9 )
          {
            do
            {
              while ( 1 )
              {
                v10 = v9[3];
                v11 = v9[2];
                if ( v10 != v11 )
                {
                  do
                  {
                    if ( *(_DWORD *)(v11 + 32) > 0x40u )
                    {
                      v12 = *(void **)(v11 + 24);
                      if ( v12 )
                      {
                        v96 = v10;
                        operator delete[](v12);
                        v10 = v96;
                      }
                    }
                    v11 += 40;
                  }
                  while ( v10 != v11 );
                  v11 = v9[2];
                }
                if ( !v11 )
                  break;
                v9 += 6;
                operator delete((void *)v11);
                if ( v8 == v9 )
                  goto LABEL_23;
              }
              v9 += 6;
            }
            while ( v8 != v9 );
LABEL_23:
            v9 = (_QWORD *)v5[5];
          }
          if ( v9 )
            operator delete(v9);
          operator delete(v5, v94, 8);
          v3 = *(char **)(a1 + 2360);
        }
        v4 += 8;
      }
      while ( v98 != v4 );
    }
  }
  else
  {
    v3 = *(char **)(a1 + 2360);
  }
  free(v3);
  sub_21015A0((__m128 *)(a1 + 2240));
  sub_9B7090(a1 + 2240);
  if ( *(_DWORD *)(a1 + 2228) )
  {
    v13 = *(_DWORD *)(a1 + 2224);
    v14 = *(char **)(a1 + 2216);
    if ( v13 )
    {
      v15 = 0;
      v16 = 8LL * (unsigned int)(v13 - 1) + 8;
      do
      {
        v17 = *(_QWORD **)&v14[v15];
        if ( v17 != (_QWORD *)-8LL && v17 )
        {
          operator delete(*(_QWORD *)&v14[v15], *v17 + 17LL, 8);
          v14 = *(char **)(a1 + 2216);
        }
        v15 += 8;
      }
      while ( v16 != v15 );
    }
  }
  else
  {
    v14 = *(char **)(a1 + 2216);
  }
  free(v14);
  if ( *(_DWORD *)(a1 + 2204) )
  {
    v18 = *(_DWORD *)(a1 + 2200);
    v19 = *(char **)(a1 + 2192);
    if ( v18 )
    {
      v20 = 0;
      v21 = 8LL * (unsigned int)(v18 - 1) + 8;
      do
      {
        v22 = *(_QWORD **)&v19[v20];
        if ( v22 && v22 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v19[v20], *v22 + 17LL, 8);
          v19 = *(char **)(a1 + 2192);
        }
        v20 += 8;
      }
      while ( v21 != v20 );
    }
  }
  else
  {
    v19 = *(char **)(a1 + 2192);
  }
  free(v19);
  v23 = *(_QWORD *)(a1 + 2160);
  if ( v23 )
  {
    while ( 1 )
    {
      sub_2103A50(a1 + 2144, *(_QWORD **)(v23 + 24));
      v24 = *(void **)(v23 + 32);
      v25 = *(_QWORD *)(v23 + 16);
      if ( v24 == (void *)(v23 + 48) )
      {
        operator delete((void *)v23);
        if ( !v25 )
          break;
      }
      else
      {
        operator delete(v24);
        operator delete((void *)v23);
        if ( !v25 )
          break;
      }
      v23 = v25;
    }
  }
  v26 = *(_QWORD *)(a1 + 2112);
  if ( v26 )
  {
    while ( 1 )
    {
      sub_21039E0(a1 + 2096, *(_QWORD **)(v26 + 24));
      v27 = *(void **)(v26 + 32);
      v28 = *(_QWORD *)(v26 + 16);
      if ( v27 == (void *)(v26 + 48) )
      {
        operator delete((void *)v26);
        if ( !v28 )
          break;
      }
      else
      {
        operator delete(v27);
        operator delete((void *)v26);
        if ( !v28 )
          break;
      }
      v26 = v28;
    }
  }
  v29 = *(_QWORD *)(a1 + 2064);
  if ( v29 )
  {
    while ( 1 )
    {
      sub_2103970(a1 + 2048, *(_QWORD **)(v29 + 24));
      v30 = *(void **)(v29 + 32);
      v31 = *(_QWORD *)(v29 + 16);
      if ( v30 == (void *)(v29 + 48) )
      {
        operator delete((void *)v29);
        if ( !v31 )
          break;
      }
      else
      {
        operator delete(v30);
        operator delete((void *)v29);
        if ( !v31 )
          break;
      }
      v29 = v31;
    }
  }
  v32 = *(char **)(a1 + 2024);
  if ( *(_DWORD *)(a1 + 2036) )
  {
    v36 = *(_DWORD *)(a1 + 2032);
    if ( v36 )
    {
      v37 = 0;
      v38 = 8LL * (unsigned int)(v36 - 1) + 8;
      do
      {
        v39 = *(_QWORD **)&v32[v37];
        if ( v39 != (_QWORD *)-8LL && v39 )
        {
          operator delete(*(_QWORD *)&v32[v37], *v39 + 17LL, 8);
          v32 = *(char **)(a1 + 2024);
        }
        v37 += 8;
      }
      while ( v38 != v37 );
    }
  }
  free(v32);
  v33 = *(_QWORD *)(a1 + 1992);
  if ( v33 )
  {
    while ( 1 )
    {
      sub_2103900(a1 + 1976, *(_QWORD **)(v33 + 24));
      v34 = *(void **)(v33 + 32);
      v35 = *(_QWORD *)(v33 + 16);
      if ( v34 == (void *)(v33 + 48) )
      {
        operator delete((void *)v33);
        if ( !v35 )
          break;
      }
      else
      {
        operator delete(v34);
        operator delete((void *)v33);
        if ( !v35 )
          break;
      }
      v33 = v35;
    }
  }
  v40 = *(char **)(a1 + 1952);
  if ( *(_DWORD *)(a1 + 1964) )
  {
    v85 = *(_DWORD *)(a1 + 1960);
    if ( v85 )
    {
      v86 = 0;
      v87 = 8LL * (unsigned int)(v85 - 1) + 8;
      do
      {
        v88 = *(_QWORD **)&v40[v86];
        if ( v88 && v88 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v40[v86], *v88 + 17LL, 8);
          v40 = *(char **)(a1 + 1952);
        }
        v86 += 8;
      }
      while ( v87 != v86 );
    }
  }
  free(v40);
  sub_2102DE0(a1 + 1896);
  v41 = *(void **)(a1 + 1824);
  if ( v41 )
    operator delete(v41);
  v42 = *(void **)(a1 + 1808);
  if ( v42 != (void *)(a1 + 1824) )
    free(v42);
  operator delete(*(_QWORD *)(a1 + 1784), 8LL * *(unsigned int *)(a1 + 1800), 8);
  sub_21036C0(a1 + 1712, *(_QWORD *)(a1 + 1728));
  v43 = *(void **)(a1 + 1680);
  if ( v43 != (void *)(a1 + 1696) )
    operator delete(v43);
  v44 = *(_QWORD *)(a1 + 1664);
  v45 = v44 + ((unsigned __int64)*(unsigned int *)(a1 + 1672) << 6);
  if ( v44 != v45 )
  {
    do
    {
      while ( 1 )
      {
        v45 -= 64;
        v46 = *(void **)(v45 + 32);
        if ( v46 != (void *)(v45 + 48) )
          operator delete(v46);
        if ( *(_QWORD *)v45 == v45 + 16 )
          break;
        operator delete(*(void **)v45);
        if ( v44 == v45 )
          goto LABEL_82;
      }
    }
    while ( v44 != v45 );
LABEL_82:
    v45 = *(_QWORD *)(a1 + 1664);
  }
  if ( v45 != a1 + 1680 )
    free((void *)v45);
  v47 = *(void **)(a1 + 1512);
  if ( v47 != (void *)(a1 + 1536) )
    free(v47);
  v48 = *(_QWORD *)(a1 + 1496);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
  v49 = *(void **)(a1 + 1464);
  if ( v49 != (void *)(a1 + 1480) )
    operator delete(v49);
  operator delete(*(_QWORD *)(a1 + 1432), 16LL * *(unsigned int *)(a1 + 1448), 8);
  free(*(void **)(a1 + 1400));
  operator delete(*(_QWORD *)(a1 + 1376), 16LL * *(unsigned int *)(a1 + 1392), 8);
  free(*(void **)(a1 + 1344));
  sub_2101820((__m128 *)(a1 + 1248));
  sub_9B7090(a1 + 1248);
  sub_2101980((__m128 *)(a1 + 1152));
  sub_9B7090(a1 + 1152);
  sub_2101AB0((__m128 *)(a1 + 1056));
  sub_9B7090(a1 + 1056);
  sub_2101BF0((__m128 *)(a1 + 960));
  sub_9B7090(a1 + 960);
  sub_2101E40((__m128 *)(a1 + 864));
  sub_9B7090(a1 + 864);
  sub_2102090((__m128 *)(a1 + 768));
  sub_9B7090(a1 + 768);
  sub_21022E0((__m128 *)(a1 + 672));
  sub_9B7090(a1 + 672);
  sub_2102570((__m128 *)(a1 + 576));
  sub_9B7090(a1 + 576);
  sub_21027C0((__m128 *)(a1 + 480));
  sub_9B7090(a1 + 480);
  sub_2102A10((__m128 *)(a1 + 384));
  sub_9B7090(a1 + 384);
  sub_9B7090(a1 + 288);
  sub_9B7090(a1 + 192);
  v50 = *(_QWORD *)(a1 + 184);
  if ( v50 )
  {
    v51 = *(_QWORD *)(v50 + 384);
    v52 = *(void ***)(v50 + 360);
    v53 = *(void ***)(v50 + 368);
    v54 = (void ***)(*(_QWORD *)(v50 + 352) + 8LL);
    v55 = *(void ***)(v50 + 328);
    v100 = *(_QWORD *)(v50 + 352);
    v56 = *(void ***)(v50 + 344);
    if ( v51 > (unsigned __int64)v54 )
    {
LABEL_93:
      while ( 2 )
      {
        v57 = *v54;
        v58 = (__int64)(*v54 + 64);
        do
        {
          while ( 1 )
          {
            v59 = *v57;
            v99 = v57 + 2;
            if ( *v57 == v57 + 2 )
              break;
            v97 = v54;
            v95 = v51;
            free(v59);
            v57 = v99;
            v51 = v95;
            v54 = v97;
            if ( v99 == (void **)v58 )
            {
              v54 = v97 + 1;
              if ( v95 > (unsigned __int64)(v97 + 1) )
                goto LABEL_93;
              goto LABEL_97;
            }
          }
          v57 = (void **)*v57;
        }
        while ( v59 != (void *)v58 );
        if ( v51 > (unsigned __int64)++v54 )
          continue;
        break;
      }
    }
LABEL_97:
    if ( v51 == v100 )
    {
      while ( v52 != v55 )
      {
        while ( 1 )
        {
          v89 = (void **)*v55;
          v55 += 2;
          if ( v89 == v55 )
            break;
          free(v89);
          if ( v55 == v52 )
            goto LABEL_104;
        }
        v55 = v89;
      }
    }
    else
    {
      if ( v55 != v56 )
      {
        do
        {
          while ( 1 )
          {
            v60 = (void **)*v55;
            v55 += 2;
            if ( v60 == v55 )
              break;
            free(v60);
            if ( v55 == v56 )
              goto LABEL_101;
          }
          v55 = v60;
        }
        while ( v56 != v60 );
      }
LABEL_101:
      if ( v52 != v53 )
      {
        do
        {
          while ( 1 )
          {
            v61 = (void **)*v53;
            v53 += 2;
            if ( v61 == v53 )
              break;
            free(v61);
            if ( v53 == v52 )
              goto LABEL_104;
          }
          v53 = v61;
        }
        while ( v52 != v61 );
        v62 = *(void **)(v50 + 312);
        if ( !v62 )
          goto LABEL_109;
        goto LABEL_105;
      }
    }
LABEL_104:
    v62 = *(void **)(v50 + 312);
    if ( !v62 )
    {
LABEL_109:
      v66 = *(_QWORD *)(v50 + 288);
      v67 = *(_QWORD *)(v50 + 280);
      if ( v66 != v67 )
      {
        do
        {
          v68 = *(unsigned int *)(v67 + 40);
          v69 = *(_QWORD *)(v67 + 24);
          v67 += 48;
          operator delete(v69, 16 * v68, 4);
        }
        while ( v66 != v67 );
        v67 = *(_QWORD *)(v50 + 280);
      }
      if ( v67 )
        operator delete((void *)v67);
      v70 = *(void **)(v50 + 256);
      if ( v70 )
        operator delete(v70);
      v71 = *(_QWORD *)(v50 + 224);
      if ( v71 )
      {
        do
        {
          sub_2102F20(v50 + 208, *(_QWORD **)(v71 + 24));
          v72 = *(_QWORD *)(v71 + 16);
          operator delete((void *)v71);
          v71 = v72;
        }
        while ( v72 );
      }
      v73 = *(void **)(v50 + 64);
      if ( v73 != (void *)(v50 + 80) )
        free(v73);
      v74 = *(void **)(v50 + 40);
      if ( (void *)(v50 + 64) != v74 )
        free(v74);
      v75 = *(char **)(v50 + 8);
      if ( *(_DWORD *)(v50 + 20) )
      {
        v90 = *(_DWORD *)(v50 + 16);
        if ( v90 )
        {
          v91 = 0;
          v92 = 8LL * (unsigned int)(v90 - 1) + 8;
          do
          {
            v93 = *(_QWORD **)&v75[v91];
            if ( v93 != (_QWORD *)-8LL && v93 )
            {
              operator delete(*(_QWORD *)&v75[v91], *v93 + 17LL, 8);
              v75 = *(char **)(v50 + 8);
            }
            v91 += 8;
          }
          while ( v91 != v92 );
        }
      }
      free(v75);
      operator delete((void *)v50, 0x188u);
      goto LABEL_124;
    }
LABEL_105:
    v63 = *(void ***)(v50 + 352);
    v64 = *(_QWORD *)(v50 + 384) + 8LL;
    if ( v64 > (unsigned __int64)v63 )
    {
      do
      {
        v65 = *v63++;
        operator delete(v65);
      }
      while ( v64 > (unsigned __int64)v63 );
      v62 = *(void **)(v50 + 312);
    }
    operator delete(v62);
    goto LABEL_109;
  }
LABEL_124:
  v76 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 136);
  if ( v76 )
    v76(a1 + 120, a1 + 120, 3);
  v77 = *(void **)(a1 + 96);
  if ( v77 )
    operator delete(v77);
  v78 = *(char ***)(a1 + 88);
  if ( v78 )
  {
    v79 = (void **)v78[4];
    v80 = (void **)v78[3];
    if ( v79 != v80 )
    {
      do
      {
        while ( *v80 != v80 + 2 )
        {
          operator delete(*v80);
          v80 += 4;
          if ( v80 == v79 )
          {
            v80 = (void **)v78[3];
            goto LABEL_133;
          }
        }
        v80 += 4;
      }
      while ( v79 != v80 );
      v80 = (void **)v78[3];
    }
LABEL_133:
    if ( v80 )
      operator delete(v80);
    v81 = v78[1];
    v82 = *v78;
    if ( v81 != *v78 )
    {
      do
      {
        v83 = v82;
        v82 += 24;
        sub_2239BD0(v83);
      }
      while ( v81 != v82 );
      v82 = *v78;
    }
    if ( v82 )
      operator delete(v82);
    operator delete(v78, 0x40u);
  }
  v84 = *(void **)(a1 + 24);
  if ( v84 != (void *)(a1 + 40) )
    operator delete(v84);
}
