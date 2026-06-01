void __fastcall sub_168ED20(__int64 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r15
  char *v7; // r13
  __int64 v8; // r12
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 *v15; // r15
  void *v16; // rbp
  char *v17; // rbx
  __int64 v18; // r14
  void *v19; // rdi
  int v20; // r13d
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rbp
  unsigned __int64 v24; // rcx
  unsigned int v25; // r12d
  unsigned int v26; // edi
  __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rbx
  unsigned __int64 v32; // rcx
  __int64 v33; // rbx
  unsigned __int64 v34; // rax
  _BYTE *v35; // rax
  _BYTE *v36; // r14
  signed __int64 v37; // rbp
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  _QWORD *j; // rdx
  __int64 *v42; // r14
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rsi
  int v46; // edi
  unsigned int v47; // ecx
  _QWORD *v48; // rax
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  _QWORD *v55; // r15
  _QWORD *v56; // rbx
  unsigned __int64 v57; // r12
  unsigned __int64 v58; // rax
  _QWORD *v59; // r13
  _QWORD *v60; // rbp
  _QWORD *v61; // rdi
  void *v62; // rdi
  void **v63; // rbp
  void **v64; // r13
  int v65; // edi
  int v66; // edx
  int v67; // r10d
  unsigned int v68; // r8d
  __int64 v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rdx
  int v72; // eax
  int v73; // eax
  __int64 *v74; // r10
  __int64 v75; // rbx
  void *v76; // rdi
  int v77; // r14d
  __int64 v78; // rax
  unsigned __int64 v79; // rax
  _QWORD *v80; // rax
  _QWORD *i; // rdx
  __int64 *v82; // r14
  int v83; // eax
  __int64 v84; // rsi
  int v85; // edi
  unsigned int v86; // ecx
  _QWORD *v87; // rax
  __int64 v88; // r8
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  _QWORD *v94; // r15
  _QWORD *v95; // rbx
  unsigned __int64 v96; // r12
  unsigned __int64 v97; // rax
  _QWORD *v98; // r13
  _QWORD *v99; // rbp
  _QWORD *v100; // rdi
  void *v101; // rdi
  void **v102; // rbp
  void **v103; // r13
  int v104; // edi
  int v105; // r8d
  unsigned int v106; // r10d
  int v107; // r12d
  __int64 *v108; // r11
  __int64 v109; // rdx
  __int64 v110; // rdx
  int v111; // eax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rbx
  __int64 v115; // rbp
  __int64 v116; // rbx
  void *v117; // rdi
  char *v118; // r14
  __int64 v119; // rbx
  void *v120; // rdi
  int v121; // r13d
  __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rbp
  __int64 v125; // r14
  __int64 v126; // rbp
  void *v127; // rdi
  __int64 v128; // rsi
  _QWORD *v129; // rsi
  _QWORD *v130; // rdx
  __int64 v131; // rsi
  _QWORD *v132; // rsi
  _QWORD *v133; // rdx
  int v134; // r10d
  _QWORD *v135; // r9
  int v136; // r10d
  _QWORD *v137; // r9
  int v138; // r12d
  __int64 *v139; // [rsp+0h] [rbp-88h]
  unsigned int v140; // [rsp+8h] [rbp-80h]
  __int64 *v141; // [rsp+8h] [rbp-80h]
  __int64 v142; // [rsp+10h] [rbp-78h]
  __int64 v143; // [rsp+18h] [rbp-70h]
  __int64 v144; // [rsp+18h] [rbp-70h]
  __int64 v145; // [rsp+20h] [rbp-68h]
  __int64 v146; // [rsp+20h] [rbp-68h]
  __int64 *v147; // [rsp+28h] [rbp-60h]
  __int64 v148; // [rsp+28h] [rbp-60h]
  char *v149; // [rsp+30h] [rbp-58h]
  __int64 *v150; // [rsp+30h] [rbp-58h]
  char *v151; // [rsp+38h] [rbp-50h]
  _DWORD v152[16]; // [rsp+48h] [rbp-40h] BYREF

  v6 = a1;
  v7 = a2;
  if ( *((_BYTE *)a1 + 120) )
  {
    if ( *(_DWORD *)a2 && *((_DWORD *)a2 + 1) )
    {
      v8 = a1[4];
      if ( v8 )
      {
        v9 = *(unsigned int *)(v8 + 536);
        v10 = *(unsigned int *)(v8 + 540);
        v11 = v9 + 1;
        v12 = v9 << 6;
      }
      else
      {
        v71 = a1[5];
        v72 = *(_DWORD *)(v71 + 14976);
        if ( v72 )
        {
          v113 = (unsigned int)(v72 - 1);
          *(_DWORD *)(v71 + 14976) = v113;
          v8 = *(_QWORD *)(v71 + 8 * v113 + 14848);
          v114 = *(unsigned int *)(v8 + 536);
          v115 = *(_QWORD *)(v8 + 528);
          *(_BYTE *)v8 = 0;
          *(_DWORD *)(v8 + 424) = 0;
          v116 = v115 + (v114 << 6);
          while ( v115 != v116 )
          {
            while ( 1 )
            {
              v116 -= 64;
              v117 = *(void **)(v116 + 24);
              if ( v117 == (void *)(v116 + 40) )
                break;
              operator delete(v117);
              if ( v115 == v116 )
                goto LABEL_140;
            }
          }
LABEL_140:
          *(_DWORD *)(v8 + 536) = 0;
          v10 = *(unsigned int *)(v8 + 540);
        }
        else
        {
          v10 = 6;
          v8 = operator new(0x3A0u);
          *(_BYTE *)v8 = 0;
          *(_QWORD *)(v8 + 96) = v8 + 112;
          *(_QWORD *)(v8 + 128) = v8 + 144;
          *(_QWORD *)(v8 + 160) = v8 + 176;
          *(_QWORD *)(v8 + 192) = v8 + 208;
          *(_QWORD *)(v8 + 224) = v8 + 240;
          *(_QWORD *)(v8 + 256) = v8 + 272;
          *(_QWORD *)(v8 + 288) = v8 + 304;
          *(_QWORD *)(v8 + 320) = v8 + 336;
          *(_QWORD *)(v8 + 352) = v8 + 368;
          *(_QWORD *)(v8 + 384) = v8 + 400;
          *(_QWORD *)(v8 + 416) = v8 + 432;
          *(_QWORD *)(v8 + 104) = 0;
          *(_BYTE *)(v8 + 112) = 0;
          *(_QWORD *)(v8 + 136) = 0;
          *(_BYTE *)(v8 + 144) = 0;
          *(_QWORD *)(v8 + 168) = 0;
          *(_BYTE *)(v8 + 176) = 0;
          *(_QWORD *)(v8 + 200) = 0;
          *(_BYTE *)(v8 + 208) = 0;
          *(_QWORD *)(v8 + 232) = 0;
          *(_BYTE *)(v8 + 240) = 0;
          *(_QWORD *)(v8 + 264) = 0;
          *(_BYTE *)(v8 + 272) = 0;
          *(_QWORD *)(v8 + 296) = 0;
          *(_BYTE *)(v8 + 304) = 0;
          *(_QWORD *)(v8 + 328) = 0;
          *(_BYTE *)(v8 + 336) = 0;
          *(_QWORD *)(v8 + 360) = 0;
          *(_BYTE *)(v8 + 368) = 0;
          *(_QWORD *)(v8 + 392) = 0;
          *(_BYTE *)(v8 + 400) = 0;
          *(_QWORD *)(v8 + 424) = 0x800000000LL;
          *(_QWORD *)(v8 + 528) = v8 + 544;
          *(_QWORD *)(v8 + 536) = 0x600000000LL;
        }
        v6[4] = v8;
        v12 = 0;
        v11 = 1;
      }
      v13 = *(_QWORD *)(v8 + 528);
      v14 = v13 + v12;
      if ( v11 > v10 )
      {
        v15 = (__int64 *)(v8 + 528);
        v16 = (void *)(v8 + 544);
        if ( v13 <= (unsigned __int64)v7 && v14 > (unsigned __int64)v7 )
        {
          v17 = &v7[-v13];
          v18 = sub_2237400(v8 + 528, v8 + 544, v11, 64, v152);
          sub_9EF810((__int64 *)(v8 + 528), v18);
          v19 = *(void **)(v8 + 528);
          v20 = v152[0];
          if ( v19 != v16 )
            free(v19);
          *(_DWORD *)(v8 + 540) = v20;
          v7 = &v17[v18];
          v21 = *(unsigned int *)(v8 + 536);
          *(_QWORD *)(v8 + 528) = v18;
          v14 = v18 + (v21 << 6);
          goto LABEL_23;
        }
        goto LABEL_88;
      }
      goto LABEL_23;
    }
    return;
  }
  if ( !*((_BYTE *)a1 + 132) )
    return;
  v22 = a1[2];
  v23 = *a1;
  if ( v22 )
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(a1[2]);
  v24 = *(_QWORD *)(v23 + 520);
  v25 = *(_DWORD *)(v23 + 536);
  v139 = (__int64 *)v24;
  if ( !v25 )
    goto LABEL_35;
  a5 = v25 - 1;
  v140 = ((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4);
  v26 = a5 & v140;
  v27 = (__int64 *)(v24 + 32LL * ((unsigned int)a5 & v140));
  v28 = *v27;
  if ( v22 != *v27 )
  {
    v73 = 1;
    v74 = nullptr;
    if ( v28 != -4096 )
    {
      while ( 1 )
      {
        if ( !v74 && v28 == -8192 )
          v74 = v27;
        v24 = (unsigned int)(v73 + 1);
        v26 = a5 & (v73 + v26);
        v27 = &v139[4 * v26];
        v28 = *v27;
        if ( v22 == *v27 )
          goto LABEL_17;
        if ( v28 == -4096 )
          break;
        ++v73;
      }
      if ( v74 )
        v27 = v74;
    }
    v66 = *(_DWORD *)(v23 + 528) + 1;
    if ( 4 * v66 < 3 * v25 )
    {
      if ( v25 - *(_DWORD *)(v23 + 532) - v66 > v25 >> 3 )
      {
        v69 = *v27;
        goto LABEL_72;
      }
      v79 = (((((((((((unsigned __int64)(unsigned int)a5 >> 1) | (unsigned int)a5) >> 2)
                 | ((unsigned __int64)(unsigned int)a5 >> 1)
                 | (unsigned int)a5) >> 4)
               | ((((unsigned __int64)(unsigned int)a5 >> 1) | (unsigned int)a5) >> 2)
               | ((unsigned __int64)(unsigned int)a5 >> 1)
               | (unsigned int)a5) >> 8)
             | ((((((unsigned __int64)(unsigned int)a5 >> 1) | (unsigned int)a5) >> 2)
               | ((unsigned __int64)(unsigned int)a5 >> 1)
               | (unsigned int)a5) >> 4)
             | ((((unsigned __int64)(unsigned int)a5 >> 1) | (unsigned int)a5) >> 2)
             | ((unsigned __int64)(unsigned int)a5 >> 1)
             | (unsigned int)a5) >> 16)
           | ((((((((unsigned __int64)(unsigned int)a5 >> 1) | (unsigned int)a5) >> 2)
               | ((unsigned __int64)(unsigned int)a5 >> 1)
               | (unsigned int)a5) >> 4)
             | ((((unsigned __int64)(unsigned int)a5 >> 1) | (unsigned int)a5) >> 2)
             | ((unsigned __int64)(unsigned int)a5 >> 1)
             | (unsigned int)a5) >> 8)
           | ((((((unsigned __int64)(unsigned int)a5 >> 1) | (unsigned int)a5) >> 2)
             | ((unsigned __int64)(unsigned int)a5 >> 1)
             | (unsigned int)a5) >> 4)
           | ((((unsigned __int64)(unsigned int)a5 >> 1) | (unsigned int)a5) >> 2)
           | ((unsigned __int64)(unsigned int)a5 >> 1)
           | (unsigned int)a5)
          + 1;
      if ( (unsigned int)v79 < 0x40 )
        LODWORD(v79) = 64;
      *(_DWORD *)(v23 + 536) = v79;
      v80 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v79, 8, 64, v24, a5, a6);
      *(_QWORD *)(v23 + 520) = v80;
      if ( v139 )
      {
        *(_QWORD *)(v23 + 528) = 0;
        v146 = 4LL * v25;
        for ( i = &v80[4 * *(unsigned int *)(v23 + 536)]; i != v80; v80 += 4 )
          *v80 = -4096;
        v144 = v23;
        v82 = v139;
        v148 = v22;
        v150 = v6;
        v151 = v7;
        do
        {
          v43 = *v82;
          if ( *v82 != -8192 && v43 != -4096 )
          {
            v83 = *(_DWORD *)(v144 + 536);
            if ( !v83 )
              goto LABEL_205;
            v84 = *(_QWORD *)(v144 + 520);
            v85 = v83 - 1;
            v86 = (v83 - 1) & (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4));
            v87 = (_QWORD *)(v84 + 32LL * v86);
            v88 = *v87;
            if ( v43 != *v87 )
            {
              v136 = 1;
              v137 = nullptr;
              if ( v88 != -4096 )
              {
                while ( 1 )
                {
                  if ( v88 == -8192 && !v137 )
                    v137 = v87;
                  v86 = v85 & (v136 + v86);
                  v87 = (_QWORD *)(v84 + 32LL * v86);
                  v88 = *v87;
                  if ( v43 == *v87 )
                    break;
                  if ( v88 == -4096 )
                  {
                    if ( v137 )
                      v87 = v137;
                    break;
                  }
                  ++v136;
                }
              }
            }
            v89 = *v82;
            v87[2] = 0;
            v87[3] = 0;
            v87[1] = 0;
            *v87 = v89;
            v87[1] = v82[1];
            v90 = v82[2];
            v82[1] = 0;
            v91 = v87[2];
            v87[2] = v90;
            v92 = v82[3];
            v82[2] = v91;
            v93 = v87[3];
            v87[3] = v92;
            v94 = (_QWORD *)v82[2];
            v95 = (_QWORD *)v82[1];
            v82[3] = v93;
            ++*(_DWORD *)(v144 + 528);
            if ( v94 != v95 )
            {
              do
              {
                v96 = v95[1];
                if ( v96 )
                {
                  v97 = v95[2];
                  if ( v97 )
                  {
                    if ( v96 < v97 || v96 > v97 + 14848 )
                    {
                      v98 = *(_QWORD **)(v96 + 528);
                      v99 = &v98[8 * (unsigned __int64)*(unsigned int *)(v96 + 536)];
                      if ( v98 != v99 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v99 -= 8;
                            v100 = (_QWORD *)v99[3];
                            if ( v100 == v99 + 5 )
                              break;
                            operator delete(v100);
                            if ( v98 == v99 )
                              goto LABEL_108;
                          }
                        }
                        while ( v98 != v99 );
LABEL_108:
                        v99 = *(_QWORD **)(v96 + 528);
                      }
                      if ( v99 != (_QWORD *)(v96 + 544) )
                        free(v99);
                      v101 = *(void **)(v96 + 416);
                      if ( v101 != (void *)(v96 + 432) )
                        free(v101);
                      v102 = (void **)(v96 + 384);
                      v103 = (void **)(v96 + 64);
                      do
                      {
                        while ( *v102 != v102 + 2 )
                        {
                          operator delete(*v102);
                          v102 -= 4;
                          if ( v102 == v103 )
                            goto LABEL_116;
                        }
                        v102 -= 4;
                      }
                      while ( v102 != v103 );
LABEL_116:
                      operator delete((void *)v96, 0x3A0u);
                    }
                    else
                    {
                      v109 = *(unsigned int *)(v97 + 14976);
                      *(_DWORD *)(v97 + 14976) = v109 + 1;
                      *(_QWORD *)(v97 + 8 * v109 + 14848) = v96;
                    }
                  }
                }
                v95 += 4;
              }
              while ( v94 != v95 );
              v95 = (_QWORD *)v82[1];
            }
            if ( v95 )
              operator delete(v95);
          }
          v82 += 4;
        }
        while ( &v139[v146] != v82 );
        v23 = v144;
        v22 = v148;
        v6 = v150;
        v7 = v151;
        operator delete(v139, v146 * 8, 8);
        v80 = *(_QWORD **)(v144 + 520);
        v104 = *(_DWORD *)(v144 + 536);
        v66 = *(_DWORD *)(v144 + 528) + 1;
      }
      else
      {
        v131 = *(unsigned int *)(v23 + 536);
        *(_QWORD *)(v23 + 528) = 0;
        v104 = v131;
        v132 = &v80[4 * v131];
        if ( v80 != v132 )
        {
          v133 = v80;
          do
          {
            *v133 = -4096;
            v133 += 4;
          }
          while ( v132 != v133 );
        }
        v66 = 1;
      }
      if ( v104 )
      {
        v105 = v104 - 1;
        v106 = (v104 - 1) & v140;
        v27 = &v80[4 * v106];
        v69 = *v27;
        if ( v22 == *v27 )
        {
LABEL_72:
          *(_DWORD *)(v23 + 528) = v66;
          if ( v69 != -4096 )
            --*(_DWORD *)(v23 + 532);
          goto LABEL_74;
        }
        v107 = 1;
        v108 = nullptr;
        if ( v69 != -4096 )
        {
          while ( 1 )
          {
            if ( v69 == -8192 && !v108 )
              v108 = v27;
            v106 = v105 & (v107 + v106);
            v27 = &v80[4 * v106];
            v69 = *v27;
            if ( v22 == *v27 )
              goto LABEL_72;
            if ( v69 == -4096 )
              goto LABEL_192;
            ++v107;
          }
        }
LABEL_126:
        *(_DWORD *)(v23 + 528) = v66;
LABEL_74:
        *v27 = v22;
        v29 = 0;
        v27[1] = 0;
        v27[2] = 0;
        v27[3] = 0;
        goto LABEL_18;
      }
      goto LABEL_206;
    }
