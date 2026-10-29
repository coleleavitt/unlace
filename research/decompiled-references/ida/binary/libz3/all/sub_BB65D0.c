__int64 __fastcall sub_BB65D0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  int v4; // r13d
  unsigned int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rdi
  int v13; // r13d
  int v14; // r12d
  int v15; // ebp
  int v16; // eax
  __int64 v17; // rax
  int v18; // r12d
  __int64 v19; // r11
  __int64 v20; // rdi
  __int64 v21; // r8
  unsigned int v22; // r10d
  unsigned int v23; // edx
  __int64 v24; // r9
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // rbp
  __int64 *v32; // r12
  __int64 *v33; // r14
  __int64 *v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rdi
  bool v37; // zf
  __int64 *v38; // r14
  __int64 *v39; // r15
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // r11
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // r8
  unsigned int v51; // r10d
  unsigned int v52; // edx
  __int64 v53; // r9
  unsigned int v54; // edx
  __int64 v55; // rax
  unsigned __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 *v61; // rbp
  __int64 v62; // rax
  __int64 *v63; // r15
  __int64 v64; // rax
  __int64 *v65; // r12
  __int64 *v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 *v69; // r14
  __int64 *v70; // r12
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rax
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rax
  int v81; // r12d
  __int64 v82; // rbp
  unsigned int v83; // r12d
  __int64 v84; // rdi
  __int64 v85; // r9
  unsigned int v86; // r11d
  unsigned int v87; // edx
  __int64 v88; // r10
  unsigned int v89; // edx
  __int64 v90; // rax
  unsigned __int64 v91; // rsi
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 *v95; // rdx
  __int64 v96; // r14
  __int64 *v97; // rbp
  __int64 v98; // rsi
  __int64 v99; // rdi
  __int64 v100; // rax
  int v101; // eax
  __int64 v102; // rax
  __int64 v103; // rax
  int v104; // ebp
  __int64 v105; // r11
  unsigned int v106; // ebp
  __int64 v107; // rdi
  __int64 v108; // r8
  unsigned int v109; // r10d
  unsigned int v110; // edx
  __int64 v111; // r9
  unsigned int v112; // edx
  __int64 v113; // rax
  unsigned __int64 v114; // rsi
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rax
  int v118; // eax
  __int64 v119; // rax
  __int64 v120; // rax
  int v121; // ebp
  __int64 v122; // r11
  unsigned int v123; // ebp
  __int64 v124; // rdi
  __int64 v125; // r8
  unsigned int v126; // r10d
  unsigned int v127; // edx
  __int64 v128; // r9
  unsigned int v129; // edx
  __int64 v130; // rax
  unsigned __int64 v131; // rsi
  __int64 v132; // rdx
  __int64 v133; // rax
  __int64 v134; // rax
  int v135; // eax
  __int64 v136; // rax
  _QWORD *v138; // rbp
  _QWORD *v139; // r13
  void (__fastcall ***v140)(_QWORD); // r12
  unsigned int v141; // [rsp+8h] [rbp-60h]
  __int64 *v142; // [rsp+8h] [rbp-60h]
  __int64 *v143; // [rsp+8h] [rbp-60h]
  __int64 v145; // [rsp+18h] [rbp-50h]
  __int64 *v146; // [rsp+18h] [rbp-50h]
  __int64 v147; // [rsp+20h] [rbp-48h]
  unsigned int v148; // [rsp+28h] [rbp-40h]
  unsigned int v149; // [rsp+28h] [rbp-40h]
  unsigned int v150; // [rsp+2Ch] [rbp-3Ch]

  if ( !a2 )
  {
    sub_965AE0(a1, 0);
    goto LABEL_158;
  }
  v3 = *(_QWORD *)(a1 + 3952);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = v4 - a2;
  v6 = *(_QWORD *)(a1 + 3944);
  v7 = *(unsigned int *)(v3 + 4LL * v5);
  v8 = 8 * v7;
  v9 = v6 + 8 * v7;
  if ( v6 )
  {
    v10 = 8LL * *(unsigned int *)(v6 - 4);
    v11 = v6 + v10;
    if ( v8 == v10 )
    {
LABEL_8:
      *(_DWORD *)(v6 - 4) = v7;
      goto LABEL_9;
    }
  }
  else
  {
    v11 = 0;
    if ( !v8 )
      goto LABEL_9;
  }
  do
  {
    v12 = *(_QWORD *)(v11 - 8);
    v11 -= 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  while ( v9 != v11 );
  v6 = *(_QWORD *)(a1 + 3944);
  v3 = *(_QWORD *)(a1 + 3952);
  if ( v6 )
    goto LABEL_8;
LABEL_9:
  if ( v3 )
    *(_DWORD *)(v3 - 4) = v5;
  v13 = 0;
  do
  {
    v14 = v13++;
    sub_180C2E0(a1 + 3960);
  }
  while ( a2 != v13 );
  v15 = 0;
  sub_965AE0(a1, a2);
  do
  {
    sub_180C2E0(a1 + 72);
    v16 = v15++;
  }
  while ( v14 != v16 );
  sub_BB5DB0((_QWORD *)(a1 + 136), v13);
  sub_BB5780(a1 + 920, v13);
  v17 = *(_QWORD *)(a1 + 248);
  if ( v17 )
    v18 = *(_DWORD *)(v17 - 4);
  else
    v18 = 0;
  v19 = *(_QWORD *)(a1 + 296);
  v20 = *(_QWORD *)(a1 + 280);
  v141 = v18 - v13;
  v21 = *(_QWORD *)(a1 + 288);
  v145 = (unsigned int)(v18 - v13);
  v22 = *(_DWORD *)(v19 + 4 * v145);
  if ( v20 )
  {
    v23 = *(_DWORD *)(v20 - 4);
    if ( v22 < v23 )
    {
      v24 = *(_QWORD *)(a1 + 272);
      v25 = v23 - 1;
      v26 = 4LL * v25;
      v27 = 4 * (v25 - (unsigned __int64)(v25 - v22));
      do
      {
        *(_DWORD *)(v24 + 4LL * *(unsigned int *)(v20 + v26)) = *(_DWORD *)(v21 + v26);
        v28 = v26;
        v26 -= 4;
      }
      while ( v27 != v28 );
      *(_DWORD *)(v20 - 4) = v22;
      goto LABEL_22;
    }
    *(_DWORD *)(v20 - 4) = v22;
  }
  if ( v21 )
LABEL_22:
    *(_DWORD *)(v21 - 4) = v22;
  if ( v19 )
    *(_DWORD *)(v19 - 4) = v141;
  v29 = *(_QWORD *)(a1 + 256);
  if ( v29 )
  {
    v30 = 48LL * *(unsigned int *)(v29 - 4);
    v148 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 4 * v145);
    v31 = (__int64 *)(v29 + v30);
    v32 = (__int64 *)(v29 + 48LL * v148);
    if ( 48LL * v148 != v30 )
    {
      do
      {
        v33 = (__int64 *)v32[3];
        if ( v33 )
        {
          v34 = &v33[*((unsigned int *)v33 - 1)];
          if ( v33 >= v34 )
            goto LABEL_35;
          do
          {
            while ( 1 )
            {
              v35 = *v33;
              if ( *v33 )
              {
                v36 = v32[2];
                v37 = (*(_DWORD *)(v35 + 8))-- == 1;
                if ( v37 )
                  break;
              }
              if ( ++v33 >= v34 )
                goto LABEL_34;
            }
            sub_15D7BC0(v36, v35);
            ++v33;
          }
          while ( v33 < v34 );
LABEL_34:
          v33 = (__int64 *)v32[3];
          if ( v33 )
LABEL_35:
            sub_186B220(v33 - 1);
        }
        v38 = (__int64 *)v32[1];
        if ( v38 )
        {
          v39 = &v38[*((unsigned int *)v38 - 1)];
          if ( v38 >= v39 )
            goto LABEL_44;
          do
          {
            while ( 1 )
            {
              v40 = *v38;
              if ( *v38 )
              {
                v41 = *v32;
                v37 = (*(_DWORD *)(v40 + 8))-- == 1;
                if ( v37 )
                  break;
              }
              if ( ++v38 >= v39 )
                goto LABEL_43;
            }
            sub_15D7BC0(v41, v40);
            ++v38;
          }
          while ( v38 < v39 );
LABEL_43:
          v38 = (__int64 *)v32[1];
          if ( v38 )
LABEL_44:
            sub_186B220(v38 - 1);
        }
        v32 += 6;
      }
      while ( v31 != v32 );
      v29 = *(_QWORD *)(a1 + 256);
    }
    *(_DWORD *)(v29 - 4) = v148;
  }
  sub_83BF90((_QWORD *)(a1 + 264), v141);
  v42 = *(_QWORD *)(a1 + 256);
  if ( v42 )
    v43 = *(_DWORD *)(v42 - 4);
  else
    v43 = 0;
  *(_DWORD *)(a1 + 244) = v43;
  v44 = *(_QWORD *)(a1 + 248);
  *(_DWORD *)(a1 + 240) = *(_DWORD *)(v44 + 4 * v145);
  if ( v44 )
    *(_DWORD *)(v44 - 4) = v141;
  v45 = *(_QWORD *)(a1 + 312);
  if ( v45 )
    v46 = *(_DWORD *)(v45 - 4);
  else
    v46 = 0;
  v47 = *(_QWORD *)(a1 + 360);
  v48 = *(_QWORD *)(a1 + 344);
  v49 = (unsigned int)(v46 - v13);
  v149 = v49;
  v50 = *(_QWORD *)(a1 + 352);
  v147 = v49;
  v51 = *(_DWORD *)(v47 + 4 * v49);
  if ( v48 )
  {
    v52 = *(_DWORD *)(v48 - 4);
    if ( v51 < v52 )
    {
      v53 = *(_QWORD *)(a1 + 336);
      v54 = v52 - 1;
      v55 = 4LL * v54;
      v56 = 4 * (v54 - (unsigned __int64)(v54 - v51));
      do
      {
        *(_DWORD *)(v53 + 4LL * *(unsigned int *)(v48 + v55)) = *(_DWORD *)(v50 + v55);
        v57 = v55;
        v55 -= 4;
      }
      while ( v56 != v57 );
      *(_DWORD *)(v48 - 4) = v51;
      goto LABEL_59;
    }
    *(_DWORD *)(v48 - 4) = v51;
  }
  if ( v50 )
