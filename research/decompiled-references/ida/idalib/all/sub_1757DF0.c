__int64 __fastcall sub_1757DF0(__int64 a1, char ***a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // rcx
  unsigned __int64 *v4; // rbp
  unsigned __int64 *v5; // rbx
  unsigned __int64 v6; // rdi
  void **v7; // rdi
  void **v8; // r12
  void **v9; // rdi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // r12
  _QWORD *v14; // rdi
  void *v15; // rdi
  void **v16; // r12
  void **v17; // r15
  unsigned __int64 *v18; // rbx
  char **v19; // rax
  __int64 *v20; // rbx
  __int64 v21; // rbp
  __int64 v22; // rdx
  bool v23; // zf
  int v24; // eax
  _BYTE *v25; // rax
  __int64 *v26; // r8
  _BYTE *v27; // r12
  __int64 v28; // r14
  __int64 *v29; // r15
  __int64 v30; // r13
  _BYTE *v31; // rsi
  __int64 *v32; // rax
  size_t v33; // rbx
  unsigned __int64 v34; // rdx
  __int64 v35; // rbp
  unsigned __int64 v36; // rdi
  __int64 *v37; // rdi
  __int64 v38; // rsi
  unsigned __int64 v39; // rsi
  __int64 v40; // r13
  char *v42; // r14
  char *v43; // r15
  __int64 *v44; // r12
  char *v45; // rcx
  __int64 *v46; // rbx
  __int64 *v47; // r12
  __int64 *v48; // rbp
  _BYTE *v49; // rsi
  __int64 *v50; // rax
  size_t v51; // r14
  unsigned __int64 v52; // r13
  __int64 v53; // r13
  unsigned __int64 v54; // rdi
  __int64 *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // r13
  __int64 v58; // r15
  __int64 v59; // r13
  void *v60; // rdi
  __int64 v61; // rdx
  unsigned __int64 *v62; // r12
  unsigned __int64 v63; // rdi
  void **v64; // rdi
  void **v65; // rbx
  void **v66; // rdi
  unsigned __int64 v67; // r13
  unsigned __int64 v68; // rax
  _QWORD *v69; // r14
  _QWORD *v70; // rbx
  _QWORD *v71; // rdi
  void *v72; // rdi
  void **v73; // rbx
  void **v74; // r14
  __int64 v75; // rdx
  unsigned __int64 *v76; // r14
  char *v77; // r13
  char *v78; // r15
  __int64 *v79; // rbx
  char *v80; // rcx
  __int64 *v81; // rbp
  __int64 v82; // rax
  __int64 *v83; // r13
  __int64 *v84; // rbx
  _BYTE *v85; // rsi
  __int64 *v86; // rax
  size_t v87; // r14
  unsigned __int64 v88; // r12
  __int64 v89; // r12
  unsigned __int64 v90; // rdi
  __int64 *v91; // rdi
  __int64 v92; // rax
  unsigned __int64 v93; // rsi
  int v94; // eax
  unsigned __int64 v95; // rdi
  __int64 v96; // rdx
  unsigned __int64 v97; // rdi
  char *v98; // rax
  unsigned __int64 v99; // rbx
  unsigned __int64 v100; // r12
  __int64 v101; // rax
  __int64 v102; // rax
  unsigned __int64 v103; // rsi
  int v104; // eax
  unsigned __int64 v105; // rdi
  __int64 v106; // rcx
  unsigned __int64 v107; // rdi
  char *v108; // rax
  unsigned __int64 v109; // r12
  unsigned __int64 v110; // r13
  __int64 v111; // rax
  unsigned __int64 v112; // rax
  char *v113; // r12
  char *v114; // rbx
  char *v115; // rdi
  char *v116; // rdi
  void **v117; // rbx
  void **v118; // r12
  unsigned __int64 v119; // rax
  char *v120; // r13
  char *v121; // r12
  char *v122; // rdi
  char *v123; // rdi
  void **v124; // r12
  void **v125; // r13
  __int64 v126; // rbx
  __int64 v127; // r12
  unsigned __int64 v128; // rdx
  int v129; // eax
  __int64 v130; // rax
  __int64 v131; // rbx
  __int64 v132; // r12
  __int64 v133; // rbx
  void *v134; // rdi
  unsigned __int64 v135; // rdx
  int v136; // eax
  __int64 v137; // rax
  __int64 v138; // r12
  __int64 v139; // r13
  __int64 v140; // r12
  void *v141; // rdi
  __int64 v142; // rdx
  __int64 v143; // rdx
  _BYTE *v144; // rax
  _BYTE *v145; // rax
  __int64 v146; // [rsp+8h] [rbp-80h]
  __int64 *v147; // [rsp+8h] [rbp-80h]
  __int64 *v148; // [rsp+8h] [rbp-80h]
  __int64 *v150; // [rsp+10h] [rbp-78h]
  char **v151; // [rsp+10h] [rbp-78h]
  __int64 *v152; // [rsp+18h] [rbp-70h]
  __int64 *v153; // [rsp+18h] [rbp-70h]
  unsigned __int64 *v154; // [rsp+18h] [rbp-70h]
  __int64 v155; // [rsp+20h] [rbp-68h]
  char **v156; // [rsp+20h] [rbp-68h]
  __int64 *v157; // [rsp+20h] [rbp-68h]
  __int64 *v159; // [rsp+30h] [rbp-58h]
  __int64 *v160; // [rsp+30h] [rbp-58h]
  unsigned __int64 *v161; // [rsp+30h] [rbp-58h]
  unsigned int v162; // [rsp+3Ch] [rbp-4Ch]
  unsigned __int64 *v163; // [rsp+40h] [rbp-48h]
  unsigned __int64 *v164; // [rsp+48h] [rbp-40h]

  if ( (char ***)a1 == a2 )
    return a1;
  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(unsigned __int64 **)a1;
  v162 = *((_DWORD *)a2 + 2);
  v2 = v162;
  v146 = v3;
  if ( v162 > v3 )
  {
    if ( v162 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      v5 = &v4[5 * v3];
LABEL_5:
      while ( v5 != v4 )
      {
        while ( 1 )
        {
          v5 -= 5;
          v6 = v5[4];
          if ( v6 )
          {
            if ( (v6 & 4) != 0 )
            {
              v7 = (void **)(v6 & 0xFFFFFFFFFFFFFFF8LL);
              v8 = v7;
              if ( v7 )
              {
                v9 = (void **)*v7;
                if ( v9 != v8 + 2 )
                  free(v9);
                operator delete(v8, 0x30u);
              }
            }
          }
          v10 = *v5;
          if ( !*v5 )
            break;
          v11 = v5[1];
          if ( !v11 )
            break;
          if ( v10 >= v11 && v10 <= v11 + 14848 )
          {
            v61 = *(unsigned int *)(v11 + 14976);
            *(_DWORD *)(v11 + 14976) = v61 + 1;
            *(_QWORD *)(v11 + 8 * v61 + 14848) = v10;
            goto LABEL_5;
          }
          v12 = *(_QWORD **)(v10 + 528);
          v13 = &v12[8 * (unsigned __int64)*(unsigned int *)(v10 + 536)];
          if ( v12 != v13 )
          {
            do
            {
              while ( 1 )
              {
                v13 -= 8;
                v14 = (_QWORD *)v13[3];
                if ( v14 == v13 + 5 )
                  break;
                operator delete(v14);
                if ( v12 == v13 )
                  goto LABEL_18;
              }
            }
            while ( v12 != v13 );
LABEL_18:
            v13 = *(_QWORD **)(v10 + 528);
          }
          if ( v13 != (_QWORD *)(v10 + 544) )
            free(v13);
          v15 = *(void **)(v10 + 416);
          if ( v15 != (void *)(v10 + 432) )
            free(v15);
          v16 = (void **)(v10 + 384);
          v17 = (void **)(v10 + 64);
          do
          {
            while ( *v16 != v16 + 2 )
            {
              operator delete(*v16);
              v16 -= 4;
              if ( v16 == v17 )
                goto LABEL_26;
            }
            v16 -= 4;
          }
          while ( v17 != v16 );
LABEL_26:
          operator delete((void *)v10, 0x3A0u);
          if ( v5 == v4 )
            goto LABEL_27;
        }
      }
LABEL_27:
      *(_DWORD *)(a1 + 8) = 0;
      sub_1748FD0(a1, v162);
      v4 = *(unsigned __int64 **)a1;
      v146 = 0;
      v2 = *((unsigned int *)a2 + 2);
      v18 = (unsigned __int64 *)*a2;
      goto LABEL_28;
    }
    v18 = (unsigned __int64 *)*a2;
    if ( !*(_DWORD *)(a1 + 8) )
    {
LABEL_28:
      v19 = (char **)&v18[5 * v2];
      v20 = (__int64 *)((char *)v18 + v146);
      v21 = (__int64)v4 + v146;
      v159 = (__int64 *)v19;
      if ( v20 != (__int64 *)v19 )
      {
        do
        {
          *(_OWORD *)v21 = 0;
          v22 = v20[1];
          v23 = *v20 == 0;
          *(_DWORD *)(v21 + 16) = *((_DWORD *)v20 + 4);
          *(_QWORD *)(v21 + 8) = v22;
          if ( !v23 )
          {
            v24 = *(_DWORD *)(v22 + 14976);
            if ( v24 )
            {
              v56 = (unsigned int)(v24 - 1);
              *(_DWORD *)(v22 + 14976) = v56;
              v27 = *(_BYTE **)(v22 + 8 * v56 + 14848);
              v57 = *((unsigned int *)v27 + 134);
              v58 = *((_QWORD *)v27 + 66);
              *v27 = 0;
              *((_DWORD *)v27 + 106) = 0;
              v59 = v58 + (v57 << 6);
              while ( v58 != v59 )
              {
                while ( 1 )
                {
                  v59 -= 64;
                  v60 = *(void **)(v59 + 24);
                  if ( v60 == (void *)(v59 + 40) )
                    break;
                  operator delete(v60);
                  if ( v58 == v59 )
                    goto LABEL_92;
                }
              }
LABEL_92:
              v26 = (__int64 *)(v27 + 112);
              *((_DWORD *)v27 + 134) = 0;
              v150 = (__int64 *)(v27 + 432);
            }
            else
            {
              v25 = (_BYTE *)operator new(0x3A0u);
              v26 = (__int64 *)(v25 + 112);
              v27 = v25;
              *v25 = 0;
              v25 += 144;
              *((_QWORD *)v25 - 6) = v26;
              *((_QWORD *)v25 - 5) = 0;
              *(v25 - 32) = 0;
              *((_QWORD *)v27 + 16) = v25;
              *((_QWORD *)v27 + 20) = v27 + 176;
              *((_QWORD *)v27 + 24) = v27 + 208;
              *((_QWORD *)v27 + 28) = v27 + 240;
              *((_QWORD *)v27 + 32) = v27 + 272;
              *((_QWORD *)v27 + 36) = v27 + 304;
              *((_QWORD *)v27 + 40) = v27 + 336;
              *((_QWORD *)v27 + 44) = v27 + 368;
              *((_QWORD *)v27 + 48) = v27 + 400;
              v150 = (__int64 *)(v27 + 432);
              *((_QWORD *)v27 + 17) = 0;
              v27[144] = 0;
              *((_QWORD *)v27 + 21) = 0;
              v27[176] = 0;
              *((_QWORD *)v27 + 25) = 0;
              v27[208] = 0;
              *((_QWORD *)v27 + 29) = 0;
              v27[240] = 0;
              *((_QWORD *)v27 + 33) = 0;
              v27[272] = 0;
              *((_QWORD *)v27 + 37) = 0;
              v27[304] = 0;
              *((_QWORD *)v27 + 41) = 0;
              v27[336] = 0;
              *((_QWORD *)v27 + 45) = 0;
              v27[368] = 0;
              *((_QWORD *)v27 + 49) = 0;
              v27[400] = 0;
              *((_QWORD *)v27 + 52) = v27 + 432;
              *((_QWORD *)v27 + 53) = 0x800000000LL;
              *((_QWORD *)v27 + 66) = v27 + 544;
              *((_QWORD *)v27 + 67) = 0x600000000LL;
            }
            *(_QWORD *)v21 = v27;
            v28 = *v20;
            v29 = v26;
            v30 = *v20 + 96;
            *v27 = *(_BYTE *)*v20;
            v27[1] = *(_BYTE *)(v28 + 1);
            v27[2] = *(_BYTE *)(v28 + 2);
            v27[3] = *(_BYTE *)(v28 + 3);
            v27[4] = *(_BYTE *)(v28 + 4);
            v27[5] = *(_BYTE *)(v28 + 5);
            v27[6] = *(_BYTE *)(v28 + 6);
            v27[7] = *(_BYTE *)(v28 + 7);
            v27[8] = *(_BYTE *)(v28 + 8);
            v27[9] = *(_BYTE *)(v28 + 9);
            v27[10] = *(_BYTE *)(v28 + 10);
            *((_QWORD *)v27 + 2) = *(_QWORD *)(v28 + 16);
            *((_QWORD *)v27 + 3) = *(_QWORD *)(v28 + 24);
            *((_QWORD *)v27 + 4) = *(_QWORD *)(v28 + 32);
            *((_QWORD *)v27 + 5) = *(_QWORD *)(v28 + 40);
            v152 = v20;
            *((_QWORD *)v27 + 6) = *(_QWORD *)(v28 + 48);
            v155 = v21;
            *((_QWORD *)v27 + 7) = *(_QWORD *)(v28 + 56);
            *((_QWORD *)v27 + 8) = *(_QWORD *)(v28 + 64);
            *((_QWORD *)v27 + 9) = *(_QWORD *)(v28 + 72);
            *((_QWORD *)v27 + 10) = *(_QWORD *)(v28 + 80);
            *((_QWORD *)v27 + 11) = *(_QWORD *)(v28 + 88);
            do
            {
              if ( (__int64 *)v30 != v29 - 2 )
              {
                v32 = (__int64 *)*(v29 - 2);
                v33 = *(_QWORD *)(v30 + 8);
                if ( v32 == v29 )
                  v34 = 15;
                else
                  v34 = *v29;
                if ( v33 > v34 )
                {
                  if ( (v33 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_268;
                  v35 = 2 * v34;
                  if ( v33 < 2 * v34 )
                  {
                    v36 = v35 + 1;
                    if ( (v34 & 0x4000000000000000LL) != 0 )
                    {
                      v36 = 0x8000000000000000LL;
                      v35 = 0x7FFFFFFFFFFFFFFFLL;
                    }
                  }
                  else
                  {
                    v36 = v33 + 1;
                    v35 = *(_QWORD *)(v30 + 8);
                  }
                  v32 = (__int64 *)operator new(v36);
                  v37 = (__int64 *)*(v29 - 2);
                  if ( v37 != v29 )
                  {
                    v147 = v32;
                    operator delete(v37);
                    v32 = v147;
                  }
                  *(v29 - 2) = (__int64)v32;
                  *v29 = v35;
                }
                if ( v33 )
                {
                  v31 = *(_BYTE **)v30;
                  if ( v33 == 1 )
                    *(_BYTE *)v32 = *v31;
                  else
                    memcpy(v32, v31, v33);
                  v32 = (__int64 *)*(v29 - 2);
                }
                *(v29 - 1) = v33;
                *((_BYTE *)v32 + v33) = 0;
              }
              v30 += 32;
              v29 += 4;
            }
            while ( v150 != v29 );
            v20 = v152;
            v21 = v155;
            sub_E32260((__int64 *)v27 + 52, (__int64 *)(v28 + 416));
            sub_9EED30((__int64)(v27 + 528), (__int64 *)(v28 + 528));
          }
          *(_DWORD *)(v21 + 24) = *((_DWORD *)v20 + 6);
          v38 = v20[4];
          *(_QWORD *)(v21 + 32) = v38;
          if ( v38 )
          {
            if ( (v38 & 4) != 0 )
            {
              v39 = v38 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v39 )
              {
                v40 = operator new(0x30u);
                *(_QWORD *)v40 = v40 + 16;
                *(_QWORD *)(v40 + 8) = 0x400000000LL;
                if ( *(_DWORD *)(v39 + 8) )
                  sub_1757D10((void **)v40, (char **)v39);
                *(_QWORD *)(v21 + 32) = v40 | 4;
              }
            }
          }
          v20 += 5;
          v21 += 40;
        }
        while ( v159 != v20 );
      }
LABEL_57:
      *(_DWORD *)(a1 + 8) = v162;
      return a1;
    }
    v146 = 40 * v3;
    v164 = &v4[5 * v3];
    while ( 1 )
    {
      v42 = (char *)*v18;
      v43 = (char *)*v4;
      *((_DWORD *)v4 + 4) = *((_DWORD *)v18 + 4);
      if ( v42 )
      {
        v44 = (__int64 *)(v43 + 112);
        v45 = v43 + 432;
        if ( !v43 )
        {
          v135 = v4[1];
          v136 = *(_DWORD *)(v135 + 14976);
          if ( v136 )
          {
            v137 = (unsigned int)(v136 - 1);
            *(_DWORD *)(v135 + 14976) = v137;
            v43 = *(char **)(v135 + 8 * v137 + 14848);
            v138 = *((unsigned int *)v43 + 134);
            *v43 = 0;
            v139 = *((_QWORD *)v43 + 66);
            *((_DWORD *)v43 + 106) = 0;
            v140 = v139 + (v138 << 6);
            while ( v139 != v140 )
            {
              while ( 1 )
              {
                v140 -= 64;
                v141 = *(void **)(v140 + 24);
                if ( v141 == (void *)(v140 + 40) )
                  break;
                operator delete(v141);
                if ( v139 == v140 )
                  goto LABEL_256;
              }
            }
LABEL_256:
            v44 = (__int64 *)(v43 + 112);
            *((_DWORD *)v43 + 134) = 0;
            v45 = v43 + 432;
          }
          else
          {
            v145 = (_BYTE *)operator new(0x3A0u);
            v44 = (__int64 *)(v145 + 112);
            v43 = v145;
            *v145 = 0;
            v145 += 144;
            *((_QWORD *)v145 - 6) = v44;
            *((_QWORD *)v145 - 5) = 0;
            *(v145 - 32) = 0;
            *((_QWORD *)v43 + 16) = v145;
            *((_QWORD *)v43 + 20) = v43 + 176;
            *((_QWORD *)v43 + 24) = v43 + 208;
            *((_QWORD *)v43 + 28) = v43 + 240;
            *((_QWORD *)v43 + 32) = v43 + 272;
            *((_QWORD *)v43 + 36) = v43 + 304;
            *((_QWORD *)v43 + 40) = v43 + 336;
            *((_QWORD *)v43 + 44) = v43 + 368;
            *((_QWORD *)v43 + 48) = v43 + 400;
            *((_QWORD *)v43 + 52) = v43 + 432;
            v45 = v43 + 432;
            *((_QWORD *)v43 + 17) = 0;
            v43[144] = 0;
            *((_QWORD *)v43 + 21) = 0;
            v43[176] = 0;
            *((_QWORD *)v43 + 25) = 0;
            v43[208] = 0;
            *((_QWORD *)v43 + 29) = 0;
            v43[240] = 0;
            *((_QWORD *)v43 + 33) = 0;
            v43[272] = 0;
            *((_QWORD *)v43 + 37) = 0;
            v43[304] = 0;
            *((_QWORD *)v43 + 41) = 0;
            v43[336] = 0;
            *((_QWORD *)v43 + 45) = 0;
            v43[368] = 0;
            *((_QWORD *)v43 + 49) = 0;
            v43[400] = 0;
            *((_QWORD *)v43 + 53) = 0x800000000LL;
            *((_QWORD *)v43 + 66) = v43 + 544;
            *((_QWORD *)v43 + 67) = 0x600000000LL;
          }
          *v4 = (unsigned __int64)v43;
          v42 = (char *)*v18;
        }
        *v43 = *v42;
        v43[1] = v42[1];
        v43[2] = v42[2];
        v43[3] = v42[3];
        v43[4] = v42[4];
        v43[5] = v42[5];
        v43[6] = v42[6];
        v43[7] = v42[7];
        v43[8] = v42[8];
        v43[9] = v42[9];
        v43[10] = v42[10];
        *((_QWORD *)v43 + 2) = *((_QWORD *)v42 + 2);
        *((_QWORD *)v43 + 3) = *((_QWORD *)v42 + 3);
        *((_QWORD *)v43 + 4) = *((_QWORD *)v42 + 4);
        *((_QWORD *)v43 + 5) = *((_QWORD *)v42 + 5);
        *((_QWORD *)v43 + 6) = *((_QWORD *)v42 + 6);
        v156 = (char **)v18;
        v46 = v44;
        v47 = (__int64 *)v45;
        *((_QWORD *)v43 + 7) = *((_QWORD *)v42 + 7);
        v163 = v4;
        v48 = (__int64 *)(v42 + 96);
        *((_QWORD *)v43 + 8) = *((_QWORD *)v42 + 8);
        v160 = (__int64 *)v42;
        *((_QWORD *)v43 + 9) = *((_QWORD *)v42 + 9);
        *((_QWORD *)v43 + 10) = *((_QWORD *)v42 + 10);
        *((_QWORD *)v43 + 11) = *((_QWORD *)v42 + 11);
        do
        {
          if ( v48 != v46 - 2 )
          {
            v50 = (__int64 *)*(v46 - 2);
            v51 = v48[1];
            if ( v46 == v50 )
              v52 = 15;
            else
              v52 = *v46;
            if ( v51 > v52 )
            {
              if ( (v51 & 0x8000000000000000LL) != 0LL )
                goto LABEL_268;
              v53 = 2 * v52;
              if ( v51 < v53 )
              {
                v54 = v53 + 1;
                if ( v53 < 0 )
                {
                  v54 = 0x8000000000000000LL;
                  v53 = 0x7FFFFFFFFFFFFFFFLL;
                }
              }
              else
              {
                v54 = v51 + 1;
                v53 = v48[1];
              }
              v50 = (__int64 *)operator new(v54);
              v55 = (__int64 *)*(v46 - 2);
              if ( v46 != v55 )
              {
                v153 = v50;
                operator delete(v55);
                v50 = v153;
              }
              *(v46 - 2) = (__int64)v50;
              *v46 = v53;
            }
            if ( v51 )
            {
              v49 = (_BYTE *)*v48;
              if ( v51 == 1 )
                *(_BYTE *)v50 = *v49;
              else
                memcpy(v50, v49, v51);
              v50 = (__int64 *)*(v46 - 2);
            }
            *(v46 - 1) = v51;
            *((_BYTE *)v50 + v51) = 0;
          }
          v46 += 4;
          v48 += 4;
        }
        while ( v47 != v46 );
        v18 = (unsigned __int64 *)v156;
        v4 = v163;
        sub_E32260((__int64 *)v43 + 52, v160 + 52);
        sub_9EED30((__int64)(v43 + 528), v160 + 66);
      }
      else if ( v43 )
      {
        v119 = v4[1];
        if ( v119 )
        {
          if ( v119 > (unsigned __int64)v43 || (unsigned __int64)v43 > v119 + 14848 )
          {
            v120 = *((char **)v43 + 66);
            v121 = &v120[64 * (unsigned __int64)*((unsigned int *)v43 + 134)];
            if ( v120 != v121 )
            {
              do
              {
                while ( 1 )
                {
                  v121 -= 64;
                  v122 = *((char **)v121 + 3);
                  if ( v122 == v121 + 40 )
                    break;
                  operator delete(v122);
                  if ( v120 == v121 )
                    goto LABEL_210;
                }
              }
              while ( v120 != v121 );
LABEL_210:
              v121 = *((char **)v43 + 66);
            }
            if ( v121 != v43 + 544 )
              free(v121);
            v123 = *((char **)v43 + 52);
            if ( v123 != v43 + 432 )
              free(v123);
            v124 = (void **)(v43 + 384);
            v125 = (void **)(v43 + 64);
            do
            {
              while ( *v124 != v124 + 2 )
              {
                operator delete(*v124);
                v124 -= 4;
                if ( v125 == v124 )
                  goto LABEL_218;
              }
              v124 -= 4;
            }
            while ( v125 != v124 );
LABEL_218:
            operator delete(v43, 0x3A0u);
          }
          else
          {
            v143 = *(unsigned int *)(v119 + 14976);
            *(_DWORD *)(v119 + 14976) = v143 + 1;
            *(_QWORD *)(v119 + 8 * v143 + 14848) = v43;
          }
          *v4 = 0;
        }
      }
      *((_DWORD *)v4 + 6) = *((_DWORD *)v18 + 6);
      if ( v4 == v18 )
        goto LABEL_174;
      v102 = v18[4];
      v103 = v102 & 0xFFFFFFFFFFFFFFF8LL;
      v104 = (v102 >> 2) & 1;
      if ( v104 )
      {
        v105 = v4[4];
        v106 = v105 & 4;
        if ( !*(_DWORD *)(v103 + 8) )
        {
LABEL_182:
          if ( v106 )
            *(_DWORD *)((v105 & 0xFFFFFFFFFFFFFFF8LL) + 8) = 0;
          else
            v4[4] = 0;
          goto LABEL_174;
        }
      }
      else
      {
        v105 = v4[4];
        v106 = v105 & 4;
        if ( !v103 )
          goto LABEL_182;
      }
      if ( v106 )
      {
        v107 = v105 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v104 )
        {
          sub_1757D10((void **)v107, (char **)v103);
        }
        else
        {
          *(_DWORD *)(v107 + 8) = 0;
          v108 = (char *)v18[4];
          v109 = v4[4] & 0xFFFFFFFFFFFFFFF8LL;
          if ( ((unsigned __int8)v108 & 4) != 0 )
            v110 = **(_QWORD **)((unsigned __int64)v108 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v110 = (unsigned __int64)v108 & 0xFFFFFFFFFFFFFFF8LL;
          v111 = *(unsigned int *)(v109 + 8);
          if ( v111 + 1 > (unsigned __int64)*(unsigned int *)(v109 + 12) )
          {
            sub_2237220(v4[4] & 0xFFFFFFFFFFFFFFF8LL, v109 + 16, v111 + 1, 8);
            v111 = *(unsigned int *)(v109 + 8);
          }
          *(_QWORD *)(*(_QWORD *)v109 + 8 * v111) = v110;
          ++*(_DWORD *)(v109 + 8);
        }
      }
      else
      {
        if ( v104 )
        {
          if ( *(_DWORD *)(v103 + 8) != 1 )
          {
LABEL_236:
            v127 = operator new(0x30u);
            *(_QWORD *)v127 = v127 + 16;
            *(_QWORD *)(v127 + 8) = 0x400000000LL;
            if ( *(_DWORD *)(v103 + 8) )
              sub_1757D10((void **)v127, (char **)v103);
            v4[4] = v127 | 4;
            goto LABEL_174;
          }
          v103 = **(_QWORD **)v103 & 0xFFFFFFFFFFFFFFFBLL;
        }
        else if ( !v103 )
        {
          goto LABEL_236;
        }
        v4[4] = v103;
      }
LABEL_174:
      v18 += 5;
      v4 += 5;
      if ( v164 == v4 )
      {
        v2 = *((unsigned int *)a2 + 2);
        v4 = *(unsigned __int64 **)a1;
        v18 = (unsigned __int64 *)*a2;
        goto LABEL_28;
      }
    }
  }
  v154 = *(unsigned __int64 **)a1;
  if ( !v162 )
    goto LABEL_96;
  v76 = (unsigned __int64 *)*a2;
  v154 = &v4[5 * v162];
  do
  {
    v77 = (char *)*v76;
    v78 = (char *)*v4;
    *((_DWORD *)v4 + 4) = *((_DWORD *)v76 + 4);
    if ( v77 )
    {
      v79 = (__int64 *)(v78 + 112);
      v80 = v78 + 432;
      if ( !v78 )
      {
        v128 = v4[1];
        v129 = *(_DWORD *)(v128 + 14976);
        if ( v129 )
        {
          v130 = (unsigned int)(v129 - 1);
          *(_DWORD *)(v128 + 14976) = v130;
          v78 = *(char **)(v128 + 8 * v130 + 14848);
          v131 = *((unsigned int *)v78 + 134);
          *v78 = 0;
          v132 = *((_QWORD *)v78 + 66);
          *((_DWORD *)v78 + 106) = 0;
          v133 = v132 + (v131 << 6);
          while ( v132 != v133 )
          {
            while ( 1 )
            {
              v133 -= 64;
              v134 = *(void **)(v133 + 24);
              if ( v134 == (void *)(v133 + 40) )
                break;
              operator delete(v134);
              if ( v132 == v133 )
                goto LABEL_249;
            }
          }
LABEL_249:
          v79 = (__int64 *)(v78 + 112);
          *((_DWORD *)v78 + 134) = 0;
          v80 = v78 + 432;
        }
        else
        {
          v144 = (_BYTE *)operator new(0x3A0u);
          v79 = (__int64 *)(v144 + 112);
          v78 = v144;
          *v144 = 0;
          v144 += 144;
          *((_QWORD *)v144 - 6) = v79;
          *((_QWORD *)v144 - 5) = 0;
          *(v144 - 32) = 0;
          *((_QWORD *)v78 + 16) = v144;
          *((_QWORD *)v78 + 20) = v78 + 176;
          *((_QWORD *)v78 + 24) = v78 + 208;
          *((_QWORD *)v78 + 28) = v78 + 240;
          *((_QWORD *)v78 + 32) = v78 + 272;
          *((_QWORD *)v78 + 36) = v78 + 304;
          *((_QWORD *)v78 + 40) = v78 + 336;
          *((_QWORD *)v78 + 44) = v78 + 368;
          *((_QWORD *)v78 + 48) = v78 + 400;
          *((_QWORD *)v78 + 52) = v78 + 432;
          v80 = v78 + 432;
          *((_QWORD *)v78 + 17) = 0;
          v78[144] = 0;
          *((_QWORD *)v78 + 21) = 0;
          v78[176] = 0;
          *((_QWORD *)v78 + 25) = 0;
          v78[208] = 0;
          *((_QWORD *)v78 + 29) = 0;
          v78[240] = 0;
          *((_QWORD *)v78 + 33) = 0;
          v78[272] = 0;
          *((_QWORD *)v78 + 37) = 0;
          v78[304] = 0;
          *((_QWORD *)v78 + 41) = 0;
          v78[336] = 0;
          *((_QWORD *)v78 + 45) = 0;
          v78[368] = 0;
          *((_QWORD *)v78 + 49) = 0;
          v78[400] = 0;
          *((_QWORD *)v78 + 53) = 0x800000000LL;
          *((_QWORD *)v78 + 66) = v78 + 544;
          *((_QWORD *)v78 + 67) = 0x600000000LL;
        }
        *v4 = (unsigned __int64)v78;
        v77 = (char *)*v76;
      }
      *v78 = *v77;
      v78[1] = v77[1];
      v78[2] = v77[2];
      v78[3] = v77[3];
      v78[4] = v77[4];
      v78[5] = v77[5];
      v78[6] = v77[6];
      v78[7] = v77[7];
      v78[8] = v77[8];
      v78[9] = v77[9];
      v78[10] = v77[10];
      *((_QWORD *)v78 + 2) = *((_QWORD *)v77 + 2);
      *((_QWORD *)v78 + 3) = *((_QWORD *)v77 + 3);
      *((_QWORD *)v78 + 4) = *((_QWORD *)v77 + 4);
      *((_QWORD *)v78 + 5) = *((_QWORD *)v77 + 5);
      *((_QWORD *)v78 + 6) = *((_QWORD *)v77 + 6);
      v157 = (__int64 *)v77;
      *((_QWORD *)v78 + 7) = *((_QWORD *)v77 + 7);
      v161 = v4;
      v81 = (__int64 *)(v77 + 96);
      *((_QWORD *)v78 + 8) = *((_QWORD *)v77 + 8);
      v151 = (char **)v76;
      *((_QWORD *)v78 + 9) = *((_QWORD *)v77 + 9);
      *((_QWORD *)v78 + 10) = *((_QWORD *)v77 + 10);
      v82 = *((_QWORD *)v77 + 11);
      v83 = v79;
      v84 = (__int64 *)v80;
      *((_QWORD *)v78 + 11) = v82;
      do
      {
        if ( v81 != v83 - 2 )
        {
          v86 = (__int64 *)*(v83 - 2);
          v87 = v81[1];
          if ( v86 == v83 )
            v88 = 15;
          else
            v88 = *v83;
          if ( v87 > v88 )
          {
            if ( (v87 & 0x8000000000000000LL) != 0LL )
LABEL_268:
              std::__throw_length_error("basic_string::_M_create");
            v89 = 2 * v88;
            if ( v87 < v89 )
            {
              v90 = v89 + 1;
              if ( v89 < 0 )
              {
                v90 = 0x8000000000000000LL;
                v89 = 0x7FFFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              v90 = v87 + 1;
              v89 = v81[1];
            }
            v86 = (__int64 *)operator new(v90);
            v91 = (__int64 *)*(v83 - 2);
            if ( v91 != v83 )
            {
              v148 = v86;
              operator delete(v91);
              v86 = v148;
            }
            *(v83 - 2) = (__int64)v86;
            *v83 = v89;
          }
          if ( v87 )
          {
            v85 = (_BYTE *)*v81;
            if ( v87 == 1 )
              *(_BYTE *)v86 = *v85;
            else
              memcpy(v86, v85, v87);
            v86 = (__int64 *)*(v83 - 2);
          }
          *(v83 - 1) = v87;
          *((_BYTE *)v86 + v87) = 0;
        }
        v83 += 4;
        v81 += 4;
      }
      while ( v84 != v83 );
      v76 = (unsigned __int64 *)v151;
      v4 = v161;
      sub_E32260((__int64 *)v78 + 52, v157 + 52);
      sub_9EED30((__int64)(v78 + 528), v157 + 66);
    }
    else if ( v78 )
    {
      v112 = v4[1];
      if ( v112 )
      {
        if ( v112 > (unsigned __int64)v78 || (unsigned __int64)v78 > v112 + 14848 )
        {
          v113 = *((char **)v78 + 66);
          v114 = &v113[64 * (unsigned __int64)*((unsigned int *)v78 + 134)];
          if ( v113 != v114 )
          {
            do
            {
              while ( 1 )
              {
                v114 -= 64;
                v115 = *((char **)v114 + 3);
                if ( v115 == v114 + 40 )
                  break;
                operator delete(v115);
                if ( v113 == v114 )
                  goto LABEL_192;
              }
            }
            while ( v113 != v114 );
LABEL_192:
            v114 = *((char **)v78 + 66);
          }
          if ( v114 != v78 + 544 )
            free(v114);
          v116 = *((char **)v78 + 52);
          if ( v116 != v78 + 432 )
            free(v116);
          v117 = (void **)(v78 + 384);
          v118 = (void **)(v78 + 64);
          do
          {
            while ( *v117 != v117 + 2 )
            {
              operator delete(*v117);
              v117 -= 4;
              if ( v117 == v118 )
                goto LABEL_200;
            }
            v117 -= 4;
          }
          while ( v118 != v117 );
LABEL_200:
          operator delete(v78, 0x3A0u);
        }
        else
        {
          v142 = *(unsigned int *)(v112 + 14976);
          *(_DWORD *)(v112 + 14976) = v142 + 1;
          *(_QWORD *)(v112 + 8 * v142 + 14848) = v78;
        }
        *v4 = 0;
      }
    }
    *((_DWORD *)v4 + 6) = *((_DWORD *)v76 + 6);
    if ( v4 != v76 )
    {
      v92 = v76[4];
      v93 = v92 & 0xFFFFFFFFFFFFFFF8LL;
      v94 = (v92 >> 2) & 1;
      if ( v94 )
      {
        v95 = v4[4];
        v96 = v95 & 4;
        if ( !*(_DWORD *)(v93 + 8) )
        {
LABEL_177:
          if ( v96 )
            *(_DWORD *)((v95 & 0xFFFFFFFFFFFFFFF8LL) + 8) = 0;
          else
            v4[4] = 0;
          goto LABEL_161;
        }
      }
      else
      {
        v95 = v4[4];
        v96 = v95 & 4;
        if ( !v93 )
          goto LABEL_177;
      }
      if ( v96 )
      {
        v97 = v95 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v94 )
        {
          sub_1757D10((void **)v97, (char **)v93);
        }
        else
        {
          *(_DWORD *)(v97 + 8) = 0;
          v98 = (char *)v76[4];
          v99 = v4[4] & 0xFFFFFFFFFFFFFFF8LL;
          if ( ((unsigned __int8)v98 & 4) != 0 )
            v100 = **(_QWORD **)((unsigned __int64)v98 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v100 = (unsigned __int64)v98 & 0xFFFFFFFFFFFFFFF8LL;
          v101 = *(unsigned int *)(v99 + 8);
          if ( v101 + 1 > (unsigned __int64)*(unsigned int *)(v99 + 12) )
          {
            sub_2237220(v4[4] & 0xFFFFFFFFFFFFFFF8LL, v99 + 16, v101 + 1, 8);
            v101 = *(unsigned int *)(v99 + 8);
          }
          *(_QWORD *)(*(_QWORD *)v99 + 8 * v101) = v100;
          ++*(_DWORD *)(v99 + 8);
        }
      }
      else
      {
        if ( v94 )
        {
          if ( *(_DWORD *)(v93 + 8) == 1 )
          {
            v93 = **(_QWORD **)v93 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_233:
            v4[4] = v93;
            goto LABEL_161;
          }
        }
        else if ( v93 )
        {
          goto LABEL_233;
        }
        v126 = operator new(0x30u);
        *(_QWORD *)v126 = v126 + 16;
        *(_QWORD *)(v126 + 8) = 0x400000000LL;
        if ( *(_DWORD *)(v93 + 8) )
          sub_1757D10((void **)v126, (char **)v93);
        v4[4] = v126 | 4;
      }
    }
LABEL_161:
    v76 += 5;
    v4 += 5;
  }
  while ( v4 != v154 );
  v4 = *(unsigned __int64 **)a1;
  v146 = *(unsigned int *)(a1 + 8);
LABEL_96:
  v62 = &v4[5 * v146];
  if ( v154 == v62 )
    goto LABEL_57;
  do
  {
    v62 -= 5;
    v63 = v62[4];
    if ( v63 )
    {
      if ( (v63 & 4) != 0 )
      {
        v64 = (void **)(v63 & 0xFFFFFFFFFFFFFFF8LL);
        v65 = v64;
        if ( v64 )
        {
          v66 = (void **)*v64;
          if ( v66 != v65 + 2 )
            free(v66);
          operator delete(v65, 0x30u);
        }
      }
    }
    v67 = *v62;
    if ( *v62 )
    {
      v68 = v62[1];
      if ( v68 )
      {
        if ( v67 < v68 || v67 > v68 + 14848 )
        {
          v69 = *(_QWORD **)(v67 + 528);
          v70 = &v69[8 * (unsigned __int64)*(unsigned int *)(v67 + 536)];
          if ( v69 != v70 )
          {
            do
            {
              while ( 1 )
              {
                v70 -= 8;
                v71 = (_QWORD *)v70[3];
                if ( v71 == v70 + 5 )
                  break;
                operator delete(v71);
                if ( v69 == v70 )
                  goto LABEL_109;
              }
            }
            while ( v69 != v70 );
LABEL_109:
            v70 = *(_QWORD **)(v67 + 528);
          }
          if ( v70 != (_QWORD *)(v67 + 544) )
            free(v70);
          v72 = *(void **)(v67 + 416);
          if ( v72 != (void *)(v67 + 432) )
            free(v72);
          v73 = (void **)(v67 + 384);
          v74 = (void **)(v67 + 64);
          do
          {
            while ( *v73 != v73 + 2 )
            {
              operator delete(*v73);
              v73 -= 4;
              if ( v74 == v73 )
                goto LABEL_117;
            }
            v73 -= 4;
          }
          while ( v74 != v73 );
LABEL_117:
          operator delete((void *)v67, 0x3A0u);
        }
        else
        {
          v75 = *(unsigned int *)(v68 + 14976);
          *(_DWORD *)(v68 + 14976) = v75 + 1;
          *(_QWORD *)(v68 + 8 * v75 + 14848) = v67;
        }
      }
    }
  }
  while ( v154 != v62 );
  *(_DWORD *)(a1 + 8) = v162;
  return a1;
}