LABEL_35:
    v38 = (((((((2 * v25 - 1) | ((unsigned __int64)(2 * v25 - 1) >> 1)) >> 2)
            | (2 * v25 - 1)
            | ((unsigned __int64)(2 * v25 - 1) >> 1)) >> 4)
          | (((2 * v25 - 1) | ((unsigned __int64)(2 * v25 - 1) >> 1)) >> 2)
          | (2 * v25 - 1)
          | ((unsigned __int64)(2 * v25 - 1) >> 1)) >> 8)
        | (((((2 * v25 - 1) | ((unsigned __int64)(2 * v25 - 1) >> 1)) >> 2)
          | (2 * v25 - 1)
          | ((unsigned __int64)(2 * v25 - 1) >> 1)) >> 4)
        | (((2 * v25 - 1) | ((unsigned __int64)(2 * v25 - 1) >> 1)) >> 2)
        | (2 * v25 - 1)
        | ((unsigned __int64)(2 * v25 - 1) >> 1);
    v39 = ((v38 >> 16) | v38) + 1;
    if ( (unsigned int)v39 < 0x40 )
      LODWORD(v39) = 64;
    *(_DWORD *)(v23 + 536) = v39;
    v40 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v39, 8, 64, v24, a5, a6);
    *(_QWORD *)(v23 + 520) = v40;
    if ( v139 )
    {
      *(_QWORD *)(v23 + 528) = 0;
      v143 = 4LL * v25;
      v141 = &v139[v143];
      for ( j = &v40[4 * *(unsigned int *)(v23 + 536)]; j != v40; v40 += 4 )
        *v40 = -4096;
      if ( v139 != v141 )
      {
        v142 = v23;
        v42 = v139;
        v145 = v22;
        v147 = v6;
        v149 = v7;
        do
        {
          v43 = *v42;
          if ( *v42 != -4096 && v43 != -8192 )
          {
            v44 = *(_DWORD *)(v142 + 536);
            if ( !v44 )
            {
LABEL_205:
              *(_QWORD *)&dword_0 = v43;
              BUG();
            }
            v45 = *(_QWORD *)(v142 + 520);
            v46 = v44 - 1;
            v47 = (v44 - 1) & (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4));
            v48 = (_QWORD *)(v45 + 32LL * v47);
            v49 = *v48;
            if ( v43 != *v48 )
            {
              v134 = 1;
              v135 = nullptr;
              if ( v49 != -4096 )
              {
                while ( 1 )
                {
                  if ( v49 == -8192 && !v135 )
                    v135 = v48;
                  v47 = v46 & (v134 + v47);
                  v48 = (_QWORD *)(v45 + 32LL * v47);
                  v49 = *v48;
                  if ( v43 == *v48 )
                    break;
                  if ( v49 == -4096 )
                  {
                    if ( v135 )
                      v48 = v135;
                    break;
                  }
                  ++v134;
                }
              }
            }
            v50 = *v42;
            v48[2] = 0;
            v48[3] = 0;
            v48[1] = 0;
            *v48 = v50;
            v48[1] = v42[1];
            v51 = v42[2];
            v42[1] = 0;
            v52 = v48[2];
            v48[2] = v51;
            v53 = v42[3];
            v42[2] = v52;
            v54 = v48[3];
            v48[3] = v53;
            v55 = (_QWORD *)v42[2];
            v56 = (_QWORD *)v42[1];
            v42[3] = v54;
            ++*(_DWORD *)(v142 + 528);
            if ( v55 != v56 )
            {
              do
              {
                v57 = v56[1];
                if ( v57 )
                {
                  v58 = v56[2];
                  if ( v58 )
                  {
                    if ( v57 < v58 || v57 > v58 + 14848 )
                    {
                      v59 = *(_QWORD **)(v57 + 528);
                      v60 = &v59[8 * (unsigned __int64)*(unsigned int *)(v57 + 536)];
                      if ( v59 != v60 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v60 -= 8;
                            v61 = (_QWORD *)v60[3];
                            if ( v61 == v60 + 5 )
                              break;
                            operator delete(v61);
                            if ( v59 == v60 )
                              goto LABEL_53;
                          }
                        }
                        while ( v59 != v60 );
LABEL_53:
                        v60 = *(_QWORD **)(v57 + 528);
                      }
                      if ( v60 != (_QWORD *)(v57 + 544) )
                        free(v60);
                      v62 = *(void **)(v57 + 416);
                      if ( v62 != (void *)(v57 + 432) )
                        free(v62);
                      v63 = (void **)(v57 + 384);
                      v64 = (void **)(v57 + 64);
                      do
                      {
                        while ( *v63 != v63 + 2 )
                        {
                          operator delete(*v63);
                          v63 -= 4;
                          if ( v64 == v63 )
                            goto LABEL_61;
                        }
                        v63 -= 4;
                      }
                      while ( v63 != v64 );
LABEL_61:
                      operator delete((void *)v57, 0x3A0u);
                    }
                    else
                    {
                      v70 = *(unsigned int *)(v58 + 14976);
                      *(_DWORD *)(v58 + 14976) = v70 + 1;
                      *(_QWORD *)(v58 + 8 * v70 + 14848) = v57;
                    }
                  }
                }
                v56 += 4;
              }
              while ( v55 != v56 );
              v56 = (_QWORD *)v42[1];
            }
            if ( v56 )
              operator delete(v56);
          }
          v42 += 4;
        }
        while ( v141 != v42 );
        v23 = v142;
        v22 = v145;
        v6 = v147;
        v7 = v149;
      }
      operator delete(v139, v143 * 8, 8);
      v40 = *(_QWORD **)(v23 + 520);
      v65 = *(_DWORD *)(v23 + 536);
      v66 = *(_DWORD *)(v23 + 528) + 1;
    }
    else
    {
      v128 = *(unsigned int *)(v23 + 536);
      *(_QWORD *)(v23 + 528) = 0;
      v65 = v128;
      v129 = &v40[4 * v128];
      if ( v40 != v129 )
      {
        v130 = v40;
        do
        {
          *v130 = -4096;
          v130 += 4;
        }
        while ( v129 != v130 );
      }
      v66 = 1;
    }
    if ( v65 )
    {
      v67 = v65 - 1;
      v68 = (v65 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
      v27 = &v40[4 * v68];
      v69 = *v27;
      if ( *v27 == v22 )
      {
        v69 = v22;
        goto LABEL_72;
      }
      v138 = 1;
      v108 = nullptr;
      if ( v69 != -4096 )
      {
        while ( 1 )
        {
          if ( v69 == -8192 && !v108 )
            v108 = v27;
          v68 = v67 & (v138 + v68);
          v27 = &v40[4 * v68];
          v69 = *v27;
          if ( v22 == *v27 )
            goto LABEL_72;
          if ( v69 == -4096 )
          {
LABEL_192:
            if ( !v108 )
              goto LABEL_126;
            v69 = *v108;
            v27 = v108;
            goto LABEL_72;
          }
          ++v138;
        }
      }
      goto LABEL_126;
    }
LABEL_206:
    ++*(_DWORD *)(v23 + 528);
    BUG();
  }
