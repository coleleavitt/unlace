__int64 __fastcall sub_611480(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbp
  char v11; // bl
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // r12
  _QWORD *v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  _QWORD *v22; // r12
  _QWORD *v23; // r8
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r9d
  __int64 v31; // r12
  size_t v32; // rax
  __int64 v33; // rbp
  __int64 v34; // rdi
  __int64 v35; // rsi
  int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rbp
  size_t v44; // rsi
  int v45; // r12d
  __int64 v46; // rdi
  __int64 v47; // rax
  int v48; // r9d
  __int64 v49; // rbx
  int v50; // esi
  int v51; // edi
  __int64 *v52; // rbx
  size_t v53; // rcx
  __int64 v54; // rbp
  int v55; // esi
  __int64 *v56; // rdi
  __int64 v57; // rax
  unsigned int v58; // edx
  __int64 *v59; // r9
  __int64 v60; // rdx
  __int64 *v61; // r8
  __int64 *i; // rax
  __int64 v63; // rdx
  _QWORD *v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // rsi
  int v67; // eax
  _QWORD *v68; // rsi
  __int64 v69; // r8
  int v70; // esi
  unsigned int v71; // r10d
  _QWORD *v72; // r12
  unsigned int v73; // r9d
  __int64 *v74; // r8
  _QWORD *v75; // r13
  int v76; // edi
  __int64 v77; // r9
  _QWORD *v78; // r10
  _QWORD *v79; // rax
  _QWORD *v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // r9
  __int64 *v84; // rdx
  unsigned int v85; // r10d
  __int64 *v86; // rdi
  __int64 v87; // r10
  __int64 *v88; // r8
  __int64 *v89; // rax
  __int64 v90; // r9
  __int64 *v91; // rax
  __m128i *v92; // r12
  __m128i v93; // xmm0
  __int64 v94; // rax
  __int64 v95; // rbx
  _QWORD *v96; // r13
  __int64 v97; // rax
  unsigned __int64 v98; // r8
  __int64 v99; // r10
  __int64 *v100; // rsi
  __int64 v101; // rbp
  __int64 v102; // rcx
  unsigned int v103; // eax
  __int64 v104; // rdx
  int v105; // eax
  __m128 *v106; // rdx
  __int64 v107; // rbx
  __m128 v108; // xmm0
  __int64 v109; // rbx
  __int64 v110; // rbp
  _QWORD *v111; // rdx
  unsigned int v112; // eax
  __int64 v113; // rcx
  int v114; // eax
  _QWORD *v115; // rcx
  _QWORD *v116; // rdx
  unsigned int v117; // eax
  __int64 v118; // rcx
  int v119; // eax
  __int64 *v120; // rcx
  _QWORD *v121; // rbp
  __int64 v122; // rsi
  __int64 v123; // rax
  __int64 v124; // rbx
  void (__fastcall ***v125)(void *); // r12
  size_t v126; // rsi
  __int64 v127; // rdi
  __int64 v129; // rax
  _QWORD *v130; // rdx
  __int64 v131; // rax
  unsigned int v132; // r12d
  size_t v133; // rsi
  unsigned int *v134; // rax
  __int64 v135; // rsi
  __int64 v136; // r13
  _QWORD *v137; // rax
  int v138; // r10d
  char *v139; // rax
  char *v140; // r11
  __int64 v141; // rdx
  _QWORD *v142; // rsi
  _QWORD *v143; // rdx
  __int64 v144; // rsi
  unsigned int v145; // ebp
  unsigned int v146; // ecx
  unsigned int *v147; // rax
  __int64 v148; // rcx
  unsigned int v149; // ecx
  size_t v150; // rsi
  __int64 v151; // rax
  int v152; // ecx
  unsigned int v153; // r9d
  unsigned int v154; // edx
  __int64 v155; // rax
  _QWORD *v156; // rbx
  size_t v157; // r10
  __int64 *v158; // r11
  __int64 v159; // rdi
  __int64 v160; // rdx
  _QWORD *v161; // rsi
  _QWORD *v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rcx
  __int64 v165; // rcx
  _QWORD *v166; // rbp
  __int64 v167; // rsi
  __int64 v168; // rdi
  __int64 v169; // rsi
  __int64 v170; // rdi
  int v171; // ebx
  __int64 v172; // rsi
  int v173; // eax
  __int64 v174; // r13
  __int64 *v175; // rcx
  __int64 v176; // rax
  int v177; // esi
  unsigned int v178; // edx
  __int64 *v179; // rdi
  __int64 v180; // rdx
  __int64 *v181; // r9
  __int64 *v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 *v186; // rcx
  __int64 v187; // rdx
  __int64 *v188; // rdi
  __int64 v189; // r10
  __int64 *v190; // r9
  __int64 *v191; // rax
  __int64 v192; // rdx
  _QWORD *v193; // rax
  unsigned int v194; // edx
  __int64 v195; // rcx
  int v196; // edx
  __int64 *v197; // rcx
  __int64 v198; // rax
  int v199; // edi
  int v200; // edx
  __int64 *v201; // rbp
  size_t v202; // rbx
  __int64 *v203; // r12
  int v204; // r11d
  __int64 v205; // rax
  __int64 *v206; // r10
  __int64 *v207; // rax
  __int64 *v208; // rsi
  __int64 v209; // rdx
  _QWORD *v210; // rdx
  _QWORD *v211; // rax
  size_t v212; // rsi
  _QWORD *v213; // rdx
  __int64 v214; // rax
  __int64 v215; // rax
  __int64 *v216; // rdi
  __int64 v217; // rdx
  __int64 *v218; // rax
  __int64 v219; // rdx
  __int64 *v220; // rsi
  __int64 *v221; // rdx
  int v222; // eax
  unsigned int v223; // ebx
  unsigned int v224; // ecx
  unsigned int *v225; // rdx
  __int64 v226; // rcx
  _QWORD *v227; // rax
  char **exception; // rbp
  __int64 *v229; // rbx
  __int64 *v230; // rsi
  char **v231; // rbp
  char **v232; // rax
  char **v233; // r12
  __int64 *v234; // rbx
  __int64 *v235; // rsi
  char **v236; // rax
  char **v237; // rbp
  __int64 *v238; // rbx
  __int64 *v239; // rsi
  char **v240; // rax
  char **v241; // rbp
  __int64 *v242; // rbx
  __int64 *v243; // rsi
  __int64 v244; // [rsp+8h] [rbp-100h] BYREF
  unsigned int v245; // [rsp+14h] [rbp-F4h]
  __int64 *v246; // [rsp+18h] [rbp-F0h]
  size_t v247; // [rsp+20h] [rbp-E8h]
  __int64 v248; // [rsp+28h] [rbp-E0h]
  __int64 *v249; // [rsp+30h] [rbp-D8h]
  __int64 *v250; // [rsp+38h] [rbp-D0h]
  __int64 v251; // [rsp+40h] [rbp-C8h]
  __int64 v252; // [rsp+48h] [rbp-C0h]
  __int64 *v253; // [rsp+50h] [rbp-B8h]
  __int64 *v254; // [rsp+58h] [rbp-B0h]
  size_t v255; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v256; // [rsp+68h] [rbp-A0h]
  __int64 v257; // [rsp+70h] [rbp-98h] BYREF
  __int64 v258; // [rsp+78h] [rbp-90h]
  __int64 v259; // [rsp+80h] [rbp-88h] BYREF
  __int64 v260; // [rsp+88h] [rbp-80h]
  __int64 v261; // [rsp+90h] [rbp-78h] BYREF
  __int64 v262; // [rsp+98h] [rbp-70h]
  __int64 v263; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v264; // [rsp+A8h] [rbp-60h]
  __int64 v265; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD *v266; // [rsp+B8h] [rbp-50h]

  v4 = *a1;
  *(_QWORD *)&v244 = a2;
  if ( !(unsigned __int8)sub_64B350(v4) )
    return 0;
  v5 = a1[1];
  v245 = *(_DWORD *)(v5 + 712);
  if ( v245 )
    return 0;
  v6 = *(_QWORD *)(a2 + 24);
  v248 = *a1 + 656LL;
  if ( v6 )
    v7 = *(unsigned int *)(v6 - 4);
  else
    v7 = 0;
  v256 = v5;
  v255 = 0;
  v8 = sub_186B270(0xF8u);
  sub_63D370(v8, *a1);
  v9 = *(_QWORD *)&v244;
  a1[140] = v8;
  v246 = nullptr;
  a1[139] = v9;
  v251 = 8 * v7;
  while ( 1 )
  {
    v10 = *a1;
    v11 = sub_18290A0(*(_QWORD *)*a1);
    if ( !v11 )
      break;
    if ( v246 == (__int64 *)v251 )
      goto LABEL_63;
    v12 = *(__int64 *)((char *)v246 + *(_QWORD *)(*(_QWORD *)&v244 + 24LL));
    sub_62E310(v248, v12, &v255);
    v13 = (_QWORD *)*a1;
    v14 = a1[1];
    v257 = 0;
    v258 = v14;
    v266 = v13 + 82;
    v259 = 0;
    v260 = v14;
    v261 = 0;
    v262 = v14;
    v265 = 0;
    v250 = &v265;
    if ( (unsigned __int8)sub_5CB220(a1 + 3, v12, &v265) )
    {
      v15 = v265;
    }
    else
    {
      if ( v12 )
        sub_62A000(v266, v12);
      if ( v265 )
        sub_62A410(v266, v265);
      v265 = v12;
      v15 = v12;
    }
    sub_62E310(*a1 + 656LL, v15, &v259);
    v254 = &v261;
    sub_FC2CE0(a1 + 56, v259, &v261, &v257);
    v249 = a1 + 57;
    v252 = v261;
    v253 = a1 + 119;
    v16 = a1[62];
    if ( v16 )
    {
      if ( !*(_DWORD *)(v16 - 4) && *(_QWORD *)a1[60] == a1[61] )
        goto LABEL_35;
      *(_DWORD *)(v16 - 4) = 0;
    }
    else if ( *(_QWORD *)a1[60] == a1[61] )
    {
      goto LABEL_35;
    }
    v17 = (_QWORD *)a1[64];
    if ( v17 )
    {
      v18 = &v17[*((unsigned int *)v17 - 1)];
      if ( v17 >= v18 )
        goto LABEL_22;
      do
      {
        while ( 1 )
        {
          v19 = *v17;
          if ( *v17 )
          {
            v20 = a1[63];
            v21 = (*(_DWORD *)(v19 + 8))-- == 1;
            if ( v21 )
              break;
          }
          if ( ++v17 >= v18 )
            goto LABEL_21;
        }
        v247 = (size_t)v18;
        sub_15D7BC0(v20, v19);
        v18 = (_QWORD *)v247;
        ++v17;
      }
      while ( (unsigned __int64)v17 < v247 );
LABEL_21:
      v17 = (_QWORD *)a1[64];
      if ( v17 )
LABEL_22:
        *((_DWORD *)v17 - 1) = 0;
    }
    v22 = (_QWORD *)a1[68];
    if ( v22 )
    {
      v23 = &v22[*((unsigned int *)v22 - 1)];
      if ( v22 >= v23 )
        goto LABEL_31;
      do
      {
        while ( 1 )
        {
          v24 = *v22;
          if ( *v22 )
          {
            v25 = a1[67];
            v21 = (*(_DWORD *)(v24 + 8))-- == 1;
            if ( v21 )
              break;
          }
          if ( ++v22 >= v23 )
            goto LABEL_30;
        }
        v247 = (size_t)v23;
        sub_15D7BC0(v25, v24);
        v23 = (_QWORD *)v247;
        ++v22;
      }
      while ( (unsigned __int64)v22 < v247 );
LABEL_30:
      v22 = (_QWORD *)a1[68];
      if ( v22 )
LABEL_31:
        *((_DWORD *)v22 - 1) = 0;
    }
    v26 = a1[74];
    if ( v26 )
      *(_DWORD *)(v26 - 4) = 0;
    sub_15843E0(v249);
LABEL_35:
    v21 = *((_BYTE *)a1 + 472) == 0;
    v264 = v14;
    v263 = 0;
    if ( v21 )
      sub_611010((__int64)v249, v252, &v263, v253);
    else
      sub_60DD90((__int64)v249, v252, &v263, v253);
    v31 = v263;
    v32 = v255;
    v33 = v264;
    if ( v263 == v255 )
    {
      if ( v265 )
      {
        v247 = v255;
        sub_62A410(v266, v265);
        v32 = v247;
      }
      v11 = 0;
      if ( !v32 )
        goto LABEL_45;
      v173 = *(_DWORD *)(v32 + 8) - 1;
      *(_DWORD *)(v31 + 8) = v173;
      if ( v173 )
        goto LABEL_45;
LABEL_222:
      sub_15D7BC0(v33, v31);
      goto LABEL_45;
    }
    if ( v255 )
    {
      v34 = v256;
      v21 = (*(_DWORD *)(v255 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v34, v32);
    }
    v255 = v31;
    v35 = v265;
    if ( !v31 )
    {
      if ( v265 )
        sub_62A410(v266, v265);
      goto LABEL_45;
    }
    v36 = *(_DWORD *)(v31 + 8);
    v27 = (unsigned int)(v36 + 1);
    *(_DWORD *)(v31 + 8) = v27;
    if ( v35 )
    {
      sub_62A410(v266, v35);
      v36 = *(_DWORD *)(v31 + 8) - 1;
    }
    *(_DWORD *)(v31 + 8) = v36;
    if ( !v36 )
      goto LABEL_222;
LABEL_45:
    v37 = v261;
    if ( v261 )
    {
      v38 = v262;
      v21 = (*(_DWORD *)(v261 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v38, v37);
    }
    v39 = v259;
    if ( v259 )
    {
      v40 = v260;
      v21 = (*(_DWORD *)(v259 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v40, v39);
    }
    v41 = v257;
    if ( v257 )
    {
      v42 = v258;
      v21 = (*(_DWORD *)(v257 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v42, v41);
    }
    if ( v11 )
    {
      v43 = a1[1];
      v44 = v255;
      if ( *(_QWORD *)(v12 + 48) )
      {
        v45 = *(_DWORD *)(v43 + 712);
        v46 = a1[1];
        *(_DWORD *)(v43 + 712) = 1;
        v47 = sub_15DE060(v46, v44, v27, v28, v29);
        v49 = v47;
        if ( v47 )
          ++*(_DWORD *)(v47 + 8);
        v50 = v255;
        v51 = v248;
        *(_DWORD *)(v43 + 712) = v45;
        sub_631ED0(v51, v50, v47, v8, v12 + 72, v48);
        if ( v49 )
        {
          v21 = (*(_DWORD *)(v49 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v43, v49);
        }
        goto LABEL_61;
      }
      sub_631ED0(v248, v255, 0, v8, v12 + 72, v30);
      ++v246;
    }
    else
    {
      sub_63DAD0(v8, v12, a3);
      v174 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 16LL);
      v175 = *(__int64 **)(*(_QWORD *)&v244 + 152LL);
      v176 = *(unsigned int *)(*(_QWORD *)&v244 + 160LL);
      v177 = *(_DWORD *)(v174 + 12);
      v178 = v176 - 1;
      v176 *= 8;
      v179 = (__int64 *)((char *)v175 + v176);
      v180 = 8LL * (v177 & v178);
      v181 = &v175[(unsigned __int64)v180 / 8];
      if ( v180 == v176 )
      {
LABEL_232:
        if ( v175 == v181 )
          goto LABEL_61;
        while ( 1 )
        {
          v184 = *v175;
          if ( (unsigned __int64)*v175 > 1 )
          {
            if ( *(_DWORD *)(v184 + 12) == v177 && v174 == v184 )
              goto LABEL_243;
          }
          else if ( !v184 )
          {
            goto LABEL_61;
          }
          if ( v181 == ++v175 )
            goto LABEL_61;
        }
      }
      v182 = &v175[(unsigned __int64)v180 / 8];
      while ( 1 )
      {
        while ( 1 )
        {
          v183 = *v182;
          if ( (unsigned __int64)*v182 > 1 )
            break;
          if ( !v183 )
            goto LABEL_61;
          if ( v179 == ++v182 )
            goto LABEL_232;
        }
        if ( *(_DWORD *)(v183 + 12) == v177 && v174 == v183 )
          break;
        if ( v179 == ++v182 )
          goto LABEL_232;
      }
LABEL_243:
      v185 = *(unsigned int *)(v8 + 160);
      v186 = *(__int64 **)(v8 + 152);
      v187 = 8 * v185;
      v188 = &v186[v185];
      v189 = 8LL * (v177 & (unsigned int)(v185 - 1));
      v190 = &v186[(unsigned __int64)v189 / 8];
      v191 = &v186[(unsigned __int64)v189 / 8];
      if ( v189 != v187 )
      {
        do
        {
          v192 = *v191;
          if ( (unsigned __int64)*v191 > 1 )
          {
            if ( *(_DWORD *)(v192 + 12) == v177 && v174 == v192 )
              goto LABEL_61;
          }
          else if ( !v192 )
          {
            goto LABEL_250;
          }
          ++v191;
        }
        while ( v188 != v191 );
      }
      for ( ; v190 != v186; ++v186 )
      {
        v214 = *v186;
        if ( (unsigned __int64)*v186 > 1 )
        {
          if ( *(_DWORD *)(v214 + 12) == v177 && v174 == v214 )
            goto LABEL_61;
        }
        else if ( !v214 )
        {
          break;
        }
      }
LABEL_250:
      v193 = *(_QWORD **)(v8 + 232);
      ++*(_DWORD *)(v174 + 8);
      if ( v193 )
      {
        v194 = *((_DWORD *)v193 - 1);
        if ( v194 == *((_DWORD *)v193 - 2) )
        {
          v223 = (3 * v194 + 1) >> 1;
          v224 = 8 * v223 + 8;
          if ( 8 * v194 + 8 >= v224 || v194 >= v223 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v250, "Overflow encountered when expanding vector");
            v229 = v250;
            v230 = v250;
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v230);
            sub_233E40((__int64)v229);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v225 = (unsigned int *)sub_186B300(v193 - 1, v224);
          v193 = v225 + 2;
          v226 = v225[1];
          *v225 = v223;
          *(_QWORD *)(v8 + 232) = v225 + 2;
          LODWORD(v225) = v226;
          v197 = &v193[v226];
          v196 = (_DWORD)v225 + 1;
        }
        else
        {
          v195 = v194;
          v196 = v194 + 1;
          v197 = &v193[v195];
        }
      }
      else
      {
        v227 = (_QWORD *)sub_186B270(0x18u);
        *v227 = 2;
        v193 = v227 + 1;
        v196 = 1;
        *(_QWORD *)(v8 + 232) = v193;
        v197 = v193;
      }
      *v197 = v174;
      *((_DWORD *)v193 - 1) = v196;
      v198 = *(unsigned int *)(v8 + 160);
      v199 = *(_DWORD *)(v8 + 168);
      v200 = v199 + *(_DWORD *)(v8 + 164);
      LODWORD(v247) = 2 * v198;
      if ( 3 * (int)v198 < (unsigned int)(4 * v200) )
      {
        v202 = 8LL * (unsigned int)v247;
        v201 = (__int64 *)sub_186B270(v202);
        if ( (_DWORD)v247 )
          memset(v201, 0, 8LL * (unsigned int)v247);
        v216 = *(__int64 **)(v8 + 152);
        v203 = &v201[v202 / 8];
        v217 = *(unsigned int *)(v8 + 160);
        v218 = v216;
        LODWORD(v249) = v247 - 1;
        v250 = &v216[v217];
        if ( v216 != v250 )
        {
          do
          {
            if ( (unsigned __int64)*v218 > 1 )
            {
              v219 = 8LL * (*(_DWORD *)(*v218 + 12) & (unsigned int)v249);
              v220 = &v201[(unsigned __int64)v219 / 8];
              if ( v202 == v219 )
              {
LABEL_297:
                if ( v201 == v220 )
                {
LABEL_306:
                  v252 = (__int64)v218;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v221 = v201;
                while ( *v221 )
                {
                  if ( v220 == ++v221 )
                    goto LABEL_306;
                }
              }
              else
              {
                v221 = &v201[(unsigned __int64)v219 / 8];
                while ( *v221 )
                {
                  if ( v203 == ++v221 )
                    goto LABEL_297;
                }
              }
              *v221 = *v218;
            }
            ++v218;
          }
          while ( v250 != v218 );
          v216 = *(__int64 **)(v8 + 152);
        }
        if ( v216 )
          sub_186B220(v216);
        v222 = v247;
        *(_QWORD *)(v8 + 152) = v201;
        v199 = 0;
        *(_DWORD *)(v8 + 168) = 0;
        *(_DWORD *)(v8 + 160) = v222;
      }
      else
      {
        v201 = *(__int64 **)(v8 + 152);
        LODWORD(v249) = v198 - 1;
        v202 = 8 * v198;
        v203 = &v201[v198];
      }
      v204 = *(_DWORD *)(v174 + 12);
      v205 = 8LL * (v204 & (unsigned int)v249);
      v206 = &v201[(unsigned __int64)v205 / 8];
      if ( v205 == v202 )
      {
        v208 = nullptr;
        while ( 1 )
        {
LABEL_282:
          if ( v206 == v201 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v215 = *v201;
          if ( (unsigned __int64)*v201 > 1 )
          {
            if ( *(_DWORD *)(v215 + 12) == v204 && v174 == v215 )
            {
              *v201 = v174;
              goto LABEL_61;
            }
          }
          else
          {
            if ( !v215 )
            {
              if ( v208 )
              {
                v201 = v208;
                *(_DWORD *)(v8 + 168) = v199 - 1;
              }
              *v201 = v174;
              ++*(_DWORD *)(v8 + 164);
              goto LABEL_61;
            }
            v208 = v201;
          }
          ++v201;
        }
      }
      v207 = &v201[(unsigned __int64)v205 / 8];
      v208 = nullptr;
      while ( 1 )
      {
        v209 = *v207;
        if ( (unsigned __int64)*v207 <= 1 )
          break;
        if ( *(_DWORD *)(v209 + 12) == v204 && v174 == v209 )
        {
          *v207 = v174;
          goto LABEL_61;
        }
LABEL_259:
        if ( ++v207 == v203 )
          goto LABEL_282;
      }
      if ( v209 )
      {
        v208 = v207;
        goto LABEL_259;
      }
      if ( v208 )
      {
        v207 = v208;
        *(_DWORD *)(v8 + 168) = v199 - 1;
      }
      *v207 = v174;
      ++*(_DWORD *)(v8 + 164);
LABEL_61:
      ++v246;
    }
  }
  *(_DWORD *)(v10 + 2988) = 6;
LABEL_63:
  v52 = *(__int64 **)(*(_QWORD *)&v244 + 152LL);
  v53 = (size_t)&v52[*(unsigned int *)(*(_QWORD *)&v244 + 160LL)];
  if ( v52 != (__int64 *)v53 )
  {
    while ( (unsigned __int64)*v52 <= 1 )
    {
      if ( (__int64 *)v53 == ++v52 )
        goto LABEL_108;
    }
    if ( (__int64 *)v53 != v52 )
    {
      v54 = *v52;
      while ( 1 )
      {
        v55 = *(_DWORD *)(v54 + 12);
        v56 = *(__int64 **)(*(_QWORD *)&v244 + 32LL);
        v57 = *(unsigned int *)(*(_QWORD *)&v244 + 40LL);
        v58 = v57 - 1;
        v57 *= 16;
        v59 = (__int64 *)((char *)v56 + v57);
        v60 = 16LL * (v55 & v58);
        v61 = &v56[(unsigned __int64)v60 / 8];
        if ( v60 != v57 )
        {
          for ( i = &v56[(unsigned __int64)v60 / 8]; v59 != i; i += 2 )
          {
            v63 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v63 + 12) == v55 && v63 == v54 )
              {
LABEL_96:
                v83 = *(unsigned int *)(v8 + 40);
                v84 = *(__int64 **)(v8 + 32);
                v85 = v83 - 1;
                v83 *= 16;
                v86 = (__int64 *)((char *)v84 + v83);
                v87 = 16LL * (v55 & v85);
                v88 = &v84[(unsigned __int64)v87 / 8];
                v89 = &v84[(unsigned __int64)v87 / 8];
                if ( v87 == v83 )
                {
LABEL_146:
                  if ( v84 == v88 )
                    goto LABEL_103;
                  while ( 1 )
                  {
                    v131 = *v84;
                    if ( (unsigned __int64)*v84 > 1 )
                    {
                      if ( *(_DWORD *)(v131 + 12) == v55 && v131 == v54 )
                        goto LABEL_76;
                    }
                    else if ( !v131 )
                    {
                      goto LABEL_103;
                    }
                    v84 += 2;
                    if ( v88 == v84 )
                      goto LABEL_103;
                  }
                }
                while ( 1 )
                {
                  v90 = *v89;
                  if ( (unsigned __int64)*v89 > 1 )
                  {
                    if ( *(_DWORD *)(v90 + 12) == v55 && v90 == v54 )
                      goto LABEL_76;
                  }
                  else if ( !v90 )
                  {
                    goto LABEL_103;
                  }
                  v89 += 2;
                  if ( v86 == v89 )
                    goto LABEL_146;
                }
              }
            }
            else if ( !v63 )
            {
              goto LABEL_76;
            }
          }
        }
        if ( v56 == v61 )
        {
LABEL_76:
          v64 = *(_QWORD **)(v8 + 232);
          ++*(_DWORD *)(v54 + 8);
          if ( !v64 )
            goto LABEL_145;
          goto LABEL_77;
        }
        while ( 1 )
        {
          v129 = *v56;
          if ( (unsigned __int64)*v56 <= 1 )
            break;
          if ( *(_DWORD *)(v129 + 12) == v55 && v129 == v54 )
            goto LABEL_96;
LABEL_141:
          v56 += 2;
          if ( v61 == v56 )
            goto LABEL_76;
        }
        if ( v129 )
          goto LABEL_141;
        v64 = *(_QWORD **)(v8 + 232);
        ++*(_DWORD *)(v54 + 8);
        if ( !v64 )
        {
LABEL_145:
          v246 = (__int64 *)v53;
          v130 = (_QWORD *)sub_186B270(0x18u);
          *v130 = 2;
          v53 = (size_t)v246;
          v67 = 1;
          v64 = v130 + 1;
          *(_QWORD *)(v8 + 232) = v64;
          v68 = v64;
          goto LABEL_79;
        }
LABEL_77:
        v65 = *((_DWORD *)v64 - 1);
        if ( v65 == *((_DWORD *)v64 - 2) )
        {
          v132 = (3 * v65 + 1) >> 1;
          v133 = 8 * v132 + 8;
          if ( 8 * v65 + 8 >= (unsigned int)v133 || v65 >= v132 )
          {
            v231 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v265, "Overflow encountered when expanding vector");
            *v231 = (char *)off_1C63128;
            sub_2333C0(v231 + 1, &v265);
            sub_233E40((__int64)&v265);
            __cxa_throw(v231, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v246 = (__int64 *)v53;
          v134 = (unsigned int *)sub_186B300(v64 - 1, v133);
          v135 = v134[1];
          v64 = v134 + 2;
          v53 = (size_t)v246;
          *v134 = v132;
          *(_QWORD *)(v8 + 232) = v134 + 2;
          LODWORD(v134) = v135;
          v68 = &v64[v135];
          v67 = (_DWORD)v134 + 1;
        }
        else
        {
          v66 = v65;
          v67 = v65 + 1;
          v68 = &v64[v66];
        }
LABEL_79:
        *v68 = v54;
        *((_DWORD *)v64 - 1) = v67;
        v69 = *(unsigned int *)(v8 + 160);
        v70 = *(_DWORD *)(v8 + 168);
        v71 = 2 * v69;
        if ( 3 * (int)v69 < (unsigned int)(4 * (v70 + *(_DWORD *)(v8 + 164))) )
        {
          v136 = v71;
          v248 = v53;
          LODWORD(v247) = 2 * v69;
          v246 = (__int64 *)(8LL * v71);
          v137 = (_QWORD *)sub_186B270((size_t)v246);
          v138 = v247;
          v74 = v246;
          v72 = v137;
          v53 = v248;
          if ( (_DWORD)v247 )
          {
            LODWORD(v248) = v247;
            v247 = (size_t)v246;
            v246 = (__int64 *)v53;
            memset(v137, 0, 8 * v136);
            v53 = (size_t)v246;
            v74 = (__int64 *)v247;
            v138 = v248;
          }
          v139 = *(char **)(v8 + 152);
          v73 = v138 - 1;
          v75 = (__int64 *)((char *)v74 + (_QWORD)v72);
          v140 = &v139[8 * *(unsigned int *)(v8 + 160)];
          if ( v139 != v140 )
          {
            do
            {
              while ( *(_QWORD *)v139 <= 1u )
              {
                v139 += 8;
                if ( v140 == v139 )
                  goto LABEL_169;
              }
              v141 = 8LL * (*(_DWORD *)(*(_QWORD *)v139 + 12LL) & v73);
              v142 = &v72[(unsigned __int64)v141 / 8];
              if ( v74 == (__int64 *)v141 )
              {
LABEL_173:
                if ( v72 == v142 )
                {
LABEL_181:
                  LODWORD(v251) = v138;
                  v250 = v74;
                  LODWORD(v249) = v138 - 1;
                  v248 = (__int64)v140;
                  v247 = (size_t)v139;
                  v246 = (__int64 *)v53;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v143 = v72;
                while ( *v143 )
                {
                  if ( v142 == ++v143 )
                    goto LABEL_181;
                }
              }
              else
              {
                v143 = &v72[(unsigned __int64)v141 / 8];
                while ( *v143 )
                {
                  if ( v75 == ++v143 )
                    goto LABEL_173;
                }
              }
              v144 = *(_QWORD *)v139;
              v139 += 8;
              *v143 = v144;
            }
            while ( v140 != v139 );
LABEL_169:
            v140 = *(char **)(v8 + 152);
          }
          if ( v140 )
          {
            LODWORD(v249) = v138;
            v248 = (__int64)v74;
            LODWORD(v247) = v138 - 1;
            v246 = (__int64 *)v53;
            sub_186B220(v140);
            v138 = (int)v249;
            v74 = (__int64 *)v248;
            v73 = v247;
            v53 = (size_t)v246;
          }
          *(_QWORD *)(v8 + 152) = v72;
          v70 = 0;
          *(_DWORD *)(v8 + 160) = v138;
          *(_DWORD *)(v8 + 168) = 0;
        }
        else
        {
          v72 = *(_QWORD **)(v8 + 152);
          v73 = v69 - 1;
          v74 = (__int64 *)(8 * v69);
          v75 = (__int64 *)((char *)v74 + (_QWORD)v72);
        }
        v76 = *(_DWORD *)(v54 + 12);
        v77 = 8LL * (v76 & v73);
        v78 = &v72[(unsigned __int64)v77 / 8];
        if ( (__int64 *)v77 != v74 )
        {
          v79 = &v72[(unsigned __int64)v77 / 8];
          v80 = nullptr;
          while ( 1 )
          {
            v81 = *v79;
            if ( *v79 > 1u )
            {
              if ( *(_DWORD *)(v81 + 12) == v76 && v81 == v54 )
              {
                *v79 = v54;
                goto LABEL_103;
              }
            }
            else
            {
              if ( !v81 )
              {
                if ( v80 )
                  goto LABEL_179;
                v80 = v79;
                goto LABEL_180;
              }
              v80 = v79;
            }
            if ( ++v79 == v75 )
              goto LABEL_92;
          }
        }
        v80 = nullptr;
LABEL_92:
        while ( 2 )
        {
          if ( v78 == v72 )
          {
            v246 = (__int64 *)v53;
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v82 = *v72;
          if ( *v72 > 1u )
          {
            if ( *(_DWORD *)(v82 + 12) == v76 && v82 == v54 )
            {
              *v72 = v54;
              goto LABEL_103;
            }
            goto LABEL_91;
          }
          if ( v82 )
          {
            v80 = v72;
LABEL_91:
            ++v72;
            continue;
          }
          break;
        }
        if ( v80 )
LABEL_179:
          *(_DWORD *)(v8 + 168) = v70 - 1;
        else
          v80 = v72;
LABEL_180:
        *v80 = v54;
        ++*(_DWORD *)(v8 + 164);
LABEL_103:
        v91 = v52 + 1;
        if ( (__int64 *)v53 != v52 + 1 )
        {
          while ( 1 )
          {
            v54 = *v91;
            v52 = v91;
            if ( (unsigned __int64)*v91 > 1 )
              break;
            if ( (__int64 *)v53 == ++v91 )
              goto LABEL_108;
          }
          if ( (__int64 *)v53 != v91 )
            continue;
        }
        break;
      }
    }
  }
LABEL_108:
  if ( *(_QWORD *)(*a1 + 2952LL) )
  {
    v92 = (__m128i *)sub_186B270(0x50u);
    v92->m128i_i32[2] = 0;
    v93 = _mm_loadl_epi64((const __m128i *)(a1 + 1));
    v92[1].m128i_i64[0] = 0;
    v92[1].m128i_i8[8] = 1;
    strcpy(&v92[3].m128i_i8[8], "dl_mk_bit_blast");
    v92->m128i_i64[0] = (__int64)&off_1C60CE8;
    v92[2] = _mm_unpacklo_epi64(v93, (__m128i)(unsigned __int64)&v92[3].m128i_u64[1]);
    v92[3].m128i_i64[0] = 15;
    v92[4].m128i_i64[1] = 0;
    v94 = sub_186B270(0x60u);
    v95 = a1[1];
    v96 = (_QWORD *)v94;
    *(_BYTE *)(v94 + 24) = 1;
    *(_DWORD *)(v94 + 8) = 0;
    *(_QWORD *)(v94 + 16) = 0;
    *(_QWORD *)v94 = &off_1C68880;
    *(_QWORD *)(v94 + 32) = v95;
    sub_16744A0(v94 + 40, v95);
    v97 = a1[136];
    v96[8] = v95;
    v96[9] = 0;
    v96[10] = v95;
    for ( v96[11] = 0; v97; ++v245 )
    {
      if ( v245 >= *(_DWORD *)(v97 - 4) )
        break;
      v98 = v245;
      v99 = 8LL * v245;
      v100 = (__int64 *)(v99 + a1[138]);
      v244 = *(double *)v92[2].m128i_i64;
      v101 = *v100;
      if ( *v100 )
        ++*(_DWORD *)(v101 + 8);
      v102 = v92[4].m128i_i64[1];
      if ( v102 )
      {
        v103 = *(_DWORD *)(v102 - 4);
        if ( v103 == *(_DWORD *)(v102 - 8) )
        {
          v153 = (3 * v103 + 1) >> 1;
          LODWORD(v246) = v153;
          v154 = 40 * v153 + 8;
          if ( 40 * v103 + 8 >= v154 || v103 >= v153 )
          {
            v232 = (char **)__cxa_allocate_exception(0x28u);
            v250 = &v265;
            v233 = v232;
            sub_24ABB0(&v265, "Overflow encountered when expanding vector");
            v234 = v250;
            v235 = v250;
            *v233 = (char *)off_1C63128;
            sub_2333C0(v233 + 1, v235);
            sub_233E40((__int64)v234);
            __cxa_throw(v233, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v248 = v98;
          v247 = v99;
          v155 = sub_186B270(v154);
          v156 = (_QWORD *)v92[4].m128i_i64[1];
          v157 = v247;
          v158 = (__int64 *)v155;
          v102 = v155 + 8;
          v98 = v248;
          if ( v156 )
          {
            v159 = *((unsigned int *)v156 - 1);
            v160 = v155 + 8;
            *(_DWORD *)(v155 + 4) = v159;
            v161 = &v156[5 * v159];
            v162 = v156;
            if ( v156 != v161 )
            {
              v247 = v102;
              do
              {
                v163 = v162[1];
                v162 += 5;
                v160 += 40;
                *(_QWORD *)(v160 - 32) = v163;
                v164 = *(v162 - 5);
                *(v162 - 5) = 0;
                *(_QWORD *)(v160 - 40) = v164;
                *(_QWORD *)(v160 - 16) = *(v162 - 2);
                v165 = *(v162 - 3);
                *(v162 - 3) = 0;
                *(_QWORD *)(v160 - 24) = v165;
                *(_DWORD *)(v160 - 8) = *((_DWORD *)v162 - 2);
              }
              while ( v161 != v162 );
              v102 = v247;
            }
            if ( (_DWORD)v159 )
            {
              v248 = v101;
              v247 = v157;
              v249 = (__int64 *)v102;
              v166 = &v156[5 * v159];
              v250 = v158;
              v251 = v98;
              do
              {
                while ( 1 )
                {
                  v169 = v156[2];
                  if ( v169 )
                  {
                    v170 = v156[3];
                    v21 = (*(_DWORD *)(v169 + 8))-- == 1;
                    if ( v21 )
                      sub_15D7BC0(v170, v169);
                  }
                  v167 = *v156;
                  if ( *v156 )
                  {
                    v168 = v156[1];
                    v21 = (*(_DWORD *)(v167 + 8))-- == 1;
                    if ( v21 )
                      break;
                  }
                  v156 += 5;
                  if ( v156 == v166 )
                    goto LABEL_206;
                }
                sub_15D7BC0(v168, v167);
                v156 += 5;
              }
              while ( v156 != v166 );
LABEL_206:
              v157 = v247;
              v102 = (__int64)v249;
              v158 = v250;
              v98 = v251;
              v156 = (_QWORD *)v92[4].m128i_i64[1];
            }
            v250 = (__int64 *)v98;
            v249 = v158;
            v248 = v102;
            v247 = v157;
            sub_186B220(v156 - 1);
            v158 = v249;
            v102 = v248;
            v98 = (unsigned __int64)v250;
            v157 = v247;
            v106 = (__m128 *)(v248 + 40LL * *((unsigned int *)v249 + 1));
            v105 = *((_DWORD *)v249 + 1) + 1;
          }
          else
          {
            *(_DWORD *)(v155 + 4) = 0;
            v106 = (__m128 *)(v155 + 8);
            v105 = 1;
          }
          v171 = (int)v246;
          v172 = a1[138];
          v92[4].m128i_i64[1] = v102;
          *(_DWORD *)v158 = v171;
          v100 = (__int64 *)(v157 + v172);
        }
        else
        {
          v104 = v103;
          v105 = v103 + 1;
          v106 = (__m128 *)(v102 + 40 * v104);
        }
      }
      else
      {
        v247 = v98;
        v246 = (__int64 *)v99;
        v211 = (_QWORD *)sub_186B270(0x58u);
        v212 = (size_t)v246;
        v98 = v247;
        *v211 = 2;
        v102 = (__int64)(v211 + 1);
        v100 = (__int64 *)(a1[138] + v212);
        v105 = 1;
        v92[4].m128i_i64[1] = v102;
        v106 = (__m128 *)v102;
      }
      v107 = *(_QWORD *)&v244;
      v106[1].m128_u64[0] = 0;
      v108 = _mm_loadh_ps(&v244);
      v106[2].m128_i32[0] = 0;
      *v106 = v108;
      v106[1].m128_u64[1] = v107;
      v109 = *v100;
      *(_DWORD *)(v102 - 4) = v105;
      v110 = *(_QWORD *)(a1[136] + 8 * v98);
      if ( v110 )
        ++*(_DWORD *)(v110 + 8);
      v111 = (_QWORD *)v96[9];
      if ( v111 )
      {
        v112 = *((_DWORD *)v111 - 1);
        if ( v112 == *((_DWORD *)v111 - 2) )
        {
          v149 = (3 * v112 + 1) >> 1;
          v150 = 8 * v149 + 8;
          if ( 8 * v112 + 8 >= (unsigned int)v150 || v112 >= v149 )
          {
            v236 = (char **)__cxa_allocate_exception(0x28u);
            v250 = &v265;
            v237 = v236;
            sub_24ABB0(&v265, "Overflow encountered when expanding vector");
            v238 = v250;
            v239 = v250;
            *v237 = (char *)off_1C63128;
            sub_2333C0(v237 + 1, v239);
            sub_233E40((__int64)v238);
            __cxa_throw(v237, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v244) = (3 * v112 + 1) >> 1;
          v151 = sub_186B300(v111 - 1, v150);
          v152 = LODWORD(v244);
          v111 = (_QWORD *)(v151 + 8);
          v96[9] = v151 + 8;
          *(_DWORD *)v151 = v152;
          LODWORD(v151) = *(_DWORD *)(v151 + 4);
          v115 = &v111[(unsigned int)v151];
          v114 = v151 + 1;
        }
        else
        {
          v113 = v112;
          v114 = v112 + 1;
          v115 = &v111[v113];
        }
      }
      else
      {
        v213 = (_QWORD *)sub_186B270(0x18u);
        *v213 = 2;
        v114 = 1;
        v111 = v213 + 1;
        v96[9] = v111;
        v115 = v111;
      }
      *v115 = v110;
      *((_DWORD *)v111 - 1) = v114;
      if ( v109 )
        ++*(_DWORD *)(v109 + 8);
      v116 = (_QWORD *)v96[11];
      if ( v116 )
      {
        v117 = *((_DWORD *)v116 - 1);
        if ( v117 == *((_DWORD *)v116 - 2) )
        {
          v145 = (3 * v117 + 1) >> 1;
          v146 = 8 * v145 + 8;
          if ( 8 * v117 + 8 >= v146 || v117 >= v145 )
          {
            v240 = (char **)__cxa_allocate_exception(0x28u);
            v250 = &v265;
            v241 = v240;
            sub_24ABB0(&v265, "Overflow encountered when expanding vector");
            v242 = v250;
            v243 = v250;
            *v241 = (char *)off_1C63128;
            sub_2333C0(v241 + 1, v243);
            sub_233E40((__int64)v242);
            __cxa_throw(v241, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v147 = (unsigned int *)sub_186B300(v116 - 1, v146);
          v148 = v147[1];
          v116 = v147 + 2;
          *v147 = v145;
          v96[11] = v147 + 2;
          LODWORD(v147) = v148;
          v120 = &v116[v148];
          v119 = (_DWORD)v147 + 1;
        }
        else
        {
          v118 = v117;
          v119 = v117 + 1;
          v120 = &v116[v118];
        }
      }
      else
      {
        v210 = (_QWORD *)sub_186B270(0x18u);
        *v210 = 2;
        v119 = 1;
        v116 = v210 + 1;
        v96[11] = v116;
        v120 = v116;
      }
      *v120 = v109;
      *((_DWORD *)v116 - 1) = v119;
      v97 = a1[136];
    }
    v121 = (_QWORD *)*a1;
    v122 = sub_1336AB0(v96, v92);
    v123 = sub_1336AB0(v121[369], v122);
    v124 = v123;
    if ( v123 )
      ++*(_DWORD *)(v123 + 8);
    v125 = (void (__fastcall ***)(void *))v121[369];
    if ( v125 )
    {
      v21 = (*((_DWORD *)v125 + 2))-- == 1;
      if ( v21 )
      {
        (**v125)(v125);
        sub_186B220(v125);
      }
    }
    v121[369] = v124;
  }
  v126 = v255;
  if ( v255 )
  {
    v127 = v256;
    v21 = (*(_DWORD *)(v255 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v127, v126);
  }
  return v8;
}

