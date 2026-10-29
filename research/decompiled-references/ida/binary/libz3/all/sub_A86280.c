__int64 __fastcall sub_A86280(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // r15
  void *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  _QWORD **v10; // r14
  __int64 (__fastcall *v11)(_QWORD *); // rax
  __int64 **v12; // r13
  __int64 *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  unsigned int *v17; // r14
  __int64 v18; // rdx
  void *v19; // r15
  char *v20; // rsi
  __int64 *v21; // rbx
  __int64 *v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  void *v32; // rdi
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // r14
  void *v36; // r13
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // r14
  void *v41; // r13
  __int64 v42; // rsi
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // r14
  void *v46; // r13
  __int64 v47; // rsi
  __int64 v48; // r12
  __int64 v49; // rax
  __int64 v50; // r14
  void *v51; // r13
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r12
  __int64 v56; // rax
  __int64 v57; // r14
  void *v58; // r13
  __int64 v59; // rsi
  char *v60; // r15
  __int64 v61; // rax
  char *v62; // r12
  char *v63; // r14
  void *v64; // r13
  char *v65; // rsi
  __int64 v66; // r12
  __int64 v67; // rax
  __int64 v68; // r14
  void *v69; // r13
  __int64 v70; // rsi
  char *v71; // r15
  __int64 v72; // rax
  char *v73; // r12
  char *v74; // r14
  void *v75; // r13
  char *v76; // rsi
  char *v77; // r15
  __int64 v78; // rax
  char *v79; // r12
  char *v80; // r14
  void *v81; // r13
  char *v82; // rsi
  char *v83; // r15
  __int64 v84; // rax
  char *v85; // r12
  char *v86; // r14
  void *v87; // r13
  char *v88; // rsi
  void *v89; // rdi
  void *v90; // rdi
  __int64 v91; // rax
  _QWORD *v92; // r14
  _QWORD *v93; // r12
  void (__fastcall *v94)(_QWORD *, _QWORD *, __int64); // rax
  void *v95; // r13
  _QWORD *v96; // rsi
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // r12
  __int64 v100; // rdi
  __int64 v101; // rax
  void (__fastcall ***v102)(_QWORD); // rbx
  __int64 v103; // rax
  void *v104; // rdi
  void *v105; // rdi
  __int64 v106; // r12
  __int64 v107; // rax
  __int64 v108; // r14
  void *v109; // r13
  __int64 v110; // rsi
  __int64 v111; // r13
  __int64 v112; // rax
  void *v113; // r12
  __int64 v114; // rax
  char *v115; // r15
  char *v116; // r12
  void *v117; // r14
  char *v118; // rsi
  void *v119; // rbx
  void *v120; // rbx
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  _QWORD *v127; // rbx
  __int64 v128; // rax
  _QWORD *v129; // r12
  void *v130; // rdi
  void *v131; // rdi
  _QWORD *v132; // rbx
  __int64 v133; // rax
  _QWORD *v134; // r12
  void *v135; // rdi
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // r12
  __int64 v145; // rax
  __int64 v146; // r14
  void *v147; // r13
  __int64 v148; // rsi
  __int64 v149; // rax
  __int64 v150; // r12
  __int64 v151; // rax
  __int64 v152; // r14
  void *v153; // r13
  __int64 v154; // rsi
  __int64 v155; // rax
  __int64 result; // rax
  void *v157; // rdi
  unsigned int *ptr; // [rsp+0h] [rbp-48h]
  char *ptra; // [rsp+0h] [rbp-48h]
  __int64 **i; // [rsp+8h] [rbp-40h]
  __int64 v161; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 256);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    if ( !v3 )
      goto LABEL_13;
    v4 = *(_QWORD *)(a1 + 240);
    v5 = 4LL * (unsigned int)(v3 - 1);
    do
    {
      v8 = *(unsigned int *)(v2 + v5);
      v9 = 0x7FFFFFFF8LL;
      v7 = *(_QWORD *)(v4 + 8 * v8);
      if ( v7 )
        v9 = 8LL * (unsigned int)(*(_DWORD *)(v7 - 4) - 1);
      v10 = *(_QWORD ***)(v7 + v9);
      if ( v10 )
      {
        v11 = (__int64 (__fastcall *)(_QWORD *))**v10;
        if ( v11 == sub_83AF80 )
        {
          *v10 = &off_1C55220;
          v6 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v10 + 3);
          sub_182CBA0(v6, v10 + 5);
        }
        else
        {
          v11(v10);
        }
        sub_186B220(v10);
        v4 = *(_QWORD *)(a1 + 240);
        v2 = *(_QWORD *)(a1 + 256);
        v7 = *(_QWORD *)(v4 + 8 * v8);
      }
      v5 -= 4;
      --*(_DWORD *)(v7 - 4);
    }
    while ( v5 != -4 );
    if ( v2 )
