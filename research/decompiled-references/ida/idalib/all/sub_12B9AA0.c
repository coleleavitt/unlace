_BYTE *__fastcall sub_12B9AA0(_QWORD *a1, _BYTE *a2, signed __int64 a3)
{
  _BYTE *result; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r14
  _QWORD *i; // r15
  signed __int64 v9; // r15
  __int64 v10; // r12
  const char **v11; // rbx
  const char *v12; // rbp
  size_t v13; // r14
  const char **v14; // rax
  const char *v15; // r13
  unsigned __int8 *v16; // r13
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  void **v22; // r13
  _BYTE *v23; // rdi
  __int64 v24; // rax
  unsigned __int8 *v25; // r13
  _QWORD *v26; // rdx
  __int64 v27; // rax
  void **v28; // rbp
  unsigned __int64 v29; // rax
  void **v30; // r14
  void **v31; // r13
  void **v32; // rdi
  void **v33; // rdi
  void **v34; // r14
  void **v35; // r13
  const char *v36; // rdi
  _QWORD *v37; // rax
  size_t v38; // rdx
  __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  int v41; // eax
  unsigned __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r14
  const char **v48; // r15
  __int64 v49; // rbx
  void *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r14
  const char **v55; // r15
  __int64 v56; // rbx
  void *v57; // rdi
  unsigned __int8 *v58; // rbp
  _QWORD *v59; // rax
  _QWORD *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  _QWORD *v64; // r12
  _BYTE *v65; // rdi
  __int64 v66; // rax
  unsigned __int8 *v67; // rbp
  _QWORD *v68; // rdx
  __int64 v69; // rax
  void **v70; // rbx
  unsigned __int64 v71; // rax
  void **v72; // r12
  void **v73; // rbp
  void **v74; // rdi
  void **v75; // rdi
  void **v76; // r12
  void **v77; // rbp
  unsigned __int8 *v78; // rbp
  _QWORD *v79; // rax
  _QWORD *v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  void **v84; // r12
  _BYTE *v85; // rdi
  __int64 v86; // rax
  unsigned __int8 *v87; // rbp
  _QWORD *v88; // rdx
  __int64 v89; // rax
  void **v90; // rbx
  unsigned __int64 v91; // rax
  void **v92; // r12
  void **v93; // rbp
  void **v94; // rdi
  void **v95; // rdi
  void **v96; // r12
  void **v97; // rbp
  unsigned __int8 *v98; // rbp
  _QWORD *v99; // rax
  _QWORD *v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  void **v104; // r12
  _BYTE *v105; // rdi
  __int64 v106; // rax
  unsigned __int8 *v107; // rbp
  _QWORD *v108; // rdx
  __int64 v109; // rax
  void **v110; // rbx
  unsigned __int64 v111; // rax
  void **v112; // r12
  void **v113; // rbp
  void **v114; // rdi
  void **v115; // rdi
  void **v116; // r12
  void **v117; // rbp
  size_t v118; // rdx
  size_t v119; // rdx
  __int64 v120; // rdx
  unsigned __int64 v121; // rdx
  int v122; // eax
  unsigned __int64 v123; // rdx
  int v124; // eax
  unsigned __int64 v125; // rdx
  int v126; // eax
  unsigned __int64 v127; // rdx
  int v128; // eax
  unsigned __int64 v129; // rdx
  int v130; // eax
  unsigned __int64 v131; // rdx
  int v132; // eax
  __int64 v133; // rdx
  __int64 v134; // rdx
  __int64 v135; // rdx
  __int64 v136; // rax
  __int64 v137; // r12
  __int64 v138; // r13
  __int64 v139; // r12
  void *v140; // rdi
  __int64 v141; // rax
  __int64 v142; // r12
  __int64 v143; // r13
  __int64 v144; // r12
  void *v145; // rdi
  __int64 v146; // rax
  __int64 v147; // r12
  __int64 v148; // r13
  __int64 v149; // r12
  void *v150; // rdi
  __int64 v151; // rax
  __int64 v152; // r12
  __int64 v153; // r13
  __int64 v154; // r12
  void *v155; // rdi
  __int64 v156; // rax
  __int64 v157; // r12
  __int64 v158; // r13
  __int64 v159; // r12
  void *v160; // rdi
  __int64 v161; // rax
  __int64 v162; // r12
  __int64 v163; // r13
  __int64 v164; // r12
  void *v165; // rdi
  size_t na; // [rsp+10h] [rbp-228h]
  _QWORD *v169; // [rsp+20h] [rbp-218h]
  bool v170; // [rsp+2Fh] [rbp-209h]
  signed __int64 v171; // [rsp+38h] [rbp-200h]
  signed __int64 v172; // [rsp+38h] [rbp-200h]
  _QWORD *v173; // [rsp+40h] [rbp-1F8h]
  _QWORD v174[2]; // [rsp+50h] [rbp-1E8h] BYREF
  void *v175; // [rsp+60h] [rbp-1D8h]
  size_t v176; // [rsp+68h] [rbp-1D0h]
  _QWORD v177[2]; // [rsp+70h] [rbp-1C8h] BYREF
  void *v178; // [rsp+80h] [rbp-1B8h]
  size_t v179; // [rsp+88h] [rbp-1B0h]
  _QWORD v180[2]; // [rsp+90h] [rbp-1A8h] BYREF
  void *v181; // [rsp+A0h] [rbp-198h]
  size_t v182; // [rsp+A8h] [rbp-190h]
  _QWORD v183[2]; // [rsp+B0h] [rbp-188h] BYREF
  void *v184; // [rsp+C0h] [rbp-178h] BYREF
  unsigned __int64 v185; // [rsp+C8h] [rbp-170h]
  __int64 v186; // [rsp+D0h] [rbp-168h]
  void *v187; // [rsp+E0h] [rbp-158h]
  __int64 v188; // [rsp+F0h] [rbp-148h] BYREF
  __int16 v189; // [rsp+100h] [rbp-138h]
  void *v190; // [rsp+110h] [rbp-128h] BYREF
  unsigned __int64 v191; // [rsp+118h] [rbp-120h]
  __int64 v192; // [rsp+120h] [rbp-118h]
  void *v193; // [rsp+130h] [rbp-108h]
  __int64 v194; // [rsp+140h] [rbp-F8h] BYREF
  __int16 v195; // [rsp+150h] [rbp-E8h]
  void *v196; // [rsp+160h] [rbp-D8h] BYREF
  unsigned __int64 v197; // [rsp+168h] [rbp-D0h]
  __int64 v198; // [rsp+170h] [rbp-C8h]
  void *v199; // [rsp+180h] [rbp-B8h]
  __int64 v200; // [rsp+190h] [rbp-A8h] BYREF
  __int16 v201; // [rsp+1A0h] [rbp-98h]
  void *v202; // [rsp+1B0h] [rbp-88h] BYREF
  unsigned __int64 v203; // [rsp+1B8h] [rbp-80h]
  __int64 v204; // [rsp+1C0h] [rbp-78h]
  void *v205; // [rsp+1D0h] [rbp-68h]
  __int64 v206; // [rsp+1E0h] [rbp-58h] BYREF
  __int16 v207; // [rsp+1F0h] [rbp-48h]

  result = (_BYTE *)*a1;
  if ( !*(_BYTE *)*a1 )
  {
    *result = 1;
    v170 = a2 == nullptr && &a2[a3] != nullptr;
    if ( !(unsigned __int8)sub_21B7850(a1[1], 2586, 2354, 0) )
      goto LABEL_3;
    sub_FC70B0((__int64)&v184, **(_QWORD **)(a1[2] + 8LL), 0, 323);
    v58 = (unsigned __int8 *)v184;
    if ( !v184 )
    {
      v129 = v185;
      v130 = *(_DWORD *)(v185 + 14976);
      if ( v130 )
      {
        v161 = (unsigned int)(v130 - 1);
        *(_DWORD *)(v185 + 14976) = v161;
        v58 = *(unsigned __int8 **)(v129 + 8 * v161 + 14848);
        v162 = *((unsigned int *)v58 + 134);
        *v58 = 0;
        v163 = *((_QWORD *)v58 + 66);
        *((_DWORD *)v58 + 106) = 0;
        v164 = v163 + (v162 << 6);
        while ( v163 != v164 )
        {
          while ( 1 )
          {
            v164 -= 64;
            v165 = *(void **)(v164 + 24);
            if ( v165 == (void *)(v164 + 40) )
              break;
            operator delete(v165);
            if ( v163 == v164 )
              goto LABEL_294;
          }
        }
LABEL_294:
        *((_DWORD *)v58 + 134) = 0;
      }
      else
      {
        v58 = (unsigned __int8 *)operator new(0x3A0u);
        *v58 = 0;
        *((_QWORD *)v58 + 12) = v58 + 112;
        *((_QWORD *)v58 + 16) = v58 + 144;
        *((_QWORD *)v58 + 20) = v58 + 176;
        *((_QWORD *)v58 + 24) = v58 + 208;
        *((_QWORD *)v58 + 28) = v58 + 240;
        *((_QWORD *)v58 + 32) = v58 + 272;
        *((_QWORD *)v58 + 36) = v58 + 304;
        *((_QWORD *)v58 + 40) = v58 + 336;
        *((_QWORD *)v58 + 44) = v58 + 368;
        *((_QWORD *)v58 + 48) = v58 + 400;
        *((_QWORD *)v58 + 52) = v58 + 432;
        *((_QWORD *)v58 + 13) = 0;
        v58[112] = 0;
        *((_QWORD *)v58 + 17) = 0;
        v58[144] = 0;
        *((_QWORD *)v58 + 21) = 0;
        v58[176] = 0;
        *((_QWORD *)v58 + 25) = 0;
        v58[208] = 0;
        *((_QWORD *)v58 + 29) = 0;
        v58[240] = 0;
        *((_QWORD *)v58 + 33) = 0;
        v58[272] = 0;
        *((_QWORD *)v58 + 37) = 0;
        v58[304] = 0;
        *((_QWORD *)v58 + 41) = 0;
        v58[336] = 0;
        *((_QWORD *)v58 + 45) = 0;
        v58[368] = 0;
        *((_QWORD *)v58 + 49) = 0;
        v58[400] = 0;
        *((_QWORD *)v58 + 53) = 0x800000000LL;
        *((_QWORD *)v58 + 66) = v58 + 544;
        *((_QWORD *)v58 + 67) = 0x600000000LL;
      }
      v184 = v58;
    }
    v58[*v58 + 1] = 0;
    v59 = v174;
    v173 = v174;
    if ( v170 )
      goto LABEL_299;
    if ( (unsigned __int64)a3 > 0xF )
    {
      if ( a3 < 0 )
        goto LABEL_298;
      v59 = (_QWORD *)operator new(a3 + 1);
      v174[0] = a3;
      v173 = v59;
    }
    else
    {
      if ( a3 == 1 )
      {
        LOBYTE(v174[0]) = *a2;
        goto LABEL_105;
      }
      if ( !a3 )
      {
LABEL_105:
        *((_BYTE *)v59 + a3) = 0;
        v60 = v184;
        v61 = *(unsigned __int8 *)v184;
        *(_BYTE *)v184 = v61 + 1;
        v62 = (unsigned __int8)v61;
        v63 = 4 * (v61 + 3);
        v64 = &v60[v63];
        v65 = (_BYTE *)v60[v63];
        if ( v173 == v174 )
        {
          v120 = a3;
          if ( a3 )
          {
            if ( a3 == 1 )
            {
              *v65 = v174[0];
              v120 = 1;
            }
            else
            {
              memcpy(v65, v173, a3);
              v120 = a3;
            }
            v65 = (_BYTE *)*v64;
          }
          v64[1] = v120;
          v65[v120] = 0;
          v65 = v173;
          goto LABEL_109;
        }
        if ( v65 == (_BYTE *)&v60[v63 + 2] )
        {
          *v64 = v173;
          v64[1] = a3;
          v64[2] = v174[0];
        }
        else
        {
          v66 = v60[4 * v62 + 14];
          *v64 = v173;
          v64[1] = a3;
          v64[2] = v174[0];
          if ( v65 )
          {
            v173 = v65;
            v174[0] = v66;
LABEL_109:
            *v65 = 0;
            if ( v173 != v174 )
              operator delete(v173);
            v67 = (unsigned __int8 *)v184;
            if ( !v184 )
            {
              v125 = v185;
              v126 = *(_DWORD *)(v185 + 14976);
              if ( v126 )
              {
                v146 = (unsigned int)(v126 - 1);
                *(_DWORD *)(v185 + 14976) = v146;
                v67 = *(unsigned __int8 **)(v125 + 8 * v146 + 14848);
                v147 = *((unsigned int *)v67 + 134);
                *v67 = 0;
                v148 = *((_QWORD *)v67 + 66);
                *((_DWORD *)v67 + 106) = 0;
                v149 = v148 + (v147 << 6);
                while ( v148 != v149 )
                {
                  while ( 1 )
                  {
                    v149 -= 64;
                    v150 = *(void **)(v149 + 24);
                    if ( v150 == (void *)(v149 + 40) )
                      break;
                    operator delete(v150);
                    if ( v148 == v149 )
                      goto LABEL_279;
                  }
                }
LABEL_279:
                *((_DWORD *)v67 + 134) = 0;
              }
              else
              {
                v67 = (unsigned __int8 *)operator new(0x3A0u);
                *v67 = 0;
                *((_QWORD *)v67 + 12) = v67 + 112;
                *((_QWORD *)v67 + 16) = v67 + 144;
                *((_QWORD *)v67 + 20) = v67 + 176;
                *((_QWORD *)v67 + 24) = v67 + 208;
                *((_QWORD *)v67 + 28) = v67 + 240;
                *((_QWORD *)v67 + 32) = v67 + 272;
                *((_QWORD *)v67 + 36) = v67 + 304;
                *((_QWORD *)v67 + 40) = v67 + 336;
                *((_QWORD *)v67 + 44) = v67 + 368;
                *((_QWORD *)v67 + 48) = v67 + 400;
                *((_QWORD *)v67 + 52) = v67 + 432;
                *((_QWORD *)v67 + 13) = 0;
                v67[112] = 0;
                *((_QWORD *)v67 + 17) = 0;
                v67[144] = 0;
                *((_QWORD *)v67 + 21) = 0;
                v67[176] = 0;
                *((_QWORD *)v67 + 25) = 0;
                v67[208] = 0;
                *((_QWORD *)v67 + 29) = 0;
                v67[240] = 0;
                *((_QWORD *)v67 + 33) = 0;
                v67[272] = 0;
                *((_QWORD *)v67 + 37) = 0;
                v67[304] = 0;
                *((_QWORD *)v67 + 41) = 0;
                v67[336] = 0;
                *((_QWORD *)v67 + 45) = 0;
                v67[368] = 0;
                *((_QWORD *)v67 + 49) = 0;
                v67[400] = 0;
                *((_QWORD *)v67 + 53) = 0x800000000LL;
                *((_QWORD *)v67 + 66) = v67 + 544;
                *((_QWORD *)v67 + 67) = 0x600000000LL;
              }
              v184 = v67;
            }
            v67[*v67 + 1] = 1;
            v68 = v184;
            v69 = *(unsigned __int8 *)v184;
            *(_BYTE *)v184 = v69 + 1;
            v68[v69 + 2] = "-mno-exception-handling";
            if ( (_BYTE)v189 )
            {
              sub_FC7790(v186, (__int64 *)&v184, SHIBYTE(v189));
              v186 = 0;
              v189 = 0;
            }
            if ( v187 != &v188 )
              operator delete(v187);
            v70 = (void **)v184;
            if ( v184 )
            {
              v71 = v185;
              if ( v185 )
              {
                if ( (unsigned __int64)v184 >= v185 && (unsigned __int64)v184 <= v185 + 14848 )
                {
                  v134 = *(unsigned int *)(v185 + 14976);
                  *(_DWORD *)(v185 + 14976) = v134 + 1;
                  *(_QWORD *)(v71 + 8 * v134 + 14848) = v70;
                }
                else
                {
                  v72 = *((void ***)v184 + 66);
                  v73 = &v72[8 * (unsigned __int64)*((unsigned int *)v184 + 134)];
                  if ( v72 != v73 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v73 -= 8;
                        v74 = (void **)v73[3];
                        if ( v74 == v73 + 5 )
                          break;
                        operator delete(v74);
                        if ( v72 == v73 )
                          goto LABEL_123;
                      }
                    }
                    while ( v72 != v73 );
LABEL_123:
                    v73 = (void **)v70[66];
                  }
                  if ( v73 != v70 + 68 )
                    free(v73);
                  v75 = (void **)v70[52];
                  if ( v75 != v70 + 54 )
                    free(v75);
                  v76 = v70 + 48;
                  v77 = v70 + 8;
                  do
                  {
                    while ( *v76 != v76 + 2 )
                    {
                      operator delete(*v76);
                      v76 -= 4;
                      if ( v77 == v76 )
                        goto LABEL_131;
                    }
                    v76 -= 4;
                  }
                  while ( v77 != v76 );
LABEL_131:
                  operator delete(v70, 0x3A0u);
                }
              }
            }
LABEL_3:
            if ( !(unsigned __int8)sub_21B7850(a1[1], 2658, 2501, 0) )
              goto LABEL_4;
            sub_FC70B0((__int64)&v190, **(_QWORD **)(a1[2] + 8LL), 0, 323);
            v98 = (unsigned __int8 *)v190;
            if ( !v190 )
            {
              v131 = v191;
              v132 = *(_DWORD *)(v191 + 14976);
              if ( v132 )
              {
                v141 = (unsigned int)(v132 - 1);
                *(_DWORD *)(v191 + 14976) = v141;
                v98 = *(unsigned __int8 **)(v131 + 8 * v141 + 14848);
                v142 = *((unsigned int *)v98 + 134);
                *v98 = 0;
                v143 = *((_QWORD *)v98 + 66);
                *((_DWORD *)v98 + 106) = 0;
                v144 = v143 + (v142 << 6);
                while ( v143 != v144 )
                {
                  while ( 1 )
                  {
                    v144 -= 64;
                    v145 = *(void **)(v144 + 24);
                    if ( v145 == (void *)(v144 + 40) )
                      break;
                    operator delete(v145);
                    if ( v143 == v144 )
                      goto LABEL_274;
                  }
                }
LABEL_274:
                *((_DWORD *)v98 + 134) = 0;
              }
              else
              {
                v98 = (unsigned __int8 *)operator new(0x3A0u);
                *v98 = 0;
                *((_QWORD *)v98 + 12) = v98 + 112;
                *((_QWORD *)v98 + 16) = v98 + 144;
                *((_QWORD *)v98 + 20) = v98 + 176;
                *((_QWORD *)v98 + 24) = v98 + 208;
                *((_QWORD *)v98 + 28) = v98 + 240;
                *((_QWORD *)v98 + 32) = v98 + 272;
                *((_QWORD *)v98 + 36) = v98 + 304;
                *((_QWORD *)v98 + 40) = v98 + 336;
                *((_QWORD *)v98 + 44) = v98 + 368;
                *((_QWORD *)v98 + 48) = v98 + 400;
                *((_QWORD *)v98 + 52) = v98 + 432;
                *((_QWORD *)v98 + 13) = 0;
                v98[112] = 0;
                *((_QWORD *)v98 + 17) = 0;
                v98[144] = 0;
                *((_QWORD *)v98 + 21) = 0;
                v98[176] = 0;
                *((_QWORD *)v98 + 25) = 0;
                v98[208] = 0;
                *((_QWORD *)v98 + 29) = 0;
                v98[240] = 0;
                *((_QWORD *)v98 + 33) = 0;
                v98[272] = 0;
                *((_QWORD *)v98 + 37) = 0;
                v98[304] = 0;
                *((_QWORD *)v98 + 41) = 0;
                v98[336] = 0;
                *((_QWORD *)v98 + 45) = 0;
                v98[368] = 0;
                *((_QWORD *)v98 + 49) = 0;
                v98[400] = 0;
                *((_QWORD *)v98 + 53) = 0x800000000LL;
                *((_QWORD *)v98 + 66) = v98 + 544;
                *((_QWORD *)v98 + 67) = 0x600000000LL;
              }
              v190 = v98;
            }
            v98[*v98 + 1] = 0;
            v99 = v177;
            v175 = v177;
            if ( v170 )
              goto LABEL_299;
            if ( (unsigned __int64)a3 > 0xF )
            {
              if ( a3 < 0 )
                goto LABEL_298;
              v99 = (_QWORD *)operator new(a3 + 1);
              v177[0] = a3;
              v175 = v99;
            }
            else
            {
              if ( a3 == 1 )
              {
                LOBYTE(v177[0]) = *a2;
                goto LABEL_169;
              }
              if ( !a3 )
              {
LABEL_169:
                v176 = a3;
                *((_BYTE *)v99 + a3) = 0;
                v100 = v190;
                v101 = *(unsigned __int8 *)v190;
                *(_BYTE *)v190 = v101 + 1;
                v102 = (unsigned __int8)v101;
                v103 = 4 * (v101 + 3);
                v104 = (void **)&v100[v103];
                v105 = (_BYTE *)v100[v103];
                if ( v175 == v177 )
                {
                  v118 = v176;
                  if ( v176 )
                  {
                    if ( v176 == 1 )
                      *v105 = v177[0];
                    else
                      memcpy(v105, v175, v176);
                    v118 = v176;
                    v105 = *v104;
                  }
                  v104[1] = (void *)v118;
                  v105[v118] = 0;
                  v105 = v175;
                  goto LABEL_173;
                }
                if ( v105 == (_BYTE *)&v100[v103 + 2] )
                {
                  *v104 = v175;
                  v104[1] = (void *)v176;
                  v104[2] = (void *)v177[0];
                }
                else
                {
                  v106 = v100[4 * v102 + 14];
                  *v104 = v175;
                  v104[1] = (void *)v176;
                  v104[2] = (void *)v177[0];
                  if ( v105 )
                  {
                    v175 = v105;
                    v177[0] = v106;
LABEL_173:
                    v176 = 0;
                    *v105 = 0;
                    if ( v175 != v177 )
                      operator delete(v175);
                    v107 = (unsigned __int8 *)v190;
                    if ( !v190 )
                    {
                      v127 = v191;
                      v128 = *(_DWORD *)(v191 + 14976);
                      if ( v128 )
                      {
                        v151 = (unsigned int)(v128 - 1);
                        *(_DWORD *)(v191 + 14976) = v151;
                        v107 = *(unsigned __int8 **)(v127 + 8 * v151 + 14848);
                        v152 = *((unsigned int *)v107 + 134);
                        *v107 = 0;
                        v153 = *((_QWORD *)v107 + 66);
                        *((_DWORD *)v107 + 106) = 0;
                        v154 = v153 + (v152 << 6);
                        while ( v153 != v154 )
                        {
                          while ( 1 )
                          {
                            v154 -= 64;
                            v155 = *(void **)(v154 + 24);
                            if ( v155 == (void *)(v154 + 40) )
                              break;
                            operator delete(v155);
                            if ( v153 == v154 )
                              goto LABEL_284;
                          }
                        }
LABEL_284:
                        *((_DWORD *)v107 + 134) = 0;
                      }
                      else
                      {
                        v107 = (unsigned __int8 *)operator new(0x3A0u);
                        *v107 = 0;
                        *((_QWORD *)v107 + 12) = v107 + 112;
                        *((_QWORD *)v107 + 16) = v107 + 144;
                        *((_QWORD *)v107 + 20) = v107 + 176;
                        *((_QWORD *)v107 + 24) = v107 + 208;
                        *((_QWORD *)v107 + 28) = v107 + 240;
                        *((_QWORD *)v107 + 32) = v107 + 272;
                        *((_QWORD *)v107 + 36) = v107 + 304;
                        *((_QWORD *)v107 + 40) = v107 + 336;
                        *((_QWORD *)v107 + 44) = v107 + 368;
                        *((_QWORD *)v107 + 48) = v107 + 400;
                        *((_QWORD *)v107 + 52) = v107 + 432;
                        *((_QWORD *)v107 + 13) = 0;
                        v107[112] = 0;
                        *((_QWORD *)v107 + 17) = 0;
                        v107[144] = 0;
                        *((_QWORD *)v107 + 21) = 0;
                        v107[176] = 0;
                        *((_QWORD *)v107 + 25) = 0;
                        v107[208] = 0;
                        *((_QWORD *)v107 + 29) = 0;
                        v107[240] = 0;
                        *((_QWORD *)v107 + 33) = 0;
                        v107[272] = 0;
                        *((_QWORD *)v107 + 37) = 0;
                        v107[304] = 0;
                        *((_QWORD *)v107 + 41) = 0;
                        v107[336] = 0;
                        *((_QWORD *)v107 + 45) = 0;
                        v107[368] = 0;
                        *((_QWORD *)v107 + 49) = 0;
                        v107[400] = 0;
                        *((_QWORD *)v107 + 53) = 0x800000000LL;
                        *((_QWORD *)v107 + 66) = v107 + 544;
                        *((_QWORD *)v107 + 67) = 0x600000000LL;
                      }
                      v190 = v107;
                    }
                    v107[*v107 + 1] = 1;
                    v108 = v190;
                    v109 = *(unsigned __int8 *)v190;
                    *(_BYTE *)v190 = v109 + 1;
                    v108[v109 + 2] = "-mno-multivalue";
                    if ( (_BYTE)v195 )
                    {
                      sub_FC7790(v192, (__int64 *)&v190, SHIBYTE(v195));
                      v192 = 0;
                      v195 = 0;
                    }
                    if ( v193 != &v194 )
                      operator delete(v193);
                    v110 = (void **)v190;
                    if ( v190 )
                    {
                      v111 = v191;
                      if ( v191 )
                      {
                        if ( (unsigned __int64)v190 >= v191 && (unsigned __int64)v190 <= v191 + 14848 )
                        {
                          v133 = *(unsigned int *)(v191 + 14976);
                          *(_DWORD *)(v191 + 14976) = v133 + 1;
                          *(_QWORD *)(v111 + 8 * v133 + 14848) = v110;
                        }
                        else
                        {
                          v112 = *((void ***)v190 + 66);
                          v113 = &v112[8 * (unsigned __int64)*((unsigned int *)v190 + 134)];
                          if ( v112 != v113 )
                          {
                            do
                            {
                              while ( 1 )
                              {
                                v113 -= 8;
                                v114 = (void **)v113[3];
                                if ( v114 == v113 + 5 )
                                  break;
                                operator delete(v114);
                                if ( v112 == v113 )
                                  goto LABEL_187;
                              }
                            }
                            while ( v112 != v113 );
LABEL_187:
                            v113 = (void **)v110[66];
                          }
                          if ( v113 != v110 + 68 )
                            free(v113);
                          v115 = (void **)v110[52];
                          if ( v115 != v110 + 54 )
                            free(v115);
                          v116 = v110 + 48;
                          v117 = v110 + 8;
                          do
                          {
                            while ( *v116 != v116 + 2 )
                            {
                              operator delete(*v116);
                              v116 -= 4;
                              if ( v116 == v117 )
                                goto LABEL_195;
                            }
                            v116 -= 4;
                          }
                          while ( v116 != v117 );
LABEL_195:
                          operator delete(v110, 0x3A0u);
                        }
                      }
                    }
LABEL_4:
                    if ( !(unsigned __int8)sub_21B7850(a1[1], 2695, 2831, 0) )
                    {
LABEL_5:
                      LODWORD(v202) = 2465;
                      v4 = a1[1];
                      v5 = sub_21B6DA0(v4, &v202, 1);
                      v6 = *(_QWORD *)(v4 + 8);
                      v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
                      for ( i = (_QWORD *)(v6 + 8 * HIDWORD(v5)); i != v7; ++v7 )
                      {
                        if ( *v7 && (unsigned __int8)sub_21B9810(*v7, 2465) )
                          break;
                      }
                      result = v183;
                      v169 = i;
                      v9 = a3;
                      while ( 1 )
                      {
                        if ( v169 == v7 )
                          return result;
                        na = (size_t)v7;
                        v10 = *v7;
                        v11 = (const char **)off_2BAF240;
                        do
                        {
                          v12 = *v11;
                          if ( *v11 )
                          {
                            v13 = strlen(*v11);
                            v14 = *(const char ***)(v10 + 48);
                            v15 = *v14;
                            if ( *v14 )
                            {
                              if ( v13 != strlen(*v14) || v13 && memcmp(v15, v12, v13) )
                                goto LABEL_48;
                            }
                            else if ( v13 )
                            {
                              goto LABEL_48;
                            }
                          }
                          else
                          {
                            v36 = **(const char ***)(v10 + 48);
                            if ( v36 && strlen(v36) )
                              goto LABEL_48;
                          }
                          sub_FC70B0((__int64)&v202, **(_QWORD **)(a1[2] + 8LL), 0, 323);
                          v16 = (unsigned __int8 *)v202;
                          if ( !v202 )
                          {
                            v42 = v203;
                            v43 = *(_DWORD *)(v203 + 14976);
                            if ( v43 )
                            {
                              v51 = (unsigned int)(v43 - 1);
                              *(_DWORD *)(v203 + 14976) = v51;
                              v16 = *(unsigned __int8 **)(v42 + 8 * v51 + 14848);
                              v52 = *((unsigned int *)v16 + 134);
                              *v16 = 0;
                              v53 = *((_QWORD *)v16 + 66);
                              *((_DWORD *)v16 + 106) = 0;
                              v52 <<= 6;
                              v54 = v53 + v52;
                              if ( v53 != v53 + v52 )
                              {
                                v172 = v9;
                                v55 = v11;
                                v56 = v53;
                                do
                                {
                                  while ( 1 )
                                  {
                                    v54 -= 64;
                                    v57 = *(void **)(v54 + 24);
                                    if ( v57 == (void *)(v54 + 40) )
                                      break;
                                    operator delete(v57);
                                    if ( v56 == v54 )
                                      goto LABEL_95;
                                  }
                                }
                                while ( v56 != v54 );
LABEL_95:
                                v11 = v55;
                                v9 = v172;
                              }
                              *((_DWORD *)v16 + 134) = 0;
                            }
                            else
                            {
                              v16 = (unsigned __int8 *)operator new(0x3A0u);
                              *v16 = 0;
                              *((_QWORD *)v16 + 12) = v16 + 112;
                              *((_QWORD *)v16 + 16) = v16 + 144;
                              *((_QWORD *)v16 + 20) = v16 + 176;
                              *((_QWORD *)v16 + 24) = v16 + 208;
                              *((_QWORD *)v16 + 28) = v16 + 240;
                              *((_QWORD *)v16 + 32) = v16 + 272;
                              *((_QWORD *)v16 + 36) = v16 + 304;
                              *((_QWORD *)v16 + 40) = v16 + 336;
                              *((_QWORD *)v16 + 44) = v16 + 368;
                              *((_QWORD *)v16 + 48) = v16 + 400;
                              *((_QWORD *)v16 + 52) = v16 + 432;
                              *((_QWORD *)v16 + 13) = 0;
                              v16[112] = 0;
                              *((_QWORD *)v16 + 17) = 0;
                              v16[144] = 0;
                              *((_QWORD *)v16 + 21) = 0;
                              v16[176] = 0;
                              *((_QWORD *)v16 + 25) = 0;
                              v16[208] = 0;
                              *((_QWORD *)v16 + 29) = 0;
                              v16[240] = 0;
                              *((_QWORD *)v16 + 33) = 0;
                              v16[272] = 0;
                              *((_QWORD *)v16 + 37) = 0;
                              v16[304] = 0;
                              *((_QWORD *)v16 + 41) = 0;
                              v16[336] = 0;
                              *((_QWORD *)v16 + 45) = 0;
                              v16[368] = 0;
                              *((_QWORD *)v16 + 49) = 0;
                              v16[400] = 0;
                              *((_QWORD *)v16 + 53) = 0x800000000LL;
                              *((_QWORD *)v16 + 66) = v16 + 544;
                              *((_QWORD *)v16 + 67) = 0x600000000LL;
                            }
                            v202 = v16;
                          }
                          v16[*v16 + 1] = 0;
                          v17 = v183;
                          v181 = v183;
                          if ( v170 )
                            goto LABEL_299;
                          if ( (unsigned __int64)v9 > 0xF )
                          {
                            if ( v9 < 0 )
                              goto LABEL_298;
                            v37 = (_QWORD *)operator new(v9 + 1);
                            v183[0] = v9;
                            v181 = v37;
                            goto LABEL_67;
                          }
                          if ( v9 == 1 )
                          {
                            LOBYTE(v183[0]) = *a2;
                            v17 = v183;
                            goto LABEL_22;
                          }
                          if ( v9 )
                          {
                            v37 = v183;
LABEL_67:
                            memcpy(v37, a2, v9);
                            v17 = v181;
                          }
LABEL_22:
                          v182 = v9;
                          *((_BYTE *)v17 + v9) = 0;
                          v18 = v202;
                          v19 = *(unsigned __int8 *)v202;
                          *(_BYTE *)v202 = v19 + 1;
                          v20 = (unsigned __int8)v19;
                          v21 = 4 * (v19 + 3);
                          v22 = (void **)&v18[v21];
                          v23 = (_BYTE *)v18[v21];
                          if ( v181 == v183 )
                          {
                            v38 = v182;
                            if ( v182 )
                            {
                              if ( v182 == 1 )
                                *v23 = v183[0];
                              else
                                memcpy(v23, v183, v182);
                              v38 = v182;
                              v23 = *v22;
                            }
                            v22[1] = (void *)v38;
                            v23[v38] = 0;
                            v23 = v181;
                            goto LABEL_26;
                          }
                          if ( v23 == (_BYTE *)&v18[v21 + 2] )
                          {
                            *v22 = v181;
                            v22[1] = (void *)v182;
                            v22[2] = (void *)v183[0];
LABEL_76:
                            v181 = v183;
                            v23 = v183;
                            goto LABEL_26;
                          }
                          v24 = v18[4 * v20 + 14];
                          *v22 = v181;
                          v22[1] = (void *)v182;
                          v22[2] = (void *)v183[0];
                          if ( !v23 )
                            goto LABEL_76;
                          v181 = v23;
                          v183[0] = v24;
LABEL_26:
                          v182 = 0;
                          *v23 = 0;
                          if ( v181 != v183 )
                            operator delete(v181);
                          v25 = (unsigned __int8 *)v202;
                          if ( !v202 )
                          {
                            v40 = v203;
                            v41 = *(_DWORD *)(v203 + 14976);
                            if ( v41 )
                            {
                              v44 = (unsigned int)(v41 - 1);
                              *(_DWORD *)(v203 + 14976) = v44;
                              v25 = *(unsigned __int8 **)(v40 + 8 * v44 + 14848);
                              v45 = *((unsigned int *)v25 + 134);
                              *v25 = 0;
                              v46 = *((_QWORD *)v25 + 66);
                              *((_DWORD *)v25 + 106) = 0;
                              v45 <<= 6;
                              v47 = v46 + v45;
                              if ( v46 != v46 + v45 )
                              {
                                v171 = v9;
                                v48 = v11;
                                v49 = v46;
                                do
                                {
                                  while ( 1 )
                                  {
                                    v47 -= 64;
                                    v50 = *(void **)(v47 + 24);
                                    if ( v50 == (void *)(v47 + 40) )
                                      break;
                                    operator delete(v50);
                                    if ( v49 == v47 )
                                      goto LABEL_87;
                                  }
                                }
                                while ( v49 != v47 );
LABEL_87:
                                v11 = v48;
                                v9 = v171;
                              }
                              *((_DWORD *)v25 + 134) = 0;
                            }
                            else
                            {
                              v25 = (unsigned __int8 *)operator new(0x3A0u);
                              *v25 = 0;
                              *((_QWORD *)v25 + 12) = v25 + 112;
                              *((_QWORD *)v25 + 16) = v25 + 144;
                              *((_QWORD *)v25 + 20) = v25 + 176;
                              *((_QWORD *)v25 + 24) = v25 + 208;
                              *((_QWORD *)v25 + 28) = v25 + 240;
                              *((_QWORD *)v25 + 32) = v25 + 272;
                              *((_QWORD *)v25 + 36) = v25 + 304;
                              *((_QWORD *)v25 + 40) = v25 + 336;
                              *((_QWORD *)v25 + 44) = v25 + 368;
                              *((_QWORD *)v25 + 48) = v25 + 400;
                              *((_QWORD *)v25 + 52) = v25 + 432;
                              *((_QWORD *)v25 + 13) = 0;
                              v25[112] = 0;
                              *((_QWORD *)v25 + 17) = 0;
                              v25[144] = 0;
                              *((_QWORD *)v25 + 21) = 0;
                              v25[176] = 0;
                              *((_QWORD *)v25 + 25) = 0;
                              v25[208] = 0;
                              *((_QWORD *)v25 + 29) = 0;
                              v25[240] = 0;
                              *((_QWORD *)v25 + 33) = 0;
                              v25[272] = 0;
                              *((_QWORD *)v25 + 37) = 0;
                              v25[304] = 0;
                              *((_QWORD *)v25 + 41) = 0;
                              v25[336] = 0;
                              *((_QWORD *)v25 + 45) = 0;
                              v25[368] = 0;
                              *((_QWORD *)v25 + 49) = 0;
                              v25[400] = 0;
                              *((_QWORD *)v25 + 53) = 0x800000000LL;
                              *((_QWORD *)v25 + 66) = v25 + 544;
                              *((_QWORD *)v25 + 67) = 0x600000000LL;
                            }
                            v202 = v25;
                          }
                          v25[*v25 + 1] = 1;
                          v26 = v202;
                          v27 = *(unsigned __int8 *)v202;
                          *(_BYTE *)v202 = v27 + 1;
                          v26[v27 + 2] = v12;
                          if ( (_BYTE)v207 )
                          {
                            sub_FC7790(v204, (__int64 *)&v202, SHIBYTE(v207));
                            v204 = 0;
                            v207 = 0;
                          }
                          if ( v205 != &v206 )
                            operator delete(v205);
                          v28 = (void **)v202;
                          if ( v202 )
                          {
                            v29 = v203;
                            if ( v203 )
                            {
                              if ( (unsigned __int64)v202 < v203 || (unsigned __int64)v202 > v203 + 14848 )
                              {
                                v30 = *((void ***)v202 + 66);
                                v31 = &v30[8 * (unsigned __int64)*((unsigned int *)v202 + 134)];
                                if ( v30 != v31 )
                                {
                                  do
                                  {
                                    while ( 1 )
                                    {
                                      v31 -= 8;
                                      v32 = (void **)v31[3];
                                      if ( v32 == v31 + 5 )
                                        break;
                                      operator delete(v32);
                                      if ( v30 == v31 )
                                        goto LABEL_39;
                                    }
                                  }
                                  while ( v30 != v31 );
LABEL_39:
                                  v31 = (void **)v28[66];
                                }
                                if ( v31 != v28 + 68 )
                                  free(v31);
                                v33 = (void **)v28[52];
                                v34 = v28 + 52;
                                if ( v33 != v28 + 54 )
                                  free(v33);
                                v35 = v28 + 12;
                                do
                                {
                                  while ( 1 )
                                  {
                                    v34 -= 4;
                                    if ( *v34 == v34 + 2 )
                                      break;
                                    operator delete(*v34);
                                    if ( v35 == v34 )
                                      goto LABEL_47;
                                  }
                                }
                                while ( v35 != v34 );
LABEL_47:
                                operator delete(v28, 0x3A0u);
                              }
                              else
                              {
                                v39 = *(unsigned int *)(v203 + 14976);
                                *(_DWORD *)(v203 + 14976) = v39 + 1;
                                *(_QWORD *)(v29 + 8 * v39 + 14848) = v28;
                              }
                            }
                          }
LABEL_48:
                          ++v11;
                          result = &unk_2BAF258;
                        }
                        while ( v11 != (const char **)&unk_2BAF258 );
                        v7 = (_QWORD *)(na + 8);
                        if ( (_QWORD *)(na + 8) == v169 )
                          return result;
                        while ( 1 )
                        {
                          if ( *v7 )
                          {
                            result = (_BYTE *)sub_21B9810(*v7, 2465);
                            if ( (_BYTE)result )
                              break;
                          }
                          if ( v169 == ++v7 )
                            return result;
                        }
                      }
                    }
                    sub_FC70B0((__int64)&v196, **(_QWORD **)(a1[2] + 8LL), 0, 323);
                    v78 = (unsigned __int8 *)v196;
                    if ( !v196 )
                    {
                      v123 = v197;
                      v124 = *(_DWORD *)(v197 + 14976);
                      if ( v124 )
                      {
                        v156 = (unsigned int)(v124 - 1);
                        *(_DWORD *)(v197 + 14976) = v156;
                        v78 = *(unsigned __int8 **)(v123 + 8 * v156 + 14848);
                        v157 = *((unsigned int *)v78 + 134);
                        *v78 = 0;
                        v158 = *((_QWORD *)v78 + 66);
                        *((_DWORD *)v78 + 106) = 0;
                        v159 = v158 + (v157 << 6);
                        while ( v158 != v159 )
                        {
                          while ( 1 )
                          {
                            v159 -= 64;
                            v160 = *(void **)(v159 + 24);
                            if ( v160 == (void *)(v159 + 40) )
                              break;
                            operator delete(v160);
                            if ( v158 == v159 )
                              goto LABEL_289;
                          }
                        }
LABEL_289:
                        *((_DWORD *)v78 + 134) = 0;
                      }
                      else
                      {
                        v78 = (unsigned __int8 *)operator new(0x3A0u);
                        *v78 = 0;
                        *((_QWORD *)v78 + 12) = v78 + 112;
                        *((_QWORD *)v78 + 16) = v78 + 144;
                        *((_QWORD *)v78 + 20) = v78 + 176;
                        *((_QWORD *)v78 + 24) = v78 + 208;
                        *((_QWORD *)v78 + 28) = v78 + 240;
                        *((_QWORD *)v78 + 32) = v78 + 272;
                        *((_QWORD *)v78 + 36) = v78 + 304;
                        *((_QWORD *)v78 + 40) = v78 + 336;
                        *((_QWORD *)v78 + 44) = v78 + 368;
                        *((_QWORD *)v78 + 48) = v78 + 400;
                        *((_QWORD *)v78 + 52) = v78 + 432;
                        *((_QWORD *)v78 + 13) = 0;
                        v78[112] = 0;
                        *((_QWORD *)v78 + 17) = 0;
                        v78[144] = 0;
                        *((_QWORD *)v78 + 21) = 0;
                        v78[176] = 0;
                        *((_QWORD *)v78 + 25) = 0;
                        v78[208] = 0;
                        *((_QWORD *)v78 + 29) = 0;
                        v78[240] = 0;
                        *((_QWORD *)v78 + 33) = 0;
                        v78[272] = 0;
                        *((_QWORD *)v78 + 37) = 0;
                        v78[304] = 0;
                        *((_QWORD *)v78 + 41) = 0;
                        v78[336] = 0;
                        *((_QWORD *)v78 + 45) = 0;
                        v78[368] = 0;
                        *((_QWORD *)v78 + 49) = 0;
                        v78[400] = 0;
                        *((_QWORD *)v78 + 53) = 0x800000000LL;
                        *((_QWORD *)v78 + 66) = v78 + 544;
                        *((_QWORD *)v78 + 67) = 0x600000000LL;
                      }
                      v196 = v78;
                    }
                    v78[*v78 + 1] = 0;
                    v79 = v180;
                    v178 = v180;
                    if ( !v170 )
                    {
                      if ( (unsigned __int64)a3 <= 0xF )
                      {
                        if ( a3 == 1 )
                        {
                          LOBYTE(v180[0]) = *a2;
                          goto LABEL_137;
                        }
                        if ( !a3 )
                        {
LABEL_137:
                          v179 = a3;
                          *((_BYTE *)v79 + a3) = 0;
                          v80 = v196;
                          v81 = *(unsigned __int8 *)v196;
                          *(_BYTE *)v196 = v81 + 1;
                          v82 = (unsigned __int8)v81;
                          v83 = 4 * (v81 + 3);
                          v84 = (void **)&v80[v83];
                          v85 = (_BYTE *)v80[v83];
                          if ( v178 == v180 )
                          {
                            v119 = v179;
                            if ( v179 )
                            {
                              if ( v179 == 1 )
                                *v85 = v180[0];
                              else
                                memcpy(v85, v178, v179);
                              v119 = v179;
                              v85 = *v84;
                            }
                            v84[1] = (void *)v119;
                            v85[v119] = 0;
                            v85 = v178;
                            goto LABEL_141;
                          }
                          if ( v85 == (_BYTE *)&v80[v83 + 2] )
                          {
                            *v84 = v178;
                            v84[1] = (void *)v179;
                            v84[2] = (void *)v180[0];
                          }
                          else
                          {
                            v86 = v80[4 * v82 + 14];
                            *v84 = v178;
                            v84[1] = (void *)v179;
                            v84[2] = (void *)v180[0];
                            if ( v85 )
                            {
                              v178 = v85;
                              v180[0] = v86;
LABEL_141:
                              v179 = 0;
                              *v85 = 0;
                              if ( v178 != v180 )
                                operator delete(v178);
                              v87 = (unsigned __int8 *)v196;
                              if ( !v196 )
                              {
                                v121 = v197;
                                v122 = *(_DWORD *)(v197 + 14976);
                                if ( v122 )
                                {
                                  v136 = (unsigned int)(v122 - 1);
                                  *(_DWORD *)(v197 + 14976) = v136;
                                  v87 = *(unsigned __int8 **)(v121 + 8 * v136 + 14848);
                                  v137 = *((unsigned int *)v87 + 134);
                                  *v87 = 0;
                                  v138 = *((_QWORD *)v87 + 66);
                                  *((_DWORD *)v87 + 106) = 0;
                                  v139 = v138 + (v137 << 6);
                                  while ( v138 != v139 )
                                  {
                                    while ( 1 )
                                    {
                                      v139 -= 64;
                                      v140 = *(void **)(v139 + 24);
                                      if ( v140 == (void *)(v139 + 40) )
                                        break;
                                      operator delete(v140);
                                      if ( v138 == v139 )
                                        goto LABEL_269;
                                    }
                                  }
LABEL_269:
                                  *((_DWORD *)v87 + 134) = 0;
                                }
                                else
                                {
                                  v87 = (unsigned __int8 *)operator new(0x3A0u);
                                  *v87 = 0;
                                  *((_QWORD *)v87 + 12) = v87 + 112;
                                  *((_QWORD *)v87 + 16) = v87 + 144;
                                  *((_QWORD *)v87 + 20) = v87 + 176;
                                  *((_QWORD *)v87 + 24) = v87 + 208;
                                  *((_QWORD *)v87 + 28) = v87 + 240;
                                  *((_QWORD *)v87 + 32) = v87 + 272;
                                  *((_QWORD *)v87 + 36) = v87 + 304;
                                  *((_QWORD *)v87 + 40) = v87 + 336;
                                  *((_QWORD *)v87 + 44) = v87 + 368;
                                  *((_QWORD *)v87 + 48) = v87 + 400;
                                  *((_QWORD *)v87 + 52) = v87 + 432;
                                  *((_QWORD *)v87 + 13) = 0;
                                  v87[112] = 0;
                                  *((_QWORD *)v87 + 17) = 0;
                                  v87[144] = 0;
                                  *((_QWORD *)v87 + 21) = 0;
                                  v87[176] = 0;
                                  *((_QWORD *)v87 + 25) = 0;
                                  v87[208] = 0;
                                  *((_QWORD *)v87 + 29) = 0;
                                  v87[240] = 0;
                                  *((_QWORD *)v87 + 33) = 0;
                                  v87[272] = 0;
                                  *((_QWORD *)v87 + 37) = 0;
                                  v87[304] = 0;
                                  *((_QWORD *)v87 + 41) = 0;
                                  v87[336] = 0;
                                  *((_QWORD *)v87 + 45) = 0;
                                  v87[368] = 0;
                                  *((_QWORD *)v87 + 49) = 0;
                                  v87[400] = 0;
                                  *((_QWORD *)v87 + 53) = 0x800000000LL;
                                  *((_QWORD *)v87 + 66) = v87 + 544;
                                  *((_QWORD *)v87 + 67) = 0x600000000LL;
                                }
                                v196 = v87;
                              }
                              v87[*v87 + 1] = 1;
                              v88 = v196;
                              v89 = *(unsigned __int8 *)v196;
                              *(_BYTE *)v196 = v89 + 1;
                              v88[v89 + 2] = "-mno-reference-types";
                              if ( (_BYTE)v201 )
                              {
                                sub_FC7790(v198, (__int64 *)&v196, SHIBYTE(v201));
                                v198 = 0;
                                v201 = 0;
                              }
                              if ( v199 != &v200 )
                                operator delete(v199);
                              v90 = (void **)v196;
                              if ( v196 )
                              {
                                v91 = v197;
                                if ( v197 )
                                {
                                  if ( (unsigned __int64)v196 >= v197 && (unsigned __int64)v196 <= v197 + 14848 )
                                  {
                                    v135 = *(unsigned int *)(v197 + 14976);
                                    *(_DWORD *)(v197 + 14976) = v135 + 1;
                                    *(_QWORD *)(v91 + 8 * v135 + 14848) = v90;
                                  }
                                  else
                                  {
                                    v92 = *((void ***)v196 + 66);
                                    v93 = &v92[8 * (unsigned __int64)*((unsigned int *)v196 + 134)];
                                    if ( v92 != v93 )
                                    {
                                      do
                                      {
                                        while ( 1 )
                                        {
                                          v93 -= 8;
                                          v94 = (void **)v93[3];
                                          if ( v94 == v93 + 5 )
                                            break;
                                          operator delete(v94);
                                          if ( v92 == v93 )
                                            goto LABEL_155;
                                        }
                                      }
                                      while ( v92 != v93 );
LABEL_155:
                                      v93 = (void **)v90[66];
                                    }
                                    if ( v93 != v90 + 68 )
                                      free(v93);
                                    v95 = (void **)v90[52];
                                    v96 = v90 + 52;
                                    if ( v95 != v90 + 54 )
                                      free(v95);
                                    v97 = v90 + 12;
                                    do
                                    {
                                      while ( 1 )
                                      {
                                        v96 -= 4;
                                        if ( *v96 == v96 + 2 )
                                          break;
                                        operator delete(*v96);
                                        if ( v96 == v97 )
                                          goto LABEL_163;
                                      }
                                    }
                                    while ( v96 != v97 );
LABEL_163:
                                    operator delete(v90, 0x3A0u);
                                  }
                                }
                              }
                              goto LABEL_5;
                            }
                          }
                          v85 = v180;
                          v178 = v180;
                          goto LABEL_141;
                        }
LABEL_205:
                        memcpy(v79, a2, a3);
                        v79 = v178;
                        goto LABEL_137;
                      }
                      if ( a3 >= 0 )
                      {
                        v79 = (_QWORD *)operator new(a3 + 1);
                        v180[0] = a3;
                        v178 = v79;
                        goto LABEL_205;
                      }
LABEL_298:
                      std::__throw_length_error("basic_string::_M_create");
                    }
LABEL_299:
                    std::__throw_logic_error("basic_string::_M_construct null not valid");
                  }
                }
                v105 = v177;
                v175 = v177;
                goto LABEL_173;
              }
            }
            memcpy(v99, a2, a3);
            v99 = v175;
            goto LABEL_169;
          }
        }
        v65 = v174;
        v173 = v174;
        goto LABEL_109;
      }
    }
    memcpy(v59, a2, a3);
    v59 = v173;
    goto LABEL_105;
  }
  return result;
}
