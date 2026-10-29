__int64 __fastcall rangeset_t_sub(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r12d
  __int64 v5; // rdx
  char v8; // al
  unsigned __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int *v11; // r12
  __int64 v12; // rsi
  unsigned int v13; // r13d
  unsigned int v14; // edi
  unsigned int v15; // r8d
  unsigned __int64 v16; // xmm0_8
  unsigned int v17; // eax
  int v18; // r13d
  unsigned __int64 v19; // r12
  int v20; // r10d
  unsigned __int64 *v21; // r11
  unsigned int v22; // edx
  unsigned int *v23; // rax
  unsigned int v24; // r15d
  unsigned int v25; // r8d
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  char *v28; // r12
  __int64 v29; // r14
  unsigned __int64 v30; // rdx
  char *v31; // rax
  char *v32; // rax
  __int64 v33; // rbp
  __int64 v34; // rax
  __int64 v35; // r15
  _QWORD *v36; // rdi
  unsigned __int64 *v37; // r11
  __int64 v38; // rdx
  __int64 v39; // rcx
  bool v40; // cf
  __m128i v41; // xmm1
  __int64 v42; // rax
  char *v43; // r12
  unsigned __int64 v44; // xmm0_8
  __int64 v45; // r13
  unsigned __int64 v46; // rsi
  char *v47; // rax
  __int64 v48; // rax
  __int64 v49; // r15
  _QWORD *v50; // rdi
  unsigned __int64 *v51; // r9
  __int64 v52; // rdx
  char *v53; // r11
  __int64 v54; // rcx
  __int64 v55; // rax
  char *v56; // rbp
  __int64 v57; // r13
  __int64 v58; // r14
  __int64 v59; // rax
  unsigned __int64 v60; // rsi
  char *v61; // rax
  __int64 v62; // rax
  char *v63; // rcx
  __int64 v64; // r13
  unsigned __int64 v65; // rsi
  char *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  char *v69; // r13
  __int64 v70; // r14
  unsigned __int64 v71; // rsi
  char *v72; // rax
  __m128i v73; // xmm0
  __int64 v74; // rax
  char *v75; // r12
  unsigned __int64 v76; // xmm0_8
  __int64 v77; // r14
  unsigned __int64 v78; // rsi
  char *v79; // rax
  __int64 v80; // rax
  char *v81; // r14
  __int64 v82; // r15
  unsigned __int64 v83; // rsi
  char *v84; // rax
  char *v85; // rax
  char *v86; // rax
  char *v87; // rax
  char *v88; // rax
  char *v89; // rax
  char *v90; // rax
  __int64 v91; // rax
  unsigned __int64 *v92; // rsi
  _QWORD *v93; // rdi
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // r15
  _QWORD *v98; // rdi
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  void *v102; // rdi
  char *v103; // rcx
  __int64 v104; // r15
  int v105; // r10d
  __int64 v106; // rsi
  _QWORD *v107; // rdx
  __int64 v108; // rdi
  __int64 v109; // rax
  void *v110; // rdi
  __int64 v111; // r14
  int v112; // r10d
  __int64 v113; // rcx
  _QWORD *v114; // rdx
  __int64 v115; // rsi
  __int64 v116; // rax
  void *v117; // rdi
  __int64 v118; // r15
  _QWORD *v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rsi
  __int64 v122; // rax
  void *v123; // rdi
  __int64 v124; // r14
  _QWORD *v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rsi
  __int64 v128; // rax
  void *v129; // rdi
  __int64 v130; // r15
  __int64 v131; // rcx
  _QWORD *v132; // rdx
  __int64 v133; // rsi
  __int64 v134; // rax
  void *v135; // rdi
  unsigned __int64 *v136; // rsi
  __int64 v137; // rcx
  _QWORD *v138; // rdx
  __int64 v139; // rdi
  __int64 v140; // rax
  void *v141; // rdi
  char *v142; // rcx
  __int64 v143; // rdx
  int v144; // r8d
  __int64 v145; // r9
  int v146; // r10d
  _QWORD *v147; // rsi
  __int64 v148; // rdi
  __int64 v149; // rax
  void *v150; // rdi
  __int64 v151; // r15
  int v152; // r10d
  __int64 v153; // rcx
  _QWORD *v154; // rdx
  __int64 v155; // rsi
  __int64 v156; // rax
  void *v157; // rdi
  __int64 v158; // r14
  unsigned __int64 *v159; // xmm0_8
  __int64 v160; // rcx
  _QWORD *v161; // rdx
  __int64 v162; // rsi
  __int64 v163; // rax
  void *v164; // rdi
  __int64 v165; // r15
  __int64 v166; // rcx
  _QWORD *v167; // rdx
  __int64 v168; // rsi
  int v169; // [rsp+4h] [rbp-104h]
  unsigned __int64 *v170; // [rsp+10h] [rbp-F8h]
  char *v171; // [rsp+18h] [rbp-F0h]
  char *v172; // [rsp+20h] [rbp-E8h]
  __int64 v173; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v174; // [rsp+30h] [rbp-D8h] BYREF
  int v175; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v176; // [rsp+40h] [rbp-C8h] BYREF
  int v177; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v178; // [rsp+50h] [rbp-B8h] BYREF
  int v179; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v180; // [rsp+60h] [rbp-A8h] BYREF
  int v181; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v182; // [rsp+70h] [rbp-98h] BYREF
  int v183; // [rsp+78h] [rbp-90h]
  __int64 v184; // [rsp+80h] [rbp-88h] BYREF
  int v185; // [rsp+88h] [rbp-80h]
  unsigned __int64 v186; // [rsp+90h] [rbp-78h] BYREF
  int v187; // [rsp+98h] [rbp-70h]
  void *ptr; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v189; // [rsp+A8h] [rbp-60h]
  int v190; // [rsp+B8h] [rbp-50h]
  char v191; // [rsp+BCh] [rbp-4Ch]
  unsigned __int64 v192; // [rsp+C8h] [rbp-40h]

  v2 = a2[1];
  v192 = __readfsqword(0x28u);
  v3 = 0;
  if ( *a2 >= v2 )
    return v3;
  v5 = *(unsigned int *)(a1 + 32);
  ptr = nullptr;
  v8 = 0;
  v190 = v5;
  v189 = 0;
  if ( (_DWORD)v5 != -1 )
    v8 = must_journal(a1, a2, v5);
  v9 = *(_QWORD *)(a1 + 8);
  v191 = v8;
  if ( v9 )
  {
    v10 = *a2;
    v11 = *(unsigned int **)a1;
    v12 = 0;
    while ( 1 )
    {
      v13 = v11[1];
      if ( v10 < v13 )
        break;
      ++v12;
      v11 += 2;
      if ( v12 == v9 )
        goto LABEL_27;
    }
    v14 = *v11;
    v15 = a2[1];
    if ( *v11 < v15 )
    {
      v169 = v12;
      v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(v13)).m128i_u64[0];
      if ( v14 >= v10 )
      {
        if ( v15 >= v13 )
        {
          v18 = v12;
          v169 = v12 - 1;
          goto LABEL_14;
        }
        if ( v8 )
        {
          v68 = v189;
          v69 = (char *)ptr;
          LOBYTE(v175) = 1;
          v70 = *((_QWORD *)&v189 + 1);
          v174 = v16;
          v71 = v189 + 1;
          if ( &v174 < ptr || &v174 >= (unsigned __int64 *)((char *)ptr + 12 * *((_QWORD *)&v189 + 1)) )
          {
            if ( *((_QWORD *)&v189 + 1) < v71 )
            {
              v116 = qvector_reserve(&ptr, 0, v189 + 1, 12);
              v117 = ptr;
              v69 = (char *)v116;
              v118 = *((_QWORD *)&v189 + 1);
              *((_QWORD *)&v189 + 1) = v70;
              v119 = ptr;
              v120 = v189 - 1;
              if ( (__int64)v189 - 1 >= 0 )
              {
                do
                {
                  v121 = *v119;
                  v116 += 12;
                  v119 = (_QWORD *)((char *)v119 + 12);
                  *(_QWORD *)(v116 - 12) = v121;
                  *(_DWORD *)(v116 - 4) = *((_DWORD *)v119 - 1);
                  v40 = v120-- == 0;
                }
                while ( !v40 );
                v117 = ptr;
              }
              qfree(v117);
              ptr = v69;
              v68 = v189;
              *((_QWORD *)&v189 + 1) = v118;
            }
            v90 = &v69[12 * v68];
            *(_QWORD *)v90 = v174;
            *((_DWORD *)v90 + 2) = v175;
          }
          else
          {
            if ( *((_QWORD *)&v189 + 1) < v71 )
            {
              v170 = (unsigned __int64 *)v16;
              v163 = qvector_reserve(&ptr, 0, v189 + 1, 12);
              v164 = ptr;
              v69 = (char *)v163;
              v165 = *((_QWORD *)&v189 + 1);
              *((_QWORD *)&v189 + 1) = v70;
              v166 = v189 - 1;
              v167 = ptr;
              if ( (__int64)v189 - 1 >= 0 )
              {
                do
                {
                  v168 = *v167;
                  v163 += 12;
                  v167 = (_QWORD *)((char *)v167 + 12);
                  *(_QWORD *)(v163 - 12) = v168;
                  *(_DWORD *)(v163 - 4) = *((_DWORD *)v167 - 1);
                  v40 = v166-- == 0;
                }
                while ( !v40 );
                v164 = ptr;
              }
              v170 = (unsigned __int64 *)v16;
              qfree(v164);
              ptr = v69;
              v16 = (unsigned __int64)v170;
              *((_QWORD *)&v189 + 1) = v165;
              v68 = v189;
            }
            v72 = &v69[12 * v68];
            v72[8] = 1;
            *(_QWORD *)v72 = v16;
          }
          *(_QWORD *)&v189 = v189 + 1;
          v15 = a2[1];
        }
        *v11 = v15;
        if ( v191 )
        {
          LOBYTE(v177) = 0;
          v41 = _mm_cvtsi32_si128(v11[1]);
          v42 = v189;
          v43 = (char *)ptr;
          v44 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), v41).m128i_u64[0];
          v45 = *((_QWORD *)&v189 + 1);
          v176 = v44;
          v46 = v189 + 1;
          if ( &v176 < ptr || &v176 >= (unsigned __int64 *)((char *)ptr + 12 * *((_QWORD *)&v189 + 1)) )
          {
            if ( *((_QWORD *)&v189 + 1) < v46 )
            {
              v122 = qvector_reserve(&ptr, 0, v189 + 1, 12);
              v123 = ptr;
              v43 = (char *)v122;
              v124 = *((_QWORD *)&v189 + 1);
              *((_QWORD *)&v189 + 1) = v45;
              v125 = ptr;
              v126 = v189 - 1;
              if ( (__int64)v189 - 1 >= 0 )
              {
                do
                {
                  v127 = *v125;
                  v122 += 12;
                  v125 = (_QWORD *)((char *)v125 + 12);
                  *(_QWORD *)(v122 - 12) = v127;
                  *(_DWORD *)(v122 - 4) = *((_DWORD *)v125 - 1);
                  v40 = v126-- == 0;
                }
                while ( !v40 );
                v123 = ptr;
              }
              qfree(v123);
              ptr = v43;
              v42 = v189;
              *((_QWORD *)&v189 + 1) = v124;
            }
            v89 = &v43[12 * v42];
            *(_QWORD *)v89 = v176;
            *((_DWORD *)v89 + 2) = v177;
          }
          else
          {
            if ( *((_QWORD *)&v189 + 1) < v46 )
            {
              v170 = (unsigned __int64 *)v44;
              v156 = qvector_reserve(&ptr, 0, v189 + 1, 12);
              v157 = ptr;
              v43 = (char *)v156;
              v158 = *((_QWORD *)&v189 + 1);
              v159 = v170;
              *((_QWORD *)&v189 + 1) = v45;
              v160 = v189 - 1;
              v161 = ptr;
              if ( (__int64)v189 - 1 >= 0 )
              {
                do
                {
                  v162 = *v161;
                  v156 += 12;
                  v161 = (_QWORD *)((char *)v161 + 12);
                  *(_QWORD *)(v156 - 12) = v162;
                  *(_DWORD *)(v156 - 4) = *((_DWORD *)v161 - 1);
                  v40 = v160-- == 0;
                }
                while ( !v40 );
                v157 = ptr;
              }
              v170 = v159;
              qfree(v157);
              ptr = v43;
              v44 = (unsigned __int64)v170;
              *((_QWORD *)&v189 + 1) = v158;
              v42 = v189;
            }
            v47 = &v43[12 * v42];
            v47[8] = 0;
            *(_QWORD *)v47 = v44;
          }
          *(_QWORD *)&v189 = v189 + 1;
        }
      }
      else
      {
        if ( v8 )
        {
          v80 = v189;
          v81 = (char *)ptr;
          LOBYTE(v179) = 1;
          v82 = *((_QWORD *)&v189 + 1);
          v178 = v16;
          v83 = v189 + 1;
          if ( &v178 < ptr || &v178 >= (unsigned __int64 *)((char *)ptr + 12 * *((_QWORD *)&v189 + 1)) )
          {
            if ( *((_QWORD *)&v189 + 1) < v83 )
            {
              v91 = qvector_reserve(&ptr, 0, v189 + 1, 12);
              v92 = *((unsigned __int64 **)&v189 + 1);
              v81 = (char *)v91;
              *((_QWORD *)&v189 + 1) = v82;
              v93 = ptr;
              v94 = v189 - 1;
              if ( (__int64)v189 - 1 >= 0 )
              {
                do
                {
                  v95 = *v93;
                  v91 += 12;
                  v93 = (_QWORD *)((char *)v93 + 12);
                  *(_QWORD *)(v91 - 12) = v95;
                  *(_DWORD *)(v91 - 4) = *((_DWORD *)v93 - 1);
                  v40 = v94-- == 0;
                }
                while ( !v40 );
                v93 = ptr;
              }
              v170 = v92;
              qfree(v93);
              ptr = v81;
              v80 = v189;
              *((_QWORD *)&v189 + 1) = v92;
            }
            v86 = &v81[12 * v80];
            *(_QWORD *)v86 = v178;
            *((_DWORD *)v86 + 2) = v179;
          }
          else
          {
            if ( *((_QWORD *)&v189 + 1) < v83 )
            {
              v170 = (unsigned __int64 *)v16;
              v134 = qvector_reserve(&ptr, 0, v189 + 1, 12);
              v135 = ptr;
              v81 = (char *)v134;
              v136 = *((unsigned __int64 **)&v189 + 1);
              *((_QWORD *)&v189 + 1) = v82;
              v137 = v189 - 1;
              v138 = ptr;
              if ( (__int64)v189 - 1 >= 0 )
              {
                do
                {
                  v139 = *v138;
                  v134 += 12;
                  v138 = (_QWORD *)((char *)v138 + 12);
                  *(_QWORD *)(v134 - 12) = v139;
                  *(_DWORD *)(v134 - 4) = *((_DWORD *)v138 - 1);
                  v40 = v137-- == 0;
                }
                while ( !v40 );
                v135 = ptr;
              }
              v170 = v136;
              v171 = (char *)v16;
              qfree(v135);
              ptr = v81;
              v16 = (unsigned __int64)v171;
              v80 = v189;
              *((_QWORD *)&v189 + 1) = v136;
            }
            v84 = &v81[12 * v80];
            v84[8] = 1;
            *(_QWORD *)v84 = v16;
          }
          *(_QWORD *)&v189 = v189 + 1;
          v10 = *a2;
        }
        v11[1] = v10;
        if ( v191 )
        {
          v73 = _mm_cvtsi32_si128(*v11);
          v74 = v189;
          v75 = (char *)ptr;
          LOBYTE(v181) = 0;
          v76 = _mm_unpacklo_epi32(v73, _mm_cvtsi32_si128(v10)).m128i_u64[0];
          v77 = *((_QWORD *)&v189 + 1);
          v78 = v189 + 1;
          v180 = v76;
          if ( &v180 < ptr || &v180 >= (unsigned __int64 *)((char *)ptr + 12 * *((_QWORD *)&v189 + 1)) )
          {
            if ( *((_QWORD *)&v189 + 1) < v78 )
            {
              v96 = qvector_reserve(&ptr, 0, v189 + 1, 12);
              v97 = *((_QWORD *)&v189 + 1);
              v75 = (char *)v96;
              *((_QWORD *)&v189 + 1) = v77;
              v98 = ptr;
              v99 = v189 - 1;
              if ( (__int64)v189 - 1 >= 0 )
              {
                do
                {
                  v100 = *v98;
                  v96 += 12;
                  v98 = (_QWORD *)((char *)v98 + 12);
                  *(_QWORD *)(v96 - 12) = v100;
                  *(_DWORD *)(v96 - 4) = *((_DWORD *)v98 - 1);
                  v40 = v99-- == 0;
                }
                while ( !v40 );
                v98 = ptr;
              }
              qfree(v98);
              ptr = v75;
              v74 = v189;
              *((_QWORD *)&v189 + 1) = v97;
            }
            v85 = &v75[12 * v74];
            *(_QWORD *)v85 = v180;
            *((_DWORD *)v85 + 2) = v181;
          }
          else
          {
            if ( *((_QWORD *)&v189 + 1) < v78 )
            {
              v170 = (unsigned __int64 *)v76;
              v128 = qvector_reserve(&ptr, 0, v189 + 1, 12);
              v129 = ptr;
              v75 = (char *)v128;
              v130 = *((_QWORD *)&v189 + 1);
              *((_QWORD *)&v189 + 1) = v77;
              v131 = v189 - 1;
              v132 = ptr;
              if ( (__int64)v189 - 1 >= 0 )
              {
                do
                {
                  v133 = *v132;
                  v128 += 12;
                  v132 = (_QWORD *)((char *)v132 + 12);
                  *(_QWORD *)(v128 - 12) = v133;
                  *(_DWORD *)(v128 - 4) = *((_DWORD *)v132 - 1);
                  v40 = v131-- == 0;
                }
                while ( !v40 );
                v129 = ptr;
              }
              v170 = (unsigned __int64 *)v76;
              qfree(v129);
              ptr = v75;
              v76 = (unsigned __int64)v170;
              *((_QWORD *)&v189 + 1) = v130;
              v74 = v189;
            }
            v79 = &v75[12 * v74];
            v79[8] = 0;
            *(_QWORD *)v79 = v76;
          }
          *(_QWORD *)&v189 = v189 + 1;
        }
        v17 = a2[1];
        if ( v17 < v13 )
        {
          v186 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v13)).m128i_u64[0];
          sub_821AC0((__int64 *)a1, (unsigned int *)&v186, (__int64)&ptr);
          v9 = *(_QWORD *)(a1 + 8);
          v18 = v169 + 2;
          ++v169;
          goto LABEL_14;
        }
      }
      v9 = *(_QWORD *)(a1 + 8);
      v18 = v169 + 1;