LABEL_13:
      *(_DWORD *)(v2 - 4) = 0;
  }
  v12 = *(__int64 ***)(a1 + 104);
  if ( v12 )
  {
    for ( i = &v12[*((unsigned int *)v12 - 1)]; i != v12; ++v12 )
    {
      v13 = *v12;
      if ( *v12 )
      {
        v14 = v13[5];
        if ( v14 )
          sub_186B220((void *)(v14 - 8));
        v15 = v13[4];
        if ( v15 )
          sub_186B220((void *)(v15 - 8));
        v16 = v13[3];
        if ( v16 )
          sub_186B220((void *)(v16 - 8));
        v17 = (unsigned int *)v13[2];
        if ( v17 )
        {
          v18 = *(v17 - 1);
          if ( (_DWORD)v18 )
          {
            ptr = &v17[8 * v18];
            do
            {
              v19 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v17);
              v20 = (char *)(v17 + 4);
              v17 += 8;
              sub_182CBA0(v19, v20);
            }
            while ( v17 != ptr );
            v17 = (unsigned int *)v13[2];
          }
          sub_186B220(v17 - 2);
        }
        v21 = (__int64 *)v13[1];
        if ( v21 )
        {
          v22 = &v21[*((unsigned int *)v21 - 1)];
          if ( v21 >= v22 )
            goto LABEL_37;
          do
          {
            while ( 1 )
            {
              v23 = *v21;
              if ( *v21 )
              {
                v24 = *v13;
                if ( (*(_DWORD *)(v23 + 8))-- == 1 )
                  break;
              }
              if ( ++v21 >= v22 )
                goto LABEL_36;
            }
            sub_15D7BC0(v24, v23);
            ++v21;
          }
          while ( v21 < v22 );
LABEL_36:
          v21 = (__int64 *)v13[1];
          if ( v21 )
LABEL_37:
            sub_186B220(v21 - 1);
        }
        sub_186B220(v13);
      }
    }
  }
  sub_A72BE0(*(_QWORD *)(a1 + 904), *(_QWORD *)(a1 + 912));
  sub_2334C0((__int64 *)(a1 + 888));
  v26 = *(_QWORD *)(a1 + 864);
  if ( v26 )
  {
    v27 = *(unsigned int *)(v26 - 4);
    if ( (_DWORD)v27 )
    {
      v28 = v26 + 16 * v27;
      do
      {
        v29 = v26;
        v26 += 16;
        sub_15D0DF0(v29);
      }
      while ( v28 != v26 );
      v26 = *(_QWORD *)(a1 + 864);
    }
    sub_186B220((void *)(v26 - 8));
  }
  v30 = *(_QWORD *)(a1 + 856);
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = *(_QWORD *)(a1 + 848);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = *(void **)(a1 + 824);
  if ( v32 )
    sub_186B220(v32);
  v33 = *(_QWORD *)(a1 + 816);
  if ( v33 )
  {
    v34 = *(unsigned int *)(v33 - 4);
    if ( (_DWORD)v34 )
    {
      v35 = v33 + 40 * v34;
      do
      {
        v36 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v33 + 8);
        v37 = v33 + 24;
        v33 += 40;
        sub_182CBA0(v36, v37);
      }
      while ( v35 != v33 );
      v33 = *(_QWORD *)(a1 + 816);
    }
    sub_186B220((void *)(v33 - 8));
  }
  v38 = *(_QWORD *)(a1 + 808);
  if ( v38 )
  {
    v39 = *(unsigned int *)(v38 - 4);
    if ( (_DWORD)v39 )
    {
      v40 = v38 + 40 * v39;
      do
      {
        v41 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v38 + 8);
        v42 = v38 + 24;
        v38 += 40;
        sub_182CBA0(v41, v42);
      }
      while ( v40 != v38 );
      v38 = *(_QWORD *)(a1 + 808);
    }
    sub_186B220((void *)(v38 - 8));
  }
  v43 = *(_QWORD *)(a1 + 800);
  if ( v43 )
  {
    v44 = *(unsigned int *)(v43 - 4);
    if ( (_DWORD)v44 )
    {
      v45 = v43 + 40 * v44;
      do
      {
        v46 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v43 + 8);
        v47 = v43 + 24;
        v43 += 40;
        sub_182CBA0(v46, v47);
      }
      while ( v45 != v43 );
      v43 = *(_QWORD *)(a1 + 800);
    }
    sub_186B220((void *)(v43 - 8));
  }
  v48 = *(_QWORD *)(a1 + 792);
  if ( v48 )
  {
    v49 = *(unsigned int *)(v48 - 4);
    if ( (_DWORD)v49 )
    {
      v50 = v48 + 40 * v49;
      do
      {
        v51 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v48 + 8);
        v52 = v48 + 24;
        v48 += 40;
        sub_182CBA0(v51, v52);
      }
      while ( v50 != v48 );
      v48 = *(_QWORD *)(a1 + 792);
    }
    sub_186B220((void *)(v48 - 8));
  }
  v53 = *(_QWORD *)(a1 + 784);
  if ( v53 )
    sub_186B220((void *)(v53 - 8));
  v54 = *(_QWORD *)(a1 + 776);
  if ( v54 )
    sub_186B220((void *)(v54 - 8));
  v55 = *(_QWORD *)(a1 + 760);
  if ( v55 )
  {
    v56 = *(unsigned int *)(v55 - 4);
    if ( (_DWORD)v56 )
    {
      v57 = v55 + 40 * v56;
      do
      {
        v58 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v55 + 8);
        v59 = v55 + 24;
        v55 += 40;
        sub_182CBA0(v58, v59);
      }
      while ( v55 != v57 );
      v55 = *(_QWORD *)(a1 + 760);
    }
    sub_186B220((void *)(v55 - 8));
  }
  v60 = *(char **)(a1 + 736);
  if ( v60 )
  {
    v61 = *(unsigned int *)(a1 + 744);
    if ( (_DWORD)v61 )
    {
      v62 = *(char **)(a1 + 736);
      v63 = &v60[48 * v61];
      do
      {
        v64 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v62 + 8);
        v65 = v62 + 24;
        v62 += 48;
        sub_182CBA0(v64, v65);
      }
      while ( v62 != v63 );
    }
    sub_186B220(v60);
  }
  v66 = *(_QWORD *)(a1 + 728);
  if ( v66 )
  {
    v67 = *(unsigned int *)(v66 - 4);
    if ( (_DWORD)v67 )
    {
      v68 = v66 + 32 * v67;
      do
      {
        v69 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v66);
        v70 = v66 + 16;
        v66 += 32;
        sub_182CBA0(v69, v70);
      }
      while ( v66 != v68 );
      v66 = *(_QWORD *)(a1 + 728);
    }
    sub_186B220((void *)(v66 - 8));
  }
  v71 = *(char **)(a1 + 696);
  if ( v71 )
  {
    v72 = *(unsigned int *)(a1 + 704);
    if ( (_DWORD)v72 )
    {
      v73 = *(char **)(a1 + 696);
      v74 = &v71[48 * v72];
      do
      {
        v75 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v73 + 8);
        v76 = v73 + 24;
        v73 += 48;
        sub_182CBA0(v75, v76);
      }
      while ( v73 != v74 );
    }
    sub_186B220(v71);
  }
  v77 = *(char **)(a1 + 672);
  if ( v77 )
  {
    v78 = *(unsigned int *)(a1 + 680);
    if ( (_DWORD)v78 )
    {
      v79 = *(char **)(a1 + 672);
      v80 = &v77[48 * v78];
      do
      {
        v81 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v79 + 8);
        v82 = v79 + 24;
        v79 += 48;
        sub_182CBA0(v81, v82);
      }
      while ( v79 != v80 );
    }
    sub_186B220(v77);
  }
  v83 = *(char **)(a1 + 648);
  if ( v83 )
  {
    v84 = *(unsigned int *)(a1 + 656);
    if ( (_DWORD)v84 )
    {
      v85 = *(char **)(a1 + 648);
      v86 = &v83[48 * v84];
      do
      {
        v87 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v85 + 8);
        v88 = v85 + 24;
        v85 += 48;
        sub_182CBA0(v87, v88);
      }
      while ( v85 != v86 );
    }
    sub_186B220(v83);
  }
  v89 = *(void **)(a1 + 608);
  if ( v89 )
    sub_186B220(v89);
  v90 = *(void **)(a1 + 584);
  if ( v90 )
    sub_186B220(v90);
  v91 = *(_QWORD *)(a1 + 576);
  if ( v91 )
    sub_186B220((void *)(v91 - 8));
  v92 = *(_QWORD **)(a1 + 560);
  v93 = *(_QWORD **)(a1 + 552);
  if ( v92 != v93 )
  {
    do
    {
      v94 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v93[7];
      if ( v94 )
        v94(v93 + 5, v93 + 5, 3);
      v95 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v93);
      v96 = v93 + 2;
      v93 += 9;
      sub_182CBA0(v95, v96);
    }
    while ( v92 != v93 );
    v93 = *(_QWORD **)(a1 + 552);
  }
  if ( v93 )
    sub_186B220(v93);
  v97 = *(_QWORD *)(a1 + 544);
  if ( v97 )
  {
    v98 = *(unsigned int *)(v97 - 4);
    if ( (_DWORD)v98 )
    {
      v99 = v97 + 16 * v98;
      do
      {
        v100 = v97;
        v97 += 16;
        sub_15D0DF0(v100);
      }
      while ( v97 != v99 );
      v97 = *(_QWORD *)(a1 + 544);
    }
    sub_186B220((void *)(v97 - 8));
  }
  v101 = *(_QWORD *)(a1 + 528);
  if ( v101 )
    sub_186B220((void *)(v101 - 8));
  v102 = *(void (__fastcall ****)(_QWORD))(a1 + 504);
  if ( v102 )
  {
    (**v102)(*(_QWORD *)(a1 + 504));
    sub_186B220(v102);
  }
  v103 = *(_QWORD *)(a1 + 424);
  if ( v103 )
    sub_186B220((void *)(v103 - 8));
  v104 = *(void **)(a1 + 400);
  if ( v104 )
    sub_186B220(v104);
  v105 = *(void **)(a1 + 360);
  if ( v105 )
    sub_186B220(v105);
  v106 = *(_QWORD *)(a1 + 352);
  if ( v106 )
  {
    v107 = *(unsigned int *)(v106 - 4);
    if ( (_DWORD)v107 )
    {
      v108 = v106 + 40 * v107;
      do
      {
        v109 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v106 + 8);
        v110 = v106 + 24;
        v106 += 40;
        sub_182CBA0(v109, v110);
      }
      while ( v106 != v108 );
      v106 = *(_QWORD *)(a1 + 352);
    }
    sub_186B220((void *)(v106 - 8));
  }
  v111 = *(_QWORD *)(a1 + 344);
  if ( v111 )
  {
    v112 = *(unsigned int *)(v111 - 4);
    if ( (_DWORD)v112 )
    {
      v161 = v111 + 72 * v112;
      do
      {
        v113 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v111 + 40);
        sub_182CBA0(v113, v111 + 56);
        ptra = *(char **)(v111 + 8);
        if ( ptra )
        {
          v114 = *(unsigned int *)(v111 + 16);
          if ( (_DWORD)v114 )
          {
            v115 = *(char **)(v111 + 8);
            v116 = &ptra[48 * v114];
            do
            {
              v117 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v115 + 16);
              v118 = v115 + 32;
              v115 += 48;
              sub_182CBA0(v117, v118);
            }
            while ( v115 != v116 );
          }
          sub_186B220(ptra);
        }
        v111 += 72;
      }
      while ( v111 != v161 );
      v111 = *(_QWORD *)(a1 + 344);
    }
    sub_186B220((void *)(v111 - 8));
  }
  v119 = *(void **)(a1 + 336);
  if ( v119 )
  {
    sub_FE7900(*(_QWORD *)(a1 + 336));
    sub_186B220(v119);
  }
  v120 = *(void **)(a1 + 328);
  if ( v120 )
  {
    sub_1021E20(*(_QWORD *)(a1 + 328));
    sub_186B220(v120);
  }
  v121 = *(_QWORD *)(a1 + 312);
  if ( v121 )
    sub_186B220((void *)(v121 - 8));
  v122 = *(_QWORD *)(a1 + 304);
  if ( v122 )
    sub_186B220((void *)(v122 - 8));
  v123 = *(_QWORD *)(a1 + 280);
  if ( v123 )
    sub_186B220((void *)(v123 - 8));
  v124 = *(_QWORD *)(a1 + 272);
  if ( v124 )
    sub_186B220((void *)(v124 - 8));
  v125 = *(_QWORD *)(a1 + 256);
  if ( v125 )
    sub_186B220((void *)(v125 - 8));
  v126 = *(_QWORD *)(a1 + 248);
  if ( v126 )
    sub_186B220((void *)(v126 - 8));
  v127 = *(_QWORD **)(a1 + 240);
  if ( v127 )
  {
    v128 = *((unsigned int *)v127 - 1);
    if ( (_DWORD)v128 )
    {
      v129 = &v127[v128];
      do
      {
        while ( *v127 )
        {
          v130 = (void *)(*v127++ - 8LL);
          sub_186B220(v130);
          if ( v127 == v129 )
          {
            v127 = *(_QWORD **)(a1 + 240);
            goto LABEL_180;
          }
        }
        ++v127;
      }
      while ( v127 != v129 );
      v127 = *(_QWORD **)(a1 + 240);
    }
LABEL_180:
    sub_186B220(v127 - 1);
  }
  v131 = *(void **)(a1 + 216);
  if ( v131 )
    sub_186B220(v131);
  v132 = *(_QWORD **)(a1 + 208);
  if ( v132 )
  {
    v133 = *((unsigned int *)v132 - 1);
    if ( (_DWORD)v133 )
    {
      v134 = &v132[v133];
      do
      {
        while ( *v132 )
        {
          v135 = (void *)(*v132++ - 8LL);
          sub_186B220(v135);
          if ( v132 == v134 )
          {
            v132 = *(_QWORD **)(a1 + 208);
            goto LABEL_189;
          }
        }
        ++v132;
      }
      while ( v132 != v134 );
      v132 = *(_QWORD **)(a1 + 208);
    }
LABEL_189:
    sub_186B220(v132 - 1);
  }
  v136 = *(_QWORD *)(a1 + 200);
  if ( v136 )
    sub_186B220((void *)(v136 - 8));
  v137 = *(_QWORD *)(a1 + 192);
  if ( v137 )
    sub_186B220((void *)(v137 - 8));
  v138 = *(_QWORD *)(a1 + 184);
  if ( v138 )
    sub_186B220((void *)(v138 - 8));
  v139 = *(_QWORD *)(a1 + 176);
  if ( v139 )
    sub_186B220((void *)(v139 - 8));
  v140 = *(_QWORD *)(a1 + 168);
  if ( v140 )
    sub_186B220((void *)(v140 - 8));
  v141 = *(_QWORD *)(a1 + 160);
  if ( v141 )
    sub_186B220((void *)(v141 - 8));
  v142 = *(_QWORD *)(a1 + 152);
  if ( v142 )
    sub_186B220((void *)(v142 - 8));
  v143 = *(_QWORD *)(a1 + 144);
  if ( v143 )
    sub_186B220((void *)(v143 - 8));
  v144 = *(_QWORD *)(a1 + 120);
  if ( v144 )
  {
    v145 = *(unsigned int *)(v144 - 4);
    if ( (_DWORD)v145 )
    {
      v146 = v144 + 40 * v145;
      do
      {
        v147 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v144);
        v148 = v144 + 16;
        v144 += 40;
        sub_182CBA0(v147, v148);
      }
      while ( v144 != v146 );
      v144 = *(_QWORD *)(a1 + 120);
    }
    sub_186B220((void *)(v144 - 8));
  }
  v149 = *(_QWORD *)(a1 + 104);
  if ( v149 )
    sub_186B220((void *)(v149 - 8));
  v150 = *(_QWORD *)(a1 + 96);
  if ( v150 )
  {
    v151 = *(unsigned int *)(v150 - 4);
    if ( (_DWORD)v151 )
    {
      v152 = v150 + 32 * v151;
      do
      {
        v153 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v150);
        v154 = v150 + 16;
        v150 += 32;
        sub_182CBA0(v153, v154);
      }
      while ( v150 != v152 );
      v150 = *(_QWORD *)(a1 + 96);
    }
    sub_186B220((void *)(v150 - 8));
  }
  v155 = *(_QWORD *)(a1 + 88);
  if ( v155 )
    sub_186B220((void *)(v155 - 8));
  result = *(_QWORD *)(a1 + 80);
  if ( result )
    result = sub_186B220((void *)(result - 8));
  v157 = *(void **)(a1 + 56);
  if ( v157 )
    return sub_186B220(v157);
  return result;
}

