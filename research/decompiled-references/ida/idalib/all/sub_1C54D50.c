__int64 __fastcall sub_1C54D50(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        double a7,
        const void *a8,
        size_t a9,
        unsigned int a10,
        __int128 a11,
        char *a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        int a16)
{
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  char v20; // dl
  unsigned __int64 v21; // r12
  unsigned int v22; // eax
  __int64 v23; // r14
  bool v24; // r13
  unsigned __int64 v25; // rax
  unsigned int v26; // r13d
  unsigned __int64 v27; // r14
  __int64 result; // rax
  __int64 v29; // r14
  unsigned int v30; // eax
  unsigned __int64 v31; // r15
  unsigned __int8 *v32; // r15
  unsigned __int8 *v33; // rdx
  __int64 v34; // rax
  unsigned __int8 *v35; // r14
  unsigned __int8 *v36; // rdx
  __int64 v37; // rax
  char v38; // r15
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r12
  unsigned __int8 *v41; // r14
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int8 *v45; // r12
  __int64 v46; // rsi
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r15
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r15
  __int64 v60; // r12
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r14
  __int64 v69; // rax
  _QWORD *v70; // rax
  _BOOL8 v71; // rdx
  __int64 v72; // r15
  unsigned __int8 *v73; // r14
  _BYTE *v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // r15
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  unsigned __int8 *v84; // r15
  _BYTE *v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rbp
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // r12
  __int64 v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // rsi
  __int64 v96; // rdi
  unsigned __int64 v97; // r8
  unsigned __int64 v98; // rdx
  __int64 v99; // rdx
  int v100; // eax
  __int64 v101; // rax
  __int64 v102; // r15
  __int64 v103; // rdx
  __int64 v104; // r15
  unsigned __int64 v105; // rbp
  __int64 v106; // rbx
  void *v107; // rdi
  __int64 v108; // rdx
  int v109; // eax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rax
  bool v114; // r14
  unsigned __int64 v115; // r13
  __int64 v116; // rbx
  __int64 v117; // rbp
  void *v118; // rdi
  __int64 v119; // rdx
  int v120; // eax
  __int64 v121; // rax
  __int64 v122; // r15
  __int64 v123; // rdx
  __int64 v124; // r15
  unsigned __int64 v125; // rbp
  __int64 v126; // rbx
  void *v127; // rdi
  __int64 v128; // rdx
  int v129; // eax
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rsi
  __int64 v133; // rdx
  unsigned __int64 v134; // r12
  __int64 v135; // rbx
  void *v136; // rdi
  __int64 v137; // rcx
  int v138; // eax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rax
  unsigned __int64 v143; // r13
  __int64 v144; // rbx
  __int64 v145; // r14
  __int64 v146; // rbp
  void *v147; // rdi
  __int64 v148; // rcx
  int v149; // eax
  __int64 v150; // rax
  __int64 v151; // r13
  __int64 v152; // rcx
  __int64 v153; // r13
  _BOOL8 v154; // r14
  unsigned __int64 v155; // rbp
  __int64 v156; // rbx
  void *v157; // rdi
  __int64 v158; // rdx
  int v159; // eax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rax
  unsigned __int64 v164; // r12
  __int64 v165; // rbx
  __int64 v166; // rbp
  void *v167; // rdi
  __int64 v168; // rdx
  int v169; // eax
  __int64 v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rax
  __int64 v173; // rdx
  unsigned __int64 v174; // rbp
  __int64 v175; // rbx
  void *v176; // rdi
  unsigned __int8 *v177; // rax
  __int64 v178; // rax
  unsigned __int8 *v179; // rax
  __int128 v180; // [rsp-60h] [rbp-1B8h]
  __int128 v181; // [rsp-40h] [rbp-198h]
  unsigned __int64 v182; // [rsp+0h] [rbp-158h]
  __int64 v183; // [rsp+0h] [rbp-158h]
  unsigned __int64 v186; // [rsp+28h] [rbp-130h]
  __int64 v187; // [rsp+28h] [rbp-130h]
  __int64 v188; // [rsp+28h] [rbp-130h]
  __int64 v189; // [rsp+28h] [rbp-130h]
  bool v190; // [rsp+28h] [rbp-130h]
  unsigned __int8 *v191; // [rsp+28h] [rbp-130h]
  __int64 v192; // [rsp+28h] [rbp-130h]
  __int64 v193; // [rsp+28h] [rbp-130h]
  __int128 v196; // [rsp+40h] [rbp-118h]
  __int64 v197; // [rsp+58h] [rbp-100h]
  int v198; // [rsp+58h] [rbp-100h]
  __int64 v199; // [rsp+58h] [rbp-100h]
  __int64 v200; // [rsp+58h] [rbp-100h]
  __int64 v201; // [rsp+58h] [rbp-100h]
  __int64 v202; // [rsp+58h] [rbp-100h]
  __int64 v203; // [rsp+60h] [rbp-F8h]
  __int64 v204; // [rsp+68h] [rbp-F0h]
  __int64 v205; // [rsp+78h] [rbp-E0h] BYREF
  unsigned __int64 v206; // [rsp+80h] [rbp-D8h] BYREF
  int v207; // [rsp+88h] [rbp-D0h]
  _QWORD v208[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v209; // [rsp+A0h] [rbp-B8h]
  unsigned __int8 *v210; // [rsp+B0h] [rbp-A8h]
  __int64 v211; // [rsp+B8h] [rbp-A0h]
  char v212; // [rsp+108h] [rbp-50h]
  unsigned int v213; // [rsp+110h] [rbp-48h]
  char v214; // [rsp+114h] [rbp-44h]

  *(_QWORD *)&v196 = a4;
  *((_QWORD *)&v196 + 1) = a5;
  sub_15F2480(a1);
  v18 = a10 + a6;
  v182 = v18;
  if ( !(a10 + a6) )
    goto LABEL_49;
  v19 = 0;
  v20 = 0;
  do
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)(a14 + 8 * v19);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 10 )
        break;
      if ( ((*(_BYTE *)(v21 + 1) >> 3) & 7) == 1 )
      {
        v29 = sub_BFEF90(*(_QWORD *)(a14 + 8 * v19));
        v30 = sub_EEB7E0(v21, v18, a7);
        sub_168B9F0((__int64)v208, (__int64 *)(a1 + 8), v30, 0x2Bu, 0);
        v31 = sub_EEC8C0(v21, a1 + 8, a7);
        v186 = HIDWORD(v31);
        if ( v212 )
        {
          v45 = v210;
          if ( v210 )
          {
            v46 = *((unsigned int *)v210 + 106);
            v47 = *((unsigned int *)v210 + 107);
            v48 = v46 + 1;
          }
          else
          {
            v128 = v211;
            v129 = *(_DWORD *)(v211 + 14976);
            if ( v129 )
            {
              v130 = (unsigned int)(v129 - 1);
              *(_DWORD *)(v211 + 14976) = v130;
              v45 = *(unsigned __int8 **)(v128 + 8 * v130 + 14848);
              v131 = *((unsigned int *)v45 + 134);
              v132 = *((_QWORD *)v45 + 66);
              *v45 = 0;
              *((_DWORD *)v45 + 106) = 0;
              v133 = v132 + (v131 << 6);
              if ( v132 == v133 )
              {
                v48 = 1;
                v46 = 0;
              }
              else
              {
                v198 = v31;
                v31 = (unsigned __int64)v45;
                v134 = v19;
                v135 = v133;
                do
                {
                  while ( 1 )
                  {
                    v135 -= 64;
                    v136 = *(void **)(v135 + 24);
                    if ( v136 == (void *)(v135 + 40) )
                      break;
                    operator delete(v136);
                    if ( v132 == v135 )
                      goto LABEL_83;
                  }
                }
                while ( v132 != v135 );
LABEL_83:
                v19 = v134;
                v45 = (unsigned __int8 *)v31;
                LODWORD(v31) = v198;
                v46 = *((unsigned int *)v45 + 106);
                v48 = v46 + 1;
              }
              *((_DWORD *)v45 + 134) = 0;
              v47 = *((unsigned int *)v45 + 107);
            }
            else
            {
              v47 = 8;
              v46 = 0;
              v45 = (unsigned __int8 *)operator new(0x3A0u);
              *v45 = 0;
              *((_QWORD *)v45 + 12) = v45 + 112;
              *((_QWORD *)v45 + 16) = v45 + 144;
              *((_QWORD *)v45 + 20) = v45 + 176;
              *((_QWORD *)v45 + 24) = v45 + 208;
              *((_QWORD *)v45 + 28) = v45 + 240;
              *((_QWORD *)v45 + 32) = v45 + 272;
              *((_QWORD *)v45 + 36) = v45 + 304;
              *((_QWORD *)v45 + 40) = v45 + 336;
              *((_QWORD *)v45 + 44) = v45 + 368;
              *((_QWORD *)v45 + 48) = v45 + 400;
              *((_QWORD *)v45 + 52) = v45 + 432;
              *((_QWORD *)v45 + 13) = 0;
              v45[112] = 0;
              *((_QWORD *)v45 + 17) = 0;
              v45[144] = 0;
              *((_QWORD *)v45 + 21) = 0;
              v45[176] = 0;
              *((_QWORD *)v45 + 25) = 0;
              v45[208] = 0;
              *((_QWORD *)v45 + 29) = 0;
              v45[240] = 0;
              *((_QWORD *)v45 + 33) = 0;
              v45[272] = 0;
              *((_QWORD *)v45 + 37) = 0;
              v45[304] = 0;
              *((_QWORD *)v45 + 41) = 0;
              v45[336] = 0;
              *((_QWORD *)v45 + 45) = 0;
              v45[368] = 0;
              *((_QWORD *)v45 + 49) = 0;
              v45[400] = 0;
              *((_QWORD *)v45 + 53) = 0x800000000LL;
              *((_QWORD *)v45 + 67) = 0x600000000LL;
              *((_QWORD *)v45 + 66) = v45 + 544;
              v48 = 1;
            }
            v210 = v45;
          }
          v206 = __PAIR64__(v186, v31);
          LOBYTE(v207) = 1;
          if ( v47 < v48 )
          {
            sub_2237220(v45 + 416, v45 + 432, v48, 12);
            v46 = *((unsigned int *)v45 + 106);
          }
          v49 = 3 * v46;
        }
        else
        {
          if ( !v214 )
          {
LABEL_15:
            sub_15F7200(v208);
            v18 = a1 + 8;
            sub_168B9F0((__int64)v208, (__int64 *)(a1 + 8), *(_DWORD *)(v29 + 24), 0x16B0u, 0);
            sub_15F7200(v208);
            v20 = 1;
            goto LABEL_4;
          }
          v92 = sub_168B9E0(v208);
          v93 = v209;
          if ( v209 )
            v93 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v209 + 32LL))(v209);
          v205 = v93;
          v94 = sub_1587BC0(v92, &v205, v88, v89, v90, v91);
          v95 = *v94 + 32LL * v213;
          v45 = *(unsigned __int8 **)(v95 + 8);
          if ( v45 )
          {
            v96 = *((unsigned int *)v45 + 106);
            v97 = *((unsigned int *)v45 + 107);
            v98 = v96 + 1;
          }
          else
          {
            v168 = *(_QWORD *)(v95 + 16);
            v169 = *(_DWORD *)(v168 + 14976);
            if ( v169 )
            {
              v170 = (unsigned int)(v169 - 1);
              *(_DWORD *)(v168 + 14976) = v170;
              v45 = *(unsigned __int8 **)(v168 + 8 * v170 + 14848);
              v171 = *((unsigned int *)v45 + 134);
              v172 = *((_QWORD *)v45 + 66);
              *v45 = 0;
              *((_DWORD *)v45 + 106) = 0;
              v202 = v172;
              v173 = v172 + (v171 << 6);
              if ( v172 == v173 )
              {
                v98 = 1;
                v96 = 0;
              }
              else
              {
                v204 = a14;
                v174 = v19;
                v175 = v173;
                do
                {
                  while ( 1 )
                  {
                    v175 -= 64;
                    v176 = *(void **)(v175 + 24);
                    if ( v176 == (void *)(v175 + 40) )
                      break;
                    operator delete(v176);
                    if ( v202 == v175 )
                      goto LABEL_111;
                  }
                }
                while ( v202 != v175 );
LABEL_111:
                v19 = v174;
                v96 = *((unsigned int *)v45 + 106);
                a14 = v204;
                v98 = v96 + 1;
              }
              *((_DWORD *)v45 + 134) = 0;
              v97 = *((unsigned int *)v45 + 107);
            }
            else
            {
              v179 = (unsigned __int8 *)operator new(0x3A0u);
              v97 = 8;
              v96 = 0;
              v45 = v179;
              *v179 = 0;
              *((_QWORD *)v179 + 12) = v179 + 112;
              *((_QWORD *)v179 + 16) = v179 + 144;
              *((_QWORD *)v179 + 20) = v179 + 176;
              *((_QWORD *)v179 + 24) = v179 + 208;
              *((_QWORD *)v179 + 28) = v179 + 240;
              *((_QWORD *)v179 + 32) = v179 + 272;
              *((_QWORD *)v179 + 36) = v179 + 304;
              *((_QWORD *)v179 + 40) = v179 + 336;
              *((_QWORD *)v179 + 44) = v179 + 368;
              *((_QWORD *)v179 + 48) = v179 + 400;
              *((_QWORD *)v179 + 52) = v179 + 432;
              *((_QWORD *)v179 + 13) = 0;
              v179[112] = 0;
              *((_QWORD *)v179 + 17) = 0;
              v179[144] = 0;
              *((_QWORD *)v179 + 21) = 0;
              v179[176] = 0;
              *((_QWORD *)v179 + 25) = 0;
              v179[208] = 0;
              *((_QWORD *)v179 + 29) = 0;
              v179[240] = 0;
              *((_QWORD *)v179 + 33) = 0;
              v179[272] = 0;
              *((_QWORD *)v179 + 37) = 0;
              v179[304] = 0;
              *((_QWORD *)v179 + 41) = 0;
              v179[336] = 0;
              *((_QWORD *)v179 + 45) = 0;
              v179[368] = 0;
              *((_QWORD *)v179 + 49) = 0;
              v179[400] = 0;
              *((_QWORD *)v179 + 53) = 0x800000000LL;
              *((_QWORD *)v179 + 67) = 0x600000000LL;
              *((_QWORD *)v179 + 66) = v179 + 544;
              v98 = 1;
            }
            *(_QWORD *)(v95 + 8) = v45;
          }
          v206 = v31;
          LOBYTE(v207) = 1;
          if ( v97 < v98 )
          {
            sub_2237220(v45 + 416, v45 + 432, v98, 12);
            v96 = *((unsigned int *)v45 + 106);
          }
          v49 = 3 * v96;
        }
        v50 = *((_QWORD *)v45 + 52) + 4 * v49;
        *(_QWORD *)v50 = v206;
        *(_DWORD *)(v50 + 8) = v207;
        ++*((_DWORD *)v45 + 106);
        goto LABEL_15;
      }
