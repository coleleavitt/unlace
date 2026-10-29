__int64 __fastcall sub_1573CE0(const __m128i *a1, char a2)
{
  __m128i v3; // xmm2
  unsigned __int64 v4; // rbp
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v7; // ax
  __int64 v8; // rdi
  unsigned __int16 v9; // bx
  _WORD *v10; // r14
  __int64 v11; // rax
  unsigned __int16 v12; // bx
  const __m128i *v13; // r13
  _WORD *v14; // r14
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 *v17; // rdi
  __int64 *v18; // rdi
  __m128i v19; // xmm3
  __m128i v20; // xmm4
  __m128i v21; // xmm5
  __int32 v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  char *v25; // rdi
  char *v26; // rax
  unsigned int v27; // ebx
  __int64 v29; // rax
  __m128i v30; // xmm6
  __m128i v31; // xmm7
  __int32 v32; // eax
  __m128i v33; // xmm6
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  char *v36; // rdi
  char *v37; // rax
  void **v38; // rbp
  __int64 v39; // r14
  int v40; // r13d
  __int64 v41; // rdi
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rsi
  int v45; // edx
  __int64 v46; // r12
  __int16 v47; // cx
  unsigned int *v48; // rdi
  __int64 v49; // rcx
  bool v50; // al
  char v51; // si
  unsigned __int8 *v52; // r15
  _QWORD *v53; // rdx
  __int64 v54; // rax
  unsigned __int8 *v55; // r15
  _QWORD *v56; // rdx
  __int64 v57; // rax
  __int64 *v58; // rdi
  __int64 *v59; // rdi
  unsigned __int8 *v60; // r15
  _QWORD *v61; // rdx
  __int64 v62; // rax
  unsigned __int8 *v63; // r15
  _QWORD *v64; // rdx
  __int64 v65; // rax
  void **v66; // r12
  __int64 v67; // rax
  void **v68; // rdx
  void **v69; // r15
  unsigned int v70; // ebp
  void **v71; // rbx
  void **v72; // rdi
  void **v73; // rdi
  void **v74; // r15
  __int64 v75; // r15
  __int64 v76; // rax
  unsigned int *v77; // rdi
  __int64 v78; // rcx
  char v79; // si
  char v80; // al
  unsigned __int8 *v81; // r13
  _QWORD *v82; // rdx
  __int64 v83; // rax
  unsigned __int8 *v84; // r13
  _QWORD *v85; // rdx
  __int64 v86; // rax
  void **v87; // r12
  __int64 v88; // rax
  void **v89; // r13
  void **v90; // rbp
  void **v91; // rdi
  void **v92; // rdi
  void **v93; // rbp
  void **v94; // r13
  __int64 *v95; // rdi
  __int64 *v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rdx
  int v99; // eax
  __int64 v100; // rdx
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rdx
  int v104; // eax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  unsigned int v109; // r14d
  __int64 v110; // rbx
  __int64 v111; // rbp
  void *v112; // rdi
  __int64 v113; // rdx
  int v114; // eax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rax
  unsigned int v119; // r14d
  __int64 v120; // rbx
  __int64 v121; // rbp
  void *v122; // rdi
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rax
  unsigned int v127; // r14d
  __int64 v128; // rbx
  __int64 v129; // rbp
  void *v130; // rdi
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rax
  unsigned int v135; // r14d
  __int64 v136; // rbx
  __int64 v137; // rbp
  void *v138; // rdi
  __int64 v139; // rax
  void **v140; // rdx
  void **v141; // r15
  unsigned int v142; // ebp
  void **v143; // rbx
  void **v144; // rdi
  void **v145; // rdi
  void **v146; // r15
  void *v147; // rdi
  int v148; // eax
  unsigned __int8 *v149; // r13
  _QWORD *v150; // rdx
  __int64 v151; // rax
  unsigned __int8 *v152; // r13
  _QWORD *v153; // rdx
  __int64 v154; // rax
  void **v155; // r13
  void **v156; // rbp
  void **v157; // rdi
  void **v158; // rdi
  void **v159; // rbp
  void **v160; // r13
  __int64 v161; // rdx
  __int64 v162; // rdx
  int v163; // eax
  __int64 v164; // rdx
  int v165; // eax
  __int64 v166; // rdx
  int v167; // eax
  __int64 v168; // rdx
  int v169; // eax
  __int64 v170; // rax
  __int64 v171; // r14
  __int64 v172; // rdx
  __int64 v173; // r14
  unsigned int v174; // ebp
  __int64 v175; // rbx
  void *v176; // rdi
  __int64 v177; // rax
  __int64 v178; // r14
  __int64 v179; // rdx
  __int64 v180; // r14
  unsigned int v181; // ebp
  __int64 v182; // rbx
  void *v183; // rdi
  __int64 v184; // rax
  __int64 v185; // r14
  __int64 v186; // rdx
  __int64 v187; // r14
  unsigned int v188; // ebp
  __int64 v189; // rbx
  void *v190; // rdi
  __int64 v191; // rax
  __int64 v192; // r14
  __int64 v193; // rdx
  __int64 v194; // r14
  unsigned int v195; // ebp
  __int64 v196; // rbx
  void *v197; // rdi
  __int16 v199; // [rsp+8h] [rbp-C0h]
  void **v200; // [rsp+8h] [rbp-C0h]
  void **v201; // [rsp+8h] [rbp-C0h]
  __int64 v202; // [rsp+8h] [rbp-C0h]
  __int64 v203; // [rsp+8h] [rbp-C0h]
  __int64 v204; // [rsp+8h] [rbp-C0h]
  __int64 v205; // [rsp+8h] [rbp-C0h]
  void **v206; // [rsp+8h] [rbp-C0h]
  void **v207; // [rsp+8h] [rbp-C0h]
  __int16 v208; // [rsp+10h] [rbp-B8h]
  __int16 v209; // [rsp+18h] [rbp-B0h]
  void **v210; // [rsp+18h] [rbp-B0h]
  void **v211; // [rsp+18h] [rbp-B0h]
  void **v212; // [rsp+18h] [rbp-B0h]
  void **v213; // [rsp+18h] [rbp-B0h]
  unsigned __int8 v215; // [rsp+2Fh] [rbp-99h]
  void *v216; // [rsp+30h] [rbp-98h] BYREF
  __m128i v217; // [rsp+38h] [rbp-90h] BYREF
  void *v218[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v219; // [rsp+58h] [rbp-70h]
  __m128i v220; // [rsp+60h] [rbp-68h] BYREF
  __int32 v221; // [rsp+70h] [rbp-58h]

  v3 = _mm_loadu_si128(a1 + 1);
  v219 = a1[5].m128i_i64[0];
  v4 = a1[169].m128i_u32[2];
  v221 = a1[2].m128i_i32[0];
  v5 = a1[5].m128i_i16[4];
  v217 = _mm_loadu_si128(a1 + 3);
  v199 = v5;
  v6 = a1[5].m128i_i16[5];
  *(__m128i *)v218 = _mm_loadu_si128(a1 + 4);
  v208 = v6;
  v7 = a1[5].m128i_i16[6];
  v8 = a1->m128i_i64[1];
  v220 = v3;
  v209 = v7;
  sub_1418D30(v8, 0);
  while ( 1 )
  {
    v9 = a1[2].m128i_u16[0];
    if ( v9 != 5 )
    {
      if ( (v10 = (_WORD *)a1[1].m128i_i64[1], sub_10CCDE0(v9))
        || v9 <= 0x13u && (v11 = 982656, _bittest64(&v11, v9))
        || v9 == 1
        || ((v9 - 8) & 0xFFF7) == 0
        || !v10
        || !sub_FDE0B0(v10, *(_QWORD *)(a1->m128i_i64[1] + 56)) )
      {
LABEL_6:
        v12 = a1[2].m128i_u16[0];
        v13 = a1 + 169;
        if ( v12 == 5 )
          goto LABEL_21;
        goto LABEL_7;
      }
    }
    v15 = a1->m128i_i64[1];
    v16 = *(_QWORD *)(v15 + 2944);
    if ( v16 < *(unsigned int *)(v15 + 2912) )
      break;
    if ( *(_WORD *)(sub_14180A0(v15, 1u) + 16) != 66 )
      goto LABEL_6;
LABEL_18:
    v17 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v17, a1[1].m128i_i32);
    v18 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v18, a1[1].m128i_i32);
  }
  if ( *(_WORD *)(*(_QWORD *)(v15 + 2904) + 24 * v16 + 16) == 66 )
    goto LABEL_18;
  v12 = a1[2].m128i_u16[0];
  v13 = a1 + 169;
  if ( v12 != 5 )
  {
LABEL_7:
    v14 = (_WORD *)a1[1].m128i_i64[1];
    if ( sub_10CCDE0(v12) )
      goto LABEL_12;
    v15 = a1->m128i_i64[1];
    if ( v12 <= 0x13u )
    {
      v97 = 982656;
      if ( _bittest64(&v97, v12) )
        goto LABEL_23;
    }
    if ( v12 == 1 || ((v12 - 8) & 0xFFF7) == 0 || !v14 )
      goto LABEL_23;
    if ( !sub_FDE0B0(v14, *(_QWORD *)(v15 + 56)) )
    {
LABEL_12:
      v15 = a1->m128i_i64[1];
      goto LABEL_23;
    }
LABEL_21:
    v15 = a1->m128i_i64[1];
    v16 = *(_QWORD *)(v15 + 2944);
    if ( v16 < *(unsigned int *)(v15 + 2912) )
      goto LABEL_22;
    v29 = sub_14180A0(v15, 1u);
    v15 = a1->m128i_i64[1];
    if ( *(_WORD *)(v29 + 16) == 62 )
      goto LABEL_33;
LABEL_23:
    sub_1417BC0(v15);
    v19 = _mm_loadu_si128(&v217);
    v20 = _mm_loadu_si128((const __m128i *)v218);
    v21 = _mm_load_si128(&v220);
    a1[5].m128i_i64[0] = v219;
    v22 = v221;
    a1[3] = v19;
    a1[2].m128i_i32[0] = v22;
    v23 = a1[169].m128i_u32[2];
    a1[4] = v20;
    a1[1] = v21;
    if ( v4 != v23 )
    {
      if ( v4 >= v23 )
      {
        if ( v4 > a1[169].m128i_u32[3] )
        {
          sub_2237220(v13, &a1[170], v4, 8);
          v23 = a1[169].m128i_u32[2];
        }
        v24 = a1[169].m128i_i64[0];
        v25 = (char *)(v24 + 8 * v23);
        v26 = (char *)(v24 + 8 * v4);
        if ( v25 != v26 )
          memset(v25, 0, 8 * ((unsigned __int64)(v26 - 8 - v25) >> 3) + 8);
      }
      a1[169].m128i_i32[2] = v4;
    }
    v27 = 0;
    a1[5].m128i_i16[4] = v199;
    a1[5].m128i_i16[5] = v208;
    a1[5].m128i_i16[6] = v209;
    return v27;
  }