LABEL_17:
  v29 = v27[1];
LABEL_18:
  if ( *(_DWORD *)v7 && *((_DWORD *)v7 + 1) )
  {
    v30 = v29 + 32LL * *((unsigned int *)v6 + 32);
    v8 = *(_QWORD *)(v30 + 8);
    if ( v8 )
    {
      v31 = *(unsigned int *)(v8 + 536);
      v32 = *(unsigned int *)(v8 + 540);
      v11 = v31 + 1;
      v33 = v31 << 6;
    }
    else
    {
      v110 = *(_QWORD *)(v30 + 16);
      v111 = *(_DWORD *)(v110 + 14976);
      if ( v111 )
      {
        v123 = (unsigned int)(v111 - 1);
        *(_DWORD *)(v110 + 14976) = v123;
        v8 = *(_QWORD *)(v110 + 8 * v123 + 14848);
        v124 = *(unsigned int *)(v8 + 536);
        v125 = *(_QWORD *)(v8 + 528);
        *(_BYTE *)v8 = 0;
        *(_DWORD *)(v8 + 424) = 0;
        v126 = v125 + (v124 << 6);
        while ( v125 != v126 )
        {
          while ( 1 )
          {
            v126 -= 64;
            v127 = *(void **)(v126 + 24);
            if ( v127 == (void *)(v126 + 40) )
              break;
            operator delete(v127);
            if ( v125 == v126 )
              goto LABEL_150;
          }
        }
LABEL_150:
        *(_DWORD *)(v8 + 536) = 0;
        v32 = *(unsigned int *)(v8 + 540);
      }
      else
      {
        v112 = operator new(0x3A0u);
        v32 = 6;
        v8 = v112;
        *(_BYTE *)v112 = 0;
        *(_QWORD *)(v112 + 96) = v112 + 112;
        *(_QWORD *)(v112 + 128) = v112 + 144;
        *(_QWORD *)(v112 + 160) = v112 + 176;
        *(_QWORD *)(v112 + 192) = v112 + 208;
        *(_QWORD *)(v112 + 224) = v112 + 240;
        *(_QWORD *)(v112 + 256) = v112 + 272;
        *(_QWORD *)(v112 + 288) = v112 + 304;
        *(_QWORD *)(v112 + 320) = v112 + 336;
        *(_QWORD *)(v112 + 352) = v112 + 368;
        *(_QWORD *)(v112 + 384) = v112 + 400;
        *(_QWORD *)(v112 + 416) = v112 + 432;
        *(_QWORD *)(v112 + 104) = 0;
        *(_BYTE *)(v112 + 112) = 0;
        *(_QWORD *)(v112 + 136) = 0;
        *(_BYTE *)(v112 + 144) = 0;
        *(_QWORD *)(v112 + 168) = 0;
        *(_BYTE *)(v112 + 176) = 0;
        *(_QWORD *)(v112 + 200) = 0;
        *(_BYTE *)(v112 + 208) = 0;
        *(_QWORD *)(v112 + 232) = 0;
        *(_BYTE *)(v112 + 240) = 0;
        *(_QWORD *)(v112 + 264) = 0;
        *(_BYTE *)(v112 + 272) = 0;
        *(_QWORD *)(v112 + 296) = 0;
        *(_BYTE *)(v112 + 304) = 0;
        *(_QWORD *)(v112 + 328) = 0;
        *(_BYTE *)(v112 + 336) = 0;
        *(_QWORD *)(v112 + 360) = 0;
        *(_BYTE *)(v112 + 368) = 0;
        *(_QWORD *)(v112 + 392) = 0;
        *(_BYTE *)(v112 + 400) = 0;
        *(_QWORD *)(v112 + 424) = 0x800000000LL;
        *(_QWORD *)(v112 + 528) = v112 + 544;
        *(_QWORD *)(v112 + 536) = 0x600000000LL;
      }
      *(_QWORD *)(v30 + 8) = v8;
      v11 = 1;
      v33 = 0;
    }
    v34 = *(_QWORD *)(v8 + 528);
    v14 = v34 + v33;
    if ( v11 > v32 )
    {
      v15 = (__int64 *)(v8 + 528);
      v16 = (void *)(v8 + 544);
      if ( v34 > (unsigned __int64)v7 || v14 <= (unsigned __int64)v7 )
      {
LABEL_88:
        v75 = sub_2237400(v15, v16, v11, 64, v152);
        sub_9EF810(v15, v75);
        v76 = *(void **)(v8 + 528);
        v77 = v152[0];
        if ( v76 != v16 )
          free(v76);
        v78 = *(unsigned int *)(v8 + 536);
        *(_QWORD *)(v8 + 528) = v75;
        *(_DWORD *)(v8 + 540) = v77;
        v14 = (v78 << 6) + v75;
        goto LABEL_23;
      }
      v118 = &v7[-v34];
      v119 = sub_2237400(v8 + 528, v8 + 544, v11, 64, v152);
      sub_9EF810((__int64 *)(v8 + 528), v119);
      v120 = *(void **)(v8 + 528);
      v121 = v152[0];
      if ( v120 != v16 )
        free(v120);
      v122 = *(unsigned int *)(v8 + 536);
      *(_QWORD *)(v8 + 528) = v119;
      *(_DWORD *)(v8 + 540) = v121;
      v7 = &v118[v119];
      v14 = (v122 << 6) + v119;
    }
LABEL_23:
    *(_QWORD *)v14 = *(_QWORD *)v7;
    *(_DWORD *)(v14 + 8) = *((_DWORD *)v7 + 2);
    *(_QWORD *)(v14 + 12) = *(_QWORD *)(v7 + 12);
    *(_DWORD *)(v14 + 20) = *((_DWORD *)v7 + 5);
    v35 = (_BYTE *)(v14 + 40);
    *(_QWORD *)(v14 + 24) = v14 + 40;
    v36 = *((_BYTE **)v7 + 3);
    v37 = *((_QWORD *)v7 + 4);
    if ( &v36[v37] && !v36 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v37 > 0xF )
    {
      if ( v37 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v35 = (_BYTE *)operator new(v37 + 1);
      *(_QWORD *)(v14 + 40) = v37;
      *(_QWORD *)(v14 + 24) = v35;
    }
    else
    {
      if ( v37 == 1 )
      {
        *(_BYTE *)(v14 + 40) = *v36;
LABEL_28:
        *(_QWORD *)(v14 + 32) = v37;
        v35[v37] = 0;
        *(_BYTE *)(v14 + 56) = v7[56];
        ++*(_DWORD *)(v8 + 536);
        return;
      }
      if ( !v37 )
        goto LABEL_28;
    }
    memcpy(v35, v36, v37);
    v35 = *(_BYTE **)(v14 + 24);
    goto LABEL_28;
  }
}
