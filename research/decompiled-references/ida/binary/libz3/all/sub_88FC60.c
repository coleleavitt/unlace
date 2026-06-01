void __fastcall sub_88FC60(_QWORD *a1, int a2, __int64 *a3)
{
  char **v3; // r12
  char **v4; // r12
  char **v5; // r12
  char **v6; // r12
  char **v7; // r12
  char **exception; // r12
  __int64 v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  _DWORD *v15; // rax
  __int64 v16; // r12
  _QWORD *v17; // rax
  _DWORD *v18; // rbx
  unsigned int v19; // ecx
  size_t v20; // rsi
  unsigned int v21; // r15d
  unsigned int *v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r15
  std::chrono::_V2::steady_clock *v26; // rax
  unsigned int v27; // edi
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r12d
  _QWORD *v32; // rax
  __int64 *v33; // rbx
  int v34; // eax
  __int64 v35; // r12
  __int64 v36; // rcx
  __int64 v37; // r13
  int v38; // eax
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // r13
  unsigned int v43; // eax
  unsigned int v44; // edx
  size_t v45; // rsi
  unsigned int *v46; // rax
  char *v47; // rax
  bool v48; // zf
  std::chrono::_V2::steady_clock *v49; // rdi
  _QWORD *v50; // r15
  _DWORD *v51; // rbx
  _WORD *v52; // r13
  __int64 v53; // rdi
  _DWORD *v54; // rax
  unsigned int v55; // eax
  __int64 v56; // rdx
  _DWORD *v57; // rsi
  int v58; // eax
  _QWORD *v59; // rdx
  unsigned int v60; // r12d
  unsigned __int64 *v61; // r13
  char *v62; // rcx
  int v63; // esi
  __int64 v64; // rax
  char *v65; // rdi
  char *v66; // rax
  char *v67; // rcx
  _QWORD *v68; // rdx
  char *v69; // rcx
  unsigned int v70; // r13d
  __int64 v71; // rax
  __int64 v72; // r12
  __int64 v73; // rax
  _QWORD *v74; // rax
  int *v75; // rax
  int v76; // esi
  _DWORD *v77; // rax
  char *v79; // rax
  char *v80; // r12
  __int64 v81; // rdi
  char *v82; // r14
  unsigned __int64 v83; // r12
  __int64 *v84; // r14
  __int64 v85; // rsi
  unsigned int v86; // eax
  unsigned int v87; // ecx
  size_t v88; // rsi
  unsigned int v89; // r13d
  unsigned int *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  unsigned int v94; // r12d
  unsigned int v95; // eax
  __int64 v96; // rcx
  unsigned int v97; // r9d
  __int64 v98; // rsi
  unsigned int v99; // r8d
  __int64 v100; // rdi
  _QWORD *v101; // r8
  __int64 v102; // rax
  __int64 v103; // rdx
  int *v104; // rax
  int *v105; // rdx
  int v106; // ecx
  __int64 v107; // r13
  _QWORD *v108; // rdx
  unsigned int v109; // eax
  __int64 v110; // rcx
  int v111; // eax
  __int64 *v112; // rcx
  _QWORD *v113; // rax
  unsigned int v114; // edx
  size_t v115; // rsi
  unsigned int v116; // r12d
  unsigned int *v117; // rax
  unsigned int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // r12
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  unsigned int v125; // edi
  unsigned int v126; // ecx
  unsigned int *v127; // rax
  __int64 v128; // rcx
  unsigned __int64 *v129; // rax
  unsigned __int64 *v130; // rcx
  __int64 v131; // rsi
  char *v132; // rax
  char *v133; // r9
  unsigned __int64 *v134; // r8
  unsigned __int64 *v135; // rax
  unsigned __int64 v136; // rdx
  __int64 v137; // rax
  unsigned __int64 *v138; // rsi
  unsigned __int64 *v139; // rax
  unsigned __int64 v140; // rdx
  char *v141; // r8
  char *v142; // rsi
  _DWORD *v143; // r12
  char *v144; // rbx
  __int64 v145; // rdi
  __int64 v146; // rax
  __int64 v147; // rax
  _DWORD *v148; // rdx
  __int64 v149; // rsi
  _DWORD *v150; // rdx
  int v151; // ecx
  __int64 v152; // r12
  _DWORD *v153; // rax
  _DWORD *v154; // r13
  unsigned int v155; // r12d
  __int64 v156; // r10
  _QWORD *v157; // r11
  _QWORD *v158; // r12
  __int64 v159; // rax
  __int64 v160; // r13
  __int64 v161; // rdx
  __int64 i; // r8
  __int64 v163; // rax
  __int64 v164; // rsi
  unsigned int v165; // r13d
  __int64 v166; // rdx
  __int64 v167; // r12
  __int64 v168; // rsi
  __int64 v169; // r12
  __int64 *v170; // r15
  __int64 v171; // rsi
  __int64 v172; // rdi
  __int64 v173; // rcx
  __int64 v174; // r15
  __int64 v175; // rdi
  void (__fastcall ***v176)(_QWORD); // rcx
  void *v177; // rdi
  __int64 *v178; // r14
  __int64 *v179; // r12
  __int64 v180; // rsi
  unsigned int v181; // r12d
  unsigned int v182; // ecx
  unsigned int *v183; // rax
  __int64 v184; // rax
  _QWORD *v185; // rax
  _QWORD *v186; // rdx
  __int64 v187; // r13
  _DWORD *v188; // rax
  __int64 v189; // r12
  __int64 v190; // r15
  int v191; // eax
  int v192; // r8d
  int v193; // r9d
  __int64 v194; // rax
  void *v195; // r14
  int v196; // [rsp-8h] [rbp-108h]
  int v197; // [rsp+0h] [rbp-100h]
  int v198; // [rsp+0h] [rbp-100h]
  unsigned __int64 *v199; // [rsp+0h] [rbp-100h]
  int v200; // [rsp+8h] [rbp-F8h]
  int v201; // [rsp+8h] [rbp-F8h]
  unsigned __int64 *v202; // [rsp+8h] [rbp-F8h]
  int v203; // [rsp+8h] [rbp-F8h]
  int v204; // [rsp+10h] [rbp-F0h]
  int v205; // [rsp+10h] [rbp-F0h]
  char *v206; // [rsp+10h] [rbp-F0h]
  __int64 v207; // [rsp+10h] [rbp-F0h]
  __int64 v208; // [rsp+10h] [rbp-F0h]
  __int64 v209; // [rsp+10h] [rbp-F0h]
  int v210; // [rsp+18h] [rbp-E8h]
  int v211; // [rsp+18h] [rbp-E8h]
  __int64 v212; // [rsp+18h] [rbp-E8h]
  int v213; // [rsp+20h] [rbp-E0h]
  int v214; // [rsp+20h] [rbp-E0h]
  int v215; // [rsp+28h] [rbp-D8h]
  char v216; // [rsp+28h] [rbp-D8h]
  int v217; // [rsp+28h] [rbp-D8h]
  __int64 v218; // [rsp+28h] [rbp-D8h]
  int v219; // [rsp+30h] [rbp-D0h]
  int v220; // [rsp+30h] [rbp-D0h]
  int v221; // [rsp+38h] [rbp-C8h]
  int v222; // [rsp+38h] [rbp-C8h]
  int v223; // [rsp+38h] [rbp-C8h]
  unsigned int v224; // [rsp+3Ch] [rbp-C4h]
  int v225; // [rsp+40h] [rbp-C0h]
  _QWORD *v226; // [rsp+40h] [rbp-C0h]
  int v227; // [rsp+40h] [rbp-C0h]
  void *v228; // [rsp+48h] [rbp-B8h]
  void *v229; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v230; // [rsp+48h] [rbp-B8h]
  unsigned int v231; // [rsp+48h] [rbp-B8h]
  int v232; // [rsp+50h] [rbp-B0h]
  int v233; // [rsp+58h] [rbp-A8h]
  _QWORD *v234; // [rsp+58h] [rbp-A8h]
  int v235; // [rsp+60h] [rbp-A0h]
  unsigned int v236; // [rsp+60h] [rbp-A0h]
  void *ptr; // [rsp+68h] [rbp-98h]
  void *ptra; // [rsp+68h] [rbp-98h]
  char *ptrb; // [rsp+68h] [rbp-98h]
  int v240; // [rsp+70h] [rbp-90h]
  unsigned int v241; // [rsp+70h] [rbp-90h]
  int v242[2]; // [rsp+70h] [rbp-90h]
  int v243; // [rsp+70h] [rbp-90h]
  int v244[2]; // [rsp+70h] [rbp-90h]
  _QWORD *v245; // [rsp+70h] [rbp-90h]
  __int64 v246; // [rsp+70h] [rbp-90h]
  _QWORD *v247; // [rsp+70h] [rbp-90h]
  int v248; // [rsp+78h] [rbp-88h]
  int v249; // [rsp+78h] [rbp-88h]
  int v250[2]; // [rsp+78h] [rbp-88h]
  unsigned int v251; // [rsp+78h] [rbp-88h]
  size_t v252; // [rsp+78h] [rbp-88h]
  int v253[2]; // [rsp+78h] [rbp-88h]
  unsigned int v254; // [rsp+78h] [rbp-88h]
  int v255[2]; // [rsp+78h] [rbp-88h]
  int v256[2]; // [rsp+78h] [rbp-88h]
  int v257[2]; // [rsp+78h] [rbp-88h]
  __int64 *v258; // [rsp+80h] [rbp-80h]
  std::chrono::_V2::steady_clock **v259; // [rsp+80h] [rbp-80h]
  int v260[2]; // [rsp+88h] [rbp-78h]
  unsigned int v261; // [rsp+88h] [rbp-78h]
  unsigned int v262; // [rsp+88h] [rbp-78h]
  int v263; // [rsp+88h] [rbp-78h]
  unsigned int v264; // [rsp+88h] [rbp-78h]
  int v265[2]; // [rsp+90h] [rbp-70h] BYREF
  int v266[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v267; // [rsp+A0h] [rbp-60h]
  void *v268; // [rsp+A8h] [rbp-58h]
  void *v269; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v270; // [rsp+B8h] [rbp-48h]

  v258 = a3;
  v225 = a2;
  v10 = sub_15D1F10(*(_QWORD *)*a3);
  v14 = *((_DWORD *)a1 + 32);
  *(_QWORD *)v260 = v10;
  v15 = *(_DWORD **)(v10 + 24);
  if ( v15 )
  {
    if ( *v15 == v14 )
    {
      v12 = v15[1];
      if ( !v12 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[1] + 192LL))(a1[1]);
        v29 = *(_QWORD *)(*(_QWORD *)v260 + 24LL);
        if ( v29 && (v30 = *(_QWORD *)(v29 + 8)) != 0 )
          v31 = *(_DWORD *)(v30 - 4) - 1;
        else
          v31 = -1;
        ptra = (void *)*a1;
        v267 = *a1;
        v32 = (_QWORD *)sub_186B270(0x18u);
        v32[1] = 0;
        v33 = v32 + 1;
        *v32 = 0x100000002LL;
        if ( v31 )
        {
          v34 = v31;
          v35 = 0;
          v242[0] = 16 * v34;
          do
          {
            v36 = v35 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v260 + 24LL) + 8LL);
            if ( *(_BYTE *)(v36 + 8) != 1 )
              sub_A8ADA((__int64)"std::get: wrong index for variant");
            v37 = *a1;
            *(_QWORD *)v250 = *(_QWORD *)v36;
            sub_180C5A0(v265, "index");
            v38 = sub_15E3D10(
                    v37,
                    (int)v265,
                    (int)&qword_18D6CD0,
                    0,
                    0,
                    v250[0],
                    1,
                    v196,
                    v197,
                    v200,
                    v204,
                    v210,
                    v213,
                    v215,
                    v219,
                    v221,
                    v225,
                    (int)v228,
                    v232,
                    v233,
                    v235,
                    (int)ptra,
                    v242[0],
                    v250[0],
                    (int)v258,
                    v260[0],
                    v265[0],
                    v266[0],
                    v267,
                    v268,
                    (int)v269,
                    v270);
            v41 = sub_15DC610(v37, v38, 0, 0, v39, v40, v198, v201, v205, v211, v214, v216, v220, v222, v227, v229);
            v42 = v41;
            if ( v41 )
              ++*(_DWORD *)(v41 + 8);
            v43 = *((_DWORD *)v33 - 1);
            if ( v43 == *((_DWORD *)v33 - 2) )
            {
              v44 = (3 * v43 + 1) >> 1;
              v45 = 8 * v44 + 8;
              if ( 8 * v43 + 8 >= (unsigned int)v45 || v43 >= v44 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v269, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v269);
                sub_233E40((__int64)&v269);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v251 = (3 * v43 + 1) >> 1;
              v46 = (unsigned int *)sub_186B300(v33 - 1, v45);
              v33 = (__int64 *)(v46 + 2);
              *v46 = v251;
              v43 = v46[1];
            }
            v35 += 16;
            v33[v43] = v42;
            *((_DWORD *)v33 - 1) = v43 + 1;
          }
          while ( v35 != *(_QWORD *)v242 );
        }
        v165 = 0;
        v166 = *v258;
        if ( *v258 )
        {
          while ( v165 < *(_DWORD *)(v166 - 4) )
          {
            v167 = *(_QWORD *)(v166 + 24LL * v165);
            if ( v167 )
              ++*(_DWORD *)(v167 + 8);
            v168 = *v33;
            if ( *v33 )
            {
              v48 = (*(_DWORD *)(v168 + 8))-- == 1;
              if ( v48 )
                sub_15D7BC0(ptra, v168);
            }
            *v33 = v167;
            v169 = sub_15DCAD0(*a1, (int)v33, 0);
            v166 = *v258;
            v170 = (__int64 *)(*v258 + 24LL * v165);
            if ( v169 )
              ++*(_DWORD *)(v169 + 8);
            v171 = *v170;
            if ( *v170 )
            {
              v172 = v170[1];
              v48 = (*(_DWORD *)(v171 + 8))-- == 1;
              if ( v48 )
              {
                sub_15D7BC0(v172, v171);
                v166 = *v258;
              }
            }
            *v170 = v169;
            ++v165;
            if ( !v166 )
              goto LABEL_225;
          }
          v264 = 0;
          do
          {
            if ( v264 >= *(_DWORD *)(v166 - 4) )
              break;
            v187 = *(_QWORD *)(v166 + 24LL * v264);
            *(_QWORD *)v265 = sub_15D1F10(v187);
            v188 = *(_DWORD **)(*(_QWORD *)v265 + 24LL);
            if ( !v188 || *((_DWORD *)a1 + 32) != *v188 || v188[1] )
            {
              v189 = *a1;
              v190 = a1[1];
              *(_QWORD *)v257 = *(_QWORD *)(*a1 + 840LL);
              sub_180C5A0(&v269, "Relevant!");
              v191 = sub_15E3510(v189, &v269, 1, v265, *(_QWORD *)v257, 0);
              *(_QWORD *)v266 = v187;
              v194 = sub_15DC610(
                       v189,
                       v191,
                       1,
                       (int)v266,
                       v192,
                       v193,
                       v197,
                       v200,
                       v204,
                       v210,
                       v213,
                       v215,
                       v219,
                       v221,
                       v225,
                       v228);
              sub_E5EBF0(v190, v194);
            }
            ++v264;
            v166 = *v258;
          }
          while ( *v258 );
        }
LABEL_225:
        if ( (unsigned int)sub_E60CB0((std::ios_base *)a1[1], 0, 0) == -1 )
        {
          sub_1872CE0("");
          sub_1873130(114, 169);
        }
        v173 = a1[1];
        v269 = nullptr;
        v174 = v173;
        (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v173 + 32LL))(v173, &v269);
        if ( v269 )
        {
          v175 = *(_QWORD *)(v174 + 56);
          if ( v175 )
            (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v175 + 32LL))(v175, &v269);
        }
        sub_88FC60(a1, &v269, v258);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[1] + 200LL))(a1[1], 1);
        v176 = (void (__fastcall ***)(_QWORD))v269;
        v177 = v269;
        if ( v269 )
        {
          v263 = *((_DWORD *)v269 + 4);
          *((_DWORD *)v269 + 4) = v263 - 1;
          if ( v263 == 1 )
          {
            v195 = v176;
            (**v176)(v177);
            sub_186B220(v195);
          }
        }
        v178 = v33;
        v179 = &v33[*((unsigned int *)v33 - 1)];
        if ( v33 < v179 )
        {
          do
          {
            while ( 1 )
            {
              v180 = *v178;
              if ( *v178 )
              {
                v48 = (*(_DWORD *)(v180 + 8))-- == 1;
                if ( v48 )
                  break;
              }
              if ( ++v178 >= v179 )
                goto LABEL_238;
            }
            sub_15D7BC0(ptra, v180);
            ++v178;
          }
          while ( v178 < v179 );
        }
