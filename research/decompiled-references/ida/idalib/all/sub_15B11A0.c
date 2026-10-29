__int64 __fastcall sub_15B11A0(__int64 a1, char *a2)
{
  __int64 v2; // r15
  char *v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _BYTE *v11; // rax
  _BYTE *v12; // r14
  signed __int64 v13; // rbp
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rbp
  unsigned __int64 v20; // rcx
  unsigned int v21; // r12d
  unsigned int v22; // edi
  unsigned int v23; // esi
  __int64 *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rbx
  unsigned __int64 v29; // rcx
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  __int64 *v32; // r14
  void *v33; // rbp
  __int64 v34; // rbx
  void *v35; // rdi
  int v36; // r13d
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rax
  char *v41; // r13
  int v42; // ebx
  __int64 v43; // rax
  void *v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rbx
  void *v47; // rdi
  int v48; // r14d
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rbp
  __int64 v53; // rbx
  void *v54; // rdi
  __int64 *v55; // rax
  __int64 v56; // rsi
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  _QWORD *j; // rdx
  __int64 *v61; // r14
  __int64 v62; // rdx
  int v63; // eax
  int v64; // edi
  unsigned int v65; // ecx
  _QWORD *v66; // rax
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  _QWORD *v73; // r15
  _QWORD *v74; // rbx
  unsigned __int64 v75; // r12
  unsigned __int64 v76; // rax
  _QWORD *v77; // r13
  _QWORD *v78; // rbp
  _QWORD *v79; // rdi
  void *v80; // rdi
  void **v81; // rbp
  void **v82; // r13
  int v83; // esi
  int v84; // r8d
  unsigned int v85; // edi
  int v86; // r12d
  __int64 *v87; // r11
  __int64 v88; // rdx
  unsigned __int64 v89; // rax
  _QWORD *v90; // rax
  _QWORD *i; // rdx
  __int64 *v92; // r14
  int v93; // eax
  int v94; // edi
  unsigned int v95; // ecx
  _QWORD *v96; // rax
  __int64 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdx
  _QWORD *v103; // r15
  _QWORD *v104; // rbx
  unsigned __int64 v105; // r12
  unsigned __int64 v106; // rax
  _QWORD *v107; // r13
  _QWORD *v108; // rbp
  _QWORD *v109; // rdi
  void *v110; // rdi
  void **v111; // rbp
  void **v112; // r13
  int v113; // esi
  int v114; // edi
  unsigned int v115; // r8d
  int v116; // r12d
  __int64 v117; // rdx
  __int64 v118; // rdx
  int v119; // eax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rbp
  __int64 v123; // r14
  __int64 v124; // rbp
  void *v125; // rdi
  __int64 v126; // rcx
  _QWORD *v127; // rcx
  _QWORD *v128; // rdx
  __int64 v129; // rcx
  _QWORD *v130; // rcx
  _QWORD *v131; // rdx
  int v132; // r10d
  _QWORD *v133; // r9
  int v134; // r10d
  _QWORD *v135; // r9
  __int64 *v136; // [rsp+0h] [rbp-88h]
  char *v137; // [rsp+0h] [rbp-88h]
  __int64 v138; // [rsp+0h] [rbp-88h]
  unsigned int v139; // [rsp+8h] [rbp-80h]
  __int64 *v140; // [rsp+8h] [rbp-80h]
  __int64 v141; // [rsp+10h] [rbp-78h]
  __int64 v142; // [rsp+18h] [rbp-70h]
  __int64 v143; // [rsp+18h] [rbp-70h]
  __int64 v144; // [rsp+20h] [rbp-68h]
  __int64 v145; // [rsp+20h] [rbp-68h]
  __int64 v146; // [rsp+28h] [rbp-60h]
  __int64 v147; // [rsp+28h] [rbp-60h]
  char *v148; // [rsp+30h] [rbp-58h]
  __int64 v149; // [rsp+30h] [rbp-58h]
  char *v150; // [rsp+38h] [rbp-50h]
  _DWORD v151[16]; // [rsp+48h] [rbp-40h] BYREF

  v2 = a1;
  v3 = a2;
  if ( *(_BYTE *)(a1 + 120) )
  {
    if ( *(_DWORD *)a2 && *((_DWORD *)a2 + 1) )
    {
      v4 = *(_QWORD *)(a1 + 32);
      if ( v4 )
      {
        v5 = *(unsigned int *)(v4 + 536);
        v6 = *(unsigned int *)(v4 + 540);
        v7 = v5 + 1;
        v8 = v5 << 6;
      }
      else
      {
        v38 = *(_QWORD *)(a1 + 40);
        v39 = *(_DWORD *)(v38 + 14976);
        if ( v39 )
        {
          v50 = (unsigned int)(v39 - 1);
          *(_DWORD *)(v38 + 14976) = v50;
          v4 = *(_QWORD *)(v38 + 8 * v50 + 14848);
          v51 = *(unsigned int *)(v4 + 536);
          v52 = *(_QWORD *)(v4 + 528);
          *(_BYTE *)v4 = 0;
          *(_DWORD *)(v4 + 424) = 0;
          v53 = v52 + (v51 << 6);
          while ( v52 != v53 )
          {
            while ( 1 )
            {
              v53 -= 64;
              v54 = *(void **)(v53 + 24);
              if ( v54 == (void *)(v53 + 40) )
                break;
              operator delete(v54);
              if ( v52 == v53 )
                goto LABEL_50;
            }
          }
LABEL_50:
          *(_DWORD *)(v4 + 536) = 0;
          v6 = *(unsigned int *)(v4 + 540);
        }
        else
        {
          v40 = operator new(0x3A0u);
          v6 = 6;
          v4 = v40;
          *(_BYTE *)v40 = 0;
          *(_QWORD *)(v40 + 96) = v40 + 112;
          *(_QWORD *)(v40 + 128) = v40 + 144;
          *(_QWORD *)(v40 + 160) = v40 + 176;
          *(_QWORD *)(v40 + 192) = v40 + 208;
          *(_QWORD *)(v40 + 224) = v40 + 240;
          *(_QWORD *)(v40 + 256) = v40 + 272;
          *(_QWORD *)(v40 + 288) = v40 + 304;
          *(_QWORD *)(v40 + 320) = v40 + 336;
          *(_QWORD *)(v40 + 352) = v40 + 368;
          *(_QWORD *)(v40 + 384) = v40 + 400;
          *(_QWORD *)(v40 + 416) = v40 + 432;
          *(_QWORD *)(v40 + 104) = 0;
          *(_BYTE *)(v40 + 112) = 0;
          *(_QWORD *)(v40 + 136) = 0;
          *(_BYTE *)(v40 + 144) = 0;
          *(_QWORD *)(v40 + 168) = 0;
          *(_BYTE *)(v40 + 176) = 0;
          *(_QWORD *)(v40 + 200) = 0;
          *(_BYTE *)(v40 + 208) = 0;
          *(_QWORD *)(v40 + 232) = 0;
          *(_BYTE *)(v40 + 240) = 0;
          *(_QWORD *)(v40 + 264) = 0;
          *(_BYTE *)(v40 + 272) = 0;
          *(_QWORD *)(v40 + 296) = 0;
          *(_BYTE *)(v40 + 304) = 0;
          *(_QWORD *)(v40 + 328) = 0;
          *(_BYTE *)(v40 + 336) = 0;
          *(_QWORD *)(v40 + 360) = 0;
          *(_BYTE *)(v40 + 368) = 0;
          *(_QWORD *)(v40 + 392) = 0;
          *(_BYTE *)(v40 + 400) = 0;
          *(_QWORD *)(v40 + 424) = 0x800000000LL;
          *(_QWORD *)(v40 + 528) = v40 + 544;
          *(_QWORD *)(v40 + 536) = 0x600000000LL;
        }
        *(_QWORD *)(v2 + 32) = v4;
        v8 = 0;
        v7 = 1;
      }
      v9 = *(_QWORD *)(v4 + 528);
      v10 = v9 + v8;
      if ( v7 <= v6 )
        goto LABEL_7;
      v32 = (__int64 *)(v4 + 528);
      v33 = (void *)(v4 + 544);
      if ( v9 <= (unsigned __int64)a2 && v10 > (unsigned __int64)a2 )
      {
        v41 = &a2[-v9];
        v138 = sub_2237400(v4 + 528, v4 + 544, v7, 64, v151);
        sub_9EF810((__int64 *)(v4 + 528), v138);
        v42 = v151[0];
        v43 = v138;
        v44 = *(void **)(v4 + 528);
        if ( v44 != v33 )
        {
          free(v44);
          v43 = v138;
        }
        *(_DWORD *)(v4 + 540) = v42;
        v45 = *(unsigned int *)(v4 + 536);
        v3 = &v41[v43];
        *(_QWORD *)(v4 + 528) = v43;
        v10 = v43 + (v45 << 6);
        goto LABEL_7;
      }
      goto LABEL_43;
    }
    return v2;
  }
  if ( !*(_BYTE *)(a1 + 132) )
    return v2;
  v15 = sub_168B9E0(a1);
  v18 = *(_QWORD *)(a1 + 16);
  v19 = v15;
  if ( v18 )
    v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 32LL))(*(_QWORD *)(a1 + 16));
  v20 = *(_QWORD *)v19;
  v21 = *(_DWORD *)(v19 + 16);
  v136 = *(__int64 **)v19;
  if ( !v21 )
    goto LABEL_58;
  v22 = v21 - 1;
  v139 = ((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4);
  v23 = (v21 - 1) & v139;
  v24 = (__int64 *)(v20 + 32LL * v23);
  v25 = *v24;
  if ( v18 != *v24 )
  {
    v16 = 1;
    v55 = nullptr;
    if ( v25 != -4096 )
    {
      while ( 1 )
      {
        if ( !v55 && v25 == -8192 )
          v55 = v24;
        v17 = (unsigned int)(v16 + 1);
        v23 = v22 & (v16 + v23);
        v24 = &v136[4 * v23];
        v25 = *v24;
        if ( v18 == *v24 )
          goto LABEL_19;
        if ( v25 == -4096 )
          break;
        v16 = (unsigned int)v17;
      }
      if ( v55 )
        v24 = v55;
    }
    v20 = (unsigned int)(*(_DWORD *)(v19 + 8) + 1);
    if ( 4 * (int)v20 < 3 * v21 )
    {
      if ( v21 - *(_DWORD *)(v19 + 12) - (unsigned int)v20 > v21 >> 3 )
      {
        v56 = *v24;
        goto LABEL_55;
      }
      v89 = (((((((((((unsigned __int64)v22 >> 1) | v22) >> 2) | ((unsigned __int64)v22 >> 1) | v22) >> 4)
               | ((((unsigned __int64)v22 >> 1) | v22) >> 2)
               | ((unsigned __int64)v22 >> 1)
               | v22) >> 8)
             | ((((((unsigned __int64)v22 >> 1) | v22) >> 2) | ((unsigned __int64)v22 >> 1) | v22) >> 4)
             | ((((unsigned __int64)v22 >> 1) | v22) >> 2)
             | ((unsigned __int64)v22 >> 1)
             | v22) >> 16)
           | ((((((((unsigned __int64)v22 >> 1) | v22) >> 2) | ((unsigned __int64)v22 >> 1) | v22) >> 4)
             | ((((unsigned __int64)v22 >> 1) | v22) >> 2)
             | ((unsigned __int64)v22 >> 1)
             | v22) >> 8)
           | ((((((unsigned __int64)v22 >> 1) | v22) >> 2) | ((unsigned __int64)v22 >> 1) | v22) >> 4)
           | ((((unsigned __int64)v22 >> 1) | v22) >> 2)
           | ((unsigned __int64)v22 >> 1)
           | v22)
          + 1;
      if ( (unsigned int)v89 < 0x40 )
        LODWORD(v89) = 64;
      *(_DWORD *)(v19 + 16) = v89;
      v90 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v89, 8, 64, v20, v16, v17);
      *(_QWORD *)v19 = v90;
      if ( v136 )
      {
        *(_QWORD *)(v19 + 8) = 0;
        v145 = 4LL * v21;
        for ( i = &v90[4 * *(unsigned int *)(v19 + 16)]; i != v90; v90 += 4 )
          *v90 = -4096;
        v143 = v19;
        v92 = v136;
        v147 = v18;
        v149 = v2;
        v150 = v3;
        do
        {
          v62 = *v92;
          if ( *v92 != -8192 && v62 != -4096 )
          {
            v93 = *(_DWORD *)(v143 + 16);
            if ( !v93 )
              goto LABEL_204;
            v94 = v93 - 1;
            v95 = (v93 - 1) & (((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4));
            v96 = (_QWORD *)(*(_QWORD *)v143 + 32LL * v95);
            v97 = *v96;
            if ( *v96 != v62 )
            {
              v134 = 1;
              v135 = nullptr;
              if ( v97 != -4096 )
              {
                while ( 1 )
                {
                  if ( v97 == -8192 && !v135 )
                    v135 = v96;
                  v95 = v94 & (v134 + v95);
                  v96 = (_QWORD *)(*(_QWORD *)v143 + 32LL * v95);
                  v97 = *v96;
                  if ( v62 == *v96 )
                    break;
                  if ( v97 == -4096 )
                  {
                    if ( v135 )
                      v96 = v135;
                    break;
                  }
                  ++v134;
                }
              }
            }
            v98 = *v92;
            v96[1] = 0;
            v96[2] = 0;
            v96[3] = 0;
            *v96 = v98;
            v96[1] = v92[1];
            v99 = v92[2];
            v92[1] = 0;
            v100 = v96[2];
            v96[2] = v99;
            v101 = v92[3];
            v92[2] = v100;
            v102 = v96[3];
            v96[3] = v101;
            v103 = (_QWORD *)v92[2];
            v104 = (_QWORD *)v92[1];
            v92[3] = v102;
            ++*(_DWORD *)(v143 + 8);
            if ( v103 != v104 )
            {
              do
              {
                v105 = v104[1];
                if ( v105 )
                {
                  v106 = v104[2];
                  if ( v106 )
                  {
                    if ( v105 < v106 || v105 > v106 + 14848 )
                    {
                      v107 = *(_QWORD **)(v105 + 528);
                      v108 = &v107[8 * (unsigned __int64)*(unsigned int *)(v105 + 536)];
                      if ( v107 != v108 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v108 -= 8;
                            v109 = (_QWORD *)v108[3];
                            if ( v109 == v108 + 5 )
                              break;
                            operator delete(v109);
                            if ( v107 == v108 )
                              goto LABEL_119;
                          }
                        }
                        while ( v107 != v108 );
LABEL_119:
                        v108 = *(_QWORD **)(v105 + 528);
                      }
                      if ( v108 != (_QWORD *)(v105 + 544) )
                        free(v108);
                      v110 = *(void **)(v105 + 416);
                      if ( v110 != (void *)(v105 + 432) )
                        free(v110);
                      v111 = (void **)(v105 + 384);
                      v112 = (void **)(v105 + 64);
                      do
                      {
                        while ( *v111 != v111 + 2 )
                        {
                          operator delete(*v111);
                          v111 -= 4;
                          if ( v111 == v112 )
                            goto LABEL_127;
                        }
                        v111 -= 4;
                      }
                      while ( v111 != v112 );
LABEL_127:
                      operator delete((void *)v105, 0x3A0u);
                    }
                    else
                    {
                      v117 = *(unsigned int *)(v106 + 14976);
                      *(_DWORD *)(v106 + 14976) = v117 + 1;
                      *(_QWORD *)(v106 + 8 * v117 + 14848) = v105;
                    }
                  }
                }
                v104 += 4;
              }
              while ( v103 != v104 );
              v104 = (_QWORD *)v92[1];
            }
            if ( v104 )
              operator delete(v104);
          }
          v92 += 4;
        }
        while ( &v136[v145] != v92 );
        v19 = v143;
        v18 = v147;
        v2 = v149;
        v3 = v150;
        operator delete(v136, v145 * 8, 8);
        v90 = *(_QWORD **)v143;
        v113 = *(_DWORD *)(v143 + 16);
        LODWORD(v20) = *(_DWORD *)(v143 + 8) + 1;
      }
      else
      {
        v129 = *(unsigned int *)(v19 + 16);
        *(_QWORD *)(v19 + 8) = 0;
        v113 = v129;
        v130 = &v90[4 * v129];
        if ( v90 != v130 )
        {
          v131 = v90;
          do
          {
            *v131 = -4096;
            v131 += 4;
          }
          while ( v130 != v131 );
        }
        LODWORD(v20) = 1;
      }
      if ( v113 )
      {
        v114 = v113 - 1;
        v115 = (v113 - 1) & v139;
        v24 = &v90[4 * v115];
        v56 = *v24;
        if ( v18 != *v24 )
        {
          v116 = 1;
          v87 = nullptr;
          if ( v56 != -4096 )
          {
            while ( 1 )
            {
              if ( v56 == -8192 && !v87 )
                v87 = v24;
              v115 = v114 & (v116 + v115);
              v24 = &v90[4 * v115];
              v56 = *v24;
              if ( v18 == *v24 )
                goto LABEL_55;
              if ( v56 == -4096 )
                goto LABEL_142;
              ++v116;
            }
          }
LABEL_95:
          *(_DWORD *)(v19 + 8) = v20;
LABEL_57:
          *v24 = v18;
          v26 = 0;
          v24[1] = 0;
          v24[2] = 0;
          v24[3] = 0;
          goto LABEL_20;
        }
        goto LABEL_55;
      }
      goto LABEL_205;
    }