LABEL_59:
    *(_DWORD *)(v50 - 4) = v51;
  if ( v47 )
    *(_DWORD *)(v47 - 4) = v149;
  v58 = *(_QWORD *)(a1 + 320);
  if ( v58 )
  {
    v150 = *(_DWORD *)(*(_QWORD *)(a1 + 328) + 4 * v147);
    v59 = 56LL * v150;
    v60 = 56LL * *(unsigned int *)(v58 - 4);
    v61 = (__int64 *)(v58 + v59);
    v146 = (__int64 *)(v58 + v60);
    if ( v59 != v60 )
    {
      do
      {
        v62 = v61[5];
        if ( v62 )
          sub_186B220((void *)(v62 - 8));
        v63 = (__int64 *)v61[4];
        if ( v63 )
        {
          v64 = *((unsigned int *)v63 - 1);
          if ( (_DWORD)v64 )
          {
            v142 = &v63[4 * v64];
            do
            {
              v65 = (__int64 *)v63[3];
              if ( v65 )
              {
                v66 = &v65[*((unsigned int *)v65 - 1)];
                if ( v65 >= v66 )
                  goto LABEL_77;
                do
                {
                  while ( 1 )
                  {
                    v67 = *v65;
                    if ( *v65 )
                    {
                      v68 = v63[2];
                      v37 = (*(_DWORD *)(v67 + 8))-- == 1;
                      if ( v37 )
                        break;
                    }
                    if ( ++v65 >= v66 )
                      goto LABEL_76;
                  }
                  sub_15D7BC0(v68, v67);
                  ++v65;
                }
                while ( v65 < v66 );
LABEL_76:
                v65 = (__int64 *)v63[3];
                if ( v65 )
LABEL_77:
                  sub_186B220(v65 - 1);
              }
              v69 = (__int64 *)v63[1];
              if ( v69 )
              {
                v70 = &v69[*((unsigned int *)v69 - 1)];
                if ( v69 >= v70 )
                  goto LABEL_86;
                do
                {
                  while ( 1 )
                  {
                    v71 = *v69;
                    if ( *v69 )
                    {
                      v72 = *v63;
                      v37 = (*(_DWORD *)(v71 + 8))-- == 1;
                      if ( v37 )
                        break;
                    }
                    if ( ++v69 >= v70 )
                      goto LABEL_85;
                  }
                  sub_15D7BC0(v72, v71);
                  ++v69;
                }
                while ( v69 < v70 );
LABEL_85:
                v69 = (__int64 *)v63[1];
                if ( v69 )
LABEL_86:
                  sub_186B220(v69 - 1);
              }
              v63 += 4;
            }
            while ( v63 != v142 );
            v63 = (__int64 *)v61[4];
          }
          sub_186B220(v63 - 1);
        }
        v73 = v61[2];
        if ( v73 )
        {
          v74 = v61[3];
          v37 = (*(_DWORD *)(v73 + 8))-- == 1;
          if ( v37 )
            sub_15D7BC0(v74, v73);
        }
        v75 = *v61;
        if ( *v61 )
        {
          v76 = v61[1];
          v37 = (*(_DWORD *)(v75 + 8))-- == 1;
          if ( v37 )
            sub_15D7BC0(v76, v75);
        }
        v61 += 7;
      }
      while ( v146 != v61 );
      v58 = *(_QWORD *)(a1 + 320);
    }
    *(_DWORD *)(v58 - 4) = v150;
  }
  sub_83BF90((_QWORD *)(a1 + 328), v149);
  v77 = *(_QWORD *)(a1 + 320);
  if ( v77 )
    v78 = *(_DWORD *)(v77 - 4);
  else
    v78 = 0;
  *(_DWORD *)(a1 + 308) = v78;
  v79 = *(_QWORD *)(a1 + 312);
  *(_DWORD *)(a1 + 304) = *(_DWORD *)(v79 + 4 * v147);
  if ( v79 )
    *(_DWORD *)(v79 - 4) = v149;
  v80 = *(_QWORD *)(a1 + 376);
  if ( v80 )
    v81 = *(_DWORD *)(v80 - 4);
  else
    v81 = 0;
  v82 = *(_QWORD *)(a1 + 424);
  v83 = v81 - v13;
  v84 = *(_QWORD *)(a1 + 408);
  v85 = *(_QWORD *)(a1 + 416);
  v86 = *(_DWORD *)(v82 + 4LL * v83);
  if ( v84 )
  {
    v87 = *(_DWORD *)(v84 - 4);
    if ( v86 < v87 )
    {
      v88 = *(_QWORD *)(a1 + 400);
      v89 = v87 - 1;
      v90 = 4LL * v89;
      v91 = 4 * (v89 - (unsigned __int64)(v89 - v86));
      do
      {
        *(_DWORD *)(v88 + 4LL * *(unsigned int *)(v84 + v90)) = *(_DWORD *)(v85 + v90);
        v92 = v90;
        v90 -= 4;
      }
      while ( v91 != v92 );
      *(_DWORD *)(v84 - 4) = v86;
      goto LABEL_110;
    }
    *(_DWORD *)(v84 - 4) = v86;
  }
  if ( v85 )
