void __fastcall sub_9B0730(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, unsigned __int64 a6)
{
  int v8; // r13d
  unsigned int v9; // ebx
  __int64 m128i_i64; // rbp
  __int64 v11; // r8
  __int64 *v12; // rbx
  __int64 *v13; // rax
  _OWORD *v14; // r12
  void **v15; // r14
  __m128i *v16; // r12
  _OWORD *v17; // r14
  unsigned int v18; // ecx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  const __m128i *v21; // r13
  __m128i *v22; // rax
  const __m128i *v23; // r15
  __m128i *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  _DWORD *v31; // rsi
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rbx
  __int32 v35; // edx
  __int64 *v36; // rax
  _DWORD *v37; // rdi
  bool v38; // zf
  char *v39; // rsi
  __int64 v40; // r8
  __int64 *v41; // r9
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // rdx
  __int32 v44; // edx
  __int64 *v45; // rax
  __int64 v46; // rdx
  __m128i *v47; // rax
  __int32 v48; // edx
  __int64 v49; // rax
  __m128i *v50; // rax
  char *v51; // kr00_8
  __int64 *v52; // kr08_8
  unsigned __int64 v53; // rax
  const __m128i *v54; // r8
  unsigned __int64 v55; // rax
  __int64 v56; // rcx
  const __m128i *v57; // r13
  __int64 v58; // rdx
  const __m128i *v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r13
  __int64 v66; // rdi
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  void *v70; // rax
  void *v71; // rdx
  __int64 v72; // r13
  const __m128i *v73; // rax
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r13
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  _OWORD *v80; // rbx
  __int64 v81; // r14
  __int64 v82; // rdi
  unsigned __int64 v83; // rax
  __int64 v84; // r13
  const __m128i *v85; // rax
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // r13
  __int64 v92; // rdi
  __int64 v93; // rax
  __int64 v94; // r8
  __int64 v95; // r9
  __m128i *v96; // rax
  __int64 v97; // rcx
  _DWORD *v98; // rax
  _DWORD *v99; // rdx
  __int64 v100; // rdx
  unsigned int v101; // ecx
  __int64 v102; // r10
  _DWORD *v103; // rsi
  unsigned __int64 v104; // r9
  __int64 v105; // r8
  __int64 *v106; // r9
  unsigned __int64 v107; // r10
  unsigned __int64 v108; // rdx
  __m128i *v109; // r13
  __int64 v110; // rax
  unsigned __int64 v111; // rdx
  __int64 v112; // rax
  __int32 v113; // ecx
  const __m128i *v114; // rbp
  __m128i *v115; // rax
  const __m128i *v116; // r8
  __m128i *v117; // rax
  __int64 v118; // rcx
  const __m128i *v119; // r13
  __int64 *v120; // rdx
  const __m128i *v121; // rax
  __int64 v122; // r8
  __int64 v123; // r9
  const __m128i *v124; // rsi
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // r13
  __int64 v131; // rdi
  int v132; // edx
  __m128i *v133; // rax
  unsigned int v134; // ecx
  __int64 *v135; // r10
  unsigned __int64 v136; // rdx
  __m128i *v137; // rax
  __int64 *v138; // rcx
  __int64 *v139; // rdx
  const __m128i *v140; // rax
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // r8
  __int64 v147; // r9
  unsigned __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rdx
  const __m128i *v151; // rax
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rax
  const __m128i *v155; // r8
  const __m128i *v156; // r13
  const __m128i *v157; // rdx
  const __m128i *v158; // r9
  __int64 v159; // rcx
  const __m128i *v160; // r10
  const __m128i *v161; // rsi
  const __m128i *v162; // r11
  const __m128i *v163; // rax
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  unsigned __int64 v169; // rax
  unsigned int *v170; // rax
  void **p_ptr; // r10
  __int64 *v172; // rcx
  __int64 *v173; // r15
  __int64 *v174; // rbx
  __int64 v175; // r12
  char v176; // bp
  __int64 v177; // r9
  __int64 v178; // r13
  __int64 v179; // r8
  __int64 v180; // r8
  __int32 v181; // ecx
  int v182; // ecx
  __m128i *v183; // rax
  __int64 v184; // rax
  __int32 v185; // ecx
  __int64 v186; // rax
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rax
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 *v192; // rdx
  __int64 v193; // rax
  __int64 v194; // r9
  const __m128i *v195; // rax
  const __m128i *v196; // r8
  const __m128i *v197; // rdx
  const __m128i *v198; // r13
  __int64 v199; // rcx
  const __m128i *v200; // r10
  const __m128i *v201; // rsi
  const __m128i *v202; // r11
  const __m128i *v203; // rax
  __int64 v204; // r8
  __int64 v205; // r9
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rdx
  __int64 v209; // rax
  __int64 v210; // r9
  __int64 v211; // rax
  __int64 v212; // r8
  __int64 v213; // r9
  const __m128i *v214; // rax
  const __m128i *v215; // r8
  const __m128i *v216; // r13
  const __m128i *v217; // rdx
  const __m128i *v218; // r9
  __int64 v219; // rcx
  const __m128i *v220; // r10
  const __m128i *v221; // rsi
  const __m128i *v222; // r11
  const __m128i *v223; // rax
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // rax
  __int64 v227; // rax
  __int64 v228; // rax
  const __m128i *v229; // rax
  __int64 v230; // r9
  const __m128i *v231; // r13
  const __m128i *v232; // rcx
  const __m128i *v233; // rdx
  const __m128i *v234; // rcx
  const __m128i *v235; // r10
  const __m128i *v236; // rsi
  const __m128i *v237; // r11
  const __m128i *v238; // rax
  __int64 v239; // r8
  __int64 v240; // r9
  __int64 v241; // rax
  __int64 v242; // rax
  const __m128i *v243; // rax
  const __m128i *v244; // rsi
  unsigned int v245; // eax
  __int64 v246; // rdx
  _DWORD *v247; // rax
  int v248; // edx
  char *v249; // rsi
  char *v250; // rsi
  __m128 v251; // xmm0
  void *v252; // rax
  __int64 v253; // rax
  __int64 v254; // rax
  void **v255; // [rsp+10h] [rbp-5C8h]
  __int64 v256; // [rsp+18h] [rbp-5C0h]
  __m128i *v257; // [rsp+20h] [rbp-5B8h]
  void **v258; // [rsp+28h] [rbp-5B0h]
  __int64 *v259; // [rsp+30h] [rbp-5A8h]
  const __m128i *v261; // [rsp+40h] [rbp-598h] BYREF
  _BYTE *v262; // [rsp+48h] [rbp-590h]
  __int64 *v263; // [rsp+50h] [rbp-588h]
  unsigned __int64 *v264; // [rsp+58h] [rbp-580h]
  const __m128i *v265; // [rsp+60h] [rbp-578h]
  __int64 v266; // [rsp+68h] [rbp-570h]
  _BYTE *v267; // [rsp+70h] [rbp-568h]
  __int64 *v268; // [rsp+78h] [rbp-560h]
  __int64 *v269; // [rsp+80h] [rbp-558h]
  void **p_s; // [rsp+88h] [rbp-550h]
  __int64 v271; // [rsp+90h] [rbp-548h]
  __m128i *v272; // [rsp+98h] [rbp-540h]
  const __m128i *v273; // [rsp+A0h] [rbp-538h]
  const __m128i *v274; // [rsp+A8h] [rbp-530h]
  const __m128i *v275; // [rsp+B0h] [rbp-528h]
  const __m128i *v276; // [rsp+B8h] [rbp-520h]
  const __m128i *v277; // [rsp+C0h] [rbp-518h]
  const __m128i *v278; // [rsp+C8h] [rbp-510h]
  __m128i *v279; // [rsp+D8h] [rbp-500h] BYREF
  _DWORD *v280; // [rsp+E0h] [rbp-4F8h] BYREF
  __m128i *v281; // [rsp+E8h] [rbp-4F0h] BYREF
  __m128i *v282; // [rsp+F0h] [rbp-4E8h] BYREF
  __m128i *v283; // [rsp+F8h] [rbp-4E0h] BYREF
  _DWORD *v284; // [rsp+100h] [rbp-4D8h] BYREF
  _DWORD *v285; // [rsp+108h] [rbp-4D0h] BYREF
  _DWORD *v286; // [rsp+110h] [rbp-4C8h] BYREF
  _DWORD *v287; // [rsp+118h] [rbp-4C0h] BYREF
  __int64 v288; // [rsp+120h] [rbp-4B8h] BYREF
  __m128i *v289; // [rsp+128h] [rbp-4B0h] BYREF
  void *s; // [rsp+130h] [rbp-4A8h] BYREF
  __int64 v291; // [rsp+138h] [rbp-4A0h]
  _BYTE v292[48]; // [rsp+140h] [rbp-498h] BYREF
  int v293; // [rsp+170h] [rbp-468h]
  void *ptr; // [rsp+180h] [rbp-458h] BYREF
  __int64 v295; // [rsp+188h] [rbp-450h] BYREF
  _BYTE v296[160]; // [rsp+190h] [rbp-448h] BYREF
  _DWORD *v297[22]; // [rsp+230h] [rbp-3A8h] BYREF
  void *v298; // [rsp+2E0h] [rbp-2F8h] BYREF
  __int64 v299; // [rsp+2E8h] [rbp-2F0h]
  _BYTE v300[160]; // [rsp+2F0h] [rbp-2E8h] BYREF
  _DWORD *v301[22]; // [rsp+390h] [rbp-248h] BYREF
  void *v302; // [rsp+440h] [rbp-198h] BYREF
  __int64 v303; // [rsp+448h] [rbp-190h]
  _OWORD v304[14]; // [rsp+4F0h] [rbp-E8h] BYREF

  v8 = *(_DWORD *)(a2 + 24);
  v271 = a2;
  p_s = &s;
  v9 = (unsigned int)(v8 + 63) >> 6;
  m128i_i64 = v9;
  s = v292;
  v291 = 0x600000000LL;
  if ( v9 > 6 )
  {
    sub_22134E0(p_s, v292, v9, 8);
    v252 = memset(s, 0, 8LL * v9);
    LODWORD(v291) = (unsigned int)(v8 + 63) >> 6;
    v11 = (__int64)v252;
  }
  else
  {
    if ( v9 )
    {
      m128i_i64 = 8 * v9;
      v245 = 0;
      do
      {
        v246 = v245;
        v245 += 8;
        *(_QWORD *)&v292[v246] = 0;
      }
      while ( v245 < (unsigned int)m128i_i64 );
    }
    LODWORD(v291) = (unsigned int)(v8 + 63) >> 6;
    v11 = (__int64)(p_s + 2);
  }
  v12 = *(__int64 **)(a3 + 8);
  v13 = *(__int64 **)(a3 + 16);
  v293 = v8;
  v14 = v304;
  v15 = &v302;
  v269 = v12;
  if ( v13 == v12 )
    goto LABEL_372;
  v16 = (__m128i *)v304;
  v268 = v13 - 1;
  v17 = v304;
  v267 = v296;
  while ( 2 )
  {
    v266 = *v268;
    v18 = *(_DWORD *)(v266 + 48);
    v256 = *a4 + 96LL * v18;
    v19 = 1LL << v18;
    v20 = (_QWORD *)(v11 + 8LL * (v18 >> 6));
    if ( (v19 & *v20) == 0 )
      *v20 |= v19;
    v21 = *(const __m128i **)(v266 + 56);
    v261 = *(const __m128i **)(v266 + 64);
    v22 = *(__m128i **)(v256 + 64);
    if ( v21 == v261 )
      goto LABEL_321;
    v255 = (void **)v17;
    v17 = (_OWORD *)a1;
    v23 = v21;
    LOBYTE(v262) = 1;
    LOBYTE(v263) = 0;
    do
    {
      while ( v23->m128i_i64[0] )
      {
        v25 = *(unsigned int *)(v23->m128i_i64[0] + 48);
        if ( ((1LL << v25) & *((_QWORD *)s + ((unsigned int)v25 >> 6))) == 0 )
          break;
        v26 = *(_QWORD *)(*a4 + 96 * v25 + 72);
        if ( (_BYTE)v262 )
        {
          *(_QWORD *)&v304[0] = *(_QWORD *)(*a4 + 96 * v25 + 72);
          if ( v26 )
            ++*(_DWORD *)(v26 + 68);
          *(_QWORD *)&v304[0] = v22;
          *(_QWORD *)(v256 + 64) = v26;
          sub_9AE1E0((_DWORD **)v255);
          v22 = *(__m128i **)(v256 + 64);
          LOBYTE(v262) = 0;
        }
        else
        {
          v280 = *(_DWORD **)(*a4 + 96 * v25 + 72);
          if ( v26 )
            ++*(_DWORD *)(v26 + 68);
          v279 = v22;
          if ( v22 )
          {
            v22[4].m128i_i32[1] += 2;
            v281 = v22;
            *(_QWORD *)&v304[1] = v22;
            *(_QWORD *)&v304[0] = v255 + 2;
            *((_QWORD *)&v304[0] + 1) = 0x1400000001LL;
            sub_9A68E0((__int64 *)v255);
            ptr = v267;
            v295 = 0x1400000000LL;
            if ( DWORD2(v304[0]) )
              sub_994930((char ***)&ptr, (char ***)v255);
            if ( *(void ***)&v304[0] != v255 + 2 )
              free(*(void **)&v304[0]);
          }
          else
          {
            v281 = nullptr;
            *(_QWORD *)&v304[0] = v255 + 2;
            ptr = v267;
            v295 = 0x1400000000LL;
          }
          v27 = (unsigned int)v295;
          memset(&v297[1], 0, 0xA8u);
          HIDWORD(v297[1]) = 20;
          v28 = (__int64 *)ptr;
          v297[0] = &v297[2];
          v29 = (unsigned int)v295;
          v258 = (void **)v301;
          v259 = (__int64 *)&v302;
          v264 = (unsigned __int64 *)&v298;
          v257 = (__m128i *)v296;
LABEL_25:
          while ( 2 )
          {
            if ( v27 )
            {
              v30 = v28[v27 - 1];
              v31 = v280;
              v32 = v30 & 0xFFFFFFFFFFFFFFFCLL;
              v33 = *(_QWORD *)((v30 & 0xFFFFFFFFFFFFFFFCLL) + 48);
              if ( !v280 )
              {
LABEL_32:
                v34 = (unsigned __int64)v281;
                if ( !v281 )
                  goto LABEL_42;
                v35 = v281[4].m128i_i32[1];
                v298 = *(void **)(v32 + 48);
                v281[4].m128i_i32[1] = v35 + 2;
                v36 = (__int64 *)v34;
                while ( v33 != v36[6] )
                {
                  if ( v33 < v36[6] )
                  {
                    v36 = (__int64 *)v36[1];
                    if ( !v36 )
                      goto LABEL_38;
                  }
                  else
                  {
                    v36 = (__int64 *)v36[2];
                    if ( !v36 )
                      goto LABEL_38;
                  }
                }
                v83 = *(_QWORD *)(v34 + 48);
                v302 = (void *)v34;
                *(_DWORD *)(v34 + 68) = v35 + 3;
                v84 = *(_QWORD *)(v34 + 16);
                if ( v33 != v83 )
                {
                  if ( v33 >= v83 )
                  {
                    v186 = sub_9AD0F0(v17, v264, *(_QWORD *)(v34 + 16), v29, v32, v33);
                    m128i_i64 = sub_9ACEE0(
                                  v17,
                                  *(const __m128i **)(v34 + 8),
                                  (const __m128i *)(v34 + 48),
                                  v186,
                                  v187,
                                  v188);
                  }
                  else
                  {
                    v85 = (const __m128i *)sub_9AD0F0(v17, v264, *(_QWORD *)(v34 + 8), v29, v32, v33);
                    m128i_i64 = sub_9ACEE0(v17, v85, (const __m128i *)(v34 + 48), v84, v86, v87);
                  }
                  goto LABEL_143;
                }
                m128i_i64 = *(_QWORD *)(v34 + 8);
                if ( !m128i_i64 )
                {
                  m128i_i64 = *(_QWORD *)(v34 + 16);
                  goto LABEL_143;
                }
                if ( !v84 )
                  goto LABEL_144;
                v195 = *(const __m128i **)(v84 + 8);
                v196 = *(const __m128i **)(v84 + 16);
                v16 = (__m128i *)(v84 + 48);
                if ( v195 )
                {
                  v197 = (const __m128i *)v195->m128i_i64[1];
                  v198 = (const __m128i *)v195[1].m128i_i64[0];
                  if ( v197 )
                  {
                    v199 = v197->m128i_i64[1];
                    v200 = (const __m128i *)v197[1].m128i_i64[0];
                    v265 = v195 + 3;
                    if ( v199 )
                    {
                      v201 = *(const __m128i **)(v199 + 8);
                      v202 = *(const __m128i **)(v199 + 16);
                      v272 = (__m128i *)&v197[3];
                      if ( v201 )
                      {
                        v275 = v200;
                        v273 = v196;
                        v276 = v202;
                        v274 = (const __m128i *)v199;
                        v203 = (const __m128i *)sub_9AD0B0(v17, v201, (const __m128i **)v255);
                        v206 = sub_9ACEE0(v17, v203, v274 + 3, (__int64)v276, v204, v205);
                        v200 = v275;
                        v196 = v273;
                        v202 = (const __m128i *)v206;
                      }
                      else
                      {
                        *(_QWORD *)&v304[0] = v199;
                      }
                      v273 = v196;
                      v207 = sub_9ACEE0(v17, v202, v272, (__int64)v200, (__int64)v196, v33);
                      v196 = v273;
                      v200 = (const __m128i *)v207;
                    }
                    else
                    {
                      *(_QWORD *)&v304[0] = v197;
                    }
                    v272 = (__m128i *)v196;
                    v253 = sub_9ACEE0(v17, v200, v265, (__int64)v198, (__int64)v196, v33);
                    v196 = v272;
                    v198 = (const __m128i *)v253;
                  }
                  else
                  {
                    *(_QWORD *)&v304[0] = v195;
                  }
                  v196 = (const __m128i *)sub_9ACEE0(v17, v198, v16, (__int64)v196, (__int64)v196, v33);
                  v16 = (__m128i *)(*(_QWORD *)&v304[0] + 48LL);
                }
                else
                {
                  *(_QWORD *)&v304[0] = *(_QWORD *)(v34 + 16);
                }
                m128i_i64 = sub_9ACEE0(v17, (const __m128i *)m128i_i64, v16, (__int64)v196, (__int64)v196, v33);
LABEL_143:
                if ( m128i_i64 )
                {
LABEL_144:
                  if ( (*(_BYTE *)(m128i_i64 + 43) & 0x10) != 0 )
                  {
                    v16 = (__m128i *)m128i_i64;
                    do
                    {
                      v16[2].m128i_i8[11] &= ~0x10u;
                      sub_9A6D20((__int64)v17, v16->m128i_i64[1]);
                      v16 = (__m128i *)v16[1].m128i_i64[0];
                    }
                    while ( v16 && (v16[2].m128i_i8[11] & 0x10) != 0 );
                  }
                }
                v88 = *((_QWORD *)v17 + 5);
                v89 = *((_QWORD *)v17 + 4);
                v90 = (v88 - v89) >> 3;
                if ( (_DWORD)v90 )
                {
                  v16 = nullptr;
                  v91 = 8LL * (unsigned int)(v90 - 1) + 8;
                  do
                  {
                    while ( 1 )
                    {
                      v92 = *(__int64 *)((char *)v16->m128i_i64 + v89);
                      if ( (*(_BYTE *)(v92 + 43) & 0x10) != 0 && !*(_DWORD *)(v92 + 68) )
                        break;
                      v16 = (__m128i *)((char *)v16 + 8);
                      if ( (__m128i *)v91 == v16 )
                        goto LABEL_154;
                    }
                    sub_9AD7F0((void *)v92);
                    v16 = (__m128i *)((char *)v16 + 8);
                    v89 = *((_QWORD *)v17 + 4);
                  }
                  while ( (__m128i *)v91 != v16 );
LABEL_154:
                  v88 = *((_QWORD *)v17 + 5);
                }
                if ( v89 != v88 )
                  *((_QWORD *)v17 + 5) = v89;
                if ( *((_BYTE *)v17 + 80) )
                  m128i_i64 = sub_9AEA20((__int64)v17, m128i_i64);
                *(_QWORD *)&v304[0] = m128i_i64;
                if ( m128i_i64 )
                  ++*(_DWORD *)(m128i_i64 + 68);
                v301[0] = (_DWORD *)v34;
                *(_QWORD *)&v304[0] = 0;
                sub_9AE1E0(v301);
                sub_9AE1E0((_DWORD **)v255);
                sub_9AE1E0((_DWORD **)&v302);
                v37 = v281;
                v281 = (__m128i *)m128i_i64;
                if ( v37 )
                {
LABEL_39:
                  v38 = v37[17]-- == 1;
                  if ( !v38 )
                    goto LABEL_40;
                  sub_9AD7F0(v37);
                  v38 = (*(_DWORD *)(v34 + 68))-- == 1;
                  if ( v38 )
LABEL_70:
                    sub_9AD7F0((void *)v34);
LABEL_41:
                  v27 = (unsigned int)v295;
                  v28 = (__int64 *)ptr;
                  v30 = *((_QWORD *)ptr + (unsigned int)v295 - 1);
                  v29 = (unsigned int)v295;
                  goto LABEL_42;
                }
LABEL_40:
                v38 = (*(_DWORD *)(v34 + 68))-- == 1;
                if ( v38 )
                  goto LABEL_70;
                goto LABEL_41;
              }
              while ( v33 != *((_QWORD *)v31 + 6) )
              {
                if ( v33 < *((_QWORD *)v31 + 6) )
                {
                  v31 = *((_DWORD **)v31 + 1);
                  if ( !v31 )
                    goto LABEL_32;
                }
                else
                {
                  v31 = *((_DWORD **)v31 + 2);
                  if ( !v31 )
                    goto LABEL_32;
                }
              }
              v34 = *(unsigned int *)(v32 + 56);
              if ( v31[14] != (_DWORD)v34 )
              {
                v34 = (unsigned __int64)v281;
                if ( v281 )
                {
                  v44 = v281[4].m128i_i32[1];
                  v298 = *(void **)(v32 + 48);
                  v281[4].m128i_i32[1] = v44 + 2;
                  v45 = (__int64 *)v34;
                  while ( v33 != v45[6] )
                  {
                    if ( v33 < v45[6] )
                      v45 = (__int64 *)v45[1];
                    else
                      v45 = (__int64 *)v45[2];
                    if ( !v45 )
                    {
LABEL_38:
                      v281 = (__m128i *)v34;
                      v37 = (_DWORD *)v34;
                      goto LABEL_39;
                    }
                  }
                  v53 = *(_QWORD *)(v34 + 48);
                  v302 = (void *)v34;
                  *(_DWORD *)(v34 + 68) = v44 + 3;
                  m128i_i64 = *(_QWORD *)(v34 + 16);
                  if ( v33 == v53 )
                  {
                    v16 = *(__m128i **)(v34 + 8);
                    if ( !v16 )
                    {
                      v16 = *(__m128i **)(v34 + 16);
                      goto LABEL_101;
                    }
                    if ( m128i_i64 )
                    {
                      v154 = *(_QWORD *)(m128i_i64 + 8);
                      v155 = *(const __m128i **)(m128i_i64 + 16);
                      v156 = (const __m128i *)(m128i_i64 + 48);
                      if ( v154 )
                      {
                        v157 = *(const __m128i **)(v154 + 8);
                        v158 = *(const __m128i **)(v154 + 16);
                        if ( v157 )
                        {
                          v159 = v157->m128i_i64[1];
                          m128i_i64 = v154 + 48;
                          v160 = (const __m128i *)v157[1].m128i_i64[0];
                          if ( v159 )
                          {
                            v161 = *(const __m128i **)(v159 + 8);
                            v162 = *(const __m128i **)(v159 + 16);
                            v265 = v157 + 3;
                            if ( v161 )
                            {
                              v275 = v160;
                              v273 = v158;
                              v272 = (__m128i *)v155;
                              v276 = v162;
                              v274 = (const __m128i *)v159;
                              v163 = (const __m128i *)sub_9AD0B0(v17, v161, (const __m128i **)v255);
                              v166 = sub_9ACEE0(v17, v163, v274 + 3, (__int64)v276, v164, v165);
                              v160 = v275;
                              v158 = v273;
                              v155 = v272;
                              v162 = (const __m128i *)v166;
                            }
                            else
                            {
                              *(_QWORD *)&v304[0] = v159;
                            }
                            v273 = v158;
                            v272 = (__m128i *)v155;
                            v167 = sub_9ACEE0(v17, v162, v265, (__int64)v160, (__int64)v155, (__int64)v158);
                            v158 = v273;
                            v155 = v272;
                            v160 = (const __m128i *)v167;
                          }
                          else
                          {
                            *(_QWORD *)&v304[0] = *(_QWORD *)(v154 + 8);
                          }
                          v265 = v155;
                          v168 = sub_9ACEE0(
                                   v17,
                                   v160,
                                   (const __m128i *)m128i_i64,
                                   (__int64)v158,
                                   (__int64)v155,
                                   (__int64)v158);
                          v155 = v265;
                          v158 = (const __m128i *)v168;
                        }
                        else
                        {
                          *(_QWORD *)&v304[0] = *(_QWORD *)(m128i_i64 + 8);
                        }
                        v155 = (const __m128i *)sub_9ACEE0(v17, v158, v156, (__int64)v155, (__int64)v155, (__int64)v158);
                        v156 = (const __m128i *)(*(_QWORD *)&v304[0] + 48LL);
                      }
                      else
                      {
                        *(_QWORD *)&v304[0] = *(_QWORD *)(v34 + 16);
                      }
                      v16 = (__m128i *)sub_9ACEE0(v17, v16, v156, (__int64)v155, (__int64)v155, v33);
                      goto LABEL_101;
                    }
LABEL_102:
                    if ( (v16[2].m128i_i8[11] & 0x10) != 0 )
                    {
                      m128i_i64 = (__int64)v16;
                      do
                      {
                        *(_BYTE *)(m128i_i64 + 43) &= ~0x10u;
                        sub_9A6D20((__int64)v17, *(_QWORD *)(m128i_i64 + 8));
                        m128i_i64 = *(_QWORD *)(m128i_i64 + 16);
                      }
                      while ( m128i_i64 && (*(_BYTE *)(m128i_i64 + 43) & 0x10) != 0 );
                    }
                  }
                  else
                  {
                    if ( v33 >= v53 )
                    {
                      if ( m128i_i64 )
                      {
                        v148 = *(_QWORD *)(m128i_i64 + 48);
                        v149 = *(_QWORD *)(m128i_i64 + 16);
                        if ( v33 == v148 )
                        {
                          m128i_i64 = *(_QWORD *)(m128i_i64 + 8);
                          if ( m128i_i64 )
                          {
                            if ( v149 )
                            {
                              v214 = *(const __m128i **)(v149 + 8);
                              v215 = *(const __m128i **)(v149 + 16);
                              v216 = (const __m128i *)(v149 + 48);
                              if ( v214 )
                              {
                                v217 = (const __m128i *)v214->m128i_i64[1];
                                v218 = (const __m128i *)v214[1].m128i_i64[0];
                                if ( v217 )
                                {
                                  v219 = v217->m128i_i64[1];
                                  v220 = (const __m128i *)v217[1].m128i_i64[0];
                                  v265 = v214 + 3;
                                  if ( v219 )
                                  {
                                    v221 = *(const __m128i **)(v219 + 8);
                                    v222 = *(const __m128i **)(v219 + 16);
                                    v272 = (__m128i *)&v217[3];
                                    if ( v221 )
                                    {
                                      v276 = v220;
                                      v274 = v218;
                                      v273 = v215;
                                      v277 = v222;
                                      v275 = (const __m128i *)v219;
                                      v223 = (const __m128i *)sub_9AD0B0(v17, v221, (const __m128i **)v255);
                                      v226 = sub_9ACEE0(v17, v223, v275 + 3, (__int64)v277, v224, v225);
                                      v220 = v276;
                                      v218 = v274;
                                      v215 = v273;
                                      v222 = (const __m128i *)v226;
                                    }
                                    else
                                    {
                                      *(_QWORD *)&v304[0] = v219;
                                    }
                                    v274 = v218;
                                    v273 = v215;
                                    v227 = sub_9ACEE0(v17, v222, v272, (__int64)v220, (__int64)v215, (__int64)v218);
                                    v218 = v274;
                                    v215 = v273;
                                    v220 = (const __m128i *)v227;
                                  }
                                  else
                                  {
                                    *(_QWORD *)&v304[0] = v217;
                                  }
                                  v272 = (__m128i *)v215;
                                  v228 = sub_9ACEE0(v17, v220, v265, (__int64)v218, (__int64)v215, (__int64)v218);
                                  v215 = v272;
                                  v218 = (const __m128i *)v228;
                                }
                                else
                                {
                                  *(_QWORD *)&v304[0] = *(_QWORD *)(v149 + 8);
                                }
                                v215 = (const __m128i *)sub_9ACEE0(
                                                          v17,
                                                          v218,
                                                          v216,
                                                          (__int64)v215,
                                                          (__int64)v215,
                                                          (__int64)v218);
                                v216 = (const __m128i *)(*(_QWORD *)&v304[0] + 48LL);
                              }
                              else
                              {
                                *(_QWORD *)&v304[0] = v149;
                              }
                              m128i_i64 = sub_9ACEE0(
                                            v17,
                                            (const __m128i *)m128i_i64,
                                            v216,
                                            (__int64)v215,
                                            (__int64)v215,
                                            v33);
                            }
                          }
                          else
                          {
                            m128i_i64 = v149;
                          }
                        }
                        else if ( v33 >= v148 )
                        {
                          v211 = sub_9AD0F0(v17, v264, *(_QWORD *)(m128i_i64 + 16), v149, v32, v33);
                          m128i_i64 = sub_9ACEE0(
                                        v17,
                                        *(const __m128i **)(m128i_i64 + 8),
                                        (const __m128i *)(m128i_i64 + 48),
                                        v211,
                                        v212,
                                        v213);
                        }
                        else
                        {
                          v150 = *(_QWORD *)(m128i_i64 + 8);
                          v265 = *(const __m128i **)(m128i_i64 + 16);
                          v151 = (const __m128i *)sub_9AD0F0(v17, v264, v150, v149, v32, v33);
                          m128i_i64 = sub_9ACEE0(
                                        v17,
                                        v151,
                                        (const __m128i *)(m128i_i64 + 48),
                                        (__int64)v265,
                                        v152,
                                        v153);
                        }
                      }
                      v16 = (__m128i *)sub_9ACEE0(
                                         v17,
                                         *(const __m128i **)(v34 + 8),
                                         (const __m128i *)(v34 + 48),
                                         m128i_i64,
                                         v32,
                                         v33);
                    }
                    else
                    {
                      v54 = *(const __m128i **)(v34 + 8);
                      if ( v54 )
                      {
                        v55 = v54[3].m128i_u64[0];
                        v56 = v54[1].m128i_i64[0];
                        if ( v33 == v55 )
                        {
                          v54 = (const __m128i *)v54->m128i_i64[1];
                          if ( v54 )
                          {
                            if ( v56 )
                            {
                              v229 = *(const __m128i **)(v56 + 8);
                              v230 = *(_QWORD *)(v56 + 16);
                              v231 = (const __m128i *)(v56 + 48);
                              if ( v229 )
                              {
                                v232 = (const __m128i *)v229[1].m128i_i64[0];
                                v233 = (const __m128i *)v229->m128i_i64[1];
                                v265 = v232;
                                if ( v233 )
                                {
                                  v234 = (const __m128i *)v233->m128i_i64[1];
                                  v235 = (const __m128i *)v233[1].m128i_i64[0];
                                  v272 = (__m128i *)&v229[3];
                                  if ( v234 )
                                  {
                                    v236 = (const __m128i *)v234->m128i_i64[1];
                                    v237 = (const __m128i *)v234[1].m128i_i64[0];
                                    v273 = v233 + 3;
                                    if ( v236 )
                                    {
                                      v277 = v235;
                                      v275 = (const __m128i *)v230;
                                      v274 = v54;
                                      v278 = v237;
                                      v276 = v234;
                                      v238 = (const __m128i *)sub_9AD0B0(v17, v236, (const __m128i **)v255);
                                      v241 = sub_9ACEE0(v17, v238, v276 + 3, (__int64)v278, v239, v240);
                                      v235 = v277;
                                      v230 = (__int64)v275;
                                      v54 = v274;
                                      v237 = (const __m128i *)v241;
                                    }
                                    else
                                    {
                                      *(_QWORD *)&v304[0] = v234;
                                    }
                                    v275 = (const __m128i *)v230;
                                    v274 = v54;
                                    v242 = sub_9ACEE0(v17, v237, v273, (__int64)v235, (__int64)v54, v230);
                                    v230 = (__int64)v275;
                                    v54 = v274;
                                    v235 = (const __m128i *)v242;
                                  }
                                  else
                                  {
                                    *(_QWORD *)&v304[0] = v233;
                                  }
                                  v274 = (const __m128i *)v230;
                                  v273 = v54;
                                  v243 = (const __m128i *)sub_9ACEE0(v17, v235, v272, (__int64)v265, (__int64)v54, v230);
                                  v230 = (__int64)v274;
                                  v54 = v273;
                                  v265 = v243;
                                  v244 = v243;
                                }
                                else
                                {
                                  *(_QWORD *)&v304[0] = v229;
                                  v244 = v232;
                                }
                                v272 = (__m128i *)v54;
                                v254 = sub_9ACEE0(v17, v244, v231, v230, (__int64)v54, v230);
                                v54 = v272;
                                v230 = v254;
                                v231 = (const __m128i *)(*(_QWORD *)&v304[0] + 48LL);
                              }
                              else
                              {
                                *(_QWORD *)&v304[0] = v56;
                              }
                              v54 = (const __m128i *)sub_9ACEE0(v17, v54, v231, v230, (__int64)v54, v230);
                            }
                          }
                          else
                          {
                            v54 = (const __m128i *)v56;
                          }
                        }
                        else
                        {
                          v57 = v54 + 3;
                          if ( v33 >= v55 )
                          {
                            v208 = v54[1].m128i_i64[0];
                            v265 = *(const __m128i **)(v34 + 8);
                            v209 = sub_9AD0F0(v17, v264, v208, v56, (__int64)v54, v33);
                            v54 = (const __m128i *)sub_9ACEE0(
                                                     v17,
                                                     (const __m128i *)v265->m128i_i64[1],
                                                     v57,
                                                     v209,
                                                     (__int64)v265,
                                                     v210);
                          }
                          else
                          {
                            v58 = v54->m128i_i64[1];
                            v265 = (const __m128i *)v54[1].m128i_i64[0];
                            v59 = (const __m128i *)sub_9AD0F0(v17, v264, v58, v56, (__int64)v54, v33);
                            v54 = (const __m128i *)sub_9ACEE0(v17, v59, v57, (__int64)v265, v60, v61);
                          }
                        }
                      }
                      v16 = (__m128i *)sub_9ACEE0(v17, v54, (const __m128i *)(v34 + 48), m128i_i64, (__int64)v54, v33);
                    }
LABEL_101:
                    if ( v16 )
                      goto LABEL_102;
                  }
                  v62 = *((_QWORD *)v17 + 5);
                  v63 = *((_QWORD *)v17 + 4);
                  v64 = (v62 - v63) >> 3;
                  if ( (_DWORD)v64 )
                  {
                    m128i_i64 = 0;
                    v65 = 8LL * (unsigned int)(v64 - 1) + 8;
                    do
                    {
                      while ( 1 )
                      {
                        v66 = *(_QWORD *)(v63 + m128i_i64);
                        if ( (*(_BYTE *)(v66 + 43) & 0x10) != 0 && !*(_DWORD *)(v66 + 68) )
                          break;
                        m128i_i64 += 8;
                        if ( v65 == m128i_i64 )
                          goto LABEL_112;
                      }
                      sub_9AD7F0((void *)v66);
                      m128i_i64 += 8;
                      v63 = *((_QWORD *)v17 + 4);
                    }
                    while ( v65 != m128i_i64 );
LABEL_112:
                    v62 = *((_QWORD *)v17 + 5);
                  }
                  if ( v63 != v62 )
                    *((_QWORD *)v17 + 5) = v63;
                  if ( *((_BYTE *)v17 + 80) )
                  {
                    v16 = (__m128i *)sub_9AEA20((__int64)v17, (__int64)v16);
                    *(_QWORD *)&v304[0] = v16;
                    if ( v16 )
                      goto LABEL_117;
                  }
                  else
                  {
                    *(_QWORD *)&v304[0] = v16;
                    if ( v16 )
                    {
LABEL_117:
                      ++v16[4].m128i_i32[1];
                      *(_QWORD *)&v304[0] = 0;
                      v301[0] = (_DWORD *)v34;
                      sub_9AE1E0(v301);
                      sub_9AE1E0((_DWORD **)v255);
                      sub_9AE1E0((_DWORD **)&v302);
                      v70 = v298;
                      v302 = v16;
                      ++v16[4].m128i_i32[1];
                      *(_QWORD *)&v304[0] = v70;
                      v71 = (void *)v16[3].m128i_i64[0];
                      DWORD2(v304[0]) = 0;
                      if ( v71 == v70 )
                      {
                        v76 = sub_9ACD30(v17, v16->m128i_i64[1], (const __m128i *)v255, v16[1].m128i_i64[0], v68, v69);
                      }
                      else
                      {
                        v72 = v16[1].m128i_i64[0];
                        m128i_i64 = (__int64)v16[3].m128i_i64;
                        if ( v71 <= v70 )
                        {
                          v93 = sub_9AD350(v17, (const __m128i *)v255, (__int64 *)v16[1].m128i_i64[0], v67, v68, v69);
                          v76 = sub_9ACEE0(v17, (const __m128i *)v16->m128i_i64[1], v16 + 3, v93, v94, v95);
                        }
                        else
                        {
                          v73 = (const __m128i *)sub_9AD350(
                                                   v17,
                                                   (const __m128i *)v255,
                                                   (__int64 *)v16->m128i_i64[1],
                                                   v67,
                                                   v68,
                                                   v69);
                          v76 = sub_9ACEE0(v17, v73, v16 + 3, v72, v74, v75);
                        }
                      }
LABEL_120:
                      if ( v76 && (*(_BYTE *)(v76 + 43) & 0x10) != 0 )
                      {
                        m128i_i64 = v76;
                        do
                        {
                          *(_BYTE *)(m128i_i64 + 43) &= ~0x10u;
                          sub_9A6D20((__int64)v17, *(_QWORD *)(m128i_i64 + 8));
                          m128i_i64 = *(_QWORD *)(m128i_i64 + 16);
                        }
                        while ( m128i_i64 && (*(_BYTE *)(m128i_i64 + 43) & 0x10) != 0 );
                      }
                      v77 = *((_QWORD *)v17 + 5);
                      v78 = *((_QWORD *)v17 + 4);
                      v79 = (v77 - v78) >> 3;
                      if ( (_DWORD)v79 )
                      {
                        v265 = (const __m128i *)v34;
                        m128i_i64 = 0;
                        v80 = v17;
                        v81 = 8LL * (unsigned int)(v79 - 1) + 8;
                        do
                        {
                          while ( 1 )
                          {
                            v82 = *(_QWORD *)(v78 + m128i_i64);
                            if ( (*(_BYTE *)(v82 + 43) & 0x10) != 0 && !*(_DWORD *)(v82 + 68) )
                              break;
                            m128i_i64 += 8;
                            if ( v81 == m128i_i64 )
                              goto LABEL_131;
                          }
                          sub_9AD7F0((void *)v82);
                          m128i_i64 += 8;
                          v78 = *((_QWORD *)v80 + 4);
                        }
                        while ( v81 != m128i_i64 );
LABEL_131:
                        v17 = v80;
                        v34 = (unsigned __int64)v265;
                        v77 = *((_QWORD *)v17 + 5);
                      }
                      if ( v78 != v77 )
                        *((_QWORD *)v17 + 5) = v78;
                      if ( *((_BYTE *)v17 + 80) )
                        v76 = sub_9AEA20((__int64)v17, v76);
                      *(_QWORD *)&v304[0] = v76;
                      if ( v76 )
                        ++*(_DWORD *)(v76 + 68);
                      v301[0] = v16;
                      *(_QWORD *)&v304[0] = 0;
                      sub_9AE1E0(v301);
                      sub_9AE1E0((_DWORD **)v255);
                      sub_9AE1E0((_DWORD **)&v302);
                      v37 = v281;
                      v281 = (__m128i *)v76;
                      if ( v37 )
                        goto LABEL_39;
                      goto LABEL_40;
                    }
                  }
                  v301[0] = (_DWORD *)v34;
                  sub_9AE1E0(v301);
                  m128i_i64 = (__int64)v255;
                  sub_9AE1E0((_DWORD **)v255);
                  sub_9AE1E0((_DWORD **)&v302);
                  v302 = nullptr;
                  DWORD2(v304[0]) = 0;
                  *(_QWORD *)&v304[0] = v298;
                  v76 = sub_9ACD30(v17, 0, (const __m128i *)v255, 0, v146, v147);
                  goto LABEL_120;
                }
              }
LABEL_42:
              while ( 1 )
              {
                v39 = (char *)(8 * v27);
                v40 = v30 & 3;
                v41 = &v28[v27 - 1];
                v42 = v30 & 0xFFFFFFFFFFFFFFFCLL;
                if ( v40 == 1 )
                  break;
                if ( (v30 & 3) == 0 )
                {
                  v34 = *(_QWORD *)(v42 + 8);
                  if ( v34 )
                    goto LABEL_45;
                  *v41 = v30 | 1;
                  goto LABEL_48;
                }
                if ( v40 != 3 )
                  goto LABEL_301;
                v29 = (unsigned int)(v29 - 1);
                LODWORD(v295) = v29;
                if ( !(_DWORD)v29 )
                {
                  v27 = 0;
                  goto LABEL_25;
                }
                v27 = (unsigned int)v29;
                v39 = (char *)&v28[(unsigned int)v29 - 1];
                v30 = *(_QWORD *)v39;
                if ( (*(_QWORD *)v39 & 3) == 0 )
                {
                  *(_QWORD *)v39 = v30 | 1;
                  goto LABEL_25;
                }
                if ( (*(_QWORD *)v39 & 3LL) != 1 )
                  goto LABEL_301;
                v30 |= 3uLL;
                *(_QWORD *)v39 = v30;
              }
              v34 = *(_QWORD *)(v42 + 16);
              if ( v34 )
              {
LABEL_45:
                v43 = v27 + 1;
                if ( v43 > HIDWORD(v295) )
                {
                  sub_22134E0(&ptr, v296, v43, 8);
                  v28 = (__int64 *)ptr;
                  v39 = (char *)(8LL * (unsigned int)v295);
                }
                *(_QWORD *)&v39[(_QWORD)v28] = v34;
                v28 = (__int64 *)ptr;
                LODWORD(v295) = v295 + 1;
                v27 = (unsigned int)v295;
                v29 = (unsigned int)v295;
              }
              else
              {
                *v41 = v30 | 3;
              }
LABEL_48:
              if ( !(_DWORD)v29 )
                continue;
              v30 = v28[v27 - 1];
              if ( (v30 & 3) == 1 )
                continue;
              goto LABEL_42;
            }
            break;
          }
          if ( v28 != (__int64 *)v296 )
            free(v28);
          v24 = v281;
          v281 = nullptr;
          *(_QWORD *)&v304[0] = *(_QWORD *)(v256 + 64);
          *(_QWORD *)(v256 + 64) = v24;
          sub_9AE1E0((_DWORD **)v255);
          sub_9AE1E0((_DWORD **)&v281);
          sub_9AE1E0((_DWORD **)&v279);
          sub_9AE1E0(&v280);
          v22 = *(__m128i **)(v256 + 64);
        }
        if ( ++v23 == v261 )
          goto LABEL_72;
      }
      LOBYTE(v263) = 1;
      ++v23;
    }
    while ( v23 != v261 );
LABEL_72:
    a1 = (__int64)v17;
    v17 = v255;
    if ( !(_BYTE)v263 )
    {
LABEL_321:
      v302 = v22;
      v255 = &v302;
      if ( v22 )
        goto LABEL_83;
      goto LABEL_322;
    }
    v282 = v22;
    if ( v22 )
    {
      ++v22[4].m128i_i32[1];
      *(_QWORD *)&v304[1] = v22;
      v283 = nullptr;
      *(_QWORD *)&v304[0] = v255 + 2;
      *((_QWORD *)&v304[0] + 1) = 0x1400000001LL;
      sub_9A68E0((__int64 *)v255);
      v258 = &v298;
      v298 = v300;
      v299 = 0x1400000000LL;
      if ( DWORD2(v304[0]) )
        sub_994930((char ***)&v298, (char ***)v255);
      if ( *(void ***)&v304[0] != v255 + 2 )
        free(*(void **)&v304[0]);
    }
    else
    {
      v283 = nullptr;
      *(_QWORD *)&v304[0] = v255 + 2;
      v258 = &v298;
      v298 = v300;
      v299 = 0x1400000000LL;
    }
    v46 = (unsigned int)v299;
    memset(&v301[1], 0, 0xA8u);
    HIDWORD(v301[1]) = 20;
    v28 = (__int64 *)v298;
    v301[0] = &v301[2];
    v255 = &v302;
    v259 = (__int64 *)v297;
    v262 = v300;
LABEL_79:
    if ( !v46 )
    {
      if ( v28 != (__int64 *)v300 )
        free(v28);
      v47 = v283;
      v283 = nullptr;
      *(_QWORD *)&v304[0] = *(_QWORD *)(v256 + 64);
      *(_QWORD *)(v256 + 64) = v47;
      sub_9AE1E0((_DWORD **)v17);
      sub_9AE1E0((_DWORD **)&v283);
      sub_9AE1E0((_DWORD **)&v282);
      v22 = *(__m128i **)(v256 + 64);
      v302 = v22;
      if ( v22 )
      {
LABEL_83:
        v48 = v22[4].m128i_i32[1];
        v39 = *(char **)(a1 + 120);
        *((_QWORD *)&v304[0] + 1) = v22;
        *(_QWORD *)&v304[0] = 0;
        v22[4].m128i_i32[1] = v48 + 2;
        if ( v39 != *(char **)(a1 + 128) )
        {
LABEL_84:
          v39 += 16;
          *((_OWORD *)v39 - 1) = v304[0];
          *((_QWORD *)&v304[0] + 1) = 0;
          *(_QWORD *)(a1 + 120) = v39;
          goto LABEL_85;
        }
LABEL_323:
        sub_9AE420(a1 + 112, v39, v17);
LABEL_85:
        sub_9AE1E0((_DWORD **)v17 + 1);
        sub_9AE1E0((_DWORD **)&v302);
        v49 = *(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112);
        v288 = a1;
        *(_DWORD *)(v256 + 88) = (v49 >> 4) - 1;
        v50 = *(__m128i **)(v256 + 64);
        *(_QWORD *)&v304[0] = v50;
        if ( v50 )
        {
          v50[4].m128i_i32[1] += 2;
          v289 = v50;
        }
        else
        {
          v289 = nullptr;
        }
        v28 = (__int64 *)v17;
        sub_9AE1E0((_DWORD **)v17);
        v34 = *(_QWORD *)(v266 + 8);
        v16 = *(__m128i **)v266;
        if ( *(_QWORD *)v266 != v34 )
        {
          v257 = (__m128i *)a1;
          v258 = (void **)v297;
          v259 = (__int64 *)v301;
          goto LABEL_90;
        }
        goto LABEL_175;
      }
LABEL_322:
      v39 = *(char **)(a1 + 120);
      v304[0] = 0;
      if ( v39 != *(char **)(a1 + 128) )
        goto LABEL_84;
      goto LABEL_323;
    }
    v109 = v283;
    v110 = *(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88);
    v111 = v28[v46 - 1] & 0xFFFFFFFFFFFFFFFCLL;
    ptr = v283;
    v112 = v110 >> 5;
    v16 = *(__m128i **)(v111 + 48);
    if ( v283 )
    {
      v113 = v283[4].m128i_i32[1];
      v283[4].m128i_i32[1] = v113 + 1;
      v34 = *(unsigned int *)(v111 + 56);
      v302 = v109;
      v114 = (const __m128i *)v109[1].m128i_i64[0];
      v109[4].m128i_i32[1] = v113 + 2;
      *(_QWORD *)&v304[0] = v16;
      DWORD2(v304[0]) = v112;
      v115 = (__m128i *)v109[3].m128i_i64[0];
      LODWORD(v257) = v34;
      if ( v16 == v115 )
      {
        m128i_i64 = sub_9ACD30((_QWORD *)a1, v109->m128i_i64[1], (const __m128i *)v17, (__int64)v114, v11, a6);
      }
      else
      {
        v34 = (unsigned __int64)&v109[3];
        if ( v16 >= v115 )
        {
          if ( v114 )
          {
            v137 = (__m128i *)v114[3].m128i_i64[0];
            v138 = (__int64 *)v114[1].m128i_i64[0];
            if ( v16 == v137 )
            {
              v143 = sub_9ACD30((_QWORD *)a1, v114->m128i_i64[1], (const __m128i *)v17, (__int64)v138, v11, a6);
            }
            else
            {
              v261 = v114 + 3;
              if ( v16 >= v137 )
              {
                v189 = sub_9AD350((_QWORD *)a1, (const __m128i *)v17, v138, (__int64)v138, v11, a6);
                v143 = sub_9ACEE0((_QWORD *)a1, (const __m128i *)v114->m128i_i64[1], v261, v189, v190, v191);
              }
              else
              {
                v139 = (__int64 *)v114->m128i_i64[1];
                v263 = v138;
                v140 = (const __m128i *)sub_9AD350((_QWORD *)a1, (const __m128i *)v17, v139, (__int64)v138, v11, a6);
                v143 = sub_9ACEE0((_QWORD *)a1, v140, v261, (__int64)v263, v141, v142);
              }
            }
          }
          else
          {
            v143 = sub_9ACD30((_QWORD *)a1, 0, (const __m128i *)v17, 0, v11, a6);
          }
          m128i_i64 = sub_9ACEE0((_QWORD *)a1, (const __m128i *)v109->m128i_i64[1], v109 + 3, v143, v144, v145);
        }
        else
        {
          v116 = (const __m128i *)v109->m128i_i64[1];
          if ( v116 )
          {
            v117 = (__m128i *)v116[3].m128i_i64[0];
            v118 = v116[1].m128i_i64[0];
            if ( v16 == v117 )
            {
              v124 = (const __m128i *)sub_9ACD30(
                                        (_QWORD *)a1,
                                        v116->m128i_i64[1],
                                        (const __m128i *)v17,
                                        v118,
                                        (__int64)v116,
                                        a6);
            }
            else
            {
              v119 = v116 + 3;
              if ( v16 >= v117 )
              {
                v192 = (__int64 *)v116[1].m128i_i64[0];
                v261 = v116;
                v193 = sub_9AD350((_QWORD *)a1, (const __m128i *)v17, v192, v118, (__int64)v116, a6);
                v124 = (const __m128i *)sub_9ACEE0(
                                          (_QWORD *)a1,
                                          (const __m128i *)v261->m128i_i64[1],
                                          v119,
                                          v193,
                                          (__int64)v261,
                                          v194);
              }
              else
              {
                v120 = (__int64 *)v116->m128i_i64[1];
                v261 = (const __m128i *)v116[1].m128i_i64[0];
                v121 = (const __m128i *)sub_9AD350((_QWORD *)a1, (const __m128i *)v17, v120, v118, (__int64)v116, a6);
                v124 = (const __m128i *)sub_9ACEE0((_QWORD *)a1, v121, v119, (__int64)v261, v122, v123);
              }
            }
          }
          else
          {
            v124 = (const __m128i *)sub_9ACD30((_QWORD *)a1, 0, (const __m128i *)v17, 0, 0, a6);
          }
          m128i_i64 = sub_9ACEE0((_QWORD *)a1, v124, (const __m128i *)v34, (__int64)v114, v125, v126);
        }
      }
    }
    else
    {
      v34 = *(unsigned int *)(v111 + 56);
      *(_QWORD *)&v304[0] = *(_QWORD *)(v111 + 48);
      LODWORD(v257) = v34;
      v302 = nullptr;
      DWORD2(v304[0]) = v112;
      m128i_i64 = sub_9ACD30((_QWORD *)a1, 0, (const __m128i *)v17, 0, v11, a6);
    }
    if ( m128i_i64 && (*(_BYTE *)(m128i_i64 + 43) & 0x10) != 0 )
    {
      v34 = m128i_i64;
      do
      {
        *(_BYTE *)(v34 + 43) &= ~0x10u;
        sub_9A6D20(a1, *(_QWORD *)(v34 + 8));
        v34 = *(_QWORD *)(v34 + 16);
      }
      while ( v34 && (*(_BYTE *)(v34 + 43) & 0x10) != 0 );
    }
    v127 = *(_QWORD *)(a1 + 40);
    v128 = *(_QWORD *)(a1 + 32);
    v129 = (v127 - v128) >> 3;
    if ( (_DWORD)v129 )
    {
      v34 = 0;
      v130 = 8LL * (unsigned int)(v129 - 1) + 8;
      do
      {
        while ( 1 )
        {
          v131 = *(_QWORD *)(v128 + v34);
          if ( (*(_BYTE *)(v131 + 43) & 0x10) != 0 && !*(_DWORD *)(v131 + 68) )
            break;
          v34 += 8LL;
          if ( v34 == v130 )
            goto LABEL_231;
        }
        sub_9AD7F0((void *)v131);
        v34 += 8LL;
        v128 = *(_QWORD *)(a1 + 32);
      }
      while ( v34 != v130 );
LABEL_231:
      v127 = *(_QWORD *)(a1 + 40);
    }
    if ( v127 != v128 )
      *(_QWORD *)(a1 + 40) = v128;
    if ( *(_BYTE *)(a1 + 80) )
      m128i_i64 = sub_9AEA20(a1, m128i_i64);
    v297[0] = (_DWORD *)m128i_i64;
    if ( m128i_i64 )
      ++*(_DWORD *)(m128i_i64 + 68);
    sub_9AE1E0((_DWORD **)&v302);
    v302 = ptr;
    if ( ptr )
    {
      v132 = *((_DWORD *)ptr + 17);
      v34 = (unsigned int)v257;
      v304[0] = (unsigned __int64)v16;
      LODWORD(v304[1]) = (_DWORD)v257;
      *((_QWORD *)&v304[1] + 1) = ptr;
      *((_DWORD *)ptr + 17) = v132 + 2;
    }
    else
    {
      v304[0] = (unsigned __int64)v16;
      LODWORD(v304[1]) = (_DWORD)v257;
      *((_QWORD *)&v304[1] + 1) = 0;
    }
    sub_9AE200((__m128i **)(a1 + 88), (const __m128i *)v17);
    sub_9AE1E0((_DWORD **)v17 + 3);
    sub_9AE1E0((_DWORD **)&v302);
    v133 = (__m128i *)v297[0];
    v297[0] = nullptr;
    *(_QWORD *)&v304[0] = v283;
    v283 = v133;
    sub_9AE1E0((_DWORD **)v17);
    sub_9AE1E0(v297);
    sub_9AE1E0((_DWORD **)&ptr);
    v46 = (unsigned int)v299;
    v28 = (__int64 *)v298;
    v30 = *((_QWORD *)v298 + (unsigned int)v299 - 1);
    v134 = v299;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = 8 * v46;
        v39 = (char *)(v30 & 3);
        v135 = &v28[v46 - 1];
        a6 = v30 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v39 != (_BYTE *)&dword_0 + 1 )
          break;
        v34 = *(_QWORD *)(a6 + 16);
        if ( v34 )
        {
LABEL_244:
          v136 = v46 + 1;
          if ( v136 > HIDWORD(v299) )
          {
            sub_22134E0(&v298, v262, v136, 8);
            v28 = (__int64 *)v298;
            v11 = 8LL * (unsigned int)v299;
          }
          *(__int64 *)((char *)v28 + v11) = v34;
          v28 = (__int64 *)v298;
          LODWORD(v299) = v299 + 1;
          v46 = (unsigned int)v299;
          v134 = v299;
          goto LABEL_247;
        }
        *v135 = v30 | 3;
LABEL_247:
        if ( v134 )
        {
          v30 = v28[v46 - 1];
          if ( (v30 & 3) != 1 )
            continue;
        }
        goto LABEL_79;
      }
      if ( (v30 & 3) == 0 )
      {
        v34 = *(_QWORD *)(a6 + 8);
        if ( v34 )
          goto LABEL_244;
        *v135 = v30 | 1;
        goto LABEL_247;
      }
      if ( v39 != (_BYTE *)&dword_0 + 3 )
        break;
      LODWORD(v299) = --v134;
      if ( !v134 )
      {
        v46 = 0;
        goto LABEL_79;
      }
      v46 = v134;
      v39 = (char *)&v28[v134 - 1];
      v30 = *(_QWORD *)v39;
      v11 = *(_QWORD *)v39 & 3LL;
      if ( (*(_QWORD *)v39 & 3) == 0 )
      {
        *(_QWORD *)v39 = v30 | 1;
        goto LABEL_79;
      }
      if ( v11 != 1 )
        break;
      v30 |= 3uLL;
      *(_QWORD *)v39 = v30;
    }
