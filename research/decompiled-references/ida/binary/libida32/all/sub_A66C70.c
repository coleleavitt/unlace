void __fastcall sub_A66C70(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  char *v5; // rdi
  int v6; // eax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  void **v11; // rcx
  void **v12; // r13
  __int64 *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rbp
  char *v16; // r12
  char *v17; // r14
  char *v18; // rdi
  char *v19; // rdi
  __int64 v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // r12
  void *v26; // rdi
  __int64 v27; // rax
  _QWORD *v28; // rbp
  _QWORD *v29; // r12
  _QWORD *v30; // rdi
  __int64 v31; // rax
  _QWORD *v32; // rbp
  _QWORD *v33; // r12
  _QWORD *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rbp
  __int64 v39; // r14
  __int64 v40; // r12
  __int64 v41; // r15
  __int64 v42; // rsi
  _DWORD *v43; // rdi
  void *v45; // rbp
  void *v46; // rbp
  __int64 v47; // rdi
  __int64 v48; // rbp
  __int64 v49; // r12
  __int64 i; // rax
  char *v51; // rbp
  char *v52; // r12
  void *v53; // rdi
  void *v54; // rbp
  void *v55; // rbp
  void *v56; // rbp
  void *v57; // rdi
  void *v58; // rdi
  __int64 v59; // rsi
  _QWORD *v60; // r12
  _QWORD *v61; // rbp
  __int64 v62; // rdi
  __int64 v63; // rsi
  _QWORD *v64; // r12
  _QWORD *v65; // rbp
  __int64 v66; // rdi
  __int64 v67; // rsi
  _QWORD *v68; // r13
  _QWORD *v69; // rbp
  __int64 v70; // rdi
  void **v71; // rdi
  void **v72; // r12
  void **v73; // rdi
  __int64 v74; // rax
  _QWORD *v75; // rbp
  _QWORD *v76; // r12
  _QWORD *v77; // rdi
  char *v78; // rdi
  __int64 v79; // rsi
  _QWORD *v80; // r13
  _QWORD *v81; // rbp
  __int64 v82; // rdi
  void **v83; // rdi
  void **v84; // r12
  void **v85; // rdi
  __int64 v86; // rsi
  void *v87; // rdi
  __int64 v88; // rsi
  int v89; // eax
  char *v90; // rdi
  __int64 v91; // rbp
  __int64 v92; // r12
  _QWORD *v93; // rax
  __int64 v94; // rsi
  __int64 v95; // rsi
  void *v96; // rdi
  void *v97; // rdi
  int v98; // eax
  __int64 v99; // rbp
  __int64 v100; // r12
  __int64 v101; // rax
  int v102; // eax
  __int64 v103; // rbp
  __int64 v104; // r12
  _QWORD *v105; // rax
  void **v106; // [rsp+0h] [rbp-48h]
  __int64 v107; // [rsp+8h] [rbp-40h]
  __int64 v108; // [rsp+8h] [rbp-40h]

  sub_A606A0(a1);
  v2 = *(unsigned int *)(a1 + 23376);
  if ( (_DWORD)v2 )
  {
    v3 = *(_QWORD *)(a1 + 23360);
    v4 = v3 + 40 * v2;
    do
    {
      if ( *(_QWORD *)v3 && *(_QWORD *)v3 != -1 || *(_DWORD *)(v3 + 8) )
      {
        v5 = *(char **)(v3 + 16);
        if ( *(_DWORD *)(v3 + 28) )
        {
          v6 = *(_DWORD *)(v3 + 24);
          if ( v6 )
          {
            v7 = 0;
            v8 = 8LL * (unsigned int)(v6 - 1) + 8;
            do
            {
              v9 = *(_QWORD *)&v5[v7];
              if ( v9 != -8 && v9 )
              {
                operator delete();
                v5 = *(char **)(v3 + 16);
              }
              v7 += 8;
            }
            while ( v8 != v7 );
          }
        }
        free(v5);
      }
      v3 += 40;
    }
    while ( v4 != v3 );
    v2 = *(unsigned int *)(a1 + 23376);
  }
  v10 = 40 * v2;
  operator delete();
  v11 = *(void ***)(a1 + 23312);
  v12 = &v11[*(unsigned int *)(a1 + 23320)];
  v106 = v11;
  if ( v11 != v12 )
  {
    do
    {
      v13 = (__int64 *)*--v12;
      if ( *v12 )
      {
        v14 = *v13;
        v15 = *v13 + 136LL * *((unsigned int *)v13 + 2);
        if ( *v13 != v15 )
        {
          do
          {
            while ( 1 )
            {
              v15 -= 136;
              v16 = *(char **)(v15 + 8);
              v17 = &v16[56 * *(unsigned int *)(v15 + 16)];
              if ( v16 != v17 )
              {
                do
                {
                  while ( 1 )
                  {
                    v17 -= 56;
                    v18 = *((char **)v17 + 2);
                    if ( v18 == v17 + 32 )
                      break;
                    v107 = v14;
                    free(v18);
                    v14 = v107;
                    if ( v16 == v17 )
                      goto LABEL_22;
                  }
                }
                while ( v16 != v17 );
LABEL_22:
                v16 = *(char **)(v15 + 8);
              }
              if ( v16 == (char *)(v15 + 24) )
                break;
              v108 = v14;
              free(v16);
              v14 = v108;
              if ( v108 == v15 )
                goto LABEL_25;
            }
          }
          while ( v14 != v15 );
LABEL_25:
          v15 = *v13;
        }
        if ( (__int64 *)v15 != v13 + 2 )
          free((void *)v15);
        v10 = 288;
        operator delete(v13, 0x120u);
      }
    }
    while ( v106 != v12 );
    v12 = *(void ***)(a1 + 23312);
  }
  if ( v12 != (void **)(a1 + 23328) )
    free(v12);
  v19 = *(char **)(a1 + 23288);
  if ( *(_DWORD *)(a1 + 23300) )
  {
    v102 = *(_DWORD *)(a1 + 23296);
    if ( v102 )
    {
      v103 = 0;
      v104 = 8LL * (unsigned int)(v102 - 1) + 8;
      do
      {
        v105 = *(_QWORD **)&v19[v103];
        if ( v105 && v105 != (_QWORD *)-8LL )
        {
          v10 = *v105 + 25LL;
          operator delete();
          v19 = *(char **)(a1 + 23288);
        }
        v103 += 8;
      }
      while ( v104 != v103 );
    }
  }
  free(v19);
  v20 = *(_QWORD *)(a1 + 23280);
  if ( v20 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 8LL))(v20, v10);
  v21 = *(void **)(a1 + 23256);
  if ( v21 )
    operator delete(v21);
  v22 = *(void **)(a1 + 22976);
  if ( v22 != (void *)(a1 + 22992) )
    free(v22);
  v23 = *(_QWORD *)(a1 + 22896);
  v24 = *(unsigned int *)(a1 + 22912);
  if ( (_DWORD)v24 )
  {
    v25 = v23 + (v24 << 7);
    do
    {
      while ( 1 )
      {
        if ( (unsigned __int8)(*(_BYTE *)v23 + 2) > 1u )
        {
          v26 = *(void **)(v23 + 16);
          if ( v26 != (void *)(v23 + 32) )
            break;
        }
        v23 += 128;
        if ( v25 == v23 )
          goto LABEL_46;
      }
      free(v26);
      v23 += 128;
    }
    while ( v25 != v23 );
  }