LABEL_110:
    *(_DWORD *)(v85 - 4) = v86;
  if ( v82 )
    *(_DWORD *)(v82 - 4) = v83;
  v93 = *(_QWORD *)(a1 + 384);
  if ( v93 )
  {
    v94 = 32LL * *(unsigned int *)(v93 - 4);
    v95 = (__int64 *)(v93 + v94);
    v96 = *(unsigned int *)(*(_QWORD *)(a1 + 392) + 4LL * v83);
    v97 = (__int64 *)(v93 + 32 * v96);
    if ( 32 * v96 != v94 )
    {
      do
      {
        while ( 1 )
        {
          v98 = *v97;
          if ( *v97 )
          {
            v99 = v97[1];
            v37 = (*(_DWORD *)(v98 + 8))-- == 1;
            if ( v37 )
              break;
          }
          v97 += 4;
          if ( v95 == v97 )
            goto LABEL_120;
        }
        v143 = v95;
        v97 += 4;
        sub_15D7BC0(v99, v98);
        v95 = v143;
      }
      while ( v143 != v97 );
LABEL_120:
      v93 = *(_QWORD *)(a1 + 384);
    }
    *(_DWORD *)(v93 - 4) = v96;
  }
  sub_83BF90((_QWORD *)(a1 + 392), v83);
  v100 = *(_QWORD *)(a1 + 384);
  if ( v100 )
    v101 = *(_DWORD *)(v100 - 4);
  else
    v101 = 0;
  *(_DWORD *)(a1 + 372) = v101;
  v102 = *(_QWORD *)(a1 + 376);
  *(_DWORD *)(a1 + 368) = *(_DWORD *)(v102 + 4LL * v83);
  if ( v102 )
    *(_DWORD *)(v102 - 4) = v83;
  v103 = *(_QWORD *)(a1 + 440);
  if ( v103 )
    v104 = *(_DWORD *)(v103 - 4);
  else
    v104 = 0;
  v105 = *(_QWORD *)(a1 + 488);
  v106 = v104 - v13;
  v107 = *(_QWORD *)(a1 + 472);
  v108 = *(_QWORD *)(a1 + 480);
  v109 = *(_DWORD *)(v105 + 4LL * v106);
  if ( v107 )
  {
    v110 = *(_DWORD *)(v107 - 4);
    if ( v109 < v110 )
    {
      v111 = *(_QWORD *)(a1 + 464);
      v112 = v110 - 1;
      v113 = 4LL * v112;
      v114 = 4 * (v112 - (unsigned __int64)(v112 - v109));
      do
      {
        *(_DWORD *)(v111 + 4LL * *(unsigned int *)(v107 + v113)) = *(_DWORD *)(v108 + v113);
        v115 = v113;
        v113 -= 4;
      }
      while ( v115 != v114 );
      *(_DWORD *)(v107 - 4) = v109;
      goto LABEL_133;
    }
    *(_DWORD *)(v107 - 4) = v109;
  }
  if ( v108 )