LABEL_58:
    v57 = (((((((2 * v21 - 1) | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 2)
            | (2 * v21 - 1)
            | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 4)
          | (((2 * v21 - 1) | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 2)
          | (2 * v21 - 1)
          | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 8)
        | (((((2 * v21 - 1) | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 2)
          | (2 * v21 - 1)
          | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 4)
        | (((2 * v21 - 1) | ((unsigned __int64)(2 * v21 - 1) >> 1)) >> 2)
        | (2 * v21 - 1)
        | ((unsigned __int64)(2 * v21 - 1) >> 1);
    v58 = ((v57 >> 16) | v57) + 1;
    if ( (unsigned int)v58 < 0x40 )
      LODWORD(v58) = 64;
    *(_DWORD *)(v19 + 16) = v58;
    v59 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v58, 8, 64, v20, v16, v17);
    *(_QWORD *)v19 = v59;
    if ( v136 )
    {
      *(_QWORD *)(v19 + 8) = 0;
      v142 = 4LL * v21;
      v140 = &v136[v142];
      for ( j = &v59[4 * *(unsigned int *)(v19 + 16)]; j != v59; v59 += 4 )
        *v59 = -4096;
      if ( v136 != v140 )
      {
        v141 = v19;
        v61 = v136;
        v144 = v18;
        v146 = v2;
        v148 = v3;
        do
        {
          v62 = *v61;
          if ( *v61 != -4096 && v62 != -8192 )
          {
            v63 = *(_DWORD *)(v141 + 16);
            if ( !v63 )
            {
LABEL_204:
              *(_QWORD *)&dword_0 = v62;
              BUG();
            }
            v64 = v63 - 1;
            v65 = (v63 - 1) & (((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4));
            v66 = (_QWORD *)(*(_QWORD *)v141 + 32LL * v65);
            v67 = *v66;
            if ( *v66 != v62 )
            {
              v132 = 1;
              v133 = nullptr;
              if ( v67 != -4096 )
              {
                while ( 1 )
                {
                  if ( v67 == -8192 && !v133 )
                    v133 = v66;
                  v65 = v64 & (v132 + v65);
                  v66 = (_QWORD *)(*(_QWORD *)v141 + 32LL * v65);
                  v67 = *v66;
                  if ( v62 == *v66 )
                    break;
                  if ( v67 == -4096 )
                  {
                    if ( v133 )
                      v66 = v133;
                    break;
                  }
                  ++v132;
                }
              }
            }
            v68 = *v61;
            v66[1] = 0;
            v66[2] = 0;
            v66[3] = 0;
            *v66 = v68;
            v66[1] = v61[1];
            v69 = v61[2];
            v61[1] = 0;
            v70 = v66[2];
            v66[2] = v69;
            v71 = v61[3];
            v61[2] = v70;
            v72 = v66[3];
            v66[3] = v71;
            v73 = (_QWORD *)v61[2];
            v74 = (_QWORD *)v61[1];
            v61[3] = v72;
            ++*(_DWORD *)(v141 + 8);
            if ( v73 != v74 )
            {
              do
              {
                v75 = v74[1];
                if ( v75 )
                {
                  v76 = v74[2];
                  if ( v76 )
                  {
                    if ( v75 < v76 || v75 > v76 + 14848 )
                    {
                      v77 = *(_QWORD **)(v75 + 528);
                      v78 = &v77[8 * (unsigned __int64)*(unsigned int *)(v75 + 536)];
                      if ( v77 != v78 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v78 -= 8;
                            v79 = (_QWORD *)v78[3];
                            if ( v79 == v78 + 5 )
                              break;
                            operator delete(v79);
                            if ( v77 == v78 )
                              goto LABEL_76;
                          }
                        }
                        while ( v77 != v78 );
LABEL_76:
                        v78 = *(_QWORD **)(v75 + 528);
                      }
                      if ( v78 != (_QWORD *)(v75 + 544) )
                        free(v78);
                      v80 = *(void **)(v75 + 416);
                      if ( v80 != (void *)(v75 + 432) )
                        free(v80);
                      v81 = (void **)(v75 + 384);
                      v82 = (void **)(v75 + 64);
                      do
                      {
                        while ( *v81 != v81 + 2 )
                        {
                          operator delete(*v81);
                          v81 -= 4;
                          if ( v82 == v81 )
                            goto LABEL_84;
                        }
                        v81 -= 4;
                      }
                      while ( v81 != v82 );
LABEL_84:
                      operator delete((void *)v75, 0x3A0u);
                    }
                    else
                    {
                      v88 = *(unsigned int *)(v76 + 14976);
                      *(_DWORD *)(v76 + 14976) = v88 + 1;
                      *(_QWORD *)(v76 + 8 * v88 + 14848) = v75;
                    }
                  }
                }
                v74 += 4;
              }
              while ( v73 != v74 );
              v74 = (_QWORD *)v61[1];
            }
            if ( v74 )
              operator delete(v74);
          }
          v61 += 4;
        }
        while ( v140 != v61 );
        v19 = v141;
        v18 = v144;
        v2 = v146;
        v3 = v148;
      }
      operator delete(v136, v142 * 8, 8);
      v59 = *(_QWORD **)v19;
      v83 = *(_DWORD *)(v19 + 16);
      LODWORD(v20) = *(_DWORD *)(v19 + 8) + 1;
    }
    else
    {
      v126 = *(unsigned int *)(v19 + 16);
      *(_QWORD *)(v19 + 8) = 0;
      v83 = v126;
      v127 = &v59[4 * v126];
      if ( v59 != v127 )
      {
        v128 = v59;
        do
        {
          *v128 = -4096;
          v128 += 4;
        }
        while ( v127 != v128 );
      }
      LODWORD(v20) = 1;
    }
    if ( v83 )
    {
      v84 = v83 - 1;
      v85 = (v83 - 1) & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
      v24 = &v59[4 * v85];
      v56 = *v24;
      if ( v18 != *v24 )
      {
        v86 = 1;
        v87 = nullptr;
        if ( v56 != -4096 )
        {
          while ( 1 )
          {
            if ( v56 == -8192 && !v87 )
              v87 = v24;
            v85 = v84 & (v86 + v85);
            v24 = &v59[4 * v85];
            v56 = *v24;
            if ( v18 == *v24 )
              goto LABEL_55;
            if ( v56 == -4096 )
            {
LABEL_142:
              if ( !v87 )
                goto LABEL_95;
              v56 = *v87;
              v24 = v87;
              goto LABEL_55;
            }
            ++v86;
          }
        }
        goto LABEL_95;
      }
LABEL_55:
      *(_DWORD *)(v19 + 8) = v20;
      if ( v56 != -4096 )
        --*(_DWORD *)(v19 + 12);
      goto LABEL_57;
    }
LABEL_205:
    ++*(_DWORD *)(v19 + 8);
    BUG();
  }
LABEL_19:
  v26 = v24[1];
LABEL_20:
  if ( *(_DWORD *)v3 && *((_DWORD *)v3 + 1) )
  {
    v27 = v26 + 32LL * *(unsigned int *)(v2 + 128);
    v4 = *(_QWORD *)(v27 + 8);
    if ( v4 )
    {
      v28 = *(unsigned int *)(v4 + 536);
      v29 = *(unsigned int *)(v4 + 540);
      v7 = v28 + 1;
      v30 = v28 << 6;
    }
    else
    {
      v118 = *(_QWORD *)(v27 + 16);
      v119 = *(_DWORD *)(v118 + 14976);
      if ( v119 )
      {
        v121 = (unsigned int)(v119 - 1);
        *(_DWORD *)(v118 + 14976) = v121;
        v4 = *(_QWORD *)(v118 + 8 * v121 + 14848);
        v122 = *(unsigned int *)(v4 + 536);
        v123 = *(_QWORD *)(v4 + 528);
        *(_BYTE *)v4 = 0;
        *(_DWORD *)(v4 + 424) = 0;
        v124 = v123 + (v122 << 6);
        while ( v123 != v124 )
        {
          while ( 1 )
          {
            v124 -= 64;
            v125 = *(void **)(v124 + 24);
            if ( v125 == (void *)(v124 + 40) )
              break;
            operator delete(v125);
            if ( v123 == v124 )
              goto LABEL_157;
          }
        }
LABEL_157:
        *(_DWORD *)(v4 + 536) = 0;
        v29 = *(unsigned int *)(v4 + 540);
      }
      else
      {
        v120 = operator new(0x3A0u);
        v29 = 6;
        v4 = v120;
        *(_BYTE *)v120 = 0;
        *(_QWORD *)(v120 + 96) = v120 + 112;
        *(_QWORD *)(v120 + 128) = v120 + 144;
        *(_QWORD *)(v120 + 160) = v120 + 176;
        *(_QWORD *)(v120 + 192) = v120 + 208;
        *(_QWORD *)(v120 + 224) = v120 + 240;
        *(_QWORD *)(v120 + 256) = v120 + 272;
        *(_QWORD *)(v120 + 288) = v120 + 304;
        *(_QWORD *)(v120 + 320) = v120 + 336;
        *(_QWORD *)(v120 + 352) = v120 + 368;
        *(_QWORD *)(v120 + 384) = v120 + 400;
        *(_QWORD *)(v120 + 416) = v120 + 432;
        *(_QWORD *)(v120 + 104) = 0;
        *(_BYTE *)(v120 + 112) = 0;
        *(_QWORD *)(v120 + 136) = 0;
        *(_BYTE *)(v120 + 144) = 0;
        *(_QWORD *)(v120 + 168) = 0;
        *(_BYTE *)(v120 + 176) = 0;
        *(_QWORD *)(v120 + 200) = 0;
        *(_BYTE *)(v120 + 208) = 0;
        *(_QWORD *)(v120 + 232) = 0;
        *(_BYTE *)(v120 + 240) = 0;
        *(_QWORD *)(v120 + 264) = 0;
        *(_BYTE *)(v120 + 272) = 0;
        *(_QWORD *)(v120 + 296) = 0;
        *(_BYTE *)(v120 + 304) = 0;
        *(_QWORD *)(v120 + 328) = 0;
        *(_BYTE *)(v120 + 336) = 0;
        *(_QWORD *)(v120 + 360) = 0;
        *(_BYTE *)(v120 + 368) = 0;
        *(_QWORD *)(v120 + 392) = 0;
        *(_BYTE *)(v120 + 400) = 0;
        *(_QWORD *)(v120 + 424) = 0x800000000LL;
        *(_QWORD *)(v120 + 528) = v120 + 544;
        *(_QWORD *)(v120 + 536) = 0x600000000LL;
      }
      *(_QWORD *)(v27 + 8) = v4;
      v7 = 1;
      v30 = 0;
    }
    v31 = *(_QWORD *)(v4 + 528);
    v10 = v31 + v30;
    if ( v7 <= v29 )
    {
LABEL_7:
      *(_QWORD *)v10 = *(_QWORD *)v3;
      *(_DWORD *)(v10 + 8) = *((_DWORD *)v3 + 2);
      *(_QWORD *)(v10 + 12) = *(_QWORD *)(v3 + 12);
      *(_DWORD *)(v10 + 20) = *((_DWORD *)v3 + 5);
      v11 = (_BYTE *)(v10 + 40);
      *(_QWORD *)(v10 + 24) = v10 + 40;
      v12 = *((_BYTE **)v3 + 3);
      v13 = *((_QWORD *)v3 + 4);
      if ( &v12[v13] && !v12 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v13 > 0xF )
      {
        if ( v13 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v11 = (_BYTE *)operator new(v13 + 1);
        *(_QWORD *)(v10 + 40) = v13;
        *(_QWORD *)(v10 + 24) = v11;
      }
      else
      {
        if ( v13 == 1 )
        {
          *(_BYTE *)(v10 + 40) = *v12;
LABEL_12:
          *(_QWORD *)(v10 + 32) = v13;
          v11[v13] = 0;
          *(_BYTE *)(v10 + 56) = v3[56];
          ++*(_DWORD *)(v4 + 536);
          return v2;
        }
        if ( !v13 )
          goto LABEL_12;
      }
      memcpy(v11, v12, v13);
      v11 = *(_BYTE **)(v10 + 24);
      goto LABEL_12;
    }
    v32 = (__int64 *)(v4 + 528);
    v33 = (void *)(v4 + 544);
    if ( v31 <= (unsigned __int64)v3 && v10 > (unsigned __int64)v3 )
    {
      v137 = &v3[-v31];
      v34 = sub_2237400(v4 + 528, v4 + 544, v7, 64, v151);
      sub_9EF810((__int64 *)(v4 + 528), v34);
      v35 = *(void **)(v4 + 528);
      v36 = v151[0];
      if ( v35 != v33 )
        free(v35);
      v37 = *(unsigned int *)(v4 + 536);
      *(_DWORD *)(v4 + 540) = v36;
      *(_QWORD *)(v4 + 528) = v34;
      v3 = &v137[v34];
      v10 = (v37 << 6) + v34;
      goto LABEL_7;
    }
LABEL_43:
    v46 = sub_2237400(v32, v33, v7, 64, v151);
    sub_9EF810(v32, v46);
    v47 = *(void **)(v4 + 528);
    v48 = v151[0];
    if ( v47 != v33 )
      free(v47);
    v49 = *(unsigned int *)(v4 + 536);
    *(_QWORD *)(v4 + 528) = v46;
    *(_DWORD *)(v4 + 540) = v48;
    v10 = (v49 << 6) + v46;
    goto LABEL_7;
  }
  return v2;
}
