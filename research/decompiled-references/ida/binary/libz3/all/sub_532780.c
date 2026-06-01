_BYTE *__fastcall sub_532780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r15
  int v15; // edx
  _BYTE *result; // rax
  unsigned int v17; // r12d
  _QWORD *v18; // rax
  _OWORD *v19; // rax
  _QWORD *v20; // rbp
  _QWORD *v21; // rbx
  unsigned int v22; // ebp
  __int64 v23; // rax
  __int64 *v24; // r13
  _DWORD *v25; // rax
  __m128i v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i v29; // xmm0
  _DWORD *v30; // rsi
  size_t v31; // rdx
  __int64 *v32; // rbx
  _DWORD *v33; // rax
  unsigned int v34; // r14d
  __int64 v35; // rax
  __int64 v36; // rax
  _DWORD *v37; // rsi
  size_t v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // r13
  __int64 *v41; // rax
  __int64 v42; // r14
  __int64 v43; // rdx
  int v44; // r9d
  int v45; // ecx
  _QWORD *v46; // rdx
  _DWORD *v47; // rax
  __m128i v48; // xmm1
  __int64 v49; // rax
  __int64 v50; // rax
  __m128i v51; // xmm0
  _DWORD *v52; // rsi
  size_t v53; // rdx
  size_t v54; // rdx
  __m128i *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __m128i v58; // xmm1
  __int64 v59; // rax
  __int64 v60; // rax
  __m128i v61; // xmm0
  unsigned int *v62; // rsi
  int v63; // eax
  unsigned int v64; // esi
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rax
  unsigned int v68; // r8d
  unsigned int v69; // edi
  __int64 v70; // rdx
  __int64 *v71; // rax
  unsigned __int64 v72; // rcx
  __int64 v73; // rsi
  bool v74; // zf
  int v75; // r9d
  int v76; // ecx
  __int64 v77; // rdi
  unsigned __int64 v78; // rax
  __int64 v79; // rdx
  __int64 *v80; // rbx
  unsigned __int64 v81; // rbp
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rdx
  _QWORD *v85; // rax
  _QWORD *v86; // rdx
  __int64 v87; // rdx
  unsigned int v88; // eax
  unsigned int v89; // ecx
  unsigned int v90; // eax
  _QWORD *v91; // rcx
  unsigned int v92; // eax
  __int64 v93; // rdx
  int v94; // eax
  __int64 *v95; // rdx
  unsigned int v96; // eax
  __int64 *v97; // rbx
  unsigned __int64 v98; // r13
  __int64 v99; // rsi
  __int64 *v100; // rbx
  unsigned __int64 v101; // r13
  __int64 v102; // rsi
  __int64 *v103; // rbx
  unsigned __int64 v104; // rbp
  __int64 v105; // rsi
  __int64 *v106; // rbx
  unsigned __int64 v107; // rbp
  __int64 v108; // rsi
  _BYTE *v109; // rdi
  char *v110; // rcx
  char *v111; // rax
  __int64 v112; // rdx
  int v113; // edx
  _QWORD *v114; // rdx
  unsigned int v115; // eax
  __int64 v116; // rcx
  int v117; // eax
  _QWORD *v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rdx
  unsigned int v121; // eax
  __int64 v122; // rdx
  int v123; // eax
  __int64 *v124; // rdx
  unsigned int v125; // eax
  unsigned int v126; // eax
  __int64 v127; // rdx
  _QWORD *v128; // rsi
  int v129; // eax
  _QWORD *v130; // rdx
  unsigned int v131; // edx
  size_t v132; // rsi
  unsigned int *v133; // rax
  unsigned int v134; // eax
  __int64 v135; // rax
  __int64 v136; // rdx
  unsigned int v137; // eax
  unsigned int v138; // ebx
  unsigned int v139; // edx
  unsigned int *v140; // rax
  __int64 v141; // rdx
  unsigned int v142; // ebx
  unsigned int v143; // edx
  unsigned int *v144; // rax
  __int64 v145; // rdx
  unsigned int v146; // ebx
  unsigned int v147; // edx
  unsigned int *v148; // rax
  _DWORD *v149; // rcx
  unsigned int v150; // ebx
  unsigned int v151; // edx
  unsigned int *v152; // rax
  _DWORD *v153; // rcx
  unsigned int v154; // ebx
  unsigned int v155; // edx
  unsigned int *v156; // rax
  __int64 v157; // rdx
  unsigned int v158; // ebx
  unsigned int v159; // ecx
  unsigned int *v160; // rax
  __int64 v161; // rcx
  _QWORD *v162; // rax
  _DWORD *v163; // rax
  _QWORD *v164; // rax
  _QWORD *v165; // rax
  _QWORD *v166; // rax
  _QWORD *v167; // rax
  char **v168; // rbp
  char **v169; // rbp
  char **v170; // rbp
  char **v171; // rbp
  char **v172; // rbp
  char **v173; // rbp
  char **exception; // rbp
  __int64 v175; // [rsp+0h] [rbp-288h]
  __int64 v176; // [rsp+8h] [rbp-280h]
  __int64 v177; // [rsp+10h] [rbp-278h]
  void **v178; // [rsp+18h] [rbp-270h]
  __int64 v179; // [rsp+20h] [rbp-268h]
  __int64 v180; // [rsp+28h] [rbp-260h]
  __int64 v181; // [rsp+30h] [rbp-258h]
  int v182; // [rsp+30h] [rbp-258h]
  void *v183; // [rsp+38h] [rbp-250h]
  __int64 v184; // [rsp+40h] [rbp-248h]
  unsigned int v185; // [rsp+40h] [rbp-248h]
  _QWORD *v186; // [rsp+48h] [rbp-240h]
  unsigned int v187; // [rsp+50h] [rbp-238h]
  __int64 v188; // [rsp+50h] [rbp-238h]
  unsigned int v189; // [rsp+50h] [rbp-238h]
  __int64 v190; // [rsp+58h] [rbp-230h]
  __int64 v191; // [rsp+60h] [rbp-228h]
  unsigned int v192; // [rsp+60h] [rbp-228h]
  unsigned __int64 v193; // [rsp+68h] [rbp-220h]
  __int64 v196; // [rsp+88h] [rbp-200h]
  _DWORD **v197; // [rsp+90h] [rbp-1F8h]
  __int64 v198; // [rsp+90h] [rbp-1F8h]
  unsigned int v199; // [rsp+90h] [rbp-1F8h]
  unsigned int **v201; // [rsp+B0h] [rbp-1D8h]
  unsigned __int64 v202; // [rsp+B0h] [rbp-1D8h]
  __int64 v203; // [rsp+B0h] [rbp-1D8h]
  int v204; // [rsp+B0h] [rbp-1D8h]
  int v205; // [rsp+B0h] [rbp-1D8h]
  int v206; // [rsp+B0h] [rbp-1D8h]
  __int64 *v207; // [rsp+B8h] [rbp-1D0h]
  int v208; // [rsp+B8h] [rbp-1D0h]
  unsigned int v209; // [rsp+B8h] [rbp-1D0h]
  unsigned int v210; // [rsp+B8h] [rbp-1D0h]
  unsigned int v211; // [rsp+C0h] [rbp-1C8h]
  unsigned int v212; // [rsp+DCh] [rbp-1ACh]
  __int64 v213; // [rsp+E8h] [rbp-1A0h]
  __int64 v214; // [rsp+F0h] [rbp-198h] BYREF
  _DWORD *v215; // [rsp+F8h] [rbp-190h] BYREF
  _QWORD v216[2]; // [rsp+100h] [rbp-188h] BYREF
  __int64 v217[2]; // [rsp+110h] [rbp-178h] BYREF
  __int64 v218; // [rsp+120h] [rbp-168h] BYREF
  int v219[2]; // [rsp+128h] [rbp-160h]
  __int64 v220; // [rsp+130h] [rbp-158h] BYREF
  __int64 *v221; // [rsp+138h] [rbp-150h]
  __int64 v222; // [rsp+140h] [rbp-148h] BYREF
  unsigned __int64 v223; // [rsp+148h] [rbp-140h]
  int v224[2]; // [rsp+150h] [rbp-138h] BYREF
  __int64 v225; // [rsp+158h] [rbp-130h]
  void *v226[2]; // [rsp+170h] [rbp-118h] BYREF
  int v227; // [rsp+180h] [rbp-108h]
  void *v228; // [rsp+188h] [rbp-100h]
  __int64 v229; // [rsp+190h] [rbp-F8h]
  _BYTE v230[128]; // [rsp+198h] [rbp-F0h] BYREF
  void *ptr; // [rsp+218h] [rbp-70h]
  __int64 v232; // [rsp+220h] [rbp-68h]
  int v233; // [rsp+228h] [rbp-60h]
  __int128 v234; // [rsp+230h] [rbp-58h]
  __int128 v235; // [rsp+240h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 80);
  v179 = a3;
  v7 = *(unsigned int *)(a1 + 88);
  v8 = v7 - 1;
  v7 *= 24;
  v177 = a1;
  v9 = a2;
  v10 = 3LL * ((unsigned int)a2 & v8);
  v11 = v6 + v7;
  v12 = 8 * v10;
  v13 = v6 + v12;
  if ( v12 == v7 )
  {
LABEL_171:
    while ( v13 != v6 )
    {
      v113 = *(_DWORD *)(v6 + 4);
      if ( v113 == 2 )
      {
        if ( v9 == *(_DWORD *)v6 && a2 == *(_QWORD *)(v6 + 8) )
        {
          v14 = v6;
          goto LABEL_8;
        }
      }
      else if ( !v113 )
      {
        break;
      }
      v6 += 24;
    }
LABEL_256:
    BUG();
  }
  v14 = v6 + v12;
  while ( 1 )
  {
    v15 = *(_DWORD *)(v14 + 4);
    if ( v15 != 2 )
    {
      if ( !v15 )
        goto LABEL_256;
      goto LABEL_4;
    }
    if ( v9 == *(_DWORD *)v14 && a2 == *(_QWORD *)(v14 + 8) )
      break;
LABEL_4:
    v14 += 24;
    if ( v11 == v14 )
      goto LABEL_171;
  }
