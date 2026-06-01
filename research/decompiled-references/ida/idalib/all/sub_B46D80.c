unsigned int *__fastcall sub_B46D80(__m128i *a1)
{
  __m128i *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int *v7; // rbp
  const __m128i *v8; // rcx
  __int32 k; // eax
  __m128i v10; // xmm0
  unsigned __int64 v11; // rcx
  void **v12; // r13
  unsigned __int64 i; // rdx
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned __int64 **v16; // r14
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rdi
  void **v21; // r14
  unsigned __int64 v22; // rax
  void **v23; // rdx
  void **v24; // r15
  __m128i *v25; // r13
  void **v26; // rbx
  void **v27; // rdi
  void **v28; // rdi
  void **v29; // r15
  __int64 v30; // rdx
  const __m128i *v31; // rcx
  __m128i v32; // xmm0
  __int64 v33; // r13
  unsigned __int64 **v34; // r14
  unsigned __int64 v35; // rdx
  unsigned int v36; // eax
  __int32 v37; // r15d
  unsigned __int64 v38; // r14
  const __m128i *v39; // rdx
  __int64 v40; // rcx
  __m128i v41; // xmm0
  __int64 v42; // rdx
  _BYTE *v43; // r14
  const __m128i *v44; // rax
  __m128i v45; // xmm7
  __int64 v46; // r13
  unsigned __int64 **v47; // r14
  unsigned __int64 v48; // rdx
  int v49; // r12d
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rsi
  _QWORD *v53; // r12
  __int64 v54; // r15
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  void *v59; // rdi
  void **v60; // r13
  unsigned __int64 v61; // rax
  void **v62; // r14
  void **v63; // r12
  void **v64; // rdi
  void **v65; // rdi
  void **v66; // r12
  void **v67; // r14
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned __int8 *v70; // r8
  _BYTE *v71; // r9
  unsigned int v72; // eax
  __m128i v73; // xmm0
  __int64 v74; // rdx
  unsigned __int64 *v76; // rax
  const __m128i *v77; // r12
  unsigned __int64 v78; // rcx
  __int64 v79; // r15
  unsigned __int64 v80; // rsi
  const __m128i *v81; // rdi
  unsigned __int64 v82; // rcx
  __m128i v83; // xmm1
  unsigned __int64 *v84; // rax
  const __m128i *v85; // r12
  unsigned __int64 v86; // rcx
  __int64 v87; // r15
  unsigned __int64 v88; // rsi
  const __m128i *v89; // rdi
  unsigned __int64 v90; // rcx
  __m128i v91; // xmm7
  unsigned __int64 *v92; // rax
  const __m128i *v93; // r12
  unsigned __int64 v94; // rcx
  __int64 v95; // r15
  unsigned __int64 v96; // rsi
  const __m128i *v97; // rdi
  unsigned __int64 v98; // rcx
  __m128i v99; // xmm4
  unsigned int v100; // eax
  const __m128i *v101; // rcx
  __int64 v102; // rdx
  __int32 v103; // esi
  __m128i v104; // xmm0
  __int64 v105; // rcx
  unsigned int v106; // ecx
  __int64 v107; // rsi
  __int64 v108; // rdi
  _BYTE *v109; // r14
  int v110; // eax
  unsigned __int64 v111; // rdx
  __m128i *v112; // rcx
  const __m128i *v113; // rax
  __m128i v114; // xmm7
  __int64 v115; // rdx
  __int64 v116; // rax
  const __m128i *v117; // rcx
  __m128i v118; // xmm0
  __int64 v119; // rdx
  __int64 v120; // rdx
  void **v121; // r12
  unsigned __int64 v122; // rax
  void **v123; // r15
  void **v124; // r14
  void **v125; // rdi
  void **v126; // rdi
  void **v127; // r15
  void **v128; // r14
  _QWORD *v129; // r12
  __int64 v130; // r15
  __int64 v131; // rax
  unsigned __int64 v132; // rcx
  unsigned __int64 v133; // rdx
  __int64 v134; // rax
  void **v135; // r14
  void **v136; // r12
  void **v137; // rdi
  void **v138; // rdi
  void **v139; // r12
  void **v140; // r14
  unsigned __int64 v141; // rdx
  int v142; // eax
  _BYTE *v143; // rax
  unsigned __int64 *v144; // rax
  const __m128i *v145; // r12
  unsigned __int64 v146; // rcx
  __int64 v147; // r15
  unsigned __int64 v148; // rsi
  const __m128i *v149; // rdi
  unsigned __int64 v150; // rcx
  __m128i v151; // xmm3
  _QWORD *v152; // rax
  __int64 v153; // rcx
  unsigned __int64 v154; // rsi
  unsigned __int64 v155; // rdx
  __int64 v156; // rdx
  void *v157; // rsi
  unsigned __int64 v158; // rax
  void **v159; // rcx
  void **v160; // rax
  char *v161; // rbp
  char *v162; // rbx
  __int64 v163; // r13
  char *v164; // rdi
  void **v165; // rdi
  unsigned int *v166; // r13
  __int64 v167; // rbp
  void **v168; // rbx
  __int64 v169; // r8
  _BYTE *v170; // r14
  unsigned __int64 v171; // rdx
  const __m128i *v172; // rax
  __m128i v173; // xmm4
  __int64 j; // rdx
  const __m128i *v175; // rcx
  __m128i v176; // xmm0
  __int64 v177; // rax
  __int64 v178; // r14
  __int64 v179; // rbx
  __int64 v180; // r14
  void *v181; // rdi
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rdx
  unsigned __int64 v186; // rdx
  int v187; // eax
  _BYTE *v188; // rax
  unsigned __int64 v189; // rdx
  int v190; // eax
  __int64 v191; // rax
  __int64 v192; // r14
  __int64 v193; // rdx
  __int64 v194; // rbx
  __int64 v195; // r14
  void *v196; // rdi
  __int64 v197; // rax
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // rdx
  unsigned int v201; // r15d
  __int64 v202; // rbp
  __int64 v203; // rbx
  _QWORD *v204; // r13
  void *v205; // rdi
  __int64 v206; // [rsp+0h] [rbp-158h]
  unsigned int v207; // [rsp+10h] [rbp-148h]
  unsigned int v208; // [rsp+10h] [rbp-148h]
  void **v209; // [rsp+18h] [rbp-140h]
  void **v210; // [rsp+18h] [rbp-140h]
  unsigned int v211; // [rsp+18h] [rbp-140h]
  unsigned int v212; // [rsp+18h] [rbp-140h]
  unsigned int v213; // [rsp+18h] [rbp-140h]
  __int64 v214; // [rsp+18h] [rbp-140h]
  __int64 v215; // [rsp+18h] [rbp-140h]
  unsigned int *v216; // [rsp+18h] [rbp-140h]
  __int64 v217; // [rsp+18h] [rbp-140h]
  __int64 v218; // [rsp+18h] [rbp-140h]
  void **v219; // [rsp+18h] [rbp-140h]
  __int64 v220; // [rsp+18h] [rbp-140h]
  unsigned int *v221; // [rsp+18h] [rbp-140h]
  __int64 v222; // [rsp+18h] [rbp-140h]
  void *v223; // [rsp+20h] [rbp-138h]
  void *v224; // [rsp+20h] [rbp-138h]
  void **v225; // [rsp+20h] [rbp-138h]
  void *v226; // [rsp+20h] [rbp-138h]
  int v227; // [rsp+20h] [rbp-138h]
  __m128i *v228; // [rsp+28h] [rbp-130h]
  __m128i *v229; // [rsp+28h] [rbp-130h]
  unsigned int *v230; // [rsp+28h] [rbp-130h]
  void **v231; // [rsp+30h] [rbp-128h]
  void **v232; // [rsp+30h] [rbp-128h]
  __m128i *v233; // [rsp+30h] [rbp-128h]
  void **v234; // [rsp+38h] [rbp-120h]
  char v235; // [rsp+42h] [rbp-116h] BYREF
  char v236; // [rsp+43h] [rbp-115h] BYREF
  __int64 v237; // [rsp+44h] [rbp-114h]
  int v238; // [rsp+4Ch] [rbp-10Ch]
  void *v239; // [rsp+50h] [rbp-108h] BYREF
  unsigned __int64 v240; // [rsp+58h] [rbp-100h]
  __int64 v241; // [rsp+60h] [rbp-F8h]
  __int64 v242; // [rsp+68h] [rbp-F0h]
  void *v243; // [rsp+70h] [rbp-E8h]
  __int64 v244; // [rsp+78h] [rbp-E0h]
  _QWORD v245[2]; // [rsp+80h] [rbp-D8h] BYREF
  __int16 v246; // [rsp+90h] [rbp-C8h]
  void *ptr; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v248; // [rsp+A8h] [rbp-B0h]
  _BYTE v249[168]; // [rsp+B0h] [rbp-A8h] BYREF

  v1 = a1;
  v2 = sub_B546E0(a1->m128i_i64[1], v1[3].m128i_u32[0], a1[4].m128i_i64[0], v1[3].m128i_u32[2]);
  v6 = a1[5].m128i_u32[0];
  v7 = (unsigned int *)v2;
  if ( (_DWORD)v6 )
  {
    v8 = (const __m128i *)(a1[4].m128i_i64[1] + 24LL * (unsigned int)v6 - 24);
    k = v8->m128i_i32[1];
    v10 = _mm_loadu_si128(v8);
    v11 = v8[1].m128i_u64[0];
    a1[5].m128i_i32[0] = v6 - 1;
    a1[3] = v10;
    a1[4].m128i_i64[0] = v11;
  }
  else
  {
    sub_B433F0(a1->m128i_i64[0], (__int64)a1[3].m128i_i64, v6, v3, (unsigned __int8 *)v4, (_BYTE *)v5, v206);
    k = a1[3].m128i_i32[1];
  }
  v12 = &v239;
  i = (unsigned __int64)v249;
  v248 = 0x200000000LL;
  ptr = v249;
LABEL_4:
  while ( 2 )
  {
    v14 = (unsigned int)(k - 12);
LABEL_5:
    switch ( v14 )
    {
      case 0LL:
        v36 = v1[5].m128i_u32[0];
        v37 = v1[3].m128i_i32[0];
        v4 = v1[3].m128i_u32[2];
        v38 = v1[4].m128i_u64[0];
        if ( v36 )
        {
          v39 = (const __m128i *)(v1[4].m128i_i64[1] + 24LL * v36 - 24);
          v40 = v39->m128i_u32[1];
          v41 = _mm_loadu_si128(v39);
          v42 = v39[1].m128i_i64[0];
          v1[5].m128i_i32[0] = v36 - 1;
          v1[3] = v41;
          v1[4].m128i_i64[0] = v42;
        }
        else
        {
          v211 = v1[3].m128i_u32[2];
          sub_B433F0(v1->m128i_i64[0], (__int64)v1[3].m128i_i64, i, v11, (unsigned __int8 *)v4, (_BYTE *)v5, v206);
          v40 = v1[3].m128i_u32[1];
          v4 = v211;
        }
        if ( (_DWORD)v40 == 13 )
        {
          v100 = v1[5].m128i_u32[0];
          v5 = v1[3].m128i_u32[0];
          if ( v100 )
          {
            v101 = (const __m128i *)(v1[4].m128i_i64[1] + 24LL * v100 - 24);
            v102 = v101->m128i_u32[0];
            v103 = v101->m128i_i32[1];
            v104 = _mm_loadu_si128(v101);
            v105 = v101[1].m128i_i64[0];
            v1[5].m128i_i32[0] = v100 - 1;
            v1[4].m128i_i64[0] = v105;
            v1[3] = v104;
          }
          else
          {
            v223 = (void *)v4;
            v212 = v1[3].m128i_u32[0];
            sub_B433F0(v1->m128i_i64[0], (__int64)v1[3].m128i_i64, v42, v40, (unsigned __int8 *)v4, (_BYTE *)v5, v206);
            v103 = v1[3].m128i_i32[1];
            v102 = v1[3].m128i_u32[0];
            v5 = v212;
            v4 = (__int64)v223;
          }
          if ( v103 == 14 )
          {
            v106 = v1[3].m128i_u32[3];
            v107 = v1[3].m128i_u32[2];
            v240 = v38;
            v108 = v1[4].m128i_i64[0];
            v109 = ptr;
            HIDWORD(v242) = v102;
            v110 = v106 + v102 - 1;
            LODWORD(v239) = v37;
            if ( v106 <= 1 )
              v110 = v102;
            v245[0] = v107;
            v111 = (unsigned int)v248 + 1LL;
            v241 = v4;
            LODWORD(v243) = v110;
            LODWORD(v242) = v5;
            v112 = (__m128i *)((char *)ptr + 56 * (unsigned int)v248);
            v244 = v108;
            v113 = (const __m128i *)v12;
            if ( v111 > HIDWORD(v248) )
            {
              if ( ptr > v12 || v112 <= (__m128i *)v12 )
              {
                sub_2237220(&ptr, v249, v111, 56);
                v112 = (__m128i *)((char *)ptr + 56 * (unsigned int)v248);
                v113 = (const __m128i *)v12;
              }
              else
              {
                sub_2237220(&ptr, v249, v111, 56);
                v113 = (const __m128i *)((char *)ptr + (char *)v12 - v109);
                v112 = (__m128i *)((char *)ptr + 56 * (unsigned int)v248);
              }
            }
            *v112 = _mm_loadu_si128(v113);
            v114 = _mm_loadu_si128(v113 + 1);
            LODWORD(v248) = v248 + 1;
            v112[1] = v114;
            v112[2] = _mm_loadu_si128(v113 + 2);
            v112[3].m128i_i64[0] = v113[3].m128i_i64[0];
            v115 = v1[5].m128i_u32[0];
            if ( (_DWORD)v115 )
            {
              v116 = (unsigned int)v115;
              i = (unsigned int)(v115 - 1);
              v117 = (const __m128i *)(v1[4].m128i_i64[1] + 24 * v116 - 24);
              k = v117->m128i_i32[1];
              v118 = _mm_loadu_si128(v117);
              v11 = v117[1].m128i_u64[0];
              v1[5].m128i_i32[0] = i;
              v1[3] = v118;
              v1[4].m128i_i64[0] = v11;
            }
            else
            {
              sub_B433F0(
                v1->m128i_i64[0],
                (__int64)v1[3].m128i_i64,
                v115,
                (__int64)v112,
                (unsigned __int8 *)v4,
                (_BYTE *)v5,
                v206);
              k = v1[3].m128i_i32[1];
            }
            continue;
          }
          v224 = (void *)v4;
          v213 = v5;
          sub_FC70B0(v12, v1[2].m128i_i64[0], v102, 2642);
          v152 = v239;
          v5 = v213;
          v4 = (__int64)v224;
          if ( v239 )
          {
            v153 = *((unsigned int *)v239 + 106);
            v154 = *((unsigned int *)v239 + 107);
            v155 = v153 + 1;
          }
          else
          {
            v189 = v240;
            v190 = *(_DWORD *)(v240 + 14976);
            if ( v190 )
            {
              v197 = (unsigned int)(v190 - 1);
              *(_DWORD *)(v240 + 14976) = v197;
              v152 = *(_QWORD **)(v189 + 8 * v197 + 14848);
              v198 = *((unsigned int *)v152 + 134);
              *(_BYTE *)v152 = 0;
              v199 = v152[66];
              *((_DWORD *)v152 + 106) = 0;
              v200 = v199 + (v198 << 6);
              if ( v199 != v200 )
              {
                v227 = v37;
                v201 = v213;
                v230 = v7;
                v202 = v199;
                v233 = v1;
                v203 = v200;
                v234 = v12;
                v204 = v152;
                do
                {
                  while ( 1 )
                  {
                    v203 -= 64;
                    v205 = *(void **)(v203 + 24);
                    if ( v205 == (void *)(v203 + 40) )
                      break;
                    v222 = v4;
                    operator delete(v205);
                    v4 = v222;
                    if ( v202 == v203 )
                      goto LABEL_260;
                  }
                }
                while ( v202 != v203 );
LABEL_260:
                v152 = v204;
                v5 = v201;
                v7 = v230;
                v37 = v227;
                v1 = v233;
                v12 = v234;
              }
              v153 = *((unsigned int *)v152 + 106);
              v154 = *((unsigned int *)v152 + 107);
              *((_DWORD *)v152 + 134) = 0;
              v155 = v153 + 1;
            }
            else
            {
              v152 = (_QWORD *)operator new(0x3A0u);
              v153 = 0;
              *(_BYTE *)v152 = 0;
              v152[12] = v152 + 14;
              v152[16] = v152 + 18;
              v152[20] = v152 + 22;
              v152[24] = v152 + 26;
              v152[28] = v152 + 30;
              v152[32] = v152 + 34;
              v152[36] = v152 + 38;
              v152[40] = v152 + 42;
              v152[44] = v152 + 46;
              v152[48] = v152 + 50;
              v152[52] = v152 + 54;
              v152[13] = 0;
              *((_BYTE *)v152 + 112) = 0;
              v152[17] = 0;
              *((_BYTE *)v152 + 144) = 0;
              v152[21] = 0;
              *((_BYTE *)v152 + 176) = 0;
              v152[25] = 0;
              *((_BYTE *)v152 + 208) = 0;
              v152[29] = 0;
              *((_BYTE *)v152 + 240) = 0;
              v152[33] = 0;
              *((_BYTE *)v152 + 272) = 0;
              v152[37] = 0;
              *((_BYTE *)v152 + 304) = 0;
              v152[41] = 0;
              *((_BYTE *)v152 + 336) = 0;
              v152[45] = 0;
              *((_BYTE *)v152 + 368) = 0;
              v152[49] = 0;
              *((_BYTE *)v152 + 400) = 0;
              v152[53] = 0x800000000LL;
              v5 = v213;
              v4 = (__int64)v224;
              v152[66] = v152 + 68;
              v155 = 1;
              v152[67] = 0x600000000LL;
              v154 = 8;
            }
            v239 = v152;
          }
          LODWORD(v237) = v5;
          HIDWORD(v237) = v5;
          LOBYTE(v238) = 1;
          if ( v155 > v154 )
          {
            v226 = (void *)v4;
            v221 = (unsigned int *)v152;
            sub_2237220(v152 + 52, v152 + 54, v155, 12);
            v152 = v221;
            v4 = (__int64)v226;
            v153 = v221[106];
          }
          v156 = v152[52] + 12 * v153;
          *(_QWORD *)v156 = v237;
          *(_DWORD *)(v156 + 8) = v238;
          ++*((_DWORD *)v152 + 106);
          if ( (_BYTE)v246 )
          {
            v214 = v4;
            sub_FC7790(v241, v12, HIBYTE(v246));
            v4 = v214;
            v241 = 0;
            v246 = 0;
          }
          if ( v243 != v245 )
          {
            v215 = v4;
            operator delete(v243);
            v4 = v215;
          }
          v157 = v239;
          v225 = (void **)v239;
          if ( v239 )
          {
            v158 = v240;
            if ( v240 )
            {
              if ( (unsigned __int64)v239 < v240 || (unsigned __int64)v239 > v240 + 14848 )
              {
                v159 = *((void ***)v239 + 66);
                v160 = &v159[8 * (unsigned __int64)*((unsigned int *)v239 + 134)];
                if ( v159 != v160 )
                {
                  v216 = v7;
                  v161 = *((char **)v239 + 66);
                  v228 = v1;
                  v162 = (char *)&v159[8 * (unsigned __int64)*((unsigned int *)v239 + 134)];
                  v231 = v12;
                  v163 = v4;
                  do
                  {
                    while ( 1 )
                    {
                      v162 -= 64;
                      v164 = *((char **)v162 + 3);
                      if ( v164 == v162 + 40 )
                        break;
                      operator delete(v164);
                      if ( v161 == v162 )
                        goto LABEL_194;
                    }
                  }
                  while ( v161 != v162 );
LABEL_194:
                  v4 = v163;
                  v7 = v216;
                  v1 = v228;
                  v12 = v231;
                  v160 = (void **)v225[66];
                }
                if ( v160 != v225 + 68 )
                {
                  v217 = v4;
                  free(v160);
                  v4 = v217;
                }
                v165 = (void **)v225[52];
                if ( v165 != v225 + 54 )
                {
                  v218 = v4;
                  free(v165);
                  v4 = v218;
                }
                v229 = v1;
                v232 = v12;
                v166 = v7;
                v167 = v4;
                v219 = v225 + 8;
                v168 = v225 + 48;
                do
                {
                  while ( *v168 != v168 + 2 )
                  {
                    operator delete(*v168);
                    v168 -= 4;
                    if ( v168 == v219 )
                      goto LABEL_202;
                  }
                  v168 -= 4;
                }
                while ( v168 != v219 );
LABEL_202:
                v169 = v167;
                v7 = v166;
                v1 = v229;
                v12 = v232;
                v220 = v169;
                operator delete(v225, 0x3A0u);
                v4 = v220;
              }
              else
              {
                v185 = *(unsigned int *)(v240 + 14976);
                *(_DWORD *)(v240 + 14976) = v185 + 1;
                *(_QWORD *)(v158 + 8 * v185 + 14848) = v157;
              }
            }
          }
          v240 = v38;
          v170 = ptr;
          LODWORD(v239) = v37;
          v171 = (unsigned int)v248 + 1LL;
          v241 = v4;
          v242 = 0;
          v11 = (unsigned __int64)ptr + 56 * (unsigned int)v248;
          v172 = (const __m128i *)v12;
          LODWORD(v243) = 0;
          v244 = 0;
          v245[0] = 0;
          if ( v171 > HIDWORD(v248) )
          {
            if ( ptr > v12 || v11 <= (unsigned __int64)v12 )
            {
              sub_2237220(&ptr, v249, v171, 56);
              v11 = (unsigned __int64)ptr + 56 * (unsigned int)v248;
              v172 = (const __m128i *)v12;
            }
            else
            {
              sub_2237220(&ptr, v249, v171, 56);
              v172 = (const __m128i *)((char *)ptr + (char *)v12 - v170);
              v11 = (unsigned __int64)ptr + 56 * (unsigned int)v248;
            }
          }
          *(__m128i *)v11 = _mm_loadu_si128(v172);
          v173 = _mm_loadu_si128(v172 + 1);
          LODWORD(v248) = v248 + 1;
          *(__m128i *)(v11 + 16) = v173;
          *(__m128i *)(v11 + 32) = _mm_loadu_si128(v172 + 2);
          *(_QWORD *)(v11 + 48) = v172[3].m128i_i64[0];
          k = v1[3].m128i_i32[1];
          for ( i = (unsigned int)(k - 13); (unsigned int)i <= 1; i = (unsigned int)(k - 13) )
          {
            for ( j = v1[5].m128i_u32[0]; (_DWORD)j; j = v1[5].m128i_u32[0] )
            {
              v175 = (const __m128i *)(v1[4].m128i_i64[1] + 24LL * (unsigned int)j - 24);
              k = v175->m128i_i32[1];
              v176 = _mm_loadu_si128(v175);
              v11 = v175[1].m128i_u64[0];
              v1[5].m128i_i32[0] = j - 1;
              i = (unsigned int)(k - 13);
              v1[3] = v176;
              v1[4].m128i_i64[0] = v11;
              if ( (unsigned int)i > 1 )
                goto LABEL_4;
            }
            sub_B433F0(v1->m128i_i64[0], (__int64)v1[3].m128i_i64, j, v11, (unsigned __int8 *)v4, (_BYTE *)v5, v206);
            k = v1[3].m128i_i32[1];
          }
          continue;
        }
        v240 = v38;
        v43 = ptr;
        LODWORD(v239) = v37;
        i = (unsigned int)v248 + 1LL;
        v241 = v4;
        v242 = 0;
        v11 = (unsigned __int64)ptr + 56 * (unsigned int)v248;
        v44 = (const __m128i *)v12;
        LODWORD(v243) = 0;
        v244 = 0;
        v245[0] = 0;
        if ( i > HIDWORD(v248) )
        {
          if ( ptr > v12 || v11 <= (unsigned __int64)v12 )
          {
            sub_2237220(&ptr, v249, i, 56);
            i = (unsigned __int64)ptr;
            v11 = (unsigned __int64)ptr + 56 * (unsigned int)v248;
            v44 = (const __m128i *)v12;
          }
          else
          {
            sub_2237220(&ptr, v249, i, 56);
            v44 = (const __m128i *)((char *)ptr + (char *)v12 - v43);
            i = 7LL * (unsigned int)v248;
            v11 = (unsigned __int64)ptr + 56 * (unsigned int)v248;
          }
        }
        *(__m128i *)v11 = _mm_loadu_si128(v44);
        v45 = _mm_loadu_si128(v44 + 1);
        LODWORD(v248) = v248 + 1;
        *(__m128i *)(v11 + 16) = v45;
        *(__m128i *)(v11 + 32) = _mm_loadu_si128(v44 + 2);
        *(_QWORD *)(v11 + 48) = v44[3].m128i_i64[0];
        v14 = (unsigned int)(v1[3].m128i_i32[1] - 12);
        if ( (unsigned int)v14 <= 4 )
          goto LABEL_5;
LABEL_39:
        v46 = (unsigned int)v248;
        v47 = (unsigned __int64 **)v1->m128i_i64[1];
        v48 = 0;
        if ( (_DWORD)v248 )
        {
          v84 = *v47;
          v85 = (const __m128i *)ptr;
          v86 = **v47;
          v87 = 56LL * (unsigned int)v248;
          v84[10] += v87;
          v48 = (v86 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v88 = 56 * v46 + v48;
          if ( v84[1] >= v88 && v86 )
            *v84 = v88;
          else
            v48 = sub_986170((__int64)v84, 56 * v46, 56 * v46, 3, v4, v5);
          v89 = (const __m128i *)((char *)v85 + v87);
          v90 = v48;
          do
          {
            v91 = _mm_loadu_si128(v85);
            v85 = (const __m128i *)((char *)v85 + 56);
            v90 += 56LL;
            *(__m128i *)(v90 - 56) = v91;
            *(__m128i *)(v90 - 40) = _mm_loadu_si128((const __m128i *)((char *)v85 - 40));
            *(__m128i *)(v90 - 24) = _mm_loadu_si128((const __m128i *)((char *)v85 - 24));
            *(_QWORD *)(v90 - 8) = v85[-1].m128i_i64[1];
          }
          while ( v89 != v85 );
        }
        sub_B4D3C0(v47, v7, v48, v46, 0, 0);
        v49 = sub_1022B40(v1[1].m128i_i64[1], *v7, &v235);
        v50 = sub_1022B40(v1[1].m128i_i64[1], v1[3].m128i_u32[0], &v236);
        v51 = v1[3].m128i_u32[0];
        v52 = v1[2].m128i_i64[0];
        if ( v235 || v236 || v49 == v50 )
        {
          sub_FC70B0(&v239, v52, v51, 2641);
          v53 = v239;
          v54 = *(_QWORD *)(v7 + 1);
          if ( v239 )
          {
            v55 = *((unsigned int *)v239 + 106);
            v56 = *((unsigned int *)v239 + 107);
            v57 = v55 + 1;
          }
          else
          {
            v141 = v240;
            v142 = *(_DWORD *)(v240 + 14976);
            if ( v142 )
            {
              v177 = (unsigned int)(v142 - 1);
              *(_DWORD *)(v240 + 14976) = v177;
              v53 = *(_QWORD **)(v141 + 8 * v177 + 14848);
              v178 = *((unsigned int *)v53 + 134);
              v179 = v53[66];
              *(_BYTE *)v53 = 0;
              *((_DWORD *)v53 + 106) = 0;
              v180 = v179 + (v178 << 6);
              if ( v179 == v180 )
              {
                v57 = 1;
                v55 = 0;
              }
              else
              {
                do
                {
                  while ( 1 )
                  {
                    v180 -= 64;
                    v181 = *(void **)(v180 + 24);
                    if ( v181 == (void *)(v180 + 40) )
                      break;
                    operator delete(v181);
                    if ( v179 == v180 )
                      goto LABEL_218;
                  }
                }
                while ( v179 != v180 );
LABEL_218:
                v55 = *((unsigned int *)v53 + 106);
                v57 = v55 + 1;
              }
              *((_DWORD *)v53 + 134) = 0;
              v56 = *((unsigned int *)v53 + 107);
            }
            else
            {
              v143 = (_BYTE *)operator new(0x3A0u);
              v56 = 8;
              v57 = 1;
              v53 = v143;
              *v143 = 0;
              *((_QWORD *)v143 + 12) = v143 + 112;
              *((_QWORD *)v143 + 16) = v143 + 144;
              *((_QWORD *)v143 + 20) = v143 + 176;
              *((_QWORD *)v143 + 24) = v143 + 208;
              *((_QWORD *)v143 + 28) = v143 + 240;
              *((_QWORD *)v143 + 32) = v143 + 272;
              *((_QWORD *)v143 + 36) = v143 + 304;
              *((_QWORD *)v143 + 40) = v143 + 336;
              *((_QWORD *)v143 + 44) = v143 + 368;
              *((_QWORD *)v143 + 48) = v143 + 400;
              *((_QWORD *)v143 + 52) = v143 + 432;
              *((_QWORD *)v143 + 13) = 0;
              v143[112] = 0;
              *((_QWORD *)v143 + 17) = 0;
              v143[144] = 0;
              *((_QWORD *)v143 + 21) = 0;
              v143[176] = 0;
              *((_QWORD *)v143 + 25) = 0;
              v143[208] = 0;
              *((_QWORD *)v143 + 29) = 0;
              v143[240] = 0;
              *((_QWORD *)v143 + 33) = 0;
              v143[272] = 0;
              *((_QWORD *)v143 + 37) = 0;
              v143[304] = 0;
              *((_QWORD *)v143 + 41) = 0;
              v143[336] = 0;
              *((_QWORD *)v143 + 45) = 0;
              v143[368] = 0;
              *((_QWORD *)v143 + 49) = 0;
              v143[400] = 0;
              *((_QWORD *)v143 + 53) = 0x800000000LL;
              *((_QWORD *)v143 + 66) = v143 + 544;
              *((_QWORD *)v143 + 67) = 0x600000000LL;
              v55 = 0;
            }
            v239 = v53;
          }
          v237 = v54;
          LOBYTE(v238) = 1;
          if ( v57 > v56 )
          {
            sub_2237220(v53 + 52, v53 + 54, v57, 12);
            v55 = *((unsigned int *)v53 + 106);
          }
          v58 = v53[52] + 12 * v55;
          *(_QWORD *)v58 = v237;
          *(_DWORD *)(v58 + 8) = v238;
          ++*((_DWORD *)v53 + 106);
          if ( (_BYTE)v246 )
          {
            sub_FC7790(v241, &v239, HIBYTE(v246));
            v59 = v243;
            v241 = 0;
            v246 = 0;
            if ( v243 == v245 )
              goto LABEL_50;
          }
          else
          {
            v59 = v243;
            if ( v243 == v245 )
            {
LABEL_50:
              v60 = (void **)v239;
              if ( v239 )
              {
                v61 = v240;
                if ( v240 )
                {
                  if ( (unsigned __int64)v239 >= v240 && (unsigned __int64)v239 <= v240 + 14848 )
                  {
LABEL_118:
                    v120 = *(unsigned int *)(v61 + 14976);
                    *(_DWORD *)(v61 + 14976) = v120 + 1;
                    *(_QWORD *)(v61 + 8 * v120 + 14848) = v60;
                    goto LABEL_69;
                  }
                  v62 = *((void ***)v239 + 66);
                  v63 = &v62[8 * (unsigned __int64)*((unsigned int *)v239 + 134)];
                  if ( v62 != v63 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v63 -= 8;
                        v64 = (void **)v63[3];
                        if ( v64 == v63 + 5 )
                          break;
                        operator delete(v64);
                        if ( v62 == v63 )
                          goto LABEL_56;
                      }
                    }
                    while ( v62 != v63 );
LABEL_56:
                    v63 = (void **)v60[66];
                  }
                  if ( v63 != v60 + 68 )
                    free(v63);
                  v65 = (void **)v60[52];
                  if ( v65 != v60 + 54 )
                    free(v65);
                  v66 = v60 + 48;
                  v67 = v60 + 8;
                  do
                  {
                    while ( *v66 != v66 + 2 )
                    {
                      operator delete(*v66);
                      v66 -= 4;
                      if ( v67 == v66 )
                        goto LABEL_64;
                    }
                    v66 -= 4;
                  }
                  while ( v67 != v66 );
LABEL_64:
                  operator delete(v60, 0x3A0u);
                  goto LABEL_69;
                }
              }
              goto LABEL_69;
            }
          }
          operator delete(v59);
          goto LABEL_50;
        }
        sub_FC70B0(&v239, v52, v51, 2641);
        if ( (_BYTE)v246 )
        {
          sub_FC7790(v241, &v239, HIBYTE(v246));
          v241 = 0;
          v246 = 0;
        }
        if ( v243 != v245 )
          operator delete(v243);
        v121 = (void **)v239;
        if ( v239 )
        {
          v122 = v240;
          if ( v240 )
          {
            if ( (unsigned __int64)v239 < v240 || (unsigned __int64)v239 > v240 + 14848 )
            {
              v123 = *((void ***)v239 + 66);
              v124 = &v123[8 * (unsigned __int64)*((unsigned int *)v239 + 134)];
              if ( v123 != v124 )
              {
                do
                {
                  while ( 1 )
                  {
                    v124 -= 8;
                    v125 = (void **)v124[3];
                    if ( v125 == v124 + 5 )
                      break;
                    operator delete(v125);
                    if ( v123 == v124 )
                      goto LABEL_129;
                  }
                }
                while ( v123 != v124 );
LABEL_129:
                v124 = (void **)v121[66];
              }
              if ( v124 != v121 + 68 )
                free(v124);
              v126 = (void **)v121[52];
              v127 = v121 + 52;
              if ( v126 != v121 + 54 )
                free(v126);
              v128 = v121 + 12;
              do
              {
                while ( 1 )
                {
                  v127 -= 4;
                  if ( *v127 == v127 + 2 )
                    break;
                  operator delete(*v127);
                  if ( v127 == v128 )
                    goto LABEL_137;
                }
              }
              while ( v127 != v128 );
LABEL_137:
              operator delete(v121, 0x3A0u);
            }
            else
            {
              v184 = *(unsigned int *)(v240 + 14976);
              *(_DWORD *)(v240 + 14976) = v184 + 1;
              *(_QWORD *)(v122 + 8 * v184 + 14848) = v121;
            }
          }
        }
        sub_FC70B0(&v239, v1[2].m128i_i64[0], *v7, 2625);
        v129 = v239;
        v130 = *(_QWORD *)(v7 + 1);
        if ( v239 )
        {
          v131 = *((unsigned int *)v239 + 106);
          v132 = *((unsigned int *)v239 + 107);
          v133 = v131 + 1;
        }
        else
        {
          v186 = v240;
          v187 = *(_DWORD *)(v240 + 14976);
          if ( v187 )
          {
            v191 = (unsigned int)(v187 - 1);
            *(_DWORD *)(v240 + 14976) = v191;
            v129 = *(_QWORD **)(v186 + 8 * v191 + 14848);
            v192 = *((unsigned int *)v129 + 134);
            v193 = v129[66];
            *(_BYTE *)v129 = 0;
            *((_DWORD *)v129 + 106) = 0;
            v194 = v193;
            v195 = v193 + (v192 << 6);
            if ( v193 != v195 )
            {
              do
              {
                while ( 1 )
                {
                  v195 -= 64;
                  v196 = *(void **)(v195 + 24);
                  if ( v196 == (void *)(v195 + 40) )
                    break;
                  operator delete(v196);
                  if ( v194 == v195 )
                    goto LABEL_249;
                }
              }
              while ( v194 != v195 );
            }
LABEL_249:
            v131 = *((unsigned int *)v129 + 106);
            v132 = *((unsigned int *)v129 + 107);
            *((_DWORD *)v129 + 134) = 0;
            v133 = v131 + 1;
          }
          else
          {
            v188 = (_BYTE *)operator new(0x3A0u);
            v132 = 8;
            v133 = 1;
            v129 = v188;
            *v188 = 0;
            *((_QWORD *)v188 + 12) = v188 + 112;
            *((_QWORD *)v188 + 16) = v188 + 144;
            *((_QWORD *)v188 + 20) = v188 + 176;
            *((_QWORD *)v188 + 24) = v188 + 208;
            *((_QWORD *)v188 + 28) = v188 + 240;
            *((_QWORD *)v188 + 32) = v188 + 272;
            *((_QWORD *)v188 + 36) = v188 + 304;
            *((_QWORD *)v188 + 40) = v188 + 336;
            *((_QWORD *)v188 + 44) = v188 + 368;
            *((_QWORD *)v188 + 48) = v188 + 400;
            *((_QWORD *)v188 + 52) = v188 + 432;
            *((_QWORD *)v188 + 13) = 0;
            v188[112] = 0;
            *((_QWORD *)v188 + 17) = 0;
            v188[144] = 0;
            *((_QWORD *)v188 + 21) = 0;
            v188[176] = 0;
            *((_QWORD *)v188 + 25) = 0;
            v188[208] = 0;
            *((_QWORD *)v188 + 29) = 0;
            v188[240] = 0;
            *((_QWORD *)v188 + 33) = 0;
            v188[272] = 0;
            *((_QWORD *)v188 + 37) = 0;
            v188[304] = 0;
            *((_QWORD *)v188 + 41) = 0;
            v188[336] = 0;
            *((_QWORD *)v188 + 45) = 0;
            v188[368] = 0;
            *((_QWORD *)v188 + 49) = 0;
            v188[400] = 0;
            *((_QWORD *)v188 + 53) = 0x800000000LL;
            *((_QWORD *)v188 + 66) = v188 + 544;
            *((_QWORD *)v188 + 67) = 0x600000000LL;
            v131 = 0;
          }
          v239 = v129;
        }
        v237 = v130;
        LOBYTE(v238) = 1;
        if ( v133 > v132 )
        {
          sub_2237220(v129 + 52, v129 + 54, v133, 12);
          v131 = *((unsigned int *)v129 + 106);
        }
        v134 = v129[52] + 12 * v131;
        *(_QWORD *)v134 = v237;
        *(_DWORD *)(v134 + 8) = v238;
        ++*((_DWORD *)v129 + 106);
        if ( (_BYTE)v246 )
        {
          sub_FC7790(v241, &v239, HIBYTE(v246));
          v241 = 0;
          v246 = 0;
        }
        if ( v243 != v245 )
          operator delete(v243);
        v60 = (void **)v239;
        if ( v239 )
        {
          v61 = v240;
          if ( v240 )
          {
            if ( (unsigned __int64)v239 >= v240 && (unsigned __int64)v239 <= v240 + 14848 )
              goto LABEL_118;
            v135 = *((void ***)v239 + 66);
            v136 = &v135[8 * (unsigned __int64)*((unsigned int *)v239 + 134)];
            if ( v135 != v136 )
            {
              do
              {
                while ( 1 )
                {
                  v136 -= 8;
                  v137 = (void **)v136[3];
                  if ( v137 == v136 + 5 )
                    break;
                  operator delete(v137);
                  if ( v135 == v136 )
                    goto LABEL_152;
                }
              }
              while ( v135 != v136 );
LABEL_152:
              v136 = (void **)v60[66];
            }
            if ( v136 != v60 + 68 )
              free(v136);
            v138 = (void **)v60[52];
            if ( v138 != v60 + 54 )
              free(v138);
            v139 = v60 + 48;
            v140 = v60 + 8;
            do
            {
              while ( *v139 != v139 + 2 )
              {
                operator delete(*v139);
                v139 -= 4;
                if ( v140 == v139 )
                  goto LABEL_64;
              }
              v139 -= 4;
            }
            while ( v140 != v139 );
            goto LABEL_64;
          }
        }
LABEL_69:
        if ( ptr != v249 )
          free(ptr);
        return v7;
      case 1LL:
      case 2LL:
        sub_FC70B0(v12, v1[2].m128i_i64[0], v1[3].m128i_u32[0], 2641);
        if ( !(_BYTE)v246 )
        {
          v20 = v243;
          if ( v243 == v245 )
            goto LABEL_11;
LABEL_10:
          operator delete(v20);
          goto LABEL_11;
        }
        sub_FC7790(v241, v12, HIBYTE(v246));
        v20 = v243;
        v241 = 0;
        v246 = 0;
        if ( v243 != v245 )
          goto LABEL_10;
LABEL_11:
        v21 = (void **)v239;
        if ( v239 )
        {
          v22 = v240;
          if ( v240 )
          {
            if ( (unsigned __int64)v239 < v240 || (unsigned __int64)v239 > v240 + 14848 )
            {
              v23 = *((void ***)v239 + 66);
              v24 = &v23[8 * (unsigned __int64)*((unsigned int *)v239 + 134)];
              if ( v23 != v24 )
              {
                v209 = v12;
                v25 = v1;
                v26 = *((void ***)v239 + 66);
                do
                {
                  while ( 1 )
                  {
                    v24 -= 8;
                    v27 = (void **)v24[3];
                    if ( v27 == v24 + 5 )
                      break;
                    operator delete(v27);
                    if ( v26 == v24 )
                      goto LABEL_18;
                  }
                }
                while ( v26 != v24 );
LABEL_18:
                v1 = v25;
                v24 = (void **)v21[66];
                v12 = v209;
              }
              if ( v24 != v21 + 68 )
                free(v24);
              v28 = (void **)v21[52];
              if ( v28 != v21 + 54 )
                free(v28);
              v29 = v21 + 48;
              v210 = v21 + 8;
              do
              {
                while ( *v29 != v29 + 2 )
                {
                  operator delete(*v29);
                  v29 -= 4;
                  if ( v210 == v29 )
                    goto LABEL_26;
                }
                v29 -= 4;
              }
              while ( v210 != v29 );
LABEL_26:
              operator delete(v21, 0x3A0u);
            }
            else
            {
              v119 = *(unsigned int *)(v240 + 14976);
              v11 = (unsigned int)(v119 + 1);
              *(_DWORD *)(v240 + 14976) = v11;
              *(_QWORD *)(v22 + 8 * v119 + 14848) = v21;
            }
          }
        }
        for ( k = v1[3].m128i_i32[1]; (unsigned int)(k - 13) <= 1; k = v1[3].m128i_i32[1] )
        {
          while ( 1 )
          {
            v30 = v1[5].m128i_u32[0];
            if ( !(_DWORD)v30 )
              break;
            v31 = (const __m128i *)(v1[4].m128i_i64[1] + 24LL * (unsigned int)v30 - 24);
            k = v31->m128i_i32[1];
            v32 = _mm_loadu_si128(v31);
            v11 = v31[1].m128i_u64[0];
            v1[5].m128i_i32[0] = v30 - 1;
            v1[3] = v32;
            v1[4].m128i_i64[0] = v11;
            if ( (unsigned int)(k - 13) > 1 )
              goto LABEL_30;
          }
          sub_B433F0(v1->m128i_i64[0], (__int64)v1[3].m128i_i64, v30, v11, (unsigned __int8 *)v4, (_BYTE *)v5, v206);
        }
LABEL_30:
        i = (unsigned int)(k - 15);
        if ( (unsigned int)i <= 1 || k == 12 )
          continue;
        v33 = (unsigned int)v248;
        v34 = (unsigned __int64 **)v1->m128i_i64[1];
        v35 = 0;
        if ( (_DWORD)v248 )
        {
          v144 = *v34;
          v145 = (const __m128i *)ptr;
          v146 = **v34;
          v147 = 56LL * (unsigned int)v248;
          v144[10] += v147;
          v35 = (v146 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v148 = 56 * v33 + v35;
          if ( v144[1] >= v148 && v146 )
            *v144 = v148;
          else
            v35 = sub_986170((__int64)v144, 56 * v33, 56 * v33, 3, v4, v5);
          v149 = (const __m128i *)((char *)v145 + v147);
          v150 = v35;
          do
          {
            v151 = _mm_loadu_si128(v145);
            v145 = (const __m128i *)((char *)v145 + 56);
            v150 += 56LL;
            *(__m128i *)(v150 - 56) = v151;
            *(__m128i *)(v150 - 40) = _mm_loadu_si128((const __m128i *)((char *)v145 - 40));
            *(__m128i *)(v150 - 24) = _mm_loadu_si128((const __m128i *)((char *)v145 - 24));
            *(_QWORD *)(v150 - 8) = v145[-1].m128i_i64[1];
          }
          while ( v149 != v145 );
        }
        sub_B4D3C0(v34, v7, v35, v33, 0, 0);
        goto LABEL_69;
      case 3LL:
        v15 = (unsigned int)v248;
        v16 = (unsigned __int64 **)v1->m128i_i64[1];
        v17 = 0;
        v18 = v1[3].m128i_u32[0];
        if ( (_DWORD)v248 )
        {
          v76 = *v16;
          v77 = (const __m128i *)ptr;
          v78 = **v16;
          v79 = 56LL * (unsigned int)v248;
          v76[10] += v79;
          v17 = (v78 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v80 = 56 * v15 + v17;
          if ( v76[1] >= v80 && v78 )
          {
            *v76 = v80;
          }
          else
          {
            v208 = v18;
            v183 = sub_986170((__int64)v76, 56 * v15, 56 * v15, 3, v18, v5);
            v18 = v208;
            v17 = v183;
          }
          v81 = (const __m128i *)((char *)v77 + v79);
          v82 = v17;
          do
          {
            v83 = _mm_loadu_si128(v77);
            v77 = (const __m128i *)((char *)v77 + 56);
            v82 += 56LL;
            *(__m128i *)(v82 - 56) = v83;
            *(__m128i *)(v82 - 40) = _mm_loadu_si128((const __m128i *)((char *)v77 - 40));
            *(__m128i *)(v82 - 24) = _mm_loadu_si128((const __m128i *)((char *)v77 - 24));
            *(_QWORD *)(v82 - 8) = v77[-1].m128i_i64[1];
          }
          while ( v81 != v77 );
        }
        v19 = 0;
        goto LABEL_67;
      case 4LL:
        v15 = (unsigned int)v248;
        v16 = (unsigned __int64 **)v1->m128i_i64[1];
        v17 = 0;
        v18 = v1[3].m128i_u32[0];
        if ( (_DWORD)v248 )
        {
          v92 = *v16;
          v93 = (const __m128i *)ptr;
          v94 = **v16;
          v95 = 56LL * (unsigned int)v248;
          v92[10] += v95;
          v17 = (v94 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v96 = 56 * v15 + v17;
          if ( v92[1] >= v96 && v94 )
          {
            *v92 = v96;
          }
          else
          {
            v207 = v18;
            v182 = sub_986170((__int64)v92, 56 * v15, 56 * v15, 3, v18, v5);
            v18 = v207;
            v17 = v182;
          }
          v97 = (const __m128i *)((char *)v93 + v95);
          v98 = v17;
          do
          {
            v99 = _mm_loadu_si128(v93);
            v93 = (const __m128i *)((char *)v93 + 56);
            v98 += 56LL;
            *(__m128i *)(v98 - 56) = v99;
            *(__m128i *)(v98 - 40) = _mm_loadu_si128((const __m128i *)((char *)v93 - 40));
            *(__m128i *)(v98 - 24) = _mm_loadu_si128((const __m128i *)((char *)v93 - 24));
            *(_QWORD *)(v98 - 8) = v93[-1].m128i_i64[1];
          }
          while ( v97 != v93 );
        }
        v19 = 1;
LABEL_67:
        sub_B4D3C0(v16, v7, v17, v15, v18, v19);
        v72 = v1[5].m128i_u32[0];
        if ( v72 )
        {
          v73 = _mm_loadu_si128((const __m128i *)(v1[4].m128i_i64[1] + 24LL * v72 - 24));
          v74 = *(_QWORD *)(v1[4].m128i_i64[1] + 24LL * v72 - 24 + 16);
          v1[5].m128i_i32[0] = v72 - 1;
          v1[4].m128i_i64[0] = v74;
          v1[3] = v73;
        }
        else
        {
          sub_B433F0(v1->m128i_i64[0], (__int64)v1[3].m128i_i64, v68, v69, v70, v71, v206);
        }
        goto LABEL_69;
      default:
        goto LABEL_39;
    }
  }
}
