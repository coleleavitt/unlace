__int64 __fastcall sub_483780(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  _DWORD *v9; // r13
  _DWORD *v10; // r12
  unsigned __int8 v11; // al
  char v12; // r8
  unsigned int v13; // ebp
  unsigned int v14; // r15d
  char v15; // al
  char v16; // al
  unsigned int v17; // ebp
  unsigned int v18; // r14d
  void *v19; // rbp
  char v20; // al
  void *v21; // rbp
  _DWORD *v22; // r12
  _DWORD *v23; // rax
  unsigned __int8 v24; // al
  char v25; // r8
  unsigned int v26; // ebp
  unsigned int v27; // r15d
  char v28; // al
  char v29; // al
  unsigned int v30; // ebp
  unsigned int v31; // r14d
  void *v32; // rbp
  char v33; // al
  _DWORD *v34; // rax
  unsigned __int8 v35; // al
  char v36; // r8
  unsigned int v37; // ebp
  unsigned int v38; // r15d
  char v39; // al
  char v40; // al
  unsigned int v41; // ebp
  unsigned int v42; // r14d
  void *v43; // rbp
  char v44; // al
  bool v45; // cc
  void *v46; // rbp
  __m128d v47; // xmm0
  _DWORD *v48; // rbp
  unsigned __int8 v49; // r12
  unsigned __int8 v50; // al
  unsigned int v51; // r15d
  unsigned __int8 v52; // al
  char v53; // al
  unsigned int v54; // r14d
  unsigned int v55; // r15d
  void *v56; // rbp
  unsigned __int8 v57; // al
  void *v58; // rbp
  _DWORD *v59; // rbp
  _DWORD *v60; // r14
  unsigned __int8 v61; // r12
  unsigned __int8 v62; // al
  unsigned int v63; // r15d
  unsigned __int8 v64; // al
  char v65; // al
  unsigned int v66; // r14d
  unsigned int v67; // r15d
  void *v68; // rbp
  unsigned __int8 v69; // al
  void *v70; // rbp
  int v71; // r9d
  _DWORD *v72; // rax
  int v73; // eax
  int v74; // eax
  void *v75; // rbp
  _DWORD *v76; // rax
  _DWORD *v77; // rbp
  _DWORD *v78; // r12
  unsigned __int8 v79; // r14
  unsigned __int8 v80; // al
  unsigned __int8 v81; // r8
  unsigned int v82; // r15d
  int v83; // r9d
  char v84; // al
  unsigned int v85; // r14d
  unsigned int v86; // r9d
  void *v87; // rdi
  _DWORD *v88; // rbp
  _DWORD *v89; // r12
  unsigned __int8 v90; // r14
  unsigned __int8 v91; // al
  unsigned __int8 v92; // r8
  unsigned int v93; // r15d
  int v94; // r9d
  char v95; // al
  unsigned int v96; // r14d
  unsigned int v97; // r9d
  void *v98; // rdi
  void *v99; // rbp
  _DWORD *v100; // rax
  char *v101; // rdi
  __m128i *v102; // rcx
  void *v103; // rbp
  __m128i v104; // xmm0
  char *v105; // rdx
  __int64 v106; // rax
  void *v107; // rbx
  void *v108; // rbx
  __int64 v109; // r15
  __int64 *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rbx
  _DWORD *v113; // r15
  _DWORD *v114; // r12
  unsigned __int8 v115; // bp
  unsigned __int8 v116; // al
  unsigned int v117; // ebx
  unsigned int v118; // r13d
  unsigned __int8 v119; // al
  char v120; // al
  unsigned int v121; // r14d
  unsigned int v122; // r13d
  unsigned __int8 v123; // al
  __int64 v124; // rcx
  _DWORD *v125; // r12
  unsigned __int8 v126; // bp
  unsigned __int8 v127; // al
  unsigned int v128; // r13d
  unsigned int v129; // r14d
  unsigned __int8 v130; // al
  char v131; // al
  unsigned int v132; // r13d
  void *v133; // r12
  unsigned __int8 v134; // al
  void *v135; // r12
  __int64 *v136; // rax
  char *v137; // rcx
  __int64 v138; // rdx
  __m128i *v139; // rdx
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rcx
  _DWORD *v143; // r12
  _DWORD *v144; // r14
  unsigned __int8 v145; // bp
  unsigned __int8 v146; // al
  unsigned int v147; // r14d
  unsigned __int8 v148; // al
  char v149; // al
  unsigned int v150; // r14d
  void *v151; // r12
  unsigned __int8 v152; // al
  void *v153; // r12
  __int64 v154; // r12
  __int64 *v155; // rax
  _DWORD *v156; // r15
  unsigned __int8 v157; // bp
  unsigned __int8 v158; // al
  unsigned int v159; // r14d
  unsigned __int8 v160; // al
  char v161; // al
  unsigned int v162; // r14d
  void *v163; // r14
  unsigned __int8 v164; // al
  void *v165; // r14
  int v166; // eax
  int v167; // eax
  __int64 v168; // rdx
  __m128i v169; // xmm0
  __int64 v170; // rdx
  int v171; // eax
  int v172; // eax
  int v173; // eax
  int v174; // eax
  int v175; // eax
  int v176; // eax
  int v177; // eax
  void *v178; // [rsp+0h] [rbp-158h]
  __int64 *v179; // [rsp+8h] [rbp-150h]
  unsigned __int8 v180; // [rsp+18h] [rbp-140h]
  char v181; // [rsp+18h] [rbp-140h]
  char v182; // [rsp+18h] [rbp-140h]
  unsigned __int8 v183; // [rsp+18h] [rbp-140h]
  char v184; // [rsp+18h] [rbp-140h]
  unsigned __int8 v185; // [rsp+18h] [rbp-140h]
  char v186; // [rsp+18h] [rbp-140h]
  char v187; // [rsp+18h] [rbp-140h]
  _DWORD *v188; // [rsp+18h] [rbp-140h]
  _DWORD *v189; // [rsp+18h] [rbp-140h]
  char v190; // [rsp+18h] [rbp-140h]
  int v191; // [rsp+18h] [rbp-140h]
  unsigned int v192; // [rsp+18h] [rbp-140h]
  int v193; // [rsp+18h] [rbp-140h]
  unsigned int v194; // [rsp+18h] [rbp-140h]
  __int64 i; // [rsp+28h] [rbp-130h]
  unsigned int v197; // [rsp+28h] [rbp-130h]
  __int64 v198; // [rsp+30h] [rbp-128h]
  char *v199; // [rsp+38h] [rbp-120h]
  _DWORD *v200; // [rsp+38h] [rbp-120h]
  _DWORD *v201; // [rsp+38h] [rbp-120h]
  _DWORD *v202; // [rsp+40h] [rbp-118h]
  _DWORD *v203; // [rsp+40h] [rbp-118h]
  char *v204; // [rsp+40h] [rbp-118h]
  unsigned __int8 v205; // [rsp+40h] [rbp-118h]
  unsigned __int8 v206; // [rsp+40h] [rbp-118h]
  unsigned int v207; // [rsp+40h] [rbp-118h]
  __int64 v208; // [rsp+48h] [rbp-110h]
  _DWORD *v209; // [rsp+48h] [rbp-110h]
  unsigned int v210; // [rsp+48h] [rbp-110h]
  _DWORD **v211; // [rsp+58h] [rbp-100h]
  __int64 *v212; // [rsp+58h] [rbp-100h]
  unsigned int v213; // [rsp+58h] [rbp-100h]
  unsigned int v214; // [rsp+58h] [rbp-100h]
  __int64 v215; // [rsp+58h] [rbp-100h]
  unsigned int v216; // [rsp+60h] [rbp-F8h]
  unsigned int v217; // [rsp+60h] [rbp-F8h]
  __int64 v218; // [rsp+60h] [rbp-F8h]
  __int64 v219; // [rsp+60h] [rbp-F8h]
  __int64 v221; // [rsp+68h] [rbp-F0h]
  int v222[2]; // [rsp+68h] [rbp-F0h]
  __m128 v223; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v224; // [rsp+80h] [rbp-D8h]
  int v225[2]; // [rsp+88h] [rbp-D0h]
  int v226[2]; // [rsp+90h] [rbp-C8h] BYREF
  int v227[2]; // [rsp+98h] [rbp-C0h]
  __int64 v228; // [rsp+A0h] [rbp-B8h]
  __int64 v229; // [rsp+A8h] [rbp-B0h]
  char v230; // [rsp+BCh] [rbp-9Ch] BYREF
  char v231; // [rsp+BDh] [rbp-9Bh] BYREF
  char v232; // [rsp+BEh] [rbp-9Ah] BYREF
  char v233; // [rsp+BFh] [rbp-99h] BYREF
  __m128i v234; // [rsp+C0h] [rbp-98h] BYREF
  __m128i si128; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v236; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v237; // [rsp+E8h] [rbp-70h]
  __int64 v238; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v239; // [rsp+F8h] [rbp-60h]
  __int64 v240; // [rsp+100h] [rbp-58h] BYREF
  __int64 v241; // [rsp+108h] [rbp-50h]
  __int64 v242; // [rsp+110h] [rbp-48h] BYREF
  __int64 v243; // [rsp+118h] [rbp-40h]

  result = a2 - (_QWORD)a1;
  *(_QWORD *)v225 = a2;
  *(_QWORD *)v227 = a4;
  *(_QWORD *)v226 = a5;
  if ( a2 - (__int64)a1 <= 128 )
    return result;
  v179 = &v236;
  v223 = _mm_loadh_ps((const double *)v226);
  while ( 1 )
  {
    v6 = result;
    v7 = result >> 4;
    v8 = v6 >> 3;
    if ( !a3 )
      break;
    --a3;
    si128 = _mm_load_si128((const __m128i *)&v223);
    v9 = (_DWORD *)a1->m128i_i64[1];
    v10 = (_DWORD *)a1->m128i_i64[v7];
    v211 = (_DWORD **)a1 + v7;
    v199 = &a1->m128i_i8[8];
    v236 = 0;
    v237 = 0;
    v238 = 1;
    v239 = 0;
    v240 = 0;
    v241 = 0;
    v242 = 1;
    v243 = 0;
    v180 = sub_1666AE0(&si128, v9, v179, &v232);
    v11 = sub_1666AE0(&si128, v10, &v240, &v231);
    v12 = v180;
    if ( (v11 & v180) == 0 )
    {
      if ( v180 != v11 )
        goto LABEL_33;
      v13 = v9[6];
      if ( v13 )
      {
        v14 = 0;
        do
        {
          v15 = sub_1666AE0(&si128, *(_QWORD *)&v9[2 * v14++ + 8], v179, &v233);
          v12 = v15;
          v16 = (v14 < v13) & (v15 ^ 1);
        }
        while ( v16 );
        v17 = v10[6];
        if ( !v17 )
          goto LABEL_32;
      }
      else
      {
        v17 = v10[6];
        v12 = 0;
        if ( !v17 )
          goto LABEL_153;
      }
      v18 = 0;
      do
      {
        v181 = v12;
        v16 = sub_1666AE0(&si128, *(_QWORD *)&v10[2 * v18++ + 8], &v240, &v234);
        v12 = v181;
      }
      while ( v16 != 1 && v18 < v17 );
      if ( !v181 || !v16 )
      {
LABEL_32:
        if ( v16 != v12 )
        {
LABEL_33:
          v19 = qword_1C7F2C0;
          goto LABEL_18;
        }
LABEL_153:
        v12 = *v9 < *v10;
        v19 = qword_1C7F2C0;
        goto LABEL_18;
      }
    }
    v19 = qword_1C7F2C0;
    if ( (v238 & 0x100000000LL) != 0 || (_DWORD)v238 != 1 || (v242 & 0x100000000LL) != 0 || (_DWORD)v242 != 1 )
    {
      v20 = sub_1848D40(qword_1C7F2C0, v179, &v240);
      v19 = qword_1C7F2C0;
      v12 = v20;
    }
    else if ( (v236 & 0x100000000LL) != 0 || (v240 & 0x100000000LL) != 0 )
    {
      v175 = sub_182C7B0(qword_1C7F2C0, v179, &v240);
      v19 = qword_1C7F2C0;
      v12 = v175 < 0;
    }
    else
    {
      v12 = (int)v236 < (int)v240;
    }
LABEL_18:
    v182 = v12;
    sub_182CBA0(v19, &v240);
    sub_182CBA0(v19, &v242);
    v21 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v179);
    sub_182CBA0(v21, &v238);
    v22 = *(_DWORD **)(*(_QWORD *)v225 - 8LL);
    if ( !v182 )
    {
      v236 = 0;
      v237 = 0;
      v238 = 1;
      v34 = (_DWORD *)a1->m128i_i64[1];
      v239 = 0;
      v203 = v34;
      v240 = 0;
      v241 = 0;
      v242 = 1;
      v243 = 0;
      v185 = sub_1666AE0(&si128, v34, v179, &v232);
      v35 = sub_1666AE0(&si128, v22, &v240, &v231);
      v36 = v185;
      if ( (v35 & v185) == 0 )
      {
        if ( v185 != v35 )
          goto LABEL_50;
        v37 = v203[6];
        if ( v37 )
        {
          v38 = 0;
          do
          {
            v39 = sub_1666AE0(&si128, *(_QWORD *)&v203[2 * v38++ + 8], v179, &v233);
            v36 = v39;
            v40 = (v38 < v37) & (v39 ^ 1);
          }
          while ( v40 );
          v41 = v22[6];
          if ( v41 )
            goto LABEL_40;
LABEL_154:
          if ( v36 == v40 )
          {
LABEL_155:
            v43 = qword_1C7F2C0;
            v36 = *v203 < *v22;
            goto LABEL_51;
          }
LABEL_50:
          v43 = qword_1C7F2C0;
LABEL_51:
          v187 = v36;
          sub_182CBA0(v43, &v240);
          sub_182CBA0(v43, &v242);
          v46 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v179);
          sub_182CBA0(v46, &v238);
          if ( !v187 )
          {
            v77 = *(_DWORD **)(*(_QWORD *)v225 - 8LL);
            v78 = *v211;
            v236 = 0;
            v237 = 0;
            v238 = 1;
            v239 = 0;
            v240 = 0;
            v241 = 0;
            v242 = 1;
            v243 = 0;
            v79 = sub_1666AE0(&si128, v78, v179, &v232);
            v80 = sub_1666AE0(&si128, v77, &v240, &v231);
            v81 = v80 & v79;
            if ( (v80 & v79) != 0 )
            {
LABEL_158:
              v87 = qword_1C7F2C0;
              if ( (v238 & 0x100000000LL) == 0 && (_DWORD)v238 == 1 && (v242 & 0x100000000LL) == 0 && (_DWORD)v242 == 1 )
              {
                if ( (v236 & 0x100000000LL) != 0 || (v240 & 0x100000000LL) != 0 )
                {
                  v173 = sub_182C7B0(qword_1C7F2C0, v179, &v240);
                  v87 = qword_1C7F2C0;
                  v79 = v173 < 0;
                }
                else
                {
                  v79 = (int)v236 < (int)v240;
                }
                goto LABEL_161;
              }
              v79 = sub_1848D40(qword_1C7F2C0, v179, &v240);
            }
            else if ( v79 == v80 )
            {
              v82 = v78[6];
              if ( v82 )
              {
                v83 = 0;
                do
                {
                  v191 = v83;
                  v81 = sub_1666AE0(&si128, *(_QWORD *)&v78[2 * v83 + 8], v179, &v233);
                  v83 = v191 + 1;
                  v84 = (v191 + 1 < v82) & (v81 ^ 1);
                }
                while ( v84 );
                v85 = v77[6];
                if ( v85 )
                  goto LABEL_122;
LABEL_126:
                if ( v84 != v81 )
                {
                  v87 = qword_1C7F2C0;
                  v79 = v81;
LABEL_161:
                  sub_182CBA0(v87, &v240);
                  sub_182CBA0(v87, &v242);
                  v99 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v179);
                  sub_182CBA0(v99, &v238);
                  v100 = (_DWORD *)a1->m128i_i64[0];
                  if ( v79 )
                  {
                    v101 = *(char **)v225;
                    v102 = a1;
                    a1->m128i_i64[0] = *(_QWORD *)(*(_QWORD *)v225 - 8LL);
                    *((_QWORD *)v101 - 1) = v100;
                  }
                  else
                  {
                    v102 = a1;
                    a1->m128i_i64[0] = (__int64)*v211;
                    *v211 = v100;
                  }
                  v188 = (_DWORD *)v102->m128i_i64[0];
                  goto LABEL_53;
                }
              }
              else
              {
                v85 = v77[6];
                if ( v85 )
                {
LABEL_122:
                  v86 = 0;
                  while ( 1 )
                  {
                    v205 = v81;
                    v192 = v86;
                    v84 = sub_1666AE0(&si128, *(_QWORD *)&v77[2 * v86 + 8], &v240, &v234);
                    v81 = v205;
                    v86 = v192 + 1;
                    if ( v84 == 1 )
                      break;
                    if ( v86 >= v85 )
                    {
                      if ( !v84 )
                        goto LABEL_126;
                      break;
                    }
                  }
                  if ( v205 )
                    goto LABEL_158;
                  goto LABEL_126;
                }
              }
              v87 = qword_1C7F2C0;
              v79 = *v78 < *v77;
              goto LABEL_161;
            }
            v87 = qword_1C7F2C0;
            goto LABEL_161;
          }
          v47 = (__m128d)_mm_loadu_si128(a1);
          v188 = (_DWORD *)a1->m128i_i64[1];
          *(__m128d *)a1 = _mm_shuffle_pd(v47, v47, 1);
          goto LABEL_53;
        }
        v41 = v22[6];
        v36 = 0;
        if ( !v41 )
          goto LABEL_155;
LABEL_40:
        v42 = 0;
        do
        {
          v186 = v36;
          v40 = sub_1666AE0(&si128, *(_QWORD *)&v22[2 * v42++ + 8], &v240, &v234);
          v36 = v186;
        }
        while ( v40 != 1 && v42 < v41 );
        if ( !v186 || !v40 )
          goto LABEL_154;
      }
      v43 = qword_1C7F2C0;
      if ( (v238 & 0x100000000LL) != 0 || (_DWORD)v238 != 1 || (v242 & 0x100000000LL) != 0 || (_DWORD)v242 != 1 )
      {
        v44 = sub_1848D40(qword_1C7F2C0, v179, &v240);
        v43 = qword_1C7F2C0;
        v36 = v44;
      }
      else if ( (v236 & 0x100000000LL) != 0 || (v240 & 0x100000000LL) != 0 )
      {
        v177 = sub_182C7B0(qword_1C7F2C0, v179, &v240);
        v43 = qword_1C7F2C0;
        v36 = v177 < 0;
      }
      else
      {
        v36 = (int)v236 < (int)v240;
      }
      goto LABEL_51;
    }
    v23 = *v211;
    v236 = 0;
    v237 = 0;
    v202 = v23;
    v238 = 1;
    v239 = 0;
    v240 = 0;
    v241 = 0;
    v242 = 1;
    v243 = 0;
    v183 = sub_1666AE0(&si128, v23, v179, &v232);
    v24 = sub_1666AE0(&si128, v22, &v240, &v231);
    v25 = v183;
    if ( (v24 & v183) != 0 )
    {
LABEL_30:
      v32 = qword_1C7F2C0;
      if ( (v238 & 0x100000000LL) != 0 || (_DWORD)v238 != 1 || (v242 & 0x100000000LL) != 0 || (_DWORD)v242 != 1 )
      {
        v33 = sub_1848D40(qword_1C7F2C0, v179, &v240);
        v32 = qword_1C7F2C0;
        v25 = v33;
      }
      else if ( (v236 & 0x100000000LL) != 0 || (v240 & 0x100000000LL) != 0 )
      {
        v176 = sub_182C7B0(qword_1C7F2C0, v179, &v240);
        v32 = qword_1C7F2C0;
        v25 = v176 < 0;
      }
      else
      {
        v25 = (int)v236 < (int)v240;
      }
      goto LABEL_114;
    }
    if ( v183 != v24 )
      goto LABEL_113;
    v26 = v202[6];
    if ( v26 )
    {
      v27 = 0;
      do
      {
        v28 = sub_1666AE0(&si128, *(_QWORD *)&v202[2 * v27++ + 8], v179, &v233);
        v25 = v28;
        v29 = (v27 < v26) & (v28 ^ 1);
      }
      while ( v29 );
      v30 = v22[6];
      if ( !v30 )
        goto LABEL_156;
    }
    else
    {
      v30 = v22[6];
      v25 = 0;
      if ( !v30 )
      {
LABEL_157:
        v32 = qword_1C7F2C0;
        v25 = *v202 < *v22;
        goto LABEL_114;
      }
    }
    v31 = 0;
    while ( 1 )
    {
      v184 = v25;
      v29 = sub_1666AE0(&si128, *(_QWORD *)&v22[2 * v31++ + 8], &v240, &v234);
      v25 = v184;
      if ( v29 == 1 )
        break;
      if ( v31 >= v30 )
      {
        if ( !v29 )
          goto LABEL_156;
        break;
      }
    }
    if ( v184 )
      goto LABEL_30;