LABEL_301:
    if ( (_WORD)v30 == 245 )
    {
      v169 = *(_QWORD *)(m128i_i64 + 8);
      ptr = (void *)v169;
      if ( (v169 & 1) != 0 )
      {
        v170 = (unsigned int *)(v169 & 0xFFFFFFFFFFFFFFFELL);
        p_ptr = (void **)(v170 + 2);
        v172 = (__int64 *)&v170[2 * *v170 + 2];
        if ( v170 + 2 != (unsigned int *)v172 )
        {
LABEL_304:
          LOBYTE(v262) = 0;
          v173 = v172;
          v263 = (__int64 *)v17 + 3;
          v264 = (unsigned __int64 *)&v298;
          v272 = v16;
          v273 = (const __m128i *)m128i_i64;
          v265 = (const __m128i *)v34;
          v174 = (__int64 *)p_ptr;
          do
          {
            v175 = *v174;
            if ( *v174 )
            {
              if ( (*(_BYTE *)(v175 + 28) & 0x7Fu) - 40 <= 6 )
              {
                v261 = (const __m128i *)sub_B4F900(*v174);
                v297[0] = *(_DWORD **)(v175 + 48);
                v28 = (__int64 *)v258;
                v39 = (char *)sub_B685F0(v175);
                v176 = sub_F3ED50(v258, v39);
                if ( v176 )
                {
                  v178 = v288;
                  v179 = *(_QWORD *)(v288 + 96) - *(_QWORD *)(v288 + 88);
                  v298 = v289;
                  v180 = v179 >> 5;
                  if ( v289 )
                  {
                    v181 = v289[4].m128i_i32[1];
                    *(_QWORD *)&v304[0] = v289;
                    v289[4].m128i_i32[1] = v181 + 2;
                  }
                  else
                  {
                    *(_QWORD *)&v304[0] = 0;
                  }
                  sub_9B01D0(v259, v178, (__int64 **)v17, v175, v180, v177);
                  sub_9AE1E0((_DWORD **)v17);
                  v302 = v298;
                  if ( v298 )
                  {
                    v182 = *((_DWORD *)v298 + 17);
                    v262 = (_BYTE *)v175;
                    *((_QWORD *)&v304[1] + 1) = v298;
                    LODWORD(v304[1]) = 0;
                    v304[0] = _mm_loadh_ps((const double *)&v261);
                    *((_DWORD *)v298 + 17) = v182 + 2;
                  }
                  else
                  {
                    v262 = (_BYTE *)v175;
                    LODWORD(v304[1]) = 0;
                    v251 = _mm_loadh_ps((const double *)&v261);
                    *((_QWORD *)&v304[1] + 1) = 0;
                    v304[0] = v251;
                  }
                  v39 = (char *)v17;
                  sub_9AE200((__m128i **)(v178 + 88), (const __m128i *)v17);
                  sub_9AE1E0((_DWORD **)v263);
                  sub_9AE1E0((_DWORD **)v255);
                  v183 = (__m128i *)v301[0];
                  v301[0] = nullptr;
                  *(_QWORD *)&v304[0] = v289;
                  v289 = v183;
                  sub_9AE1E0((_DWORD **)v17);
                  sub_9AE1E0((_DWORD **)v259);
                  v28 = (__int64 *)v264;
                  sub_9AE1E0((_DWORD **)v264);
                  LOBYTE(v262) = v176;
                }
              }
            }
            ++v174;
          }
          while ( v173 != v174 );
          v34 = (unsigned __int64)v265;
          v16 = v272;
          m128i_i64 = (__int64)v273;
          if ( (_BYTE)v262 )
          {
            v184 = v288;
            v302 = v289;
            if ( v289 )
            {
              v261 = v289;
              v185 = v289[4].m128i_i32[1];
              v304[0] = _mm_loadh_ps((const double *)&v261);
              v289[4].m128i_i32[1] = v185 + 2;
            }
            else
            {
              v304[0] = (unsigned __int64)v273;
            }
            v39 = *(char **)(v184 + 120);
            if ( v39 == *(char **)(v184 + 128) )
            {
              sub_9AE420(v184 + 112, v39, v17);
            }
            else
            {
              v39 += 16;
              *((_OWORD *)v39 - 1) = v304[0];
              *((_QWORD *)&v304[0] + 1) = 0;
              *(_QWORD *)(v184 + 120) = v39;
            }
            sub_9AE1E0((_DWORD **)v17 + 1);
            v28 = (__int64 *)v255;
            sub_9AE1E0((_DWORD **)v255);
          }
        }
      }
      else
      {
        p_ptr = &ptr;
        v172 = &v295;
        if ( v169 )
          goto LABEL_304;
      }
    }
