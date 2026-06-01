__int64 __fastcall sub_47DFA0(_QWORD *a1, const __m128i **a2)
{
  const __m128i *v2; // r12
  __int64 v3; // rax
  const __m128i *v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r13
  void *v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  _QWORD *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // r13
  void *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 *v20; // rbx
  __int64 *v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  _QWORD *v26; // rbx
  __int64 result; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  _DWORD *v30; // rbx
  _DWORD **v31; // rbp
  _DWORD *v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  int v38; // esi
  _QWORD *v39; // r12
  __int64 v40; // rax
  _QWORD *v41; // r14
  _QWORD *v42; // r13
  void *v43; // rdi
  _QWORD *v44; // r14
  unsigned __int64 v45; // r15
  __int64 v46; // r12
  __int64 *v47; // r13
  __int64 v48; // rsi
  _QWORD *v49; // r12
  __int64 v50; // rax
  _QWORD *v51; // r13
  _QWORD *v52; // r14
  void *v53; // rdi
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // r14
  __int64 v56; // r12
  __int64 *v57; // r13
  __int64 v58; // rsi
  char *v59; // rcx
  __int64 *v60; // rbx
  __int64 v61; // rbp
  char *v62; // r12
  __int64 v63; // rdx
  char i; // al
  unsigned int v65; // eax
  __int64 v66; // rdx
  _DWORD *v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rcx
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rdx
  _QWORD *v73; // r12
  unsigned int v74; // r14d
  char v75; // al
  unsigned int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rdi
  __int64 v79; // r13
  __int64 v80; // rax
  int v81; // edx
  _QWORD *v82; // rax
  void *v83; // rbx
  _QWORD *v84; // r13
  __int64 v85; // rax
  _QWORD *v86; // r14
  _QWORD *v87; // r15
  void *v88; // rdi
  _QWORD *v89; // r15
  unsigned __int64 v90; // r13
  __int64 *v91; // r14
  __int64 v92; // rsi
  _QWORD *v93; // r13
  __int64 v94; // rax
  _QWORD *v95; // r15
  _QWORD *v96; // r14
  void *v97; // rdi
  unsigned __int64 v98; // rdi
  __int64 v99; // rax
  __int64 v100; // r13
  unsigned __int64 v101; // rbx
  __int64 *v102; // r14
  unsigned __int64 v103; // r15
  __int64 v104; // rsi
  const __m128i **v105; // r13
  unsigned int v106; // eax
  __int64 v107; // r12
  _QWORD *v108; // rbx
  __int64 v109; // rax
  _QWORD *v110; // r14
  void *v111; // rdi
  __int64 *v112; // rbx
  __int64 *v113; // r14
  __int64 v114; // rsi
  __int64 v115; // rdi
  _QWORD *v116; // rbx
  __int64 v117; // rax
  _QWORD *v118; // r14
  void *v119; // rdi
  __int64 v120; // rdi
  __int64 v121; // rdi
  __int64 *v122; // rbx
  __int64 *v123; // r14
  __int64 v124; // rsi
  __int64 v125; // rdi
  __int64 v126; // rdi
  __int64 v127; // rdi
  _QWORD *v128; // rbx
  unsigned int v129; // ebx
  __int64 v130; // rax
  const __m128i *v131; // rbp
  const __m128i *v132; // r12
  _QWORD *v133; // rbx
  __int64 v134; // rax
  _QWORD *v135; // r13
  void *v136; // rdi
  __int64 *v137; // rbx
  __int64 *v138; // r13
  __int64 v139; // rsi
  __int64 v140; // rdi
  _QWORD *v141; // rbx
  __int64 v142; // rax
  _QWORD *v143; // r13
  void *v144; // rdi
  __int64 v145; // rdi
  __int64 v146; // rdi
  __int64 *v147; // rbx
  __int64 *v148; // r13
  __int64 v149; // rsi
  __int64 v150; // rdi
  __int64 v151; // rdi
  __int64 v152; // rdi
  _QWORD *v153; // rbx
  char *v154; // rbp
  _DWORD *v155; // rbx
  void (__fastcall ***v156)(void *); // r13
  _QWORD *v157; // r13
  __int64 *v158; // r13
  __int64 *v159; // r14
  __int64 v160; // rsi
  __int64 v161; // rdi
  __int64 *v162; // r13
  __int64 *v163; // r14
  __int64 v164; // rsi
  __int64 v165; // rdi
  __int64 *v166; // r13
  __int64 *v167; // r14
  __int64 v168; // rsi
  __int64 v169; // rdi
  __int64 v170; // rsi
  __int64 v171; // rdi
  void (__fastcall ***v172)(void *); // r12
  _QWORD *v173; // r12
  __int64 *v174; // r12
  __int64 *v175; // r13
  __int64 v176; // rsi
  __int64 v177; // rdi
  __int64 *v178; // r12
  __int64 *v179; // r13
  __int64 v180; // rsi
  __int64 v181; // rdi
  __int64 *v182; // r12
  __int64 *v183; // r13
  __int64 v184; // rsi
  __int64 v185; // rdi
  __int64 v186; // rsi
  __int64 v187; // rdi
  void (__fastcall ***v188)(void *); // r13
  _QWORD *v189; // r13
  __int64 *v190; // r13
  __int64 *v191; // r14
  __int64 v192; // rsi
  __int64 v193; // rdi
  __int64 *v194; // r13
  __int64 *v195; // r14
  __int64 v196; // rsi
  __int64 v197; // rdi
  __int64 *v198; // r13
  __int64 *v199; // r14
  __int64 v200; // rsi
  __int64 v201; // rdi
  __int64 v202; // rsi
  __int64 v203; // rdi
  void (__fastcall ***v204)(void *); // r13
  _QWORD *v205; // r13
  __int64 *v206; // r13
  __int64 *v207; // r14
  __int64 v208; // rsi
  __int64 v209; // rdi
  __int64 *v210; // r13
  __int64 *v211; // r14
  __int64 v212; // rsi
  __int64 v213; // rdi
  __int64 *v214; // r13
  __int64 *v215; // r14
  __int64 v216; // rsi
  __int64 v217; // rdi
  __int64 v218; // rsi
  __int64 v219; // rdi
  void (__fastcall ***v220)(void *); // r14
  _QWORD *v221; // r14
  __int64 *v222; // r14
  __int64 *v223; // r15
  __int64 v224; // rsi
  __int64 v225; // rdi
  __int64 *v226; // r14
  __int64 *v227; // r15
  __int64 v228; // rsi
  __int64 v229; // rdi
  __int64 *v230; // r14
  __int64 *v231; // r15
  __int64 v232; // rsi
  __int64 v233; // rdi
  __int64 v234; // rsi
  __int64 v235; // rdi
  char *v236; // rbp
  void *v237; // rbx
  _DWORD *v238; // rbx
  _Unwind_Exception *v239; // [rsp+0h] [rbp-1B8h]
  int v240[2]; // [rsp+8h] [rbp-1B0h]
  int v241; // [rsp+8h] [rbp-1B0h]
  int v242[2]; // [rsp+8h] [rbp-1B0h]
  int v243[2]; // [rsp+8h] [rbp-1B0h]
  int v244; // [rsp+8h] [rbp-1B0h]
  void **v245; // [rsp+10h] [rbp-1A8h]
  __int64 *v246; // [rsp+18h] [rbp-1A0h]
  __int64 v247; // [rsp+20h] [rbp-198h]
  const __m128i *v248; // [rsp+20h] [rbp-198h]
  __int64 v250; // [rsp+30h] [rbp-188h]
  _DWORD *v252; // [rsp+40h] [rbp-178h]
  void *v253; // [rsp+50h] [rbp-168h] BYREF
  const __m128i *v254; // [rsp+58h] [rbp-160h] BYREF
  void *v255; // [rsp+60h] [rbp-158h] BYREF
  __int64 v256; // [rsp+68h] [rbp-150h] BYREF
  __int64 v257; // [rsp+70h] [rbp-148h]
  __int64 v258; // [rsp+88h] [rbp-130h]
  __int64 v259; // [rsp+90h] [rbp-128h]
  unsigned __int64 v260; // [rsp+98h] [rbp-120h]
  __int64 v261; // [rsp+A0h] [rbp-118h]
  __int64 v262; // [rsp+A8h] [rbp-110h]
  _QWORD *v263; // [rsp+B0h] [rbp-108h]
  __int64 v264; // [rsp+C0h] [rbp-F8h]
  _QWORD *v265; // [rsp+C8h] [rbp-F0h]
  _QWORD *v266; // [rsp+D0h] [rbp-E8h]
  void *v267; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v268; // [rsp+F8h] [rbp-C0h]
  _BYTE v269[184]; // [rsp+100h] [rbp-B8h] BYREF

  v2 = *a2;
  if ( *a2 )
  {
    v3 = v2[-1].m128i_u32[3];
    if ( (_DWORD)v3 )
    {
      v4 = (const __m128i *)((char *)v2 + 136 * v3);
      do
      {
        v5 = (_QWORD *)v2[7].m128i_i64[0];
        if ( v5 )
        {
          v6 = *((unsigned int *)v5 - 1);
          if ( (_DWORD)v6 )
          {
            v7 = &v5[v6];
            do
            {
              while ( *v5 )
              {
                v8 = (void *)(*v5++ - 8LL);
                sub_186B220(v8);
                if ( v5 == v7 )
                  goto LABEL_9;
              }
              ++v5;
            }
            while ( v5 != v7 );
LABEL_9:
            v5 = (_QWORD *)v2[7].m128i_i64[0];
          }
          sub_186B220(v5 - 1);
        }
        v9 = (__int64 *)v2[6].m128i_i64[1];
        if ( v9 )
        {
          v10 = &v9[*((unsigned int *)v9 - 1)];
          if ( v9 >= v10 )
            goto LABEL_19;
          do
          {
            while ( 1 )
            {
              v11 = *v9;
              if ( *v9 )
              {
                v12 = v2[6].m128i_i64[0];
                v13 = (*(_DWORD *)(v11 + 8))-- == 1;
                if ( v13 )
                  break;
              }
              if ( ++v9 >= v10 )
                goto LABEL_18;
            }
            sub_15D7BC0(v12, v11);
            ++v9;
          }
          while ( v9 < v10 );
LABEL_18:
          v9 = (__int64 *)v2[6].m128i_i64[1];
          if ( v9 )
LABEL_19:
            sub_186B220(v9 - 1);
        }
        v14 = (_QWORD *)v2[5].m128i_i64[0];
        if ( v14 )
        {
          v15 = *((unsigned int *)v14 - 1);
          if ( (_DWORD)v15 )
          {
            v16 = &v14[v15];
            do
            {
              while ( *v14 )
              {
                v17 = (void *)(*v14++ - 8LL);
                sub_186B220(v17);
                if ( v16 == v14 )
                  goto LABEL_25;
              }
              ++v14;
            }
            while ( v14 != v16 );
LABEL_25:
            v14 = (_QWORD *)v2[5].m128i_i64[0];
          }
          sub_186B220(v14 - 1);
        }
        v18 = v2[4].m128i_i64[1];
        if ( v18 )
          sub_186B220((void *)(v18 - 8));
        v19 = v2[4].m128i_i64[0];
        if ( v19 )
          sub_186B220((void *)(v19 - 8));
        v20 = (__int64 *)v2[3].m128i_i64[1];
        if ( v20 )
        {
          v21 = &v20[*((unsigned int *)v20 - 1)];
          if ( v20 >= v21 )
            goto LABEL_39;
          do
          {
            while ( 1 )
            {
              v22 = *v20;
              if ( *v20 )
              {
                v23 = v2[3].m128i_i64[0];
                v13 = (*(_DWORD *)(v22 + 8))-- == 1;
                if ( v13 )
                  break;
              }
              if ( ++v20 >= v21 )
                goto LABEL_38;
            }
            sub_15D7BC0(v23, v22);
            ++v20;
          }
          while ( v20 < v21 );
LABEL_38:
          v20 = (__int64 *)v2[3].m128i_i64[1];
          if ( v20 )
LABEL_39:
            sub_186B220(v20 - 1);
        }
        v24 = v2[2].m128i_i64[1];
        if ( v24 )
          sub_186B220((void *)(v24 - 8));
        v25 = v2[1].m128i_i64[0];
        if ( v25 )
          sub_186B220((void *)(v25 - 8));
        v26 = (_QWORD *)v2->m128i_i64[0];
        if ( v2->m128i_i64[0] )
        {
          v13 = (*(_DWORD *)v26)-- == 1;
          if ( v13 )
          {
            v156 = (void (__fastcall ***)(void *))v26[11];
            if ( v156 )
            {
              v13 = (*((_DWORD *)v156 + 4))-- == 1;
              if ( v13 )
              {
                (**v156)(v156);
                sub_186B220(v156);
              }
            }
            v157 = (_QWORD *)v26[10];
            if ( v157 )
            {
              v13 = (*(_DWORD *)v157)-- == 1;
              if ( v13 )
              {
                sub_41CB00(v157);
                sub_186B220(v157);
              }
            }
            v158 = (__int64 *)v26[9];
            if ( v158 )
            {
              v159 = &v158[*((unsigned int *)v158 - 1)];
              if ( v158 >= v159 )
                goto LABEL_312;
              do
              {
                while ( 1 )
                {
                  v160 = *v158;
                  if ( *v158 )
                  {
                    v161 = v26[8];
                    v13 = (*(_DWORD *)(v160 + 8))-- == 1;
                    if ( v13 )
                      break;
                  }
                  if ( ++v158 >= v159 )
                    goto LABEL_311;
                }
                sub_15D7BC0(v161, v160);
                ++v158;
              }
              while ( v158 < v159 );
LABEL_311:
              v158 = (__int64 *)v26[9];
              if ( v158 )
LABEL_312:
                sub_186B220(v158 - 1);
            }
            v162 = (__int64 *)v26[7];
            if ( v162 )
            {
              v163 = &v162[*((unsigned int *)v162 - 1)];
              if ( v162 >= v163 )
                goto LABEL_321;
              do
              {
                while ( 1 )
                {
                  v164 = *v162;
                  if ( *v162 )
                  {
                    v165 = v26[6];
                    v13 = (*(_DWORD *)(v164 + 8))-- == 1;
                    if ( v13 )
                      break;
                  }
                  if ( ++v162 >= v163 )
                    goto LABEL_320;
                }
                sub_15D7BC0(v165, v164);
                ++v162;
              }
              while ( v162 < v163 );
LABEL_320:
              v162 = (__int64 *)v26[7];
              if ( v162 )
LABEL_321:
                sub_186B220(v162 - 1);
            }
            v166 = (__int64 *)v26[5];
            if ( v166 )
            {
              v167 = &v166[*((unsigned int *)v166 - 1)];
              if ( v166 >= v167 )
                goto LABEL_330;
              do
              {
                while ( 1 )
                {
                  v168 = *v166;
                  if ( *v166 )
                  {
                    v169 = v26[4];
                    v13 = (*(_DWORD *)(v168 + 8))-- == 1;
                    if ( v13 )
                      break;
                  }
                  if ( ++v166 >= v167 )
                    goto LABEL_329;
                }
                sub_15D7BC0(v169, v168);
                ++v166;
              }
              while ( v166 < v167 );
LABEL_329:
              v166 = (__int64 *)v26[5];
              if ( v166 )
LABEL_330:
                sub_186B220(v166 - 1);
            }
            v170 = v26[2];
            if ( v170 )
            {
              v171 = v26[3];
              v13 = (*(_DWORD *)(v170 + 8))-- == 1;
              if ( v13 )
                sub_15D7BC0(v171, v170);
            }
            sub_186B220(v26);
          }
        }
        v2 = (const __m128i *)((char *)v2 + 136);
      }
      while ( v2 != v4 );
      v2 = *a2;
    }
    v2[-1].m128i_i32[3] = 0;
  }
  result = a1[10];
  if ( !result || *(_DWORD *)(result - 4) <= 1u )
    return result;
  v28 = *a1;
  v267 = nullptr;
  v245 = &v267;
  v29 = sub_731290(v28, (unsigned int)&v267);
  v252 = (_DWORD *)v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  sub_18572D0(&v267);
  v30 = (_DWORD *)sub_186B270(0x80u);
  sub_ED2A30(v30, *a1, 0, 0, 0);
  v31 = (_DWORD **)a1[10];
  ++v30[8];
  v267 = v269;
  v253 = v30;
  v268 = 0x1000000000LL;
  if ( v31 )
  {
    *(_QWORD *)v240 = &v31[17 * *((unsigned int *)v31 - 1)];
    if ( v31 != *(_DWORD ***)v240 )
    {
      v246 = &v256;
      do
      {
        v32 = *v31;
        if ( *v31 )
          ++*v32;
        v255 = v32;
        sub_482680(v246, v31 + 1);
        v33 = v255;
        v38 = sub_407E90(v255, (__int64)(v31 + 1), v34, v35, v36, v37);
        sub_EDBA20((int)v253, v38, 0, v239, v240[0], (int)v245, (__int64)v246, v247);
        v39 = v266;
        if ( v266 )
        {
          v40 = *((unsigned int *)v266 - 1);
          v41 = v266;
          v42 = &v266[v40];
          if ( (_DWORD)v40 )
          {
            do
            {
              while ( *v41 )
              {
                v43 = (void *)(*v41++ - 8LL);
                sub_186B220(v43);
                if ( v42 == v41 )
                  goto LABEL_62;
              }
              ++v41;
            }
            while ( v41 != v42 );
          }
LABEL_62:
          sub_186B220(v39 - 1);
        }
        v44 = v265;
        if ( v265 )
        {
          v45 = (unsigned __int64)&v265[*((unsigned int *)v265 - 1)];
          if ( (unsigned __int64)v265 < v45 )
          {
            v46 = v264;
            v47 = v265;
            do
            {
              while ( 1 )
              {
                v48 = *v47;
                if ( *v47 )
                {
                  v13 = (*(_DWORD *)(v48 + 8))-- == 1;
                  if ( v13 )
                    break;
                }
                if ( (unsigned __int64)++v47 >= v45 )
                  goto LABEL_70;
              }
              ++v47;
              sub_15D7BC0(v46, v48);
            }
            while ( (unsigned __int64)v47 < v45 );
          }
LABEL_70:
          sub_186B220(v44 - 1);
        }
        v49 = v263;
        if ( v263 )
        {
          v50 = *((unsigned int *)v263 - 1);
          v51 = v263;
          v52 = &v263[v50];
          if ( (_DWORD)v50 )
          {
            do
            {
              while ( *v51 )
              {
                v53 = (void *)(*v51++ - 8LL);
                sub_186B220(v53);
                if ( v51 == v52 )
                  goto LABEL_75;
              }
              ++v51;
            }
            while ( v51 != v52 );
          }
LABEL_75:
          sub_186B220(v49 - 1);
        }
        if ( v262 )
          sub_186B220((void *)(v262 - 8));
        if ( v261 )
          sub_186B220((void *)(v261 - 8));
        v54 = v260;
        if ( v260 )
        {
          v55 = v260 + 8LL * *(unsigned int *)(v260 - 4);
          if ( v260 < v55 )
          {
            v56 = v259;
            v57 = (__int64 *)v260;
            do
            {
              while ( 1 )
              {
                v58 = *v57;
                if ( *v57 )
                {
                  v13 = (*(_DWORD *)(v58 + 8))-- == 1;
                  if ( v13 )
                    break;
                }
                if ( (unsigned __int64)++v57 >= v55 )
                  goto LABEL_87;
              }
              ++v57;
              sub_15D7BC0(v56, v58);
            }
            while ( (unsigned __int64)v57 < v55 );
          }
LABEL_87:
          sub_186B220((void *)(v54 - 8));
        }
        if ( v258 )
          sub_186B220((void *)(v258 - 8));
        if ( v257 )
          sub_186B220((void *)(v257 - 8));
        v13 = (*(_DWORD *)v33)-- == 1;
        if ( v13 )
        {
          v172 = (void (__fastcall ***)(void *))v33[11];
          if ( v172 )
          {
            v13 = (*((_DWORD *)v172 + 4))-- == 1;
            if ( v13 )
            {
              (**v172)(v172);
              sub_186B220(v172);
            }
          }
          v173 = (_QWORD *)v33[10];
          if ( v173 )
          {
            v13 = (*(_DWORD *)v173)-- == 1;
            if ( v13 )
            {
              sub_41CB00(v173);
              sub_186B220(v173);
            }
          }
          v174 = (__int64 *)v33[9];
          if ( v174 )
          {
            v175 = &v174[*((unsigned int *)v174 - 1)];
            if ( v174 >= v175 )
              goto LABEL_349;
            do
            {
              while ( 1 )
              {
                v176 = *v174;
                if ( *v174 )
                {
                  v177 = v33[8];
                  v13 = (*(_DWORD *)(v176 + 8))-- == 1;
                  if ( v13 )
                    break;
                }
                if ( ++v174 >= v175 )
                  goto LABEL_348;
              }
              sub_15D7BC0(v177, v176);
              ++v174;
            }
            while ( v174 < v175 );
LABEL_348:
            v174 = (__int64 *)v33[9];
            if ( v174 )
LABEL_349:
              sub_186B220(v174 - 1);
          }
          v178 = (__int64 *)v33[7];
          if ( v178 )
          {
            v179 = &v178[*((unsigned int *)v178 - 1)];
            if ( v178 >= v179 )
              goto LABEL_358;
            do
            {
              while ( 1 )
              {
                v180 = *v178;
                if ( *v178 )
                {
                  v181 = v33[6];
                  v13 = (*(_DWORD *)(v180 + 8))-- == 1;
                  if ( v13 )
                    break;
                }
                if ( ++v178 >= v179 )
                  goto LABEL_357;
              }
              sub_15D7BC0(v181, v180);
              ++v178;
            }
            while ( v178 < v179 );
LABEL_357:
            v178 = (__int64 *)v33[7];
            if ( v178 )
LABEL_358:
              sub_186B220(v178 - 1);
          }
          v182 = (__int64 *)v33[5];
          if ( v182 )
          {
            v183 = &v182[*((unsigned int *)v182 - 1)];
            if ( v182 >= v183 )
              goto LABEL_367;
            do
            {
              while ( 1 )
              {
                v184 = *v182;
                if ( *v182 )
                {
                  v185 = v33[4];
                  v13 = (*(_DWORD *)(v184 + 8))-- == 1;
                  if ( v13 )
                    break;
                }
                if ( ++v182 >= v183 )
                  goto LABEL_366;
              }
              sub_15D7BC0(v185, v184);
              ++v182;
            }
            while ( v182 < v183 );
LABEL_366:
            v182 = (__int64 *)v33[5];
            if ( v182 )
LABEL_367:
              sub_186B220(v182 - 1);
          }
          v186 = v33[2];
          if ( v186 )
          {
            v187 = v33[3];
            v13 = (*(_DWORD *)(v186 + 8))-- == 1;
            if ( v13 )
              sub_15D7BC0(v187, v186);
          }
          sub_186B220(v33);
        }
        v31 += 17;
      }
      while ( *(_DWORD ***)v240 != v31 );
    }
  }
  (*(void (__fastcall **)(_DWORD *, void **, void **))(*(_QWORD *)v252 + 128LL))(v252, &v253, v245);
  v59 = (char *)v267;
  v60 = *(__int64 **)v267;
  v61 = a1[10];
  v62 = (char *)v267;
  v63 = *(_QWORD *)(*(_QWORD *)v267 + 72LL);
  if ( v63 )
  {
    for ( i = *(_BYTE *)(v63 + 3) >> 6; !i; i = *(_BYTE *)(v63 + 3) >> 6 )
      v63 = *(_QWORD *)(v63 + 16);
    if ( i == 1 )
    {
      LODWORD(v63) = *(_DWORD *)(v63 + 4) + 1;
    }
    else if ( i == 2 )
    {
      LODWORD(v63) = *(_DWORD *)(v63 + 4) - 1;
    }
    else
    {
      LODWORD(v63) = *(_DWORD *)(v63 + 4);
    }
    if ( v61 )
    {
LABEL_100:
      v65 = *(_DWORD *)(v61 - 4);
      if ( v65 != (_DWORD)v63 )
      {
        v66 = v65;
        v250 = v61 + 136LL * v65;
        if ( v250 == v61 )
        {
          v248 = nullptr;
          v105 = (const __m128i **)(a1 + 10);
          if ( !v65 )
            goto LABEL_508;
          goto LABEL_183;
        }
        v248 = nullptr;
        while ( 1 )
        {
          v67 = *(_DWORD **)v61;
          if ( *(_QWORD *)v61 )
            ++*v67;
          v68 = v61 + 8;
          v255 = v67;
          sub_482680(&v256, v61 + 8);
          v72 = v60[9];
          v73 = v255;
          v74 = 0;
          if ( v72 )
            break;
LABEL_141:
          sub_47D180(a2, (__int64 *)&v255);
LABEL_142:
          v84 = v266;
          if ( v266 )
          {
            v85 = *((unsigned int *)v266 - 1);
            v86 = v266;
            v87 = &v266[v85];
            if ( (_DWORD)v85 )
            {
              do
              {
                while ( *v86 )
                {
                  v88 = (void *)(*v86++ - 8LL);
                  sub_186B220(v88);
                  if ( v86 == v87 )
                    goto LABEL_146;
                }
                ++v86;
              }
              while ( v86 != v87 );
            }
LABEL_146:
            sub_186B220(v84 - 1);
          }
          v89 = v265;
          if ( v265 )
          {
            v90 = (unsigned __int64)&v265[*((unsigned int *)v265 - 1)];
            if ( (unsigned __int64)v265 < v90 )
            {
              v91 = v265;
              *(_QWORD *)v242 = v264;
              do
              {
                while ( 1 )
                {
                  v92 = *v91;
                  if ( *v91 )
                  {
                    v13 = (*(_DWORD *)(v92 + 8))-- == 1;
                    if ( v13 )
                      break;
                  }
                  if ( (unsigned __int64)++v91 >= v90 )
                    goto LABEL_154;
                }
                ++v91;
                sub_15D7BC0(*(_QWORD *)v242, v92);
              }
              while ( (unsigned __int64)v91 < v90 );
            }
LABEL_154:
            sub_186B220(v89 - 1);
          }
          v93 = v263;
          if ( v263 )
          {
            v94 = *((unsigned int *)v263 - 1);
            v95 = v263;
            v96 = &v263[v94];
            if ( (_DWORD)v94 )
            {
              do
              {
                while ( *v95 )
                {
                  v97 = (void *)(*v95++ - 8LL);
                  sub_186B220(v97);
                  if ( v96 == v95 )
                    goto LABEL_159;
                }
                ++v95;
              }
              while ( v95 != v96 );
            }
LABEL_159:
            sub_186B220(v93 - 1);
          }
          if ( v262 )
            sub_186B220((void *)(v262 - 8));
          if ( v261 )
            sub_186B220((void *)(v261 - 8));
          v98 = v260;
          if ( v260 )
          {
            v99 = *(unsigned int *)(v260 - 4);
            if ( v260 < v260 + 8 * v99 )
            {
              *(_QWORD *)v243 = v60;
              v100 = v259;
              v101 = v260 + 8 * v99;
              v102 = (__int64 *)v260;
              v103 = v260;
              do
              {
                while ( 1 )
                {
                  v104 = *v102;
                  if ( *v102 )
                  {
                    v13 = (*(_DWORD *)(v104 + 8))-- == 1;
                    if ( v13 )
                      break;
                  }
                  if ( (unsigned __int64)++v102 >= v101 )
                    goto LABEL_171;
                }
                ++v102;
                sub_15D7BC0(v100, v104);
              }
              while ( (unsigned __int64)v102 < v101 );
LABEL_171:
              v60 = *(__int64 **)v243;
              v98 = v103;
            }
            sub_186B220((void *)(v98 - 8));
          }
          if ( v258 )
            sub_186B220((void *)(v258 - 8));
          if ( v257 )
            sub_186B220((void *)(v257 - 8));
          if ( v73 )
          {
            v13 = (*(_DWORD *)v73)-- == 1;
            if ( v13 )
            {
              v188 = (void (__fastcall ***)(void *))v73[11];
              if ( v188 )
              {
                v13 = (*((_DWORD *)v188 + 4))-- == 1;
                if ( v13 )
                {
                  (**v188)(v188);
                  sub_186B220(v188);
                }
              }
              v189 = (_QWORD *)v73[10];
              if ( v189 )
              {
                v13 = (*(_DWORD *)v189)-- == 1;
                if ( v13 )
                {
                  sub_41CB00(v189);
                  sub_186B220(v189);
                }
              }
              v190 = (__int64 *)v73[9];
              if ( v190 )
              {
                v191 = &v190[*((unsigned int *)v190 - 1)];
                if ( v190 >= v191 )
                  goto LABEL_386;
                do
                {
                  while ( 1 )
                  {
                    v192 = *v190;
                    if ( *v190 )
                    {
                      v193 = v73[8];
                      v13 = (*(_DWORD *)(v192 + 8))-- == 1;
                      if ( v13 )
                        break;
                    }
                    if ( ++v190 >= v191 )
                      goto LABEL_385;
                  }
                  sub_15D7BC0(v193, v192);
                  ++v190;
                }
                while ( v190 < v191 );
LABEL_385:
                v190 = (__int64 *)v73[9];
                if ( v190 )
LABEL_386:
                  sub_186B220(v190 - 1);
              }
              v194 = (__int64 *)v73[7];
              if ( v194 )
              {
                v195 = &v194[*((unsigned int *)v194 - 1)];
                if ( v194 >= v195 )
                  goto LABEL_395;
                do
                {
                  while ( 1 )
                  {
                    v196 = *v194;
                    if ( *v194 )
                    {
                      v197 = v73[6];
                      v13 = (*(_DWORD *)(v196 + 8))-- == 1;
                      if ( v13 )
                        break;
                    }
                    if ( ++v194 >= v195 )
                      goto LABEL_394;
                  }
                  sub_15D7BC0(v197, v196);
                  ++v194;
                }
                while ( v194 < v195 );
LABEL_394:
                v194 = (__int64 *)v73[7];
                if ( v194 )
LABEL_395:
                  sub_186B220(v194 - 1);
              }
              v198 = (__int64 *)v73[5];
              if ( v198 )
              {
                v199 = &v198[*((unsigned int *)v198 - 1)];
                if ( v198 >= v199 )
                  goto LABEL_404;
                do
                {
                  while ( 1 )
                  {
                    v200 = *v198;
                    if ( *v198 )
                    {
                      v201 = v73[4];
                      v13 = (*(_DWORD *)(v200 + 8))-- == 1;
                      if ( v13 )
                        break;
                    }
                    if ( ++v198 >= v199 )
                      goto LABEL_403;
                  }
                  sub_15D7BC0(v201, v200);
                  ++v198;
                }
                while ( v198 < v199 );
LABEL_403:
                v198 = (__int64 *)v73[5];
                if ( v198 )
LABEL_404:
                  sub_186B220(v198 - 1);
              }
              v202 = v73[2];
              if ( v202 )
              {
                v203 = v73[3];
                v13 = (*(_DWORD *)(v202 + 8))-- == 1;
                if ( v13 )
                  sub_15D7BC0(v203, v202);
              }
              sub_186B220(v73);
            }
          }
          v61 += 136;
          if ( v250 == v61 )
          {
            v61 = a1[10];
            v105 = (const __m128i **)(a1 + 10);
            if ( !v61 )
            {
LABEL_229:
              v129 = 0;
              if ( v248 )
              {
                while ( 1 )
                {
                  v130 = v248[-1].m128i_u32[3];
                  if ( v129 >= (unsigned int)v130 )
                    break;
                  sub_47D180(v105, &v248->m128i_i64[17 * v129++]);
                }
                if ( (_DWORD)v130 )
                {
                  v131 = v248;
                  v132 = (const __m128i *)((char *)v248 + 136 * v130);
                  do
                  {
                    v133 = (_QWORD *)v131[7].m128i_i64[0];
                    if ( v133 )
                    {
                      v134 = *((unsigned int *)v133 - 1);
                      if ( (_DWORD)v134 )
                      {
                        v135 = &v133[v134];
                        do
                        {
                          while ( *v133 )
                          {
                            v136 = (void *)(*v133++ - 8LL);
                            sub_186B220(v136);
                            if ( v135 == v133 )
                              goto LABEL_240;
                          }
                          ++v133;
                        }
                        while ( v135 != v133 );
LABEL_240:
                        v133 = (_QWORD *)v131[7].m128i_i64[0];
                      }
                      sub_186B220(v133 - 1);
                    }
                    v137 = (__int64 *)v131[6].m128i_i64[1];
                    if ( v137 )
                    {
                      v138 = &v137[*((unsigned int *)v137 - 1)];
                      if ( v137 >= v138 )
                        goto LABEL_250;
                      do
                      {
                        while ( 1 )
                        {
                          v139 = *v137;
                          if ( *v137 )
                          {
                            v140 = v131[6].m128i_i64[0];
                            v13 = (*(_DWORD *)(v139 + 8))-- == 1;
                            if ( v13 )
                              break;
                          }
                          if ( ++v137 >= v138 )
                            goto LABEL_249;
                        }
                        sub_15D7BC0(v140, v139);
                        ++v137;
                      }
                      while ( v137 < v138 );
LABEL_249:
                      v137 = (__int64 *)v131[6].m128i_i64[1];
                      if ( v137 )
LABEL_250:
                        sub_186B220(v137 - 1);
                    }
                    v141 = (_QWORD *)v131[5].m128i_i64[0];
                    if ( v141 )
                    {
                      v142 = *((unsigned int *)v141 - 1);
                      if ( (_DWORD)v142 )
                      {
                        v143 = &v141[v142];
                        do
                        {
                          while ( *v141 )
                          {
                            v144 = (void *)(*v141++ - 8LL);
                            sub_186B220(v144);
                            if ( v143 == v141 )
                              goto LABEL_256;
                          }
                          ++v141;
                        }
                        while ( v143 != v141 );
LABEL_256:
                        v141 = (_QWORD *)v131[5].m128i_i64[0];
                      }
                      sub_186B220(v141 - 1);
                    }
                    v145 = v131[4].m128i_i64[1];
                    if ( v145 )
                      sub_186B220((void *)(v145 - 8));
                    v146 = v131[4].m128i_i64[0];
                    if ( v146 )
                      sub_186B220((void *)(v146 - 8));
                    v147 = (__int64 *)v131[3].m128i_i64[1];
                    if ( v147 )
                    {
                      v148 = &v147[*((unsigned int *)v147 - 1)];
                      if ( v147 >= v148 )
                        goto LABEL_270;
                      do
                      {
                        while ( 1 )
                        {
                          v149 = *v147;
                          if ( *v147 )
                          {
                            v150 = v131[3].m128i_i64[0];
                            v13 = (*(_DWORD *)(v149 + 8))-- == 1;
                            if ( v13 )
                              break;
                          }
                          if ( ++v147 >= v148 )
                            goto LABEL_269;
                        }
                        sub_15D7BC0(v150, v149);
                        ++v147;
                      }
                      while ( v147 < v148 );
LABEL_269:
                      v147 = (__int64 *)v131[3].m128i_i64[1];
                      if ( v147 )
LABEL_270:
                        sub_186B220(v147 - 1);
                    }
                    v151 = v131[2].m128i_i64[1];
                    if ( v151 )
                      sub_186B220((void *)(v151 - 8));
                    v152 = v131[1].m128i_i64[0];
                    if ( v152 )
                      sub_186B220((void *)(v152 - 8));
                    v153 = (_QWORD *)v131->m128i_i64[0];
                    if ( v131->m128i_i64[0] )
                    {
                      v13 = (*(_DWORD *)v153)-- == 1;
                      if ( v13 )
                      {
                        v204 = (void (__fastcall ***)(void *))v153[11];
                        if ( v204 )
                        {
                          v13 = (*((_DWORD *)v204 + 4))-- == 1;
                          if ( v13 )
                          {
                            (**v204)(v204);
                            sub_186B220(v204);
                          }
                        }
                        v205 = (_QWORD *)v153[10];
                        if ( v205 )
                        {
                          v13 = (*(_DWORD *)v205)-- == 1;
                          if ( v13 )
                          {
                            sub_41CB00(v205);
                            sub_186B220(v205);
                          }
                        }
                        v206 = (__int64 *)v153[9];
                        if ( v206 )
                        {
                          v207 = &v206[*((unsigned int *)v206 - 1)];
                          if ( v206 >= v207 )
                            goto LABEL_423;
                          do
                          {
                            while ( 1 )
                            {
                              v208 = *v206;
                              if ( *v206 )
                              {
                                v209 = v153[8];
                                v13 = (*(_DWORD *)(v208 + 8))-- == 1;
                                if ( v13 )
                                  break;
                              }
                              if ( ++v206 >= v207 )
                                goto LABEL_422;
                            }
                            sub_15D7BC0(v209, v208);
                            ++v206;
                          }
                          while ( v206 < v207 );
LABEL_422:
                          v206 = (__int64 *)v153[9];
                          if ( v206 )
LABEL_423:
                            sub_186B220(v206 - 1);
                        }
                        v210 = (__int64 *)v153[7];
                        if ( v210 )
                        {
                          v211 = &v210[*((unsigned int *)v210 - 1)];
                          if ( v210 >= v211 )
                            goto LABEL_432;
                          do
                          {
                            while ( 1 )
                            {
                              v212 = *v210;
                              if ( *v210 )
                              {
                                v213 = v153[6];
                                v13 = (*(_DWORD *)(v212 + 8))-- == 1;
                                if ( v13 )
                                  break;
                              }
                              if ( ++v210 >= v211 )
                                goto LABEL_431;
                            }
                            sub_15D7BC0(v213, v212);
                            ++v210;
                          }
                          while ( v210 < v211 );
LABEL_431:
                          v210 = (__int64 *)v153[7];
                          if ( v210 )
LABEL_432:
                            sub_186B220(v210 - 1);
                        }
                        v214 = (__int64 *)v153[5];
                        if ( v214 )
                        {
                          v215 = &v214[*((unsigned int *)v214 - 1)];
                          if ( v214 >= v215 )
                            goto LABEL_441;
                          do
                          {
                            while ( 1 )
                            {
                              v216 = *v214;
                              if ( *v214 )
                              {
                                v217 = v153[4];
                                v13 = (*(_DWORD *)(v216 + 8))-- == 1;
                                if ( v13 )
                                  break;
                              }
                              if ( ++v214 >= v215 )
                                goto LABEL_440;
                            }
                            sub_15D7BC0(v217, v216);
                            ++v214;
                          }
                          while ( v214 < v215 );
LABEL_440:
                          v214 = (__int64 *)v153[5];
                          if ( v214 )
LABEL_441:
                            sub_186B220(v214 - 1);
                        }
                        v218 = v153[2];
                        if ( v218 )
                        {
                          v219 = v153[3];
                          v13 = (*(_DWORD *)(v218 + 8))-- == 1;
                          if ( v13 )
                            sub_15D7BC0(v219, v218);
                        }
                        sub_186B220(v153);
                      }
                    }
                    v131 = (const __m128i *)((char *)v131 + 136);
                  }
                  while ( v132 != v131 );
                }
                sub_186B220(&v248[-1].m128i_u64[1]);
                v62 = (char *)v267;
LABEL_279:
                v154 = &v62[8 * (unsigned int)v268];
                if ( v62 < v154 )
                {
                  do
                  {
                    v155 = *(_DWORD **)v62;
                    if ( *(_QWORD *)v62 )
                    {
                      v13 = v155[8]-- == 1;
                      if ( v13 )
                      {
                        sub_ED44E0(v155);
                        sub_186B220(v155);
                      }
                    }
                    v62 += 8;
                  }
                  while ( v62 < v154 );
                  v62 = (char *)v267;
                }
                if ( v62 != v269 && v62 )
                  sub_186B220(v62);
                v83 = v253;
                if ( v253 )
                {
                  v13 = (*((_DWORD *)v253 + 8))-- == 1;
                  if ( v13 )
                  {
                    sub_ED44E0(v83);
                    sub_186B220(v83);
                  }
                }
                v241 = v252[2];
                result = (unsigned int)(v241 - 1);
                v252[2] = result;
                if ( v241 != 1 )
                  return result;
LABEL_501:
                (**(void (__fastcall ***)(_DWORD *))v252)(v252);
                return sub_186B220(v252);
              }
              v59 = (char *)v267;
LABEL_508:
              v62 = v59;
              goto LABEL_279;
            }
            v106 = *(_DWORD *)(v61 - 4);
            if ( !v106 )
            {
LABEL_228:
              *(_DWORD *)(v61 - 4) = 0;
              goto LABEL_229;
            }
            v66 = v106;
LABEL_183:
            v107 = v61 + 136 * v66;
            do
            {
              v108 = *(_QWORD **)(v61 + 112);
              if ( v108 )
              {
                v109 = *((unsigned int *)v108 - 1);
                if ( (_DWORD)v109 )
                {
                  v110 = &v108[v109];
                  do
                  {
                    while ( *v108 )
                    {
                      v111 = (void *)(*v108++ - 8LL);
                      sub_186B220(v111);
                      if ( v110 == v108 )
                        goto LABEL_189;
                    }
                    ++v108;
                  }
                  while ( v108 != v110 );
LABEL_189:
                  v108 = *(_QWORD **)(v61 + 112);
                }
                sub_186B220(v108 - 1);
              }
              v112 = *(__int64 **)(v61 + 104);
              if ( v112 )
              {
                v113 = &v112[*((unsigned int *)v112 - 1)];
                if ( v112 >= v113 )
                  goto LABEL_199;
                do
                {
                  while ( 1 )
                  {
                    v114 = *v112;
                    if ( *v112 )
                    {
                      v115 = *(_QWORD *)(v61 + 96);
                      v13 = (*(_DWORD *)(v114 + 8))-- == 1;
                      if ( v13 )
                        break;
                    }
                    if ( ++v112 >= v113 )
                      goto LABEL_198;
                  }
                  sub_15D7BC0(v115, v114);
                  ++v112;
                }
                while ( v112 < v113 );
LABEL_198:
                v112 = *(__int64 **)(v61 + 104);
                if ( v112 )
LABEL_199:
                  sub_186B220(v112 - 1);
              }
              v116 = *(_QWORD **)(v61 + 80);
              if ( v116 )
              {
                v117 = *((unsigned int *)v116 - 1);
                if ( (_DWORD)v117 )
                {
                  v118 = &v116[v117];
                  do
                  {
                    while ( *v116 )
                    {
                      v119 = (void *)(*v116++ - 8LL);
                      sub_186B220(v119);
                      if ( v118 == v116 )
                        goto LABEL_205;
                    }
                    ++v116;
                  }
                  while ( v116 != v118 );
LABEL_205:
                  v116 = *(_QWORD **)(v61 + 80);
                }
                sub_186B220(v116 - 1);
              }
              v120 = *(_QWORD *)(v61 + 72);
              if ( v120 )
                sub_186B220((void *)(v120 - 8));
              v121 = *(_QWORD *)(v61 + 64);
              if ( v121 )
                sub_186B220((void *)(v121 - 8));
              v122 = *(__int64 **)(v61 + 56);
              if ( v122 )
              {
                v123 = &v122[*((unsigned int *)v122 - 1)];
                if ( v122 >= v123 )
                  goto LABEL_219;
                do
                {
                  while ( 1 )
                  {
                    v124 = *v122;
                    if ( *v122 )
                    {
                      v125 = *(_QWORD *)(v61 + 48);
                      v13 = (*(_DWORD *)(v124 + 8))-- == 1;
                      if ( v13 )
                        break;
                    }
                    if ( ++v122 >= v123 )
                      goto LABEL_218;
                  }
                  sub_15D7BC0(v125, v124);
                  ++v122;
                }
                while ( v122 < v123 );
LABEL_218:
                v122 = *(__int64 **)(v61 + 56);
                if ( v122 )
LABEL_219:
                  sub_186B220(v122 - 1);
              }
              v126 = *(_QWORD *)(v61 + 40);
              if ( v126 )
                sub_186B220((void *)(v126 - 8));
              v127 = *(_QWORD *)(v61 + 16);
              if ( v127 )
                sub_186B220((void *)(v127 - 8));
              v128 = *(_QWORD **)v61;
              if ( *(_QWORD *)v61 )
              {
                v13 = (*(_DWORD *)v128)-- == 1;
                if ( v13 )
                {
                  v220 = (void (__fastcall ***)(void *))v128[11];
                  if ( v220 )
                  {
                    v13 = (*((_DWORD *)v220 + 4))-- == 1;
                    if ( v13 )
                    {
                      (**v220)(v220);
                      sub_186B220(v220);
                    }
                  }
                  v221 = (_QWORD *)v128[10];
                  if ( v221 )
                  {
                    v13 = (*(_DWORD *)v221)-- == 1;
                    if ( v13 )
                    {
                      sub_41CB00(v221);
                      sub_186B220(v221);
                    }
                  }
                  v222 = (__int64 *)v128[9];
                  if ( v222 )
                  {
                    v223 = &v222[*((unsigned int *)v222 - 1)];
                    if ( v222 >= v223 )
                      goto LABEL_467;
                    do
                    {
                      while ( 1 )
                      {
                        v224 = *v222;
                        if ( *v222 )
                        {
                          v225 = v128[8];
                          v13 = (*(_DWORD *)(v224 + 8))-- == 1;
                          if ( v13 )
                            break;
                        }
                        if ( ++v222 >= v223 )
                          goto LABEL_466;
                      }
                      sub_15D7BC0(v225, v224);
                      ++v222;
                    }
                    while ( v222 < v223 );
LABEL_466:
                    v222 = (__int64 *)v128[9];
                    if ( v222 )
LABEL_467:
                      sub_186B220(v222 - 1);
                  }
                  v226 = (__int64 *)v128[7];
                  if ( v226 )
                  {
                    v227 = &v226[*((unsigned int *)v226 - 1)];
                    if ( v226 >= v227 )
                      goto LABEL_476;
                    do
                    {
                      while ( 1 )
                      {
                        v228 = *v226;
                        if ( *v226 )
                        {
                          v229 = v128[6];
                          v13 = (*(_DWORD *)(v228 + 8))-- == 1;
                          if ( v13 )
                            break;
                        }
                        if ( ++v226 >= v227 )
                          goto LABEL_475;
                      }
                      sub_15D7BC0(v229, v228);
                      ++v226;
                    }
                    while ( v226 < v227 );
LABEL_475:
                    v226 = (__int64 *)v128[7];
                    if ( v226 )
LABEL_476:
                      sub_186B220(v226 - 1);
                  }
                  v230 = (__int64 *)v128[5];
                  if ( v230 )
                  {
                    v231 = &v230[*((unsigned int *)v230 - 1)];
                    if ( v230 >= v231 )
                      goto LABEL_485;
                    do
                    {
                      while ( 1 )
                      {
                        v232 = *v230;
                        if ( *v230 )
                        {
                          v233 = v128[4];
                          v13 = (*(_DWORD *)(v232 + 8))-- == 1;
                          if ( v13 )
                            break;
                        }
                        if ( ++v230 >= v231 )
                          goto LABEL_484;
                      }
                      sub_15D7BC0(v233, v232);
                      ++v230;
                    }
                    while ( v230 < v231 );
LABEL_484:
                    v230 = (__int64 *)v128[5];
                    if ( v230 )
LABEL_485:
                      sub_186B220(v230 - 1);
                  }
                  v234 = v128[2];
                  if ( v234 )
                  {
                    v235 = v128[3];
                    v13 = (*(_DWORD *)(v234 + 8))-- == 1;
                    if ( v13 )
                      sub_15D7BC0(v235, v234);
                  }
                  sub_186B220(v128);
                }
              }
              v61 += 136;
            }
            while ( v107 != v61 );
            v61 = a1[10];
            goto LABEL_228;
          }
        }
LABEL_109:
        v75 = *(_BYTE *)(v72 + 3) >> 6;
        if ( v75 )
        {
          if ( v75 != 1 )
            goto LABEL_111;
        }
        else
        {
          do
          {
            v72 = *(_QWORD *)(v72 + 16);
            v75 = *(_BYTE *)(v72 + 3) >> 6;
          }
          while ( !v75 );
          if ( v75 != 1 )
          {
LABEL_111:
            if ( v75 == 2 )
              v76 = *(_DWORD *)(v72 + 4) - 1;
            else
              v76 = *(_DWORD *)(v72 + 4);
            if ( v74 >= v76 )
              goto LABEL_141;
            goto LABEL_114;
          }
        }
        if ( v74 >= *(_DWORD *)(v72 + 4) + 1 )
          goto LABEL_141;
LABEL_114:
        v77 = sub_407E90(v73, v68, v72, v69, v70, v71);
        v78 = *v60;
        v79 = v77;
        if ( (*((_BYTE *)v60 + 123) & 0x20) != 0 )
        {
          if ( v77 == *(_QWORD *)(v78 + 864) )
            goto LABEL_120;
          goto LABEL_108;
        }
        v80 = v60[9];
        v81 = 17;
        while ( 1 )
        {
          LODWORD(v69) = *(unsigned __int8 *)(v80 + 3);
          v68 = *(unsigned __int8 *)(v80 + 3);
          LOBYTE(v68) = (unsigned __int8)v68 >> 6;
          if ( (v69 & 0x80u) == 0LL )
          {
            if ( v74 == *(_DWORD *)(v80 + 4) )
            {
              v82 = (_QWORD *)(v80 + 8);
LABEL_119:
              if ( v79 == *v82 )
              {
LABEL_120:
                v254 = v248;
                sub_47D180(&v254, (__int64 *)&v255);
                v248 = v254;
                goto LABEL_142;
              }
LABEL_108:
              v72 = v60[9];
              ++v74;
              if ( !v72 )
                goto LABEL_141;
              goto LABEL_109;
            }
          }
          else if ( (_BYTE)v68 != 2 )
          {
            v69 = *(_QWORD *)(v80 + 16);
            v82 = (_QWORD *)(v69 + 8LL * v74);
            goto LABEL_119;
          }
          v80 = *(_QWORD *)(v80 + 16);
          if ( !--v81 )
          {
            v68 = (__int64)(v60 + 9);
            sub_233F80((__int64 *)(v78 + 616), (_DWORD *)v60 + 18);
            v82 = (_QWORD *)(*(_QWORD *)(v60[9] + 16) + 8LL * v74);
            goto LABEL_119;
          }
        }
      }
      goto LABEL_493;
    }
    if ( (_DWORD)v63 )
      goto LABEL_279;
  }
  else if ( v61 )
  {
    goto LABEL_100;
  }
LABEL_493:
  v236 = (char *)v267 + 8 * (unsigned int)v268;
  if ( v267 < v236 )
  {
    do
    {
      v238 = *(_DWORD **)v62;
      if ( *(_QWORD *)v62 )
      {
        v13 = v238[8]-- == 1;
        if ( v13 )
        {
          sub_ED44E0(v238);
          sub_186B220(v238);
        }
      }
      v62 += 8;
    }
    while ( v62 < v236 );
    v62 = (char *)v267;
  }
  if ( v62 != v269 && v62 )
    sub_186B220(v62);
  v237 = v253;
  if ( v253 )
  {
    v13 = (*((_DWORD *)v253 + 8))-- == 1;
    if ( v13 )
    {
      sub_ED44E0(v237);
      sub_186B220(v237);
    }
  }
  v244 = v252[2];
  result = (unsigned int)(v244 - 1);
  v252[2] = result;
  if ( v244 == 1 )
    goto LABEL_501;
  return result;
}