LABEL_156:
    if ( v25 == v29 )
      goto LABEL_157;
LABEL_113:
    v32 = qword_1C7F2C0;
LABEL_114:
    v190 = v25;
    sub_182CBA0(v32, &v240);
    sub_182CBA0(v32, &v242);
    v75 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v179);
    sub_182CBA0(v75, &v238);
    if ( !v190 )
    {
      v88 = *(_DWORD **)(*(_QWORD *)v225 - 8LL);
      v236 = 0;
      v237 = 0;
      v238 = 1;
      v89 = (_DWORD *)a1->m128i_i64[1];
      v239 = 0;
      v240 = 0;
      v241 = 0;
      v242 = 1;
      v243 = 0;
      v90 = sub_1666AE0(&si128, v89, v179, &v232);
      v91 = sub_1666AE0(&si128, v88, &v240, &v231);
      v92 = v91 & v90;
      if ( (v91 & v90) != 0 )
      {
LABEL_164:
        v98 = qword_1C7F2C0;
        if ( (v238 & 0x100000000LL) == 0 && (_DWORD)v238 == 1 && (v242 & 0x100000000LL) == 0 && (_DWORD)v242 == 1 )
        {
          if ( (v236 & 0x100000000LL) != 0 || (v240 & 0x100000000LL) != 0 )
          {
            v174 = sub_182C7B0(qword_1C7F2C0, v179, &v240);
            v98 = qword_1C7F2C0;
            v90 = v174 < 0;
          }
          else
          {
            v90 = (int)v236 < (int)v240;
          }
          goto LABEL_167;
        }
        v90 = sub_1848D40(qword_1C7F2C0, v179, &v240);
      }
      else if ( v90 == v91 )
      {
        v93 = v89[6];
        if ( v93 )
        {
          v94 = 0;
          do
          {
            v193 = v94;
            v92 = sub_1666AE0(&si128, *(_QWORD *)&v89[2 * v94 + 8], v179, &v233);
            v94 = v193 + 1;
            v95 = (v193 + 1 < v93) & (v92 ^ 1);
          }
          while ( v95 );
          v96 = v88[6];
          if ( v96 )
            goto LABEL_134;
LABEL_138:
          if ( v92 != v95 )
          {
            v98 = qword_1C7F2C0;
            v90 = v92;
            goto LABEL_167;
          }
        }
        else
        {
          v96 = v88[6];
          if ( v96 )
          {
LABEL_134:
            v97 = 0;
            while ( 1 )
            {
              v206 = v92;
              v194 = v97;
              v95 = sub_1666AE0(&si128, *(_QWORD *)&v88[2 * v97 + 8], &v240, &v234);
              v92 = v206;
              v97 = v194 + 1;
              if ( v95 == 1 )
                break;
              if ( v97 >= v96 )
              {
                if ( !v95 )
                  goto LABEL_138;
                break;
              }
            }
            if ( v206 )
              goto LABEL_164;
            goto LABEL_138;
          }
        }
        v98 = qword_1C7F2C0;
        v90 = *v89 < *v88;
LABEL_167:
        sub_182CBA0(v98, &v240);
        sub_182CBA0(v98, &v242);
        v103 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v179);
        sub_182CBA0(v103, &v238);
        v104 = _mm_loadl_epi64(a1);
        if ( v90 )
        {
          v105 = *(char **)v225;
          a1->m128i_i64[0] = *(_QWORD *)(*(_QWORD *)v225 - 8LL);
          *((_QWORD *)v105 - 1) = v104.m128i_i64[0];
          v188 = (_DWORD *)a1->m128i_i64[0];
        }
        else
        {
          v188 = (_DWORD *)a1->m128i_i64[1];
          *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v188, v104);
        }
        goto LABEL_53;
      }
      v98 = qword_1C7F2C0;
      goto LABEL_167;
    }
    v76 = (_DWORD *)a1->m128i_i64[0];
    a1->m128i_i64[0] = (__int64)*v211;
    *v211 = v76;
    v188 = (_DWORD *)a1->m128i_i64[0];