LABEL_14:
      v19 = v18;
      v20 = v169;
      v21 = &v186;
      if ( v18 < v9 )
      {
        while ( 1 )
        {
          v22 = a2[1];
          v23 = (unsigned int *)(8 * v19 + *(_QWORD *)a1);
          v24 = *v23;
          if ( *v23 >= v22 )
            break;
          v25 = v23[1];
          v26 = *(_QWORD *)v23;
          if ( v22 < v25 )
          {
            if ( v191 )
            {
              v62 = v189;
              v182 = __PAIR64__(v25, v24);
              v63 = (char *)ptr;
              LOBYTE(v183) = 1;
              v64 = *((_QWORD *)&v189 + 1);
              v65 = v189 + 1;
              if ( &v182 < ptr || &v182 >= (unsigned __int64 *)((char *)ptr + 12 * *((_QWORD *)&v189 + 1)) )
              {
                if ( *((_QWORD *)&v189 + 1) < v65 )
                {
                  LODWORD(v170) = v20;
                  v101 = qvector_reserve(&ptr, 0, v189 + 1, 12);
                  v102 = ptr;
                  v103 = (char *)v101;
                  v104 = *((_QWORD *)&v189 + 1);
                  v105 = (int)v170;
                  *((_QWORD *)&v189 + 1) = v64;
                  v106 = v189 - 1;
                  v107 = ptr;
                  if ( (__int64)v189 - 1 >= 0 )
                  {
                    do
                    {
                      v108 = *v107;
                      v101 += 12;
                      v107 = (_QWORD *)((char *)v107 + 12);
                      *(_QWORD *)(v101 - 12) = v108;
                      *(_DWORD *)(v101 - 4) = *((_DWORD *)v107 - 1);
                      v40 = v106-- == 0;
                    }
                    while ( !v40 );
                    v102 = ptr;
                  }
                  v171 = v103;
                  LODWORD(v170) = v105;
                  qfree(v102);
                  v63 = v171;
                  *((_QWORD *)&v189 + 1) = v104;
                  v20 = (int)v170;
                  v62 = v189;
                  ptr = v171;
                }
                v88 = &v63[12 * v62];
                *(_QWORD *)v88 = v182;
                *((_DWORD *)v88 + 2) = v183;
              }
              else
              {
                if ( *((_QWORD *)&v189 + 1) < v65 )
                {
                  LODWORD(v171) = v20;
                  LODWORD(v170) = v25;
                  v140 = qvector_reserve(&ptr, 0, v189 + 1, 12);
                  v141 = ptr;
                  v142 = (char *)v140;
                  v143 = *((_QWORD *)&v189 + 1);
                  v144 = (int)v170;
                  *((_QWORD *)&v189 + 1) = v64;
                  v145 = v189 - 1;
                  v146 = (int)v171;
                  v147 = ptr;
                  if ( (__int64)v189 - 1 >= 0 )
                  {
                    do
                    {
                      v148 = *v147;
                      v140 += 12;
                      v147 = (_QWORD *)((char *)v147 + 12);
                      *(_QWORD *)(v140 - 12) = v148;
                      *(_DWORD *)(v140 - 4) = *((_DWORD *)v147 - 1);
                      v40 = v145-- == 0;
                    }
                    while ( !v40 );
                    v141 = ptr;
                  }
                  v173 = v143;
                  v172 = v142;
                  LODWORD(v171) = v146;
                  LODWORD(v170) = v144;
                  qfree(v141);
                  v63 = v172;
                  v25 = (unsigned int)v170;
                  v20 = (int)v171;
                  ptr = v172;
                  v62 = v189;
                  *((_QWORD *)&v189 + 1) = v173;
                }
                v66 = &v63[12 * v62];
                *(_DWORD *)v66 = v24;
                *((_DWORD *)v66 + 1) = v25;
                v66[8] = 1;
              }
              v67 = *(_QWORD *)a1;
              v22 = a2[1];
              *(_QWORD *)&v189 = v189 + 1;
              v23 = (unsigned int *)(8 * v19 + v67);
            }
            *v23 = v22;
            if ( v191 )
            {
              v55 = *(_QWORD *)a1;
              v56 = (char *)ptr;
              LOBYTE(v185) = 0;
              v57 = *((_QWORD *)&v189 + 1);
              v58 = *(_QWORD *)(v55 + 8 * v19);
              v59 = v189;
              v184 = v58;
              v60 = v189 + 1;
              if ( &v184 < ptr || &v184 >= (__int64 *)((char *)ptr + 12 * *((_QWORD *)&v189 + 1)) )
              {
                if ( *((_QWORD *)&v189 + 1) < v60 )
                {
                  LODWORD(v170) = v20;
                  v109 = qvector_reserve(&ptr, 0, v189 + 1, 12);
                  v110 = ptr;
                  v56 = (char *)v109;
                  v111 = *((_QWORD *)&v189 + 1);
                  v112 = (int)v170;
                  *((_QWORD *)&v189 + 1) = v57;
                  v113 = v189 - 1;
                  v114 = ptr;
                  if ( (__int64)v189 - 1 >= 0 )
                  {
                    do
                    {
                      v115 = *v114;
                      v109 += 12;
                      v114 = (_QWORD *)((char *)v114 + 12);
                      *(_QWORD *)(v109 - 12) = v115;
                      *(_DWORD *)(v109 - 4) = *((_DWORD *)v114 - 1);
                      v40 = v113-- == 0;
                    }
                    while ( !v40 );
                    v110 = ptr;
                  }
                  LODWORD(v170) = v112;
                  qfree(v110);
                  ptr = v56;
                  v20 = (int)v170;
                  *((_QWORD *)&v189 + 1) = v111;
                  v59 = v189;
                }
                v87 = &v56[12 * v59];
                *(_QWORD *)v87 = v184;
                *((_DWORD *)v87 + 2) = v185;
              }
              else
              {
                if ( *((_QWORD *)&v189 + 1) < v60 )
                {
                  LODWORD(v170) = v20;
                  v149 = qvector_reserve(&ptr, 0, v189 + 1, 12);
                  v150 = ptr;
                  v56 = (char *)v149;
                  v151 = *((_QWORD *)&v189 + 1);
                  v152 = (int)v170;
                  *((_QWORD *)&v189 + 1) = v57;
                  v153 = v189 - 1;
                  v154 = ptr;
                  if ( (__int64)v189 - 1 >= 0 )
                  {
                    do
                    {
                      v155 = *v154;
                      v149 += 12;
                      v154 = (_QWORD *)((char *)v154 + 12);
                      *(_QWORD *)(v149 - 12) = v155;
                      *(_DWORD *)(v149 - 4) = *((_DWORD *)v154 - 1);
                      v40 = v153-- == 0;
                    }
                    while ( !v40 );
                    v150 = ptr;
                  }
                  LODWORD(v170) = v152;
                  qfree(v150);
                  ptr = v56;
                  v20 = (int)v170;
                  *((_QWORD *)&v189 + 1) = v151;
                  v59 = v189;
                }
                v61 = &v56[12 * v59];
                *(_QWORD *)v61 = v58;
                v61[8] = 0;
              }
              *(_QWORD *)&v189 = v189 + 1;
            }
            break;
          }
          if ( v191 )
          {
            v27 = v189;
            v28 = (char *)ptr;
            v186 = v26;
            LOBYTE(v187) = 1;
            v29 = *((_QWORD *)&v189 + 1);
            v30 = v189 + 1;
            if ( v21 < ptr || v21 >= (unsigned __int64 *)((char *)ptr + 12 * *((_QWORD *)&v189 + 1)) )
            {
              if ( *((_QWORD *)&v189 + 1) < v30 )
              {
                v170 = v21;
                v34 = qvector_reserve(&ptr, 0, v30, 12);
                v35 = *((_QWORD *)&v189 + 1);
                v28 = (char *)v34;
                *((_QWORD *)&v189 + 1) = v29;
                v36 = ptr;
                v37 = v170;
                v38 = v189 - 1;
                if ( (__int64)v189 - 1 >= 0 )
                {
                  do
                  {
                    v39 = *v36;
                    v34 += 12;
                    v36 = (_QWORD *)((char *)v36 + 12);
                    *(_QWORD *)(v34 - 12) = v39;
                    *(_DWORD *)(v34 - 4) = *((_DWORD *)v36 - 1);
                    v40 = v38-- == 0;
                  }
                  while ( !v40 );
                  v36 = ptr;
                }
                v170 = v37;
                qfree(v36);
                ptr = v28;
                v27 = v189;
                *((_QWORD *)&v189 + 1) = v35;
                v21 = v170;
              }
              v32 = &v28[12 * v27];
              *(_QWORD *)v32 = v186;
              *((_DWORD *)v32 + 2) = v187;
            }
            else
            {
              if ( *((_QWORD *)&v189 + 1) < v30 )
              {
                v171 = (char *)v21;
                v170 = (unsigned __int64 *)v26;
                v48 = qvector_reserve(&ptr, 0, v30, 12);
                v49 = *((_QWORD *)&v189 + 1);
                v28 = (char *)v48;
                *((_QWORD *)&v189 + 1) = v29;
                v50 = ptr;
                v51 = v170;
                v52 = v189 - 1;
                v53 = v171;
                if ( (__int64)v189 - 1 >= 0 )
                {
                  do
                  {
                    v54 = *v50;
                    v48 += 12;
                    v50 = (_QWORD *)((char *)v50 + 12);
                    *(_QWORD *)(v48 - 12) = v54;
                    *(_DWORD *)(v48 - 4) = *((_DWORD *)v50 - 1);
                    v40 = v52-- == 0;
                  }
                  while ( !v40 );
                  v50 = ptr;
                }
                v171 = v53;
                v170 = v51;
                qfree(v50);
                ptr = v28;
                v27 = v189;
                *((_QWORD *)&v189 + 1) = v49;
                v21 = (unsigned __int64 *)v171;
                v26 = (unsigned __int64)v170;
              }
              v31 = &v28[12 * v27];
              *(_QWORD *)v31 = v26;
              v31[8] = 1;
            }
            *(_QWORD *)&v189 = v189 + 1;
          }
          v20 = v18;
          v19 = v18 + 1;
          if ( v19 >= *(_QWORD *)(a1 + 8) )
            goto LABEL_37;
          ++v18;
        }
        v18 = v20;
LABEL_37:
        if ( v169 != v18 )
        {
          v33 = v169 + 1LL;
          memmove(
            (void *)(*(_QWORD *)a1 + 8 * v33),
            (const void *)(*(_QWORD *)a1 + 8 * v19),
            8 * (*(_QWORD *)(a1 + 8) - v19));
          *(_QWORD *)(a1 + 8) -= v19 - v33;
        }
      }
      *(_QWORD *)(a1 + 24) = 0;
      sub_8218C0((__int64 *)&ptr);
      v3 = 1;
      goto LABEL_28;
    }
  }
LABEL_27:
  v3 = 0;
LABEL_28:
  if ( ptr )
  {
    *(_QWORD *)&v189 = 0;
    qfree(ptr);
  }
  return v3;
}

