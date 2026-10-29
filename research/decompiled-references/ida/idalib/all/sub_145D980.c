__int64 __fastcall sub_145D980(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rbp
  void *v7; // r12
  __int64 v8; // rdi
  _QWORD *v9; // r12
  void **v10; // rbp
  __int64 v11; // r14
  void *v12; // r13
  void *v13; // rbp
  _QWORD *i; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // r13
  void *v19; // rdi
  __int64 *v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  void **v23; // r13
  void **v24; // rbp
  void *v25; // rdi
  __int64 *v26; // rdi
  void *v27; // rdi
  __int64 *v28; // rdi
  _QWORD *v29; // rbp
  void *v30; // r13
  __int64 *v31; // rdi
  _QWORD *v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rsi
  _QWORD *v35; // r12
  void *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rbp
  __int64 v39; // r12
  void *v40; // rdi
  void *v41; // rdi
  _QWORD *v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rsi
  _QWORD *v45; // r12
  __int64 v46; // rdi
  void **v47; // rdi
  void **v48; // r13
  void **v49; // rdi
  __int64 *v50; // rdi
  __int64 *v51; // rdi
  void *v52; // rdi
  _QWORD *v53; // rbp
  __int64 v54; // rax
  __int64 v55; // rsi
  _QWORD *v56; // r12
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r13
  __int64 v60; // rdi
  void **v61; // rdi
  void **v62; // r14
  void **v63; // rdi
  __int64 v64; // rdi
  void **v65; // rdi
  void **v66; // r13
  void **v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 *v70; // rdi
  __int64 *v71; // rdi
  __int64 v72; // rdi
  _QWORD *v73; // r13
  _QWORD *v74; // rbp
  void *v75; // r12
  __int64 v76; // rdi
  void *v77; // rbp
  __int64 v78; // rdi
  __int64 *v79; // rdi
  __int64 *v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rbp
  __int64 v83; // rsi
  __int64 v84; // r12
  void *v85; // rdi
  __int64 *v86; // rdi
  void *v87; // rdi
  __int64 v88; // rdi
  __int64 v89; // rdi
  __int64 v90; // rbp
  void *v91; // rdi
  void *v92; // rdi
  __int64 *v93; // r13
  __int64 *v94; // rbp
  __int64 j; // rax
  __int64 v96; // rdi
  unsigned int v97; // ecx
  __int64 v98; // rdi
  __int64 *v99; // rbp
  __int64 *v100; // r12
  __int64 v101; // rsi
  __int64 v102; // rdi
  __int64 *v103; // rdi
  __int64 *v104; // r13
  __int64 *v105; // rbp
  __int64 k; // rax
  __int64 v107; // rdi
  unsigned int v108; // ecx
  __int64 v109; // rdi
  __int64 *v110; // rbp
  __int64 *v111; // r12
  __int64 v112; // rsi
  __int64 v113; // rdi
  __int64 *v114; // rdi
  void *v115; // rdi
  __int64 result; // rax
  __int64 v117; // rbp
  __int64 *v118; // rdi
  __int64 v119; // r13
  __int64 v120; // rax
  _QWORD *v121; // rbp
  _QWORD *v122; // r14
  _QWORD *v123; // rdi
  _QWORD *v124; // r14
  _QWORD *v125; // r15
  char *v126; // rdi
  int v127; // eax
  __int64 v128; // rbp
  __int64 v129; // r8
  _QWORD *v130; // rax
  __int64 v131; // rbp
  int v132; // eax
  __int64 v133; // r14
  __int64 v134; // r15
  __int64 v135; // rax
  void *v136; // rdi
  void *v137; // rdi
  void *v138; // rdi
  void *v139; // rdi
  void **v140; // r14
  void **v141; // rbp
  void *v142; // rdi
  void *v143; // rdi
  _QWORD *v144; // [rsp+0h] [rbp-48h]
  __int64 v145; // [rsp+8h] [rbp-40h]

  v4 = a1[146];
  v5 = a1[147];
  if ( v4 != v5 )
  {
    v6 = a1[146];
    do
    {
      while ( 1 )
      {
        v7 = *(void **)(v6 + 32);
        if ( v7 )
        {
          sub_1466570(*(_QWORD *)(v6 + 32), a2, a3);
          a2 = 72;
          operator delete(v7, 0x48u);
        }
        v8 = *(_QWORD *)(v6 + 16);
        if ( !v8 )
          break;
        v6 += 56;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        if ( v5 == v6 )
          goto LABEL_7;
      }
      v6 += 56;
    }
    while ( v5 != v6 );
LABEL_7:
    a1[147] = v4;
  }
  v9 = a1 + 301;
  v10 = (void **)(a1 + 301);
  v11 = (__int64)&a1[*((unsigned int *)a1 + 601) + 301];
  if ( a1 + 301 != (__int64 *)v11 )
  {
    do
    {
      v12 = *v10;
      *v10 = nullptr;
      if ( v12 )
      {
        sub_1466570(v12, a2, a3);
        a2 = 72;
        operator delete(v12, 0x48u);
      }
      ++v10;
    }
    while ( (void **)v11 != v10 );
  }
  v13 = (void *)a1[143];
  a1[143] = 0;
  if ( v13 )
  {
    sub_1466570(v13, a2, a3);
    operator delete(v13, 0x48u);
  }
  for ( i = (_QWORD *)a1[283]; i; i = (_QWORD *)sub_13EFFF0(i) )
    ;
  if ( (a1[68] & 0x10) != 0 )
  {
    v119 = a1[13];
    if ( v119 )
    {
      sub_9B7090(v119 + 1416);
      free(*(void **)(v119 + 1392));
      v120 = *(unsigned int *)(v119 + 1384);
      if ( (_DWORD)v120 )
      {
        v121 = *(_QWORD **)(v119 + 1368);
        v122 = &v121[12 * v120];
        do
        {
          if ( *v121 != -8192 && *v121 != -4096 )
          {
            v123 = (_QWORD *)v121[1];
            if ( v123 != v121 + 4 )
              free(v123);
          }
          v121 += 12;
        }
        while ( v122 != v121 );
        v120 = *(unsigned int *)(v119 + 1384);
      }
      operator delete(*(_QWORD *)(v119 + 1368), 96 * v120, 8);
      operator delete(*(_QWORD *)(v119 + 1344), 16LL * *(unsigned int *)(v119 + 1360), 8);
      operator delete(*(_QWORD *)(v119 + 1320), 16LL * *(unsigned int *)(v119 + 1336), 8);
      operator delete(*(_QWORD *)(v119 + 1296), 24LL * *(unsigned int *)(v119 + 1312), 8);
      sub_13F3340(v119 + 632);
      v124 = *(_QWORD **)(v119 + 608);
      v144 = *(_QWORD **)(v119 + 616);
      if ( v144 != v124 )
      {
        do
        {
          v125 = (_QWORD *)v124[1];
          if ( v125 )
          {
            v126 = (char *)v125[2];
            if ( *((_DWORD *)v125 + 7) )
            {
              v127 = *((_DWORD *)v125 + 6);
              if ( v127 )
              {
                v128 = 0;
                v129 = 8LL * (unsigned int)(v127 - 1) + 8;
                do
                {
                  v130 = *(_QWORD **)&v126[v128];
                  if ( v130 && v130 != (_QWORD *)-8LL )
                  {
                    v145 = v129;
                    operator delete(*(_QWORD *)&v126[v128], *v130 + 25LL, 8);
                    v126 = (char *)v125[2];
                    v129 = v145;
                  }
                  v128 += 8;
                }
                while ( v129 != v128 );
              }
            }
            free(v126);
            if ( *v125 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v125 + 8LL))(*v125);
            operator delete(v125, 0x28u);
          }
          v124 += 2;
        }
        while ( v144 != v124 );
        v124 = *(_QWORD **)(v119 + 608);
      }
      if ( v124 )
        operator delete(v124);
      v131 = *(_QWORD *)(v119 + 600);
      if ( v131 )
      {
        if ( *(_DWORD *)(v131 + 12) )
        {
          v132 = *(_DWORD *)(v131 + 8);
          if ( v132 )
          {
            v133 = 0;
            v134 = 8LL * (unsigned int)(v132 - 1) + 8;
            do
            {
              v135 = *(_QWORD *)(*(_QWORD *)v131 + v133);
              if ( v135 )
              {
                if ( v135 != -8 )
                {
                  v136 = *(void **)(v135 + 8);
                  if ( v136 != (void *)(v135 + 24) )
                    operator delete(v136);
                }
              }
              v133 += 8;
            }
            while ( v134 != v133 );
          }
        }
        sub_9B7090(v131 + 24);
        free(*(void **)v131);
        operator delete((void *)v131, 0x78u);
      }
      sub_9B7090(v119 + 504);
      free(*(void **)(v119 + 480));
      sub_9B7090(v119 + 384);
      free(*(void **)(v119 + 360));
      v137 = *(void **)(v119 + 336);
      if ( v137 )
        operator delete(v137);
      v138 = *(void **)(v119 + 304);
      if ( v138 != (void *)(v119 + 320) )
        operator delete(v138);
      v139 = *(void **)(v119 + 272);
      if ( v139 != (void *)(v119 + 288) )
        operator delete(v139);
      v140 = *(void ***)(v119 + 256);
      v141 = *(void ***)(v119 + 248);
      if ( v140 != v141 )
      {
        do
        {
          while ( *v141 != v141 + 2 )
          {
            operator delete(*v141);
            v141 += 5;
            if ( v140 == v141 )
              goto LABEL_237;
          }
          v141 += 5;
        }
        while ( v140 != v141 );
LABEL_237:
        v141 = *(void ***)(v119 + 248);
      }
      if ( v141 )
        operator delete(v141);
      sub_9B7090(v119 + 144);
      free(*(void **)(v119 + 120));
      v142 = *(void **)(v119 + 72);
      if ( v142 )
        operator delete(v142);
      v143 = *(void **)(v119 + 48);
      if ( v143 )
        operator delete(v143);
      operator delete(*(_QWORD *)(v119 + 8), 8LL * *(unsigned int *)(v119 + 24), 4);
      operator delete((void *)v119, 0x5F8u);
    }
  }
  v15 = *((unsigned int *)a1 + 830);
  v16 = a1[413];
  v17 = 152 * v15;
  if ( (_DWORD)v15 )
  {
    v18 = v16 + 152 * v15;
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v16 + 1) > 1 )
        {
          v19 = *(void **)(v16 + 8);
          if ( v19 != (void *)(v16 + 24) )
            break;
        }
        v16 += 152;
        if ( v18 == v16 )
          goto LABEL_23;
      }
      free(v19);
      v16 += 152;
    }
    while ( v18 != v16 );
