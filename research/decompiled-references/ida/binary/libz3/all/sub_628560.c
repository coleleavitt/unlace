__int64 __fastcall sub_628560(const __m128i *a1, void (__fastcall ****a2)(void *))
{
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 result; // rax
  void (__fastcall ***v6)(void *); // rsi
  __int64 v7; // r12
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdi
  int v18; // edx
  _QWORD *v19; // rbx
  unsigned int v20; // r14d
  __int64 v21; // rax
  __int64 **v22; // rax
  __int64 v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // ecx
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rax
  int v29; // edx
  void *v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rsi
  void *v35; // rdi
  bool v36; // zf
  __m128i v37; // xmm0
  unsigned int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // r12
  __int64 v45; // rax
  unsigned int v46; // ebx
  __int64 v47; // r14
  int v48; // eax
  int v49; // r8d
  int v50; // r9d
  __int64 v51; // rax
  __int64 v52; // r14
  unsigned int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  __int64 *v56; // rdx
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // r14
  __int64 *v60; // rcx
  unsigned int v61; // eax
  __int64 v62; // rdx
  int v63; // eax
  __int64 *v64; // rdx
  __int64 *v65; // rcx
  unsigned int v66; // eax
  __int64 v67; // rdx
  int v68; // eax
  __int64 *v69; // rdx
  unsigned int v70; // eax
  __int64 v71; // rdx
  int v72; // eax
  _QWORD *v73; // rdx
  int v74; // edx
  int v75; // ecx
  __int64 v76; // rsi
  __int64 v77; // r9
  __int64 v78; // rdi
  __int64 *v79; // rax
  __int64 v80; // rdi
  __int64 v81; // rdx
  __int64 *v82; // r8
  __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rsi
  void *v86; // rdi
  __int64 v87; // rbx
  __int64 v88; // r14
  __int64 v89; // r13
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 *v92; // rbx
  unsigned __int64 v93; // r13
  __int64 v94; // rsi
  __int64 *v95; // rbx
  unsigned __int64 v96; // r14
  __int64 v97; // rsi
  __int64 *v98; // rbx
  unsigned __int64 v99; // r14
  __int64 v100; // rsi
  _QWORD *v101; // rbx
  void *v102; // rdi
  __int64 *v103; // rbx
  unsigned __int64 v104; // r14
  __int64 v105; // rsi
  __int64 v106; // rdi
  __int64 *v107; // rbx
  unsigned __int64 v108; // r14
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 *v111; // rbx
  unsigned __int64 v112; // r14
  __int64 v113; // rsi
  __int64 v114; // rdi
  __int64 v115; // rsi
  void *v116; // rdi
  void (__fastcall ***v117)(void *); // rbx
  void (__fastcall ***v118)(_QWORD); // rcx
  unsigned int v119; // eax
  __int64 v120; // rdx
  _QWORD *v121; // rdi
  int v122; // eax
  _QWORD *v123; // rdx
  unsigned int v124; // edx
  size_t v125; // rsi
  unsigned int *v126; // rax
  unsigned int v127; // r13d
  size_t v128; // rsi
  unsigned int *v129; // rax
  __int64 v130; // rdx
  unsigned int v131; // r14d
  size_t v132; // rsi
  unsigned int *v133; // rax
  __int64 v134; // rdx
  unsigned int v135; // r14d
  size_t v136; // rsi
  unsigned int *v137; // rax
  __int64 v138; // rdx
  unsigned int v139; // r13d
  size_t v140; // rsi
  unsigned int *v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rax
  _QWORD *v144; // rax
  __int64 v145; // rax
  __int64 v146; // r12
  __int64 v147; // rsi
  void *v148; // rdi
  __int64 *v149; // r12
  unsigned __int64 v150; // r14
  __int64 v151; // rsi
  _QWORD *v152; // rax
  _QWORD *v153; // rax
  _QWORD *v154; // rax
  _QWORD *v155; // rax
  _QWORD *v156; // rax
  void *v157; // rbx
  char **v158; // rbx
  char **v159; // rbx
  char **v160; // rbx
  char **exception; // r12
  char **v162; // rbx
  char **v163; // rbx
  int v164; // [rsp-8h] [rbp-1C8h]
  __int64 v165; // [rsp+0h] [rbp-1C0h]
  int v166; // [rsp+0h] [rbp-1C0h]
  void (__fastcall ****v167)(void *); // [rsp+8h] [rbp-1B8h]
  int v168; // [rsp+8h] [rbp-1B8h]
  void *v169; // [rsp+10h] [rbp-1B0h]
  _QWORD *v170; // [rsp+10h] [rbp-1B0h]
  int v171; // [rsp+10h] [rbp-1B0h]
  __int64 v172; // [rsp+18h] [rbp-1A8h]
  int v173; // [rsp+18h] [rbp-1A8h]
  __int64 v174; // [rsp+18h] [rbp-1A8h]
  _DWORD *ptr; // [rsp+20h] [rbp-1A0h]
  int ptra; // [rsp+20h] [rbp-1A0h]
  int *v177; // [rsp+28h] [rbp-198h]
  char v178; // [rsp+28h] [rbp-198h]
  unsigned int v179; // [rsp+30h] [rbp-190h]
  int v180; // [rsp+30h] [rbp-190h]
  unsigned int v181; // [rsp+34h] [rbp-18Ch]
  _QWORD *v182; // [rsp+38h] [rbp-188h]
  int v183; // [rsp+38h] [rbp-188h]
  __int64 v184; // [rsp+40h] [rbp-180h]
  int v185; // [rsp+40h] [rbp-180h]
  _QWORD *v186; // [rsp+48h] [rbp-178h]
  void *v187; // [rsp+48h] [rbp-178h]
  __int64 v188; // [rsp+50h] [rbp-170h]
  _QWORD *v189; // [rsp+58h] [rbp-168h]
  __int64 *v190; // [rsp+60h] [rbp-160h]
  __int64 *v191; // [rsp+68h] [rbp-158h]
  int v192[2]; // [rsp+68h] [rbp-158h]
  int v193[2]; // [rsp+70h] [rbp-150h]
  void *v194; // [rsp+78h] [rbp-148h]
  int v195[2]; // [rsp+78h] [rbp-148h]
  int v196[2]; // [rsp+78h] [rbp-148h]
  unsigned int v197; // [rsp+80h] [rbp-140h]
  __m128i *v198; // [rsp+80h] [rbp-140h]
  __int64 v199; // [rsp+88h] [rbp-138h]
  _QWORD *v200; // [rsp+88h] [rbp-138h]
  __int64 v201; // [rsp+88h] [rbp-138h]
  int v202; // [rsp+90h] [rbp-130h]
  int v203; // [rsp+98h] [rbp-128h]
  int v204[2]; // [rsp+A0h] [rbp-120h] BYREF
  void *v205; // [rsp+A8h] [rbp-118h]
  __int64 v206; // [rsp+B0h] [rbp-110h]
  __int64 v207; // [rsp+B8h] [rbp-108h]
  __int64 v208; // [rsp+C0h] [rbp-100h]
  __int64 v209; // [rsp+D0h] [rbp-F0h]
  int v210[2]; // [rsp+E0h] [rbp-E0h] BYREF
  __int64 v211; // [rsp+E8h] [rbp-D8h]
  __m128i v212; // [rsp+100h] [rbp-C0h] BYREF
  __int64 *v213; // [rsp+110h] [rbp-B0h]
  __int64 v214; // [rsp+118h] [rbp-A8h]
  __int64 *v215; // [rsp+120h] [rbp-A0h]
  __int64 v216; // [rsp+128h] [rbp-98h]
  __int64 v217; // [rsp+130h] [rbp-90h]
  __int64 v218; // [rsp+138h] [rbp-88h]
  __int64 i; // [rsp+140h] [rbp-80h]
  __int64 *v220; // [rsp+148h] [rbp-78h]
  void *s; // [rsp+150h] [rbp-70h]
  __int64 v222; // [rsp+158h] [rbp-68h]
  void *v223; // [rsp+160h] [rbp-60h]
  __int64 v224; // [rsp+168h] [rbp-58h]
  int v225; // [rsp+170h] [rbp-50h]
  __int64 v226; // [rsp+178h] [rbp-48h]
  _QWORD v227[8]; // [rsp+180h] [rbp-40h] BYREF

  v167 = a2;
  ptr = (_DWORD *)sub_186B270(0xA0u);
  sub_1373200(ptr, a1[2].m128i_i64[0]);
  v4 = a1[4].m128i_i64[0];
  result = (unsigned int)(ptr[4] + 1);
  ptr[4] = result;
  if ( v4 )
  {
    v181 = 0;
    while ( 1 )
    {
      v6 = *v167;
      if ( v181 >= *(_DWORD *)(v4 - 4) )
        goto LABEL_141;
      v7 = *(_QWORD *)(v4 + 8LL * v181);
      v8 = *(_DWORD *)(v7 + 12);
      v9 = 16LL * v181;
      v10 = v9 + a1[4].m128i_i64[1];
      v172 = *(_QWORD *)(a1[3].m128i_i64[0] + 8LL * v181);
      v186 = (_QWORD *)(a1[5].m128i_i64[0] + v9);
      v11 = (__int64 *)v6[6];
      v182 = (_QWORD *)(a1[5].m128i_i64[1] + 8LL * v181);
      v12 = *((unsigned int *)v6 + 14);
      LODWORD(v9) = v12 - 1;
      v12 *= 16;
      v13 = (__int64 *)((char *)v11 + v12);
      v14 = 16LL * (v8 & (unsigned int)v9);
      v15 = (__int64 *)((char *)v11 + v14);
      if ( v14 == v12 )
      {
LABEL_168:
        while ( v15 != v11 )
        {
          v143 = *v11;
          if ( (unsigned __int64)*v11 > 1 )
          {
            if ( *(_DWORD *)(v143 + 12) == v8 && v7 == v143 )
            {
              v16 = v11;
              goto LABEL_24;
            }
          }
          else if ( !v143 )
          {
            break;
          }
          v11 += 2;
        }
LABEL_11:
        *(_QWORD *)v204 = 0;
        v194 = (void *)a1[2].m128i_i64[0];
        v17 = (__int64)v194;
        v205 = v194;
        goto LABEL_12;
      }
      v16 = (__int64 *)((char *)v11 + v14);
      while ( 1 )
      {
        v14 = *v16;
        if ( (unsigned __int64)*v16 > 1 )
          break;
        if ( !v14 )
          goto LABEL_11;
LABEL_8:
        v16 += 2;
        if ( v13 == v16 )
          goto LABEL_168;
      }
      if ( *(_DWORD *)(v14 + 12) != v8 || v7 != v14 )
        goto LABEL_8;
LABEL_24:
      v30 = (void *)a1[2].m128i_i64[0];
      v31 = v16[1];
      *(_QWORD *)v204 = 0;
      v194 = v30;
      v205 = v30;
      if ( v31 )
      {
        v32 = sub_1348CA0(v31, v13, v14, v30, v15, v3);
        v33 = v32;
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        v34 = *(_QWORD *)v204;
        if ( *(_QWORD *)v204 )
        {
          v35 = v205;
          v36 = (*(_DWORD *)(*(_QWORD *)v204 + 8LL))-- == 1;
          if ( v36 )
            sub_15D7BC0(v35, v34);
        }
        *(_QWORD *)v204 = v33;
        goto LABEL_31;
      }
      v17 = (__int64)v30;
LABEL_12:
      v18 = *(_DWORD *)(v7 + 32);
      *(_QWORD *)v210 = v17;
      v19 = nullptr;
      if ( v18 )
      {
        v20 = 0;
        do
        {
          v23 = sub_15DB5C0(v17, v20, *(_QWORD *)(v7 + 8LL * v20 + 48));
          v15 = (__int64 *)v23;
          if ( v23 )
            ++*(_DWORD *)(v23 + 8);
          if ( v19 )
          {
            v24 = *((_DWORD *)v19 - 1);
            if ( v24 == *((_DWORD *)v19 - 2) )
            {
              v25 = (3 * v24 + 1) >> 1;
              v26 = 8 * v25 + 8;
              if ( 8 * v24 + 8 >= (unsigned int)v26 || v24 >= v25 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v212.m128i_i64, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v212);
                sub_233E40((__int64)&v212);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v197 = (3 * v24 + 1) >> 1;
              v199 = v23;
              v27 = (unsigned int *)sub_186B300(v19 - 1, v26);
              v19 = v27 + 2;
              v15 = (__int64 *)v199;
              *v27 = v197;
              v28 = v27[1];
              v29 = v28;
              v22 = (__int64 **)&v19[v28];
              v18 = v29 + 1;
            }
            else
            {
              v21 = v24;
              v18 = v24 + 1;
              v22 = (__int64 **)&v19[v21];
            }
          }
          else
          {
            v201 = v23;
            v152 = (_QWORD *)sub_186B270(0x18u);
            v19 = v152 + 1;
            *v152 = 2;
            v18 = 1;
            v15 = (__int64 *)v201;
            v22 = (__int64 **)(v152 + 1);
          }
          *v22 = v15;
          v17 = a1[2].m128i_i64[0];
          ++v20;
          *((_DWORD *)v19 - 1) = v18;
        }
        while ( v20 < *(_DWORD *)(v7 + 32) );
      }
      v145 = sub_15DC610(
               v17,
               v7,
               v18,
               (int)v19,
               (int)v15,
               v3,
               v165,
               (int)v167,
               (int)v169,
               v172,
               (int)ptr,
               (char)v177,
               v179,
               (int)v182,
               v184,
               v186);
      v146 = v145;
      if ( v145 )
        ++*(_DWORD *)(v145 + 8);
      v147 = *(_QWORD *)v204;
      if ( *(_QWORD *)v204 )
      {
        v148 = v205;
        v36 = (*(_DWORD *)(*(_QWORD *)v204 + 8LL))-- == 1;
        if ( v36 )
          sub_15D7BC0(v148, v147);
      }
      *(_QWORD *)v204 = v146;
      if ( v19 )
      {
        v149 = v19;
        v150 = (unsigned __int64)&v19[*((unsigned int *)v19 - 1)];
        if ( (unsigned __int64)v19 < v150 )
        {
          do
          {
            while ( 1 )
            {
              v151 = *v149;
              if ( *v149 )
              {
                v36 = (*(_DWORD *)(v151 + 8))-- == 1;
                if ( v36 )
                  break;
              }
              if ( (unsigned __int64)++v149 >= v150 )
                goto LABEL_189;
            }
            ++v149;
            sub_15D7BC0(v194, v151);
          }
          while ( (unsigned __int64)v149 < v150 );
        }
LABEL_189:
        sub_186B220(v19 - 1);
      }
LABEL_31:
      v37 = _mm_loadl_epi64(a1 + 2);
      v38 = 0;
      v213 = nullptr;
      v220 = nullptr;
      v215 = nullptr;
      v217 = 0;
      v218 = 0;
      v170 = v227;
      s = v227;
      v39 = *(_QWORD *)(v10 + 8);
      v216 = 0;
      v222 = 1;
      v223 = nullptr;
      v224 = 0;
      v225 = 1065353216;
      v226 = 0;
      v227[0] = 0;
      v198 = &v212;
      v212 = _mm_unpacklo_epi64(v37, v37);
      v214 = v37.m128i_i64[0];
      for ( i = v37.m128i_i64[0]; v39; ++v38 )
      {
        if ( v38 >= *(_DWORD *)(v39 - 4) )
          break;
        v40 = a1[2].m128i_i64[0];
        v41 = *(_QWORD *)(v39 + 8LL * v38);
        v42 = sub_15D1F10(v41);
        v43 = sub_15DB5C0(v40, v38, v42);
        sub_14EA0D0(&v212, v43, v41);
        v39 = *(_QWORD *)(v10 + 8);
      }
      v177 = v204;
      sub_14EA2A0(&v212, *(_QWORD *)v204, v204);
      sub_14E9CE0(&v212);
      v44 = nullptr;
      v189 = nullptr;
      v190 = nullptr;
      v188 = a1[2].m128i_i64[0];
      v206 = v188;
      v208 = v188;
      v209 = v188;
      v200 = nullptr;
      *(_QWORD *)v193 = 0;
      v45 = v186[1];
      if ( v45 )
      {
        v46 = 0;
        do
        {
          if ( v46 >= *(_DWORD *)(v45 - 4) )
            break;
          v47 = a1[2].m128i_i64[0];
          *(_QWORD *)v195 = *(_QWORD *)(v45 + 8LL * v46);
          sub_180C5A0(v210, "C");
          v48 = sub_15E3D10(
                  v47,
                  (int)v210,
                  (int)&qword_18D6CD0,
                  0,
                  0,
                  v195[0],
                  1,
                  v164,
                  v165,
                  (int)v167,
                  (int)v170,
                  v172,
                  (int)ptr,
                  (int)v177,
                  v179,
                  (int)v182,
                  8 * v46,
                  (int)v186,
                  v188,
                  (int)v189,
                  (int)v190,
                  (int)v210,
                  v193[0],
                  v195[0],
                  (int)v198,
                  (int)v200,
                  v202,
                  v203,
                  v204[0],
                  v205,
                  v206,
                  v207);
          v51 = sub_15DC610(v47, v48, 0, 0, v49, v50, v166, v168, v171, v173, ptra, v178, v180, v183, v185, v187);
          v52 = v51;
          if ( v51 )
            ++*(_DWORD *)(v51 + 8);
          if ( v44 )
          {
            v53 = *((_DWORD *)v44 - 1);
            if ( v53 == *((_DWORD *)v44 - 2) )
            {
              v124 = (3 * v53 + 1) >> 1;
              v125 = 8 * v124 + 8;
              if ( 8 * v53 + 8 >= (unsigned int)v125 || v53 >= v124 )
              {
                v158 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v191, "Overflow encountered when expanding vector");
                *v158 = (char *)off_1C63128;
                sub_2333C0(v158 + 1, v191);
                sub_233E40((__int64)v191);
                __cxa_throw(v158, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v179 = (3 * v53 + 1) >> 1;
              v126 = (unsigned int *)sub_186B300(v44 - 1, v125);
              v44 = v126 + 2;
              *v126 = v179;
              LODWORD(v126) = v126[1];
              v56 = &v44[(unsigned int)v126];
              v55 = (_DWORD)v126 + 1;
            }
            else
            {
              v54 = v53;
              v55 = v53 + 1;
              v56 = &v44[v54];
            }
          }
          else
          {
            v144 = (_QWORD *)sub_186B270(0x18u);
            v56 = v144 + 1;
            v44 = v144 + 1;
            *v144 = 2;
            v55 = 1;
          }
          *v56 = v52;
          v57 = a1[2].m128i_i64[0];
          *((_DWORD *)v44 - 1) = v55;
          v58 = sub_15DB5C0(v57, v46, *(_QWORD *)v196);
          sub_14EA0D0(v198, v58, v52);
          v59 = v44[*((_DWORD *)v44 - 1) - 1];
          if ( *(_BYTE *)(*v182 + v46) )
          {
            if ( v59 )
              ++*(_DWORD *)(v59 + 8);
            v60 = *(__int64 **)v193;
            if ( *(_QWORD *)v193 )
            {
              v61 = *(_DWORD *)(*(_QWORD *)v193 - 4LL);
              if ( v61 == *(_DWORD *)(*(_QWORD *)v193 - 8LL) )
              {
                v139 = (3 * v61 + 1) >> 1;
                v140 = 8 * v139 + 8;
                if ( 8 * v61 + 8 >= (unsigned int)v140 || v61 >= v139 )
                {
                  v159 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v191, "Overflow encountered when expanding vector");
                  *v159 = (char *)off_1C63128;
                  sub_2333C0(v159 + 1, v191);
                  sub_233E40((__int64)v191);
                  __cxa_throw(v159, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v141 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v193 - 8LL), v140);
                v142 = v141[1];
                v60 = (__int64 *)(v141 + 2);
                *v141 = v139;
                *(_QWORD *)v193 = v60;
                LODWORD(v141) = v142;
                v64 = &v60[v142];
                v63 = (_DWORD)v141 + 1;
              }
              else
              {
                v62 = v61;
                v63 = v61 + 1;
                v64 = (__int64 *)(*(_QWORD *)v193 + 8 * v62);
              }
            }
            else
            {
              v156 = (_QWORD *)sub_186B270(0x18u);
              v64 = v156 + 1;
              *v156 = 2;
              v63 = 1;
              *(_QWORD *)v193 = v64;
              v60 = v64;
            }
            *v64 = v59;
            *((_DWORD *)v60 - 1) = v63;
            v65 = v190;
            if ( v190 )
            {
              v66 = *((_DWORD *)v190 - 1);
              if ( v66 == *((_DWORD *)v190 - 2) )
              {
                v135 = (3 * v66 + 1) >> 1;
                v136 = 8 * v135 + 8;
                if ( 8 * v66 + 8 >= (unsigned int)v136 || v66 >= v135 )
                {
                  v160 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v191, "Overflow encountered when expanding vector");
                  *v160 = (char *)off_1C63128;
                  sub_2333C0(v160 + 1, v191);
                  sub_233E40((__int64)v191);
                  __cxa_throw(v160, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v137 = (unsigned int *)sub_186B300(v190 - 1, v136);
                v138 = v137[1];
                *v137 = v135;
                v190 = (__int64 *)(v137 + 2);
                v65 = (__int64 *)(v137 + 2);
                LODWORD(v137) = v138;
                v69 = &v190[v138];
                v68 = (_DWORD)v137 + 1;
              }
              else
              {
                v67 = v66;
                v68 = v66 + 1;
                v69 = &v190[v67];
              }
            }
            else
            {
              v155 = (_QWORD *)sub_186B270(0x18u);
              v69 = v155 + 1;
              *v155 = 2;
              v68 = 1;
              v190 = v69;
              v65 = v69;
            }
            *v69 = v184 | 1;
            *((_DWORD *)v65 - 1) = v68;
            if ( v189 )
            {
              v70 = *((_DWORD *)v189 - 1);
              if ( v70 == *((_DWORD *)v189 - 2) )
              {
                v131 = (3 * v70 + 1) >> 1;
                v132 = 8 * v131 + 8;
                if ( 8 * v70 + 8 >= (unsigned int)v132 || v70 >= v131 )
                {
                  v163 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v191, "Overflow encountered when expanding vector");
                  *v163 = (char *)off_1C63128;
                  sub_2333C0(v163 + 1, v191);
                  sub_233E40((__int64)v191);
                  __cxa_throw(v163, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v133 = (unsigned int *)sub_186B300(v189 - 1, v132);
                v134 = v133[1];
                *v133 = v131;
                v189 = v133 + 2;
                LODWORD(v133) = v134;
                v73 = &v189[v134];
                v72 = (_DWORD)v133 + 1;
              }
              else
              {
                v71 = v70;
                v72 = v70 + 1;
                v73 = &v189[v71];
              }
            }
            else
            {
              v154 = (_QWORD *)sub_186B270(0x18u);
              *v154 = 2;
              v189 = v154 + 1;
              v73 = v154 + 1;
              v72 = 1;
            }
            *v73 = *(_QWORD *)v196;
            *((_DWORD *)v189 - 1) = v72;
          }
          else
          {
            if ( v59 )
              ++*(_DWORD *)(v59 + 8);
            if ( v200 )
            {
              v119 = *((_DWORD *)v200 - 1);
              if ( v119 == *((_DWORD *)v200 - 2) )
              {
                v127 = (3 * v119 + 1) >> 1;
                v128 = 8 * v127 + 8;
                if ( 8 * v119 + 8 >= (unsigned int)v128 || v119 >= v127 )
                {
                  v162 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v191, "Overflow encountered when expanding vector");
                  *v162 = (char *)off_1C63128;
                  sub_2333C0(v162 + 1, v191);
                  sub_233E40((__int64)v191);
                  __cxa_throw(v162, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v129 = (unsigned int *)sub_186B300(v200 - 1, v128);
                v130 = v129[1];
                v121 = v129 + 2;
                *v129 = v127;
                v200 = v121;
                LODWORD(v129) = v130;
                v123 = &v121[v130];
                v122 = (_DWORD)v129 + 1;
              }
              else
              {
                v120 = v119;
                v121 = v200;
                v122 = v119 + 1;
                v123 = &v200[v120];
              }
            }
            else
            {
              v153 = (_QWORD *)sub_186B270(0x18u);
              *v153 = 2;
              v200 = v153 + 1;
              v123 = v153 + 1;
              v121 = v153 + 1;
              v122 = 1;
            }
            *v123 = v59;
            *((_DWORD *)v121 - 1) = v122;
          }
          ++v46;
          v45 = v186[1];
        }
        while ( v45 );
      }
      sub_14EA2A0(v198, *(_QWORD *)v204, v177);
      sub_14E9CE0(v198);
      if ( *(_QWORD *)v193 )
      {
        v74 = *(_DWORD *)(*(_QWORD *)v193 - 4LL);
        v75 = v193[0];
      }
      else
      {
        v74 = 0;
        v75 = 0;
      }
      *(_QWORD *)v210 = 0;
      v211 = v188;
      sub_1697FC0(v188, 0, v74, v75, v204[0], (int)v210, v165, (__int64)v167, (__int64)v170, v172, ptr);
      v76 = *(_QWORD *)v204;
      v77 = *(_QWORD *)v210;
      *(_QWORD *)v210 = *(_QWORD *)v204;
      *(_QWORD *)v204 = v77;
      if ( *(_QWORD *)v210 && (v78 = v211, v36 = *(_DWORD *)(v76 + 8) == 1, --*(_DWORD *)(v76 + 8), v36) )
      {
        sub_15D7BC0(v78, v76);
        v79 = v190;
        v77 = *(_QWORD *)v204;
        v80 = a1[2].m128i_i64[0];
        if ( !v190 )
          goto LABEL_191;
LABEL_61:
        v81 = *((unsigned int *)v79 - 1);
        v82 = v79;
      }
      else
      {
        v79 = v190;
        v80 = a1[2].m128i_i64[0];
        if ( v190 )
          goto LABEL_61;
LABEL_191:
        v81 = 0;
        v82 = v79;
      }
      v83 = sub_15DB6A0(v80, 0, v81, v189, v82, v77, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
      v84 = v83;
      if ( v83 )
        ++*(_DWORD *)(v83 + 8);
      v85 = *(_QWORD *)v204;
      if ( *(_QWORD *)v204 )
      {
        v86 = v205;
        v36 = (*(_DWORD *)(*(_QWORD *)v204 + 8LL))-- == 1;
        if ( v36 )
          sub_15D7BC0(v86, v85);
      }
      *(_QWORD *)v204 = v84;
      if ( v200 )
      {
        *(_QWORD *)v192 = &v200[*((unsigned int *)v200 - 1)];
        if ( *(_QWORD **)v192 != v200 )
        {
          v87 = 0;
          do
          {
            v88 = a1[2].m128i_i64[0];
            v89 = v200[v87];
            v90 = sub_15D1F10(v89);
            v91 = sub_15DB5C0(v88, (unsigned int)v87, v90);
            sub_14EA0D0(v198, v89, v91);
            ++v87;
          }
          while ( *(_QWORD **)v192 != &v200[v87] );
          v84 = *(_QWORD *)v204;
        }
      }
      sub_14EA2A0(v198, v84, v177);
      sub_135F9B0(ptr, v174, *(_QWORD *)v204);
      if ( v189 )
        sub_186B220(v189 - 1);
      if ( v190 )
        sub_186B220(v190 - 1);
      if ( v200 )
      {
        v92 = v200;
        v93 = (unsigned __int64)&v200[*((unsigned int *)v200 - 1)];
        if ( (unsigned __int64)v200 < v93 )
        {
          do
          {
            while ( 1 )
            {
              v94 = *v92;
              if ( *v92 )
              {
                v36 = (*(_DWORD *)(v94 + 8))-- == 1;
                if ( v36 )
                  break;
              }
              if ( (unsigned __int64)++v92 >= v93 )
                goto LABEL_83;
            }
            ++v92;
            sub_15D7BC0(v188, v94);
          }
          while ( (unsigned __int64)v92 < v93 );
        }
LABEL_83:
        sub_186B220(v200 - 1);
      }
      if ( *(_QWORD *)v193 )
      {
        v95 = *(__int64 **)v193;
        v96 = *(_QWORD *)v193 + 8LL * *(unsigned int *)(*(_QWORD *)v193 - 4LL);
        if ( *(_QWORD *)v193 < v96 )
        {
          do
          {
            while ( 1 )
            {
              v97 = *v95;
              if ( *v95 )
              {
                v36 = (*(_DWORD *)(v97 + 8))-- == 1;
                if ( v36 )
                  break;
              }
              if ( (unsigned __int64)++v95 >= v96 )
                goto LABEL_91;
            }
            ++v95;
            sub_15D7BC0(v188, v97);
          }
          while ( (unsigned __int64)v95 < v96 );
        }
LABEL_91:
        sub_186B220((void *)(*(_QWORD *)v193 - 8LL));
      }
      if ( v44 )
      {
        v98 = v44;
        if ( v44 < &v44[*((unsigned int *)v44 - 1)] )
        {
          v99 = (unsigned __int64)&v44[*((unsigned int *)v44 - 1)];
          do
          {
            while ( 1 )
            {
              v100 = *v98;
              if ( *v98 )
              {
                v36 = (*(_DWORD *)(v100 + 8))-- == 1;
                if ( v36 )
                  break;
              }
              if ( (unsigned __int64)++v98 >= v99 )
                goto LABEL_99;
            }
            ++v98;
            sub_15D7BC0(v188, v100);
          }
          while ( (unsigned __int64)v98 < v99 );
        }
LABEL_99:
        sub_186B220(v44 - 1);
      }
      v101 = v223;
      if ( v223 )
      {
        do
        {
          v102 = v101;
          v101 = (_QWORD *)*v101;
          operator delete(v102, 0x18u);
        }
        while ( v101 );
      }
      memset(s, 0, 8 * v222);
      v224 = 0;
      v223 = nullptr;
      if ( s != v169 )
        operator delete(s, 8 * v222);
      v103 = v220;
      if ( v220 )
      {
        if ( v220 >= &v220[*((unsigned int *)v220 - 1)] )
          goto LABEL_112;
        v104 = (unsigned __int64)&v220[*((unsigned int *)v220 - 1)];
        do
        {
          while ( 1 )
          {
            v105 = *v103;
            if ( *v103 )
            {
              v106 = i;
              v36 = (*(_DWORD *)(v105 + 8))-- == 1;
              if ( v36 )
                break;
            }
            if ( (unsigned __int64)++v103 >= v104 )
              goto LABEL_111;
          }
          sub_15D7BC0(v106, v105);
          ++v103;
        }
        while ( (unsigned __int64)v103 < v104 );
LABEL_111:
        v103 = v220;
        if ( v220 )
LABEL_112:
          sub_186B220(v103 - 1);
      }
      if ( v218 )
        sub_186B220((void *)(v218 - 8));
      if ( v217 )
        sub_186B220((void *)(v217 - 8));
      if ( v216 )
        sub_186B220((void *)(v216 - 8));
      v107 = v215;
      if ( v215 )
      {
        if ( v215 >= &v215[*((unsigned int *)v215 - 1)] )
          goto LABEL_127;
        v108 = (unsigned __int64)&v215[*((unsigned int *)v215 - 1)];
        do
        {
          while ( 1 )
          {
            v109 = *v107;
            if ( *v107 )
            {
              v110 = v214;
              v36 = (*(_DWORD *)(v109 + 8))-- == 1;
              if ( v36 )
                break;
            }
            if ( (unsigned __int64)++v107 >= v108 )
              goto LABEL_126;
          }
          sub_15D7BC0(v110, v109);
          ++v107;
        }
        while ( (unsigned __int64)v107 < v108 );
LABEL_126:
        v107 = v215;
        if ( v215 )
LABEL_127:
          sub_186B220(v107 - 1);
      }
      v111 = v213;
      if ( v213 )
      {
        if ( v213 >= &v213[*((unsigned int *)v213 - 1)] )
          goto LABEL_136;
        v112 = (unsigned __int64)&v213[*((unsigned int *)v213 - 1)];
        do
        {
          while ( 1 )
          {
            v113 = *v111;
            if ( *v111 )
            {
              v114 = v212.m128i_i64[1];
              v36 = (*(_DWORD *)(v113 + 8))-- == 1;
              if ( v36 )
                break;
            }
            if ( (unsigned __int64)++v111 >= v112 )
              goto LABEL_135;
          }
          sub_15D7BC0(v114, v113);
          ++v111;
        }
        while ( (unsigned __int64)v111 < v112 );
LABEL_135:
        v111 = v213;
        if ( v213 )
LABEL_136:
          sub_186B220(v111 - 1);
      }
      v115 = *(_QWORD *)v204;
      if ( *(_QWORD *)v204 )
      {
        v116 = v205;
        v36 = (*(_DWORD *)(*(_QWORD *)v204 + 8LL))-- == 1;
        if ( v36 )
          sub_15D7BC0(v116, v115);
      }
      v4 = a1[4].m128i_i64[0];
      ++v181;
      if ( !v4 )
      {
LABEL_141:
        result = (unsigned int)ptr[4];
        break;
      }
    }
  }
  ptr[4] = result + 1;
  v117 = *v167;
  if ( !*v167 )
  {
    *v167 = (void (__fastcall ***)(void *))ptr;
    v118 = (void (__fastcall ***)(_QWORD))ptr;
    ptr[4] = result;
    if ( (_DWORD)result )
      return result;
LABEL_199:
    v157 = v118;
    (**v118)(v118);
    return sub_186B220(v157);
  }
  v36 = (*((_DWORD *)v117 + 4))-- == 1;
  if ( v36 )
  {
    (**v117)(v117);
    sub_186B220(v117);
  }
  *v167 = (void (__fastcall ***)(void *))ptr;
  result = (unsigned int)(ptr[4] - 1);
  v118 = (void (__fastcall ***)(_QWORD))ptr;
  ptr[4] = result;
  if ( !(_DWORD)result )
    goto LABEL_199;
  return result;
}