LABEL_8:
  result = *(_BYTE **)(v14 + 16);
  if ( !result )
  {
    v17 = 0;
    goto LABEL_10;
  }
  v17 = *((_DWORD *)result - 1);
  if ( v17 != 1 )
  {
LABEL_10:
    v18 = (_QWORD *)sub_186B270(0x80u);
    v227 = 0;
    *v18 = 0;
    v18[2] = 0;
    v18[4] = 0;
    v18[6] = 0;
    v18[8] = 0;
    v18[10] = 0;
    v18[12] = 0;
    v18[14] = 0;
    v226[0] = v18;
    v228 = v230;
    v226[1] = &byte_8;
    v229 = 0x1000000000LL;
    v19 = (_OWORD *)sub_186B270(0x40u);
    ptr = v19;
    *v19 = 0;
    v19[1] = 0;
    v19[2] = 0;
    v19[3] = 0;
    v234 = 0;
    v235 = 0;
    v20 = *(_QWORD **)(v14 + 16);
    v232 = 8;
    v233 = 0;
    if ( !v20 || (v21 = &v20[*((unsigned int *)v20 - 1)], v20 == v21) )
    {
      v178 = v226;
      sub_148BC40(v226, *(_QWORD *)(a2 + 40), 1);
    }
    else
    {
      v178 = v226;
      do
        sub_148BC40(v226, *v20++, 1);
      while ( v21 != v20 );
      sub_148BC40(v226, *(_QWORD *)(a2 + 40), 1);
    }
    v193 = 0;
    v186 = nullptr;
    v180 = *(_QWORD *)(v179 + 16);
    v175 = *(_QWORD *)(a4 + 16);
    v196 = *(_QWORD *)(v177 + 8);
    v216[0] = v196;
    v217[0] = v196;
    if ( v17 )
    {
      v22 = 0;
      while ( 2 )
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 8LL * v22);
          v176 = v23;
          if ( *(_QWORD *)(v23 + 16) == v180 )
            break;
LABEL_17:
          if ( ++v22 >= v17 )
            goto LABEL_137;
        }
        v24 = (__int64 *)sub_62B3A0(*(_QWORD *)(v177 + 16), v23);
        v25 = (_DWORD *)*v24;
        v184 = *v24;
        if ( *v24 )
        {
          v26 = _mm_cvtsi32_si128(*(v25 - 1));
          v27 = (unsigned int)*(v25 - 2);
          v185 = v27;
          v28 = sub_186B270(4 * v27 + 8);
          v29 = _mm_cvtsi32_si128(v185);
          v30 = (_DWORD *)*v24;
          v184 = v28 + 8;
          *(_QWORD *)v28 = _mm_unpacklo_epi32(v29, _mm_cvtsi32_si128(_mm_cvtsi128_si32(v26))).m128i_u64[0];
          if ( v30 )
          {
            v31 = 4LL * (unsigned int)*(v30 - 1);
            if ( v31 <= 4 )
            {
              if ( v31 == 4 )
                *(_DWORD *)(v28 + 8) = *v30;
            }
            else
            {
              memmove((void *)(v28 + 8), v30, v31);
            }
          }
        }
        sub_148BC40(v178, v176, 0xFFFFFFFFLL);
        v32 = (__int64 *)sub_62B3A0(*(_QWORD *)(v177 + 16), v179);
        v33 = (_DWORD *)*v32;
        v190 = *v32;
        if ( *v32 )
        {
          v34 = *(v33 - 1);
          v35 = (unsigned int)*(v33 - 2);
          v187 = v35;
          v36 = sub_186B270(4 * v35 + 8);
          v37 = (_DWORD *)*v32;
          v190 = v36 + 8;
          *(_QWORD *)v36 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v187), _mm_cvtsi32_si128(v34)).m128i_u64[0];
          if ( v37 )
          {
            v38 = 4LL * (unsigned int)*(v37 - 1);
            if ( v38 <= 4 )
            {
              if ( v38 == 4 )
                *(_DWORD *)(v36 + 8) = *v37;
            }
            else
            {
              memmove((void *)(v36 + 8), v37, v38);
            }
          }
        }
        v39 = 0;
        if ( v180 == v175 )
        {
          v39 = v22 + 1;
          if ( (unsigned int)v39 >= v17 )
          {
LABEL_133:
            sub_148BC40(v178, v176, 1);
            if ( v190 )
              sub_186B220((void *)(v190 - 8));
            if ( !v184 )
              goto LABEL_17;
            ++v22;
            sub_186B220((void *)(v184 - 8));
            if ( v22 >= v17 )
              goto LABEL_137;
            continue;
          }
        }
        break;
      }
      v40 = 8LL * (unsigned int)v39;
      while ( 1 )
      {
        v41 = (__int64 *)(v40 + *(_QWORD *)(v14 + 16));
        if ( v22 != (_DWORD)v39 )
        {
          v42 = *v41;
          if ( v175 == *(_QWORD *)(*v41 + 16) && v179 == sub_52E440(v177, v176, v42) && a4 == v43 )
            break;
        }
        v39 = (unsigned int)(v39 + 1);
        v40 += 8;
        if ( (_DWORD)v39 == v17 )
          goto LABEL_133;
      }
      *(_QWORD *)v219 = 0;
      v218 = *(_QWORD *)(v177 + 8);
      sub_52D980(&v220, v177, v176, v42);
      sub_646A80(&v220, &v218);
      v213 = *(_QWORD *)(v177 + 8);
      if ( *(_QWORD *)v219 )
        v45 = *(_DWORD *)(*(_QWORD *)v219 - 4LL);
      else
        v45 = 0;
      sub_157BE40(
        (int)v224,
        *(_QWORD *)(v177 + 24),
        a5,
        v45,
        v219[0],
        v44,
        v175,
        v176,
        v177,
        (int)v178,
        v179,
        v180,
        v22,
        (void *)(8LL * v22));
      v191 = *(_QWORD *)v224;
      sub_148BC40(v178, v42, 0xFFFFFFFFLL);
      v46 = (_QWORD *)sub_62B3A0(*(_QWORD *)(v177 + 16), v42);
      v47 = (_DWORD *)*v46;
      v197 = (_DWORD **)v46;
      v188 = *v46;
      if ( *v46 )
      {
        v48 = _mm_cvtsi32_si128(*(v47 - 1));
        v49 = (unsigned int)*(v47 - 2);
        v189 = v49;
        v50 = sub_186B270(4 * v49 + 8);
        v51 = _mm_cvtsi32_si128(v189);
        v188 = v50 + 8;
        v52 = *v197;
        *(_QWORD *)v50 = _mm_unpacklo_epi32(v51, _mm_cvtsi32_si128(_mm_cvtsi128_si32(v48))).m128i_u64[0];
        if ( v52 )
        {
          v53 = 4LL * (unsigned int)*(v52 - 1);
          if ( v53 <= 4 )
          {
            if ( v53 == 4 )
              *(_DWORD *)(v50 + 8) = *v52;
          }
          else
          {
            memmove((void *)(v50 + 8), v52, v53);
          }
        }
      }
      v54 = sub_62B3A0(*(_QWORD *)(v177 + 16), v191);
      v57 = *(_QWORD *)v54;
      v201 = (unsigned int **)v54;
      v198 = *(_QWORD *)v54;
      if ( *(_QWORD *)v54 )
      {
        v58 = _mm_cvtsi32_si128(*(_DWORD *)(v57 - 4));
        v59 = *(unsigned int *)(v57 - 8);
        v199 = v59;
        v60 = sub_186B270(4 * v59 + 8);
        v54 = (size_t)v201;
        v61 = _mm_cvtsi32_si128(v199);
        v198 = v60 + 8;
        v62 = *v201;
        *(_QWORD *)v60 = _mm_unpacklo_epi32(v61, _mm_cvtsi32_si128(_mm_cvtsi128_si32(v58))).m128i_u64[0];
        if ( v62 )
        {
          v54 = 4LL * *(v62 - 1);
          if ( v54 <= 4 )
          {
            if ( v54 == 4 )
            {
              v54 = *v62;
              *(_DWORD *)(v60 + 8) = v54;
            }
          }
          else
          {
            memmove((void *)(v60 + 8), v62, v54);
          }
        }
      }
      if ( !v184 )
        goto LABEL_58;
      v55 = (__m128i *)*(unsigned int *)(v184 - 4);
      if ( v188 )
      {
        v212 = *(_DWORD *)(v188 - 4);
        if ( v212 >= (unsigned int)v55 )
        {
          if ( (_DWORD)v55 )
            goto LABEL_48;
          goto LABEL_58;
        }
        v211 = (_DWORD)v55 + 1;
        if ( v212 >= (int)v55 + 1 )
        {
          *(_DWORD *)(v188 - 4) = (_DWORD)v55 + 1;
          goto LABEL_48;
        }
LABEL_202:
        while ( 1 )
        {
          v134 = *(_DWORD *)(v188 - 8);
          if ( v134 >= v211 )
            break;
          v131 = (3 * v134 + 1) >> 1;
          v132 = 4 * v131 + 8;
          if ( 4 * v134 + 8 >= (unsigned int)v132 || v134 >= v131 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v224, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v224);
            sub_233E40((__int64)v224);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v210 = (3 * v134 + 1) >> 1;
          v204 = (int)v55;
          v133 = (unsigned int *)sub_186B300((void *)(v188 - 8), v132);
          v188 = (__int64)(v133 + 2);
          LODWORD(v55) = v204;
          *v133 = v210;
        }
        v135 = 4LL * v212;
        *(_DWORD *)(v188 - 4) = v211;
        v136 = 4LL * v211;
        if ( v135 != v136 )
        {
          v205 = (int)v55;
          memset((void *)(v188 + v135), 0, v136 - v135);
          LODWORD(v55) = v205;
        }
LABEL_48:
        v63 = 1;
        if ( (_DWORD)v55 )
          v63 = (int)v55;
        v64 = v63;
        if ( (unsigned int)v55 > 3 )
          goto LABEL_51;
        v54 = 0;
      }
      else
      {
        if ( !(_DWORD)v55 )
          goto LABEL_58;
        v211 = (_DWORD)v55 + 1;
        if ( (_DWORD)v55 != -1 )
        {
          v206 = *(_DWORD *)(v184 - 4);
          v162 = (_QWORD *)sub_186B270(0x10u);
          *v162 = 2;
          LODWORD(v55) = v206;
          v188 = (__int64)(v162 + 1);
          v212 = 0;
          goto LABEL_202;
        }
        v64 = -1;
LABEL_51:
        v55 = (__m128i *)v188;
        v65 = 0;
        do
        {
          *(__m128i *)(v188 + v65) = _mm_or_si128(
                                       _mm_loadu_si128((const __m128i *)(v184 + v65)),
                                       _mm_loadu_si128((const __m128i *)(v188 + v65)));
          v65 += 16;
        }
        while ( v65 != 16LL * (v64 >> 2) );
        v54 = v64 & 0xFFFFFFFC;
        if ( (v64 & 3) == 0 )
          goto LABEL_58;
      }
      v66 = v64 - v54;
      if ( v64 - (_DWORD)v54 != 1 )
      {
        v55 = (__m128i *)(v188 + 4LL * (unsigned int)v54);
        v55->m128i_i64[0] = _mm_or_si128(
                              _mm_loadl_epi64((const __m128i *)(v184 + 4LL * (unsigned int)v54)),
                              _mm_loadl_epi64(v55)).m128i_u64[0];
        if ( (v66 & 1) == 0 )
          goto LABEL_58;
        LODWORD(v54) = (v66 & 0xFFFFFFFE) + v54;
      }
      v55 = (__m128i *)v188;
      v67 = (unsigned int)v54;
      v54 = *(unsigned int *)(v184 + 4LL * (unsigned int)v54);
      *(_DWORD *)(v188 + 4 * v67) |= v54;
