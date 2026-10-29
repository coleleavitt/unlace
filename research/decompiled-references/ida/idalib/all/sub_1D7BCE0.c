__int64 __fastcall sub_1D7BCE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 *a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // r15
  __int64 *v11; // rbp
  __int64 v12; // rax
  bool v13; // zf
  __m128i v14; // xmm0
  int v15; // eax
  __m128i v16; // xmm7
  __m128i v17; // xmm1
  unsigned __int64 v18; // rsi
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  unsigned __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rbp
  unsigned __int64 v26; // r14
  int v27; // eax
  unsigned __int64 v28; // r15
  char v29; // al
  int v30; // eax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // r15
  void *v34; // rdi
  _QWORD *v35; // rcx
  __int64 v36; // rax
  const __m128i *v37; // roff
  __int64 v38; // rax
  __int64 v39; // rcx
  char v40; // al
  int v41; // eax
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  __int64 v44; // r14
  __int64 *v45; // rcx
  unsigned __int64 v46; // r14
  __m128i v47; // xmm5
  _BYTE *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // r14
  unsigned int v51; // eax
  __int64 *v52; // r14
  char *v53; // rdx
  __m128i v54; // xmm0
  __int64 v55; // rdx
  __int64 v56; // r12
  unsigned __int64 v57; // rbx
  int v58; // eax
  unsigned __int64 v59; // rbp
  char v60; // al
  int v61; // eax
  unsigned __int64 v62; // rax
  __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __int64 v65; // r14
  void *v66; // rdi
  _QWORD *v67; // rcx
  __int64 v68; // rax
  const __m128i *v69; // roff
  __int64 v70; // rax
  __int64 v71; // rbp
  __int64 v72; // rax
  char v73; // cl
  int v74; // eax
  __int64 v75; // rax
  unsigned __int64 v76; // rcx
  __int64 v77; // rsi
  unsigned __int64 v78; // rbx
  __m128i v79; // xmm5
  void *v80; // rdi
  __int64 v81; // rax
  void **v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rdx
  const __m128i *v85; // rdx
  __m128i *v86; // rax
  void *v87; // rbx
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rbx
  char v91; // al
  int v92; // ebp
  int v93; // eax
  __int64 v94; // rdx
  __int64 *v95; // r14
  int v96; // r12d
  unsigned int *i; // rbx
  __int64 v98; // rdx
  __int64 v99; // r13
  __int64 v100; // rcx
  unsigned __int64 v101; // rdx
  __int64 v102; // rax
  int v103; // r15d
  __int64 v104; // rax
  char *v105; // rdi
  char *v106; // rax
  __int64 *v107; // rdx
  __int64 v108; // rax
  __int64 *v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rsi
  unsigned __int64 v112; // rax
  __int64 v113; // rcx
  unsigned __int64 v114; // rbx
  unsigned __int64 v115; // rax
  __int64 result; // rax
  __int64 *v117; // rsi
  unsigned __int64 v118; // rdx
  unsigned int v119; // ebx
  unsigned __int64 v120; // rdx
  unsigned int *v121; // rax
  __int64 v122; // rdi
  __int64 v123; // rax
  unsigned int v124; // eax
  unsigned int v125; // eax
  __int64 *v126; // rax
  __int64 *v127; // rbp
  __int64 v128; // rsi
  __int64 *v129; // r12
  __int64 *v130; // rdi
  const __m128i *v131; // r13
  __int64 v132; // r15
  unsigned __int64 v133; // r15
  __int64 v134; // rax
  __m128i v135; // xmm6
  __m128i *v136; // rax
  const __m128i *v137; // roff
  unsigned int v138; // ebx
  unsigned __int64 v139; // r12
  unsigned __int64 v140; // rax
  __int64 v141; // rcx
  unsigned __int64 v142; // rcx
  __int64 v143; // rdx
  unsigned __int64 v144; // rdx
  _BYTE *v145; // rdx
  unsigned __int64 v146; // rdx
  unsigned __int64 v147; // rax
  __int64 v148; // rdi
  unsigned __int64 v149; // r14
  unsigned int v150; // r12d
  int v151; // ebp
  __int64 *v152; // r13
  __int64 v153; // rdi
  unsigned __int64 v154; // rbp
  __int64 v155; // [rsp+8h] [rbp-530h]
  unsigned __int64 v156; // [rsp+8h] [rbp-530h]
  unsigned __int64 v157; // [rsp+8h] [rbp-530h]
  unsigned __int64 v158; // [rsp+8h] [rbp-530h]
  unsigned __int64 v159; // [rsp+8h] [rbp-530h]
  unsigned int v160; // [rsp+8h] [rbp-530h]
  __int64 *v161; // [rsp+10h] [rbp-528h] BYREF
  void **v162; // [rsp+18h] [rbp-520h]
  __int64 v163; // [rsp+20h] [rbp-518h]
  _BYTE *v164; // [rsp+28h] [rbp-510h]
  __int64 v165; // [rsp+30h] [rbp-508h]
  unsigned int v166; // [rsp+3Ch] [rbp-4FCh]
  __int64 v167; // [rsp+40h] [rbp-4F8h]
  unsigned __int64 v168; // [rsp+48h] [rbp-4F0h]
  __int64 v169; // [rsp+50h] [rbp-4E8h]
  __int64 v170; // [rsp+58h] [rbp-4E0h]
  unsigned int v171; // [rsp+60h] [rbp-4D8h]
  unsigned int v172; // [rsp+64h] [rbp-4D4h]
  __int64 v173; // [rsp+68h] [rbp-4D0h]
  unsigned __int64 v174; // [rsp+70h] [rbp-4C8h]
  void **v175; // [rsp+78h] [rbp-4C0h]
  __int64 v176; // [rsp+80h] [rbp-4B8h]
  unsigned __int64 v177; // [rsp+88h] [rbp-4B0h]
  __int64 v178; // [rsp+90h] [rbp-4A8h]
  __int64 *v179; // [rsp+98h] [rbp-4A0h]
  __m128i v180; // [rsp+A0h] [rbp-498h] BYREF
  void *v181; // [rsp+B8h] [rbp-480h] BYREF
  __m128i v182; // [rsp+C0h] [rbp-478h] BYREF
  __int64 v183; // [rsp+D0h] [rbp-468h]
  __m128i v184; // [rsp+E0h] [rbp-458h]
  __int64 v185; // [rsp+F0h] [rbp-448h]
  __m128i v186; // [rsp+100h] [rbp-438h] BYREF
  __int64 v187; // [rsp+110h] [rbp-428h]
  __m128i v188; // [rsp+120h] [rbp-418h]
  void **v189; // [rsp+130h] [rbp-408h]
  __m128i v190; // [rsp+140h] [rbp-3F8h]
  __int64 v191; // [rsp+150h] [rbp-3E8h]
  __m128i v192; // [rsp+160h] [rbp-3D8h]
  __int64 v193; // [rsp+170h] [rbp-3C8h]
  void *v194; // [rsp+180h] [rbp-3B8h] BYREF
  __int64 v195; // [rsp+188h] [rbp-3B0h]
  __int64 v196; // [rsp+190h] [rbp-3A8h] BYREF
  void *v197; // [rsp+1B0h] [rbp-388h] BYREF
  __int64 v198; // [rsp+1B8h] [rbp-380h]
  char v199; // [rsp+1C0h] [rbp-378h] BYREF
  const __m128i *v200; // [rsp+220h] [rbp-318h] BYREF
  __m128i v201; // [rsp+228h] [rbp-310h]
  __int64 v202; // [rsp+238h] [rbp-300h]
  __int8 v203; // [rsp+240h] [rbp-2F8h]
  __int64 v204; // [rsp+248h] [rbp-2F0h]
  __int64 v205; // [rsp+250h] [rbp-2E8h]
  char v206; // [rsp+260h] [rbp-2D8h]
  void *ptr; // [rsp+268h] [rbp-2D0h]
  __int64 v208; // [rsp+270h] [rbp-2C8h]
  _BYTE v209[128]; // [rsp+278h] [rbp-2C0h] BYREF
  __int64 v210; // [rsp+2F8h] [rbp-240h]
  _QWORD v211[2]; // [rsp+300h] [rbp-238h] BYREF
  __int64 *v212; // [rsp+310h] [rbp-228h]
  __int64 v213; // [rsp+318h] [rbp-220h]
  __int64 v214; // [rsp+320h] [rbp-218h]
  int v215; // [rsp+328h] [rbp-210h]
  __int64 *v216; // [rsp+330h] [rbp-208h]
  __int64 v217; // [rsp+338h] [rbp-200h]

  v169 = a1;
  v170 = a2;
  v176 = a3;
  v173 = a4;
  v177 = a5;
  v174 = a6;
  if ( !a4 )
  {
    v120 = 0;
    v171 = 0;
LABEL_132:
    if ( a9 != 2 )
      return 16 * (unsigned int)(v174 > v120);
    if ( v174 != v171 + 1 )
      return 16 * (unsigned int)(v174 > v120);
    result = 0;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v177 + 8 * v120) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 38 )
      return 16 * (unsigned int)(v174 > v120);
    return result;
  }
  v10 = 0;
  v166 = 0;
  v161 = v211;
  v171 = 0;
  v179 = (__int64 *)&v181;
  v180 = (__m128i)_mm_loadh_ps((const double *)&v161);