LABEL_23:
    v16 = a1[413];
    v17 = 152LL * *((unsigned int *)a1 + 830);
  }
  operator delete(v16, v17, 8);
  v20 = (__int64 *)a1[395];
  if ( v20 != a1 + 397 )
    free(v20);
  operator delete(a1[379], 16LL * *((unsigned int *)a1 + 762), 8);
  v21 = 16LL * *((unsigned int *)a1 + 756);
  operator delete(a1[376], v21, 8);
  v23 = (void **)a1[373];
  v24 = (void **)a1[372];
  if ( v23 != v24 )
  {
    do
    {
      while ( *v24 != v24 + 2 )
      {
        free(*v24);
        v24 += 6;
        if ( v23 == v24 )
          goto LABEL_29;
      }
      v24 += 6;
    }
    while ( v23 != v24 );
LABEL_29:
    v24 = (void **)a1[372];
  }
  if ( v24 )
    operator delete(v24);
  v25 = (void *)a1[369];
  if ( v25 )
    operator delete(v25);
  v26 = (__int64 *)a1[363];
  if ( v26 != a1 + 365 )
    free(v26);
  v27 = (void *)a1[359];
  if ( v27 )
    operator delete(v27);
  v28 = (__int64 *)a1[309];
  v29 = a1 + 309;
  if ( v28 != a1 + 311 )
    free(v28);
  do
  {
    while ( 1 )
    {
      v30 = (void *)*--v29;
      if ( !*v29 )
        break;
      sub_1466570(*v29, v21, v22);
      v21 = 72;
      operator delete(v30, 0x48u);
      if ( v29 == v9 )
        goto LABEL_42;
    }
  }
  while ( v29 != v9 );