LABEL_58:
      v215 = nullptr;
      sub_148BFD0(v178, &v215, v54, v55, v56);
      v214 = v188;
      sub_52E800(&v215, &v214);
      sub_148BC40(v178, v42, 1);
      if ( !v215 )
        goto LABEL_90;
      v68 = *(v215 - 1);
      if ( v198 )
      {
        v69 = *(_DWORD *)(v198 - 4);
        if ( v68 <= v69 )
          v69 = *(v215 - 1);
        if ( v69 )
        {
          v70 = 0;
          while ( (v215[v70] & ~*(_DWORD *)(v198 + v70 * 4)) == 0 )
          {
            if ( v69 == ++v70 )
              goto LABEL_231;
          }
LABEL_66:
          sub_52D980(&v222, v177, v42, v176);
          v71 = *(__int64 **)v219;
          if ( *(_QWORD *)v219 )
          {
            v72 = *(_QWORD *)v219 + 8LL * *(unsigned int *)(*(_QWORD *)v219 - 4LL);
            if ( *(_QWORD *)v219 >= v72 )
              goto LABEL_74;
            do
            {
              while ( 1 )
              {
                v73 = *v71;
                if ( *v71 )
                {
                  v74 = (*(_DWORD *)(v73 + 8))-- == 1;
                  if ( v74 )
                    break;
                }
                if ( (unsigned __int64)++v71 >= v72 )
                  goto LABEL_73;
              }
              v207 = v71;
              v202 = v72;
              sub_15D7BC0(v218, v73);
              v72 = v202;
              v71 = v207 + 1;
            }
            while ( (unsigned __int64)(v207 + 1) < v202 );
LABEL_73:
            v71 = *(__int64 **)v219;
            if ( *(_QWORD *)v219 )
LABEL_74:
              *((_DWORD *)v71 - 1) = 0;
          }
          sub_646A80(&v222, &v218);
          if ( *(_QWORD *)v219 )
            v76 = *(_DWORD *)(*(_QWORD *)v219 - 4LL);
          else
            v76 = 0;
          sub_157BE40(
            (int)v224,
            *(_QWORD *)(v177 + 24),
            a5,
            v76,
            v219[0],
            v75,
            v175,
            v176,
            v177,
            (int)v178,
            v179,
            v180,
            v181,
            v183);
          v203 = *(_QWORD *)v224;
          *(_QWORD *)v224 = v191;
          if ( v191 )
          {
            v77 = v225;
            v208 = *(_DWORD *)(v191 + 8);
            *(_DWORD *)(v191 + 8) = v208 - 1;
            if ( v208 == 1 )
              sub_15D7BC0(v77, v191);
          }
          v78 = v223;
          if ( v223 )
          {
            v79 = *(unsigned int *)(v223 - 4);
            if ( v223 >= v223 + 8 * v79 )
              goto LABEL_88;
            v192 = v39;
            v80 = (__int64 *)v223;
            v209 = v22;
            v81 = v223 + 8 * v79;
            do
            {
              while ( 1 )
              {
                v82 = *v80;
                if ( *v80 )
                {
                  v83 = v222;
                  v74 = (*(_DWORD *)(v82 + 8))-- == 1;
                  if ( v74 )
                    break;
                }
                if ( (unsigned __int64)++v80 >= v81 )
                  goto LABEL_87;
              }
              sub_15D7BC0(v83, v82);
              ++v80;
            }
            while ( (unsigned __int64)v80 < v81 );
LABEL_87:
            v78 = v223;
            v39 = v192;
            v22 = v209;
            if ( v223 )
LABEL_88:
              sub_186B220((void *)(v78 - 8));
          }
          v191 = v203;
          goto LABEL_90;
        }
      }
      else
      {
        v69 = 0;
      }