LABEL_3:
  v11 = (__int64 *)(v176 + 8 * v10);
  v12 = *(_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_BYTE *)(v12 + 16) == 38;
  v163 = v12;
  if ( v13 )
  {
    v178 = *(_QWORD *)(v12 + 32);
    sub_F1D250((__int64)&v182, v178, 0, 0);
    v214 = 0;
    v217 = 0x200000000LL;
    v211[0] = v169;
    v185 = v183;
    v14 = _mm_load_si128(&v182);
    v212 = a8;
    v187 = v183;
    v15 = *(_DWORD *)(v170 + 20);
    v213 = a7;
    v211[1] = v170;
    v216 = v161 + 8;
    v184 = v14;
    v215 = 0;
    v186 = v14;
    sub_1504FB0(v179, v15 & 0x1FFFFFFF, 0);
    v16 = _mm_load_si128(&v180);
    v17 = _mm_load_si128(&v186);
    v175 = &v197;
    v197 = &v199;
    v189 = &v197;
    v18 = (unsigned __int64)&v194;
    v193 = v187;
    v198 = 0x400000000LL;
    v188 = v16;
    v192 = v17;
    v162 = &v194;
    v194 = &v196;
    v195 = 0x200000000LL;
    sub_1E4C8C0(v211[0], (unsigned int)&v194, v19, v20, v21, v22, *(_OWORD *)&v17, v187);
    if ( (_DWORD)v195 )
    {
      v164 = v209;
      v25 = 0;
      v155 = 16 * ((unsigned int)(v195 - 1) + 1LL);
      while ( 1 )
      {
        v28 = *(_QWORD *)((_BYTE *)v194 + v25) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)((_BYTE *)v194 + v25) & 4) == 0 )
        {
          if ( v28 )
            break;
        }
        v29 = *(_BYTE *)(v28 + 28) & 0x7F;
        if ( v29 == 67 )
        {
          v26 = (unsigned int)sub_BBE5B0(*(_QWORD *)((_BYTE *)v194 + v25) & 0xFFFFFFFFFFFFFFF8LL);
          v30 = sub_BBE590(v28);
          if ( v30 != *(_DWORD *)(v213 + 24) )
            goto LABEL_9;
LABEL_13:
          v31 = *(_QWORD *)v188.m128i_i64[0];
          if ( (*(_QWORD *)v188.m128i_i64[0] & 1) != 0 )
          {
            v23 = v31 >> 58;
            v18 = ~(-1LL << (v31 >> 58));
            v32 = v18 & (v31 >> 1);
            if ( _bittest64((const __int64 *)&v32, v26) )
              goto LABEL_9;
            *(_QWORD *)v188.m128i_i64[0] = 2 * ((v23 << 57) | v18 & (v32 | (1LL << v26))) + 1;
          }
          else
          {
            v23 = v26 & 0x3F;
            v109 = (__int64 *)(*(_QWORD *)v31 + 8LL * ((unsigned int)v26 >> 6));
            v110 = *v109;
            if ( _bittest64(&v110, v23) )
              goto LABEL_9;
            *v109 = v110 | (1LL << v23);
          }
          v33 = v188.m128i_i64[1];
          v34 = v164;
          v35 = *(_QWORD **)(v188.m128i_i64[1] + 16);
          v36 = 32LL * (unsigned int)v26;
          v13 = (*(_DWORD *)(*v35 + v36) & 0x7FFFFFFF) == 0;
          LODWORD(v200) = v26;
          *(_BYTE *)(v188.m128i_i64[1] + 38) = !v13;
          v201 = (__m128i)(0xFFFFFFFE00000000LL & v201.m128i_u64[0]);
          v204 &= 0xFFFFFFFE00000000LL;
          v13 = *(_BYTE *)(v33 + 39) == 0;
          v203 = 0;
          v205 = 0;
          v206 = 0;
          ptr = v34;
          v208 = 0x400000000LL;
          v210 = 0;
          if ( v13 )
          {
            v37 = (const __m128i *)(*v35 + v36);
            v201 = _mm_loadu_si128(v37);
            v202 = v37[1].m128i_i64[0];
            v203 = v37[1].m128i_i8[8];
            v38 = *v35 + v36;
            *(_QWORD *)v38 &= 0xFFFFFFFE00000000LL;
            *(_QWORD *)(v38 + 8) = 0;
            *(_BYTE *)(v38 + 24) = 0;
          }
          v24 = 8LL * (unsigned int)v26;
          v39 = *(_QWORD *)(*(_QWORD *)(v33 + 8) + v24 + 24);
          v40 = *(_BYTE *)(v39 + 28) & 0x7F;
          if ( v40 == 67 )
          {
            v41 = *(_DWORD *)(v39 + 64);
            if ( !v41 )
              goto LABEL_20;
LABEL_97:
            *(_DWORD *)(v33 + 40) = v41;
            goto LABEL_20;
          }
          if ( v40 == 47 )
          {
            if ( *(_BYTE *)(v39 + 81) )
            {
              v41 = *(_DWORD *)(v39 + 84) + 1;
              if ( *(_DWORD *)(v39 + 84) != -1 )
                goto LABEL_97;
            }
          }
          else if ( v40 == 68 && (*(_BYTE *)(v39 + 80) & 4) != 0 )
          {
            v41 = *(_DWORD *)(v39 + 84) + 1;
            if ( *(_DWORD *)(v39 + 84) != -1 )
              goto LABEL_97;
          }
LABEL_20:
          v42 = *(unsigned int *)(v33 + 56);
          v43 = *(_QWORD *)(v33 + 48);
          v18 = v42 + 1;
          v44 = 7 * v42;
          v45 = (__int64 *)&v200;
          v46 = v43 + 32 * v44;
          if ( v18 > *(unsigned int *)(v33 + 60) )
          {
            v153 = v33 + 48;
            if ( v43 > (unsigned __int64)&v200 || v46 <= (unsigned __int64)&v200 )
            {
              v165 = v24;
              sub_1D67900(v153, v18);
              v45 = (__int64 *)&v200;
              v24 = v165;
              v46 = *(_QWORD *)(v33 + 48) + 224LL * *(unsigned int *)(v33 + 56);
            }
            else
            {
              v167 = v24;
              v165 = v43;
              sub_1D67900(v153, v18);
              v18 = *(_QWORD *)(v33 + 48);
              v24 = v167;
              v45 = (__int64 *)((char *)&v200 + v18 - v165);
              v46 = v18 + 224LL * *(unsigned int *)(v33 + 56);
            }
          }
          *(_DWORD *)v46 = *(_DWORD *)v45;
          *(__m128i *)(v46 + 8) = _mm_loadu_si128((const __m128i *)(v45 + 1));
          *(__m128i *)(v46 + 24) = _mm_loadu_si128((const __m128i *)(v45 + 3));
          *(__m128i *)(v46 + 40) = _mm_loadu_si128((const __m128i *)(v45 + 5));
          v47 = _mm_loadu_si128((const __m128i *)(v45 + 7));
          *(_QWORD *)(v46 + 80) = 0x400000000LL;
          *(__m128i *)(v46 + 56) = v47;
          a5 = *((unsigned int *)v45 + 20);
          *(_QWORD *)(v46 + 72) = v46 + 88;
          if ( (_DWORD)a5 )
          {
            v18 = (unsigned __int64)(v45 + 9);
            v167 = v24;
            v165 = (__int64)v45;
            sub_1D3C410((__int64 *)(v46 + 72), v45 + 9);
            v24 = v167;
            v45 = (__int64 *)v165;
          }
          *(_QWORD *)(v46 + 216) = v45[27];
          v48 = ptr;
          ++*(_DWORD *)(v33 + 56);
          if ( v48 != v164 )
          {
            v165 = v24;
            free(v48);
            v24 = v165;
          }
          v23 = *(_QWORD *)(*(_QWORD *)(v33 + 8) + v24 + 24);
          if ( (*(_BYTE *)(v23 + 28) & 0x7F) != 0x2F )
            goto LABEL_9;
          if ( *(_BYTE *)(v23 + 81) )
            goto LABEL_9;
          v18 = *(_QWORD *)(v23 + 48);
          v49 = *(_QWORD *)(sub_AB5860(*(_QWORD *)(*(_QWORD *)v33 + 248LL), v18) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v49 + 16) != 38 )
            goto LABEL_9;
          v50 = (__int64)v189;
          v25 += 16;
          sub_F1D250((__int64)&v200, *(_QWORD *)(v49 + 32), 0, 0);
          v18 = (unsigned __int64)&v200;
          sub_1CB6790(v50, (const __m128i *)&v200);
          if ( v155 == v25 )
            goto LABEL_29;
        }
        else
        {
          if ( v29 == 47 )
          {
            v27 = *(_DWORD *)(v28 + 68) & 0xFFFFF;
            v26 = *(_WORD *)(v28 + 70) >> 4;
          }
          else
          {
            v27 = *(_DWORD *)(v28 + 64) & 0xFFFFF;
            v26 = *(_WORD *)(v28 + 66) >> 4;
          }
LABEL_8:
          if ( v27 == *(_DWORD *)(v213 + 24) )
            goto LABEL_13;
LABEL_9:
          v25 += 16;
          if ( v155 == v25 )
            goto LABEL_29;
        }
      }
      v26 = *(unsigned __int16 *)(v28 + 22);
      v27 = *(_WORD *)(v28 + 20) & 0x7FFF;
      goto LABEL_8;
    }