LABEL_4:
      if ( ++v19 == v182 )
        goto LABEL_11;
    }
    v22 = sub_EEB7E0(*(_QWORD *)(a14 + 8 * v19), v18, a7);
    v18 = a1 + 8;
    sub_168B9F0((__int64)v208, (__int64 *)(a1 + 8), v22, 3u, 0);
    v23 = *(_QWORD *)(v21 + 8);
    v24 = a6 > v19;
    if ( v212 )
    {
      v32 = v210;
      if ( !v210 )
      {
        v108 = v211;
        v109 = *(_DWORD *)(v211 + 14976);
        if ( v109 )
        {
          v110 = (unsigned int)(v109 - 1);
          *(_DWORD *)(v211 + 14976) = v110;
          v32 = *(unsigned __int8 **)(v108 + 8 * v110 + 14848);
          v111 = *((unsigned int *)v32 + 134);
          *v32 = 0;
          v112 = *((_QWORD *)v32 + 66);
          *((_DWORD *)v32 + 106) = 0;
          v113 = v112 + (v111 << 6);
          if ( v112 != v113 )
          {
            v188 = v23;
            v114 = a6 > v19;
            v115 = v19;
            v116 = v113;
            v197 = a14;
            v117 = v112;
            do
            {
              while ( 1 )
              {
                v116 -= 64;
                v118 = *(void **)(v116 + 24);
                if ( v118 == (void *)(v116 + 40) )
                  break;
                operator delete(v118);
                if ( v117 == v116 )
                  goto LABEL_69;
              }
            }
            while ( v117 != v116 );
LABEL_69:
            v19 = v115;
            a14 = v197;
            v24 = v114;
            v23 = v188;
          }
          *((_DWORD *)v32 + 134) = 0;
        }
        else
        {
          v32 = (unsigned __int8 *)operator new(0x3A0u);
          *v32 = 0;
          *((_QWORD *)v32 + 12) = v32 + 112;
          *((_QWORD *)v32 + 16) = v32 + 144;
          *((_QWORD *)v32 + 20) = v32 + 176;
          *((_QWORD *)v32 + 24) = v32 + 208;
          *((_QWORD *)v32 + 28) = v32 + 240;
          *((_QWORD *)v32 + 32) = v32 + 272;
          *((_QWORD *)v32 + 36) = v32 + 304;
          *((_QWORD *)v32 + 40) = v32 + 336;
          *((_QWORD *)v32 + 44) = v32 + 368;
          *((_QWORD *)v32 + 48) = v32 + 400;
          *((_QWORD *)v32 + 52) = v32 + 432;
          *((_QWORD *)v32 + 13) = 0;
          v32[112] = 0;
          *((_QWORD *)v32 + 17) = 0;
          v32[144] = 0;
          *((_QWORD *)v32 + 21) = 0;
          v32[176] = 0;
          *((_QWORD *)v32 + 25) = 0;
          v32[208] = 0;
          *((_QWORD *)v32 + 29) = 0;
          v32[240] = 0;
          *((_QWORD *)v32 + 33) = 0;
          v32[272] = 0;
          *((_QWORD *)v32 + 37) = 0;
          v32[304] = 0;
          *((_QWORD *)v32 + 41) = 0;
          v32[336] = 0;
          *((_QWORD *)v32 + 45) = 0;
          v32[368] = 0;
          *((_QWORD *)v32 + 49) = 0;
          v32[400] = 0;
          *((_QWORD *)v32 + 53) = 0x800000000LL;
          *((_QWORD *)v32 + 66) = v32 + 544;
          *((_QWORD *)v32 + 67) = 0x600000000LL;
        }
        v210 = v32;
      }
      v32[*v32 + 1] = 8;
      v33 = v210;
      v34 = *v210;
      *v210 = v34 + 1;
      *(_QWORD *)&v33[8 * v34 + 16] = v23;
    }
    else
    {
      if ( !v214 )
        goto LABEL_8;
      v80 = sub_168B9E0(v208);
      v81 = v209;
      if ( v209 )
        v81 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v209 + 32LL))(v209);
      v18 = (unsigned __int64)&v206;
      v206 = v81;
      v82 = sub_1587BC0(v80, (__int64 *)&v206, v76, v77, v78, v79);
      v83 = *v82 + 32LL * v213;
      v84 = *(unsigned __int8 **)(v83 + 8);
      if ( !v84 )
      {
        v137 = *(_QWORD *)(v83 + 16);
        v138 = *(_DWORD *)(v137 + 14976);
        if ( v138 )
        {
          v139 = (unsigned int)(v138 - 1);
          *(_DWORD *)(v137 + 14976) = v139;
          v84 = *(unsigned __int8 **)(v137 + 8 * v139 + 14848);
          v140 = *((unsigned int *)v84 + 134);
          *v84 = 0;
          v141 = *((_QWORD *)v84 + 66);
          *((_DWORD *)v84 + 106) = 0;
          v142 = v141 + (v140 << 6);
          if ( v141 != v142 )
          {
            v190 = a6 > v19;
            v143 = v19;
            v144 = v142;
            v199 = v23;
            v145 = v83;
            v203 = a14;
            v146 = v141;
            do
            {
              while ( 1 )
              {
                v144 -= 64;
                v147 = *(void **)(v144 + 24);
                if ( v147 == (void *)(v144 + 40) )
                  break;
                operator delete(v147);
                if ( v146 == v144 )
                  goto LABEL_90;
              }
            }
            while ( v146 != v144 );
LABEL_90:
            v19 = v143;
            v83 = v145;
            v24 = v190;
            v23 = v199;
            a14 = v203;
          }
          *((_DWORD *)v84 + 134) = 0;
        }
        else
        {
          v193 = v83;
          v84 = (unsigned __int8 *)operator new(0x3A0u);
          *v84 = 0;
          *((_QWORD *)v84 + 12) = v84 + 112;
          *((_QWORD *)v84 + 16) = v84 + 144;
          *((_QWORD *)v84 + 20) = v84 + 176;
          *((_QWORD *)v84 + 24) = v84 + 208;
          *((_QWORD *)v84 + 28) = v84 + 240;
          *((_QWORD *)v84 + 32) = v84 + 272;
          *((_QWORD *)v84 + 36) = v84 + 304;
          *((_QWORD *)v84 + 40) = v84 + 336;
          *((_QWORD *)v84 + 44) = v84 + 368;
          *((_QWORD *)v84 + 48) = v84 + 400;
          *((_QWORD *)v84 + 52) = v84 + 432;
          *((_QWORD *)v84 + 13) = 0;
          v84[112] = 0;
          *((_QWORD *)v84 + 17) = 0;
          v84[144] = 0;
          *((_QWORD *)v84 + 21) = 0;
          v84[176] = 0;
          *((_QWORD *)v84 + 25) = 0;
          v84[208] = 0;
          *((_QWORD *)v84 + 29) = 0;
          v84[240] = 0;
          *((_QWORD *)v84 + 33) = 0;
          v84[272] = 0;
          *((_QWORD *)v84 + 37) = 0;
          v84[304] = 0;
          *((_QWORD *)v84 + 41) = 0;
          v84[336] = 0;
          *((_QWORD *)v84 + 45) = 0;
          v84[368] = 0;
          *((_QWORD *)v84 + 49) = 0;
          v84[400] = 0;
          *((_QWORD *)v84 + 53) = 0x800000000LL;
          v83 = v193;
          *((_QWORD *)v84 + 66) = v84 + 544;
          *((_QWORD *)v84 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v83 + 8) = v84;
      }
      v84[*v84 + 1] = 8;
      v85 = *(_BYTE **)(v83 + 8);
      v86 = (unsigned __int8)*v85;
      *v85 = v86 + 1;
      *(_QWORD *)&v85[8 * v86 + 16] = v23;
    }
    if ( v212 )
    {
      v35 = v210;
      if ( !v210 )
      {
        v119 = v211;
        v120 = *(_DWORD *)(v211 + 14976);
        if ( v120 )
        {
          v121 = (unsigned int)(v120 - 1);
          *(_DWORD *)(v211 + 14976) = v121;
          v35 = *(unsigned __int8 **)(v119 + 8 * v121 + 14848);
          v122 = *((unsigned int *)v35 + 134);
          *v35 = 0;
          v123 = *((_QWORD *)v35 + 66);
          *((_DWORD *)v35 + 106) = 0;
          v124 = v123 + (v122 << 6);
          if ( v123 != v124 )
          {
            v189 = a14;
            v125 = v19;
            v126 = v123;
            do
            {
              while ( 1 )
              {
                v124 -= 64;
                v127 = *(void **)(v124 + 24);
                if ( v127 == (void *)(v124 + 40) )
                  break;
                operator delete(v127);
                if ( v126 == v124 )
                  goto LABEL_76;
              }
            }
            while ( v126 != v124 );
LABEL_76:
            v19 = v125;
            a14 = v189;
          }
          *((_DWORD *)v35 + 134) = 0;
        }
        else
        {
          v35 = (unsigned __int8 *)operator new(0x3A0u);
          *v35 = 0;
          *((_QWORD *)v35 + 12) = v35 + 112;
          *((_QWORD *)v35 + 16) = v35 + 144;
          *((_QWORD *)v35 + 20) = v35 + 176;
          *((_QWORD *)v35 + 24) = v35 + 208;
          *((_QWORD *)v35 + 28) = v35 + 240;
          *((_QWORD *)v35 + 32) = v35 + 272;
          *((_QWORD *)v35 + 36) = v35 + 304;
          *((_QWORD *)v35 + 40) = v35 + 336;
          *((_QWORD *)v35 + 44) = v35 + 368;
          *((_QWORD *)v35 + 48) = v35 + 400;
          *((_QWORD *)v35 + 52) = v35 + 432;
          *((_QWORD *)v35 + 13) = 0;
          v35[112] = 0;
          *((_QWORD *)v35 + 17) = 0;
          v35[144] = 0;
          *((_QWORD *)v35 + 21) = 0;
          v35[176] = 0;
          *((_QWORD *)v35 + 25) = 0;
          v35[208] = 0;
          *((_QWORD *)v35 + 29) = 0;
          v35[240] = 0;
          *((_QWORD *)v35 + 33) = 0;
          v35[272] = 0;
          *((_QWORD *)v35 + 37) = 0;
          v35[304] = 0;
          *((_QWORD *)v35 + 41) = 0;
          v35[336] = 0;
          *((_QWORD *)v35 + 45) = 0;
          v35[368] = 0;
          *((_QWORD *)v35 + 49) = 0;
          v35[400] = 0;
          *((_QWORD *)v35 + 53) = 0x800000000LL;
          *((_QWORD *)v35 + 66) = v35 + 544;
          *((_QWORD *)v35 + 67) = 0x600000000LL;
        }
        v210 = v35;
      }
      v35[*v35 + 1] = 2;
      v36 = v210;
      v37 = *v210;
      *v210 = v37 + 1;
      *(_QWORD *)&v36[8 * v37 + 16] = v24;
      v38 = v212;
    }
    else
    {
      if ( !v214 )
      {
LABEL_8:
        v25 = sub_EEC8C0(v21, v18, a7);
        v26 = v25;
        v27 = HIDWORD(v25);
LABEL_9:
        if ( v214 )
        {
          v55 = sub_168B9E0(v208);
          v56 = v209;
          if ( v209 )
            v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v209 + 32LL))(v209);
          v205 = v56;
          v57 = sub_1587BC0(v55, &v205, v51, v52, v53, v54);
          v58 = *v57 + 32LL * v213;
          v59 = *(_QWORD *)(v58 + 8);
          v60 = v58;
          if ( v59 )
          {
            v61 = *(unsigned int *)(v59 + 424);
            v18 = *(unsigned int *)(v59 + 428);
            v62 = v61 + 1;
          }
          else
          {
            v158 = *(_QWORD *)(v58 + 16);
            v159 = *(_DWORD *)(v158 + 14976);
            if ( v159 )
            {
              v160 = (unsigned int)(v159 - 1);
              *(_DWORD *)(v158 + 14976) = v160;
              v59 = *(_QWORD *)(v158 + 8 * v160 + 14848);
              v161 = *(unsigned int *)(v59 + 536);
              *(_BYTE *)v59 = 0;
              v162 = *(_QWORD *)(v59 + 528);
              *(_DWORD *)(v59 + 424) = 0;
              v163 = v162 + (v161 << 6);
              if ( v162 == v163 )
              {
                v62 = 1;
                v61 = 0;
              }
              else
              {
                v192 = v60;
                v164 = v19;
                v165 = v163;
                v201 = a14;
                v166 = v162;
                do
                {
                  while ( 1 )
                  {
                    v165 -= 64;
                    v167 = *(void **)(v165 + 24);
                    if ( v167 == (void *)(v165 + 40) )
                      break;
                    operator delete(v167);
                    if ( v166 == v165 )
                      goto LABEL_104;
                  }
                }
                while ( v166 != v165 );
LABEL_104:
                v61 = *(unsigned int *)(v59 + 424);
                v19 = v164;
                a14 = v201;
                v60 = v192;
                v62 = v61 + 1;
              }
              *(_DWORD *)(v59 + 536) = 0;
              v18 = *(unsigned int *)(v59 + 428);
            }
            else
            {
              v178 = operator new(0x3A0u);
              v18 = 8;
              v62 = 1;
              v59 = v178;
              *(_BYTE *)v178 = 0;
              *(_QWORD *)(v178 + 96) = v178 + 112;
              *(_QWORD *)(v178 + 128) = v178 + 144;
              *(_QWORD *)(v178 + 160) = v178 + 176;
              *(_QWORD *)(v178 + 192) = v178 + 208;
              *(_QWORD *)(v178 + 224) = v178 + 240;
              *(_QWORD *)(v178 + 256) = v178 + 272;
              *(_QWORD *)(v178 + 288) = v178 + 304;
              *(_QWORD *)(v178 + 320) = v178 + 336;
              *(_QWORD *)(v178 + 352) = v178 + 368;
              *(_QWORD *)(v178 + 384) = v178 + 400;
              *(_QWORD *)(v178 + 416) = v178 + 432;
              *(_QWORD *)(v178 + 104) = 0;
              *(_BYTE *)(v178 + 112) = 0;
              *(_QWORD *)(v178 + 136) = 0;
              *(_BYTE *)(v178 + 144) = 0;
              *(_QWORD *)(v178 + 168) = 0;
              *(_BYTE *)(v178 + 176) = 0;
              *(_QWORD *)(v178 + 200) = 0;
              *(_BYTE *)(v178 + 208) = 0;
              *(_QWORD *)(v178 + 232) = 0;
              *(_BYTE *)(v178 + 240) = 0;
              *(_QWORD *)(v178 + 264) = 0;
              *(_BYTE *)(v178 + 272) = 0;
              *(_QWORD *)(v178 + 296) = 0;
              *(_BYTE *)(v178 + 304) = 0;
              *(_QWORD *)(v178 + 328) = 0;
              *(_BYTE *)(v178 + 336) = 0;
              *(_QWORD *)(v178 + 360) = 0;
              *(_BYTE *)(v178 + 368) = 0;
              *(_QWORD *)(v178 + 392) = 0;
              *(_BYTE *)(v178 + 400) = 0;
              *(_QWORD *)(v178 + 424) = 0x800000000LL;
              *(_QWORD *)(v178 + 528) = v178 + 544;
              *(_QWORD *)(v178 + 536) = 0x600000000LL;
              v61 = 0;
            }
            *(_QWORD *)(v60 + 8) = v59;
          }
          v206 = __PAIR64__(v27, v26);
          LOBYTE(v207) = 1;
          if ( v18 < v62 )
          {
            v18 = v59 + 432;
            sub_2237220(v59 + 416, v59 + 432, v62, 12);
            v61 = *(unsigned int *)(v59 + 424);
          }
          v63 = *(_QWORD *)(v59 + 416) + 12 * v61;
          *(_QWORD *)v63 = v206;
          *(_DWORD *)(v63 + 8) = v207;
          ++*(_DWORD *)(v59 + 424);
        }
        goto LABEL_10;
      }
      v68 = sub_168B9E0(v208);
      v69 = v209;
      if ( v209 )
        v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v209 + 32LL))(v209);
      v206 = v69;
      v70 = sub_1587BC0(v68, (__int64 *)&v206, v64, v65, v66, v67);
      v71 = v24;
      v72 = *v70 + 32LL * v213;
      v73 = *(unsigned __int8 **)(v72 + 8);
      if ( !v73 )
      {
        v148 = *(_QWORD *)(v72 + 16);
        v149 = *(_DWORD *)(v148 + 14976);
        if ( v149 )
        {
          v150 = (unsigned int)(v149 - 1);
          *(_DWORD *)(v148 + 14976) = v150;
          v73 = *(unsigned __int8 **)(v148 + 8 * v150 + 14848);
          v151 = *((unsigned int *)v73 + 134);
          *v73 = 0;
          v152 = *((_QWORD *)v73 + 66);
          *((_DWORD *)v73 + 106) = 0;
          v153 = v152 + (v151 << 6);
          if ( v152 != v153 )
          {
            v191 = v73;
            v154 = v71;
            v200 = a14;
            v155 = v19;
            v156 = v152;
            do
            {
              while ( 1 )
              {
                v153 -= 64;
                v157 = *(void **)(v153 + 24);
                if ( v157 == (void *)(v153 + 40) )
                  break;
                operator delete(v157);
                if ( v156 == v153 )
                  goto LABEL_97;
              }
            }
            while ( v156 != v153 );
LABEL_97:
            v19 = v155;
            v71 = v154;
            a14 = v200;
            v73 = v191;
          }
          *((_DWORD *)v73 + 134) = 0;
        }
        else
        {
          v73 = (unsigned __int8 *)operator new(0x3A0u);
          *v73 = 0;
          *((_QWORD *)v73 + 12) = v73 + 112;
          *((_QWORD *)v73 + 16) = v73 + 144;
          *((_QWORD *)v73 + 20) = v73 + 176;
          *((_QWORD *)v73 + 24) = v73 + 208;
          *((_QWORD *)v73 + 28) = v73 + 240;
          *((_QWORD *)v73 + 32) = v73 + 272;
          *((_QWORD *)v73 + 36) = v73 + 304;
          *((_QWORD *)v73 + 40) = v73 + 336;
          *((_QWORD *)v73 + 44) = v73 + 368;
          *((_QWORD *)v73 + 48) = v73 + 400;
          *((_QWORD *)v73 + 52) = v73 + 432;
          *((_QWORD *)v73 + 13) = 0;
          v73[112] = 0;
          *((_QWORD *)v73 + 17) = 0;
          v73[144] = 0;
          *((_QWORD *)v73 + 21) = 0;
          v73[176] = 0;
          *((_QWORD *)v73 + 25) = 0;
          v73[208] = 0;
          *((_QWORD *)v73 + 29) = 0;
          v73[240] = 0;
          *((_QWORD *)v73 + 33) = 0;
          v73[272] = 0;
          *((_QWORD *)v73 + 37) = 0;
          v73[304] = 0;
          *((_QWORD *)v73 + 41) = 0;
          v73[336] = 0;
          *((_QWORD *)v73 + 45) = 0;
          v73[368] = 0;
          *((_QWORD *)v73 + 49) = 0;
          v73[400] = 0;
          *((_QWORD *)v73 + 53) = 0x800000000LL;
          v71 = v24;
          *((_QWORD *)v73 + 66) = v73 + 544;
          *((_QWORD *)v73 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v72 + 8) = v73;
      }
      v73[*v73 + 1] = 2;
      v74 = *(_BYTE **)(v72 + 8);
      v75 = (unsigned __int8)*v74;
      v18 = (unsigned int)(v75 + 1);
      *v74 = v75 + 1;
      *(_QWORD *)&v74[8 * v75 + 16] = v71;
      v38 = v212;
    }
    v39 = sub_EEC8C0(v21, v18, a7);
    v26 = v39;
    v40 = HIDWORD(v39);
    LODWORD(v27) = HIDWORD(v39);
    if ( !v38 )
      goto LABEL_9;
    v41 = v210;
    if ( v210 )
    {
      v42 = *((unsigned int *)v210 + 106);
      v18 = *((unsigned int *)v210 + 107);
      v43 = v42 + 1;
    }
    else
    {
      v99 = v211;
      v100 = *(_DWORD *)(v211 + 14976);
      if ( v100 )
      {
        v101 = (unsigned int)(v100 - 1);
        *(_DWORD *)(v211 + 14976) = v101;
        v41 = *(unsigned __int8 **)(v99 + 8 * v101 + 14848);
        v102 = *((unsigned int *)v41 + 134);
        *v41 = 0;
        v103 = *((_QWORD *)v41 + 66);
        *((_DWORD *)v41 + 106) = 0;
        v104 = v103 + (v102 << 6);
        if ( v103 == v104 )
        {
          v43 = 1;
          v42 = 0;
        }
        else
        {
          v187 = a14;
          v105 = v19;
          v106 = v103;
          do
          {
            while ( 1 )
            {
              v104 -= 64;
              v107 = *(void **)(v104 + 24);
              if ( v107 == (void *)(v104 + 40) )
                break;
              operator delete(v107);
              if ( v106 == v104 )
                goto LABEL_62;
            }
          }
          while ( v106 != v104 );
LABEL_62:
          v42 = *((unsigned int *)v41 + 106);
          v19 = v105;
          a14 = v187;
          v43 = v42 + 1;
        }
        *((_DWORD *)v41 + 134) = 0;
        v18 = *((unsigned int *)v41 + 107);
      }
      else
      {
        v177 = (unsigned __int8 *)operator new(0x3A0u);
        v18 = 8;
        v43 = 1;
        v41 = v177;
        *v177 = 0;
        *((_QWORD *)v177 + 12) = v177 + 112;
        *((_QWORD *)v177 + 16) = v177 + 144;
        *((_QWORD *)v177 + 20) = v177 + 176;
        *((_QWORD *)v177 + 24) = v177 + 208;
        *((_QWORD *)v177 + 28) = v177 + 240;
        *((_QWORD *)v177 + 32) = v177 + 272;
        *((_QWORD *)v177 + 36) = v177 + 304;
        *((_QWORD *)v177 + 40) = v177 + 336;
        *((_QWORD *)v177 + 44) = v177 + 368;
        *((_QWORD *)v177 + 48) = v177 + 400;
        *((_QWORD *)v177 + 52) = v177 + 432;
        *((_QWORD *)v177 + 13) = 0;
        v177[112] = 0;
        *((_QWORD *)v177 + 17) = 0;
        v177[144] = 0;
        *((_QWORD *)v177 + 21) = 0;
        v177[176] = 0;
        *((_QWORD *)v177 + 25) = 0;
        v177[208] = 0;
        *((_QWORD *)v177 + 29) = 0;
        v177[240] = 0;
        *((_QWORD *)v177 + 33) = 0;
        v177[272] = 0;
        *((_QWORD *)v177 + 37) = 0;
        v177[304] = 0;
        *((_QWORD *)v177 + 41) = 0;
        v177[336] = 0;
        *((_QWORD *)v177 + 45) = 0;
        v177[368] = 0;
        *((_QWORD *)v177 + 49) = 0;
        v177[400] = 0;
        *((_QWORD *)v177 + 53) = 0x800000000LL;
        *((_QWORD *)v177 + 66) = v177 + 544;
        *((_QWORD *)v177 + 67) = 0x600000000LL;
        v42 = 0;
      }
      v210 = v41;
    }
    v206 = __PAIR64__(v40, v26);
    LOBYTE(v207) = 1;
    if ( v43 > v18 )
    {
      v18 = (unsigned __int64)(v41 + 432);
      sub_2237220(v41 + 416, v41 + 432, v43, 12);
      v42 = *((unsigned int *)v41 + 106);
    }
    v44 = *((_QWORD *)v41 + 52) + 12 * v42;
    *(_QWORD *)v44 = v206;
    *(_DWORD *)(v44 + 8) = v207;
    ++*((_DWORD *)v41 + 106);
LABEL_10:
    ++v19;
    sub_15F7200(v208);
    v20 = 1;
  }
  while ( v19 != v182 );
LABEL_11:
  result = 1;
  if ( !v20 )
  {
LABEL_49:
    v183 = a14;
    v87 = sub_EEE9A0(96, *(_QWORD **)(a1 + 248), 8u);
    *((_QWORD *)&v181 + 1) = a15;
    *(_QWORD *)&v181 = v183;
    *((_QWORD *)&v180 + 1) = a10;
    *(_QWORD *)&v180 = a6;
    sub_EF0970(v87, *(_QWORD **)(a1 + 248), a2, a3, (a10 | a6) != 0, 1, v196, v180, a11, v181, a8, a9, a12, a13, a16);
    return v87;
  }
  return result;
}
