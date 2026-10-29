__int64 __fastcall sub_6A4110(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rbp
  __int64 v5; // rax
  unsigned __int64 *v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 fchunk; // rax
  __int64 *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 func; // rsi
  void **v13; // rbx
  unsigned __int64 v14; // rbp
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rdi
  __m128i *v22; // rdi
  __int64 v23; // rax
  char *v24; // rbp
  char v25; // al
  __int64 v26; // rax
  __int64 *v27; // r12
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // r10
  char v32; // r11
  int v33; // r14d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // r12
  void *v37; // rax
  void *v38; // rdx
  __int64 v39; // rdx
  __m128i *v40; // rax
  __int64 v41; // rdx
  __int32 v42; // edx
  void *v43; // rax
  __int64 v44; // rsi
  void *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned int v48; // r12d
  bool v50; // cf
  __m128i v51; // xmm0
  void *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rax
  void *v55; // rax
  void *v56; // rdx
  __m128i *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rdx
  unsigned __int64 *v60; // rcx
  void *v61; // rax
  void *v62; // rdx
  __m128i *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rdx
  void *v66; // rax
  void *v67; // rdx
  __m128i *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rdx
  int v71; // r12d
  __int64 v72; // rax
  __m128i *v73; // rax
  __int64 v74; // rdx
  __int32 v75; // edx
  __int64 v76; // r14
  void *v77; // rax
  void *v78; // rdx
  __int64 v79; // rax
  __int64 v80; // r14
  __m128i *v81; // rbp
  unsigned __int64 v82; // rdx
  const __m128i *v83; // r14
  _BYTE *v84; // rdi
  __int64 v85; // r14
  __int64 v86; // r12
  __int64 v87; // r15
  void *v88; // rdi
  char *v89; // rbp
  char v90; // al
  char *v91; // rsi
  __int64 v92; // r13
  __int64 v93; // r12
  __int64 v94; // rbx
  void *v95; // rdi
  void *v96; // r9
  __int64 v97; // r9
  __int64 v98; // r8
  char *v99; // r11
  char *v100; // r15
  __int64 v101; // rdi
  __int64 v102; // r8
  __int64 v103; // r10
  int v104; // r14d
  int v105; // r8d
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // rsi
  __int64 v109; // rbp
  int v110; // r14d
  void *v111; // rdi
  void *v112; // rdi
  _QWORD *v113; // rcx
  unsigned __int64 v114; // rsi
  unsigned __int64 v115; // rcx
  char v116; // bp
  const char *v117; // rsi
  __int64 v118; // rbp
  __int64 v119; // r14
  unsigned __int64 v120; // rdx
  __int64 v121; // rsi
  __m128i v122; // xmm0
  __m128i *v123; // rax
  __int64 v124; // rbp
  __int64 v125; // r14
  unsigned __int64 v126; // rdx
  __int64 v127; // rsi
  __m128i v128; // xmm0
  __m128i *v129; // rax
  void *v130; // rdi
  __int64 v131; // rbp
  __int64 v132; // r14
  unsigned __int64 v133; // rdx
  __int64 v134; // rsi
  __m128i v135; // xmm0
  __m128i *v136; // rbp
  __m128i v137; // xmm0
  unsigned __int64 v138; // rdx
  unsigned __int64 v139; // rdx
  size_t v140; // r14
  __int64 v141; // rbp
  size_t v142; // r9
  __int64 v143; // rsi
  __int64 v144; // r14
  unsigned __int64 v145; // rdx
  __int64 v146; // rsi
  _QWORD *v147; // rbp
  __int64 v148; // r14
  unsigned __int64 v149; // rdx
  __int64 v150; // rsi
  __m128i si128; // xmm0
  __m128i *v152; // rbp
  unsigned __int64 v153; // rbp
  __int64 v154; // rax
  __int64 v155; // r14
  unsigned __int64 v156; // rdx
  __int64 v157; // rsi
  _QWORD *v158; // rbp
  __int64 v159; // rax
  __int64 *v160; // rcx
  __int64 v161; // rsi
  __int64 v162; // rsi
  __int64 v163; // rbp
  unsigned __int64 v164; // rdx
  __int64 v165; // r14
  __int64 v166; // rsi
  __int64 v167; // r14
  unsigned __int64 v168; // rdx
  __int64 v169; // rsi
  __int64 v170; // rbp
  __int64 v171; // rdx
  __int64 v172; // rbp
  __int64 v173; // r14
  unsigned __int64 v174; // rdx
  __int64 v175; // rsi
  __m128i v176; // xmm0
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rbp
  __int64 v180; // r14
  unsigned __int64 v181; // rdx
  __int64 v182; // rsi
  __m128i v183; // xmm0
  __int64 v184; // rbp
  __int64 v185; // r14
  __int64 v186; // r9
  unsigned __int64 v187; // rdx
  __int64 v188; // rsi
  __int64 v189; // r8
  __int64 v190; // rax
  size_t v191; // r14
  __int64 v192; // rbp
  __int64 v193; // r8
  unsigned __int64 v194; // rdx
  __int64 v195; // rbp
  __int64 v196; // r14
  unsigned __int64 v197; // rdx
  __int64 v198; // rsi
  __int64 v199; // rax
  __int64 v200; // rax
  void *v201; // [rsp+0h] [rbp-108h]
  void *v202; // [rsp+8h] [rbp-100h]
  int v203; // [rsp+8h] [rbp-100h]
  void **v204; // [rsp+8h] [rbp-100h]
  void *v205; // [rsp+8h] [rbp-100h]
  void *v206; // [rsp+8h] [rbp-100h]
  void *v207; // [rsp+8h] [rbp-100h]
  void *v208; // [rsp+8h] [rbp-100h]
  void *v209; // [rsp+8h] [rbp-100h]
  void *v210; // [rsp+8h] [rbp-100h]
  void *v211; // [rsp+8h] [rbp-100h]
  void *v212; // [rsp+8h] [rbp-100h]
  void *v213; // [rsp+8h] [rbp-100h]
  void *v214; // [rsp+8h] [rbp-100h]
  void *v215; // [rsp+8h] [rbp-100h]
  void *v216; // [rsp+8h] [rbp-100h]
  void *v217; // [rsp+8h] [rbp-100h]
  void *v218; // [rsp+8h] [rbp-100h]
  void *v219; // [rsp+8h] [rbp-100h]
  __int64 v220; // [rsp+10h] [rbp-F8h]
  int v221; // [rsp+10h] [rbp-F8h]
  char v222; // [rsp+10h] [rbp-F8h]
  __int64 v223; // [rsp+10h] [rbp-F8h]
  int v224; // [rsp+10h] [rbp-F8h]
  __int64 v225; // [rsp+10h] [rbp-F8h]
  size_t v226; // [rsp+10h] [rbp-F8h]
  __int64 v227; // [rsp+10h] [rbp-F8h]
  int v228; // [rsp+18h] [rbp-F0h]
  char v229; // [rsp+18h] [rbp-F0h]
  __int64 v230; // [rsp+18h] [rbp-F0h]
  __int64 v231; // [rsp+18h] [rbp-F0h]
  int v232; // [rsp+20h] [rbp-E8h]
  char v233; // [rsp+20h] [rbp-E8h]
  char v234; // [rsp+20h] [rbp-E8h]
  int v235[2]; // [rsp+28h] [rbp-E0h]
  __int64 v236; // [rsp+30h] [rbp-D8h]
  char v237; // [rsp+32h] [rbp-D6h]
  char v238; // [rsp+32h] [rbp-D6h]
  void *v239; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v240; // [rsp+48h] [rbp-C0h]
  __m128i v241[2]; // [rsp+60h] [rbp-A8h] BYREF
  void *src; // [rsp+80h] [rbp-88h] BYREF
  __int128 v243; // [rsp+88h] [rbp-80h]
  void *ptr; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v245; // [rsp+A8h] [rbp-60h]
  __int64 v246; // [rsp+B8h] [rbp-50h]
  int v247; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v248; // [rsp+C8h] [rbp-40h]

  *(_QWORD *)v235 = a1;
  v201 = (void *)a2;
  HIDWORD(v236) = a3;
  v248 = __readfsqword(0x28u);
  v3 = qword_2CCB598;
  v4 = *(_QWORD **)(qword_2CCB598 + 1840);
  BYTE3(v236) = getinf_flag(44, 1024);
  if ( !BYTE3(v236) )
    return 0;
  v5 = v4[3];
  if ( !v5 )
    return 0;
  v6 = (unsigned __int64 *)v4[2];
  if ( a2 != -1 )
  {
    v7 = a2 & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(_BYTE *)(v3 + 940) & 8) == 0 )
      v7 = a2;
    v201 = (void *)v7;
    if ( v7 < *v6 )
      goto LABEL_7;
  }
  if ( v6[2 * (int)v5 - 1] >= (unsigned __int64)v201 )
  {
    if ( v4[8] >= (unsigned __int64)v201 )
    {
      v239 = nullptr;
      v51 = 0;
      v240 = 0;
    }
    else
    {
      v50 = (unsigned __int64)v201 < v4[9];
      v51 = 0;
      v239 = nullptr;
      v240 = 0;
      if ( v50 )
      {
        v96 = (void *)v4[11];
        v48 = 0;
        v13 = (void **)(v4 + 10);
        if ( !v96 )
          return v48;
        goto LABEL_149;
      }
    }
    v13 = (void **)(v4 + 10);
    v241[0] = v51;
    ptr = nullptr;
    v246 = 0;
    v247 = -1;
    v245 = v51;
    sub_69C1A0(v4, v241[0].m128i_i64, &ptr, (unsigned __int64)v201);
    v52 = (void *)v4[10];
    if ( v52 )
    {
      v4[11] = 0;
      qfree(v52);
      v4[10] = 0;
      v4[12] = 0;
    }
    *((__m128i *)v4 + 4) = _mm_load_si128(v241);
    v14 = v241[0].m128i_u64[1];
  }
  else
  {
LABEL_7:
    v239 = nullptr;
    ptr = nullptr;
    v246 = 0;
    v247 = -1;
    v240 = 0;
    v241[0] = 0;
    v245 = 0;
    fchunk = get_fchunk(v201);
    v9 = (__int64 *)fchunk;
    if ( fchunk )
    {
      if ( *(char *)(fchunk + 17) >= 0 )
      {
        sub_69A460((int)&ptr, fchunk);
      }
      else
      {
        src = nullptr;
        func_parent_iterator_set(&src, fchunk);
        v10 = src;
        v11 = *v9;
        LODWORD(v243) = 0;
        if ( src )
        {
          if ( *((char *)src + 17) >= 0 )
            goto LABEL_16;
          if ( *((int *)src + 8) > 0 )
          {
            while ( 1 )
            {
              func = get_func(*(_QWORD *)(v10[5] + 8LL * (int)v243));
              if ( func )
                sub_69A460((int)&ptr, func);
              v10 = (_QWORD *)get_fchunk(v11);
              src = v10;
              if ( (int)v243 + 1 >= *((_DWORD *)v10 + 8) )
                break;
              LODWORD(v243) = v243 + 1;
            }
          }
          if ( v10 )
LABEL_16:
            lock_func_range(v10, 0);
        }
      }
    }
    v13 = &v239;
    v14 = (unsigned __int64)v201 + 2;
    v241[0].m128i_i64[0] = (__int64)v201;
    v241[0].m128i_i64[1] = (__int64)v201 + 2;
  }
  if ( v14 < getinf(20) )
    ++v241[0].m128i_i64[1];
  rangeset_t_add((int)&ptr, (int)v241, v15, v16, v17, v18, (int)v201, v202, v220, v228, v232, v235[0], v236);
  src = nullptr;
  v243 = 0;
  sub_69DDF0((__int64 *)&src, &ptr);
  v21 = *v13;
  if ( *v13 )
  {
    v13[1] = nullptr;
    qfree(v21);
    *v13 = nullptr;
    v13[2] = nullptr;
  }
  v22 = nullptr;
  v23 = 0;
  v203 = 0;
  if ( (_QWORD)v243 )
  {
LABEL_25:
    v24 = (char *)src + 104 * v23;
    v25 = v24[97];
    if ( v25 == 2 )
    {
      if ( !*((_QWORD *)v24 + 1) )
      {
        v31 = 0;
        v32 = 0;
        v28 = -1;
        if ( !*((_QWORD *)v24 + 4) )
          goto LABEL_24;
LABEL_116:
        v71 = 0;
        v72 = 0;
        do
        {
          v76 = *((_QWORD *)v24 + 3) + 56 * v72;
          v77 = v13[1];
          v78 = (char *)v77 + 1;
          if ( v13[2] < (char *)v77 + 1 )
          {
            v229 = v31;
            v222 = v32;
            v79 = qvector_reserve(v13, v22, v78, 32);
            *v13 = (void *)v79;
            v22 = (__m128i *)v79;
            v77 = v13[1];
            v31 = v229;
            v32 = v222;
            v78 = (char *)v77 + 1;
          }
          v13[1] = v78;
          v73 = &v22[2 * (_QWORD)v77];
          v74 = **(_QWORD **)v76;
          if ( v74 != -1 && (*(_BYTE *)(v3 + 940) & 8) != 0 )
            v74 &= ~1uLL;
          v73->m128i_i64[0] = v74;
          ++v71;
          v73->m128i_i64[1] = *(_QWORD *)(v76 + 48);
          v75 = (unsigned __int8)v24[98];
          v73[1].m128i_i64[0] = v28;
          v73[1].m128i_i32[2] = v75;
          v73[1].m128i_i32[3] = 16;
          v72 = v71;
          v22 = (__m128i *)*v13;
        }
        while ( (unsigned __int64)v71 < *((_QWORD *)v24 + 4) );
LABEL_84:
        if ( !v32 )
        {
LABEL_85:
          if ( !v31 )
            goto LABEL_24;
LABEL_86:
          if ( *((_QWORD *)v24 + 9) && **((_QWORD **)v24 + 8) != -1 )
          {
            v55 = v13[1];
            v56 = (char *)v55 + 1;
            if ( v13[2] < (char *)v55 + 1 )
            {
              v178 = qvector_reserve(v13, v22, v56, 32);
              *v13 = (void *)v178;
              v22 = (__m128i *)v178;
              v55 = v13[1];
              v56 = (char *)v55 + 1;
            }
            v13[1] = v56;
            v57 = &v22[2 * (_QWORD)v55];
            v58 = **((_QWORD **)v24 + 8);
            if ( v58 != -1 && (*(_BYTE *)(v3 + 940) & 8) != 0 )
              v58 &= ~1uLL;
            v57->m128i_i64[0] = v58;
            v59 = -1;
            if ( *((_QWORD *)v24 + 4) )
              v59 = **((_QWORD **)v24 + 3);
            v57->m128i_i64[1] = v59;
            v57[1].m128i_i64[0] = v28;
            v57[1].m128i_i64[1] = 0xC00000001LL;
            v22 = (__m128i *)*v13;
          }
          goto LABEL_24;
        }
LABEL_96:
        if ( !*((_QWORD *)v24 + 4) )
          goto LABEL_24;
        v60 = *((unsigned __int64 **)v24 + 3);
LABEL_98:
        if ( *v60 != -1 )
        {
          v61 = v13[1];
          v62 = (char *)v61 + 1;
          if ( v13[2] < (char *)v61 + 1 )
          {
            v159 = qvector_reserve(v13, v22, v62, 32);
            *v13 = (void *)v159;
            v22 = (__m128i *)v159;
            v61 = v13[1];
            v62 = (char *)v61 + 1;
          }
          v13[1] = v62;
          v63 = &v22[2 * (_QWORD)v61];
          v64 = **((_QWORD **)v24 + 3);
          if ( v64 != -1 && (*(_BYTE *)(v3 + 940) & 8) != 0 )
            v64 &= ~1uLL;
          v63->m128i_i64[0] = v64;
          if ( *((_QWORD *)v24 + 9) )
            v65 = **((_QWORD **)v24 + 8);
          else
            v65 = *((_QWORD *)v24 + 11);
          v63->m128i_i64[1] = v65;
          v63[1].m128i_i64[0] = v28;
          v63[1].m128i_i64[1] = 0x800000001LL;
          v22 = (__m128i *)*v13;
          if ( *((_QWORD *)v24 + 9) && **((_QWORD **)v24 + 8) != -1 )
          {
            v66 = v13[1];
            v67 = (char *)v66 + 1;
            if ( v13[2] < (char *)v66 + 1 )
            {
              v199 = qvector_reserve(v13, *v13, v67, 32);
              *v13 = (void *)v199;
              v22 = (__m128i *)v199;
              v66 = v13[1];
              v67 = (char *)v66 + 1;
            }
            v13[1] = v67;
            v68 = &v22[2 * (_QWORD)v66];
            v69 = **((_QWORD **)v24 + 8);
            if ( v69 != -1 && (*(_BYTE *)(v3 + 940) & 8) != 0 )
              v69 &= ~1uLL;
            v68->m128i_i64[0] = v69;
            v70 = **((_QWORD **)v24 + 8);
            v68[1].m128i_i64[0] = v28;
            v68->m128i_i64[1] = v70;
            v68[1].m128i_i64[1] = 0xA00000001LL;
            v22 = (__m128i *)*v13;
          }
        }
        goto LABEL_24;
      }
      v27 = *(__int64 **)v24;
      v28 = **(_QWORD **)v24;
      if ( v28 != -1 && (*(_BYTE *)(v3 + 940) & 8) != 0 )
      {
        v221 = 14;
        v28 &= ~1uLL;
        v31 = 0;
        v32 = 0;
      }
      else
      {
        v221 = 14;
        v31 = 0;
        v32 = 0;
      }
      goto LABEL_37;
    }
    if ( v25 != 1 )
      goto LABEL_24;
    v26 = *((_QWORD *)v24 + 1);
    v27 = *(__int64 **)v24;
    if ( v26 )
    {
      v28 = *v27;
      if ( *v27 == -1 )
      {
        v29 = v27[1];
        if ( v29 == -1 )
        {
          v171 = *((_QWORD *)v24 + 4);
          if ( v171 == 1 )
            goto LABEL_180;
          if ( v171 )
          {
LABEL_183:
            v221 = 6;
            v32 = BYTE3(v236);
            v31 = 0;
            goto LABEL_37;
          }
LABEL_36:
          v221 = 2;
          v31 = 0;
          v32 = 0;
LABEL_37:
          v33 = 0;
          v34 = 0;
          while ( 1 )
          {
            v36 = &v27[2 * v34];
            if ( *v36 != -1 )
              break;
LABEL_41:
            v34 = ++v33;
            if ( (unsigned __int64)v33 >= *((_QWORD *)v24 + 1) )
            {
              if ( v24[97] != 2 )
                goto LABEL_84;
              if ( *((_QWORD *)v24 + 4) )
                goto LABEL_116;
              if ( !v32 )
                goto LABEL_85;
LABEL_24:
              v23 = ++v203;
              if ( v203 >= (unsigned __int64)v243 )
                goto LABEL_123;
              goto LABEL_25;
            }
            v27 = *(__int64 **)v24;
          }
          v37 = v13[1];
          v38 = (char *)v37 + 1;
          if ( v13[2] < (char *)v37 + 1 )
          {
            v238 = v31;
            v234 = v32;
            v54 = qvector_reserve(v13, v22, v38, 32);
            *v13 = (void *)v54;
            v22 = (__m128i *)v54;
            v37 = v13[1];
            v31 = v238;
            v32 = v234;
            v38 = (char *)v37 + 1;
          }
          v13[1] = v38;
          v39 = *v36;
          v40 = &v22[2 * (_QWORD)v37];
          if ( *v36 != -1 && (*(_BYTE *)(v3 + 940) & 8) != 0 )
            v39 &= ~1uLL;
          v40->m128i_i64[0] = v39;
          if ( v32 )
          {
            v40->m128i_i64[1] = 0;
            if ( !v31 )
            {
              v41 = -1;
              if ( *((_QWORD *)v24 + 4) )
              {
                v41 = **((_QWORD **)v24 + 3);
                if ( v41 != -1 && (*(_BYTE *)(v3 + 940) & 8) != 0 )
                  v41 &= ~1uLL;
              }
              goto LABEL_54;
            }
          }
          else if ( v24[97] == 1 )
          {
            v40->m128i_i64[1] = *((_QWORD *)v24 + 11);
            if ( !v31 )
            {
LABEL_55:
              v40[1].m128i_i64[0] = v28;
              v42 = (unsigned __int8)v24[98];
              v40[1].m128i_i32[3] = v221;
              v40[1].m128i_i32[2] = v42;
              v43 = v13[1];
              v44 = (__int64)*v13;
              v45 = (char *)v43 + 1;
              if ( v13[2] < (char *)v43 + 1 )
              {
                v237 = v31;
                v233 = v32;
                v53 = qvector_reserve(v13, v44, v45, 32);
                *v13 = (void *)v53;
                v44 = v53;
                v43 = v13[1];
                v31 = v237;
                v32 = v233;
                v45 = (char *)v43 + 1;
              }
              v13[1] = v45;
              v46 = v36[1];
              v47 = v44 + 32LL * (_QWORD)v43;
              if ( v46 != -1 || (v46 = *v36, *v36 != -1) )
              {
                if ( (*(_BYTE *)(v3 + 940) & 8) != 0 )
                  v46 &= ~1uLL;
              }
              *(_QWORD *)v47 = v46;
              *(_QWORD *)(v47 + 16) = v28;
              *(_DWORD *)(v47 + 24) = (unsigned __int8)v24[98];
              if ( v31 )
              {
                if ( *((_QWORD *)v24 + 9) )
                {
                  v35 = **((_QWORD **)v24 + 8);
LABEL_40:
                  *(_QWORD *)(v47 + 8) = v35;
                  *(_DWORD *)(v47 + 28) = v221 | 1;
                  v22 = (__m128i *)*v13;
                  goto LABEL_41;
                }
              }
              else
              {
                v35 = 0;
                if ( v32 || v24[97] != 1 )
                  goto LABEL_40;
              }
              v35 = *((_QWORD *)v24 + 11);
              goto LABEL_40;
            }
          }
          else
          {
            v40->m128i_i64[1] = 0;
            if ( !v31 )
              goto LABEL_55;
          }
          if ( *((_QWORD *)v24 + 9) )
            v41 = **((_QWORD **)v24 + 8);
          else
            v41 = *((_QWORD *)v24 + 11);
LABEL_54:
          v40->m128i_i64[1] = v41;
          goto LABEL_55;
        }
        goto LABEL_32;
      }
      if ( (*(_BYTE *)(v3 + 940) & 8) != 0 )
        v28 &= ~1uLL;
    }
    else
    {
      v28 = -1;
    }
    v29 = v27[1];
    if ( v29 == -1 )
    {
      v29 = *v27;
      if ( *v27 == -1 )
      {
        v30 = *((_QWORD *)v24 + 4);
        if ( v30 == 1 )
        {
LABEL_180:
          v113 = *((_QWORD **)v24 + 3);
          if ( v113[1] != -1 || *v113 != -1 )
          {
LABEL_182:
            if ( !v26 )
              goto LABEL_96;
            goto LABEL_183;
          }
LABEL_263:
          if ( !v26 )
            goto LABEL_86;
          v221 = 4;
          v31 = BYTE3(v236);
          v32 = 0;
          goto LABEL_37;
        }
        goto LABEL_34;
      }
    }
LABEL_32:
    v30 = *((_QWORD *)v24 + 4);
    if ( (*(_BYTE *)(v3 + 940) & 8) != 0 )
    {
      if ( v30 != 1 )
      {
LABEL_34:
        if ( v30 )
          goto LABEL_182;
        if ( !v26 )
          goto LABEL_24;
        goto LABEL_36;
      }
      v160 = *((__int64 **)v24 + 3);
      v161 = v160[1];
      if ( v161 == -1 )
        goto LABEL_182;
      v29 &= ~1uLL;
      if ( v29 != (v161 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_182;
      v162 = *v160;
      v115 = *v160 & 0xFFFFFFFFFFFFFFFELL;
      if ( v162 == -1 )
        goto LABEL_182;
    }
    else
    {
      if ( v30 != 1 )
        goto LABEL_34;
      v60 = *((unsigned __int64 **)v24 + 3);
      v114 = v60[1];
      if ( v114 == -1 )
      {
        if ( !v26 )
          goto LABEL_98;
        goto LABEL_183;
      }
      if ( v114 != v29 )
        goto LABEL_182;
      v115 = *v60;
      if ( v115 == -1 )
        goto LABEL_182;
    }
    if ( v115 != v29 )
      goto LABEL_182;
    goto LABEL_263;
  }
LABEL_123:
  v80 = 2LL * (_QWORD)v13[1];
  v81 = &v22[v80];
  if ( &v22[v80] == v22 )
    goto LABEL_128;
  if ( !((v80 * 16) >> 5) )
  {
    sub_6A3E50(v22, &v22[v80], -2, (__int64 (__fastcall *)(__int64, __int64))sub_698150, v19, v20);
    goto LABEL_194;
  }
  _BitScanReverse64(&v82, (v80 * 16) >> 5);
  sub_6A3E50(v22, &v22[v80], 2LL * (int)v82, (__int64 (__fastcall *)(__int64, __int64))sub_698150, v19, v20);
  if ( v80 <= 32 )
  {
LABEL_194:
    sub_6A1D20(v22, v81, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_698150);
    goto LABEL_128;
  }
  v83 = v22 + 32;
  sub_6A1D20(v22, v22 + 32, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_698150);
  do
  {
    sub_6A1C90(v83, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_698150);
    v83 += 2;
  }
  while ( v81 != v83 );
LABEL_128:
  v84 = src;
  if ( src )
  {
    if ( (_QWORD)v243 )
    {
      v204 = v13;
      v85 = 0;
      v86 = 0;
      v87 = v243;
      v223 = v3;
      do
      {
        v89 = &v84[v85];
        v90 = v84[v85 + 97];
        if ( v90 == 2 )
        {
          v91 = *((char **)v89 + 3);
          if ( v91 )
          {
            if ( *((_QWORD *)v89 + 4) )
            {
              v230 = v86;
              v92 = 0;
              v93 = 0;
              v94 = *((_QWORD *)v89 + 4);
              do
              {
                v95 = *(void **)&v91[v92];
                if ( v95 )
                {
                  *(_QWORD *)&v91[v92 + 8] = 0;
                  qfree(v95);
                  v91 = *((char **)v89 + 3);
                }
                ++v93;
                v92 += 56;
              }
              while ( v94 != v93 );
              v86 = v230;
            }
            *((_QWORD *)v89 + 4) = 0;
            qfree(v91);
          }
        }
        else if ( v90 == 1 )
        {
          v111 = *((void **)v89 + 8);
          if ( v111 )
          {
            *((_QWORD *)v89 + 9) = 0;
            qfree(v111);
          }
          v112 = *((void **)v89 + 3);
          if ( v112 )
          {
            *((_QWORD *)v89 + 4) = 0;
            qfree(v112);
          }
        }
        v88 = *(void **)v89;
        v89[97] = 0;
        if ( v88 )
        {
          *((_QWORD *)v89 + 1) = 0;
          qfree(v88);
        }
        ++v86;
        v84 = src;
        v85 += 104;
      }
      while ( v87 != v86 );
      v13 = v204;
      v3 = v223;
    }
    *(_QWORD *)&v243 = 0;
    qfree(v84);
  }
  if ( ptr )
  {
    v245.m128i_i64[0] = 0;
    qfree(ptr);
  }
  v96 = v13[1];
  if ( v96 )
  {
LABEL_149:
    v97 = 32LL * (_QWORD)v96;
    v245.m128i_i64[1] = -1;
    v245.m128i_i64[0] = -1;
    ptr = v201;
    v98 = v97 >> 5;
    v246 = 0x7FFFFFFF7FFFFFFFLL;
    v99 = (char *)*v13;
    v100 = (char *)*v13;
    while ( v98 > 0 )
    {
      while ( 1 )
      {
        v101 = (__int64)&v100[32 * (v98 >> 1)];
        if ( !sub_698150(v101, (__int64)&ptr) )
          break;
        v100 = (char *)(v101 + 32);
        v98 = v102 - 1 - v103;
        if ( v98 <= 0 )
          goto LABEL_153;
      }
      v98 = v103;
    }
LABEL_153:
    if ( v100 != &v99[v97] )
    {
      v48 = 0;
      while ( 1 )
      {
        if ( *(void **)v100 != v201 )
          goto LABEL_167;
        v104 = *((_DWORD *)v100 + 7);
        if ( ((v236 & 0x100000000LL) == 0) == (v100[28] & 1) )
          break;
LABEL_155:
        v100 += 32;
        if ( v100 == &v99[32 * (_QWORD)v13[1]] )
          goto LABEL_167;
      }
      memset(v241, 0, 24);
      sub_35A790((char **)v241);
      v105 = *((_DWORD *)v100 + 6);
      if ( v105 <= 0 )
      {
LABEL_169:
        v110 = v104 & 1;
        switch ( *((_DWORD *)v100 + 7) & 0xFFFFFFFE )
        {
          case 2u:
            v131 = v241[0].m128i_i64[1];
            if ( v110 )
              goto LABEL_271;
            if ( v241[0].m128i_i64[1] )
            {
              v148 = v241[0].m128i_i64[1] + 17;
              v149 = v241[0].m128i_i64[1] + 18;
              v131 = v241[0].m128i_i64[1] - 1;
            }
            else
            {
              v149 = 19;
              v148 = 18;
            }
            v150 = v241[0].m128i_i64[0];
            if ( v241[1].m128i_i64[0] < v149 )
            {
              v210 = (void *)v149;
              v241[0].m128i_i64[0] = qvector_reserve(v241, v241[0].m128i_i64[0], v149, 1);
              v149 = (unsigned __int64)v210;
              v150 = v241[0].m128i_i64[0];
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_23A8000);
            v241[0].m128i_i64[1] = v149;
            *(_BYTE *)(v150 + v148) = 0;
            v152 = (__m128i *)(v241[0].m128i_i64[0] + v131);
            v152[1].m128i_i16[0] = 2306;
            *v152 = si128;
            v153 = *((_QWORD *)v100 + 1);
            if ( v153 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
            {
              v185 = v241[0].m128i_i64[1];
              if ( v241[0].m128i_i64[1] )
              {
                v186 = v241[0].m128i_i64[1] + 5;
                v187 = v241[0].m128i_i64[1] + 6;
                v185 = v241[0].m128i_i64[1] - 1;
              }
              else
              {
                v187 = 7;
                v186 = 6;
              }
              v188 = v241[0].m128i_i64[0];
              if ( v241[1].m128i_i64[0] < v187 )
              {
                v225 = v186;
                v216 = (void *)v187;
                v241[0].m128i_i64[0] = qvector_reserve(v241, v241[0].m128i_i64[0], v187, 1);
                v186 = v225;
                v188 = v241[0].m128i_i64[0];
                v187 = (unsigned __int64)v216;
              }
              v241[0].m128i_i64[1] = v187;
              *(_BYTE *)(v188 + v186) = 0;
              v189 = v185 + v241[0].m128i_i64[0];
              *(_WORD *)(v189 + 4) = 8239;
              *(_DWORD *)v189 = 788660512;
              src = nullptr;
              v243 = 0;
              sub_69CDC0(*(_DWORD *)(v3 + 940), (char **)&src, v153);
              if ( (_QWORD)v243 )
              {
                v190 = v243 - 1;
                v191 = v243 - 1;
                if ( (_QWORD)v243 != 1 )
                {
                  v192 = (v241[0].m128i_i64[1] == 0) + v241[0].m128i_i64[1] - 1;
                  v193 = v190 + v192;
                  v194 = v190 + (v241[0].m128i_i64[1] == 0) + v241[0].m128i_i64[1];
                  if ( v241[1].m128i_i64[0] < v194 )
                  {
                    v227 = v190 + v192;
                    v219 = (void *)(v190 + (v241[0].m128i_i64[1] == 0) + v241[0].m128i_i64[1]);
                    v200 = qvector_reserve(v241, v241[0].m128i_i64[0], v194, 1);
                    v193 = v227;
                    v194 = (unsigned __int64)v219;
                    v241[0].m128i_i64[0] = v200;
                  }
                  v241[0].m128i_i64[1] = v194;
                  *(_BYTE *)(v241[0].m128i_i64[0] + v193) = 0;
                  memcpy((void *)(v192 + v241[0].m128i_i64[0]), src, v191);
                }
              }
              v195 = v241[0].m128i_i64[1];
              if ( v241[0].m128i_i64[1] )
              {
                v196 = v241[0].m128i_i64[1] + 1;
                v197 = v241[0].m128i_i64[1] + 2;
                v195 = v241[0].m128i_i64[1] - 1;
              }
              else
              {
                v197 = 3;
                v196 = 2;
              }
              v198 = v241[0].m128i_i64[0];
              if ( v241[1].m128i_i64[0] < v197 )
              {
                v217 = (void *)v197;
                v241[0].m128i_i64[0] = qvector_reserve(v241, v241[0].m128i_i64[0], v197, 1);
                v197 = (unsigned __int64)v217;
                v198 = v241[0].m128i_i64[0];
              }
              v241[0].m128i_i64[1] = v197;
              *(_BYTE *)(v198 + v196) = 0;
              *(_WORD *)(v241[0].m128i_i64[0] + v195) = 514;
              v130 = src;
              if ( !src )
                goto LABEL_196;
              goto LABEL_315;
            }
            if ( *((void **)v100 + 2) != v201 )
            {
              v116 = 0;
              goto LABEL_197;
            }
            goto LABEL_198;
          case 4u:
            v131 = v241[0].m128i_i64[1];
            if ( v110 )
              goto LABEL_271;
            if ( v241[0].m128i_i64[1] )
            {
              v144 = v241[0].m128i_i64[1] + 14;
              v145 = v241[0].m128i_i64[1] + 15;
              v131 = v241[0].m128i_i64[1] - 1;
            }
            else
            {
              v145 = 16;
              v144 = 15;
            }
            v146 = v241[0].m128i_i64[0];
            if ( v241[1].m128i_i64[0] < v145 )
            {
              v211 = (void *)v145;
              v241[0].m128i_i64[0] = qvector_reserve(v241, v241[0].m128i_i64[0], v145, 1);
              v145 = (unsigned __int64)v211;
              v146 = v241[0].m128i_i64[0];
            }
            v241[0].m128i_i64[1] = v145;
            *(_BYTE *)(v146 + v144) = 0;
            v147 = (_QWORD *)(v241[0].m128i_i64[0] + v131);
            *v147 = 0x27972745F5F2001LL;
            *(_QWORD *)((char *)v147 + 7) = 0x9027B0901202002LL;
            src = nullptr;
            v243 = 0;
            sub_69CDC0(*(_DWORD *)(v3 + 940), (char **)&src, *((_QWORD *)v100 + 1));
            sub_35A910(v241[0].m128i_i64);
            v130 = src;
            if ( !src )
              goto LABEL_196;
            goto LABEL_315;
          case 6u:
            v131 = v241[0].m128i_i64[1];
            if ( v110 )
              goto LABEL_271;
            if ( v241[0].m128i_i64[1] )
            {
              v132 = v241[0].m128i_i64[1] + 32;
              v133 = v241[0].m128i_i64[1] + 33;
              v131 = v241[0].m128i_i64[1] - 1;
            }
            else
            {
              v133 = 34;
              v132 = 33;
            }
            v134 = v241[0].m128i_i64[0];
            if ( v241[1].m128i_i64[0] < v133 )
            {
              v213 = (void *)v133;
              v241[0].m128i_i64[0] = qvector_reserve(v241, v241[0].m128i_i64[0], v133, 1);
              v133 = (unsigned __int64)v213;
              v134 = v241[0].m128i_i64[0];
            }
            v135 = _mm_load_si128((const __m128i *)&xmmword_23A8010);
            v241[0].m128i_i64[1] = v133;
            *(_BYTE *)(v134 + v132) = 0;
            v136 = (__m128i *)(v241[0].m128i_i64[0] + v131);
            *v136 = v135;
            v137 = _mm_load_si128((const __m128i *)&xmmword_23A8020);
            v136[2].m128i_i8[0] = 32;
            v136[1] = v137;
            v138 = *((_QWORD *)v100 + 1);
            src = nullptr;
            v243 = 0;
            sub_69CDC0(*(_DWORD *)(v3 + 940), (char **)&src, v138);
            v139 = v243;
            if ( (_QWORD)v243 )
            {
              v140 = v243 - 1;
              if ( (_QWORD)v243 != 1 )
              {
                v141 = v241[0].m128i_i64[1];
                v142 = v243 - 1;
                if ( v241[0].m128i_i64[1] )
                {
                  v141 = v241[0].m128i_i64[1] - 1;
                  v142 = v140 + v241[0].m128i_i64[1] - 1;
                  v139 = v243 + v241[0].m128i_i64[1] - 1;
                }
                v143 = v241[0].m128i_i64[0];
                if ( v241[1].m128i_i64[0] < v139 )
                {
                  v226 = v142;
                  v218 = (void *)v139;
                  v241[0].m128i_i64[0] = qvector_reserve(v241, v241[0].m128i_i64[0], v139, 1);
                  v142 = v226;
                  v143 = v241[0].m128i_i64[0];
                  v139 = (unsigned __int64)v218;
                }
                v241[0].m128i_i64[1] = v139;
                *(_BYTE *)(v143 + v142) = 0;
                memcpy((void *)(v141 + v241[0].m128i_i64[0]), src, v140);
              }
            }
            v130 = src;
            if ( src )
              goto LABEL_315;
            goto LABEL_196;
          case 8u:
            if ( *((_QWORD *)v100 + 1) <= 1u )
              goto LABEL_195;
            src = nullptr;
            v243 = 0;
            sub_69CDC0(*(_DWORD *)(v3 + 940), (char **)&src, *((_QWORD *)v100 + 1));
            sub_35A910(v241[0].m128i_i64);
            v130 = src;
            if ( src )
              goto LABEL_315;
            goto LABEL_196;
          case 0xAu:
            v124 = v241[0].m128i_i64[1];
            if ( v241[0].m128i_i64[1] )
            {
              v125 = v241[0].m128i_i64[1] + 23;
              v126 = v241[0].m128i_i64[1] + 24;
              v124 = v241[0].m128i_i64[1] - 1;
            }
            else
            {
              v126 = 25;
              v125 = 24;
            }
            v127 = v241[0].m128i_i64[0];
            if ( v241[1].m128i_i64[0] < v126 )
            {
              v209 = (void *)v126;
              v241[0].m128i_i64[0] = qvector_reserve(v241, v241[0].m128i_i64[0], v126, 1);
              v126 = (unsigned __int64)v209;
              v127 = v241[0].m128i_i64[0];
            }
            v241[0].m128i_i64[1] = v126;
            v128 = _mm_load_si128((const __m128i *)&xmmword_23A8040);
            *(_BYTE *)(v127 + v125) = 0;
            v129 = (__m128i *)(v124 + v241[0].m128i_i64[0]);
            v129[1].m128i_i64[0] = 0x2F2F020120200272LL;
            *v129 = v128;
            goto LABEL_196;
          case 0xCu:
            v118 = v241[0].m128i_i64[1];
            if ( v241[0].m128i_i64[1] )
            {
              v119 = v241[0].m128i_i64[1] + 17;
              v120 = v241[0].m128i_i64[1] + 18;
              v118 = v241[0].m128i_i64[1] - 1;
            }
            else
            {
              v120 = 19;
              v119 = 18;
            }
            v121 = v241[0].m128i_i64[0];
            if ( v241[1].m128i_i64[0] < v120 )
            {
              v208 = (void *)v120;
              v241[0].m128i_i64[0] = qvector_reserve(v241, v241[0].m128i_i64[0], v120, 1);
              v120 = (unsigned __int64)v208;
              v121 = v241[0].m128i_i64[0];
            }
            v241[0].m128i_i64[1] = v120;
            v122 = _mm_load_si128((const __m128i *)&xmmword_23A8030);
            *(_BYTE *)(v121 + v119) = 0;
            v123 = (__m128i *)(v118 + v241[0].m128i_i64[0]);
            v123[1].m128i_i16[0] = 12079;
            *v123 = v122;
            goto LABEL_196;
          case 0xEu:
            v131 = v241[0].m128i_i64[1];
            if ( v110 )
            {
LABEL_271:
              if ( v131 )
              {
                v167 = v131 + 9;
                v168 = v131 + 10;
                --v131;
              }
              else
              {
                v168 = 11;
                v167 = 10;
              }
              v169 = v241[0].m128i_i64[0];
              if ( v241[1].m128i_i64[0] < v168 )
              {
                v207 = (void *)v168;
                v241[0].m128i_i64[0] = qvector_reserve(v241, v241[0].m128i_i64[0], v168, 1);
                v168 = (unsigned __int64)v207;
                v169 = v241[0].m128i_i64[0];
              }
              v241[0].m128i_i64[1] = v168;
              *(_BYTE *)(v169 + v167) = 0;
              v170 = v241[0].m128i_i64[0] + v131;
              *(_QWORD *)v170 = 0x2012009027D0901LL;
              *(_WORD *)(v170 + 8) = 12079;
LABEL_196:
              v116 = BYTE3(v236);
              if ( *((void **)v100 + 2) == v201 )
              {
LABEL_265:
                v163 = v241[0].m128i_i64[1];
                if ( v241[0].m128i_i64[1] )
                {
                  v165 = v241[0].m128i_i64[1] + 1;
                  v164 = v241[0].m128i_i64[1] + 2;
                  v163 = v241[0].m128i_i64[1] - 1;
                }
                else
                {
                  v164 = 3;
                  v165 = 2;
                }
                v166 = v241[0].m128i_i64[0];
                if ( v241[1].m128i_i64[0] < v164 )
                {
                  v206 = (void *)v164;
                  v241[0].m128i_i64[0] = qvector_reserve(v241, v241[0].m128i_i64[0], v164, 1);
                  v164 = (unsigned __int64)v206;
                  v166 = v241[0].m128i_i64[0];
                }
                v241[0].m128i_i64[1] = v164;
                *(_BYTE *)(v166 + v165) = 0;
                *(_WORD *)(v241[0].m128i_i64[0] + v163) = 514;
                goto LABEL_198;
              }
            }
            else
            {
              if ( v241[0].m128i_i64[1] )
              {
                v155 = v241[0].m128i_i64[1] + 12;
                v156 = v241[0].m128i_i64[1] + 13;
                v131 = v241[0].m128i_i64[1] - 1;
              }
              else
              {
                v156 = 14;
                v155 = 13;
              }
              v157 = v241[0].m128i_i64[0];
              if ( v241[1].m128i_i64[0] < v156 )
              {
                v212 = (void *)v156;
                v241[0].m128i_i64[0] = qvector_reserve(v241, v241[0].m128i_i64[0], v156, 1);
                v156 = (unsigned __int64)v212;
                v157 = v241[0].m128i_i64[0];
              }
              v241[0].m128i_i64[1] = v156;
              *(_BYTE *)(v157 + v155) = 0;
              v158 = (_QWORD *)(v241[0].m128i_i64[0] + v131);
              *v158 = 0x2020027972742001LL;
              *(_QWORD *)((char *)v158 + 5) = 0x9027B0901202002LL;
              v116 = 0;
              if ( *((void **)v100 + 2) == v201 )
              {
LABEL_198:
                v117 = haystack;
                if ( v241[0].m128i_i64[1] )
                  v117 = (const char *)v241[0].m128i_i64[0];
                v48 += (*(unsigned __int8 (__fastcall **)(int *, const char *, _QWORD))(**(_QWORD **)v235 + 136LL))(
                         *(int **)v235,
                         v117,
                         0);
                if ( v241[0].m128i_i64[0] )
                {
                  v241[0].m128i_i64[1] = 0;
                  qfree((void *)v241[0].m128i_i64[0]);
                }
                v99 = (char *)*v13;
                goto LABEL_155;
              }
            }
LABEL_197:
            sub_35A910(v241[0].m128i_i64);
            if ( !v116 )
              goto LABEL_198;
            goto LABEL_265;
          case 0x10u:
            v154 = *((_QWORD *)v100 + 1);
            if ( v154 == -1 )
            {
              v179 = v241[0].m128i_i64[1];
              if ( v241[0].m128i_i64[1] )
              {
                v180 = v241[0].m128i_i64[1] + 22;
                v181 = v241[0].m128i_i64[1] + 23;
                v179 = v241[0].m128i_i64[1] - 1;
              }
              else
              {
                v181 = 24;
                v180 = 23;
              }
              v182 = v241[0].m128i_i64[0];
              if ( v241[1].m128i_i64[0] < v181 )
              {
                v215 = (void *)v181;
                v241[0].m128i_i64[0] = qvector_reserve(v241, v241[0].m128i_i64[0], v181, 1);
                v181 = (unsigned __int64)v215;
                v182 = v241[0].m128i_i64[0];
              }
              v183 = _mm_load_si128((const __m128i *)&xmmword_23A8050);
              v241[0].m128i_i64[1] = v181;
              *(_BYTE *)(v182 + v180) = 0;
              v184 = v241[0].m128i_i64[0] + v179;
              *(__m128i *)v184 = v183;
              *(_QWORD *)(v184 + 15) = 0x2F2F020120090229LL;
            }
            else if ( v154 == -2 )
            {
              v172 = v241[0].m128i_i64[1];
              if ( v241[0].m128i_i64[1] )
              {
                v173 = v241[0].m128i_i64[1] + 21;
                v174 = v241[0].m128i_i64[1] + 22;
                v172 = v241[0].m128i_i64[1] - 1;
              }
              else
              {
                v174 = 23;
                v173 = 22;
              }
              v175 = v241[0].m128i_i64[0];
              if ( v241[1].m128i_i64[0] < v174 )
              {
                v214 = (void *)v174;
                v241[0].m128i_i64[0] = qvector_reserve(v241, v241[0].m128i_i64[0], v174, 1);
                v174 = (unsigned __int64)v214;
                v175 = v241[0].m128i_i64[0];
              }
              v241[0].m128i_i64[1] = v174;
              v176 = _mm_load_si128((const __m128i *)&xmmword_23A8060);
              *(_BYTE *)(v175 + v173) = 0;
              v177 = v172 + v241[0].m128i_i64[0];
              *(__m128i *)v177 = v176;
              *(_QWORD *)(v177 + 14) = 0x2F2F020120090229LL;
            }
            else
            {
              src = nullptr;
              v243 = 0;
              sub_69CDC0(*(_DWORD *)(v3 + 940), (char **)&src, *((_QWORD *)v100 + 1));
              sub_35A910(v241[0].m128i_i64);
              v130 = src;
              if ( src )
              {
LABEL_315:
                *(_QWORD *)&v243 = 0;
                qfree(v130);
              }
            }
            goto LABEL_196;
          default:
LABEL_195:
            sub_35A910(v241[0].m128i_i64);
            goto LABEL_196;
        }
      }
      while ( 1 )
      {
        v109 = v241[0].m128i_i64[1];
        if ( v241[0].m128i_i64[1] )
        {
          v106 = v241[0].m128i_i64[1] + 1;
          v107 = v241[0].m128i_i64[1] + 2;
          v108 = v241[0].m128i_i64[0];
          v109 = v241[0].m128i_i64[1] - 1;
          if ( v241[1].m128i_i64[0] < (unsigned __int64)(v241[0].m128i_i64[1] + 2) )
            goto LABEL_164;
        }
        else
        {
          v108 = v241[0].m128i_i64[0];
          v107 = 3;
          v106 = 2;
          if ( v241[1].m128i_i64[0] < 3uLL )
          {
LABEL_164:
            v231 = v106;
            v224 = v105;
            v205 = (void *)v107;
            v241[0].m128i_i64[0] = qvector_reserve(v241, v108, v107, 1);
            v106 = v231;
            v108 = v241[0].m128i_i64[0];
            v105 = v224;
            v107 = (__int64)v205;
          }
        }
        v241[0].m128i_i64[1] = v107;
        *(_BYTE *)(v108 + v106) = 0;
        *(_WORD *)(v241[0].m128i_i64[0] + v109) = 8224;
        if ( !--v105 )
          goto LABEL_169;
      }
    }
  }
  v48 = 0;
LABEL_167:
  if ( v239 )
  {
    *(_QWORD *)&v240 = 0;
    qfree(v239);
  }
  return v48;
}