LABEL_29:
    if ( v194 != v162 + 2 )
      free(v194);
    v172 = v217;
    v51 = v198;
    if ( !(_DWORD)v198 )
      goto LABEL_64;
    v52 = (__int64 *)&v200;
    v165 = (__int64)v209;
    v164 = v162 + 2;
    while ( 1 )
    {
      v53 = (char *)v197 + 24 * v51;
      v54 = _mm_loadu_si128((const __m128i *)(v53 - 24));
      v55 = *((_QWORD *)v53 - 1);
      LODWORD(v198) = v51 - 1;
      v190 = v54;
      v194 = v164;
      v191 = v55;
      v192 = v54;
      v193 = v55;
      v195 = 0x200000000LL;
      v18 = (unsigned __int64)v162;
      sub_1E4C8C0(v211[0], (_DWORD)v162, v55, v23, a5, v24, *(_OWORD *)&v54, v55);
      if ( !(_DWORD)v195 )
        goto LABEL_62;
      v56 = 0;
      v156 = (unsigned __int64)v52;
      v167 = 16 * ((unsigned int)(v195 - 1) + 1LL);
      do
      {
        while ( 1 )
        {
          v59 = *(_QWORD *)((_BYTE *)v194 + v56) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)((_BYTE *)v194 + v56) & 4) == 0 && v59 )
          {
            v57 = *(unsigned __int16 *)(v59 + 22);
            v58 = *(_WORD *)(v59 + 20) & 0x7FFF;
            goto LABEL_37;
          }
          v60 = *(_BYTE *)(v59 + 28) & 0x7F;
          if ( v60 == 67 )
            break;
          if ( v60 == 47 )
          {
            v58 = *(_DWORD *)(v59 + 68) & 0xFFFFF;
            v57 = *(_WORD *)(v59 + 70) >> 4;
          }
          else
          {
            v58 = *(_DWORD *)(v59 + 64) & 0xFFFFF;
            v57 = *(_WORD *)(v59 + 66) >> 4;
          }