LABEL_46:
  operator delete();
  v27 = *(unsigned int *)(a1 + 22880);
  if ( (_DWORD)v27 )
  {
    v28 = *(_QWORD **)(a1 + 22864);
    v29 = &v28[7 * v27];
    do
    {
      if ( *v28 != -8192 && *v28 != -4096 )
      {
        v30 = (_QWORD *)v28[1];
        if ( v30 != v28 + 3 )
          free(v30);
      }
      v28 += 7;
    }
    while ( v29 != v28 );
  }
  operator delete();
  v31 = *(unsigned int *)(a1 + 22856);
  if ( (_DWORD)v31 )
  {
    v32 = *(_QWORD **)(a1 + 22840);
    v33 = &v32[7 * v31];
    do
    {
      if ( (unsigned __int64)(*v32 - 1LL) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v34 = (_QWORD *)v32[3];
        if ( v34 != v32 + 5 )
          operator delete(v34);
      }
      v32 += 7;
    }
    while ( v33 != v32 );
  }
  operator delete();
  operator delete();
  v35 = *(void **)(a1 + 22800);
  if ( v35 != (void *)(a1 + 22816) )
    free(v35);
  operator delete();
  operator delete();
  v36 = *(void **)(a1 + 18584);
  if ( v36 != (void *)(a1 + 18600) )
    free(v36);
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  v37 = *(unsigned int *)(a1 + 18408);
  if ( (_DWORD)v37 )
  {
    v38 = *(_QWORD *)(a1 + 18392);
    v39 = v38 + 56 * v37;
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v38 + 1) > 1 )
        {
          v40 = *(_QWORD *)(v38 + 24);
          if ( v40 )
            break;
        }
        v38 += 56;
        if ( v39 == v38 )
          goto LABEL_70;
      }
      do
      {
        sub_A66C30(v38 + 8, *(_QWORD **)(v40 + 24));
        v41 = *(_QWORD *)(v40 + 16);
        operator delete((void *)v40);
        v40 = v41;
      }
      while ( v41 );
      v38 += 56;
    }
    while ( v39 != v38 );