LABEL_89:
    while ( 1 )
    {
      v34 -= 16LL;
      if ( v16 == (__m128i *)v34 )
        break;
LABEL_90:
      while ( 1 )
      {
        m128i_i64 = *(_QWORD *)(v34 - 16);
        if ( (*(_DWORD *)(v34 - 16) & 3 | (4 * (*(_QWORD *)(v34 - 8) & 3))) != 6 )
          break;
        m128i_i64 &= 0xFFFFFFFFFFFFFFFCLL;
        LOWORD(v30) = *(_WORD *)m128i_i64 & 0x1FF;
        if ( (unsigned __int16)v30 <= 0x75u )
        {
          if ( (_WORD)v30 == 4 )
            goto LABEL_89;
        }
        else if ( (unsigned __int16)v30 <= 0x77u )
        {
          v51 = v39;
          v52 = v28;
          v28 = &v288;
          v39 = (char *)m128i_i64;
          switch ( (*(_WORD *)(m128i_i64 + 2) >> 3) & 0x3F )
          {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
            case 0xD:
            case 0xE:
            case 0xF:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1A:
            case 0x1B:
            case 0x1C:
            case 0x1D:
            case 0x1E:
            case 0x1F:
            case 0x20:
              goto LABEL_173;
            default:
              v28 = v52;
              v39 = v51;
              break;
          }
        }
        if ( (unsigned __int16)v30 > 0xF4u )
          goto LABEL_301;
        if ( (unsigned __int16)v30 >= 0x78u )
          goto LABEL_89;
        if ( (unsigned __int16)v30 < 0x76u )
        {
          if ( (_WORD)v30 )
            goto LABEL_89;
          goto LABEL_301;
        }
        v28 = &v288;
        v39 = (char *)m128i_i64;
LABEL_173:
        sub_9B02D0(&v288, (unsigned __int64)v39);
        v34 -= 16LL;
        if ( v16 == (__m128i *)v34 )
          goto LABEL_174;
      }
    }