LABEL_37:
          if ( *(_DWORD *)(v213 + 24) == v58 )
            goto LABEL_42;
LABEL_38:
          v56 += 16;
          if ( v167 == v56 )
            goto LABEL_61;
        }
        v57 = (unsigned int)sub_BBE5B0(*(_QWORD *)((_BYTE *)v194 + v56) & 0xFFFFFFFFFFFFFFF8LL);
        v61 = sub_BBE590(v59);
        if ( *(_DWORD *)(v213 + 24) != v61 )
          goto LABEL_38;
LABEL_42:
        v18 = v188.m128i_i64[0];
        v62 = *(_QWORD *)v188.m128i_i64[0];
        if ( (*(_QWORD *)v188.m128i_i64[0] & 1) != 0 )
        {
          v23 = v62 >> 58;
          v63 = ~(-1LL << (v62 >> 58));
          v64 = v63 & (v62 >> 1);
          if ( _bittest64((const __int64 *)&v64, v57) )
            goto LABEL_38;
          *(_QWORD *)v188.m128i_i64[0] = 2 * ((v23 << 57) | v63 & (v64 | (1LL << v57))) + 1;
        }
        else
        {
          v23 = v57 & 0x3F;
          v107 = (__int64 *)(*(_QWORD *)v62 + 8LL * ((unsigned int)v57 >> 6));
          v108 = *v107;
          if ( _bittest64(&v108, v23) )
            goto LABEL_38;
          *v107 = v108 | (1LL << v23);
        }
        v65 = v188.m128i_i64[1];
        v66 = (void *)v165;
        v67 = *(_QWORD **)(v188.m128i_i64[1] + 16);
        v68 = 32LL * (unsigned int)v57;
        v13 = (*(_DWORD *)(*v67 + v68) & 0x7FFFFFFF) == 0;
        LODWORD(v200) = v57;
        *(_BYTE *)(v188.m128i_i64[1] + 38) = !v13;
        v201 = (__m128i)(0xFFFFFFFE00000000LL & v201.m128i_u64[0]);
        v204 &= 0xFFFFFFFE00000000LL;
        v13 = *(_BYTE *)(v65 + 39) == 0;
        v203 = 0;
        v205 = 0;
        v206 = 0;
        ptr = v66;
        v208 = 0x400000000LL;
        v210 = 0;
        if ( v13 )
        {
          v69 = (const __m128i *)(*v67 + v68);
          v201 = _mm_loadu_si128(v69);
          v202 = v69[1].m128i_i64[0];
          v203 = v69[1].m128i_i8[8];
          v70 = *v67 + v68;
          *(_QWORD *)v70 &= 0xFFFFFFFE00000000LL;
          *(_QWORD *)(v70 + 8) = 0;
          *(_BYTE *)(v70 + 24) = 0;
        }
        v71 = 8LL * (unsigned int)v57;
        v72 = *(_QWORD *)(*(_QWORD *)(v65 + 8) + v71 + 24);
        v73 = *(_BYTE *)(v72 + 28) & 0x7F;
        if ( v73 == 67 )
        {
          v74 = *(_DWORD *)(v72 + 64);
          if ( !v74 )
            goto LABEL_50;
LABEL_49:
          *(_DWORD *)(v65 + 40) = v74;
          goto LABEL_50;
        }
        if ( v73 == 47 )
        {
          if ( !*(_BYTE *)(v72 + 81) )
            goto LABEL_50;
        }
        else if ( v73 != 68 || (*(_BYTE *)(v72 + 80) & 4) == 0 )
        {
          goto LABEL_50;
        }
        v74 = *(_DWORD *)(v72 + 84) + 1;
        if ( v74 )
          goto LABEL_49;