LABEL_42:
  v31 = (__int64 *)a1[295];
  if ( v31 != a1 + 297 )
    operator delete(v31);
  v32 = (_QWORD *)a1[284];
  v33 = *((unsigned int *)a1 + 572);
  v34 = 4 * v33;
  if ( (_DWORD)v33 )
  {
    v35 = &v32[v34];
    do
    {
      if ( *v32 != -4096 && *v32 != -8192 )
      {
        v36 = (void *)v32[1];
        if ( v36 )
          operator delete(v36);
      }
      v32 += 4;
    }
    while ( v35 != v32 );
    v32 = (_QWORD *)a1[284];
    v34 = 4LL * *((unsigned int *)a1 + 572);
  }
  operator delete(v32, v34 * 8, 8);
  v37 = *((unsigned int *)a1 + 564);
  if ( (_DWORD)v37 )
  {
    v38 = a1[280];
    v39 = v38 + 112 * v37;
    do
    {
      if ( *(_QWORD *)v38 != -8192 && *(_QWORD *)v38 != -4096 )
      {
        if ( *(_BYTE *)(v38 + 96) )
        {
          v40 = *(void **)(v38 + 64);
          if ( v40 != (void *)(v38 + 80) )
            operator delete(v40);
        }
        if ( *(_BYTE *)(v38 + 48) )
        {
          v41 = *(void **)(v38 + 16);
          if ( v41 != (void *)(v38 + 32) )
            operator delete(v41);
        }
      }
      v38 += 112;
    }
    while ( v39 != v38 );
    v37 = *((unsigned int *)a1 + 564);
  }
  operator delete(a1[280], 112 * v37, 8);
  if ( (a1[263] & 1) == 0 )
    operator delete(a1[264], 4LL * *((unsigned int *)a1 + 530), 4);
  v42 = (_QWORD *)a1[260];
  v43 = *((unsigned int *)a1 + 524);
  v44 = 2 * v43;
  if ( (_DWORD)v43 )
  {
    v45 = &v42[v44];
    do
    {
      if ( *v42 != -8192 && *v42 != -4096 )
      {
        v46 = v42[1];
        if ( v46 )
        {
          if ( (v46 & 4) != 0 )
          {
            v47 = (void **)(v46 & 0xFFFFFFFFFFFFFFF8LL);
            v48 = v47;
            if ( v47 )
            {
              v49 = (void **)*v47;
              if ( v49 != v48 + 2 )
                free(v49);
              operator delete(v48, 0x30u);
            }
          }
        }
      }
      v42 += 2;
    }
    while ( v45 != v42 );
    v42 = (_QWORD *)a1[260];
    v44 = 2LL * *((unsigned int *)a1 + 524);
  }
  operator delete(v42, v44 * 8, 8);
  v50 = (__int64 *)a1[226];
  if ( v50 != a1 + 228 )
    free(v50);
  sub_2222F80(a1 + 224);
  v51 = (__int64 *)a1[220];
  if ( v51 != a1 + 222 )
    free(v51);
  operator delete(a1[217], 8LL * *((unsigned int *)a1 + 438), 8);
  operator delete(a1[214], 8LL * *((unsigned int *)a1 + 432), 8);
  v52 = (void *)a1[209];
  if ( v52 )
    operator delete(v52);
  v53 = (_QWORD *)a1[206];
  v54 = *((unsigned int *)a1 + 416);
  v55 = 2 * v54;
  if ( (_DWORD)v54 )
  {
    v56 = &v53[v55];
    do
    {
      if ( *v53 != -8192 && *v53 != -4096 )
      {
        v57 = v53[1];
        if ( v57 )
        {
          if ( (v57 & 4) != 0 )
          {
            v58 = v57 & 0xFFFFFFFFFFFFFFF8LL;
            v59 = v58;
            if ( v58 )
            {
              v60 = *(_QWORD *)(v58 + 24);
              if ( v60 )
              {
                if ( (v60 & 4) != 0 )
                {
                  v61 = (void **)(v60 & 0xFFFFFFFFFFFFFFF8LL);
                  v62 = v61;
                  if ( v61 )
                  {
                    v63 = (void **)*v61;
                    if ( v63 != v62 + 2 )
                      free(v63);
                    operator delete(v62, 0x30u);
                  }
                }
              }
              v64 = *(_QWORD *)(v59 + 8);
              if ( v64 )
              {
                if ( (v64 & 4) != 0 )
                {
                  v65 = (void **)(v64 & 0xFFFFFFFFFFFFFFF8LL);
                  v66 = v65;
                  if ( v65 )
                  {
                    v67 = (void **)*v65;
                    if ( v67 != v66 + 2 )
                      free(v67);
                    operator delete(v66, 0x30u);
                  }
                }
              }
            }
          }
        }
      }
      v53 += 2;
    }
    while ( v56 != v53 );
    v53 = (_QWORD *)a1[206];
    v55 = 2LL * *((unsigned int *)a1 + 416);
  }
  operator delete(v53, v55 * 8, 8);
  v68 = a1[202];
  sub_145D810((__int64)(a1 + 200), v68);
  v70 = (__int64 *)a1[166];
  if ( v70 != a1 + 168 )
    free(v70);
  v71 = (__int64 *)a1[150];
  if ( v71 != a1 + 152 )
    free(v71);
  v72 = a1[149];
  if ( v72 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 8LL))(v72);
  v73 = (_QWORD *)a1[147];
  v74 = (_QWORD *)a1[146];
  if ( v73 != v74 )
  {
    do
    {
      while ( 1 )
      {
        v75 = (void *)v74[4];
        if ( v75 )
        {
          sub_1466570(v74[4], v68, v69);
          v68 = 72;
          operator delete(v75, 0x48u);
        }
        v76 = v74[2];
        if ( !v76 )
          break;
        v74 += 7;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
        if ( v73 == v74 )
          goto LABEL_116;
      }
      v74 += 7;
    }
    while ( v73 != v74 );
LABEL_116:
    v74 = (_QWORD *)a1[146];
  }
  if ( v74 )
    operator delete(v74);
  v77 = (void *)a1[143];
  if ( v77 )
  {
    sub_1466570(a1[143], v68, v69);
    operator delete(v77, 0x48u);
  }
  v78 = a1[139];
  if ( v78 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
  v79 = (__int64 *)a1[132];
  if ( v79 != a1 + 134 )
    free(v79);
  v80 = (__int64 *)a1[113];
  if ( v80 != a1 + 115 )
    operator delete(v80);
  v81 = *((unsigned int *)a1 + 212);
  v82 = a1[104];
  v83 = 72 * v81;
  if ( (_DWORD)v81 )
  {
    v84 = v82 + 72 * v81;
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v82 + 1) > 1 )
        {
          v85 = *(void **)(v82 + 8);
          if ( v85 != (void *)(v82 + 24) )
            break;
        }
        v82 += 72;
        if ( v84 == v82 )
          goto LABEL_133;
      }
      free(v85);
      v82 += 72;
    }
    while ( v84 != v82 );