LABEL_133:
    *(_DWORD *)(v108 - 4) = v109;
  if ( v105 )
    *(_DWORD *)(v105 - 4) = v106;
  v116 = *(_QWORD *)(a1 + 448);
  if ( v116 )
    *(_DWORD *)(v116 - 4) = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 4LL * v106);
  sub_83BF90((_QWORD *)(a1 + 456), v106);
  v117 = *(_QWORD *)(a1 + 448);
  if ( v117 )
    v118 = *(_DWORD *)(v117 - 4);
  else
    v118 = 0;
  *(_DWORD *)(a1 + 436) = v118;
  v119 = *(_QWORD *)(a1 + 440);
  *(_DWORD *)(a1 + 432) = *(_DWORD *)(v119 + 4LL * v106);
  if ( v119 )
    *(_DWORD *)(v119 - 4) = v106;
  v120 = *(_QWORD *)(a1 + 504);
  if ( v120 )
    v121 = *(_DWORD *)(v120 - 4);
  else
    v121 = 0;
  v122 = *(_QWORD *)(a1 + 552);
  v123 = v121 - v13;
  v124 = *(_QWORD *)(a1 + 536);
  v125 = *(_QWORD *)(a1 + 544);
  v126 = *(_DWORD *)(v122 + 4LL * v123);
  if ( !v124 )
  {
LABEL_191:
    if ( !v125 )
      goto LABEL_150;
    goto LABEL_149;
  }
  v127 = *(_DWORD *)(v124 - 4);
  if ( v126 >= v127 )
  {
    *(_DWORD *)(v124 - 4) = v126;
    goto LABEL_191;
  }
  v128 = *(_QWORD *)(a1 + 528);
  v129 = v127 - 1;
  v130 = 4LL * v129;
  v131 = 4 * (v129 - (unsigned __int64)(v129 - v126));
  do
  {
    *(_DWORD *)(v128 + 4LL * *(unsigned int *)(v124 + v130)) = *(_DWORD *)(v125 + v130);
    v132 = v130;
    v130 -= 4;
  }
  while ( v132 != v131 );
  *(_DWORD *)(v124 - 4) = v126;