LABEL_53:
    v204 = *(char **)v225;
    si128 = _mm_load_si128((const __m128i *)&v223);
    while ( 1 )
    {
LABEL_54:
      v48 = *(_DWORD **)v199;
      v236 = 0;
      v237 = 0;
      v238 = 1;
      v239 = 0;
      v240 = 0;
      v241 = 0;
      v242 = 1;
      v243 = 0;
      v49 = sub_1666AE0(&si128, v48, v179, &v232);
      v50 = sub_1666AE0(&si128, v188, &v240, &v231);
      if ( (v50 & v49) == 0 )
      {
        if ( v49 != v50 )
          goto LABEL_70;
        v216 = v48[6];
        if ( v216 )
        {
          v51 = 0;
          do
          {
            v52 = sub_1666AE0(&si128, *(_QWORD *)&v48[2 * v51++ + 8], v179, &v233);
            v49 = v52;
            v53 = (v51 < v216) & (v52 ^ 1);
          }
          while ( v53 );
          v54 = v188[6];
          if ( !v54 )
            goto LABEL_71;
        }
        else
        {
          v49 = 0;
          v54 = v188[6];
          if ( !v54 )
            goto LABEL_72;
        }
        v55 = 0;
        do
          v53 = sub_1666AE0(&si128, *(_QWORD *)&v188[2 * v55++ + 8], &v240, &v234);
        while ( v53 != 1 && v55 < v54 );
        if ( !v49 || !v53 )
        {
LABEL_71:
          if ( v53 != v49 )
          {
LABEL_70:
            v56 = qword_1C7F2C0;
            goto LABEL_68;
          }
LABEL_72:
          v49 = *v48 < *v188;
          v56 = qword_1C7F2C0;
          goto LABEL_68;
        }
      }
      v56 = qword_1C7F2C0;
      if ( (v238 & 0x100000000LL) != 0 || (_DWORD)v238 != 1 || (v242 & 0x100000000LL) != 0 || (_DWORD)v242 != 1 )
      {
        v57 = sub_1848D40(qword_1C7F2C0, v179, &v240);
        v56 = qword_1C7F2C0;
        v49 = v57;
      }
      else if ( (v236 & 0x100000000LL) != 0 || (v240 & 0x100000000LL) != 0 )
      {
        v74 = sub_182C7B0(qword_1C7F2C0, v179, &v240);
        v56 = qword_1C7F2C0;
        v49 = v74 < 0;
      }
      else
      {
        v49 = (int)v236 < (int)v240;
      }
LABEL_68:
      sub_182CBA0(v56, &v240);
      sub_182CBA0(v56, &v242);
      v58 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v179);
      sub_182CBA0(v58, &v238);
      v59 = (_DWORD *)a1->m128i_i64[0];
      v188 = (_DWORD *)a1->m128i_i64[0];
      if ( !v49 )
        break;
      v199 += 8;
    }
    for ( v204 -= 8; ; v204 -= 8 )
    {
      v60 = *(_DWORD **)v204;
      v236 = 0;
      v237 = 0;
      v189 = v60;
      v238 = 1;
      v239 = 0;
      v240 = 0;
      v241 = 0;
      v242 = 1;
      v243 = 0;
      v61 = sub_1666AE0(&si128, v59, v179, &v232);
      v62 = sub_1666AE0(&si128, v60, &v240, &v231);
      if ( (v62 & v61) == 0 )
      {
        if ( v61 != v62 )
          goto LABEL_90;
        v217 = v59[6];
        if ( v217 )
        {
          v63 = 0;
          do
          {
            v64 = sub_1666AE0(&si128, *(_QWORD *)&v59[2 * v63++ + 8], v179, &v233);
            v61 = v64;
            v65 = (v63 < v217) & (v64 ^ 1);
          }
          while ( v65 );
          v66 = v60[6];
          if ( !v66 )
            goto LABEL_91;
        }
        else
        {
          v61 = 0;
          v66 = v60[6];
          if ( !v66 )
            goto LABEL_92;
        }
        v67 = 0;
        while ( 1 )
        {
          v65 = sub_1666AE0(&si128, *(_QWORD *)&v189[2 * v67++ + 8], &v240, &v234);
          if ( v65 == 1 )
            break;
          if ( v67 >= v66 )
          {
            if ( !v65 )
              goto LABEL_91;
            break;
          }
        }
        if ( !v61 )
        {
LABEL_91:
          if ( v61 != v65 )
          {
LABEL_90:
            v68 = qword_1C7F2C0;
            goto LABEL_88;
          }
LABEL_92:
          v61 = *v59 < *v189;
          v68 = qword_1C7F2C0;
          goto LABEL_88;
        }
      }
      v68 = qword_1C7F2C0;
      if ( (v238 & 0x100000000LL) != 0 || (_DWORD)v238 != 1 || (v242 & 0x100000000LL) != 0 || (_DWORD)v242 != 1 )
      {
        v69 = sub_1848D40(qword_1C7F2C0, v179, &v240);
        v68 = qword_1C7F2C0;
        v61 = v69;
      }
      else if ( (v236 & 0x100000000LL) != 0 || (v240 & 0x100000000LL) != 0 )
      {
        v73 = sub_182C7B0(qword_1C7F2C0, v179, &v240);
        v68 = qword_1C7F2C0;
        v61 = v73 < 0;
      }
      else
      {
        v61 = (int)v236 < (int)v240;
      }
LABEL_88:
      sub_182CBA0(v68, &v240);
      sub_182CBA0(v68, &v242);
      v70 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v179);
      sub_182CBA0(v70, &v238);
      if ( !v61 )
        break;
      v59 = (_DWORD *)a1->m128i_i64[0];
    }
    if ( v199 < v204 )
    {
      v72 = *(_DWORD **)v199;
      *(_QWORD *)v199 = *(_QWORD *)v204;
      v199 += 8;
      *(_QWORD *)v204 = v72;
      v188 = (_DWORD *)a1->m128i_i64[0];
      goto LABEL_54;
    }
    sub_483780((int)v199, v225[0], a3, v227[0], v226[0], v71, v178, v179);
    result = v199 - (char *)a1;
    if ( v199 - (char *)a1 <= 128 )
      return result;
    *(_QWORD *)v225 = v199;
  }
  v224 = v7 - 1;
  v221 = (v8 - 1) >> 1;
  v218 = v7 - 1;
  LOBYTE(v228) = (v8 & 1) == 0;
  while ( 2 )
  {
    v106 = v218;
    v200 = (_DWORD *)a1->m128i_i64[v218];
    v234.m128i_i64[0] = *(_QWORD *)v227;
    v234.m128i_i64[1] = *(_QWORD *)v226;
    if ( v218 < v221 )
    {
      for ( i = v218; ; v106 = i )
      {
        v111 = v106 + 1;
        v112 = 2 * v111;
        v111 *= 16;
        v198 = v112;
        v113 = *(_DWORD **)((char *)a1->m128i_i64 + v111);
        v114 = *(_DWORD **)((char *)&a1->m128i_i64[-1] + v111);
        v236 = 0;
        v237 = 0;
        v238 = 1;
        v239 = 0;
        v240 = 0;
        v241 = 0;
        v242 = 1;
        v243 = 0;
        v115 = sub_1666AE0(&v234, v113, v179, &v232);
        v116 = sub_1666AE0(&v234, v114, &v240, &v231);
        if ( (v116 & v115) == 0 )
        {
          if ( v115 != v116 )
          {
            v107 = qword_1C7F2C0;
            goto LABEL_173;
          }
          v117 = v113[6];
          if ( v117 )
          {
            v118 = 0;
            do
            {
              v119 = sub_1666AE0(&v234, *(_QWORD *)&v113[2 * v118++ + 8], v179, &v233);
              v115 = v119;
              v120 = (v118 < v117) & (v119 ^ 1);
            }
            while ( v120 );
            v121 = v114[6];
            if ( !v121 )
              goto LABEL_189;
          }
          else
          {
            v121 = v114[6];
            v115 = 0;
            if ( !v121 )
            {
              v107 = qword_1C7F2C0;
LABEL_190:
              v115 = *v113 < *v114;
              goto LABEL_173;
            }
          }
          v122 = 0;
          while ( 1 )
          {
            v120 = sub_1666AE0(&v234, *(_QWORD *)&v114[2 * v122++ + 8], &v240, &si128);
            if ( v120 == 1 )
              break;
            if ( v122 >= v121 )
            {
              if ( !v120 )
                goto LABEL_189;
              break;
            }
          }
          if ( !v115 )
          {
LABEL_189:
            v107 = qword_1C7F2C0;
            if ( v115 != v120 )
              goto LABEL_173;
            goto LABEL_190;
          }
        }
        v107 = qword_1C7F2C0;
        if ( (v238 & 0x100000000LL) != 0 || (_DWORD)v238 != 1 || (v242 & 0x100000000LL) != 0 || (_DWORD)v242 != 1 )
        {
          v123 = sub_1848D40(qword_1C7F2C0, v179, &v240);
          v107 = qword_1C7F2C0;
          v115 = v123;
        }
        else if ( (v236 & 0x100000000LL) != 0 || (v240 & 0x100000000LL) != 0 )
        {
          v172 = sub_182C7B0(qword_1C7F2C0, v179, &v240);
          v107 = qword_1C7F2C0;
          v115 = v172 < 0;
        }
        else
        {
          v115 = (int)v236 < (int)v240;
        }
LABEL_173:
        sub_182CBA0(v107, &v240);
        sub_182CBA0(v107, &v242);
        v108 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v179);
        sub_182CBA0(v108, &v238);
        v109 = v198 - v115;
        v110 = &a1->m128i_i64[v109];
        a1->m128i_i64[i] = *v110;
        if ( v221 <= v109 )
          goto LABEL_192;
        i = v198 - v115;
      }
    }
    v109 = v218;
    v110 = &a1->m128i_i64[v218];
