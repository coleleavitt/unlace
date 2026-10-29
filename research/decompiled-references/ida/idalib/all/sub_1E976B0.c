void __fastcall sub_1E976B0(__int64 *a1, _QWORD *a2, const __m128i *a3, __m128i a4, double a5)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 (__fastcall *v11)(__int64); // rax
  char v12; // al
  __int64 v13; // rax
  const void *v14; // r15
  __int64 v15; // r13
  __int64 v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __m128i *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 *v26; // rbp
  unsigned __int8 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r15
  __int64 v33; // r14
  unsigned __int64 v34; // rcx
  unsigned int v35; // ebp
  unsigned __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r12
  unsigned __int8 *v42; // rbp
  _BYTE *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // r13
  __int64 v52; // r12
  void *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // r13
  __int64 v56; // r14
  __int64 v57; // r13
  void *v58; // rdi
  __int64 *v59; // rdx
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rcx
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  _QWORD *k; // rdx
  __int64 *v67; // r13
  __int64 v68; // rcx
  int v69; // eax
  int v70; // esi
  unsigned int v71; // edx
  _QWORD *v72; // rax
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  _QWORD *v79; // rdi
  _QWORD *v80; // r15
  _QWORD *v81; // rbp
  unsigned __int64 v82; // rbx
  unsigned __int64 v83; // rax
  _QWORD *v84; // r14
  _QWORD *v85; // r12
  _QWORD *v86; // rdi
  void *v87; // rdi
  void **v88; // r14
  void **v89; // r12
  int v90; // edx
  int v91; // r10d
  unsigned int v92; // esi
  int v93; // r8d
  __int64 *v94; // rdi
  __int64 v95; // rdx
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  _QWORD *v99; // rax
  _QWORD *i; // rdx
  __int64 *v101; // r13
  __int64 v102; // rdx
  int v103; // eax
  int v104; // r8d
  unsigned int v105; // ecx
  _QWORD *v106; // rax
  __int64 v107; // rsi
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rdx
  _QWORD *v113; // rdi
  _QWORD *v114; // r15
  _QWORD *v115; // rbp
  unsigned __int64 v116; // r12
  unsigned __int64 v117; // rax
  _QWORD *v118; // r14
  _QWORD *v119; // rbx
  _QWORD *v120; // rdi
  void *v121; // rdi
  void **v122; // rbx
  void **v123; // r14
  int v124; // edx
  int v125; // r8d
  unsigned int v126; // r10d
  int v127; // edi
  __int64 *v128; // rsi
  __int64 v129; // rdx
  __int64 v130; // rdx
  _QWORD *m; // rdx
  __int64 v132; // rdx
  _QWORD *j; // rdx
  int v134; // r10d
  _QWORD *v135; // r9
  int v136; // r10d
  _QWORD *v137; // r9
  __int64 *v138; // [rsp+8h] [rbp-120h]
  unsigned int v139; // [rsp+10h] [rbp-118h]
  __int64 *v140; // [rsp+10h] [rbp-118h]
  __int64 v141; // [rsp+18h] [rbp-110h]
  __int64 v142; // [rsp+20h] [rbp-108h]
  __int64 v143; // [rsp+20h] [rbp-108h]
  __int64 v144; // [rsp+28h] [rbp-100h]
  __int64 v145; // [rsp+28h] [rbp-100h]
  __int64 v146; // [rsp+30h] [rbp-F8h]
  int v147; // [rsp+4Ch] [rbp-DCh] BYREF
  const void *v148; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v149; // [rsp+58h] [rbp-D0h]
  _QWORD v150[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v151; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v152; // [rsp+80h] [rbp-A8h]
  __int64 v153; // [rsp+88h] [rbp-A0h]
  char v154; // [rsp+D8h] [rbp-50h]
  unsigned int v155; // [rsp+E0h] [rbp-48h]
  char v156; // [rsp+E4h] [rbp-44h]

  v7 = *a1;
  v148 = nullptr;
  v149 = 0;
  v147 = 0;
  if ( !(unsigned __int8)sub_181EB00(v7, (__int64)a3, 0, &v148, &v147, a4, a5) )
    return;
  v11 = *(__int64 (__fastcall **)(__int64))(*a2 + 72LL);
  if ( v11 == sub_9A8F10 )
    v12 = sub_B7F5F0(a2, v150, (__int64)sub_9A8F10, v8, v9, v10);
  else
    v12 = v11((__int64)a2);
  if ( v12 )
  {
    sub_168B9F0((__int64)v150, a1, a3[1].m128i_u32[2], 0x1B76u, 0);
    if ( v154 )
    {
      v26 = v152;
      if ( !v152 )
      {
        v45 = v153;
        v46 = *(_DWORD *)(v153 + 14976);
        if ( v46 )
        {
          v49 = (unsigned int)(v46 - 1);
          *(_DWORD *)(v153 + 14976) = v49;
          v26 = *(unsigned __int8 **)(v45 + 8 * v49 + 14848);
          v50 = *((unsigned int *)v26 + 134);
          *v26 = 0;
          v51 = *((_QWORD *)v26 + 66);
          *((_DWORD *)v26 + 106) = 0;
          v52 = v51 + (v50 << 6);
          while ( v51 != v52 )
          {
            while ( 1 )
            {
              v52 -= 64;
              v53 = *(void **)(v52 + 24);
              if ( v53 == (void *)(v52 + 40) )
                break;
              operator delete(v53);
              if ( v51 == v52 )
                goto LABEL_34;
            }
          }
LABEL_34:
          *((_DWORD *)v26 + 134) = 0;
        }
        else
        {
          v26 = (unsigned __int8 *)operator new(0x3A0u);
          *v26 = 0;
          *((_QWORD *)v26 + 12) = v26 + 112;
          *((_QWORD *)v26 + 16) = v26 + 144;
          *((_QWORD *)v26 + 20) = v26 + 176;
          *((_QWORD *)v26 + 24) = v26 + 208;
          *((_QWORD *)v26 + 28) = v26 + 240;
          *((_QWORD *)v26 + 32) = v26 + 272;
          *((_QWORD *)v26 + 36) = v26 + 304;
          *((_QWORD *)v26 + 40) = v26 + 336;
          *((_QWORD *)v26 + 44) = v26 + 368;
          *((_QWORD *)v26 + 48) = v26 + 400;
          *((_QWORD *)v26 + 52) = v26 + 432;
          *((_QWORD *)v26 + 13) = 0;
          v26[112] = 0;
          *((_QWORD *)v26 + 17) = 0;
          v26[144] = 0;
          *((_QWORD *)v26 + 21) = 0;
          v26[176] = 0;
          *((_QWORD *)v26 + 25) = 0;
          v26[208] = 0;
          *((_QWORD *)v26 + 29) = 0;
          v26[240] = 0;
          *((_QWORD *)v26 + 33) = 0;
          v26[272] = 0;
          *((_QWORD *)v26 + 37) = 0;
          v26[304] = 0;
          *((_QWORD *)v26 + 41) = 0;
          v26[336] = 0;
          *((_QWORD *)v26 + 45) = 0;
          v26[368] = 0;
          *((_QWORD *)v26 + 49) = 0;
          v26[400] = 0;
          *((_QWORD *)v26 + 53) = 0x800000000LL;
          *((_QWORD *)v26 + 66) = v26 + 544;
          *((_QWORD *)v26 + 67) = 0x600000000LL;
        }
        v152 = v26;
      }
      v26[*v26 + 1] = 2;
      v27 = v152;
      v28 = *v152;
      *v152 = v28 + 1;
      *(_QWORD *)&v27[8 * v28 + 16] = 1;
      goto LABEL_12;
    }
    if ( !v156 )
    {
LABEL_12:
      sub_15F7200(v150);
      return;
    }
    v29 = sub_168B9E0(v150);
    v32 = v151;
    v33 = v29;
    if ( v151 )
      v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v151 + 32LL))(v151);
    v34 = *(_QWORD *)v33;
    v35 = *(_DWORD *)(v33 + 16);
    v138 = *(__int64 **)v33;
    if ( !v35 )
      goto LABEL_48;
    v36 = v35 - 1;
    v139 = ((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4);
    v37 = (unsigned int)v36 & v139;
    v38 = (__int64 *)(v34 + 32 * v37);
    v39 = *v38;
    if ( v32 == *v38 )
    {
LABEL_21:
      v40 = v38[1];
LABEL_22:
      v41 = v40 + 32LL * v155;
      v42 = *(unsigned __int8 **)(v41 + 8);
      if ( !v42 )
      {
        v47 = *(_QWORD *)(v41 + 16);
        v48 = *(_DWORD *)(v47 + 14976);
        if ( v48 )
        {
          v54 = (unsigned int)(v48 - 1);
          *(_DWORD *)(v47 + 14976) = v54;
          v42 = *(unsigned __int8 **)(v47 + 8 * v54 + 14848);
          v55 = *((unsigned int *)v42 + 134);
          *v42 = 0;
          v56 = *((_QWORD *)v42 + 66);
          *((_DWORD *)v42 + 106) = 0;
          v57 = v56 + (v55 << 6);
          while ( v56 != v57 )
          {
            while ( 1 )
            {
              v57 -= 64;
              v58 = *(void **)(v57 + 24);
              if ( v58 == (void *)(v57 + 40) )
                break;
              operator delete(v58);
              if ( v56 == v57 )
                goto LABEL_39;
            }
          }
LABEL_39:
          *((_DWORD *)v42 + 134) = 0;
        }
        else
        {
          v42 = (unsigned __int8 *)operator new(0x3A0u);
          *v42 = 0;
          *((_QWORD *)v42 + 12) = v42 + 112;
          *((_QWORD *)v42 + 16) = v42 + 144;
          *((_QWORD *)v42 + 20) = v42 + 176;
          *((_QWORD *)v42 + 24) = v42 + 208;
          *((_QWORD *)v42 + 28) = v42 + 240;
          *((_QWORD *)v42 + 32) = v42 + 272;
          *((_QWORD *)v42 + 36) = v42 + 304;
          *((_QWORD *)v42 + 40) = v42 + 336;
          *((_QWORD *)v42 + 44) = v42 + 368;
          *((_QWORD *)v42 + 48) = v42 + 400;
          *((_QWORD *)v42 + 52) = v42 + 432;
          *((_QWORD *)v42 + 13) = 0;
          v42[112] = 0;
          *((_QWORD *)v42 + 17) = 0;
          v42[144] = 0;
          *((_QWORD *)v42 + 21) = 0;
          v42[176] = 0;
          *((_QWORD *)v42 + 25) = 0;
          v42[208] = 0;
          *((_QWORD *)v42 + 29) = 0;
          v42[240] = 0;
          *((_QWORD *)v42 + 33) = 0;
          v42[272] = 0;
          *((_QWORD *)v42 + 37) = 0;
          v42[304] = 0;
          *((_QWORD *)v42 + 41) = 0;
          v42[336] = 0;
          *((_QWORD *)v42 + 45) = 0;
          v42[368] = 0;
          *((_QWORD *)v42 + 49) = 0;
          v42[400] = 0;
          *((_QWORD *)v42 + 53) = 0x800000000LL;
          *((_QWORD *)v42 + 66) = v42 + 544;
          *((_QWORD *)v42 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v41 + 8) = v42;
      }
      v42[*v42 + 1] = 2;
      v43 = *(_BYTE **)(v41 + 8);
      v44 = (unsigned __int8)*v43;
      *v43 = v44 + 1;
      *(_QWORD *)&v43[8 * v44 + 16] = 1;
      goto LABEL_12;
    }
    v30 = 1;
    v59 = nullptr;
    if ( v39 == -4096 )
      goto LABEL_41;
    while ( 1 )
    {
      if ( !v59 && v39 == -8192 )
        v59 = v38;
      v31 = (unsigned int)(v30 + 1);
      LODWORD(v37) = v36 & (v30 + v37);
      v38 = &v138[4 * (unsigned int)v37];
      v39 = *v38;
      if ( v32 == *v38 )
        goto LABEL_21;
      if ( v39 == -4096 )
        break;
      v30 = (unsigned int)v31;
    }
    if ( !v59 )
LABEL_41:
      v59 = v38;
    v34 = 3 * v35;
    v60 = *(_DWORD *)(v33 + 8) + 1;
    if ( 4 * v60 < (unsigned int)v34 )
    {
      v61 = v35 - *(_DWORD *)(v33 + 12) - v60;
      if ( (unsigned int)v61 > v35 >> 3 )
      {
        v62 = *v59;
        goto LABEL_45;
      }
      v96 = (v36 >> 1) | v36 | (((v36 >> 1) | v36) >> 2);
      v97 = (((v96 >> 4) | v96) >> 8) | (v96 >> 4) | v96;
      v98 = ((v97 >> 16) | v97) + 1;
      if ( (unsigned int)v98 < 0x40 )
        LODWORD(v98) = 64;
      *(_DWORD *)(v33 + 16) = v98;
      v99 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v98, 8, 64, v61, v30, v31);
      *(_QWORD *)v33 = v99;
      if ( v138 )
      {
        *(_QWORD *)(v33 + 8) = 0;
        v145 = 4LL * v35;
        for ( i = &v99[4 * *(unsigned int *)(v33 + 16)]; i != v99; v99 += 4 )
          *v99 = -4096;
        v143 = v33;
        v101 = v138;
        v146 = v32;
        do
        {
          v102 = *v101;
          if ( *v101 != -8192 && v102 != -4096 )
          {
            v103 = *(_DWORD *)(v143 + 16);
            if ( !v103 )
            {
              *(_QWORD *)&dword_0 = *v101;
              BUG();
            }
            v104 = v103 - 1;
            v105 = (v103 - 1) & (((unsigned int)v102 >> 9) ^ ((unsigned int)v102 >> 4));
            v106 = (_QWORD *)(*(_QWORD *)v143 + 32LL * v105);
            v107 = *v106;
            if ( *v106 != v102 )
            {
              v134 = 1;
              v135 = nullptr;
              if ( v107 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v135 && v107 == -8192 )
                    v135 = v106;
                  v105 = v104 & (v134 + v105);
                  v106 = (_QWORD *)(*(_QWORD *)v143 + 32LL * v105);
                  v107 = *v106;
                  if ( v102 == *v106 )
                    break;
                  if ( v107 == -4096 )
                  {
                    if ( v135 )
                      v106 = v135;
                    break;
                  }
                  ++v134;
                }
              }
            }
            v108 = *v101;
            v106[1] = 0;
            v106[2] = 0;
            v106[3] = 0;
            *v106 = v108;
            v106[1] = v101[1];
            v109 = v101[2];
            v101[1] = 0;
            v110 = v106[2];
            v106[2] = v109;
            v111 = v101[3];
            v101[2] = v110;
            v112 = v106[3];
            v106[3] = v111;
            v113 = (_QWORD *)v101[1];
            v114 = (_QWORD *)v101[2];
            v101[3] = v112;
            ++*(_DWORD *)(v143 + 8);
            v115 = v113;
            if ( v114 != v113 )
            {
              do
              {
                v116 = v115[1];
                if ( v116 )
                {
                  v117 = v115[2];
                  if ( v117 )
                  {
                    if ( v116 < v117 || v116 > v117 + 14848 )
                    {
                      v118 = *(_QWORD **)(v116 + 528);
                      v119 = &v118[8 * (unsigned __int64)*(unsigned int *)(v116 + 536)];
                      if ( v118 != v119 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v119 -= 8;
                            v120 = (_QWORD *)v119[3];
                            if ( v120 == v119 + 5 )
                              break;
                            operator delete(v120);
                            if ( v118 == v119 )
                              goto LABEL_109;
                          }
                        }
                        while ( v118 != v119 );
LABEL_109:
                        v119 = *(_QWORD **)(v116 + 528);
                      }
                      if ( v119 != (_QWORD *)(v116 + 544) )
                        free(v119);
                      v121 = *(void **)(v116 + 416);
                      if ( v121 != (void *)(v116 + 432) )
                        free(v121);
                      v122 = (void **)(v116 + 384);
                      v123 = (void **)(v116 + 64);
                      do
                      {
                        while ( *v122 != v122 + 2 )
                        {
                          operator delete(*v122);
                          v122 -= 4;
                          if ( v122 == v123 )
                            goto LABEL_117;
                        }
                        v122 -= 4;
                      }
                      while ( v122 != v123 );
LABEL_117:
                      operator delete((void *)v116, 0x3A0u);
                    }
                    else
                    {
                      v129 = *(unsigned int *)(v117 + 14976);
                      *(_DWORD *)(v117 + 14976) = v129 + 1;
                      *(_QWORD *)(v117 + 8 * v129 + 14848) = v116;
                    }
                  }
                }
                v115 += 4;
              }
              while ( v114 != v115 );
              v113 = (_QWORD *)v101[1];
            }
            if ( v113 )
              operator delete(v113);
          }
          v101 += 4;
        }
        while ( &v138[v145] != v101 );
        v33 = v143;
        v32 = v146;
        operator delete(v138, v145 * 8, 8);
      }
      else
      {
        v132 = *(unsigned int *)(v33 + 16);
        *(_QWORD *)(v33 + 8) = 0;
        for ( j = &v99[4 * v132]; j != v99; v99 += 4 )
          *v99 = -4096;
      }
      v124 = *(_DWORD *)(v33 + 16);
      v60 = *(_DWORD *)(v33 + 8) + 1;
      if ( v124 )
      {
        v125 = v124 - 1;
        v126 = (v124 - 1) & v139;
        v59 = (__int64 *)(*(_QWORD *)v33 + 32LL * v126);
        v62 = *v59;
        if ( v32 != *v59 )
        {
          v127 = 1;
          v128 = nullptr;
          if ( v62 != -4096 )
          {
            while ( 1 )
            {
              if ( v62 == -8192 && !v128 )
                v128 = v59;
              v126 = v125 & (v127 + v126);
              v59 = (__int64 *)(*(_QWORD *)v33 + 32LL * v126);
              v62 = *v59;
              if ( v32 == *v59 )
                goto LABEL_45;
              if ( v62 == -4096 )
              {
                if ( !v128 )
                  break;
                v62 = *v128;
                v59 = v128;
                goto LABEL_45;
              }
              ++v127;
            }
          }
LABEL_85:
          *(_DWORD *)(v33 + 8) = v60;
LABEL_47:
          *v59 = v32;
          v40 = 0;
          v59[1] = 0;
          v59[2] = 0;
          v59[3] = 0;
          goto LABEL_22;
        }
        goto LABEL_45;
      }
    }
    else
    {
LABEL_48:
      v63 = (((((((2 * v35 - 1) | ((unsigned __int64)(2 * v35 - 1) >> 1)) >> 2)
              | (2 * v35 - 1)
              | ((unsigned __int64)(2 * v35 - 1) >> 1)) >> 4)
            | (((2 * v35 - 1) | ((unsigned __int64)(2 * v35 - 1) >> 1)) >> 2)
            | (2 * v35 - 1)
            | ((unsigned __int64)(2 * v35 - 1) >> 1)) >> 8)
          | (((((2 * v35 - 1) | ((unsigned __int64)(2 * v35 - 1) >> 1)) >> 2)
            | (2 * v35 - 1)
            | ((unsigned __int64)(2 * v35 - 1) >> 1)) >> 4)
          | (((2 * v35 - 1) | ((unsigned __int64)(2 * v35 - 1) >> 1)) >> 2)
          | (2 * v35 - 1)
          | ((unsigned __int64)(2 * v35 - 1) >> 1);
      v64 = ((v63 >> 16) | v63) + 1;
      if ( (unsigned int)v64 < 0x40 )
        LODWORD(v64) = 64;
      *(_DWORD *)(v33 + 16) = v64;
      v65 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v64, 8, 64, v34, v30, v31);
      *(_QWORD *)v33 = v65;
      if ( v138 )
      {
        *(_QWORD *)(v33 + 8) = 0;
        v142 = 4LL * v35;
        v140 = &v138[v142];
        for ( k = &v65[4 * *(unsigned int *)(v33 + 16)]; k != v65; v65 += 4 )
          *v65 = -4096;
        if ( v138 != v140 )
        {
          v141 = v33;
          v67 = v138;
          v144 = v32;
          do
          {
            v68 = *v67;
            if ( *v67 != -8192 && v68 != -4096 )
            {
              v69 = *(_DWORD *)(v141 + 16);
              if ( !v69 )
              {
                *(_QWORD *)&dword_0 = *v67;
                BUG();
              }
              v70 = v69 - 1;
              v71 = (v69 - 1) & (((unsigned int)v68 >> 9) ^ ((unsigned int)v68 >> 4));
              v72 = (_QWORD *)(*(_QWORD *)v141 + 32LL * v71);
              v73 = *v72;
              if ( v68 != *v72 )
              {
                v136 = 1;
                v137 = nullptr;
                if ( v73 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( !v137 && v73 == -8192 )
                      v137 = v72;
                    v71 = v70 & (v136 + v71);
                    v72 = (_QWORD *)(*(_QWORD *)v141 + 32LL * v71);
                    v73 = *v72;
                    if ( v68 == *v72 )
                      break;
                    if ( v73 == -4096 )
                    {
                      if ( v137 )
                        v72 = v137;
                      break;
                    }
                    ++v136;
                  }
                }
              }
              v74 = *v67;
              v72[1] = 0;
              v72[2] = 0;
              v72[3] = 0;
              *v72 = v74;
              v72[1] = v67[1];
              v75 = v67[2];
              v67[1] = 0;
              v76 = v72[2];
              v72[2] = v75;
              v77 = v67[3];
              v67[2] = v76;
              v78 = v72[3];
              v72[3] = v77;
              v79 = (_QWORD *)v67[1];
              v80 = (_QWORD *)v67[2];
              v67[3] = v78;
              ++*(_DWORD *)(v141 + 8);
              v81 = v79;
              if ( v80 != v79 )
              {
                do
                {
                  v82 = v81[1];
                  if ( v82 )
                  {
                    v83 = v81[2];
                    if ( v83 )
                    {
                      if ( v82 < v83 || v82 > v83 + 14848 )
                      {
                        v84 = *(_QWORD **)(v82 + 528);
                        v85 = &v84[8 * (unsigned __int64)*(unsigned int *)(v82 + 536)];
                        if ( v84 != v85 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v85 -= 8;
                              v86 = (_QWORD *)v85[3];
                              if ( v86 == v85 + 5 )
                                break;
                              operator delete(v86);
                              if ( v84 == v85 )
                                goto LABEL_66;
                            }
                          }
                          while ( v84 != v85 );
LABEL_66:
                          v85 = *(_QWORD **)(v82 + 528);
                        }
                        if ( v85 != (_QWORD *)(v82 + 544) )
                          free(v85);
                        v87 = *(void **)(v82 + 416);
                        v88 = (void **)(v82 + 416);
                        if ( v87 != (void *)(v82 + 432) )
                          free(v87);
                        v89 = (void **)(v82 + 96);
                        do
                        {
                          while ( 1 )
                          {
                            v88 -= 4;
                            if ( *v88 == v88 + 2 )
                              break;
                            operator delete(*v88);
                            if ( v88 == v89 )
                              goto LABEL_74;
                          }
                        }
                        while ( v88 != v89 );
LABEL_74:
                        operator delete((void *)v82, 0x3A0u);
                      }
                      else
                      {
                        v95 = *(unsigned int *)(v83 + 14976);
                        *(_DWORD *)(v83 + 14976) = v95 + 1;
                        *(_QWORD *)(v83 + 8 * v95 + 14848) = v82;
                      }
                    }
                  }
                  v81 += 4;
                }
                while ( v80 != v81 );
                v79 = (_QWORD *)v67[1];
              }
              if ( v79 )
                operator delete(v79);
            }
            v67 += 4;
          }
          while ( v140 != v67 );
          v33 = v141;
          v32 = v144;
        }
        operator delete(v138, v142 * 8, 8);
      }
      else
      {
        v130 = *(unsigned int *)(v33 + 16);
        *(_QWORD *)(v33 + 8) = 0;
        for ( m = &v65[4 * v130]; m != v65; v65 += 4 )
          *v65 = -4096;
      }
      v90 = *(_DWORD *)(v33 + 16);
      v60 = *(_DWORD *)(v33 + 8) + 1;
      if ( v90 )
      {
        v91 = v90 - 1;
        v92 = (v90 - 1) & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
        v59 = (__int64 *)(*(_QWORD *)v33 + 32LL * v92);
        v62 = *v59;
        if ( v32 != *v59 )
        {
          v93 = 1;
          v94 = nullptr;
          if ( v62 != -4096 )
          {
            while ( 1 )
            {
              if ( v62 == -8192 && !v94 )
                v94 = v59;
              v92 = v91 & (v93 + v92);
              v59 = (__int64 *)(*(_QWORD *)v33 + 32LL * v92);
              v62 = *v59;
              if ( v32 == *v59 )
                goto LABEL_45;
              if ( v62 == -4096 )
              {
                if ( !v94 )
                  goto LABEL_85;
                v62 = *v94;
                v59 = v94;
                goto LABEL_45;
              }
              ++v93;
            }
          }
          goto LABEL_85;
        }
LABEL_45:
        *(_DWORD *)(v33 + 8) = v60;
        if ( v62 != -4096 )
          --*(_DWORD *)(v33 + 12);
        goto LABEL_47;
      }
    }
    ++*(_DWORD *)(v33 + 8);
    BUG();
  }
  v13 = sub_168B6C0((__int64)a1);
  v14 = v148;
  v15 = v149;
  v16 = v13;
  v17 = (_QWORD *)sub_168B6C0((__int64)a1);
  v20 = v17[294];
  v17[304] += 56LL;
  v21 = (__m128i *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v17[295] >= (unsigned __int64)&v21[3].m128i_u64[1] && v20 )
    v17[294] = (char *)v21 + 56;
  else
    v21 = (__m128i *)sub_986170((__int64)(v17 + 294), 56, 56, 3, v18, v19);
  sub_B307C0(v21, v16, a3, v14, v15);
  sub_B8CC60((__int64)a2, (__int64)v21, v22, v23, v24, v25);
}