LABEL_149:
  *(_DWORD *)(v125 - 4) = v126;
LABEL_150:
  if ( v122 )
    *(_DWORD *)(v122 - 4) = v123;
  v133 = *(_QWORD *)(a1 + 512);
  if ( v133 )
    *(_DWORD *)(v133 - 4) = *(_DWORD *)(*(_QWORD *)(a1 + 520) + 4LL * v123);
  sub_83BF90((_QWORD *)(a1 + 520), v123);
  v134 = *(_QWORD *)(a1 + 512);
  if ( v134 )
    v135 = *(_DWORD *)(v134 - 4);
  else
    v135 = 0;
  *(_DWORD *)(a1 + 500) = v135;
  v136 = *(_QWORD *)(a1 + 504);
  *(_DWORD *)(a1 + 496) = *(_DWORD *)(v136 + 4LL * v123);
  if ( v136 )
    *(_DWORD *)(v136 - 4) = v123;
LABEL_158:
  sub_14B6450(a1 + 1192);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 9464LL) - a2 < *(_DWORD *)(*(_QWORD *)(a1 + 16) + 9468LL) )
  {
    v138 = *(_QWORD **)(a1 + 1176);
    if ( v138 )
    {
      v139 = &v138[*((unsigned int *)v138 - 1)];
      if ( v138 == v139 )
        goto LABEL_167;
      do
      {
        v140 = (void (__fastcall ***)(_QWORD))*v138;
        if ( *v138 )
        {
          (**v140)(*v138);
          sub_186B220(v140);
        }
        ++v138;
      }
      while ( v139 != v138 );
      v139 = *(_QWORD **)(a1 + 1176);
      if ( v139 )
LABEL_167:
        *((_DWORD *)v139 - 1) = 0;
    }
  }
  return sub_BE70B0(a1 + 624, a2);
}