LABEL_133:
    v82 = a1[104];
    v83 = 72LL * *((unsigned int *)a1 + 212);
  }
  operator delete(v82, v83, 8);
  v86 = (__int64 *)a1[98];
  if ( v86 != a1 + 100 )
    free(v86);
  v87 = (void *)a1[89];
  if ( v87 )
    operator delete(v87);
  v88 = a1[88];
  if ( v88 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 8LL))(v88);
  v89 = a1[87];
  if ( v89 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 8LL))(v89);
  v90 = a1[86];
  if ( v90 )
  {
    v91 = *(void **)(v90 + 112);
    if ( v91 != (void *)(v90 + 128) )
      free(v91);
    v92 = *(void **)(v90 + 56);
    if ( v92 != (void *)(v90 + 72) )
      free(v92);
    if ( *(_QWORD *)v90 != v90 + 16 )
      free(*(void **)v90);
    operator delete((void *)v90, 0xB0u);
  }
  sub_FDF800(a1 + 85);
  v93 = (__int64 *)a1[74];
  v94 = &v93[*((unsigned int *)a1 + 150)];
  if ( v93 != v94 )
  {
    for ( j = a1[74]; ; j = a1[74] )
    {
      v97 = (unsigned int)(((__int64)v93 - j) >> 3) >> 7;
      if ( v97 > 0x1D )
      {
        v96 = *v93++;
        operator delete(v96, 0x40000000000LL, 16);
        if ( v94 == v93 )
          break;
      }
      else
      {
        v98 = *v93++;
        operator delete(v98, 4096LL << v97, 16);
        if ( v93 == v94 )
          break;
      }
    }
  }
  v99 = (__int64 *)a1[80];
  v100 = &v99[2 * *((unsigned int *)a1 + 162)];
  if ( v99 != v100 )
  {
    do
    {
      v101 = v99[1];
      v102 = *v99;
      v99 += 2;
      operator delete(v102, v101, 16);
    }
    while ( v100 != v99 );
    v100 = (__int64 *)a1[80];
  }
  if ( v100 != a1 + 82 )
    free(v100);
  v103 = (__int64 *)a1[74];
  if ( v103 != a1 + 76 )
    free(v103);
  free((void *)a1[69]);
  v104 = (__int64 *)a1[18];
  v105 = &v104[*((unsigned int *)a1 + 38)];
  if ( v104 != v105 )
  {
    for ( k = a1[18]; ; k = a1[18] )
    {
      v108 = (unsigned int)(((__int64)v104 - k) >> 3) >> 7;
      if ( v108 > 0x1D )
      {
        v107 = *v104++;
        operator delete(v107, 0x40000000000LL, 16);
        if ( v105 == v104 )
          break;
      }
      else
      {
        v109 = *v104++;
        operator delete(v109, 4096LL << v108, 16);
        if ( v104 == v105 )
          break;
      }
    }
  }
  v110 = (__int64 *)a1[24];
  v111 = &v110[2 * *((unsigned int *)a1 + 50)];
  if ( v110 != v111 )
  {
    do
    {
      v112 = v110[1];
      v113 = *v110;
      v110 += 2;
      operator delete(v113, v112, 16);
    }
    while ( v111 != v110 );
    v111 = (__int64 *)a1[24];
  }
  if ( v111 != a1 + 26 )
    free(v111);
  v114 = (__int64 *)a1[18];
  if ( v114 != a1 + 20 )
    free(v114);
  v115 = (void *)a1[12];
  if ( v115 )
    operator delete(v115, 0x18u);
  result = a1[3];
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v117 = (result >> 1) & 1;
    if ( (result & 4) != 0 )
    {
      v118 = a1;
      if ( !v117 )
        v118 = (__int64 *)*a1;
      result = (*(__int64 (__fastcall **)(__int64 *))((a1[3] & 0xFFFFFFFFFFFFFFF8LL) + 16))(v118);
    }
    if ( !v117 )
      return operator delete(*a1, a1[1], a1[2]);
  }
  return result;
}