LABEL_50:
        v75 = *(unsigned int *)(v65 + 56);
        a5 = *(_QWORD *)(v65 + 48);
        v76 = v156;
        v77 = v75 + 1;
        v78 = a5 + 224 * v75;
        if ( v75 + 1 > (unsigned __int64)*(unsigned int *)(v65 + 60) )
        {
          v122 = v65 + 48;
          v168 = *(_QWORD *)(v65 + 48);
          if ( a5 > v156 || v78 <= v156 )
          {
            sub_1D67900(v122, v77);
            v76 = v156;
            v78 = *(_QWORD *)(v65 + 48) + 224LL * *(unsigned int *)(v65 + 56);
          }
          else
          {
            sub_1D67900(v122, v77);
            a5 = v168;
            v123 = *(_QWORD *)(v65 + 48);
            v76 = v123 + v156 - v168;
            v78 = v123 + 224LL * *(unsigned int *)(v65 + 56);
          }
        }
        *(_DWORD *)v78 = *(_DWORD *)v76;
        *(__m128i *)(v78 + 8) = _mm_loadu_si128((const __m128i *)(v76 + 8));
        *(__m128i *)(v78 + 24) = _mm_loadu_si128((const __m128i *)(v76 + 24));
        *(__m128i *)(v78 + 40) = _mm_loadu_si128((const __m128i *)(v76 + 40));
        v79 = _mm_loadu_si128((const __m128i *)(v76 + 56));
        *(_QWORD *)(v78 + 80) = 0x400000000LL;
        *(__m128i *)(v78 + 56) = v79;
        v18 = *(unsigned int *)(v76 + 80);
        *(_QWORD *)(v78 + 72) = v78 + 88;
        if ( (_DWORD)v18 )
        {
          v18 = v76 + 72;
          v168 = v76;
          sub_1D3C410((__int64 *)(v78 + 72), (__int64 *)(v76 + 72));
          v76 = v168;
        }
        *(_QWORD *)(v78 + 216) = *(_QWORD *)(v76 + 216);
        v80 = ptr;
        ++*(_DWORD *)(v65 + 56);
        if ( v80 != (void *)v165 )
          free(v80);
        v23 = *(_QWORD *)(*(_QWORD *)(v65 + 8) + v71 + 24);
        if ( (*(_BYTE *)(v23 + 28) & 0x7F) != 0x2F )
          goto LABEL_38;
        if ( *(_BYTE *)(v23 + 81) )
          goto LABEL_38;
        v18 = *(_QWORD *)(v23 + 48);
        v81 = *(_QWORD *)(sub_AB5860(*(_QWORD *)(*(_QWORD *)v65 + 248LL), v18) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v81 + 16) != 38 )
          goto LABEL_38;
        v18 = *(_QWORD *)(v81 + 32);
        v82 = v189;
        sub_F1D250(v156, v18, 0, 0);
        v83 = *((unsigned int *)v82 + 2);
        v84 = v83 + 1;
        if ( v83 + 1 > (unsigned __int64)*((unsigned int *)v82 + 3) )
        {
          v154 = (unsigned __int64)*v82;
          v18 = (unsigned __int64)(v82 + 2);
          if ( (unsigned __int64)*v82 > v156 || v156 >= v154 + 24 * v83 )
          {
            sub_2237220(v82, v18, v84, 24);
            v23 = (unsigned __int64)*v82;
            v83 = *((unsigned int *)v82 + 2);
            v85 = (const __m128i *)v156;
          }
          else
          {
            sub_2237220(v82, v18, v84, 24);
            v23 = (unsigned __int64)*v82;
            v83 = *((unsigned int *)v82 + 2);
            v85 = (const __m128i *)((char *)*v82 + v156 - v154);
          }
        }
        else
        {
          v23 = (unsigned __int64)*v82;
          v85 = (const __m128i *)v156;
        }
        v56 += 16;
        v86 = (__m128i *)(v23 + 24 * v83);
        *v86 = _mm_loadu_si128(v85);
        v86[1].m128i_i64[0] = v85[1].m128i_i64[0];
        ++*((_DWORD *)v82 + 2);
      }
      while ( v167 != v56 );