LABEL_238:
        sub_186B220(v33 - 1);
        return;
      }
    }
  }
  if ( !(unsigned __int8)sub_ADA940(
                           *a1,
                           v260[0],
                           v14,
                           v11,
                           v12,
                           v13,
                           v197,
                           v200,
                           v204,
                           v210,
                           v213,
                           v215,
                           v219,
                           v221,
                           a2,
                           (int)v228,
                           v232,
                           v233,
                           v235,
                           (__int64)ptr,
                           v240,
                           v248,
                           v258,
                           v260[0],
                           v265[0],
                           *(void **)v266) )
  {
    if ( *v259 )
    {
      if ( *((_DWORD *)*v259 - 1) )
      {
        v16 = 0;
        v17 = (_QWORD *)sub_186B270(0x10u);
        v261 = 1;
        *v17 = 2;
        v18 = v17 + 1;
        v249 = 0;
        v241 = 0;
LABEL_10:
        while ( 1 )
        {
          v23 = *(v18 - 2);
          if ( v23 >= v261 )
            break;
          v19 = (3 * v23 + 1) >> 1;
          v20 = 4 * v19 + 8;
          v21 = v19;
          if ( 4 * v23 + 8 >= (unsigned int)v20 || v23 >= v19 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v269, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, &v269);
            sub_233E40((__int64)&v269);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (unsigned int *)sub_186B300(v18 - 2, v20);
          *v22 = v21;
          v18 = v22 + 2;
        }
        *(v18 - 1) = v261;
        v24 = 4LL * v261;
        v25 = 4LL * v241;
        if ( v25 != v24 )
          memset(&v18[(unsigned __int64)v25 / 4], 0, v24 - v25);
        v26 = *v259;
        while ( 1 )
        {
          v27 = v249 + 1;
          v28 = 1 << v249++;
          v18[v16] |= v28;
          if ( !v26 || v27 >= *((_DWORD *)v26 - 1) )
            break;
          v16 = v27 >> 5;
          v241 = *(v18 - 1);
          if ( (unsigned int)v16 >= v241 )
          {
            v261 = v16 + 1;
            goto LABEL_10;
          }
        }
      }
      else
      {
        v18 = nullptr;
      }
      v269 = v18;
      sub_88F150((__int64)a1, (_DWORD **)&v269, v259);
      if ( v18 )
        sub_186B220(v18 - 2);
    }
    else
    {
      v269 = nullptr;
      sub_88F150((__int64)a1, (_DWORD **)&v269, v259);
    }
    return;
  }
  v212 = *a1;
  v267 = *a1;
  v47 = (char *)sub_186B270((size_t)&qword_80);
  v48 = *((_BYTE *)a1 + 192) == 0;
  ptrb = v47;
  *(_OWORD *)v47 = 0;
  *((_OWORD *)v47 + 1) = 0;
  *((_OWORD *)v47 + 2) = 0;
  *((_OWORD *)v47 + 3) = 0;
  *((_OWORD *)v47 + 4) = 0;
  *((_OWORD *)v47 + 5) = 0;
  *((_OWORD *)v47 + 6) = 0;
  *((_OWORD *)v47 + 7) = 0;
  if ( v48 )
  {
    v122 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)&qword_80);
    *((_BYTE *)a1 + 192) = 1;
    a1[22] = v122;
  }
  if ( !byte_1C7EBF0 )
  {
    v121 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)&qword_80);
    byte_1C7EBF0 = 1;
    *(_QWORD *)&xmmword_1C7EBE0 = v121;
  }
  *(_QWORD *)v266 = 0;
  sub_1862300(v266, "produce_models", 0);
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)a1[1] + 88LL))(a1[1], v266);
  v49 = *v259;
  if ( !*v259 )
  {
    v234 = nullptr;
    v50 = nullptr;
    v51 = nullptr;
    v224 = 8;
LABEL_79:
    if ( *((_BYTE *)a1 + 192) )
      goto LABEL_135;
    goto LABEL_80;
  }
  v217 = 0;
  v50 = nullptr;
  v51 = nullptr;
  v223 = 0;
  v224 = 8;
  v234 = nullptr;
  v262 = 0;
  do
  {
    while ( 1 )
    {
      if ( v262 >= *((_DWORD *)v49 - 1) )
        goto LABEL_79;
      sub_1374250(&v269, *v226, *((_QWORD *)v49 + 3 * v262));
      v52 = v269;
      v269 = v50;
      if ( v50 )
      {
        v53 = v270;
        v48 = (*((_DWORD *)v50 + 2))-- == 1;
        if ( v48 )
          sub_15D7BC0(v53, v50);
      }
      v50 = v52;
      if ( !v52[2] )
      {
        while ( 1 )
        {
          v54 = *(_DWORD **)(v50[2] + 24LL);
          if ( !v54 )
            goto LABEL_49;
          if ( *v54 )
            goto LABEL_49;
          if ( v54[1] != 4 )
            goto LABEL_49;
          v147 = v50[4];
          if ( *(_WORD *)(v147 + 4) )
            goto LABEL_49;
          v148 = *(_DWORD **)(*(_QWORD *)(v147 + 16) + 24LL);
          if ( !v148 )
            goto LABEL_49;
          if ( *v148 )
            goto LABEL_49;
          if ( v148[1] != 2 )
            goto LABEL_49;
          if ( *(_DWORD *)(v147 + 24) != 2 )
            goto LABEL_49;
          v149 = *(_QWORD *)(v147 + 32);
          if ( *(_WORD *)(v149 + 4) )
            goto LABEL_49;
          v150 = *(_DWORD **)(*(_QWORD *)(v149 + 16) + 24LL);
          if ( !v150 )
            goto LABEL_49;
          v151 = *((_DWORD *)a1 + 32);
          if ( v151 != *v150 )
            goto LABEL_49;
          if ( v150[1] != 13 )
            goto LABEL_49;
          v152 = *(_QWORD *)(v147 + 40);
          if ( *(_WORD *)(v152 + 4) )
            goto LABEL_49;
          v153 = *(_DWORD **)(*(_QWORD *)(v152 + 16) + 24LL);
          if ( !v153 || v151 != *v153 || v153[1] != 13 )
            goto LABEL_49;
          v154 = (_DWORD *)v50[5];
          if ( v149 != v152 )
            break;
LABEL_251:
          if ( v154 )
            ++v154[2];
          v48 = (*((_DWORD *)v50 + 2))-- == 1;
          if ( v48 )
            sub_15D7BC0(v212, v50);
          v50 = v154;
LABEL_256:
          if ( *((_WORD *)v50 + 2) )
            goto LABEL_49;
        }
        *(_QWORD *)v256 = v50[6];
        v246 = sub_1684260(a1 + 16, v149);
        sub_1684260(a1 + 16, v152);
        v155 = *(_DWORD *)(*v226 + 56LL);
        v247 = sub_88F000(*(_QWORD **)(*v226 + 48LL), v155, v246);
        v158 = sub_88F000(v157, v155, v156);
        if ( v247 )
        {
          v247 = (_QWORD *)v247[1];
          if ( !v158 )
            goto LABEL_197;
        }
        else if ( !v158 )
        {
          goto LABEL_251;
        }
        v158 = (_QWORD *)v158[1];
LABEL_197:
        if ( v247 != v158 )
        {
          v159 = v247[2];
          if ( v159 )
          {
            v160 = 0;
            v231 = *(_DWORD *)(v159 - 4);
            while ( (unsigned int)v160 < v231 )
            {
              v161 = 0;
              for ( i = *(_QWORD *)(v247[2] + 8 * v160);
                    (unsigned int)v161 < *((_DWORD *)v247 + 2);
                    v161 = (unsigned int)(v203 + 1) )
              {
                v203 = v161;
                v207 = i;
                if ( !(unsigned __int8)sub_15D26C0(*a1, *(_QWORD *)(i + 8LL * (unsigned int)v161 + 16)) )
                  goto LABEL_49;
                i = v207;
              }
              v208 = i;
              v163 = sub_1347AE0(v158, i + 16, v161);
              if ( v163 )
              {
                v164 = *(_QWORD *)(v208 + 8);
                v209 = v163;
                if ( v164 != *(_QWORD *)(v163 + 8)
                  && (unsigned __int8)sub_15D26C0(*a1, v164)
                  && (unsigned __int8)sub_15D26C0(*a1, *(_QWORD *)(v209 + 8)) )
                {
                  if ( *(_QWORD *)v256 )
                    ++*(_DWORD *)(*(_QWORD *)v256 + 8LL);
                  v48 = (*((_DWORD *)v50 + 2))-- == 1;
                  if ( v48 )
                    sub_15D7BC0(v212, v50);
                  v50 = *(_QWORD **)v256;
                  goto LABEL_256;
                }
              }
              ++v160;
            }
          }
          goto LABEL_49;
        }
        goto LABEL_251;
      }
LABEL_49:
      if ( !(unsigned __int8)sub_15D26C0(*a1, v50) )
      {
        v86 = v262 >> 5;
        if ( v51 )
        {
          v236 = *(v51 - 1);
          if ( v86 < v236 )
          {
LABEL_107:
            v51[v262 >> 5] |= 1 << v262;
            v49 = *v259;
            goto LABEL_108;
          }
          v254 = v86 + 1;
        }
        else
        {
          v254 = v86 + 1;
          v113 = (_QWORD *)sub_186B270(0x10u);
          *v113 = 2;
          v51 = v113 + 1;
          v236 = 0;
        }
        while ( 1 )
        {
          v118 = *(v51 - 2);
          if ( v118 >= v254 )
            break;
          v114 = (3 * v118 + 1) >> 1;
          v115 = 4 * v114 + 8;
          v116 = v114;
          if ( 4 * v118 + 8 >= (unsigned int)v115 || v118 >= v114 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v269, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, &v269);
            sub_233E40((__int64)&v269);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v117 = (unsigned int *)sub_186B300(v51 - 2, v115);
          *v117 = v116;
          v51 = v117 + 2;
        }
        *(v51 - 1) = v254;
        v119 = 4LL * v254;
        v120 = 4LL * v236;
        if ( v120 != v119 )
          memset(&v51[(unsigned __int64)v120 / 4], 0, v119 - v120);
        goto LABEL_107;
      }
      ++*((_DWORD *)v50 + 2);
      if ( v234 )
      {
        v55 = *((_DWORD *)v234 - 1);
        if ( v55 == *((_DWORD *)v234 - 2) )
        {
          v87 = (3 * v55 + 1) >> 1;
          v88 = 8 * v87 + 8;
          v89 = v87;
          if ( 8 * v55 + 8 >= (unsigned int)v88 || v55 >= v87 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v269, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, &v269);
            sub_233E40((__int64)&v269);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v90 = (unsigned int *)sub_186B300(v234 - 1, v88);
          v91 = v90[1];
          v57 = v90 + 2;
          *v90 = v89;
          v234 = v57;
          LODWORD(v90) = v91;
          v59 = &v57[2 * v91];
          v58 = (_DWORD)v90 + 1;
        }
        else
        {
          v56 = v55;
          v57 = v234;
          v58 = v55 + 1;
          v59 = &v234[v56];
        }
      }
      else
      {
        v185 = (_QWORD *)sub_186B270(0x18u);
        v59 = v185 + 1;
        *v185 = 2;
        v58 = 1;
        v234 = v59;
        v57 = v59;
      }
      *v59 = v50;
      *(v57 - 1) = v58;
      v60 = 2 * v224;
      if ( 3 * v224 >= 4 * (v223 + v217) )
      {
        v243 = v224 - 1;
        v252 = 16LL * v224;
        v61 = (unsigned __int64 *)&ptrb[v252];
        v62 = ptrb;
        goto LABEL_55;
      }
      v252 = 16LL * v60;
      v129 = (unsigned __int64 *)sub_186B270(v252);
      v230 = v129;
      v130 = (unsigned __int64 *)((char *)v129 + v252);
      if ( v60 )
      {
        if ( (v252 & 0x10) != 0 )
        {
          *(_OWORD *)v129 = 0;
          v129 += 2;
          v131 = 16LL * v60;
          if ( v129 != v130 )
            goto LABEL_142;
        }
        else
        {
          v131 = 16LL * v60;
          do
          {
LABEL_142:
            *(_OWORD *)v129 = 0;
            v129 += 4;
            *((_OWORD *)v129 - 1) = 0;
          }
          while ( v129 != v130 );
          v252 = v131;
        }
        v61 = v130;
        v243 = v60 - 1;
        v218 = v224;
        v132 = ptrb;
        v133 = &ptrb[16 * v224];
LABEL_145:
        v134 = (unsigned __int64 *)(v132 + 8);
        while ( 2 )
        {
          v136 = *(v134 - 1);
          if ( v136 <= 1 )
            goto LABEL_146;
          v137 = 16LL * (*(_DWORD *)(v136 + 12) & (unsigned int)v243);
          v138 = &v230[(unsigned __int64)v137 / 8];
          if ( v252 == v137 )
          {
LABEL_165:
            v139 = v230;
            if ( v230 == v138 )
            {
LABEL_211:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            while ( *v139 )
            {
              v139 += 2;
              if ( v138 == v139 )
                goto LABEL_211;
            }
            *v139 = v136;
            if ( v134 == v139 + 1 )
              goto LABEL_146;
            v140 = v139[1];
            if ( v140 )
            {
LABEL_155:
              v199 = v134;
              v202 = v139;
              v206 = v133;
              sub_186B220((void *)(v140 - 8));
              v134 = v199;
              v139 = v202;
              v133 = v206;
            }
LABEL_156:
            v139[1] = 0;
            v139[1] = *v134;
            v135 = v134 + 2;
            v141 = (char *)(v134 + 1);
            *((_QWORD *)v141 - 1) = 0;
            if ( v133 == v141 )
              goto LABEL_157;
          }
          else
          {
            v139 = &v230[(unsigned __int64)v137 / 8];
            while ( *v139 )
            {
              v139 += 2;
              if ( v61 == v139 )
                goto LABEL_165;
            }
            *v139 = v136;
            if ( v134 != v139 + 1 )
            {
              v140 = v139[1];
              if ( v140 )
                goto LABEL_155;
              goto LABEL_156;
            }
LABEL_146:
            v135 = v134 + 2;
            if ( v133 == (char *)(v134 + 1) )
              goto LABEL_157;
          }
          v134 = v135;
          continue;
        }
      }
      v243 = -1;
      v61 = v129;
      v218 = v224;
      v132 = ptrb;
      v133 = &ptrb[16 * v224];
      if ( ptrb != v133 )
        goto LABEL_145;
LABEL_157:
      if ( ptrb )
      {
        v142 = &ptrb[16 * v218];
        if ( v224 )
        {
          v143 = v51;
          v144 = ptrb;
          do
          {
            while ( 1 )
            {
              v145 = *((_QWORD *)v144 + 1);
              if ( !v145 )
                break;
              v144 += 16;
              sub_186B220((void *)(v145 - 8));
              if ( v144 == v142 )
                goto LABEL_162;
            }
            v144 += 16;
          }
          while ( v144 != v142 );
LABEL_162:
          v51 = v143;
          v60 = 2 * v224;
        }
        sub_186B220(ptrb);
      }
      v224 = v60;
      v217 = 0;
      ptrb = (char *)v230;
      v62 = (char *)v230;
LABEL_55:
      v63 = *((_DWORD *)v50 + 3);
      v64 = 16LL * (v63 & (unsigned int)v243);
      v65 = &v62[v64];
      if ( v64 == v252 )
      {
        *(_QWORD *)v253 = 0;
LABEL_64:
        v66 = ptrb;
        if ( v65 == ptrb )
        {
LABEL_72:
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
        v69 = *(char **)v253;
        while ( 1 )
        {
          while ( 1 )
          {
            v68 = *(_QWORD **)v66;
            if ( *(_QWORD *)v66 <= 1u )
              break;
            if ( *((_DWORD *)v68 + 3) == v63 && v68 == v50 )
              goto LABEL_243;
            v66 += 16;
            if ( v65 == v66 )
              goto LABEL_72;
          }
          if ( !v68 )
            break;
          v69 = v66;
          v66 += 16;
          if ( v65 == v66 )
            goto LABEL_72;
        }
        *(_QWORD *)v255 = v69;
        if ( v69 )
        {
          --v217;
          v66 = v69;
        }
        else
        {
          *(_QWORD *)v255 = v66;
        }
        *(_QWORD *)v66 = v50;
        v146 = *((_QWORD *)v66 + 1);
        if ( !v146 )
          goto LABEL_178;
LABEL_177:
        sub_186B220((void *)(v146 - 8));
        v68 = nullptr;
        goto LABEL_178;
      }
      v66 = &v62[v64];
      v67 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v68 = *(_QWORD **)v66;
          if ( *(_QWORD *)v66 <= 1u )
            break;
          if ( *((_DWORD *)v68 + 3) == v63 && v68 == v50 )
          {
LABEL_243:
            v68 = *((_QWORD **)v66 + 1);
            *(_QWORD *)v255 = v66;
            goto LABEL_73;
          }
          v66 += 16;
          if ( v61 == (unsigned __int64 *)v66 )
            goto LABEL_63;
        }
        if ( !v68 )
          break;
        v67 = v66;
        v66 += 16;
        if ( v61 == (unsigned __int64 *)v66 )
        {
LABEL_63:
          *(_QWORD *)v253 = v67;
          goto LABEL_64;
        }
      }
      *(_QWORD *)v255 = v67;
      if ( v67 )
      {
        --v217;
        v66 = v67;
      }
      else
      {
        *(_QWORD *)v255 = v66;
      }
      *(_QWORD *)v66 = v50;
      v146 = *((_QWORD *)v66 + 1);
      if ( v146 )
        goto LABEL_177;
LABEL_178:
      *(_QWORD *)(*(_QWORD *)v255 + 8LL) = 0;
      ++v223;
LABEL_73:
      v70 = 0;
      if ( v68 )
        break;
LABEL_77:
      v74 = (_QWORD *)sub_186B270(0x10u);
      v68 = v74 + 1;
      *v74 = 2;
      *(_QWORD *)(*(_QWORD *)v255 + 8LL) = v74 + 1;
      v75 = (int *)(v74 + 1);
LABEL_78:
      v76 = v262++;
      *v75 = v76;
      ++*((_DWORD *)v68 - 1);
      v49 = *v259;
      if ( !*v259 )
        goto LABEL_79;
    }
    while ( 1 )
    {
      v71 = *((unsigned int *)v68 - 1);
      if ( v70 >= (unsigned int)v71 )
      {
        if ( (_DWORD)v71 == *((_DWORD *)v68 - 2) )
        {
          v181 = (unsigned int)(3 * v71 + 1) >> 1;
          v182 = 4 * v181 + 8;
          if ( 4 * (int)v71 + 8 >= v182 || (unsigned int)v71 >= v181 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v269, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v269);
            sub_233E40((__int64)&v269);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v183 = (unsigned int *)sub_186B300(v68 - 1, v182);
          v68 = v183 + 2;
          *v183 = v181;
          v184 = v183[1];
          *(_QWORD *)(*(_QWORD *)v255 + 8LL) = v68;
          v75 = (int *)v68 + v184;
        }
        else
        {
          v75 = (int *)v68 + v71;
        }
        goto LABEL_78;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[1] + 192LL))(a1[1]);
      v72 = a1[1];
      *(_QWORD *)v244 = *a1;
      sub_15E1B70(*a1);
      v73 = sub_15E1A70(v244[0]);
      sub_E5EBF0(v72, v73);
      LODWORD(v72) = sub_E60CB0((std::ios_base *)a1[1], 0, 0);
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[1] + 200LL))(a1[1], 1);
      v68 = *(_QWORD **)(*(_QWORD *)v255 + 8LL);
      if ( (_DWORD)v72 == -1 )
        break;
      ++v70;
      if ( !v68 )
        goto LABEL_77;
    }
    v49 = *v259;
    v92 = *((unsigned int *)v68 + v70);
    v93 = a1[11];
    v94 = *((_DWORD *)*v259 + 6 * v92 + 4);
    v95 = *((_DWORD *)*v259 + 6 * v262 + 4);
    do
    {
      v96 = v95;
      v97 = v95;
      v95 = *(_DWORD *)(v93 + 4LL * v95);
    }
    while ( v97 != v95 );
    do
    {
      v98 = v94;
      v99 = v94;
      v94 = *(_DWORD *)(v93 + 4LL * v94);
    }
    while ( v99 != v94 );
    if ( v97 != v94 )
    {
      v100 = a1[12];
      if ( *(_DWORD *)(v100 + 4 * v98) >= *(_DWORD *)(v100 + 4 * v96) )
      {
        v94 = v95;
        v95 = v99;
      }
      v101 = (_QWORD *)a1[10];
      *(_DWORD *)(v93 + 4LL * v94) = v95;
      v102 = 4LL * v95;
      v245 = v101;
      *(_DWORD *)(v100 + v102) += *(_DWORD *)(v100 + 4LL * v94);
      v103 = a1[13];
      v104 = (int *)(v103 + v102);
      v105 = (int *)(v103 + 4LL * v94);
      v106 = *v105;
      *v105 = *v104;
      *v104 = v106;
      v107 = sub_180C100(v101 + 2, 24);
      *(_QWORD *)v107 = off_1C4F500;
      v108 = (_QWORD *)*v245;
      *(_DWORD *)(v107 + 16) = v94;
      *(_QWORD *)(v107 + 8) = a1 + 9;
      if ( v108 )
      {
        v109 = *((_DWORD *)v108 - 1);
        if ( v109 == *((_DWORD *)v108 - 2) )
        {
          v125 = (3 * v109 + 1) >> 1;
          v126 = 8 * v125 + 8;
          if ( 8 * v109 + 8 >= v126 || v109 >= v125 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v269, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, &v269);
            sub_233E40((__int64)&v269);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v127 = (unsigned int *)sub_186B300(v108 - 1, v126);
          v128 = v127[1];
          v108 = v127 + 2;
          *v245 = v127 + 2;
          *v127 = v125;
          LODWORD(v127) = v128;
          v112 = &v108[v128];
          v111 = (_DWORD)v127 + 1;
        }
        else
        {
          v110 = v109;
          v111 = v109 + 1;
          v112 = &v108[v110];
        }
      }
      else
      {
        v186 = (_QWORD *)sub_186B270(0x18u);
        *v186 = 2;
        v111 = 1;
        v108 = v186 + 1;
        *v245 = v108;
        v112 = v108;
      }
      *v112 = v107;
      *((_DWORD *)v108 - 1) = v111;
      v49 = *v259;
    }