LABEL_22:
  if ( *(_WORD *)(*(_QWORD *)(v15 + 2904) + 24 * v16 + 16) != 62 )
    goto LABEL_23;
LABEL_33:
  sub_1417BC0(v15);
  v30 = _mm_loadu_si128(&v217);
  v31 = _mm_loadu_si128((const __m128i *)v218);
  a1[5].m128i_i64[0] = v219;
  v32 = v221;
  a1[3] = v30;
  v33 = _mm_load_si128(&v220);
  a1[2].m128i_i32[0] = v32;
  v34 = a1[169].m128i_u32[2];
  a1[4] = v31;
  a1[1] = v33;
  if ( v4 != v34 )
  {
    if ( v4 >= v34 )
    {
      if ( v4 > a1[169].m128i_u32[3] )
      {
        sub_2237220(v13, &a1[170], v4, 8);
        v34 = a1[169].m128i_u32[2];
      }
      v35 = a1[169].m128i_i64[0];
      v36 = (char *)(v35 + 8 * v34);
      v37 = (char *)(v35 + 8 * v4);
      if ( v36 != v37 )
        memset(v36, 0, 8 * ((unsigned __int64)(v37 - 8 - v36) >> 3) + 8);
    }
    a1[169].m128i_i32[2] = v4;
  }
  v38 = &v216;
  v27 = 0;
  v39 = (__int64)a1;
  v40 = v215;
  a1[5].m128i_i16[4] = v199;
  a1[5].m128i_i16[5] = v208;
  a1[5].m128i_i16[6] = v209;
  while ( 2 )
  {
    v41 = *(_QWORD *)(v39 + 8);
    v42 = *(_QWORD *)(v41 + 2944);
    if ( v42 >= *(unsigned int *)(v41 + 2912) )
      v43 = sub_14180A0(v41, 1u);
    else
      v43 = *(_QWORD *)(v41 + 2904) + 24 * v42;
    v44 = *(unsigned __int16 *)(v39 + 32);
    v45 = *(_DWORD *)(v39 + 16);
    v46 = *(_QWORD *)(v39 + 24);
    v47 = (v44 - 7) & 0xFFFD;
    if ( *(_WORD *)(v43 + 16) == 66 )
    {
      if ( !v47 || (unsigned __int16)v44 <= 0x13u && (v139 = 1047810, _bittest64(&v139, v44)) )
        BUG();
      v48 = *(unsigned int **)(v46 + 16);
      v49 = *v48;
      if ( v49 == 6 )
      {
        if ( v48[4] == 1635216481 && *((_WORD *)v48 + 10) == 29561 )
        {
          v51 = 1;
          v40 = 32;
          v50 = 1;
        }
        else
        {
          v51 = 0;
          v50 = 1;
        }
        goto LABEL_51;
      }
      if ( v49 == 8 )
      {
        if ( *((_QWORD *)v48 + 2) != 0x6E69737961776C61LL )
        {
          if ( *((_QWORD *)v48 + 2) == 0x796C6E6F64616572LL )
          {
            v40 = 2;
            goto LABEL_63;
          }
LABEL_55:
          sub_1564820((__int64)v38, v39, v45, 1532);
          v52 = (unsigned __int8 *)v216;
          if ( !v216 )
          {
            v100 = v217.m128i_i64[0];
            v101 = *(_DWORD *)(v217.m128i_i64[0] + 14976);
            if ( v101 )
            {
              v131 = (unsigned int)(v101 - 1);
              *(_DWORD *)(v217.m128i_i64[0] + 14976) = v131;
              v52 = *(unsigned __int8 **)(v100 + 8 * v131 + 14848);
              v132 = *((unsigned int *)v52 + 134);
              *v52 = 0;
              v133 = *((_QWORD *)v52 + 66);
              *((_DWORD *)v52 + 106) = 0;
              v134 = v133 + (v132 << 6);
              if ( v133 != v134 )
              {
                v205 = v39;
                v135 = v27;
                v136 = v134;
                v213 = v38;
                v137 = v133;
                do
                {
                  while ( 1 )
                  {
                    v136 -= 64;
                    v138 = *(void **)(v136 + 24);
                    if ( v138 == (void *)(v136 + 40) )
                      break;
                    operator delete(v138);
                    if ( v137 == v136 )
                      goto LABEL_178;
                  }
                }
                while ( v137 != v136 );
LABEL_178:
                v27 = v135;
                v38 = v213;
                v39 = v205;
              }
              *((_DWORD *)v52 + 134) = 0;
            }
            else
            {
              v52 = (unsigned __int8 *)operator new(0x3A0u);
              *v52 = 0;
              *((_QWORD *)v52 + 12) = v52 + 112;
              *((_QWORD *)v52 + 16) = v52 + 144;
              *((_QWORD *)v52 + 20) = v52 + 176;
              *((_QWORD *)v52 + 24) = v52 + 208;
              *((_QWORD *)v52 + 28) = v52 + 240;
              *((_QWORD *)v52 + 32) = v52 + 272;
              *((_QWORD *)v52 + 36) = v52 + 304;
              *((_QWORD *)v52 + 40) = v52 + 336;
              *((_QWORD *)v52 + 44) = v52 + 368;
              *((_QWORD *)v52 + 48) = v52 + 400;
              *((_QWORD *)v52 + 52) = v52 + 432;
              *((_QWORD *)v52 + 13) = 0;
              v52[112] = 0;
              *((_QWORD *)v52 + 17) = 0;
              v52[144] = 0;
              *((_QWORD *)v52 + 21) = 0;
              v52[176] = 0;
              *((_QWORD *)v52 + 25) = 0;
              v52[208] = 0;
              *((_QWORD *)v52 + 29) = 0;
              v52[240] = 0;
              *((_QWORD *)v52 + 33) = 0;
              v52[272] = 0;
              *((_QWORD *)v52 + 37) = 0;
              v52[304] = 0;
              *((_QWORD *)v52 + 41) = 0;
              v52[336] = 0;
              *((_QWORD *)v52 + 45) = 0;
              v52[368] = 0;
              *((_QWORD *)v52 + 49) = 0;
              v52[400] = 0;
              *((_QWORD *)v52 + 53) = 0x800000000LL;
              *((_QWORD *)v52 + 66) = v52 + 544;
              *((_QWORD *)v52 + 67) = 0x600000000LL;
            }
            v216 = v52;
          }
          v52[*v52 + 1] = 2;
          v53 = v216;
          v54 = *(unsigned __int8 *)v216;
          *(_BYTE *)v216 = v54 + 1;
          v53[v54 + 2] = 0;
          v55 = (unsigned __int8 *)v216;
          if ( !v216 )
          {
            v98 = v217.m128i_i64[0];
            v99 = *(_DWORD *)(v217.m128i_i64[0] + 14976);
            if ( v99 )
            {
              v123 = (unsigned int)(v99 - 1);
              *(_DWORD *)(v217.m128i_i64[0] + 14976) = v123;
              v55 = *(unsigned __int8 **)(v98 + 8 * v123 + 14848);
              v124 = *((unsigned int *)v55 + 134);
              *v55 = 0;
              v125 = *((_QWORD *)v55 + 66);
              *((_DWORD *)v55 + 106) = 0;
              v126 = v125 + (v124 << 6);
              if ( v125 != v126 )
              {
                v204 = v39;
                v127 = v27;
                v128 = v126;
                v212 = v38;
                v129 = v125;
                do
                {
                  while ( 1 )
                  {
                    v128 -= 64;
                    v130 = *(void **)(v128 + 24);
                    if ( v130 == (void *)(v128 + 40) )
                      break;
                    operator delete(v130);
                    if ( v129 == v128 )
                      goto LABEL_170;
                  }
                }
                while ( v129 != v128 );
LABEL_170:
                v27 = v127;
                v38 = v212;
                v39 = v204;
              }
              *((_DWORD *)v55 + 134) = 0;
            }
            else
            {
              v55 = (unsigned __int8 *)operator new(0x3A0u);
              *v55 = 0;
              *((_QWORD *)v55 + 12) = v55 + 112;
              *((_QWORD *)v55 + 16) = v55 + 144;
              *((_QWORD *)v55 + 20) = v55 + 176;
              *((_QWORD *)v55 + 24) = v55 + 208;
              *((_QWORD *)v55 + 28) = v55 + 240;
              *((_QWORD *)v55 + 32) = v55 + 272;
              *((_QWORD *)v55 + 36) = v55 + 304;
              *((_QWORD *)v55 + 40) = v55 + 336;
              *((_QWORD *)v55 + 44) = v55 + 368;
              *((_QWORD *)v55 + 48) = v55 + 400;
              *((_QWORD *)v55 + 52) = v55 + 432;
              *((_QWORD *)v55 + 13) = 0;
              v55[112] = 0;
              *((_QWORD *)v55 + 17) = 0;
              v55[144] = 0;
              *((_QWORD *)v55 + 21) = 0;
              v55[176] = 0;
              *((_QWORD *)v55 + 25) = 0;
              v55[208] = 0;
              *((_QWORD *)v55 + 29) = 0;
              v55[240] = 0;
              *((_QWORD *)v55 + 33) = 0;
              v55[272] = 0;
              *((_QWORD *)v55 + 37) = 0;
              v55[304] = 0;
              *((_QWORD *)v55 + 41) = 0;
              v55[336] = 0;
              *((_QWORD *)v55 + 45) = 0;
              v55[368] = 0;
              *((_QWORD *)v55 + 49) = 0;
              v55[400] = 0;
              *((_QWORD *)v55 + 53) = 0x800000000LL;
              *((_QWORD *)v55 + 66) = v55 + 544;
              *((_QWORD *)v55 + 67) = 0x600000000LL;
            }
            v216 = v55;
          }
          v55[*v55 + 1] = 5;
          v56 = v216;
          v57 = *(unsigned __int8 *)v216;
          *(_BYTE *)v216 = v57 + 1;
          v56[v57 + 2] = v46;
          sub_AE9DF0((unsigned __int8 **)v38, (__int64)"attach", 1u);
          if ( (_BYTE)v221 )
          {
            sub_FC7790(v217.m128i_i64[1], (__int64 *)v38, SBYTE1(v221));
            v217.m128i_i64[1] = 0;
            LOWORD(v221) = 0;
          }
          if ( v218[1] != &v220 )
            operator delete(v218[1]);
          v66 = (void **)v216;
          if ( v216 )
          {
            v67 = v217.m128i_i64[0];
            if ( v217.m128i_i64[0] )
            {
              if ( (unsigned __int64)v216 >= v217.m128i_i64[0] && (unsigned __int64)v216 <= v217.m128i_i64[0] + 14848 )
                goto LABEL_151;
              v140 = *((void ***)v216 + 66);
              v141 = &v140[8 * (unsigned __int64)*((unsigned int *)v216 + 134)];
              if ( v140 != v141 )
              {
                v206 = v38;
                v142 = v27;
                v143 = *((void ***)v216 + 66);
                do
                {
                  while ( 1 )
                  {
                    v141 -= 8;
                    v144 = (void **)v141[3];
                    if ( v144 == v141 + 5 )
                      break;
                    operator delete(v144);
                    if ( v143 == v141 )
                      goto LABEL_199;
                  }
                }
                while ( v143 != v141 );
LABEL_199:
                v27 = v142;
                v141 = (void **)v66[66];
                v38 = v206;
              }
              if ( v141 != v66 + 68 )
                free(v141);
              v145 = (void **)v66[52];
              if ( v145 != v66 + 54 )
                free(v145);
              v146 = v66 + 48;
              v207 = v66 + 8;
              while ( 1 )
              {
                v147 = *v146;
                if ( *v146 != v146 + 2 )
                  break;
LABEL_208:
                v146 -= 4;
                if ( v207 == v146 )
                  goto LABEL_92;
              }
              while ( 1 )
              {
                operator delete(v147);
                v146 -= 4;
                if ( v207 == v146 )
                  break;
                v147 = *v146;
                if ( *v146 == v146 + 2 )
                  goto LABEL_208;
              }
LABEL_92:
              operator delete(v66, 0x3A0u);
            }
          }
LABEL_65:
          v58 = *(__int64 **)(v39 + 8);
          *(_DWORD *)(v39 + 40) = *(_DWORD *)(v39 + 16);
          sub_14634E0(v58, (int *)(v39 + 16));
          v59 = *(__int64 **)(v39 + 8);
          *(_DWORD *)(v39 + 40) = *(_DWORD *)(v39 + 16);
          sub_14634E0(v59, (int *)(v39 + 16));
          continue;
        }
        v40 = 4;
      }
      else
      {
        v50 = v49 != 4;
        if ( v49 == 9 )
        {
          if ( *((_QWORD *)v48 + 2) == 0x756F737961776C61LL && *((_BYTE *)v48 + 24) == 116 )
          {
            v40 = 8;
            goto LABEL_63;
          }
          v51 = 0;
        }
        else
        {
          v51 = 0;
        }
LABEL_51:
        if ( v50 )
        {
          if ( v49 == 7 )
          {
            if ( v51 )
              goto LABEL_63;
            if ( v48[4] == 1953522019 && *((_WORD *)v48 + 10) == 29301 && *((_BYTE *)v48 + 22) == 101 )
            {
              v40 = 16;
              goto LABEL_63;
            }
            goto LABEL_55;
          }
LABEL_68:
          if ( !v51 )
            goto LABEL_55;
          if ( ((unsigned __int8)v40 & (unsigned __int8)v27) != 0 )
          {
LABEL_70:
            sub_1564820((__int64)v38, v39, v45, 1532);
            v60 = (unsigned __int8 *)v216;
            if ( !v216 )
            {
              v103 = v217.m128i_i64[0];
              v104 = *(_DWORD *)(v217.m128i_i64[0] + 14976);
              if ( v104 )
              {
                v105 = (unsigned int)(v104 - 1);
                *(_DWORD *)(v217.m128i_i64[0] + 14976) = v105;
                v60 = *(unsigned __int8 **)(v103 + 8 * v105 + 14848);
                v106 = *((unsigned int *)v60 + 134);
                *v60 = 0;
                v107 = *((_QWORD *)v60 + 66);
                *((_DWORD *)v60 + 106) = 0;
                v108 = v107 + (v106 << 6);
                if ( v107 != v108 )
                {
                  v202 = v39;
                  v109 = v27;
                  v110 = v108;
                  v210 = v38;
                  v111 = v107;
                  do
                  {
                    while ( 1 )
                    {
                      v110 -= 64;
                      v112 = *(void **)(v110 + 24);
                      if ( v112 == (void *)(v110 + 40) )
                        break;
                      operator delete(v112);
                      if ( v111 == v110 )
                        goto LABEL_157;
                    }
                  }
                  while ( v111 != v110 );
LABEL_157:
                  v27 = v109;
                  v38 = v210;
                  v39 = v202;
                }
                *((_DWORD *)v60 + 134) = 0;
              }
              else
              {
                v60 = (unsigned __int8 *)operator new(0x3A0u);
                *v60 = 0;
                *((_QWORD *)v60 + 12) = v60 + 112;
                *((_QWORD *)v60 + 16) = v60 + 144;
                *((_QWORD *)v60 + 20) = v60 + 176;
                *((_QWORD *)v60 + 24) = v60 + 208;
                *((_QWORD *)v60 + 28) = v60 + 240;
                *((_QWORD *)v60 + 32) = v60 + 272;
                *((_QWORD *)v60 + 36) = v60 + 304;
                *((_QWORD *)v60 + 40) = v60 + 336;
                *((_QWORD *)v60 + 44) = v60 + 368;
                *((_QWORD *)v60 + 48) = v60 + 400;
                *((_QWORD *)v60 + 52) = v60 + 432;
                *((_QWORD *)v60 + 13) = 0;
                v60[112] = 0;
                *((_QWORD *)v60 + 17) = 0;
                v60[144] = 0;
                *((_QWORD *)v60 + 21) = 0;
                v60[176] = 0;
                *((_QWORD *)v60 + 25) = 0;
                v60[208] = 0;
                *((_QWORD *)v60 + 29) = 0;
                v60[240] = 0;
                *((_QWORD *)v60 + 33) = 0;
                v60[272] = 0;
                *((_QWORD *)v60 + 37) = 0;
                v60[304] = 0;
                *((_QWORD *)v60 + 41) = 0;
                v60[336] = 0;
                *((_QWORD *)v60 + 45) = 0;
                v60[368] = 0;
                *((_QWORD *)v60 + 49) = 0;
                v60[400] = 0;
                *((_QWORD *)v60 + 53) = 0x800000000LL;
                *((_QWORD *)v60 + 66) = v60 + 544;
                *((_QWORD *)v60 + 67) = 0x600000000LL;
              }
              v216 = v60;
            }
            v60[*v60 + 1] = 2;
            v61 = v216;
            v62 = *(unsigned __int8 *)v216;
            *(_BYTE *)v216 = v62 + 1;
            v61[v62 + 2] = 1;
            v63 = (unsigned __int8 *)v216;
            if ( !v216 )
            {
              v113 = v217.m128i_i64[0];
              v114 = *(_DWORD *)(v217.m128i_i64[0] + 14976);
              if ( v114 )
              {
                v115 = (unsigned int)(v114 - 1);
                *(_DWORD *)(v217.m128i_i64[0] + 14976) = v115;
                v63 = *(unsigned __int8 **)(v113 + 8 * v115 + 14848);
                v116 = *((unsigned int *)v63 + 134);
                *v63 = 0;
                v117 = *((_QWORD *)v63 + 66);
                *((_DWORD *)v63 + 106) = 0;
                v118 = v117 + (v116 << 6);
                if ( v117 != v118 )
                {
                  v203 = v39;
                  v119 = v27;
                  v120 = v118;
                  v211 = v38;
                  v121 = v117;
                  do
                  {
                    while ( 1 )
                    {
                      v120 -= 64;
                      v122 = *(void **)(v120 + 24);
                      if ( v122 == (void *)(v120 + 40) )
                        break;
                      operator delete(v122);
                      if ( v121 == v120 )
                        goto LABEL_164;
                    }
                  }
                  while ( v121 != v120 );
LABEL_164:
                  v27 = v119;
                  v38 = v211;
                  v39 = v203;
                }
                *((_DWORD *)v63 + 134) = 0;
              }
              else
              {
                v63 = (unsigned __int8 *)operator new(0x3A0u);
                *v63 = 0;
                *((_QWORD *)v63 + 12) = v63 + 112;
                *((_QWORD *)v63 + 16) = v63 + 144;
                *((_QWORD *)v63 + 20) = v63 + 176;
                *((_QWORD *)v63 + 24) = v63 + 208;
                *((_QWORD *)v63 + 28) = v63 + 240;
                *((_QWORD *)v63 + 32) = v63 + 272;
                *((_QWORD *)v63 + 36) = v63 + 304;
                *((_QWORD *)v63 + 40) = v63 + 336;
                *((_QWORD *)v63 + 44) = v63 + 368;
                *((_QWORD *)v63 + 48) = v63 + 400;
                *((_QWORD *)v63 + 52) = v63 + 432;
                *((_QWORD *)v63 + 13) = 0;
                v63[112] = 0;
                *((_QWORD *)v63 + 17) = 0;
                v63[144] = 0;
                *((_QWORD *)v63 + 21) = 0;
                v63[176] = 0;
                *((_QWORD *)v63 + 25) = 0;
                v63[208] = 0;
                *((_QWORD *)v63 + 29) = 0;
                v63[240] = 0;
                *((_QWORD *)v63 + 33) = 0;
                v63[272] = 0;
                *((_QWORD *)v63 + 37) = 0;
                v63[304] = 0;
                *((_QWORD *)v63 + 41) = 0;
                v63[336] = 0;
                *((_QWORD *)v63 + 45) = 0;
                v63[368] = 0;
                *((_QWORD *)v63 + 49) = 0;
                v63[400] = 0;
                *((_QWORD *)v63 + 53) = 0x800000000LL;
                *((_QWORD *)v63 + 66) = v63 + 544;
                *((_QWORD *)v63 + 67) = 0x600000000LL;
              }
              v216 = v63;
            }
            v63[*v63 + 1] = 5;
            v64 = v216;
            v65 = *(unsigned __int8 *)v216;
            *(_BYTE *)v216 = v65 + 1;
            v64[v65 + 2] = v46;
            sub_1573010((unsigned __int8 **)v38, a2);
            if ( (_BYTE)v221 )
            {
              sub_FC7790(v217.m128i_i64[1], (__int64 *)v38, SBYTE1(v221));
              v217.m128i_i64[1] = 0;
              LOWORD(v221) = 0;
            }
            if ( v218[1] != &v220 )
              operator delete(v218[1]);
            v66 = (void **)v216;
            if ( v216 )
            {
              v67 = v217.m128i_i64[0];
              if ( v217.m128i_i64[0] )
              {
                if ( (unsigned __int64)v216 < v217.m128i_i64[0] || (unsigned __int64)v216 > v217.m128i_i64[0] + 14848 )
                {
                  v68 = *((void ***)v216 + 66);
                  v69 = &v68[8 * (unsigned __int64)*((unsigned int *)v216 + 134)];
                  if ( v68 != v69 )
                  {
                    v200 = v38;
                    v70 = v27;
                    v71 = *((void ***)v216 + 66);
                    do
                    {
                      while ( 1 )
                      {
                        v69 -= 8;
                        v72 = (void **)v69[3];
                        if ( v72 == v69 + 5 )
                          break;
                        operator delete(v72);
                        if ( v71 == v69 )
                          goto LABEL_84;
                      }
                    }
                    while ( v71 != v69 );
LABEL_84:
                    v27 = v70;
                    v69 = (void **)v66[66];
                    v38 = v200;
                  }
                  if ( v69 != v66 + 68 )
                    free(v69);
                  v73 = (void **)v66[52];
                  if ( v73 != v66 + 54 )
                    free(v73);
                  v74 = v66 + 48;
                  v201 = v66 + 8;
                  do
                  {
                    while ( *v74 != v74 + 2 )
                    {
                      operator delete(*v74);
                      v74 -= 4;
                      if ( v74 == v201 )
                        goto LABEL_92;
                    }
                    v74 -= 4;
                  }
                  while ( v74 != v201 );
                  goto LABEL_92;
                }
LABEL_151:
                v102 = *(unsigned int *)(v67 + 14976);
                *(_DWORD *)(v67 + 14976) = v102 + 1;
                *(_QWORD *)(v67 + 8 * v102 + 14848) = v66;
              }
            }
            goto LABEL_65;
          }
LABEL_64:
          v27 |= v40;
          goto LABEL_65;
        }
        if ( v48[4] != 1869768058 )
          goto LABEL_68;
        v40 = 1;
      }
LABEL_63:
      if ( ((unsigned __int8)v40 & (unsigned __int8)v27) != 0 )
        goto LABEL_70;
      goto LABEL_64;
    }
    break;
  }
  v75 = v39;
  if ( !v47 || (unsigned __int16)v44 <= 0x13u && (v76 = 1047810, _bittest64(&v76, v44)) )
    BUG();
  v77 = *(unsigned int **)(v46 + 16);
  v78 = *v77;
  if ( v78 == 6 )
  {
    if ( v77[4] != 1635216481 || (v79 = 1, v80 = 1, *((_WORD *)v77 + 10) != 29561) )
    {
      v79 = 0;
      v80 = 1;
    }
LABEL_105:
    v80 |= v79;
LABEL_106:
    if ( v80 )
    {
      if ( v78 == 7 )
      {
        if ( !v79 )
        {
          if ( v77[4] == 1953522019 && *((_WORD *)v77 + 10) == 29301 )
          {
            v148 = 16;
            if ( *((_BYTE *)v77 + 22) == 101 )
              goto LABEL_218;
          }
LABEL_110:
          sub_1564820((__int64)&v216, v39, v45, 1532);
          v81 = (unsigned __int8 *)v216;
          if ( !v216 )
          {
            v164 = v217.m128i_i64[0];
            v165 = *(_DWORD *)(v217.m128i_i64[0] + 14976);
            if ( v165 )
            {
              v177 = (unsigned int)(v165 - 1);
              *(_DWORD *)(v217.m128i_i64[0] + 14976) = v177;
              v81 = *(unsigned __int8 **)(v164 + 8 * v177 + 14848);
              v178 = *((unsigned int *)v81 + 134);
              *v81 = 0;
              v179 = *((_QWORD *)v81 + 66);
              *((_DWORD *)v81 + 106) = 0;
              v180 = v179 + (v178 << 6);
              if ( v179 != v180 )
              {
                v181 = v27;
                v182 = v179;
                do
                {
                  while ( 1 )
                  {
                    v180 -= 64;
                    v183 = *(void **)(v180 + 24);
                    if ( v183 == (void *)(v180 + 40) )
                      break;
                    operator delete(v183);
                    if ( v182 == v180 )
                      goto LABEL_294;
                  }
                }
                while ( v182 != v180 );
LABEL_294:
                v27 = v181;
              }
              *((_DWORD *)v81 + 134) = 0;
            }
            else
            {
              v81 = (unsigned __int8 *)operator new(0x3A0u);
              *v81 = 0;
              *((_QWORD *)v81 + 12) = v81 + 112;
              *((_QWORD *)v81 + 16) = v81 + 144;
              *((_QWORD *)v81 + 20) = v81 + 176;
              *((_QWORD *)v81 + 24) = v81 + 208;
              *((_QWORD *)v81 + 28) = v81 + 240;
              *((_QWORD *)v81 + 32) = v81 + 272;
              *((_QWORD *)v81 + 36) = v81 + 304;
              *((_QWORD *)v81 + 40) = v81 + 336;
              *((_QWORD *)v81 + 44) = v81 + 368;
              *((_QWORD *)v81 + 48) = v81 + 400;
              *((_QWORD *)v81 + 52) = v81 + 432;
              *((_QWORD *)v81 + 13) = 0;
              v81[112] = 0;
              *((_QWORD *)v81 + 17) = 0;
              v81[144] = 0;
              *((_QWORD *)v81 + 21) = 0;
              v81[176] = 0;
              *((_QWORD *)v81 + 25) = 0;
              v81[208] = 0;
              *((_QWORD *)v81 + 29) = 0;
              v81[240] = 0;
              *((_QWORD *)v81 + 33) = 0;
              v81[272] = 0;
              *((_QWORD *)v81 + 37) = 0;
              v81[304] = 0;
              *((_QWORD *)v81 + 41) = 0;
              v81[336] = 0;
              *((_QWORD *)v81 + 45) = 0;
              v81[368] = 0;
              *((_QWORD *)v81 + 49) = 0;
              v81[400] = 0;
              *((_QWORD *)v81 + 53) = 0x800000000LL;
              *((_QWORD *)v81 + 66) = v81 + 544;
              *((_QWORD *)v81 + 67) = 0x600000000LL;
            }
            v216 = v81;
          }
          v81[*v81 + 1] = 2;
          v82 = v216;
          v83 = *(unsigned __int8 *)v216;
          *(_BYTE *)v216 = v83 + 1;
          v82[v83 + 2] = 0;
          v84 = (unsigned __int8 *)v216;
          if ( !v216 )
          {
            v162 = v217.m128i_i64[0];
            v163 = *(_DWORD *)(v217.m128i_i64[0] + 14976);
            if ( v163 )
            {
              v170 = (unsigned int)(v163 - 1);
              *(_DWORD *)(v217.m128i_i64[0] + 14976) = v170;
              v84 = *(unsigned __int8 **)(v162 + 8 * v170 + 14848);
              v171 = *((unsigned int *)v84 + 134);
              *v84 = 0;
              v172 = *((_QWORD *)v84 + 66);
              *((_DWORD *)v84 + 106) = 0;
              v173 = v172 + (v171 << 6);
              if ( v172 != v173 )
              {
                v174 = v27;
                v175 = v172;
                do
                {
                  while ( 1 )
                  {
                    v173 -= 64;
                    v176 = *(void **)(v173 + 24);
                    if ( v176 == (void *)(v173 + 40) )
                      break;
                    operator delete(v176);
                    if ( v175 == v173 )
                      goto LABEL_286;
                  }
                }
                while ( v175 != v173 );
LABEL_286:
                v27 = v174;
              }
              *((_DWORD *)v84 + 134) = 0;
            }
            else
            {
              v84 = (unsigned __int8 *)operator new(0x3A0u);
              *v84 = 0;
              *((_QWORD *)v84 + 12) = v84 + 112;
              *((_QWORD *)v84 + 16) = v84 + 144;
              *((_QWORD *)v84 + 20) = v84 + 176;
              *((_QWORD *)v84 + 24) = v84 + 208;
              *((_QWORD *)v84 + 28) = v84 + 240;
              *((_QWORD *)v84 + 32) = v84 + 272;
              *((_QWORD *)v84 + 36) = v84 + 304;
              *((_QWORD *)v84 + 40) = v84 + 336;
              *((_QWORD *)v84 + 44) = v84 + 368;
              *((_QWORD *)v84 + 48) = v84 + 400;
              *((_QWORD *)v84 + 52) = v84 + 432;
              *((_QWORD *)v84 + 13) = 0;
              v84[112] = 0;
              *((_QWORD *)v84 + 17) = 0;
              v84[144] = 0;
              *((_QWORD *)v84 + 21) = 0;
              v84[176] = 0;
              *((_QWORD *)v84 + 25) = 0;
              v84[208] = 0;
              *((_QWORD *)v84 + 29) = 0;
              v84[240] = 0;
              *((_QWORD *)v84 + 33) = 0;
              v84[272] = 0;
              *((_QWORD *)v84 + 37) = 0;
              v84[304] = 0;
              *((_QWORD *)v84 + 41) = 0;
              v84[336] = 0;
              *((_QWORD *)v84 + 45) = 0;
              v84[368] = 0;
              *((_QWORD *)v84 + 49) = 0;
              v84[400] = 0;
              *((_QWORD *)v84 + 53) = 0x800000000LL;
              *((_QWORD *)v84 + 66) = v84 + 544;
              *((_QWORD *)v84 + 67) = 0x600000000LL;
            }
            v216 = v84;
          }
          v84[*v84 + 1] = 5;
          v85 = v216;
          v86 = *(unsigned __int8 *)v216;
          *(_BYTE *)v216 = v86 + 1;
          v85[v86 + 2] = v46;
          sub_1573010((unsigned __int8 **)&v216, a2);
          if ( (_BYTE)v221 )
          {
            sub_FC7790(v217.m128i_i64[1], (__int64 *)&v216, SBYTE1(v221));
            v217.m128i_i64[1] = 0;
            LOWORD(v221) = 0;
          }
          if ( v218[1] != &v220 )
            operator delete(v218[1]);
          v87 = (void **)v216;
          if ( v216 )
          {
            v88 = v217.m128i_i64[0];
            if ( v217.m128i_i64[0] )
            {
              if ( (unsigned __int64)v216 >= v217.m128i_i64[0] && (unsigned __int64)v216 <= v217.m128i_i64[0] + 14848 )
                goto LABEL_261;
              v89 = *((void ***)v216 + 66);
              v90 = &v89[8 * (unsigned __int64)*((unsigned int *)v216 + 134)];
              if ( v89 != v90 )
              {
                do
                {
                  while ( 1 )
                  {
                    v90 -= 8;
                    v91 = (void **)v90[3];
                    if ( v91 == v90 + 5 )
                      break;
                    operator delete(v91);
                    if ( v89 == v90 )
                      goto LABEL_122;
                  }
                }
                while ( v89 != v90 );
LABEL_122:
                v90 = (void **)v87[66];
              }
              if ( v90 != v87 + 68 )
                free(v90);
              v92 = (void **)v87[52];
              v93 = v87 + 52;
              if ( v92 != v87 + 54 )
                free(v92);
              v94 = v87 + 12;
              do
              {
                while ( 1 )
                {
                  v93 -= 4;
                  if ( *v93 == v93 + 2 )
                    break;
                  operator delete(*v93);
                  if ( v93 == v94 )
                    goto LABEL_130;
                }
              }
              while ( v93 != v94 );
LABEL_130:
              operator delete(v87, 0x3A0u);
            }
          }
          goto LABEL_131;
        }
LABEL_228:
        v148 = 32;
        goto LABEL_218;
      }
    }
    else
    {
      v148 = 1;
      if ( v77[4] == 1869768058 )
        goto LABEL_218;
    }
    if ( !v79 )
      goto LABEL_110;
    goto LABEL_228;
  }
  if ( v78 == 8 )
  {
    if ( *((_QWORD *)v77 + 2) == 0x6E69737961776C61LL )
    {
      v148 = 4;
      goto LABEL_218;
    }
    if ( *((_QWORD *)v77 + 2) == 0x796C6E6F64616572LL )
    {
      v148 = 2;
      goto LABEL_218;
    }
    goto LABEL_110;
  }
  v80 = v78 != 4;
  if ( v78 != 9 )
  {
    v79 = 0;
    goto LABEL_105;
  }
  if ( *((_QWORD *)v77 + 2) != 0x756F737961776C61LL || *((_BYTE *)v77 + 24) != 116 )
  {
    v79 = 0;
    goto LABEL_106;
  }
  v148 = 8;