LABEL_231:
      if ( v69 < v68 )
      {
        v163 = &v215[v69];
        while ( !*v163 )
        {
          if ( ++v163 == &v215[v69 + 1 + (unsigned __int64)(v68 - 1 - v69)] )
            goto LABEL_90;
        }
        goto LABEL_66;
      }
LABEL_90:
      if ( v193 && (v84 = *(unsigned int *)(v193 - 4), (_DWORD)v84) )
      {
        v85 = (_QWORD *)v193;
        v86 = (_QWORD *)(v193 + 8 * v84);
        while ( *v85 != v191 )
        {
          if ( v86 == ++v85 )
            goto LABEL_181;
        }
        if ( v22 < (unsigned int)v39 )
        {
          v137 = v22;
          v22 = v39;
          v39 = v137;
        }
        else
        {
          v40 = (__int64)v183;
        }
        v87 = *(_QWORD *)(v14 + 16);
        v88 = *(_DWORD *)(v87 - 4);
        v89 = v88 - 1;
        if ( v22 < v88 )
          *(_QWORD *)(v87 + v40) = *(_QWORD *)(v87 + 8LL * v89);
        v90 = v88 - 2;
        if ( (unsigned int)v39 < v89 )
          *(_QWORD *)(v87 + 8 * v39) = *(_QWORD *)(v87 + 8LL * v90);
        *(_DWORD *)(v87 - 4) = v90;
        v91 = v186;
        v17 -= 2;
        ++*(_DWORD *)(v176 + 8);
        if ( v186 )
        {
          v92 = *((_DWORD *)v186 - 1);
          if ( v92 == *((_DWORD *)v186 - 2) )
          {
            v142 = (3 * v92 + 1) >> 1;
            v143 = 8 * v142 + 8;
            if ( 8 * v92 + 8 >= v143 || v92 >= v142 )
            {
              v172 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v224, "Overflow encountered when expanding vector");
              *v172 = (char *)off_1C63128;
              sub_2333C0(v172 + 1, v224);
              sub_233E40((__int64)v224);
              __cxa_throw(v172, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v144 = (unsigned int *)sub_186B300(v186 - 1, v143);
            v145 = v144[1];
            v91 = v144 + 2;
            *v144 = v142;
            v186 = v91;
            LODWORD(v144) = v145;
            v95 = &v91[v145];
            v94 = (_DWORD)v144 + 1;
          }
          else
          {
            v93 = v92;
            v94 = v92 + 1;
            v95 = &v186[v93];
          }
        }
        else
        {
          v167 = (_QWORD *)sub_186B270(0x18u);
          *v167 = 2;
          v186 = v167 + 1;
          v95 = v167 + 1;
          v91 = v167 + 1;
          v94 = 1;
        }
        *v95 = v176;
        *((_DWORD *)v91 - 1) = v94;
        ++*(_DWORD *)(v42 + 8);
        v96 = *((_DWORD *)v91 - 1);
        if ( v96 == *((_DWORD *)v91 - 2) )
        {
          v146 = (3 * v96 + 1) >> 1;
          v147 = 8 * v146 + 8;
          if ( 8 * v96 + 8 >= v147 || v96 >= v146 )
          {
            v171 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v224, "Overflow encountered when expanding vector");
            *v171 = (char *)off_1C63128;
            sub_2333C0(v171 + 1, v224);
            sub_233E40((__int64)v224);
            __cxa_throw(v171, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v148 = (unsigned int *)sub_186B300(v186 - 1, v147);
          v149 = v148 + 2;
          *v148 = v146;
          v96 = v148[1];
          v186 = v149;
        }
        v186[v96] = v42;
        *((_DWORD *)v186 - 1) = v96 + 1;
        sub_148BC40(v178, v191, 0xFFFFFFFFLL);
      }
      else
      {
LABEL_181:
        if ( v191 )
          ++*(_DWORD *)(v191 + 8);
        v114 = *(_QWORD **)(v177 + 136);
        if ( v114 )
        {
          v115 = *((_DWORD *)v114 - 1);
          if ( v115 == *((_DWORD *)v114 - 2) )
          {
            v158 = (3 * v115 + 1) >> 1;
            v159 = 8 * v158 + 8;
            if ( 8 * v115 + 8 >= v159 || v115 >= v158 )
            {
              v170 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v224, "Overflow encountered when expanding vector");
              *v170 = (char *)off_1C63128;
              sub_2333C0(v170 + 1, v224);
              sub_233E40((__int64)v224);
              __cxa_throw(v170, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v160 = (unsigned int *)sub_186B300(v114 - 1, v159);
            v161 = v160[1];
            v114 = v160 + 2;
            *v160 = v158;
            LODWORD(v160) = v161;
            *(_QWORD *)(v177 + 136) = v114;
            v118 = &v114[v161];
            v117 = (_DWORD)v160 + 1;
          }
          else
          {
            v116 = v115;
            v117 = v115 + 1;
            v118 = &v114[v116];
          }
        }
        else
        {
          v166 = (_QWORD *)sub_186B270(0x18u);
          *v166 = 2;
          v114 = v166 + 1;
          *(_QWORD *)(v177 + 136) = v166 + 1;
          v118 = v166 + 1;
          v117 = 1;
        }
        --v17;
        *v118 = v191;
        *((_DWORD *)v114 - 1) = v117;
        v119 = *(_QWORD *)(v14 + 16);
        *(_QWORD *)(v119 + 8 * v181) = v191;
        v120 = (unsigned int)(*(_DWORD *)(v119 - 4) - 1);
        *(_QWORD *)(v119 + v40) = *(_QWORD *)(v119 + 8 * v120);
        *(_DWORD *)(v119 - 4) = v120;
        ++*(_DWORD *)(v176 + 8);
        if ( v186 )
        {
          v121 = *((_DWORD *)v186 - 1);
          if ( v121 == *((_DWORD *)v186 - 2) )
          {
            v154 = (3 * v121 + 1) >> 1;
            v155 = 8 * v154 + 8;
            if ( 8 * v121 + 8 >= v155 || v121 >= v154 )
            {
              v168 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v224, "Overflow encountered when expanding vector");
              *v168 = (char *)off_1C63128;
              sub_2333C0(v168 + 1, v224);
              sub_233E40((__int64)v224);
              __cxa_throw(v168, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v156 = (unsigned int *)sub_186B300(v186 - 1, v155);
            v157 = v156[1];
            *v156 = v154;
            v186 = v156 + 2;
            LODWORD(v156) = v157;
            v124 = &v186[v157];
            v123 = (_DWORD)v156 + 1;
          }
          else
          {
            v122 = v121;
            v123 = v121 + 1;
            v124 = &v186[v122];
          }
        }
        else
        {
          v165 = (_QWORD *)sub_186B270(0x18u);
          *v165 = 2;
          v186 = v165 + 1;
          v124 = v165 + 1;
          v123 = 1;
        }
        *v124 = v176;
        *((_DWORD *)v186 - 1) = v123;
        ++*(_DWORD *)(v42 + 8);
        v125 = *((_DWORD *)v186 - 1);
        if ( v125 == *((_DWORD *)v186 - 2) )
        {
          v150 = (3 * v125 + 1) >> 1;
          v151 = 8 * v150 + 8;
          if ( 8 * v125 + 8 >= v151 || v125 >= v150 )
          {
            v169 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v224, "Overflow encountered when expanding vector");
            *v169 = (char *)off_1C63128;
            sub_2333C0(v169 + 1, v224);
            sub_233E40((__int64)v224);
            __cxa_throw(v169, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v152 = (unsigned int *)sub_186B300(v186 - 1, v151);
          v153 = v152 + 2;
          *v152 = v150;
          v125 = v152[1];
          v186 = v153;
        }
        v186[v125] = v42;
        *((_DWORD *)v186 - 1) = v125 + 1;
        if ( v191 )
          ++*(_DWORD *)(v191 + 8);
        if ( v193 )
        {
          v126 = *(_DWORD *)(v193 - 4);
          if ( v126 == *(_DWORD *)(v193 - 8) )
          {
            v138 = (3 * v126 + 1) >> 1;
            v139 = 8 * v138 + 8;
            if ( 8 * v126 + 8 >= v139 || v126 >= v138 )
            {
              v173 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v224, "Overflow encountered when expanding vector");
              *v173 = (char *)off_1C63128;
              sub_2333C0(v173 + 1, v224);
              sub_233E40((__int64)v224);
              __cxa_throw(v173, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v140 = (unsigned int *)sub_186B300((void *)(v193 - 8), v139);
            v141 = v140[1];
            v128 = v140 + 2;
            *v140 = v138;
            v193 = (unsigned __int64)v128;
            LODWORD(v140) = v141;
            v130 = &v128[v141];
            v129 = (_DWORD)v140 + 1;
          }
          else
          {
            v127 = v126;
            v128 = (_QWORD *)v193;
            v129 = v126 + 1;
            v130 = (_QWORD *)(v193 + 8 * v127);
          }
        }
        else
        {
          v164 = (_QWORD *)sub_186B270(0x18u);
          *v164 = 2;
          v193 = (unsigned __int64)(v164 + 1);
          v130 = v164 + 1;
          v128 = v164 + 1;
          v129 = 1;
        }
        *v130 = v191;
        *((_DWORD *)v128 - 1) = v129;
      }
      if ( v215 )
        sub_186B220(v215 - 2);
      if ( v198 )
        sub_186B220((void *)(v198 - 8));
      if ( v188 )
        sub_186B220((void *)(v188 - 8));
      if ( v191 )
      {
        v182 = *(_DWORD *)(v191 + 8);
        *(_DWORD *)(v191 + 8) = v182 - 1;
        if ( v182 == 1 )
          sub_15D7BC0(v213, v191);
      }
      v97 = v221;
      if ( v221 )
      {
        v98 = (unsigned __int64)&v221[*((unsigned int *)v221 - 1)];
        if ( (unsigned __int64)v221 >= v98 )
          goto LABEL_123;
        do
        {
          while ( 1 )
          {
            v99 = *v97;
            if ( *v97 )
            {
              v74 = (*(_DWORD *)(v99 + 8))-- == 1;
              if ( v74 )
                break;
            }
            if ( (unsigned __int64)++v97 >= v98 )
              goto LABEL_122;
          }
          sub_15D7BC0(v220, v99);
          ++v97;
        }
        while ( (unsigned __int64)v97 < v98 );
LABEL_122:
        v97 = v221;
        if ( v221 )
LABEL_123:
          sub_186B220(v97 - 1);
      }
      v100 = *(__int64 **)v219;
      if ( *(_QWORD *)v219 )
      {
        v101 = *(_QWORD *)v219 + 8LL * *(unsigned int *)(*(_QWORD *)v219 - 4LL);
        if ( *(_QWORD *)v219 >= v101 )
          goto LABEL_132;
        do
        {
          while ( 1 )
          {
            v102 = *v100;
            if ( *v100 )
            {
              v74 = (*(_DWORD *)(v102 + 8))-- == 1;
              if ( v74 )
                break;
            }
            if ( (unsigned __int64)++v100 >= v101 )
              goto LABEL_131;
          }
          sub_15D7BC0(v218, v102);
          ++v100;
        }
        while ( (unsigned __int64)v100 < v101 );
LABEL_131:
        v100 = *(__int64 **)v219;
        if ( *(_QWORD *)v219 )
LABEL_132:
          sub_186B220(v100 - 1);
      }
      goto LABEL_133;
    }
LABEL_137:
    *(_BYTE *)(v177 + 120) = 1;
    v216[1] = v186;
    v217[1] = v193;
    sub_530480(v177, a2, (__int64)v216, v217, (_QWORD *)(v14 + 16));
    if ( v193 )
    {
      v103 = (__int64 *)v193;
      v104 = v193 + 8LL * *(unsigned int *)(v193 - 4);
      if ( v193 < v104 )
      {
        do
        {
          while ( 1 )
          {
            v105 = *v103;
            if ( *v103 )
            {
              v74 = (*(_DWORD *)(v105 + 8))-- == 1;
              if ( v74 )
                break;
            }
            if ( (unsigned __int64)++v103 >= v104 )
              goto LABEL_144;
          }
          ++v103;
          sub_15D7BC0(v196, v105);
        }
        while ( (unsigned __int64)v103 < v104 );
      }
LABEL_144:
      sub_186B220((void *)(v193 - 8));
    }
    if ( v186 )
    {
      v106 = v186;
      v107 = (unsigned __int64)&v186[*((unsigned int *)v186 - 1)];
      if ( (unsigned __int64)v186 < v107 )
      {
        do
        {
          while ( 1 )
          {
            v108 = *v106;
            if ( *v106 )
            {
              v74 = (*(_DWORD *)(v108 + 8))-- == 1;
              if ( v74 )
                break;
            }
            if ( (unsigned __int64)++v106 >= v107 )
              goto LABEL_152;
          }
          ++v106;
          sub_15D7BC0(v196, v108);
        }
        while ( (unsigned __int64)v106 < v107 );
      }
LABEL_152:
      sub_186B220(v186 - 1);
    }
    if ( *((_QWORD *)&v235 + 1) )
      sub_186B220((void *)(*((_QWORD *)&v235 + 1) - 8LL));
    if ( (_QWORD)v235 )
      sub_186B220((void *)(v235 - 8));
    if ( *((_QWORD *)&v234 + 1) )
      sub_186B220((void *)(*((_QWORD *)&v234 + 1) - 8LL));
    if ( (_QWORD)v234 )
      sub_186B220((void *)(v234 - 8));
    if ( ptr )
      sub_186B220(ptr);
    v109 = v228;
    v110 = (char *)v228 + 8 * (unsigned int)v229;
    v111 = (char *)v228;
    if ( v228 != v110 )
    {
      do
      {
        v112 = *(_QWORD *)v111;
        v111 += 8;
        *(_BYTE *)(v112 + 6) &= ~1u;
      }
      while ( v110 != v111 );
    }
    result = v230;
    LODWORD(v229) = 0;
    if ( v109 != v230 && v109 )
      result = (_BYTE *)sub_186B220(v109);
    if ( v226[0] )
      return (_BYTE *)sub_186B220(v226[0]);
  }
  return result;
}