LABEL_108:
    ++v262;
  }
  while ( v49 );
  if ( *((_BYTE *)a1 + 192) )
  {
LABEL_135:
    v124 = std::chrono::_V2::steady_clock::now(v49);
    *((_BYTE *)a1 + 192) = 0;
    a1[23] += v124 - a1[22];
  }
LABEL_80:
  if ( byte_1C7EBF0 )
  {
    v123 = std::chrono::_V2::steady_clock::now(v49);
    byte_1C7EBF0 = 0;
    *((_QWORD *)&xmmword_1C7EBE0 + 1) += v123 - xmmword_1C7EBE0;
  }
  sub_1862300(v266, "produce_models", 1);
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)a1[1] + 88LL))(a1[1], v266);
  if ( v51 )
  {
    v77 = v51;
    while ( v77 != &v51[*(v51 - 1)] )
    {
      if ( *v77++ )
      {
        v269 = v51;
        sub_88F150((__int64)a1, (_DWORD **)&v269, v259);
        break;
      }
    }
  }
  sub_18572D0(v266);
  if ( ptrb )
  {
    if ( v224 )
    {
      v79 = ptrb;
      v80 = &ptrb[16 * v224];
      do
      {
        while ( 1 )
        {
          v81 = *((_QWORD *)v79 + 1);
          if ( !v81 )
            break;
          v82 = v79 + 16;
          sub_186B220((void *)(v81 - 8));
          v79 = v82;
          if ( v82 == v80 )
            goto LABEL_91;
        }
        v79 += 16;
      }
      while ( v79 != v80 );
    }
LABEL_91:
    sub_186B220(ptrb);
  }
  if ( v50 )
  {
    v48 = (*((_DWORD *)v50 + 2))-- == 1;
    if ( v48 )
      sub_15D7BC0(v212, v50);
  }
  if ( v234 )
  {
    v83 = (unsigned __int64)&v234[*((unsigned int *)v234 - 1)];
    if ( (unsigned __int64)v234 < v83 )
    {
      v84 = v234;
      do
      {
        while ( 1 )
        {
          v85 = *v84;
          if ( *v84 )
          {
            v48 = (*(_DWORD *)(v85 + 8))-- == 1;
            if ( v48 )
              break;
          }
          if ( (unsigned __int64)++v84 >= v83 )
            goto LABEL_102;
        }
        sub_15D7BC0(v212, v85);
        ++v84;
      }
      while ( (unsigned __int64)v84 < v83 );
    }
LABEL_102:
    sub_186B220(v234 - 1);
  }
  if ( v51 )
    sub_186B220(v51 - 2);
}