LABEL_192:
    if ( v224 == v109 && (_BYTE)v228 )
    {
      v170 = 2 * v109 + 2;
      v109 = 2 * v109 + 1;
      *v110 = a1->m128i_i64[v170 - 1];
    }
    v208 = (v109 - 1) >> 1;
    si128 = _mm_load_si128(&v234);
    if ( v218 >= v109 )
    {
      a1->m128i_i64[v109] = (__int64)v200;
      goto LABEL_219;
    }
    v124 = (v109 - 1) >> 1;
    v223.m128_u64[0] = (unsigned __int64)&v230;
    while ( 1 )
    {
      v125 = (_DWORD *)a1->m128i_i64[v124];
      v212 = &a1->m128i_i64[v124];
      v236 = 0;
      v237 = 0;
      v238 = 1;
      v239 = 0;
      v240 = 0;
      v241 = 0;
      v242 = 1;
      v243 = 0;
      v126 = sub_1666AE0(&si128, v125, v179, &v231);
      v127 = sub_1666AE0(&si128, v200, &v240, v223.m128_u64[0]);
      if ( (v127 & v126) == 0 )
      {
        if ( v126 != v127 )
          goto LABEL_214;
        v128 = v125[6];
        if ( v128 )
        {
          v129 = 0;
          do
          {
            v130 = sub_1666AE0(&si128, *(_QWORD *)&v125[2 * v129++ + 8], v179, &v232);
            v126 = v130;
            v131 = (v129 < v128) & (v130 ^ 1);
          }
          while ( v131 );
          v197 = v200[6];
          if ( !v197 )
            goto LABEL_215;
        }
        else
        {
          v126 = 0;
          v197 = v200[6];
          if ( !v197 )
            goto LABEL_216;
        }
        v132 = 0;
        while ( 1 )
        {
          v131 = sub_1666AE0(&si128, *(_QWORD *)&v200[2 * v132++ + 8], &v240, &v233);
          if ( v131 == 1 )
            break;
          if ( v132 >= v197 )
          {
            if ( !v131 )
              goto LABEL_215;
            break;
          }
        }
        if ( !v126 )
        {
LABEL_215:
          if ( v131 != v126 )
          {
LABEL_214:
            v133 = qword_1C7F2C0;
            goto LABEL_211;
          }
LABEL_216:
          v126 = *v125 < *v200;
          v133 = qword_1C7F2C0;
          goto LABEL_211;
        }
      }
      v133 = qword_1C7F2C0;
      if ( (v238 & 0x100000000LL) != 0 || (_DWORD)v238 != 1 || (v242 & 0x100000000LL) != 0 || (_DWORD)v242 != 1 )
      {
        v134 = sub_1848D40(qword_1C7F2C0, v179, &v240);
        v133 = qword_1C7F2C0;
        v126 = v134;
      }
      else if ( (v236 & 0x100000000LL) != 0 || (v240 & 0x100000000LL) != 0 )
      {
        v171 = sub_182C7B0(qword_1C7F2C0, v179, &v240);
        v133 = qword_1C7F2C0;
        v126 = v171 < 0;
      }
      else
      {
        v126 = (int)v236 < (int)v240;
      }
LABEL_211:
      sub_182CBA0(v133, &v240);
      sub_182CBA0(v133, &v242);
      v135 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v179);
      sub_182CBA0(v135, &v238);
      v136 = &a1->m128i_i64[v109];
      if ( !v126 )
        break;
      v109 = v208;
      *v136 = *v212;
      if ( v218 >= v208 )
        goto LABEL_218;
      v208 = (v208 - 1) / 2;
      v124 = (v109 - 1) / 2;
    }
    v212 = &a1->m128i_i64[v109];
