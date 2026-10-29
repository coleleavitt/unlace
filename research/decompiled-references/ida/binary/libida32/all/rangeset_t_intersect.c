__int64 __fastcall rangeset_t_intersect(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  int v5; // eax
  bool v6; // zf
  void **v8; // r15
  __int64 result; // rax
  char v10; // al
  int v11; // ebp
  int v12; // r9d
  unsigned __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // r14
  unsigned int *v16; // r11
  unsigned int v17; // edx
  __int64 v18; // r8
  unsigned int *v19; // r12
  unsigned int v20; // r14d
  unsigned int v21; // eax
  void **v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // r8
  void **v26; // r12
  __int64 v27; // rax
  char *v28; // rax
  void *v29; // r11
  char *v30; // r15
  unsigned __int64 v31; // rdx
  char *v32; // rax
  char v33; // al
  __int64 v34; // rax
  void **v35; // rbx
  __int64 v36; // rax
  char *v37; // rax
  void *v38; // r9
  char *v39; // r12
  unsigned __int64 v40; // rdx
  __int64 v41; // rbp
  char *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  _QWORD *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  bool v48; // cf
  unsigned __int64 v49; // rbx
  __int64 v50; // rax
  char *v51; // rax
  __int64 v52; // r9
  char *v53; // r12
  unsigned __int64 v54; // rdx
  char *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  void **v58; // rsi
  _QWORD *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned int v62; // eax
  _QWORD *v63; // xmm0_8
  __int64 v64; // rax
  char *v65; // r15
  unsigned __int64 v66; // rsi
  char *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rdx
  _QWORD *v70; // rdi
  __int64 v71; // rcx
  _QWORD *v72; // r8
  _QWORD *v73; // r10
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // r14
  unsigned int v77; // r15d
  __int64 v78; // rax
  __int64 v79; // rsi
  _QWORD *v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r14
  __int64 v84; // rax
  char *v85; // r15
  __int64 v86; // r12
  unsigned __int64 v87; // rsi
  char *v88; // rax
  __int64 v89; // rax
  void **v90; // rsi
  _QWORD *v91; // rdi
  __int64 v92; // rdx
  __int64 v93; // r9
  __int64 v94; // rcx
  __int64 v95; // rax
  _QWORD *v96; // rdx
  _QWORD *v97; // rdi
  __int64 v98; // rcx
  _QWORD *v99; // r8
  _QWORD *v100; // r10
  void *v101; // r11
  __int64 v102; // rsi
  __int64 v103; // r12
  unsigned __int64 v104; // rdx
  __int64 v105; // xmm0_8
  __int64 v106; // rax
  char *v107; // r12
  __int64 v108; // r14
  unsigned __int64 v109; // rdx
  char *v110; // rax
  char *v111; // rax
  char *v112; // rax
  void **v113; // rsi
  __int64 v114; // rax
  __int64 v115; // rax
  _QWORD *v116; // rdx
  _QWORD *v117; // rdi
  __int64 v118; // rcx
  int v119; // r9d
  __int64 v120; // r11
  _QWORD *v121; // r10
  __int64 v122; // rsi
  __int64 v123; // rax
  __int64 v124; // r14
  _QWORD *v125; // rdi
  int v126; // r9d
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r11
  _QWORD *v130; // r10
  __int64 v131; // rcx
  char *v132; // rax
  __int64 v133; // rax
  void *v134; // rdi
  _QWORD *v135; // rsi
  __int64 v136; // rcx
  int v137; // r9d
  __int64 v138; // r11
  _QWORD *v139; // xmm0_8
  _QWORD *v140; // rdx
  _QWORD *v141; // r10
  __int64 v142; // rdi
  __int64 v143; // rax
  void *v144; // rdi
  _QWORD *v145; // rdx
  int v146; // r9d
  __int64 v147; // rsi
  __int64 v148; // r8
  __int64 v149; // r11
  _QWORD *v150; // rcx
  _QWORD *v151; // r10
  __int64 v152; // rdi
  __int64 v153; // rax
  void *v154; // rdi
  __int64 v155; // r15
  int v156; // r9d
  __int64 v157; // rcx
  __int64 v158; // r10
  _QWORD *v159; // rdx
  __int64 v160; // rsi
  __int64 v161; // rax
  void *v162; // rdi
  __int64 v163; // r15
  int v164; // r9d
  __int64 v165; // rcx
  __int64 v166; // xmm0_8
  __int64 v167; // r10
  _QWORD *v168; // rdx
  __int64 v169; // rsi
  char src; // [rsp+8h] [rbp-100h]
  void **srca; // [rsp+8h] [rbp-100h]
  _QWORD *srce; // [rsp+8h] [rbp-100h]
  unsigned __int8 srcf; // [rsp+8h] [rbp-100h]
  unsigned int *srcb; // [rsp+8h] [rbp-100h]
  void *srcc; // [rsp+8h] [rbp-100h]
  unsigned int *srcd; // [rsp+8h] [rbp-100h]
  void **p_ptr; // [rsp+10h] [rbp-F8h]
  __int64 v178; // [rsp+18h] [rbp-F0h]
  __int64 v179; // [rsp+20h] [rbp-E8h]
  _QWORD *v180; // [rsp+28h] [rbp-E0h]
  _QWORD *v181; // [rsp+30h] [rbp-D8h]
  _QWORD *v182; // [rsp+38h] [rbp-D0h]
  void **v183; // [rsp+40h] [rbp-C8h]
  void *v184; // [rsp+48h] [rbp-C0h]
  __int64 v185; // [rsp+58h] [rbp-B0h] BYREF
  int v186; // [rsp+60h] [rbp-A8h]
  _QWORD *v187; // [rsp+68h] [rbp-A0h] BYREF
  int v188; // [rsp+70h] [rbp-98h]
  __int64 v189; // [rsp+78h] [rbp-90h] BYREF
  int v190; // [rsp+80h] [rbp-88h]
  __int64 v191; // [rsp+88h] [rbp-80h] BYREF
  int v192; // [rsp+90h] [rbp-78h]
  void *v193; // [rsp+94h] [rbp-74h] BYREF
  int v194; // [rsp+9Ch] [rbp-6Ch]
  void *ptr; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v196; // [rsp+A8h] [rbp-60h]
  int v197; // [rsp+B8h] [rbp-50h]
  char v198; // [rsp+BCh] [rbp-4Ch]
  unsigned __int64 v199; // [rsp+C8h] [rbp-40h]

  v199 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(a1 + 32);
  v6 = a2[1] == 0;
  ptr = nullptr;
  v197 = v5;
  v196 = 0;
  if ( v6 )
  {
    if ( v5 == -1 )
    {
      v198 = 0;
      v8 = *(void ***)a1;
    }
    else
    {
      v33 = must_journal(a1, v4, a3);
      v8 = *(void ***)a1;
      if ( v33 )
      {
        v34 = *(_QWORD *)(a1 + 8);
        v198 = 1;
        v35 = &v8[v34];
        if ( v8 < v35 )
        {
          v36 = v196;
          p_ptr = &ptr;
          do
          {
            v38 = *v8;
            v39 = (char *)ptr;
            v40 = v36 + 1;
            LOBYTE(v194) = 1;
            v41 = *((_QWORD *)&v196 + 1);
            v193 = v38;
            if ( &v193 < ptr || &v193 >= (void **)((char *)ptr + 12 * *((_QWORD *)&v196 + 1)) )
            {
              if ( *((_QWORD *)&v196 + 1) < v40 )
              {
                v43 = qvector_reserve(p_ptr, 0, v40, 12);
                v44 = *((_QWORD *)&v196 + 1);
                v39 = (char *)v43;
                *((_QWORD *)&v196 + 1) = v41;
                v45 = ptr;
                v46 = v196 - 1;
                if ( (__int64)v196 - 1 >= 0 )
                {
                  do
                  {
                    v47 = *v45;
                    v43 += 12;
                    v45 = (_QWORD *)((char *)v45 + 12);
                    *(_QWORD *)(v43 - 12) = v47;
                    *(_DWORD *)(v43 - 4) = *((_DWORD *)v45 - 1);
                    v48 = v46-- == 0;
                  }
                  while ( !v48 );
                  v45 = ptr;
                }
                qfree(v45);
                ptr = v39;
                v36 = v196;
                *((_QWORD *)&v196 + 1) = v44;
              }
              v42 = &v39[12 * v36];
              *(_QWORD *)v42 = v193;
              *((_DWORD *)v42 + 2) = v194;
            }
            else
            {
              if ( *((_QWORD *)&v196 + 1) < v40 )
              {
                srcc = v38;
                v78 = qvector_reserve(p_ptr, 0, v40, 12);
                v79 = *((_QWORD *)&v196 + 1);
                v39 = (char *)v78;
                *((_QWORD *)&v196 + 1) = v41;
                v80 = ptr;
                v81 = v196 - 1;
                if ( (__int64)v196 - 1 >= 0 )
                {
                  do
                  {
                    v82 = *v80;
                    v78 += 12;
                    v80 = (_QWORD *)((char *)v80 + 12);
                    *(_QWORD *)(v78 - 12) = v82;
                    *(_DWORD *)(v78 - 4) = *((_DWORD *)v80 - 1);
                    v48 = v81-- == 0;
                  }
                  while ( !v48 );
                  v80 = ptr;
                }
                v178 = (__int64)srcc;
                qfree(v80);
                ptr = v39;
                v36 = v196;
                v38 = srcc;
                *((_QWORD *)&v196 + 1) = v79;
              }
              v37 = &v39[12 * v36];
              *(_QWORD *)v37 = v38;
              v37[8] = 1;
            }
            ++v8;
            v36 = v196 + 1;
            *(_QWORD *)&v196 = v196 + 1;
          }
          while ( v8 < v35 );
          v8 = *(void ***)a1;
        }
      }
      else
      {
        v198 = 0;
      }
    }
    if ( v8 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v8);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    *(_QWORD *)(a1 + 24) = 0;
    sub_8218C0((__int64 *)&ptr);
    if ( ptr )
    {
      *(_QWORD *)&v196 = 0;
      qfree(ptr);
    }
    return 1;
  }
  if ( v5 == -1 )
  {
    v198 = 0;
    v10 = 0;
  }
  else
  {
    srce = a2;
    v10 = must_journal(a1, v4, a3);
    v4 = *(_QWORD *)(a1 + 8);
    a2 = srce;
    v198 = v10;
    if ( !v4 )
    {
      *(_QWORD *)(a1 + 24) = 0;
      goto LABEL_39;
    }
  }
  src = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  while ( 1 )
  {
    v15 = 8 * v13;
    v16 = (unsigned int *)(*(_QWORD *)a1 + 8 * v13);
    v17 = *v16;
    while ( 1 )
    {
      v18 = 8 * v14;
      v19 = (unsigned int *)(*a2 + 8 * v14);
      if ( v17 < v19[1] )
        break;
      v14 = ++v11;
      if ( v11 == a2[1] )
      {
        if ( v10 )
        {
          v49 = *(_QWORD *)a1 + 8 * v4;
          if ( (unsigned __int64)v16 < v49 )
          {
            v50 = v196;
            do
            {
              v52 = *(_QWORD *)v16;
              v53 = (char *)ptr;
              v54 = v50 + 1;
              LOBYTE(v192) = 1;
              v191 = v52;
              if ( &v191 < ptr || &v191 >= (__int64 *)((char *)ptr + 12 * *((_QWORD *)&v196 + 1)) )
              {
                if ( *((_QWORD *)&v196 + 1) < v54 )
                {
                  p_ptr = *((void ***)&v196 + 1);
                  srcb = v16;
                  v57 = qvector_reserve(&ptr, 0, v54, 12);
                  v53 = (char *)v57;
                  v58 = *((void ***)&v196 + 1);
                  v59 = ptr;
                  v60 = v196 - 1;
                  *((_QWORD *)&v196 + 1) = p_ptr;
                  if ( (__int64)v196 - 1 >= 0 )
                  {
                    do
                    {
                      v61 = *v59;
                      v57 += 12;
                      v59 = (_QWORD *)((char *)v59 + 12);
                      *(_QWORD *)(v57 - 12) = v61;
                      *(_DWORD *)(v57 - 4) = *((_DWORD *)v59 - 1);
                      v48 = v60-- == 0;
                    }
                    while ( !v48 );
                    v59 = ptr;
                  }
                  p_ptr = v58;
                  qfree(v59);
                  ptr = v53;
                  v50 = v196;
                  v16 = srcb;
                  *((_QWORD *)&v196 + 1) = p_ptr;
                }
                v55 = &v53[12 * v50];
                *(_QWORD *)v55 = v191;
                *((_DWORD *)v55 + 2) = v192;
              }
              else
              {
                if ( *((_QWORD *)&v196 + 1) < v54 )
                {
                  v178 = v52;
                  p_ptr = *((void ***)&v196 + 1);
                  srcd = v16;
                  v89 = qvector_reserve(&ptr, 0, v54, 12);
                  v53 = (char *)v89;
                  v90 = *((void ***)&v196 + 1);
                  v91 = ptr;
                  v92 = v196 - 1;
                  v93 = v178;
                  *((_QWORD *)&v196 + 1) = p_ptr;
                  if ( (__int64)v196 - 1 >= 0 )
                  {
                    do
                    {
                      v94 = *v91;
                      v89 += 12;
                      v91 = (_QWORD *)((char *)v91 + 12);
                      *(_QWORD *)(v89 - 12) = v94;
                      *(_DWORD *)(v89 - 4) = *((_DWORD *)v91 - 1);
                      v48 = v92-- == 0;
                    }
                    while ( !v48 );
                    v91 = ptr;
                  }
                  v178 = v93;
                  p_ptr = v90;
                  qfree(v91);
                  ptr = v53;
                  v50 = v196;
                  v52 = v178;
                  *((_QWORD *)&v196 + 1) = p_ptr;
                  v16 = srcd;
                }
                v51 = &v53[12 * v50];
                *(_QWORD *)v51 = v52;
                v51[8] = 1;
              }
              v16 += 2;
              v50 = v196 + 1;
              *(_QWORD *)&v196 = v196 + 1;
            }
            while ( (unsigned __int64)v16 < v49 );
          }
        }
        v56 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 8) = v56 - ((8 * v56 - v15) >> 3);
        sub_8218C0((__int64 *)&ptr);
        goto LABEL_65;
      }
    }
    if ( v10 )
    {
      v83 = *(_QWORD *)v16;
      LOBYTE(v186) = 1;
      v84 = v196;
      v85 = (char *)ptr;
      v185 = v83;
      v86 = *((_QWORD *)&v196 + 1);
      v87 = v196 + 1;
      if ( &v185 >= ptr && &v185 < (__int64 *)((char *)ptr + 12 * *((_QWORD *)&v196 + 1)) )
      {
        if ( *((_QWORD *)&v196 + 1) < v87 )
        {
          v180 = a2;
          v179 = (__int64)v16;
          v178 = 8 * v14;
          LODWORD(p_ptr) = v12;
          v143 = qvector_reserve(&ptr, 0, v196 + 1, 12);
          v144 = ptr;
          v85 = (char *)v143;
          v145 = *((_QWORD **)&v196 + 1);
          v146 = (int)p_ptr;
          *((_QWORD *)&v196 + 1) = v86;
          v147 = v196 - 1;
          v148 = v178;
          v149 = v179;
          v150 = ptr;
          v151 = v180;
          if ( (__int64)v196 - 1 >= 0 )
          {
            do
            {
              v152 = *v150;
              v143 += 12;
              v150 = (_QWORD *)((char *)v150 + 12);
              *(_QWORD *)(v143 - 12) = v152;
              *(_DWORD *)(v143 - 4) = *((_DWORD *)v150 - 1);
              v48 = v147-- == 0;
            }
            while ( !v48 );
            v144 = ptr;
          }
          v181 = v151;
          v180 = v145;
          v179 = v149;
          v178 = v148;
          LODWORD(p_ptr) = v146;
          qfree(v144);
          ptr = v85;
          v12 = (int)p_ptr;
          v18 = v178;
          *((_QWORD *)&v196 + 1) = v180;
          v16 = (unsigned int *)v179;
          a2 = v181;
          v84 = v196;
        }
        v112 = &v85[12 * v84];
        *(_QWORD *)v112 = v83;
        v112[8] = 1;
      }
      else
      {
        if ( *((_QWORD *)&v196 + 1) < v87 )
        {
          v180 = a2;
          v179 = (__int64)v16;
          v178 = 8 * v14;
          LODWORD(p_ptr) = v12;
          v123 = qvector_reserve(&ptr, 0, v196 + 1, 12);
          v124 = *((_QWORD *)&v196 + 1);
          v85 = (char *)v123;
          *((_QWORD *)&v196 + 1) = v86;
          v125 = ptr;
          v126 = (int)p_ptr;
          v127 = v196 - 1;
          v128 = v178;
          v129 = v179;
          v130 = v180;
          if ( (__int64)v196 - 1 >= 0 )
          {
            do
            {
              v131 = *v125;
              v123 += 12;
              v125 = (_QWORD *)((char *)v125 + 12);
              *(_QWORD *)(v123 - 12) = v131;
              *(_DWORD *)(v123 - 4) = *((_DWORD *)v125 - 1);
              v48 = v127-- == 0;
            }
            while ( !v48 );
            v125 = ptr;
          }
          v180 = v130;
          v179 = v129;
          v178 = v128;
          LODWORD(p_ptr) = v126;
          qfree(v125);
          ptr = v85;
          v84 = v196;
          *((_QWORD *)&v196 + 1) = v124;
          a2 = v180;
          v16 = (unsigned int *)v179;
          v18 = v178;
          v12 = (int)p_ptr;
        }
        v88 = &v85[12 * v84];
        *(_QWORD *)v88 = v185;
        *((_DWORD *)v88 + 2) = v186;
      }
      *(_QWORD *)&v196 = v196 + 1;
      v17 = *v16;
      v19 = (unsigned int *)(*a2 + v18);
    }
    v20 = v16[1];
    LODWORD(p_ptr) = v12 + 1;
    v21 = *v19;
    if ( v17 < *v19 )
    {
      if ( v21 >= v20 )
      {
        LODWORD(p_ptr) = v12;
LABEL_20:
        if ( !v198 )
          goto LABEL_21;
        goto LABEL_75;
      }
      *v16 = v21;
      src = 1;
    }
    v62 = v19[1];
    if ( v62 >= v20 )
      goto LABEL_20;
    v16[1] = v62;
    src = 1;
    if ( !v198 )
      goto LABEL_21;
LABEL_75:
    v63 = *(_QWORD **)v16;
    LOBYTE(v188) = 0;
    v64 = v196;
    v65 = (char *)ptr;
    v187 = v63;
    v66 = v196 + 1;
    if ( &v187 >= ptr && &v187 < (_QWORD **)((char *)ptr + 12 * *((_QWORD *)&v196 + 1)) )
    {
      if ( *((_QWORD *)&v196 + 1) < v66 )
      {
        v182 = a2;
        v181 = *((_QWORD **)&v196 + 1);
        v179 = (__int64)v16;
        LODWORD(v178) = v12;
        v180 = v63;
        v133 = qvector_reserve(&ptr, 0, v196 + 1, 12);
        v65 = (char *)v133;
        v134 = ptr;
        v135 = *((_QWORD **)&v196 + 1);
        v136 = v196 - 1;
        *((_QWORD *)&v196 + 1) = v181;
        v137 = v178;
        v138 = v179;
        v139 = v180;
        v140 = ptr;
        v141 = v182;
        if ( (__int64)v196 - 1 >= 0 )
        {
          do
          {
            v142 = *v140;
            v133 += 12;
            v140 = (_QWORD *)((char *)v140 + 12);
            *(_QWORD *)(v133 - 12) = v142;
            *(_DWORD *)(v133 - 4) = *((_DWORD *)v140 - 1);
            v48 = v136-- == 0;
          }
          while ( !v48 );
          v134 = ptr;
        }
        v182 = v141;
        v181 = v135;
        v179 = v138;
        LODWORD(v178) = v137;
        v180 = v139;
        qfree(v134);
        ptr = v65;
        v12 = v178;
        v16 = (unsigned int *)v179;
        *((_QWORD *)&v196 + 1) = v181;
        v63 = v180;
        a2 = v182;
        v64 = v196;
      }
      v111 = &v65[12 * v64];
      v111[8] = 0;
      *(_QWORD *)v111 = v63;
    }
    else
    {
      if ( *((_QWORD *)&v196 + 1) < v66 )
      {
        v181 = a2;
        v180 = *((_QWORD **)&v196 + 1);
        v179 = (__int64)v16;
        LODWORD(v178) = v12;
        v115 = qvector_reserve(&ptr, 0, v196 + 1, 12);
        v65 = (char *)v115;
        v116 = *((_QWORD **)&v196 + 1);
        v117 = ptr;
        v118 = v196 - 1;
        v119 = v178;
        v120 = v179;
        *((_QWORD *)&v196 + 1) = v180;
        v121 = v181;
        if ( (__int64)v196 - 1 >= 0 )
        {
          do
          {
            v122 = *v117;
            v115 += 12;
            v117 = (_QWORD *)((char *)v117 + 12);
            *(_QWORD *)(v115 - 12) = v122;
            *(_DWORD *)(v115 - 4) = *((_DWORD *)v117 - 1);
            v48 = v118-- == 0;
          }
          while ( !v48 );
          v117 = ptr;
        }
        v181 = v121;
        v180 = v116;
        v179 = v120;
        LODWORD(v178) = v119;
        qfree(v117);
        ptr = v65;
        v64 = v196;
        a2 = v181;
        *((_QWORD *)&v196 + 1) = v180;
        v16 = (unsigned int *)v179;
        v12 = v178;
      }
      v67 = &v65[12 * v64];
      *(_QWORD *)v67 = v187;
      *((_DWORD *)v67 + 2) = v188;
    }
    *(_QWORD *)&v196 = v196 + 1;
LABEL_21:
    v22 = *(void ***)a1;
    v23 = v12;
    do
    {
      if ( *v19 < HIDWORD(v22[v23]) )
        break;
      v23 = ++v12;
    }
    while ( v12 != *(_QWORD *)(a1 + 8) );
    if ( v12 <= (int)p_ptr )
    {
      v77 = v16[1];
      v4 = *(_QWORD *)(a1 + 8);
      if ( v77 < v20 )
      {
        v103 = 8 * v23 + 8;
        v104 = v4 + 1;
        if ( *(_QWORD *)(a1 + 16) < v4 + 1 )
        {
          v113 = *(void ***)a1;
          v178 = (__int64)a2;
          LODWORD(p_ptr) = v12;
          v114 = qvector_reserve(a1, v113, v104, 8);
          v4 = *(_QWORD *)(a1 + 8);
          a2 = (_QWORD *)v178;
          *(_QWORD *)a1 = v114;
          v22 = (void **)v114;
          v12 = (int)p_ptr;
        }
        v179 = (__int64)a2;
        LODWORD(v178) = v12;
        p_ptr = (void **)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v77), _mm_cvtsi32_si128(v20)).m128i_u64[0];
        memmove((char *)v22 + v103 + 8, (char *)v22 + v103, 8 * v4 - v103);
        v12 = v178;
        a2 = (_QWORD *)v179;
        v105 = (__int64)p_ptr;
        *(void **)((char *)v22 + v103) = p_ptr;
        v6 = v198 == 0;
        v4 = *(_QWORD *)(a1 + 8) + 1LL;
        *(_QWORD *)(a1 + 8) = v4;
        if ( !v6 )
        {
          v106 = v196;
          v107 = (char *)ptr;
          LOBYTE(v190) = 0;
          v108 = *((_QWORD *)&v196 + 1);
          v189 = v105;
          v109 = v196 + 1;
          if ( &v189 < ptr || &v189 >= (__int64 *)((char *)ptr + 12 * *((_QWORD *)&v196 + 1)) )
          {
            if ( *((_QWORD *)&v196 + 1) < v109 )
            {
              v178 = (__int64)a2;
              LODWORD(p_ptr) = v12;
              v153 = qvector_reserve(&ptr, 0, v109, 12);
              v154 = ptr;
              v107 = (char *)v153;
              v155 = *((_QWORD *)&v196 + 1);
              v156 = (int)p_ptr;
              *((_QWORD *)&v196 + 1) = v108;
              v157 = v196 - 1;
              v158 = v178;
              v159 = ptr;
              if ( (__int64)v196 - 1 >= 0 )
              {
                do
                {
                  v160 = *v159;
                  v153 += 12;
                  v159 = (_QWORD *)((char *)v159 + 12);
                  *(_QWORD *)(v153 - 12) = v160;
                  *(_DWORD *)(v153 - 4) = *((_DWORD *)v159 - 1);
                  v48 = v157-- == 0;
                }
                while ( !v48 );
                v154 = ptr;
              }
              v178 = v158;
              LODWORD(p_ptr) = v156;
              qfree(v154);
              ptr = v107;
              v12 = (int)p_ptr;
              *((_QWORD *)&v196 + 1) = v155;
              a2 = (_QWORD *)v178;
              v106 = v196;
            }
            v132 = &v107[12 * v106];
            *(_QWORD *)v132 = v189;
            *((_DWORD *)v132 + 2) = v190;
          }
          else
          {
            if ( *((_QWORD *)&v196 + 1) < v109 )
            {
              LODWORD(p_ptr) = v12;
              v178 = v105;
              v161 = qvector_reserve(&ptr, 0, v109, 12);
              v162 = ptr;
              v107 = (char *)v161;
              v163 = *((_QWORD *)&v196 + 1);
              v164 = (int)p_ptr;
              *((_QWORD *)&v196 + 1) = v108;
              v165 = v196 - 1;
              v166 = v178;
              v167 = v179;
              v168 = ptr;
              if ( (__int64)v196 - 1 >= 0 )
              {
                do
                {
                  v169 = *v168;
                  v161 += 12;
                  v168 = (_QWORD *)((char *)v168 + 12);
                  *(_QWORD *)(v161 - 12) = v169;
                  *(_DWORD *)(v161 - 4) = *((_DWORD *)v168 - 1);
                  v48 = v165-- == 0;
                }
                while ( !v48 );
                v162 = ptr;
              }
              v179 = v167;
              LODWORD(p_ptr) = v164;
              v178 = v166;
              qfree(v162);
              ptr = v107;
              v12 = (int)p_ptr;
              *((_QWORD *)&v196 + 1) = v163;
              v105 = v178;
              a2 = (_QWORD *)v179;
              v106 = v196;
            }
            v110 = &v107[12 * v106];
            v110[8] = 0;
            *(_QWORD *)v110 = v105;
          }
          *(_QWORD *)&v196 = v196 + 1;
          v4 = *(_QWORD *)(a1 + 8);
        }
      }
      v13 = ++v12;
    }
    else
    {
      v24 = v23;
      v25 = (_QWORD *)(int)p_ptr;
      v178 = v24 * 8;
      srca = &v22[v24];
      v26 = &v22[(int)p_ptr];
      v179 = 8LL * (int)p_ptr;
      if ( v198 && v26 < &v22[v24] )
      {
        v27 = v196;
        v183 = &ptr;
        do
        {
          v29 = *v26;
          v30 = (char *)ptr;
          v31 = v27 + 1;
          LOBYTE(v194) = 1;
          v193 = v29;
          if ( &v193 < ptr || &v193 >= (void **)((char *)ptr + 12 * *((_QWORD *)&v196 + 1)) )
          {
            if ( *((_QWORD *)&v196 + 1) < v31 )
            {
              v182 = a2;
              v181 = *((_QWORD **)&v196 + 1);
              v180 = v25;
              v68 = qvector_reserve(v183, 0, v31, 12);
              v30 = (char *)v68;
              v69 = *((_QWORD **)&v196 + 1);
              v70 = ptr;
              v71 = v196 - 1;
              v72 = v180;
              v73 = v182;
              *((_QWORD *)&v196 + 1) = v181;
              if ( (__int64)v196 - 1 >= 0 )
              {
                do
                {
                  v74 = *v70;
                  v68 += 12;
                  v70 = (_QWORD *)((char *)v70 + 12);
                  *(_QWORD *)(v68 - 12) = v74;
                  *(_DWORD *)(v68 - 4) = *((_DWORD *)v70 - 1);
                  v48 = v71-- == 0;
                }
                while ( !v48 );
                v70 = ptr;
              }
              v182 = v73;
              v181 = v72;
              v180 = v69;
              qfree(v70);
              ptr = v30;
              v27 = v196;
              a2 = v182;
              *((_QWORD *)&v196 + 1) = v180;
              v25 = v181;
            }
            v32 = &v30[12 * v27];
            *(_QWORD *)v32 = v193;
            *((_DWORD *)v32 + 2) = v194;
          }
          else
          {
            if ( *((_QWORD *)&v196 + 1) < v31 )
            {
              v184 = v29;
              v182 = a2;
              v181 = *((_QWORD **)&v196 + 1);
              v180 = v25;
              v95 = qvector_reserve(&ptr, 0, v31, 12);
              v30 = (char *)v95;
              v96 = *((_QWORD **)&v196 + 1);
              v97 = ptr;
              v98 = v196 - 1;
              v99 = v180;
              v100 = v182;
              *((_QWORD *)&v196 + 1) = v181;
              v101 = v184;
              if ( (__int64)v196 - 1 >= 0 )
              {
                do
                {
                  v102 = *v97;
                  v95 += 12;
                  v97 = (_QWORD *)((char *)v97 + 12);
                  *(_QWORD *)(v95 - 12) = v102;
                  *(_DWORD *)(v95 - 4) = *((_DWORD *)v97 - 1);
                  v48 = v98-- == 0;
                }
                while ( !v48 );
                v97 = ptr;
              }
              v184 = v101;
              v182 = v100;
              v181 = v99;
              v180 = v96;
              qfree(v97);
              ptr = v30;
              v27 = v196;
              v29 = v184;
              *((_QWORD *)&v196 + 1) = v180;
              a2 = v182;
              v25 = v181;
            }
            v28 = &v30[12 * v27];
            *(_QWORD *)v28 = v29;
            v28[8] = 1;
          }
          ++v26;
          v27 = v196 + 1;
          *(_QWORD *)&v196 = v196 + 1;
        }
        while ( v26 < srca );
        srca = (void **)(*(_QWORD *)a1 + v178);
        v26 = (void **)(v179 + *(_QWORD *)a1);
      }
      v75 = *(_QWORD *)(a1 + 8);
      v76 = v178;
      v181 = a2;
      v180 = v25;
      memmove(v26, srca, 8 * v75 - v178);
      src = 1;
      v12 = (int)p_ptr;
      v13 = (unsigned __int64)v180;
      a2 = v181;
      v4 = *(_QWORD *)(a1 + 8) - ((v76 - v179) >> 3);
      *(_QWORD *)(a1 + 8) = v4;
    }
    if ( v13 >= v4 )
      break;
    v10 = v198;
  }
  *(_QWORD *)(a1 + 24) = 0;
  if ( src )
  {
    sub_8218C0((__int64 *)&ptr);
LABEL_65:
    result = 1;
    goto LABEL_66;
  }
LABEL_39:
  result = 0;
LABEL_66:
  if ( ptr )
  {
    srcf = result;
    *(_QWORD *)&v196 = 0;
    qfree(ptr);
    return srcf;
  }
  return result;
}