LABEL_70:
    v37 = *(unsigned int *)(a1 + 18408);
  }
  v42 = 56 * v37;
  operator delete();
  v43 = *(_DWORD **)(a1 + 18360);
  if ( v43 )
  {
    if ( v43[2]-- == 1 )
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v43 + 8LL))(v43, v42);
  }
  sub_21FF240(a1 + 18344, v42);
  sub_21FF240(a1 + 18328, v42);
  sub_21FF240(a1 + 17576, v42);
  sub_21FF240(a1 + 17560, v42);
  sub_21FF240(a1 + 17544, v42);
  v45 = *(void **)(a1 + 17488);
  if ( v45 )
  {
    sub_BD2900(*(_QWORD *)(a1 + 17488));
    operator delete(v45, 0x18u);
  }
  v46 = *(void **)(a1 + 17480);
  if ( v46 )
  {
    sub_CC3EA0(*(_QWORD *)(a1 + 17480));
    operator delete(v46, 0x38u);
  }
  v47 = *(_QWORD *)(a1 + 17432);
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
  sub_FA4210(a1 + 2448);
  v48 = *(_QWORD *)(a1 + 2368);
  v49 = v48 + 8LL * *(unsigned int *)(a1 + 2376);
  if ( v48 != v49 )
  {
    for ( i = *(_QWORD *)(a1 + 2368); ; i = *(_QWORD *)(a1 + 2368) )
    {
      if ( (unsigned int)((v48 - i) >> 3) >> 7 > 0x1D )
      {
        v48 += 8;
        operator delete();
        if ( v49 == v48 )
          break;
      }
      else
      {
        v48 += 8;
        operator delete();
        if ( v48 == v49 )
          break;
      }
    }
  }
  v51 = *(char **)(a1 + 2416);
  v52 = &v51[16 * *(unsigned int *)(a1 + 2424)];
  if ( v51 != v52 )
  {
    do
    {
      v51 += 16;
      operator delete();
    }
    while ( v52 != v51 );
    v52 = *(char **)(a1 + 2416);
  }
  if ( v52 != (char *)(a1 + 2432) )
    free(v52);
  v53 = *(void **)(a1 + 2368);
  if ( v53 != (void *)(a1 + 2384) )
    free(v53);
  v54 = *(void **)(a1 + 2344);
  if ( v54 )
  {
    sub_FDC0A0(*(_QWORD *)(a1 + 2344));
    operator delete(v54, 0x18u);
  }
  v55 = *(void **)(a1 + 2336);
  if ( v55 )
  {
    sub_10AD2B0(*(_QWORD *)(a1 + 2336));
    operator delete(v55, 0x20u);
  }
  v56 = *(void **)(a1 + 2328);
  if ( v56 )
  {
    sub_FDC100(*(_QWORD *)(a1 + 2328));
    operator delete(v56, 0x10u);
  }
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  v57 = *(void **)(a1 + 2136);
  if ( v57 != (void *)(a1 + 2152) )
    free(v57);
  operator delete();
  v58 = *(void **)(a1 + 2096);
  if ( (void *)(a1 + 2112) != v58 )
    free(v58);
  operator delete();
  v59 = *(unsigned int *)(a1 + 2064);
  if ( (_DWORD)v59 )
  {
    v60 = *(_QWORD **)(a1 + 2048);
    v61 = &v60[2 * v59];
    do
    {
      if ( *v60 != -8192 && *v60 != -4096 )
      {
        v62 = v60[1];
        if ( v62 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 8LL))(v62);
      }
      v60 += 2;
    }
    while ( v61 != v60 );
  }
  operator delete();
  v63 = *(unsigned int *)(a1 + 2040);
  if ( (_DWORD)v63 )
  {
    v64 = *(_QWORD **)(a1 + 2024);
    v65 = &v64[2 * v63];
    do
    {
      if ( *v64 != -8192 && *v64 != -4096 )
      {
        v66 = v64[1];
        if ( v66 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 8LL))(v66);
      }
      v64 += 2;
    }
    while ( v65 != v64 );
  }
  operator delete();
  v67 = *(unsigned int *)(a1 + 2016);
  if ( (_DWORD)v67 )
  {
    v68 = *(_QWORD **)(a1 + 2000);
    v69 = &v68[2 * v67];
    do
    {
      if ( *v68 != -8192 && *v68 != -4096 )
      {
        v70 = v68[1];
        if ( v70 )
        {
          if ( (v70 & 4) != 0 )
          {
            v71 = (void **)(v70 & 0xFFFFFFFFFFFFFFF8LL);
            v72 = v71;
            if ( v71 )
            {
              v73 = (void **)*v71;
              if ( v73 != v72 + 2 )
                free(v73);
              operator delete(v72, 0x30u);
            }
          }
        }
      }
      v68 += 2;
    }
    while ( v69 != v68 );
  }
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  v74 = *(unsigned int *)(a1 + 1872);
  if ( (_DWORD)v74 )
  {
    v75 = *(_QWORD **)(a1 + 1856);
    v76 = &v75[7 * v74];
    do
    {
      if ( *v75 != -8192 && *v75 != -4096 )
      {
        v77 = (_QWORD *)v75[1];
        if ( v77 != v75 + 3 )
          free(v77);
      }
      v75 += 7;
    }
    while ( v76 != v75 );
  }
  operator delete();
  operator delete();
  if ( *(_DWORD *)(a1 + 1820) )
  {
    v98 = *(_DWORD *)(a1 + 1816);
    v78 = *(char **)(a1 + 1808);
    if ( v98 )
    {
      v99 = 0;
      v100 = 8LL * (unsigned int)(v98 - 1) + 8;
      do
      {
        v101 = *(_QWORD *)&v78[v99];
        if ( v101 != -8 && v101 )
        {
          operator delete();
          v78 = *(char **)(a1 + 1808);
        }
        v99 += 8;
      }
      while ( v100 != v99 );
    }
  }
  else
  {
    v78 = *(char **)(a1 + 1808);
  }
  free(v78);
  operator delete();
  v79 = *(unsigned int *)(a1 + 1768);
  if ( (_DWORD)v79 )
  {
    v80 = *(_QWORD **)(a1 + 1752);
    v81 = &v80[2 * v79];
    do
    {
      if ( *v80 != -4096 && *v80 != -8192 )
      {
        v82 = v80[1];
        if ( v82 )
        {
          if ( (v82 & 4) != 0 )
          {
            v83 = (void **)(v82 & 0xFFFFFFFFFFFFFFF8LL);
            v84 = v83;
            if ( v83 )
            {
              v85 = (void **)*v83;
              if ( v85 != v84 + 2 )
                free(v85);
              operator delete(v84, 0x30u);
            }
          }
        }
      }
      v80 += 2;
    }
    while ( v81 != v80 );
  }
  operator delete();
  operator delete();
  v86 = 16LL * *(unsigned int *)(a1 + 1720);
  operator delete();
  sub_21FF240(a1 + 1424, v86);
  v87 = *(void **)(a1 + 1392);
  if ( v87 != (void *)(a1 + 1408) )
    operator delete(v87);
  operator delete();
  v88 = 8LL * *(unsigned int *)(a1 + 1352);
  operator delete();
  if ( *(_DWORD *)(a1 + 1324) )
  {
    v89 = *(_DWORD *)(a1 + 1320);
    v90 = *(char **)(a1 + 1312);
    if ( v89 )
    {
      v91 = 0;
      v92 = 8LL * (unsigned int)(v89 - 1) + 8;
      do
      {
        v93 = *(_QWORD **)&v90[v91];
        if ( v93 != (_QWORD *)-8LL && v93 )
        {
          v88 = *v93 + 17LL;
          operator delete();
          v90 = *(char **)(a1 + 1312);
        }
        v91 += 8;
      }
      while ( v91 != v92 );
    }
  }
  else
  {
    v90 = *(char **)(a1 + 1312);
  }
  free(v90);
  sub_21FF240(a1 + 1296, v88);
  sub_21FF240(a1 + 1280, v88);
  sub_21FF240(a1 + 1264, v88);
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  v94 = 16LL * *(unsigned int *)(a1 + 1088);
  operator delete();
  sub_21FF240(a1 + 1048, v94);
  sub_21FF240(a1 + 1024, v94);
  sub_21FF240(a1 + 1000, v94);
  sub_21FF240(a1 + 976, v94);
  sub_21FF240(a1 + 960, v94);
  sub_21FF240(a1 + 944, v94);
  sub_21FF240(a1 + 928, v94);
  sub_21FF240(a1 + 912, v94);
  sub_21FF240(a1 + 896, v94);
  sub_21FF240(a1 + 880, v94);
  sub_21FF240(a1 + 864, v94);
  sub_21FF240(a1 + 840, v94);
  sub_21FF240(a1 + 824, v94);
  sub_21FF240(a1 + 808, v94);
  sub_21FF240(a1 + 792, v94);
  sub_21FF240(a1 + 776, v94);
  sub_21FF240(a1 + 760, v94);
  sub_A4A3A0(a1 + 736);
  v95 = 152LL * *(unsigned int *)(a1 + 752);
  operator delete();
  sub_21FF240(a1 + 720, v95);
  sub_21FF240(a1 + 704, v95);
  sub_21FF240(a1 + 688, v95);
  sub_21FF240(a1 + 672, v95);
  sub_21FF240(a1 + 648, v95);
  sub_21FF240(a1 + 632, v95);
  sub_21FF240(a1 + 616, v95);
  sub_21FF240(a1 + 600, v95);
  sub_21FF240(a1 + 584, v95);
  sub_21FF240(a1 + 568, v95);
  sub_21FF240(a1 + 544, v95);
  sub_21FF240(a1 + 528, v95);
  sub_21FF240(a1 + 512, v95);
  sub_21FF240(a1 + 496, v95);
  sub_21FF240(a1 + 480, v95);
  sub_21FF240(a1 + 456, v95);
  sub_21FF240(a1 + 432, v95);
  sub_21FF240(a1 + 408, v95);
  sub_21FF240(a1 + 384, v95);
  sub_21FF240(a1 + 368, v95);
  sub_21FF240(a1 + 344, v95);
  sub_21FF240(a1 + 328, v95);
  sub_21FF240(a1 + 304, v95);
  sub_21FF240(a1 + 288, v95);
  sub_21FF240(a1 + 264, v95);
  sub_21FF240(a1 + 240, v95);
  sub_21FF240(a1 + 216, v95);
  v96 = *(void **)(a1 + 192);
  if ( v96 )
    operator delete(v96);
  sub_21FF240(a1 + 176, v95);
  sub_21FF240(a1 + 152, v95);
  sub_21FF240(a1 + 136, v95);
  sub_21FF240(a1 + 120, v95);
  sub_21FF240(a1 + 104, v95);
  sub_21FF240(a1 + 88, v95);
  sub_21FF240(a1 + 72, v95);
  sub_21FF240(a1 + 56, v95);
  sub_21FF240(a1 + 40, v95);
  sub_21FF240(a1 + 24, v95);
  v97 = *(void **)(a1 + 8);
  if ( (void *)(a1 + 24) != v97 )
    free(v97);
}