LABEL_218:
    *v212 = (__int64)v200;
    if ( v218 )
    {
LABEL_219:
      --v218;
      continue;
    }
    break;
  }
  result = *(_QWORD *)v225 - (_QWORD)a1;
  if ( (__int64)(*(_QWORD *)v225 - (_QWORD)a1) > 8 )
  {
LABEL_235:
    while ( 1 )
    {
      *(_QWORD *)v225 -= 8LL;
      v137 = *(char **)v225;
      v138 = *(_QWORD *)v226;
      v201 = **(_DWORD ***)v225;
      **(_QWORD **)v225 = a1->m128i_i64[0];
      v234.m128i_i64[1] = v138;
      v229 = v137 - (char *)a1;
      v228 = (v137 - (char *)a1) >> 3;
      v234.m128i_i64[0] = *(_QWORD *)v227;
      v224 = (v228 - 1) / 2;
      if ( v137 - (char *)a1 > 16 )
        break;
      v154 = v228 & 1;
      if ( (v228 & 1) == 0 )
      {
        v155 = (__int64 *)a1;
        goto LABEL_290;
      }
LABEL_292:
      result = (__int64)a1;
LABEL_48:
      v45 = v229 <= 8;
      *(_QWORD *)result = v201;
      if ( v45 )
        return result;
    }
    v139 = a1;
    v219 = 0;
    v140 = 0;
    while ( 1 )
    {
      v141 = v140 + 1;
      v142 = 2 * v141;
      v141 *= 16;
      v143 = *(_DWORD **)((char *)v139->m128i_i64 + v141);
      v144 = *(_DWORD **)((char *)&v139->m128i_i64[-1] + v141);
      *(_QWORD *)v222 = v142;
      v236 = 0;
      v209 = v144;
      v237 = 0;
      v238 = 1;
      v239 = 0;
      v240 = 0;
      v241 = 0;
      v242 = 1;
      v243 = 0;
      v145 = sub_1666AE0(&v234, v143, v179, &v232);
      v146 = sub_1666AE0(&v234, v144, &v240, &v231);
      if ( (v146 & v145) == 0 )
      {
        if ( v145 != v146 )
          goto LABEL_253;
        v213 = v143[6];
        if ( v213 )
        {
          v147 = 0;
          do
          {
            v148 = sub_1666AE0(&v234, *(_QWORD *)&v143[2 * v147++ + 8], v179, &v233);
            v145 = v148;
            v149 = (v147 < v213) & (v148 ^ 1);
          }
          while ( v149 );
          v214 = v209[6];
          if ( !v214 )
            goto LABEL_254;
        }
        else
        {
          v145 = 0;
          v214 = v144[6];
          if ( !v214 )
            goto LABEL_255;
        }
        v150 = 0;
        do
          v149 = sub_1666AE0(&v234, *(_QWORD *)&v209[2 * v150++ + 8], &v240, &si128);
        while ( v149 != 1 && v150 < v214 );
        if ( !v145 || !v149 )
        {
LABEL_254:
          if ( v149 != v145 )
          {
LABEL_253:
            v151 = qword_1C7F2C0;
            goto LABEL_251;
          }
LABEL_255:
          v145 = *v143 < *v209;
          v151 = qword_1C7F2C0;
          goto LABEL_251;
        }
      }
      v151 = qword_1C7F2C0;
      if ( (v238 & 0x100000000LL) != 0 || (_DWORD)v238 != 1 || (v242 & 0x100000000LL) != 0 || (_DWORD)v242 != 1 )
      {
        v152 = sub_1848D40(qword_1C7F2C0, v179, &v240);
        v151 = qword_1C7F2C0;
        v145 = v152;
      }
      else if ( (v236 & 0x100000000LL) != 0 || (v240 & 0x100000000LL) != 0 )
      {
        v167 = sub_182C7B0(qword_1C7F2C0, v179, &v240);
        v151 = qword_1C7F2C0;
        v145 = v167 < 0;
      }
      else
      {
        v145 = (int)v236 < (int)v240;
      }
LABEL_251:
      sub_182CBA0(v151, &v240);
      sub_182CBA0(v151, &v242);
      v153 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v179);
      sub_182CBA0(v153, &v238);
      v154 = *(_QWORD *)v222 - v145;
      v155 = &a1->m128i_i64[v154];
      a1->m128i_i64[v219] = *v155;
      if ( v224 <= v154 )
      {
        if ( (v228 & 1) != 0 )
        {
          si128 = _mm_load_si128(&v234);
          v215 = (v154 - 1) / 2;
          if ( v154 )
            goto LABEL_258;
          a1->m128i_i64[0] = (__int64)v201;
          goto LABEL_235;
        }
LABEL_290:
        if ( (v228 - 2) / 2 != v154 )
        {
          si128 = _mm_load_si128(&v234);
          v215 = (v154 - 1) / 2;
          if ( v154 )
            goto LABEL_258;
          goto LABEL_292;
        }
        v168 = 2 * v154 + 2;
        v169 = _mm_load_si128(&v234);
        v154 = 2 * v154 + 1;
        *v155 = a1->m128i_i64[v168 - 1];
        v215 = (v168 >> 1) - 1;
        si128 = v169;
LABEL_258:
        while ( 2 )
        {
          v156 = (_DWORD *)a1->m128i_i64[v215];
          v236 = 0;
          v237 = 0;
          v238 = 1;
          v239 = 0;
          v240 = 0;
          v241 = 0;
          v242 = 1;
          v243 = 0;
          v157 = sub_1666AE0(&si128, v156, v179, &v231);
          v158 = sub_1666AE0(&si128, v201, &v240, v223.m128_u64[0]);
          if ( (v158 & v157) == 0 )
          {
            if ( v157 != v158 )
              goto LABEL_275;
            v210 = v156[6];
            if ( v210 )
            {
              v159 = 0;
              do
              {
                v160 = sub_1666AE0(&si128, *(_QWORD *)&v156[2 * v159++ + 8], v179, &v232);
                v157 = v160;
                v161 = (v159 < v210) & (v160 ^ 1);
              }
              while ( v161 );
              v207 = v201[6];
              if ( v207 )
                goto LABEL_264;
LABEL_276:
              if ( v157 == v161 )
              {
LABEL_277:
                v163 = qword_1C7F2C0;
                v157 = *v156 < *v201;
                goto LABEL_272;
              }
LABEL_275:
              v163 = qword_1C7F2C0;
LABEL_272:
              sub_182CBA0(v163, &v240);
              sub_182CBA0(v163, &v242);
              v165 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v179);
              sub_182CBA0(v165, &v238);
              result = (__int64)&a1->m128i_i64[v154];
              if ( !v157 )
                goto LABEL_48;
              v154 = v215;
              *(_QWORD *)result = a1->m128i_i64[v215];
              if ( !v215 )
              {
                result = (__int64)a1;
                goto LABEL_48;
              }
              v215 = (v215 - 1) / 2;
              continue;
            }
            v157 = 0;
            v207 = v201[6];
            if ( !v207 )
              goto LABEL_277;
LABEL_264:
            v162 = 0;
            do
              v161 = sub_1666AE0(&si128, *(_QWORD *)&v201[2 * v162++ + 8], &v240, &v233);
            while ( v161 != 1 && v162 < v207 );
            if ( !v157 || !v161 )
              goto LABEL_276;
          }
          break;
        }
        v163 = qword_1C7F2C0;
        if ( (v238 & 0x100000000LL) != 0 || (_DWORD)v238 != 1 || (v242 & 0x100000000LL) != 0 || (_DWORD)v242 != 1 )
        {
          v164 = sub_1848D40(qword_1C7F2C0, v179, &v240);
          v163 = qword_1C7F2C0;
          v157 = v164;
        }
        else if ( (v236 & 0x100000000LL) != 0 || (v240 & 0x100000000LL) != 0 )
        {
          v166 = sub_182C7B0(qword_1C7F2C0, v179, &v240);
          v163 = qword_1C7F2C0;
          v157 = v166 < 0;
        }
        else
        {
          v157 = (int)v236 < (int)v240;
        }
        goto LABEL_272;
      }
      v219 = *(_QWORD *)v222 - v145;
      v140 = v219;
      v139 = a1;
    }
  }
  return result;
}