LABEL_174:
    a1 = (__int64)v257;
LABEL_175:
    v96 = v289;
    *(_QWORD *)&v304[0] = v289;
    if ( v289 )
      ++v289[4].m128i_i32[1];
    *(_QWORD *)&v304[0] = *(_QWORD *)(v256 + 72);
    *(_QWORD *)(v256 + 72) = v96;
    sub_9AE1E0((_DWORD **)v17);
    v34 = *(_QWORD *)(v266 + 80);
    v16 = *(__m128i **)(v266 + 88);
    if ( v16 != (__m128i *)v34 )
    {
      v257 = *(__m128i **)(v266 + 88);
      m128i_i64 = (__int64)v255;
      v258 = (void **)&v286;
      v259 = (__int64 *)&v287;
      do
      {
        if ( *(_QWORD *)v34 )
        {
          v97 = *(unsigned int *)(*(_QWORD *)v34 + 48LL);
          if ( ((1LL << v97) & *((_QWORD *)s + ((unsigned int)v97 >> 6))) != 0 )
          {
            v98 = *(_DWORD **)(*a4 + 96 * v97 + 64);
            v284 = v98;
            if ( v98 )
              ++v98[17];
            v99 = *(_DWORD **)(v256 + 72);
            v285 = v99;
            if ( v99 )
            {
              v99[17] += 2;
              v287 = v99;
            }
            else
            {
              v287 = nullptr;
            }
            v286 = v98;
            if ( v98 )
            {
              ++v98[17];
              *(_QWORD *)&v304[1] = v98;
              *(_QWORD *)&v304[0] = v17 + 1;
              *((_QWORD *)&v304[0] + 1) = 0x1400000001LL;
              sub_9A68E0((__int64 *)v17);
              v302 = v255 + 2;
              v303 = 0x1400000000LL;
              if ( DWORD2(v304[0]) )
                sub_994930((char ***)v255, (char ***)v17);
              if ( *(_OWORD **)&v304[0] != v17 + 1 )
                free(*(void **)&v304[0]);
            }
            else
            {
              v302 = v255 + 2;
              v303 = 0x1400000000LL;
            }
            v100 = (unsigned int)v303;
            memset((char *)v304 + 8, 0, 0xA8u);
            v28 = (__int64 *)v302;
            v101 = v303;
            *(_QWORD *)&v304[0] = v17 + 1;
            HIDWORD(v304[0]) = 20;
LABEL_195:
            while ( 2 )
            {
              if ( v100 )
              {
                v30 = v28[v100 - 1];
                v102 = *(unsigned int *)((v30 & 0xFFFFFFFFFFFFFFFCLL) + 56);
                v103 = v287;
                if ( !v287 )
                  goto LABEL_202;
                v104 = *(_QWORD *)((v30 & 0xFFFFFFFFFFFFFFFCLL) + 48);
                while ( v104 != *((_QWORD *)v103 + 6) )
                {
                  if ( v104 < *((_QWORD *)v103 + 6) )
                  {
                    v103 = *((_DWORD **)v103 + 1);
                    if ( !v103 )
                      goto LABEL_202;
                  }
                  else
                  {
                    v103 = *((_DWORD **)v103 + 2);
                    if ( !v103 )
                      goto LABEL_202;
                  }
                }
                if ( (_DWORD)v102 != v103[14] )
LABEL_202:
                  *(_DWORD *)(*(_QWORD *)(a1 + 88) + 32 * v102 + 16) = 0;
LABEL_203:
                while ( 1 )
                {
                  v39 = (char *)(8 * v100);
                  v105 = v30 & 3;
                  v106 = &v28[v100 - 1];
                  v107 = v30 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( v105 == 1 )
                    break;
                  if ( (v30 & 3) == 0 )
                  {
                    v16 = *(__m128i **)(v107 + 8);
                    if ( v16 )
                      goto LABEL_206;
                    *v106 = v30 | 1;
                    goto LABEL_209;
                  }
                  if ( v105 != 3 )
                    goto LABEL_301;
                  LODWORD(v303) = --v101;
                  if ( !v101 )
                  {
                    v100 = 0;
                    goto LABEL_195;
                  }
                  v100 = v101;
                  v39 = (char *)&v28[v101 - 1];
                  v30 = *(_QWORD *)v39;
                  if ( (*(_QWORD *)v39 & 3) == 0 )
                  {
                    *(_QWORD *)v39 = v30 | 1;
                    goto LABEL_195;
                  }
                  if ( (*(_QWORD *)v39 & 3LL) != 1 )
                    goto LABEL_301;
                  v30 |= 3uLL;
                  *(_QWORD *)v39 = v30;
                }
                v16 = *(__m128i **)(v107 + 16);
                if ( v16 )
                {
LABEL_206:
                  v108 = v100 + 1;
                  if ( v108 > HIDWORD(v303) )
                  {
                    sub_22134E0(v255, v255 + 2, v108, 8);
                    v28 = (__int64 *)v302;
                    v39 = (char *)(8LL * (unsigned int)v303);
                  }
                  *(_QWORD *)&v39[(_QWORD)v28] = v16;
                  v28 = (__int64 *)v302;
                  LODWORD(v303) = v303 + 1;
                  v100 = (unsigned int)v303;
                  v101 = v303;
                }
                else
                {
                  *v106 = v30 | 3;
                }
LABEL_209:
                if ( !v101 )
                  continue;
                v30 = v28[v100 - 1];
                if ( (v30 & 3) == 1 )
                  continue;
                goto LABEL_203;
              }
              break;
            }
            if ( v28 != (__int64 *)(v255 + 2) )
              free(v28);
            sub_9AE1E0(&v286);
            sub_9AE1E0(&v287);
            sub_9AE1E0(&v285);
            sub_9AE1E0(&v284);
          }
        }
        v34 += 16LL;
      }
      while ( (__m128i *)v34 != v257 );
    }
    sub_9AE1E0((_DWORD **)&v289);
    if ( v269 != v268 )
    {
      v11 = (__int64)s;
      --v268;
      continue;
    }
    break;
  }
  v14 = v17;
  v15 = v255;
LABEL_372:
  v247 = *(_DWORD **)(*a4 + 96LL * *(unsigned int *)(*(_QWORD *)(v271 + 8) + 48LL) + 72);
  v302 = v247;
  if ( v247 )
  {
    v248 = v247[17];
    *((_QWORD *)&v304[0] + 1) = v247;
    *(_QWORD *)&v304[0] = 0;
    v247[17] = v248 + 2;
  }
  else
  {
    v304[0] = 0;
  }
  v249 = *(char **)(a1 + 120);
  if ( v249 == *(char **)(a1 + 128) )
  {
    sub_9AE420(a1 + 112, v249, v14);
  }
  else
  {
    v250 = v249 + 16;
    *((_OWORD *)v250 - 1) = v304[0];
    *((_QWORD *)&v304[0] + 1) = 0;
    *(_QWORD *)(a1 + 120) = v250;
  }
  sub_9AE1E0((_DWORD **)v14 + 1);
  sub_9AE1E0((_DWORD **)v15);
  if ( s != p_s + 2 )
    free(s);
}