LABEL_218:
  if ( ((unsigned __int8)v148 & (unsigned __int8)v27) != 0 )
  {
    sub_1564820((__int64)&v216, v39, v45, 1532);
    v149 = (unsigned __int8 *)v216;
    if ( !v216 )
    {
      v168 = v217.m128i_i64[0];
      v169 = *(_DWORD *)(v217.m128i_i64[0] + 14976);
      if ( v169 )
      {
        v191 = (unsigned int)(v169 - 1);
        *(_DWORD *)(v217.m128i_i64[0] + 14976) = v191;
        v149 = *(unsigned __int8 **)(v168 + 8 * v191 + 14848);
        v192 = *((unsigned int *)v149 + 134);
        *v149 = 0;
        v193 = *((_QWORD *)v149 + 66);
        *((_DWORD *)v149 + 106) = 0;
        v194 = v193 + (v192 << 6);
        if ( v193 != v194 )
        {
          v195 = v27;
          v196 = v193;
          do
          {
            while ( 1 )
            {
              v194 -= 64;
              v197 = *(void **)(v194 + 24);
              if ( v197 == (void *)(v194 + 40) )
                break;
              operator delete(v197);
              if ( v196 == v194 )
                goto LABEL_310;
            }
          }
          while ( v196 != v194 );
LABEL_310:
          v27 = v195;
        }
        *((_DWORD *)v149 + 134) = 0;
      }
      else
      {
        v149 = (unsigned __int8 *)operator new(0x3A0u);
        *v149 = 0;
        *((_QWORD *)v149 + 12) = v149 + 112;
        *((_QWORD *)v149 + 16) = v149 + 144;
        *((_QWORD *)v149 + 20) = v149 + 176;
        *((_QWORD *)v149 + 24) = v149 + 208;
        *((_QWORD *)v149 + 28) = v149 + 240;
        *((_QWORD *)v149 + 32) = v149 + 272;
        *((_QWORD *)v149 + 36) = v149 + 304;
        *((_QWORD *)v149 + 40) = v149 + 336;
        *((_QWORD *)v149 + 44) = v149 + 368;
        *((_QWORD *)v149 + 48) = v149 + 400;
        *((_QWORD *)v149 + 52) = v149 + 432;
        *((_QWORD *)v149 + 13) = 0;
        v149[112] = 0;
        *((_QWORD *)v149 + 17) = 0;
        v149[144] = 0;
        *((_QWORD *)v149 + 21) = 0;
        v149[176] = 0;
        *((_QWORD *)v149 + 25) = 0;
        v149[208] = 0;
        *((_QWORD *)v149 + 29) = 0;
        v149[240] = 0;
        *((_QWORD *)v149 + 33) = 0;
        v149[272] = 0;
        *((_QWORD *)v149 + 37) = 0;
        v149[304] = 0;
        *((_QWORD *)v149 + 41) = 0;
        v149[336] = 0;
        *((_QWORD *)v149 + 45) = 0;
        v149[368] = 0;
        *((_QWORD *)v149 + 49) = 0;
        v149[400] = 0;
        *((_QWORD *)v149 + 53) = 0x800000000LL;
        *((_QWORD *)v149 + 66) = v149 + 544;
        *((_QWORD *)v149 + 67) = 0x600000000LL;
      }
      v216 = v149;
    }
    v149[*v149 + 1] = 2;
    v150 = v216;
    v151 = *(unsigned __int8 *)v216;
    *(_BYTE *)v216 = v151 + 1;
    v150[v151 + 2] = 1;
    v152 = (unsigned __int8 *)v216;
    if ( !v216 )
    {
      v166 = v217.m128i_i64[0];
      v167 = *(_DWORD *)(v217.m128i_i64[0] + 14976);
      if ( v167 )
      {
        v184 = (unsigned int)(v167 - 1);
        *(_DWORD *)(v217.m128i_i64[0] + 14976) = v184;
        v152 = *(unsigned __int8 **)(v166 + 8 * v184 + 14848);
        v185 = *((unsigned int *)v152 + 134);
        *v152 = 0;
        v186 = *((_QWORD *)v152 + 66);
        *((_DWORD *)v152 + 106) = 0;
        v187 = v186 + (v185 << 6);
        if ( v186 != v187 )
        {
          v188 = v27;
          v189 = v186;
          do
          {
            while ( 1 )
            {
              v187 -= 64;
              v190 = *(void **)(v187 + 24);
              if ( v190 == (void *)(v187 + 40) )
                break;
              operator delete(v190);
              if ( v189 == v187 )
                goto LABEL_302;
            }
          }
          while ( v189 != v187 );
LABEL_302:
          v27 = v188;
        }
        *((_DWORD *)v152 + 134) = 0;
      }
      else
      {
        v152 = (unsigned __int8 *)operator new(0x3A0u);
        *v152 = 0;
        *((_QWORD *)v152 + 12) = v152 + 112;
        *((_QWORD *)v152 + 16) = v152 + 144;
        *((_QWORD *)v152 + 20) = v152 + 176;
        *((_QWORD *)v152 + 24) = v152 + 208;
        *((_QWORD *)v152 + 28) = v152 + 240;
        *((_QWORD *)v152 + 32) = v152 + 272;
        *((_QWORD *)v152 + 36) = v152 + 304;
        *((_QWORD *)v152 + 40) = v152 + 336;
        *((_QWORD *)v152 + 44) = v152 + 368;
        *((_QWORD *)v152 + 48) = v152 + 400;
        *((_QWORD *)v152 + 52) = v152 + 432;
        *((_QWORD *)v152 + 13) = 0;
        v152[112] = 0;
        *((_QWORD *)v152 + 17) = 0;
        v152[144] = 0;
        *((_QWORD *)v152 + 21) = 0;
        v152[176] = 0;
        *((_QWORD *)v152 + 25) = 0;
        v152[208] = 0;
        *((_QWORD *)v152 + 29) = 0;
        v152[240] = 0;
        *((_QWORD *)v152 + 33) = 0;
        v152[272] = 0;
        *((_QWORD *)v152 + 37) = 0;
        v152[304] = 0;
        *((_QWORD *)v152 + 41) = 0;
        v152[336] = 0;
        *((_QWORD *)v152 + 45) = 0;
        v152[368] = 0;
        *((_QWORD *)v152 + 49) = 0;
        v152[400] = 0;
        *((_QWORD *)v152 + 53) = 0x800000000LL;
        *((_QWORD *)v152 + 66) = v152 + 544;
        *((_QWORD *)v152 + 67) = 0x600000000LL;
      }
      v216 = v152;
    }
    v152[*v152 + 1] = 5;
    v153 = v216;
    v154 = *(unsigned __int8 *)v216;
    *(_BYTE *)v216 = v154 + 1;
    v153[v154 + 2] = v46;
    sub_1573010((unsigned __int8 **)&v216, a2);
    if ( (_BYTE)v221 )
    {
      sub_FC7790(v217.m128i_i64[1], (__int64 *)&v216, SBYTE1(v221));
      v217.m128i_i64[1] = 0;
      LOWORD(v221) = 0;
    }
    if ( v218[1] != &v220 )
      operator delete(v218[1]);
    v87 = (void **)v216;
    if ( v216 )
    {
      v88 = v217.m128i_i64[0];
      if ( v217.m128i_i64[0] )
      {
        if ( (unsigned __int64)v216 < v217.m128i_i64[0] || (unsigned __int64)v216 > v217.m128i_i64[0] + 14848 )
        {
          v155 = *((void ***)v216 + 66);
          v156 = &v155[8 * (unsigned __int64)*((unsigned int *)v216 + 134)];
          if ( v155 != v156 )
          {
            do
            {
              while ( 1 )
              {
                v156 -= 8;
                v157 = (void **)v156[3];
                if ( v157 == v156 + 5 )
                  break;
                operator delete(v157);
                if ( v155 == v156 )
                  goto LABEL_244;
              }
            }
            while ( v155 != v156 );
LABEL_244:
            v156 = (void **)v87[66];
          }
          if ( v156 != v87 + 68 )
            free(v156);
          v158 = (void **)v87[52];
          v159 = v87 + 52;
          if ( v158 != v87 + 54 )
            free(v158);
          v160 = v87 + 12;
          do
          {
            while ( 1 )
            {
              v159 -= 4;
              if ( *v159 == v159 + 2 )
                break;
              operator delete(*v159);
              if ( v159 == v160 )
                goto LABEL_130;
            }
          }
          while ( v159 != v160 );
          goto LABEL_130;
        }
LABEL_261:
        v161 = *(unsigned int *)(v88 + 14976);
        *(_DWORD *)(v88 + 14976) = v161 + 1;
        *(_QWORD *)(v88 + 8 * v161 + 14848) = v87;
      }
    }
  }
  else
  {
    v27 |= v148;
  }
LABEL_131:
  v95 = *(__int64 **)(v75 + 8);
  *(_DWORD *)(v75 + 40) = *(_DWORD *)(v75 + 16);
  sub_14634E0(v95, (int *)(v75 + 16));
  v96 = *(__int64 **)(v75 + 8);
  *(_DWORD *)(v75 + 40) = *(_DWORD *)(v75 + 16);
  sub_14634E0(v96, (int *)(v75 + 16));
  return v27;
}
