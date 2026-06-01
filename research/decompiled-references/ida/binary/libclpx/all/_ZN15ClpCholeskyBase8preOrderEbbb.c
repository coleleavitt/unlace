__int64 __fastcall ClpCholeskyBase::preOrder(ClpCholeskyBase *this, char a2, unsigned __int8 a3, char a4)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  void *v9; // rax
  size_t v10; // rdx
  int v11; // ebp
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 (__fastcall *v15)(ClpPackedMatrix *__hidden); // rdx
  __int64 (__fastcall *v16)(ClpPackedMatrix *__hidden); // rdx
  __int64 (__fastcall *v17)(ClpPackedMatrix *__hidden); // rax
  _QWORD *v18; // rdi
  __int64 v19; // rax
  __int64 (*v20)(void); // rdx
  __int64 (*v21)(void); // rdx
  __int64 (*v22)(void); // rax
  unsigned __int64 v23; // rdi
  int *v24; // rbp
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // edx
  _DWORD *v28; // r12
  int v29; // ecx
  void *v30; // rdi
  int v31; // r14d
  void *v32; // rdi
  __int64 v33; // rdi
  char *v34; // rax
  __int64 v35; // rdx
  int v36; // esi
  int *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // r13d
  char *v41; // rax
  unsigned __int64 v42; // rax
  ClpCholeskyDense *v43; // r14
  int v44; // eax
  int v45; // r9d
  __int64 v46; // r8
  __int64 v47; // r10
  int v48; // eax
  int v49; // edx
  __int64 v50; // r14
  int *v51; // rsi
  int *v52; // r15
  int v53; // ecx
  __int64 v54; // rax
  int v55; // edx
  int v56; // edi
  int *v57; // rax
  int *v58; // r11
  int v59; // edx
  _DWORD *v60; // rdi
  __int64 v61; // rdi
  int *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned __int64 v65; // rdi
  char *v66; // r13
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // r14
  int v70; // esi
  char *v71; // rbp
  int v72; // eax
  int v73; // edx
  __int64 v74; // r11
  int *v75; // r8
  int *v76; // r15
  int v77; // ecx
  __int64 v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rax
  int v81; // esi
  int v82; // r9d
  int *v83; // rdx
  int *v84; // r9
  int v85; // esi
  _DWORD *v86; // rdi
  char *v87; // rdx
  __int64 v88; // rdi
  __int64 v89; // rcx
  __int64 v90; // r12
  int v91; // r15d
  void *v92; // rax
  size_t v93; // rdx
  int v94; // r13d
  __int64 v95; // r14
  const void *v96; // rdi
  _QWORD *v97; // rax
  _QWORD *v98; // rdi
  __int64 (*v99)(void); // rax
  int v100; // eax
  int v101; // ebp
  unsigned __int64 v102; // rdi
  _QWORD *v103; // rdi
  __int64 v104; // rax
  __int64 (*v105)(void); // rdx
  __int64 (*v106)(void); // rdx
  __int64 (*v107)(void); // rax
  __int64 v108; // rax
  __int64 v109; // rbp
  __int64 v110; // r14
  __int64 v111; // r11
  __int64 v112; // r12
  __int64 v113; // rdi
  int v114; // ecx
  __int64 v115; // r8
  int v116; // esi
  __int64 v117; // rdx
  __int64 v118; // r13
  int v119; // r8d
  int v120; // r9d
  int v121; // ecx
  bool v122; // cc
  __int64 v123; // r8
  int v124; // r13d
  __int64 v125; // rdx
  __int64 v126; // r10
  __int64 v127; // r9
  __int64 v128; // r8
  int v129; // esi
  int v130; // edx
  _DWORD *v131; // rdi
  int v132; // edx
  __int64 v133; // rsi
  _DWORD *v134; // rax
  __int64 v136; // r11
  int *v137; // r8
  int *v138; // r15
  __int64 v139; // rdi
  __int64 v140; // rdx
  int v141; // esi
  int v142; // r9d
  int *v143; // rdx
  int *v144; // r9
  int v145; // esi
  _DWORD *v146; // rdi
  __int64 v147; // r14
  int *v148; // rsi
  int *v149; // r15
  __int64 v150; // rax
  int v151; // edx
  int v152; // edi
  int *v153; // rax
  int *v154; // r11
  int v155; // edx
  _DWORD *v156; // rdi
  __int64 v157; // rdi
  ClpPackedMatrix *v158; // rbp
  __int64 v159; // rax
  __int64 (__fastcall *v160)(ClpPackedMatrix *__hidden); // rdx
  __int64 (__fastcall *v161)(ClpPackedMatrix *__hidden); // rdx
  __int64 (__fastcall *v162)(ClpPackedMatrix *__hidden); // rax
  __int64 v163; // r14
  __int64 v164; // r12
  __int64 v165; // r10
  __int64 v166; // r11
  __int64 v167; // rsi
  __int64 v168; // rbp
  __int64 v169; // rdx
  int v170; // ecx
  __int64 v171; // rax
  __int64 v172; // r8
  int v173; // edx
  __int64 v174; // rcx
  int v175; // edx
  __int64 v176; // rax
  __int64 v177; // rdx
  unsigned __int64 v178; // r11
  __int64 v179; // rdi
  __int64 v180; // rcx
  char *v181; // rsi
  char *v182; // r8
  __int64 v183; // r9
  unsigned __int64 v184; // rax
  int v185; // ecx
  unsigned int v186; // edx
  __m128i v187; // xmm0
  unsigned int v188; // r8d
  __int64 v189; // rax
  unsigned int v190; // esi
  unsigned int v191; // edx
  unsigned int v192; // esi
  __m128i *v193; // rax
  unsigned int v194; // eax
  unsigned int v195; // edx
  signed int v196; // eax
  __int64 v197; // r8
  __int64 v198; // r10
  __int64 v199; // rsi
  int v200; // eax
  __int64 v201; // rdx
  __int64 v202; // r8
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  int v206; // ecx
  _DWORD *v207; // rdx
  int v208; // ecx
  __int64 v209; // rcx
  int v210; // r8d
  int v211; // edx
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // rsi
  int v215; // esi
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 v218; // rdx
  int v219; // esi
  __int64 v220; // r9
  __int64 v221; // rdi
  int v222; // ecx
  int v223; // edi
  _DWORD *v224; // rsi
  __int64 v225; // rdx
  __int64 v226; // rax
  __int64 v227; // rax
  _DWORD *v228; // rax
  int v229; // edi
  unsigned int v230; // eax
  __m128i v231; // xmm0
  unsigned int v232; // r10d
  unsigned int v233; // r9d
  __m128i *v234; // rdx
  unsigned int v235; // eax
  unsigned int v236; // r9d
  unsigned int v237; // eax
  signed int v238; // edx
  int v239; // eax
  __int64 v240; // rax
  __int64 v241; // rdx
  _DWORD *v242; // rdx
  int v243; // ecx
  __int64 v244; // rax
  __int64 v245; // rsi
  __int64 v246; // r9
  int v247; // r11d
  int v248; // r13d
  int v249; // r11d
  __int64 v250; // rdx
  __int64 v251; // rsi
  __int64 v252; // r8
  __int64 v253; // r10
  __int64 v254; // r9
  int v255; // edi
  __int64 v256; // rcx
  __int64 v257; // [rsp+8h] [rbp-110h]
  int v258; // [rsp+8h] [rbp-110h]
  __int64 v260; // [rsp+10h] [rbp-108h]
  int v261; // [rsp+18h] [rbp-100h]
  __int64 v262; // [rsp+18h] [rbp-100h]
  __int64 v263; // [rsp+18h] [rbp-100h]
  __int64 v264; // [rsp+20h] [rbp-F8h]
  __int64 v265; // [rsp+20h] [rbp-F8h]
  __int64 v266; // [rsp+20h] [rbp-F8h]
  __int64 v269; // [rsp+30h] [rbp-E8h]
  __int64 v270; // [rsp+30h] [rbp-E8h]
  __int64 v272; // [rsp+38h] [rbp-E0h]
  __int64 v273; // [rsp+40h] [rbp-D8h]
  int v274; // [rsp+40h] [rbp-D8h]
  __int64 v275; // [rsp+48h] [rbp-D0h]
  __int64 v276; // [rsp+50h] [rbp-C8h]
  _BOOL4 v277; // [rsp+58h] [rbp-C0h]
  __int64 v278; // [rsp+58h] [rbp-C0h]
  __int64 v279; // [rsp+60h] [rbp-B8h]
  char *v280; // [rsp+60h] [rbp-B8h]
  __int64 v281; // [rsp+70h] [rbp-A8h]
  __int64 v282; // [rsp+78h] [rbp-A0h]
  _BYTE v283[40]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v284; // [rsp+A8h] [rbp-70h]
  __int64 v285; // [rsp+B0h] [rbp-68h]
  __int64 v286; // [rsp+B8h] [rbp-60h]

  v6 = *((_QWORD *)this + 118);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 480LL))(v6);
  *((_QWORD *)this + 118) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 192LL) + 128LL))(*(_QWORD *)(*((_QWORD *)this + 4) + 192LL));
  v7 = *((_QWORD *)this + 4);
  if ( a4 )
  {
    v90 = 0;
    v274 = *(_DWORD *)(v7 + 104);
    v258 = *(_DWORD *)(v7 + 108);
    v91 = v258 + v274;
    *((_DWORD *)this + 11) = v258 + v274 + v274;
    v92 = (void *)operator new[](v258 + v274 + v274);
    v93 = *((int *)this + 11);
    *((_QWORD *)this + 7) = v92;
    v94 = v93;
    memset(v92, 0, v93);
    v95 = *((_QWORD *)this + 4);
    *((_DWORD *)this + 20) = 0;
    v96 = *(const void **)(v95 + 160);
    if ( v96 )
    {
      v97 = __dynamic_cast(
              v96,
              (const struct __class_type_info *)&`typeinfo for'ClpObjective,
              (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
              0);
      if ( v97 )
        v90 = v97[3];
    }
    v98 = *(_QWORD **)(v95 + 192);
    v99 = *(__int64 (**)(void))(*v98 + 16LL);
    if ( (char *)v99 == (char *)ClpPackedMatrix::getNumElements )
    {
      v100 = *(_DWORD *)(v98[11] + 72LL);
    }
    else
    {
      v100 = v99();
      v94 = *((_DWORD *)this + 11);
    }
    v101 = v91 + v100 + 2 * v274;
    if ( v90 )
      v101 += *(_DWORD *)(v90 + 72);
    v102 = v94 + 1;
    if ( v102 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_300;
    *((_QWORD *)this + 12) = operator new[](4 * v102);
    v103 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
    v104 = *v103;
    v105 = *(__int64 (**)(void))(*v103 + 56LL);
    if ( (char *)v105 == (char *)ClpPackedMatrix::getVectorStarts )
    {
      v262 = *(_QWORD *)(v103[11] + 48LL);
    }
    else
    {
      v262 = v105();
      v103 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
      v104 = *v103;
    }
    v106 = *(__int64 (**)(void))(v104 + 64);
    if ( (char *)v106 == (char *)ClpPackedMatrix::getVectorLengths )
    {
      v265 = *(_QWORD *)(v103[11] + 56LL);
    }
    else
    {
      v265 = v106();
      v103 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
      v104 = *v103;
    }
    v107 = *(__int64 (**)(void))(v104 + 48);
    if ( (char *)v107 == (char *)ClpPackedMatrix::getIndices )
      v272 = *(_QWORD *)(v103[11] + 40LL);
    else
      v272 = v107();
    if ( (unsigned __int64)v101 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v108 = operator new[](4LL * v101);
    *((_QWORD *)this + 13) = v108;
    *((_DWORD *)this + 40) = 0;
    if ( a2 )
    {
      v109 = *((_QWORD *)this + 12);
      if ( v90 )
      {
        v110 = *(_QWORD *)(v90 + 40);
        v111 = *(_QWORD *)(v90 + 48);
        v112 = *(_QWORD *)(v90 + 56);
        if ( v258 > 0 )
        {
          v113 = 0;
          v114 = 0;
          do
          {
            *(_DWORD *)(v109 + 4 * v113) = v114;
            if ( a3 )
            {
              v212 = *((int *)this + 40);
              v114 = v212 + 1;
              *(_DWORD *)(v108 + 4 * v212) = v113;
              *((_DWORD *)this + 40) = v212 + 1;
            }
            else
            {
              v114 = *((_DWORD *)this + 40);
            }
            v115 = *(int *)(v111 + 4 * v113);
            v116 = v115 + *(_DWORD *)(v112 + 4 * v113);
            if ( (int)v115 < v116 )
            {
              v117 = (int)v115 + 1;
              v118 = v110 + 4 * (v115 - v117);
              do
              {
                while ( 1 )
                {
                  v119 = *(_DWORD *)(v118 + 4 * v117);
                  if ( v119 <= (int)v113 )
                    break;
                  v120 = v114 + 1;
                  *(_DWORD *)(v108 + 4LL * v114) = v119;
                  v121 = v117++;
                  *((_DWORD *)this + 40) = v120;
                  v116 = *(_DWORD *)(v111 + 4 * v113) + *(_DWORD *)(v112 + 4 * v113);
                  v122 = v116 <= v121;
                  v114 = v120;
                  if ( v122 )
                    goto LABEL_111;
                }
                v210 = v117++;
              }
              while ( v116 > v210 );
            }
LABEL_111:
            v123 = *(int *)(v262 + 4 * v113);
            if ( (int)v123 < (int)v123 + *(_DWORD *)(v265 + 4 * v113) )
            {
              v124 = *(_DWORD *)(v265 + 4 * v113);
              v125 = v114 + 1;
              v126 = v125 + (unsigned int)(v124 - 1) + 1;
              v127 = v272 + -4 * v125 + 4 * v123;
              v128 = v108 + -4 * v125 + 4LL * v114;
              do
              {
                v129 = *(_DWORD *)(v127 + 4 * v125);
                *((_DWORD *)this + 40) = v125;
                *(_DWORD *)(v128 + 4 * v125++) = v91 + v129;
              }
              while ( v125 != v126 );
              v114 += v124;
            }
            ++v113;
          }
          while ( v113 != (unsigned int)(v258 - 1) + 1LL );
          goto LABEL_116;
        }
      }
      else if ( v258 > 0 )
      {
        v114 = 0;
        do
        {
          *(_DWORD *)(v109 + 4 * v90) = v114;
          v245 = *((int *)this + 40);
          *(_DWORD *)(v108 + 4 * v245) = v90;
          v114 = v245 + 1;
          v246 = 4 * v245;
          *((_DWORD *)this + 40) = v245 + 1;
          v247 = *(_DWORD *)(v262 + 4 * v90);
          v248 = v247 + *(_DWORD *)(v265 + 4 * v90);
          v249 = (a3 == 0) + v247;
          if ( v248 > v249 )
          {
            v250 = (int)v245 + 2;
            v251 = v250 + 1;
            v252 = v250 + 1 + (unsigned int)(v248 - 1 - v249);
            v253 = v272 + -4 * v250 + 4LL * v249;
            v254 = v108 + v246 - 4 * v250 + 4;
            while ( 1 )
            {
              v255 = *(_DWORD *)(v253 + 4 * v250);
              *((_DWORD *)this + 40) = v250;
              *(_DWORD *)(v254 + 4 * v250) = v91 + v255;
              v250 = v251;
              if ( v251 == v252 )
                break;
              ++v251;
            }
            v114 = v248 + v114 - v249;
          }
          ++v90;
        }
        while ( (unsigned int)(v258 - 1) + 1LL != v90 );
LABEL_116:
        v130 = v258;
        goto LABEL_117;
      }
      v114 = 0;
      v130 = 0;
LABEL_117:
      if ( v91 <= v130 )
      {
        if ( v274 <= 0 )
        {
LABEL_124:
          *(_DWORD *)(v109 + 4LL * *((int *)this + 11)) = v114;
          return 0;
        }
        if ( !a3 )
        {
LABEL_122:
          v134 = (_DWORD *)(v109 + 4LL * v91);
          do
          {
            *v134++ = v114;
            v114 = *((_DWORD *)this + 40);
          }
          while ( v134 != (_DWORD *)(v109 + 4 * (v91 + (unsigned __int64)(unsigned int)(v274 - 1)) + 4) );
          goto LABEL_124;
        }
      }
      else
      {
        if ( !a3 )
        {
          v131 = (_DWORD *)(v109 + 4LL * v130);
          v132 = v274 + v130;
          do
          {
            *v131 = v114;
            v133 = *((int *)this + 40);
            ++v131;
            v114 = v133 + 1;
            *(_DWORD *)(v108 + 4 * v133) = v132++;
            *((_DWORD *)this + 40) = v133 + 1;
          }
          while ( 2 * v91 - v258 != v132 );
          if ( v274 <= 0 )
            goto LABEL_124;
          goto LABEL_122;
        }
        v215 = v130 - v258;
        v216 = v130;
        v217 = (unsigned int)(v91 - 1 - v130);
        v218 = v130 + 1LL;
        v219 = v91 + v215;
        v220 = v218 + v217;
        while ( 1 )
        {
          *(_DWORD *)(v109 + 4 * v216) = v114;
          v221 = *((int *)this + 40);
          v222 = *((_DWORD *)this + 40);
          *(_DWORD *)(v108 + 4 * v221 + 4) = v219++;
          v114 = v222 + 2;
          *(_DWORD *)(v108 + 4 * v221) = v216;
          *((_DWORD *)this + 40) = v114;
          v216 = v218;
          if ( v218 == v220 )
            break;
          ++v218;
        }
        if ( v274 <= 0 )
          goto LABEL_124;
      }
      v223 = v258 + v274;
      v224 = (_DWORD *)(v109 + 4LL * v91);
      do
      {
        *v224 = v114;
        v225 = *((int *)this + 40);
        ++v224;
        v114 = v225 + 1;
        *(_DWORD *)(v108 + 4 * v225) = v223++;
        *((_DWORD *)this + 40) = v225 + 1;
      }
      while ( v224 != (_DWORD *)(v109 + 4 * (v91 + (unsigned __int64)(unsigned int)(v274 - 1)) + 4) );
      *(_DWORD *)(v109 + 4LL * *((int *)this + 11)) = v114;
      return 0;
    }
    v158 = (ClpPackedMatrix *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 192LL) + 128LL))(*(_QWORD *)(*((_QWORD *)this + 4) + 192LL));
    v159 = *(_QWORD *)v158;
    v160 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*(_QWORD *)v158 + 56LL);
    if ( v160 == ClpPackedMatrix::getVectorStarts )
    {
      v263 = *(_QWORD *)(*((_QWORD *)v158 + 11) + 48LL);
    }
    else
    {
      v263 = v160(v158);
      v159 = *(_QWORD *)v158;
    }
    v161 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(v159 + 64);
    if ( v161 == ClpPackedMatrix::getVectorLengths )
    {
      v266 = *(_QWORD *)(*((_QWORD *)v158 + 11) + 56LL);
    }
    else
    {
      v266 = v161(v158);
      v159 = *(_QWORD *)v158;
    }
    v162 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(v159 + 48);
    if ( v162 == ClpPackedMatrix::getIndices )
      v163 = *(_QWORD *)(*((_QWORD *)v158 + 11) + 40LL);
    else
      v163 = v162(v158);
    if ( v90 )
    {
      CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v283);
      CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v283, (const CoinPackedMatrix *)v90);
      v164 = v284;
      v165 = v285;
      v166 = v286;
      if ( v258 > 0 )
      {
        v167 = 0;
        v168 = *((_QWORD *)this + 12);
        do
        {
          *(_DWORD *)(v168 + 4 * v167) = *((_DWORD *)this + 40);
          v169 = *(int *)(v165 + 4 * v167);
          v170 = v169 + *(_DWORD *)(v166 + 4 * v167);
          if ( v170 > (int)v169 )
          {
            v171 = (int)v169 + 1;
            v172 = v164 + 4 * (v169 - v171);
            do
            {
              while ( 1 )
              {
                v173 = *(_DWORD *)(v172 + 4 * v171);
                if ( v173 >= (int)v167 )
                  break;
                v174 = *((int *)this + 40);
                *((_DWORD *)this + 40) = v174 + 1;
                *(_DWORD *)(*((_QWORD *)this + 13) + 4 * v174) = v173;
                v175 = v171;
                v170 = *(_DWORD *)(v165 + 4 * v167) + *(_DWORD *)(v166 + 4 * v167);
                ++v171;
                if ( v175 >= v170 )
                  goto LABEL_167;
              }
              v211 = v171++;
            }
            while ( v170 > v211 );
          }
LABEL_167:
          if ( a3 )
          {
            v176 = *((int *)this + 40);
            v177 = *((_QWORD *)this + 13);
            *((_DWORD *)this + 40) = v176 + 1;
            *(_DWORD *)(v177 + 4 * v176) = v167;
          }
          ++v167;
        }
        while ( v167 != (unsigned int)(v258 - 1) + 1LL );
      }
      CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v283);
      v178 = *((_QWORD *)this + 12);
    }
    else
    {
      v178 = *((_QWORD *)this + 12);
      if ( v258 > 0 )
      {
        if ( !a3 )
        {
          v180 = v258;
          v181 = (char *)this + 160;
          v182 = (char *)this + 164;
          v228 = *((_DWORD **)this + 12);
          if ( (v178 >= (unsigned __int64)this + 164 || (unsigned __int64)this + 160 >= v178 + 4LL * v258)
            && (unsigned int)v258 > 0xC )
          {
            v229 = 0;
            v230 = -(int)(v178 >> 2) & 3;
            if ( v230 )
            {
              v229 = 1;
              *(_DWORD *)v178 = *((_DWORD *)this + 40);
              if ( v230 != 1 )
              {
                v229 = 2;
                *(_DWORD *)(v178 + 4) = *((_DWORD *)this + 40);
                if ( v230 != 2 )
                {
                  v229 = 3;
                  *(_DWORD *)(v178 + 8) = *((_DWORD *)this + 40);
                }
              }
            }
            v231 = _mm_shuffle_epi32(_mm_cvtsi32_si128(*((_DWORD *)this + 40)), 0);
            v232 = v258 - v230;
            v233 = v258 - v230;
            v234 = (__m128i *)(v178 + 4LL * v230);
            v235 = 0;
            v236 = v233 >> 2;
            do
            {
              ++v235;
              ++v234;
              v234[-1] = v231;
            }
            while ( v236 > v235 );
            v237 = (v232 & 0xFFFFFFFC) + v229;
            if ( (v232 & 0xFFFFFFFC) != v232 )
            {
              *(_DWORD *)(v178 + 4LL * (int)v237) = *((_DWORD *)this + 40);
              if ( v258 > (int)(v237 + 1) )
              {
                *(_DWORD *)(v178 + 4LL * (int)(v237 + 1)) = *((_DWORD *)this + 40);
                if ( v258 > (int)(v237 + 2) )
                {
                  *(_DWORD *)(v178 + 4LL * (int)(v237 + 2)) = *((_DWORD *)this + 40);
                  if ( v258 > (int)(v237 + 3) )
                  {
                    *(_DWORD *)(v178 + 4LL * (int)(v237 + 3)) = *((_DWORD *)this + 40);
                    v238 = v237 + 4;
                    if ( v258 > (int)(v237 + 4) )
                    {
                      v239 = v237 + 5;
                      *(_DWORD *)(v178 + 4LL * v238) = *((_DWORD *)this + 40);
                      if ( v258 > v239 )
                        *(_DWORD *)(v178 + 4LL * v239) = *((_DWORD *)this + 40);
                    }
                  }
                }
              }
            }
          }
          else
          {
            do
              *v228++ = *((_DWORD *)this + 40);
            while ( v228 != (_DWORD *)(v178 + 4LL * (unsigned int)(v258 - 1) + 4) );
          }
          if ( v274 <= 0 )
            goto LABEL_197;
          v179 = *((_QWORD *)this + 13);
          goto LABEL_174;
        }
        v179 = *((_QWORD *)this + 13);
        v240 = 0;
        do
        {
          *(_DWORD *)(v178 + 4 * v240) = *((_DWORD *)this + 40);
          v241 = *((int *)this + 40);
          *((_DWORD *)this + 40) = v241 + 1;
          *(_DWORD *)(v179 + 4 * v241) = v240++;
        }
        while ( v240 != (unsigned int)(v258 - 1) + 1LL );
        if ( v274 > 0 )
        {
LABEL_273:
          v242 = (_DWORD *)(v178 + 4LL * v258);
          v243 = v258;
          v197 = (unsigned int)(v274 - 1);
          do
          {
            *v242++ = *((_DWORD *)this + 40);
            v244 = *((int *)this + 40);
            *((_DWORD *)this + 40) = v244 + 1;
            *(_DWORD *)(v179 + 4 * v244) = v243++;
          }
          while ( v242 != (_DWORD *)(v178 + 4 * (v258 + v197) + 4) );
LABEL_190:
          v198 = v197 + 1;
          v199 = 0;
          do
          {
            *(_DWORD *)(v178 + 4LL * v91 + 4 * v199) = *((_DWORD *)this + 40);
            v200 = *(_DWORD *)(v263 + 4 * v199);
            if ( v200 < v200 + *(_DWORD *)(v266 + 4 * v199) )
            {
              v201 = v163 + 4LL * v200;
              v202 = v163 + 4 + 4 * ((unsigned int)(*(_DWORD *)(v266 + 4 * v199) - 1) + (__int64)v200);
              do
              {
                v203 = *((int *)this + 40);
                v201 += 4;
                *((_DWORD *)this + 40) = v203 + 1;
                *(_DWORD *)(v179 + 4 * v203) = *(_DWORD *)(v201 - 4);
              }
              while ( v201 != v202 );
            }
            v204 = *((int *)this + 40);
            *((_DWORD *)this + 40) = v204 + 1;
            *(_DWORD *)(v179 + 4 * v204) = v258 + v199;
            if ( a3 )
            {
              v205 = *((int *)this + 40);
              *((_DWORD *)this + 40) = v205 + 1;
              *(_DWORD *)(v179 + 4 * v205) = v91 + v199;
            }
            ++v199;
          }
          while ( v199 != v198 );
        }
LABEL_197:
        *(_DWORD *)(v178 + 4LL * *((int *)this + 11)) = *((_DWORD *)this + 40);
        return 0;
      }
    }
    if ( v274 > 0 )
    {
      v179 = *((_QWORD *)this + 13);
      if ( !a3 )
      {
        v180 = v258;
        v181 = (char *)this + 160;
        v182 = (char *)this + 164;
LABEL_174:
        v183 = 4 * v180;
        v184 = v178 + 4 * v180;
        if ( (v184 >= (unsigned __int64)v182 || (unsigned __int64)v181 >= v178 + 4 * (v180 + (unsigned int)v274))
          && (unsigned int)v274 > 0xC )
        {
          v185 = 0;
          v186 = -(int)(v184 >> 2) & 3;
          if ( v186 )
          {
            *(_DWORD *)v184 = *((_DWORD *)this + 40);
            v185 = 1;
            if ( v186 != 1 )
            {
              *(_DWORD *)(v178 + 4LL * (v258 + 1)) = *((_DWORD *)this + 40);
              v185 = 2;
              if ( v186 != 2 )
              {
                *(_DWORD *)(v178 + 4LL * (v258 + 2)) = *((_DWORD *)this + 40);
                v185 = 3;
              }
            }
          }
          v187 = _mm_shuffle_epi32(_mm_cvtsi32_si128(*((_DWORD *)this + 40)), 0);
          v188 = v274 - v186;
          v189 = v183 + 4LL * v186;
          v190 = v274 - v186;
          v191 = 0;
          v192 = v190 >> 2;
          v193 = (__m128i *)(v178 + v189);
          do
          {
            ++v191;
            ++v193;
            v193[-1] = v187;
          }
          while ( v192 > v191 );
          v194 = (v188 & 0xFFFFFFFC) + v185;
          if ( (v188 & 0xFFFFFFFC) != v188 )
          {
            *(_DWORD *)(v178 + 4LL * (int)(v258 + v194)) = *((_DWORD *)this + 40);
            if ( v274 > (int)(v194 + 1) )
            {
              *(_DWORD *)(v178 + 4LL * (int)(v258 + v194 + 1)) = *((_DWORD *)this + 40);
              if ( v274 > (int)(v194 + 2) )
              {
                *(_DWORD *)(v178 + 4LL * (int)(v258 + v194 + 2)) = *((_DWORD *)this + 40);
                if ( v274 > (int)(v194 + 3) )
                {
                  *(_DWORD *)(v178 + 4LL * (int)(v258 + v194 + 3)) = *((_DWORD *)this + 40);
                  v195 = v194 + 4;
                  if ( v274 > (int)(v194 + 4) )
                  {
                    v196 = v194 + 5;
                    *(_DWORD *)(v178 + 4LL * (int)(v258 + v195)) = *((_DWORD *)this + 40);
                    if ( v274 > v196 )
                      *(_DWORD *)(v178 + 4LL * (v258 + v196)) = *((_DWORD *)this + 40);
                  }
                }
              }
            }
          }
          v197 = (unsigned int)(v274 - 1);
        }
        else
        {
          v197 = (unsigned int)(v274 - 1);
          v256 = v178 + 4 * (v197 + v180) + 4;
          do
          {
            v184 += 4LL;
            *(_DWORD *)(v184 - 4) = *((_DWORD *)this + 40);
          }
          while ( v184 != v256 );
        }
        goto LABEL_190;
      }
      goto LABEL_273;
    }
    goto LABEL_197;
  }
  v8 = *(int *)(v7 + 104);
  *((_DWORD *)this + 11) = v8;
  v9 = (void *)operator new[](v8);
  v10 = *((int *)this + 11);
  *((_QWORD *)this + 7) = v9;
  v11 = v10;
  memset(v9, 0, v10);
  *((_DWORD *)this + 20) = 0;
  v12 = v11 + 1;
  if ( v12 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_300;
  *((_QWORD *)this + 12) = operator new[](4 * v12);
  v13 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
  v14 = *v13;
  v15 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*v13 + 56LL);
  if ( v15 == ClpPackedMatrix::getVectorStarts )
  {
    v16 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(v14 + 64);
    v264 = *(_QWORD *)(v13[11] + 48LL);
    if ( v16 == ClpPackedMatrix::getVectorLengths )
      goto LABEL_7;
LABEL_199:
    v257 = ((__int64 (*)(void))v16)();
    v13 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
    v17 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*v13 + 48LL);
    if ( v17 == ClpPackedMatrix::getIndices )
      goto LABEL_8;
LABEL_200:
    v260 = ((__int64 (*)(void))v17)();
    goto LABEL_9;
  }
  v264 = ((__int64 (*)(void))v15)();
  v13 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
  v14 = *v13;
  v16 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*v13 + 64LL);
  if ( v16 != ClpPackedMatrix::getVectorLengths )
    goto LABEL_199;
LABEL_7:
  v17 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(v14 + 48);
  v257 = *(_QWORD *)(v13[11] + 56LL);
  if ( v17 != ClpPackedMatrix::getIndices )
    goto LABEL_200;
LABEL_8:
  v260 = *(_QWORD *)(v13[11] + 40LL);
LABEL_9:
  v18 = *((_QWORD **)this + 118);
  v19 = *v18;
  v20 = *(__int64 (**)(void))(*v18 + 56LL);
  if ( (char *)v20 == (char *)ClpPackedMatrix::getVectorStarts )
  {
    v273 = *(_QWORD *)(v18[11] + 48LL);
  }
  else
  {
    v227 = v20();
    v18 = *((_QWORD **)this + 118);
    v273 = v227;
    v19 = *v18;
  }
  v21 = *(__int64 (**)(void))(v19 + 64);
  if ( (char *)v21 == (char *)ClpPackedMatrix::getVectorLengths )
  {
    v275 = *(_QWORD *)(v18[11] + 56LL);
  }
  else
  {
    v226 = v21();
    v18 = *((_QWORD **)this + 118);
    v275 = v226;
    v19 = *v18;
  }
  v22 = *(__int64 (**)(void))(v19 + 48);
  if ( (char *)v22 == (char *)ClpPackedMatrix::getIndices )
    v276 = *(_QWORD *)(v18[11] + 40LL);
  else
    v276 = v22();
  v23 = *((int *)this + 11);
  if ( v23 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_300;
  v24 = (int *)operator new[](4 * v23);
  v25 = *((_DWORD *)this + 11) + 1;
  if ( v25 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_300;
  v26 = operator new[](4 * v25);
  v27 = *((_DWORD *)this + 11);
  v28 = (_DWORD *)v26;
  if ( v27 )
  {
    if ( v27 / 8 > 0 )
    {
      v213 = (unsigned int)(v27 / 8 - 1);
      v214 = v26 + 32 * v213 + 32;
      do
      {
        *(_OWORD *)v26 = 0;
        v26 += 32;
        *(_OWORD *)(v26 - 16) = 0;
      }
      while ( v214 != v26 );
      v26 = (__int64)&v28[8 * (int)v213 + 8];
    }
    switch ( v27 % 8 )
    {
      case 1:
        goto LABEL_237;
      case 2:
        goto LABEL_236;
      case 3:
        goto LABEL_235;
      case 4:
        goto LABEL_234;
      case 5:
        goto LABEL_233;
      case 6:
        goto LABEL_232;
      case 7:
        *(_DWORD *)(v26 + 24) = 0;
LABEL_232:
        *(_DWORD *)(v26 + 20) = 0;
LABEL_233:
        *(_DWORD *)(v26 + 16) = 0;
LABEL_234:
        *(_DWORD *)(v26 + 12) = 0;
LABEL_235:
        *(_DWORD *)(v26 + 8) = 0;
LABEL_236:
        *(_DWORD *)(v26 + 4) = 0;
LABEL_237:
        *(_DWORD *)v26 = 0;
        break;
      default:
        break;
    }
  }
  v29 = *((_DWORD *)this + 244);
  *((_DWORD *)this + 40) = 0;
  if ( v29 > 0 )
  {
    v30 = *((void **)this + 119);
    v31 = *(_DWORD *)(*((_QWORD *)this + 4) + 108LL);
    if ( v30 )
      operator delete[](v30);
    v32 = *((void **)this + 120);
    if ( v32 )
      operator delete[](v32);
    v33 = *((_QWORD *)this + 121);
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 48LL))(v33);
    v34 = (char *)operator new[](v31);
    v35 = *((int *)this + 11);
    *((_QWORD *)this + 119) = v34;
    v36 = v35;
    v28[v35] = 0;
    if ( v31 <= 0 )
    {
      if ( !(_DWORD)v35 )
        goto LABEL_220;
    }
    else
    {
      v37 = (int *)v257;
      do
      {
        v38 = *v37++;
        ++v28[v38];
      }
      while ( (int *)(v257 + 4LL * (unsigned int)(v31 - 1) + 4) != v37 );
      if ( !v36 )
      {
LABEL_29:
        v39 = 0;
        v40 = 0;
        while ( 1 )
        {
          v41 = &v34[v39];
          if ( *(_DWORD *)(v257 + 4 * v39) < *((_DWORD *)this + 244) )
          {
            ++v39;
            *v41 = 0;
            if ( v31 <= (int)v39 )
              goto LABEL_34;
          }
          else
          {
            ++v39;
            ++v40;
            *v41 = 1;
            if ( v31 <= (int)v39 )
            {
LABEL_34:
              if ( v40 && v40 <= 100 )
              {
                v42 = v40 * *((_DWORD *)this + 11);
                if ( v42 <= 0xFFFFFFFFFFFFFFFLL )
                {
                  *((_QWORD *)this + 120) = operator new[](8 * v42);
                  v43 = (ClpCholeskyDense *)operator new(0x3D8u);
                  ClpCholeskyDense::ClpCholeskyDense(v43);
                  *((_QWORD *)this + 121) = v43;
                  ClpCholeskyDense::reserveSpace(v43, nullptr, v40);
                  v27 = *((_DWORD *)this + 11);
                  goto LABEL_38;
                }
LABEL_300:
                __cxa_throw_bad_array_new_length();
              }
              v34 = *((char **)this + 119);
              if ( !v34 )
              {
LABEL_211:
                *((_QWORD *)this + 119) = 0;
                *((_QWORD *)this + 120) = 0;
                *((_QWORD *)this + 121) = 0;
                v27 = *((_DWORD *)this + 11);
                goto LABEL_38;
              }
LABEL_220:
              operator delete[](v34);
              goto LABEL_211;
            }
          }
          v34 = *((char **)this + 119);
        }
      }
    }
    v206 = v36 + 7;
    v207 = v28;
    if ( v36 >= 0 )
      v206 = v36;
    v208 = v206 >> 3;
    if ( v208 > 0 )
    {
      v209 = (unsigned int)(v208 - 1);
      do
      {
        *(_OWORD *)v207 = 0;
        v207 += 8;
        *((_OWORD *)v207 - 1) = 0;
      }
      while ( &v28[8 * v209 + 8] != v207 );
      v207 = &v28[8 * (int)v209 + 8];
    }
    switch ( v36 % 8 )
    {
      case 1:
        goto LABEL_218;
      case 2:
        goto LABEL_217;
      case 3:
        goto LABEL_216;
      case 4:
        goto LABEL_215;
      case 5:
        goto LABEL_214;
      case 6:
        goto LABEL_213;
      case 7:
        v207[6] = 0;
LABEL_213:
        v207[5] = 0;
LABEL_214:
        v207[4] = 0;
LABEL_215:
        v207[3] = 0;
LABEL_216:
        v207[2] = 0;
LABEL_217:
        v207[1] = 0;
LABEL_218:
        *v207 = 0;
        break;
      default:
        break;
    }
    if ( v31 <= 0 )
      goto LABEL_220;
    goto LABEL_29;
  }
LABEL_38:
  v44 = -(a3 ^ 1);
  if ( !a2 )
    v44 = a3 ^ 1;
  v261 = v44;
  if ( v27 > 0 )
  {
    v45 = *((_DWORD *)this + 40);
    v46 = 0;
    v277 = v44 == 0;
    v269 = (unsigned int)(v27 - 1) + 1LL;
    v279 = v276 + 4;
    v47 = v260 + 4;
    do
    {
      if ( !v261 )
      {
        *v24 = v46;
        v28[v46] = 1;
      }
      v48 = *(_DWORD *)(v273 + 4 * v46);
      v49 = v48 + *(_DWORD *)(v275 + 4 * v46);
      if ( a2 )
      {
        if ( v48 < v49 )
        {
          v50 = *((_QWORD *)this + 119);
          v51 = (int *)(v276 + 4LL * v48);
          v52 = (int *)(v279 + 4 * ((unsigned int)(*(_DWORD *)(v275 + 4 * v46) - 1) + (__int64)v48));
          v53 = v277;
          do
          {
            while ( 1 )
            {
              v54 = *v51;
              if ( !v50 || !*(_BYTE *)(v50 + v54) )
              {
                v55 = *(_DWORD *)(v264 + 4 * v54);
                v56 = v55 + *(_DWORD *)(v257 + 4 * v54);
                if ( v55 < v56 )
                  break;
              }
              if ( v52 == ++v51 )
                goto LABEL_57;
            }
            v57 = (int *)(v260 + 4LL * v55);
            v58 = (int *)(v47 + 4 * ((unsigned int)(v56 - v55 - 1) + (__int64)v55));
            do
            {
              v59 = *v57;
              if ( *v57 <= v261 + (int)v46 )
              {
                v60 = &v28[v59];
                if ( !*v60 )
                {
                  *v60 = 1;
                  v61 = v53++;
                  v24[v61] = v59;
                }
              }
              ++v57;
            }
            while ( v58 != v57 );
            ++v51;
          }
          while ( v52 != v51 );
          goto LABEL_57;
        }
      }
      else if ( v48 < v49 )
      {
        v147 = *((_QWORD *)this + 119);
        v148 = (int *)(v276 + 4LL * v48);
        v149 = (int *)(v279 + 4 * ((unsigned int)(*(_DWORD *)(v275 + 4 * v46) - 1) + (__int64)v48));
        v53 = v277;
        do
        {
          v150 = *v148;
          if ( !v147 || !*(_BYTE *)(v147 + v150) )
          {
            v151 = *(_DWORD *)(v264 + 4 * v150);
            v152 = v151 + *(_DWORD *)(v257 + 4 * v150);
            if ( v151 < v152 )
            {
              v153 = (int *)(v260 + 4LL * v151);
              v154 = (int *)(v47 + 4 * ((unsigned int)(v152 - v151 - 1) + (__int64)v151));
              do
              {
                v155 = *v153;
                if ( *v153 >= v261 + (int)v46 )
                {
                  v156 = &v28[v155];
                  if ( !*v156 )
                  {
                    *v156 = 1;
                    v157 = v53++;
                    v24[v157] = v155;
                  }
                }
                ++v153;
              }
              while ( v153 != v154 );
            }
          }
          ++v148;
        }
        while ( v149 != v148 );
        goto LABEL_57;
      }
      v53 = v277;
LABEL_57:
      v45 += v53;
      *((_DWORD *)this + 40) = v45;
      if ( v53 )
      {
        v62 = v24;
        v63 = (__int64)&v24[v53 - 1 + 1];
        do
        {
          v64 = *v62++;
          v28[v64] = 0;
        }
        while ( (int *)v63 != v62 );
      }
      ++v46;
    }
    while ( v269 != v46 );
  }
  operator delete[](v24);
  v65 = *((int *)this + 40);
  if ( v65 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v66 = (char *)operator new[](4 * v65);
  *((_QWORD *)this + 13) = v66;
  v67 = *((int *)this + 11);
  v68 = *((_QWORD *)this + 12);
  *((_DWORD *)this + 40) = 0;
  v278 = v68;
  if ( (int)v67 > 0 )
  {
    v69 = 0;
    v70 = 0;
    v282 = 4LL * (v261 == 0);
    v280 = &v66[v282];
    v281 = v276 + 4;
    v270 = v260 + 4;
    while ( 1 )
    {
      if ( !v261 )
      {
        *(_DWORD *)v66 = v69;
        v28[v69] = 1;
      }
      v71 = v280;
      *(_DWORD *)(v278 + 4 * v69) = v70;
      v72 = *(_DWORD *)(v273 + 4 * v69);
      v73 = v72 + *(_DWORD *)(v275 + 4 * v69);
      if ( a2 )
      {
        if ( v72 < v73 )
        {
          v74 = *((_QWORD *)this + 119);
          v75 = (int *)(v276 + 4LL * v72);
          v76 = (int *)(v281 + 4 * ((unsigned int)(*(_DWORD *)(v275 + 4 * v69) - 1) + (__int64)v72));
          v77 = v261 == 0;
          do
          {
            while ( 1 )
            {
              v78 = v77;
              v79 = *v75;
              v80 = 4LL * v77;
              v71 = &v66[v80];
              if ( !v74 || !*(_BYTE *)(v74 + v79) )
              {
                v81 = *(_DWORD *)(v264 + 4 * v79);
                v82 = v81 + *(_DWORD *)(v257 + 4 * v79);
                if ( v81 < v82 )
                  break;
              }
              if ( v76 == ++v75 )
                goto LABEL_80;
            }
            v83 = (int *)(v260 + 4LL * v81);
            v84 = (int *)(v270 + 4 * ((unsigned int)(v82 - v81 - 1) + (__int64)v81));
            while ( 1 )
            {
              v85 = *v83;
              v80 = 4 * v78;
              v71 = &v66[4 * v78];
              if ( v261 + (int)v69 >= *v83 )
              {
                v86 = &v28[v85];
                if ( !*v86 )
                {
                  v80 += 4;
                  *(_DWORD *)v71 = v85;
                  *v86 = 1;
                  v71 = &v66[v80];
                  ++v77;
                }
              }
              if ( v84 == ++v83 )
                break;
              v78 = v77;
            }
            ++v75;
          }
          while ( v76 != v75 );
          goto LABEL_80;
        }
      }
      else if ( v72 < v73 )
      {
        v136 = *((_QWORD *)this + 119);
        v137 = (int *)(v276 + 4LL * v72);
        v138 = (int *)(v281 + 4 * ((unsigned int)(*(_DWORD *)(v275 + 4 * v69) - 1) + (__int64)v72));
        v77 = v261 == 0;
        do
        {
          v139 = v77;
          v140 = *v137;
          v80 = 4LL * v77;
          v71 = &v66[v80];
          if ( !v136 || !*(_BYTE *)(v136 + v140) )
          {
            v141 = *(_DWORD *)(v264 + 4 * v140);
            v142 = v141 + *(_DWORD *)(v257 + 4 * v140);
            if ( v141 < v142 )
            {
              v143 = (int *)(v260 + 4LL * v141);
              v144 = (int *)(v270 + 4 * ((unsigned int)(v142 - v141 - 1) + (__int64)v141));
              while ( 1 )
              {
                v145 = *v143;
                v80 = 4 * v139;
                v71 = &v66[4 * v139];
                if ( v261 + (int)v69 <= *v143 )
                {
                  v146 = &v28[v145];
                  if ( !*v146 )
                  {
                    v80 += 4;
                    *(_DWORD *)v71 = v145;
                    *v146 = 1;
                    v71 = &v66[v80];
                    ++v77;
                  }
                }
                if ( v144 == ++v143 )
                  break;
                v139 = v77;
              }
            }
          }
          ++v137;
        }
        while ( v138 != v137 );
        goto LABEL_80;
      }
      v80 = 4LL * (v261 == 0);
      v77 = v261 == 0;
LABEL_80:
      v70 = v77 + *((_DWORD *)this + 40);
      *((_DWORD *)this + 40) = v70;
      if ( v77 )
      {
        v87 = v66;
        v88 = (__int64)&v66[4 * (v77 - 1) + 4];
        do
        {
          v89 = *(int *)v87;
          v87 += 4;
          v28[v89] = 0;
        }
        while ( (char *)v88 != v87 );
      }
      if ( v66 == v71 )
      {
        v67 = *((int *)this + 11);
        if ( (int)v67 <= (int)++v69 )
          goto LABEL_151;
      }
      else
      {
        _BitScanReverse64((unsigned __int64 *)&v80, v80 >> 2);
        sub_623B0(v66, v71, 2 * (63LL - (int)(v80 ^ 0x3F)));
        sub_5DBC0(v66, v71);
        ++v69;
        v70 = *((_DWORD *)this + 40);
        v278 = *((_QWORD *)this + 12);
        v67 = *((int *)this + 11);
        if ( (int)v69 >= (int)v67 )
          goto LABEL_151;
        v66 = v71;
        v280 = &v71[v282];
      }
    }
  }
  v70 = 0;
LABEL_151:
  *(_DWORD *)(v278 + 4 * v67) = v70;
  operator delete[](v28);
  return 0;
}