LABEL_61:
      v52 = (__int64 *)v156;
LABEL_62:
      if ( v194 != v164 )
      {
        free(v194);
        v51 = v198;
        if ( !(_DWORD)v198 )
          goto LABEL_64;
        continue;
      }
      v51 = v198;
      if ( !(_DWORD)v198 )
      {
LABEL_64:
        if ( v197 != v175 + 2 )
          free(v197);
        v87 = v181;
        if ( ((unsigned __int8)v181 & 1) == 0 && v181 )
        {
          if ( *(void **)v181 != (char *)v181 + 16 )
            free(*(void **)v181);
          v18 = 72;
          operator delete(v87, 0x48u);
        }
        v200 = nullptr;
        LODWORD(v197) = 0;
        v88 = *(_QWORD *)(v211[0] + 11280LL);
        if ( !v88 || (v18 = (unsigned __int64)&v200, v89 = sub_1DBAFC0(v88, &v200, v175), (v90 = v89) == 0) )
        {
          v92 = -1;
          v96 = -1;
          goto LABEL_136;
        }
        v91 = *(_BYTE *)(v89 + 28) & 0x7F;
        if ( v91 != 67 )
        {
          if ( v91 == 47 )
          {
            v96 = *(_DWORD *)(v90 + 68) & 0xFFFFF;
            v92 = *(_WORD *)(v90 + 70) >> 4;
          }
          else
          {
            v96 = *(_DWORD *)(v90 + 64) & 0xFFFFF;
            v92 = *(_WORD *)(v90 + 66) >> 4;
          }
LABEL_136:
          v94 = v172;
          v95 = v216;
          if ( !v172 )
            goto LABEL_75;
          goto LABEL_137;
        }
        v92 = sub_BBE5B0(v90);
        v93 = sub_BBE590(v90);
        v94 = v172;
        v95 = v216;
        v96 = v93;
        if ( !v172 )
          goto LABEL_75;
LABEL_137:
        v18 = v213;
        v23 = *(unsigned int *)v95;
        if ( *(_DWORD *)(v213 + 28) <= (unsigned int)v23 )
        {
LABEL_176:
          BYTE4(v214) = 0;
        }
        else
        {
          v121 = (unsigned int *)(v95 + 28);
          v94 = (__int64)&v95[28 * v172];
          while ( 1 )
          {
            if ( *(_DWORD *)(v213 + 24) == v96 && v92 == (_DWORD)v23 )
              BYTE4(v214) = 1;
            if ( (unsigned int *)v94 == v121 )
              break;
            v23 = *v121;
            v121 += 56;
            if ( (unsigned int)v23 >= *(_DWORD *)(v213 + 28) )
              goto LABEL_176;
          }
LABEL_75:
          if ( BYTE4(v214) )
          {
            LODWORD(v214) = (_DWORD)v197 + v214;
          }
          else if ( v215 )
          {
            LODWORD(v214) = v214 + v215 - 1;
          }
        }
        for ( i = (unsigned int *)&v95[28 * (unsigned int)v217]; i != (unsigned int *)v95; v95 += 28 )
        {
          v99 = v213;
          v100 = *(unsigned int *)v95;
          v101 = *(unsigned int *)(v213 + 248);
          LODWORD(v102) = v100;
          if ( (unsigned int)v101 > (unsigned int)v100 )
          {
            v18 = *(_QWORD *)(v213 + 240);
            v98 = 8 * v100;
            v95[27] = *(_QWORD *)(v18 + 8 * v100);
          }
          else
          {
            a5 = (unsigned int)(v100 + 1);
            v103 = v100 + 1;
            if ( v101 == a5 )
            {
              v98 = 8 * v100;
            }
            else if ( v101 > a5 )
            {
              *(_DWORD *)(v213 + 248) = a5;
              v102 = *(unsigned int *)v95;
              v98 = 8 * v102;
            }
            else
            {
              if ( a5 > *(unsigned int *)(v213 + 252) )
              {
                v157 = (unsigned int)(v100 + 1);
                v18 = v213 + 256;
                sub_2237220(v213 + 240, v213 + 256, v157, 8);
                v101 = *(unsigned int *)(v99 + 248);
                a5 = v157;
              }
              v104 = *(_QWORD *)(v99 + 240);
              v105 = (char *)(v104 + 8 * v101);
              v106 = (char *)(v104 + 8 * a5);
              if ( v105 != v106 )
              {
                v18 = 0;
                memset(v105, 0, 8 * ((unsigned __int64)(v106 - 8 - v105) >> 3) + 8);
              }
              *(_DWORD *)(v99 + 248) = v103;
              v99 = v213;
              v102 = *(unsigned int *)v95;
              v98 = 8 * v102;
            }
          }
          v23 = *(_QWORD *)(v99 + 240);
          *(_QWORD *)(v23 + v98) = v95;
          v94 = v213;
          if ( *(_DWORD *)(v213 + 24) == v96 && v92 == (_DWORD)v102 )
          {
            v131 = v200;
            v23 = *((unsigned int *)v95 + 20);
            v132 = 3LL * (unsigned int)v197;
            a5 = (unsigned __int64)&v200->m128i_u64[v132];
            v133 = 0xAAAAAAAAAAAAAAABLL * ((v132 * 8) >> 3);
            v94 = v133 + v23;
            if ( v133 + v23 > *((unsigned int *)v95 + 21) )
            {
              v18 = (unsigned __int64)(v95 + 11);
              v159 = a5;
              sub_2237220(v95 + 9, v95 + 11, v94, 32);
              v23 = *((unsigned int *)v95 + 20);
              a5 = v159;
            }
            v134 = v95[9] + 32 * v23;
            if ( v131 != (const __m128i *)a5 )
            {
              do
              {
                v135 = _mm_loadu_si128(v131);
                v131 = (const __m128i *)((char *)v131 + 24);
                v134 += 32;
                *(__m128i *)(v134 - 32) = v135;
                v94 = v131[-1].m128i_i64[1];
                *(_BYTE *)(v134 - 8) = 0;
                *(_QWORD *)(v134 - 16) = v94;
              }
              while ( (const __m128i *)a5 != v131 );
              v23 = *((unsigned int *)v95 + 20);
            }
            *((_DWORD *)v95 + 20) = v23 + v133;
            if ( !HIBYTE(v214) && !BYTE4(v214) )
            {
              v136 = (__m128i *)(*v212 + 32LL * *(unsigned int *)v95);
              v137 = (const __m128i *)(v95[9] + 32LL * (unsigned int)v214);
              *v136 = _mm_loadu_si128(v137);
              v23 = v137[1].m128i_u64[0];
              v136[1].m128i_i64[0] = v23;
              v94 = v137[1].m128i_u8[8];
              v136[1].m128i_i8[8] = v94;
            }
          }
        }
        v10 = v166 + 1;
        v119 = v166 + 1;
        if ( v173 == v10 || v215 )
        {
          v94 = v171;
          if ( v174 <= v171 )
            goto LABEL_153;
          LODWORD(v162) = v166 + 1;
          v138 = v171;
          v23 = v166;
          v139 = v178 & 0xFFFFFFFFFFFFFFF0LL;
          v164 = (_BYTE *)(8LL * (v166 >> 6));
          v18 = 1LL << v166;
          v165 = 1LL << v166;
          v163 = 1LL << v166;
          while ( 2 )
          {
            if ( v215 && v215 - 1 <= (unsigned int)v214 )
            {
LABEL_181:
              v171 = v138;
              v119 = (unsigned int)v162;
              goto LABEL_153;
            }
            v140 = *(_QWORD *)(v177 + 8 * v94) & 0xFFFFFFFFFFFFFFF0LL;
            v141 = *(_QWORD *)v140;
            if ( (*(_BYTE *)(*(_QWORD *)v140 + 8LL) & 0xF) != 0 )
              v142 = sub_F64F00(*(_QWORD *)(v177 + 8 * v94), v18, v94, v141, a5) & 0xFFFFFFFFFFFFFFF0LL;
            else
              v142 = v141 & 0xFFFFFFFFFFFFFFF0LL;
            v143 = *(_QWORD *)v139;
            if ( (*(_BYTE *)(*(_QWORD *)v139 + 8LL) & 0xF) != 0 )
            {
              v158 = v142;
              v147 = sub_F64F00(v178, v18, v143, v142, a5);
              v142 = v158;
              v144 = v147 & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v144 = v143 & 0xFFFFFFFFFFFFFFF0LL;
            }
            LOBYTE(v200) = 0;
            v18 = v170;
            v125 = sub_1D6C080(v169, v170, v144, v142, a7, a8, **(_DWORD **)a10, a9, 0, (__int64 *)&v200);
            v145 = **(_BYTE ***)(a10 + 8);
            if ( v145 )
            {
              if ( (_BYTE)v200 )
              {
                v18 = **(_QWORD **)(a10 + 16);
                *v145 = 1;
                goto LABEL_189;
              }
            }
            else
            {
              v18 = **(_QWORD **)(a10 + 16);
LABEL_189:
              if ( v18 && (_BYTE)v200 )
              {
                v146 = *(_QWORD *)v18;
                if ( (*(_QWORD *)v18 & 1) != 0 )
                {
                  *(_QWORD *)v18 = 2
                                 * ((v146 >> 58 << 57)
                                  | ~(-1LL << (v146 >> 58)) & (v163 | ~(-1LL << (v146 >> 58)) & (v146 >> 1)))
                                 + 1;
                }
                else
                {
                  v18 = v165;
                  *(_QWORD *)&v164[*(_QWORD *)v146] |= v165;
                }
              }
            }
            if ( v125 )
              goto LABEL_222;
            sub_1D38630((__int64)v161);
            v94 = ++v138;
            if ( v174 <= v138 )
              goto LABEL_181;
            continue;
          }
        }
        v124 = *(_DWORD *)(v163 + 20);
        if ( v124 > 1 && !BYTE4(v214) )
        {
          v94 = v171;
          v149 = v174;
          v150 = v171;
          if ( v174 > v171 )
          {
            v151 = v124 + v171 - 1;
            v152 = v161;
            do
            {
              ++v150;
              sub_1D38630((__int64)v152);
            }
            while ( v150 != v151 && v149 > v150 );
            v171 = v150;
          }
        }
LABEL_153:
        if ( !HIBYTE(v214) )
        {
          v125 = sub_1D3CBA0((__int64)v161, v18, v94, v23, a5, v24);
          if ( v125 )
          {
LABEL_222:
            v160 = v125;
            sub_1D36980((__int64)v161);
            return v160;
          }
        }
        v126 = v216;
        a3 = 224LL * (unsigned int)v217;
        v127 = (__int64 *)((char *)v216 + a3);
        if ( v216 != (__int64 *)((char *)v216 + a3) )
        {
          do
          {
            v128 = *(unsigned int *)v126;
            v126 += 28;
            *(_QWORD *)(*(_QWORD *)(v213 + 240) + 8 * v128) = *(v126 - 1);
          }
          while ( v127 != v126 );
          v129 = v216;
          v127 = (__int64 *)((char *)v216 + a3);
          if ( v216 != (__int64 *)((char *)v216 + a3) )
          {
            do
            {
              while ( 1 )
              {
                v127 -= 28;
                v130 = (__int64 *)v127[9];
                if ( v130 == v127 + 11 )
                  break;
                free(v130);
                if ( v129 == v127 )
                  goto LABEL_160;
              }
            }
            while ( v129 != v127 );
LABEL_160:
            v127 = v216;
          }
        }
        if ( v127 != v161 + 8 )
          free(v127);
LABEL_130:
        v166 = v119;
        if ( v173 == v10 )
        {
          v120 = v171;
          goto LABEL_132;
        }
        goto LABEL_3;
      }
    }
  }
  if ( v174 <= v171 )
    return 16;
  v111 = v177;
  v112 = *(_QWORD *)(v177 + 8LL * v171) & 0xFFFFFFFFFFFFFFF0LL;
  v113 = *(_QWORD *)v112;
  if ( *(_BYTE *)(*(_QWORD *)v112 + 16LL) == 38 )
    return 16;
  if ( (*(_BYTE *)(v113 + 8) & 0xF) != 0 )
  {
    v114 = sub_F64F00(*(_QWORD *)(v177 + 8LL * v171), v177, a3, v113, a5) & 0xFFFFFFFFFFFFFFF0LL;
    v163 = *(_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    v114 = v113 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v115 = v163;
  if ( (*(_BYTE *)(v163 + 8) & 0xF) != 0 )
    v115 = sub_F64F00(*v11, v111, a3, v113, a5);
  LOBYTE(v211[0]) = 0;
  result = sub_1D6C080(v169, v170, v115 & 0xFFFFFFFFFFFFFFF0LL, v114, a7, a8, **(_DWORD **)a10, a9, 0, v161);
  a3 = **(_QWORD **)(a10 + 8);
  if ( a3 )
  {
    if ( LOBYTE(v211[0]) )
    {
      v117 = **(__int64 ***)(a10 + 16);
      *(_BYTE *)a3 = 1;
      goto LABEL_124;
    }
  }
  else
  {
    a3 = *(_QWORD *)(a10 + 16);
    v117 = *(__int64 **)a3;
LABEL_124:
    if ( v117 && LOBYTE(v211[0]) )
    {
      v118 = *v117;
      if ( (*v117 & 1) != 0 )
      {
        a3 = 2
           * ((v118 >> 58 << 57) | ~(-1LL << (v118 >> 58)) & (~(-1LL << (v118 >> 58)) & (v118 >> 1) | (1LL << v166)))
           + 1;
        *v117 = a3;
      }
      else
      {
        v148 = *(_QWORD *)v118;
        a3 = 1LL << v166;
        *(_QWORD *)(v148 + 8LL * (v166 >> 6)) |= 1LL << v166;
      }
    }
  }
  if ( !(_DWORD)result )
  {
    ++v171;
    v10 = v166 + 1;
    v119 = v166 + 1;
    goto LABEL_130;
  }
  return result;
}
