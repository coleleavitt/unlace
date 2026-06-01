signed __int64 **__fastcall sub_13B5380(__int64 a1)
{
  __int64 *v1; // r15
  __int64 v2; // rbp
  __int64 *v3; // r14
  __int64 *v4; // rax
  __int64 *v5; // rax
  signed __int64 **result; // rax
  __int64 v7; // rdx
  signed __int64 **v8; // rcx
  signed __int64 *v9; // rbx
  signed __int64 **v10; // rax
  signed __int64 **v11; // r15
  __int64 *v12; // r14
  signed __int64 *p_dest; // rbp
  unsigned __int8 *v14; // r12
  signed __int64 v15; // r13
  char *v16; // rsi
  _BYTE *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  char *v22; // rbx
  _BYTE *v23; // rdi
  signed __int64 v24; // rax
  void **v25; // rbx
  unsigned __int64 v26; // rax
  void **v27; // r13
  void **v28; // r12
  void **v29; // rdi
  void **v30; // rdi
  void **v31; // r13
  void **v32; // r12
  size_t v33; // rbx
  unsigned __int8 *v34; // r15
  const void *v35; // r13
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  void **v41; // r15
  _BYTE *v42; // rdi
  __int64 v43; // rax
  void **v44; // r12
  unsigned __int64 v45; // rax
  void **v46; // rdx
  void **v47; // r15
  __int64 v48; // r12
  size_t v49; // rbp
  void **v50; // rbx
  void **v51; // rdi
  void **v52; // rdi
  void **v53; // r15
  unsigned __int8 *v54; // r15
  _QWORD *v55; // rax
  _QWORD *v56; // rdx
  __int64 v57; // r10
  __int64 v58; // rax
  void **v59; // rcx
  _BYTE *v60; // rdi
  __int64 v61; // rax
  void **v62; // r12
  unsigned __int64 v63; // rax
  void **v64; // rdx
  void **v65; // r15
  __int64 v66; // r12
  size_t v67; // rbp
  void **v68; // rbx
  void **v69; // rdi
  void **v70; // rdi
  void **v71; // r15
  unsigned __int8 *v72; // r15
  _QWORD *v73; // rax
  _QWORD *v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  _QWORD *v78; // rbx
  _BYTE *v79; // rdi
  __int64 v80; // rax
  void **v81; // rbx
  unsigned __int64 v82; // rax
  void **v83; // r13
  void **v84; // r12
  void **v85; // rdi
  void **v86; // rdi
  void **v87; // r13
  void **v88; // r12
  size_t v89; // rdx
  __int64 v90; // rdx
  unsigned __int64 v91; // rdx
  int v92; // eax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rax
  signed __int64 *v97; // r12
  __int64 v98; // rbx
  __int64 v99; // rbp
  void *v100; // rdi
  size_t v101; // rdx
  size_t v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // rdx
  unsigned __int64 v107; // rdx
  int v108; // eax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 *v113; // r15
  __int64 v114; // r14
  __int64 v115; // rbp
  size_t v116; // r12
  __int64 v117; // rbx
  void *v118; // rdi
  unsigned __int64 v119; // rdx
  int v120; // eax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rax
  __int64 *v125; // r15
  __int64 v126; // r14
  __int64 v127; // rbp
  size_t v128; // r12
  __int64 v129; // rbx
  void *v130; // rdi
  unsigned __int64 v131; // rdx
  int v132; // eax
  __int64 v133; // rax
  __int64 v134; // r13
  __int64 v135; // rdx
  __int64 v136; // r13
  __int64 v137; // r12
  size_t v138; // rbp
  __int64 v139; // rbx
  void *v140; // rdi
  __int64 *v141; // [rsp+8h] [rbp-220h]
  signed __int64 **v142; // [rsp+8h] [rbp-220h]
  unsigned __int8 *srca; // [rsp+18h] [rbp-210h]
  void **v145; // [rsp+20h] [rbp-208h]
  void **v146; // [rsp+20h] [rbp-208h]
  void **v147; // [rsp+20h] [rbp-208h]
  void **v148; // [rsp+20h] [rbp-208h]
  void **v149; // [rsp+20h] [rbp-208h]
  unsigned __int8 *v150; // [rsp+20h] [rbp-208h]
  unsigned __int8 *v151; // [rsp+20h] [rbp-208h]
  signed __int64 *v152; // [rsp+28h] [rbp-200h]
  _QWORD *v153; // [rsp+30h] [rbp-1F8h]
  size_t v154; // [rsp+38h] [rbp-1F0h]
  _QWORD v155[2]; // [rsp+40h] [rbp-1E8h] BYREF
  void *v156; // [rsp+50h] [rbp-1D8h]
  size_t v157; // [rsp+58h] [rbp-1D0h]
  _QWORD v158[2]; // [rsp+60h] [rbp-1C8h] BYREF
  void *v159; // [rsp+70h] [rbp-1B8h]
  size_t v160; // [rsp+78h] [rbp-1B0h]
  _QWORD v161[2]; // [rsp+80h] [rbp-1A8h] BYREF
  void *v162; // [rsp+90h] [rbp-198h]
  size_t n; // [rsp+98h] [rbp-190h]
  signed __int64 dest; // [rsp+A0h] [rbp-188h] BYREF
  void *v165; // [rsp+B0h] [rbp-178h] BYREF
  unsigned __int64 v166; // [rsp+B8h] [rbp-170h]
  __int64 v167; // [rsp+C0h] [rbp-168h]
  void *v168; // [rsp+D0h] [rbp-158h]
  __int64 v169; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v170; // [rsp+F0h] [rbp-138h]
  void *v171; // [rsp+100h] [rbp-128h] BYREF
  unsigned __int64 v172; // [rsp+108h] [rbp-120h]
  __int64 v173; // [rsp+110h] [rbp-118h]
  void *v174; // [rsp+120h] [rbp-108h]
  __int64 v175; // [rsp+130h] [rbp-F8h] BYREF
  __int16 v176; // [rsp+140h] [rbp-E8h]
  void *v177; // [rsp+150h] [rbp-D8h] BYREF
  unsigned __int64 v178; // [rsp+158h] [rbp-D0h]
  __int64 v179; // [rsp+160h] [rbp-C8h]
  void *v180; // [rsp+170h] [rbp-B8h]
  __int64 v181; // [rsp+180h] [rbp-A8h] BYREF
  __int16 v182; // [rsp+190h] [rbp-98h]
  void *v183; // [rsp+1A0h] [rbp-88h] BYREF
  unsigned __int64 v184; // [rsp+1A8h] [rbp-80h]
  __int64 v185; // [rsp+1B0h] [rbp-78h]
  void *v186; // [rsp+1C0h] [rbp-68h]
  __int64 v187; // [rsp+1D0h] [rbp-58h] BYREF
  __int16 v188; // [rsp+1E0h] [rbp-48h]

  sub_13B5340((__int64 **)&v183, *(__int64 **)(a1 + 8), *(_DWORD *)(a1 + 16) == 0);
  v1 = (__int64 *)v183;
  sub_13B5340((__int64 **)&v183, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 16)), 1);
  v141 = (__int64 *)v183;
  if ( v1 != v183 )
  {
    v2 = *v1;
    v3 = v1;
    while ( !*(_DWORD *)(v2 + 12) || !*(_DWORD *)(v2 + 16) )
    {
LABEL_5:
      v2 = v3[1];
      v4 = v3 + 1;
      if ( v2 && v2 != -8 )
      {
        ++v3;
        if ( v141 == v4 )
          goto LABEL_11;
      }
      else
      {
        v5 = v3 + 2;
        do
        {
          do
          {
            v2 = *v5;
            v3 = v5++;
          }
          while ( v2 == -8 );
        }
        while ( !v2 );
        if ( v141 == v3 )
          goto LABEL_11;
      }
    }
    v33 = *(_QWORD *)v2;
    sub_FC70B0((__int64)&v165, *(_QWORD *)a1, *(_DWORD *)(v2 + 16), 768);
    v34 = (unsigned __int8 *)v165;
    if ( !v165 )
    {
      v131 = v166;
      v132 = *(_DWORD *)(v166 + 14976);
      if ( v132 )
      {
        v133 = (unsigned int)(v132 - 1);
        *(_DWORD *)(v166 + 14976) = v133;
        v34 = *(unsigned __int8 **)(v131 + 8 * v133 + 14848);
        v134 = *((unsigned int *)v34 + 134);
        *v34 = 0;
        v135 = *((_QWORD *)v34 + 66);
        *((_DWORD *)v34 + 106) = 0;
        v136 = v135 + (v134 << 6);
        if ( v135 != v136 )
        {
          v137 = v2;
          v138 = v33;
          v139 = v135;
          do
          {
            while ( 1 )
            {
              v136 -= 64;
              v140 = *(void **)(v136 + 24);
              if ( v140 == (void *)(v136 + 40) )
                break;
              operator delete(v140);
              if ( v139 == v136 )
                goto LABEL_252;
            }
          }
          while ( v139 != v136 );
LABEL_252:
          v33 = v138;
          v2 = v137;
        }
        *((_DWORD *)v34 + 134) = 0;
      }
      else
      {
        v34 = (unsigned __int8 *)operator new(0x3A0u);
        *v34 = 0;
        *((_QWORD *)v34 + 12) = v34 + 112;
        *((_QWORD *)v34 + 16) = v34 + 144;
        *((_QWORD *)v34 + 20) = v34 + 176;
        *((_QWORD *)v34 + 24) = v34 + 208;
        *((_QWORD *)v34 + 28) = v34 + 240;
        *((_QWORD *)v34 + 32) = v34 + 272;
        *((_QWORD *)v34 + 36) = v34 + 304;
        *((_QWORD *)v34 + 40) = v34 + 336;
        *((_QWORD *)v34 + 44) = v34 + 368;
        *((_QWORD *)v34 + 48) = v34 + 400;
        *((_QWORD *)v34 + 52) = v34 + 432;
        *((_QWORD *)v34 + 13) = 0;
        v34[112] = 0;
        *((_QWORD *)v34 + 17) = 0;
        v34[144] = 0;
        *((_QWORD *)v34 + 21) = 0;
        v34[176] = 0;
        *((_QWORD *)v34 + 25) = 0;
        v34[208] = 0;
        *((_QWORD *)v34 + 29) = 0;
        v34[240] = 0;
        *((_QWORD *)v34 + 33) = 0;
        v34[272] = 0;
        *((_QWORD *)v34 + 37) = 0;
        v34[304] = 0;
        *((_QWORD *)v34 + 41) = 0;
        v34[336] = 0;
        *((_QWORD *)v34 + 45) = 0;
        v34[368] = 0;
        *((_QWORD *)v34 + 49) = 0;
        v34[400] = 0;
        *((_QWORD *)v34 + 53) = 0x800000000LL;
        *((_QWORD *)v34 + 66) = v34 + 544;
        *((_QWORD *)v34 + 67) = 0x600000000LL;
      }
      v165 = v34;
    }
    v35 = (const void *)(v2 + 24);
    v34[*v34 + 1] = 0;
    v159 = v161;
    if ( v33 + v2 + 24 && v2 == -24 )
LABEL_270:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( v33 > 0xF )
    {
      if ( (v33 & 0x8000000000000000LL) != 0LL )
LABEL_271:
        std::__throw_length_error("basic_string::_M_create");
      v36 = (_QWORD *)operator new(v33 + 1);
      v161[0] = v33;
      v159 = v36;
    }
    else
    {
      if ( v33 == 1 )
      {
        LOBYTE(v161[0]) = *(_BYTE *)(v2 + 24);
        v36 = v161;
        goto LABEL_63;
      }
      v36 = v161;
      if ( !v33 )
      {
LABEL_63:
        v160 = v33;
        *((_BYTE *)v36 + v33) = 0;
        v37 = v165;
        v38 = *(unsigned __int8 *)v165;
        *(_BYTE *)v165 = v38 + 1;
        v39 = (unsigned __int8)v38;
        v40 = 4 * (v38 + 3);
        v41 = (void **)&v37[v40];
        v42 = (_BYTE *)v37[v40];
        if ( v159 == v161 )
        {
          v101 = v160;
          if ( v160 )
          {
            if ( v160 == 1 )
              *v42 = v161[0];
            else
              memcpy(v42, v161, v160);
            v101 = v160;
            v42 = *v41;
          }
          v41[1] = (void *)v101;
          v42[v101] = 0;
          v42 = v159;
        }
        else
        {
          if ( v42 == (_BYTE *)&v37[v40 + 2] )
          {
            *v41 = v159;
            v41[1] = (void *)v160;
            v41[2] = (void *)v161[0];
          }
          else
          {
            v43 = v37[4 * v39 + 14];
            *v41 = v159;
            v41[1] = (void *)v160;
            v41[2] = (void *)v161[0];
            if ( v42 )
            {
              v159 = v42;
              v161[0] = v43;
              goto LABEL_67;
            }
          }
          v159 = v161;
          v42 = v161;
        }
LABEL_67:
        v160 = 0;
        *v42 = 0;
        if ( v159 != v161 )
          operator delete(v159);
        if ( (_BYTE)v170 )
        {
          sub_FC7790(v167, (__int64 *)&v165, SHIBYTE(v170));
          v167 = 0;
          v170 = 0;
        }
        if ( v168 != &v169 )
          operator delete(v168);
        v44 = (void **)v165;
        if ( v165 )
        {
          v45 = v166;
          if ( v166 )
          {
            if ( (unsigned __int64)v165 < v166 || (unsigned __int64)v165 > v166 + 14848 )
            {
              v46 = *((void ***)v165 + 66);
              v47 = &v46[8 * (unsigned __int64)*((unsigned int *)v165 + 134)];
              if ( v46 != v47 )
              {
                v145 = (void **)v165;
                v48 = v2;
                v49 = v33;
                v50 = *((void ***)v165 + 66);
                do
                {
                  while ( 1 )
                  {
                    v47 -= 8;
                    v51 = (void **)v47[3];
                    if ( v51 == v47 + 5 )
                      break;
                    operator delete(v51);
                    if ( v50 == v47 )
                      goto LABEL_80;
                  }
                }
                while ( v50 != v47 );
LABEL_80:
                v33 = v49;
                v2 = v48;
                v44 = v145;
                v47 = (void **)v145[66];
              }
              if ( v47 != v44 + 68 )
                free(v47);
              v52 = (void **)v44[52];
              if ( v52 != v44 + 54 )
                free(v52);
              v53 = v44 + 48;
              v146 = v44 + 8;
              do
              {
                while ( *v53 != v53 + 2 )
                {
                  operator delete(*v53);
                  v53 -= 4;
                  if ( v146 == v53 )
                    goto LABEL_88;
                }
                v53 -= 4;
              }
              while ( v146 != v53 );
LABEL_88:
              operator delete(v44, 0x3A0u);
            }
            else
            {
              v104 = *(unsigned int *)(v166 + 14976);
              *(_DWORD *)(v166 + 14976) = v104 + 1;
              *(_QWORD *)(v45 + 8 * v104 + 14848) = v44;
            }
          }
        }
        sub_FC70B0((__int64)&v171, *(_QWORD *)a1, *(_DWORD *)(v2 + 8), 799);
        v54 = (unsigned __int8 *)v171;
        if ( !v171 )
        {
          v119 = v172;
          v120 = *(_DWORD *)(v172 + 14976);
          if ( v120 )
          {
            v121 = (unsigned int)(v120 - 1);
            *(_DWORD *)(v172 + 14976) = v121;
            v54 = *(unsigned __int8 **)(v119 + 8 * v121 + 14848);
            v122 = *((unsigned int *)v54 + 134);
            *v54 = 0;
            v123 = *((_QWORD *)v54 + 66);
            *((_DWORD *)v54 + 106) = 0;
            v124 = v123 + (v122 << 6);
            if ( v123 != v124 )
            {
              v151 = v54;
              v125 = v3;
              v126 = v2;
              v127 = v123;
              v128 = v33;
              v129 = v124;
              do
              {
                while ( 1 )
                {
                  v129 -= 64;
                  v130 = *(void **)(v129 + 24);
                  if ( v130 == (void *)(v129 + 40) )
                    break;
                  operator delete(v130);
                  if ( v127 == v129 )
                    goto LABEL_245;
                }
              }
              while ( v127 != v129 );
LABEL_245:
              v33 = v128;
              v2 = v126;
              v3 = v125;
              v54 = v151;
            }
            *((_DWORD *)v54 + 134) = 0;
          }
          else
          {
            v54 = (unsigned __int8 *)operator new(0x3A0u);
            *v54 = 0;
            *((_QWORD *)v54 + 12) = v54 + 112;
            *((_QWORD *)v54 + 16) = v54 + 144;
            *((_QWORD *)v54 + 20) = v54 + 176;
            *((_QWORD *)v54 + 24) = v54 + 208;
            *((_QWORD *)v54 + 28) = v54 + 240;
            *((_QWORD *)v54 + 32) = v54 + 272;
            *((_QWORD *)v54 + 36) = v54 + 304;
            *((_QWORD *)v54 + 40) = v54 + 336;
            *((_QWORD *)v54 + 44) = v54 + 368;
            *((_QWORD *)v54 + 48) = v54 + 400;
            *((_QWORD *)v54 + 52) = v54 + 432;
            *((_QWORD *)v54 + 13) = 0;
            v54[112] = 0;
            *((_QWORD *)v54 + 17) = 0;
            v54[144] = 0;
            *((_QWORD *)v54 + 21) = 0;
            v54[176] = 0;
            *((_QWORD *)v54 + 25) = 0;
            v54[208] = 0;
            *((_QWORD *)v54 + 29) = 0;
            v54[240] = 0;
            *((_QWORD *)v54 + 33) = 0;
            v54[272] = 0;
            *((_QWORD *)v54 + 37) = 0;
            v54[304] = 0;
            *((_QWORD *)v54 + 41) = 0;
            v54[336] = 0;
            *((_QWORD *)v54 + 45) = 0;
            v54[368] = 0;
            *((_QWORD *)v54 + 49) = 0;
            v54[400] = 0;
            *((_QWORD *)v54 + 53) = 0x800000000LL;
            *((_QWORD *)v54 + 66) = v54 + 544;
            *((_QWORD *)v54 + 67) = 0x600000000LL;
          }
          v171 = v54;
        }
        v54[*v54 + 1] = 0;
        v55 = v158;
        v156 = v158;
        if ( v33 > 0xF )
        {
          v55 = (_QWORD *)operator new(v33 + 1);
          v158[0] = v33;
          v156 = v55;
        }
        else
        {
          if ( v33 == 1 )
          {
            LOBYTE(v158[0]) = *(_BYTE *)(v2 + 24);
            goto LABEL_93;
          }
          if ( !v33 )
          {
LABEL_93:
            v157 = v33;
            *((_BYTE *)v55 + v33) = 0;
            v56 = v171;
            v57 = *(unsigned __int8 *)v171;
            *(_BYTE *)v171 = v57 + 1;
            v58 = 4 * (v57 + 3);
            v59 = (void **)&v56[v58];
            v60 = (_BYTE *)v56[v58];
            if ( v156 == v158 )
            {
              v102 = v157;
              if ( v157 )
              {
                if ( v157 == 1 )
                {
                  *v60 = v158[0];
                  v102 = v157;
                  v60 = *v59;
                }
                else
                {
                  v149 = v59;
                  memcpy(v60, v156, v157);
                  v59 = v149;
                  v102 = v157;
                  v60 = *v149;
                }
              }
              v59[1] = (void *)v102;
              v60[v102] = 0;
              v60 = v156;
            }
            else
            {
              if ( v60 == (_BYTE *)&v56[v58 + 2] )
              {
                *v59 = v156;
                v59[1] = (void *)v157;
                v59[2] = (void *)v158[0];
              }
              else
              {
                v61 = v56[4 * (int)v57 + 14];
                *v59 = v156;
                v59[1] = (void *)v157;
                v59[2] = (void *)v158[0];
                if ( v60 )
                {
                  v156 = v60;
                  v158[0] = v61;
                  goto LABEL_97;
                }
              }
              v60 = v158;
              v156 = v158;
            }
LABEL_97:
            v157 = 0;
            *v60 = 0;
            if ( v156 != v158 )
              operator delete(v156);
            if ( (_BYTE)v176 )
            {
              sub_FC7790(v173, (__int64 *)&v171, SHIBYTE(v176));
              v173 = 0;
              v176 = 0;
            }
            if ( v174 != &v175 )
              operator delete(v174);
            v62 = (void **)v171;
            if ( v171 )
            {
              v63 = v172;
              if ( v172 )
              {
                if ( (unsigned __int64)v171 < v172 || (unsigned __int64)v171 > v172 + 14848 )
                {
                  v64 = *((void ***)v171 + 66);
                  v65 = &v64[8 * (unsigned __int64)*((unsigned int *)v171 + 134)];
                  if ( v64 != v65 )
                  {
                    v147 = (void **)v171;
                    v66 = v2;
                    v67 = v33;
                    v68 = *((void ***)v171 + 66);
                    do
                    {
                      while ( 1 )
                      {
                        v65 -= 8;
                        v69 = (void **)v65[3];
                        if ( v69 == v65 + 5 )
                          break;
                        operator delete(v69);
                        if ( v68 == v65 )
                          goto LABEL_110;
                      }
                    }
                    while ( v68 != v65 );
LABEL_110:
                    v33 = v67;
                    v2 = v66;
                    v62 = v147;
                    v65 = (void **)v147[66];
                  }
                  if ( v65 != v62 + 68 )
                    free(v65);
                  v70 = (void **)v62[52];
                  if ( v70 != v62 + 54 )
                    free(v70);
                  v71 = v62 + 48;
                  v148 = v62 + 8;
                  do
                  {
                    while ( *v71 != v71 + 2 )
                    {
                      operator delete(*v71);
                      v71 -= 4;
                      if ( v148 == v71 )
                        goto LABEL_118;
                    }
                    v71 -= 4;
                  }
                  while ( v148 != v71 );
LABEL_118:
                  operator delete(v62, 0x3A0u);
                }
                else
                {
                  v106 = *(unsigned int *)(v172 + 14976);
                  *(_DWORD *)(v172 + 14976) = v106 + 1;
                  *(_QWORD *)(v63 + 8 * v106 + 14848) = v62;
                }
              }
            }
            sub_FC70B0((__int64)&v177, *(_QWORD *)a1, *(_DWORD *)(v2 + 12), 799);
            v72 = (unsigned __int8 *)v177;
            if ( !v177 )
            {
              v107 = v178;
              v108 = *(_DWORD *)(v178 + 14976);
              if ( v108 )
              {
                v109 = (unsigned int)(v108 - 1);
                *(_DWORD *)(v178 + 14976) = v109;
                v72 = *(unsigned __int8 **)(v107 + 8 * v109 + 14848);
                v110 = *((unsigned int *)v72 + 134);
                *v72 = 0;
                v111 = *((_QWORD *)v72 + 66);
                *((_DWORD *)v72 + 106) = 0;
                v112 = v111 + (v110 << 6);
                if ( v111 != v112 )
                {
                  v150 = v72;
                  v113 = v3;
                  v114 = v2;
                  v115 = v111;
                  v116 = v33;
                  v117 = v112;
                  do
                  {
                    while ( 1 )
                    {
                      v117 -= 64;
                      v118 = *(void **)(v117 + 24);
                      if ( v118 == (void *)(v117 + 40) )
                        break;
                      operator delete(v118);
                      if ( v115 == v117 )
                        goto LABEL_238;
                    }
                  }
                  while ( v115 != v117 );
LABEL_238:
                  v33 = v116;
                  v2 = v114;
                  v3 = v113;
                  v72 = v150;
                }
                *((_DWORD *)v72 + 134) = 0;
              }
              else
              {
                v72 = (unsigned __int8 *)operator new(0x3A0u);
                *v72 = 0;
                *((_QWORD *)v72 + 12) = v72 + 112;
                *((_QWORD *)v72 + 16) = v72 + 144;
                *((_QWORD *)v72 + 20) = v72 + 176;
                *((_QWORD *)v72 + 24) = v72 + 208;
                *((_QWORD *)v72 + 28) = v72 + 240;
                *((_QWORD *)v72 + 32) = v72 + 272;
                *((_QWORD *)v72 + 36) = v72 + 304;
                *((_QWORD *)v72 + 40) = v72 + 336;
                *((_QWORD *)v72 + 44) = v72 + 368;
                *((_QWORD *)v72 + 48) = v72 + 400;
                *((_QWORD *)v72 + 52) = v72 + 432;
                *((_QWORD *)v72 + 13) = 0;
                v72[112] = 0;
                *((_QWORD *)v72 + 17) = 0;
                v72[144] = 0;
                *((_QWORD *)v72 + 21) = 0;
                v72[176] = 0;
                *((_QWORD *)v72 + 25) = 0;
                v72[208] = 0;
                *((_QWORD *)v72 + 29) = 0;
                v72[240] = 0;
                *((_QWORD *)v72 + 33) = 0;
                v72[272] = 0;
                *((_QWORD *)v72 + 37) = 0;
                v72[304] = 0;
                *((_QWORD *)v72 + 41) = 0;
                v72[336] = 0;
                *((_QWORD *)v72 + 45) = 0;
                v72[368] = 0;
                *((_QWORD *)v72 + 49) = 0;
                v72[400] = 0;
                *((_QWORD *)v72 + 53) = 0x800000000LL;
                *((_QWORD *)v72 + 66) = v72 + 544;
                *((_QWORD *)v72 + 67) = 0x600000000LL;
              }
              v177 = v72;
            }
            v72[*v72 + 1] = 0;
            v73 = v155;
            v153 = v155;
            if ( v33 > 0xF )
            {
              v73 = (_QWORD *)operator new(v33 + 1);
              v155[0] = v33;
              v153 = v73;
            }
            else
            {
              if ( v33 == 1 )
              {
                LOBYTE(v155[0]) = *(_BYTE *)(v2 + 24);
                goto LABEL_123;
              }
              if ( !v33 )
              {
LABEL_123:
                v154 = v33;
                *((_BYTE *)v73 + v33) = 0;
                v74 = v177;
                v75 = *(unsigned __int8 *)v177;
                *(_BYTE *)v177 = v75 + 1;
                v76 = (unsigned __int8)v75;
                v77 = 4 * (v75 + 3);
                v78 = &v74[v77];
                v79 = (_BYTE *)v74[v77];
                if ( v153 == v155 )
                {
                  v103 = v154;
                  if ( v154 )
                  {
                    if ( v154 == 1 )
                    {
                      *v79 = v155[0];
                      v103 = 1;
                    }
                    else
                    {
                      memcpy(v79, v153, v154);
                      v103 = v154;
                    }
                    v79 = (_BYTE *)*v78;
                  }
                  v78[1] = v103;
                  v79[v103] = 0;
                  v79 = v153;
                }
                else
                {
                  if ( v79 == (_BYTE *)&v74[v77 + 2] )
                  {
                    *v78 = v153;
                    v78[1] = v154;
                    v78[2] = v155[0];
                  }
                  else
                  {
                    v80 = v74[4 * v76 + 14];
                    *v78 = v153;
                    v78[1] = v154;
                    v78[2] = v155[0];
                    if ( v79 )
                    {
                      v153 = v79;
                      v155[0] = v80;
                      goto LABEL_127;
                    }
                  }
                  v79 = v155;
                  v153 = v155;
                }
LABEL_127:
                *v79 = 0;
                if ( v153 != v155 )
                  operator delete(v153);
                if ( (_BYTE)v182 )
                {
                  sub_FC7790(v179, (__int64 *)&v177, SHIBYTE(v182));
                  v179 = 0;
                  v182 = 0;
                }
                if ( v180 != &v181 )
                  operator delete(v180);
                v81 = (void **)v177;
                if ( v177 )
                {
                  v82 = v178;
                  if ( v178 )
                  {
                    if ( (unsigned __int64)v177 < v178 || (unsigned __int64)v177 > v178 + 14848 )
                    {
                      v83 = *((void ***)v177 + 66);
                      v84 = &v83[8 * (unsigned __int64)*((unsigned int *)v177 + 134)];
                      if ( v83 != v84 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v84 -= 8;
                            v85 = (void **)v84[3];
                            if ( v85 == v84 + 5 )
                              break;
                            operator delete(v85);
                            if ( v83 == v84 )
                              goto LABEL_139;
                          }
                        }
                        while ( v83 != v84 );
LABEL_139:
                        v84 = (void **)v81[66];
                      }
                      if ( v84 != v81 + 68 )
                        free(v84);
                      v86 = (void **)v81[52];
                      v87 = v81 + 52;
                      if ( v86 != v81 + 54 )
                        free(v86);
                      v88 = v81 + 12;
                      do
                      {
                        while ( 1 )
                        {
                          v87 -= 4;
                          if ( *v87 == v87 + 2 )
                            break;
                          operator delete(*v87);
                          if ( v87 == v88 )
                            goto LABEL_147;
                        }
                      }
                      while ( v87 != v88 );
LABEL_147:
                      operator delete(v81, 0x3A0u);
                    }
                    else
                    {
                      v105 = *(unsigned int *)(v178 + 14976);
                      *(_DWORD *)(v178 + 14976) = v105 + 1;
                      *(_QWORD *)(v82 + 8 * v105 + 14848) = v81;
                    }
                  }
                }
                goto LABEL_5;
              }
            }
            memcpy(v73, v35, v33);
            v73 = v153;
            goto LABEL_123;
          }
        }
        memcpy(v55, v35, v33);
        v55 = v156;
        goto LABEL_93;
      }
    }
    memcpy(v36, (const void *)(v2 + 24), v33);
    v36 = v159;
    goto LABEL_63;
  }
LABEL_11:
  result = (signed __int64 **)a1;
  v7 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v7 )
  {
    v8 = *(signed __int64 ***)(a1 + 32);
    v9 = *v8;
    if ( *v8 != (signed __int64 *)-8LL && v9 )
    {
      v11 = *(signed __int64 ***)(a1 + 32);
    }
    else
    {
      v10 = v8 + 1;
      do
      {
        do
        {
          v9 = *v10;
          v11 = v10++;
        }
        while ( v9 == (signed __int64 *)-8LL );
      }
      while ( !v9 );
    }
    result = &v8[v7];
    v142 = result;
    if ( v11 != result )
    {
      v12 = (__int64 *)a1;
      p_dest = &dest;
      while ( 1 )
      {
        sub_FC70B0((__int64)&v183, *v12, *(_DWORD *)(v9[1] + 44), 779);
        v14 = (unsigned __int8 *)v183;
        v15 = *v9;
        v16 = (char *)(v9 + 27);
        if ( !v183 )
        {
          v91 = v184;
          v92 = *(_DWORD *)(v184 + 14976);
          if ( v92 )
          {
            v93 = (unsigned int)(v92 - 1);
            *(_DWORD *)(v184 + 14976) = v93;
            v14 = *(unsigned __int8 **)(v91 + 8 * v93 + 14848);
            v94 = *((unsigned int *)v14 + 134);
            v95 = *((_QWORD *)v14 + 66);
            *v14 = 0;
            *((_DWORD *)v14 + 106) = 0;
            v96 = v95 + (v94 << 6);
            if ( v95 != v96 )
            {
              srca = v14;
              v97 = v9;
              v98 = v96;
              v152 = p_dest;
              v99 = v95;
              do
              {
                while ( 1 )
                {
                  v98 -= 64;
                  v100 = *(void **)(v98 + 24);
                  if ( v100 == (void *)(v98 + 40) )
                    break;
                  operator delete(v100);
                  if ( v99 == v98 )
                    goto LABEL_189;
                }
              }
              while ( v99 != v98 );
LABEL_189:
              v9 = v97;
              v14 = srca;
              p_dest = v152;
            }
            *((_DWORD *)v14 + 134) = 0;
          }
          else
          {
            v14 = (unsigned __int8 *)operator new(0x3A0u);
            *v14 = 0;
            *((_QWORD *)v14 + 12) = v14 + 112;
            *((_QWORD *)v14 + 16) = v14 + 144;
            *((_QWORD *)v14 + 20) = v14 + 176;
            *((_QWORD *)v14 + 24) = v14 + 208;
            *((_QWORD *)v14 + 28) = v14 + 240;
            *((_QWORD *)v14 + 32) = v14 + 272;
            *((_QWORD *)v14 + 36) = v14 + 304;
            *((_QWORD *)v14 + 40) = v14 + 336;
            *((_QWORD *)v14 + 44) = v14 + 368;
            *((_QWORD *)v14 + 48) = v14 + 400;
            *((_QWORD *)v14 + 52) = v14 + 432;
            *((_QWORD *)v14 + 13) = 0;
            v14[112] = 0;
            *((_QWORD *)v14 + 17) = 0;
            v14[144] = 0;
            *((_QWORD *)v14 + 21) = 0;
            v14[176] = 0;
            *((_QWORD *)v14 + 25) = 0;
            v14[208] = 0;
            *((_QWORD *)v14 + 29) = 0;
            v14[240] = 0;
            *((_QWORD *)v14 + 33) = 0;
            v14[272] = 0;
            *((_QWORD *)v14 + 37) = 0;
            v14[304] = 0;
            *((_QWORD *)v14 + 41) = 0;
            v14[336] = 0;
            *((_QWORD *)v14 + 45) = 0;
            v14[368] = 0;
            *((_QWORD *)v14 + 49) = 0;
            v14[400] = 0;
            *((_QWORD *)v14 + 53) = 0x800000000LL;
            v16 = (char *)(v9 + 27);
            *((_QWORD *)v14 + 66) = v14 + 544;
            *((_QWORD *)v14 + 67) = 0x600000000LL;
          }
          v183 = v14;
        }
        v14[*v14 + 1] = 0;
        v162 = p_dest;
        if ( &v16[v15] && !v16 )
          goto LABEL_270;
        if ( (unsigned __int64)v15 > 0xF )
          break;
        if ( v15 == 1 )
        {
          LOBYTE(dest) = *((_BYTE *)v9 + 216);
          v17 = p_dest;
          goto LABEL_25;
        }
        v17 = p_dest;
        if ( v15 )
          goto LABEL_160;
LABEL_25:
        n = v15;
        v17[v15] = 0;
        v18 = v183;
        v19 = *(unsigned __int8 *)v183;
        *(_BYTE *)v183 = v19 + 1;
        v20 = (unsigned __int8)v19;
        v21 = 4 * (v19 + 3);
        v22 = (char *)&v18[v21];
        v23 = (_BYTE *)v18[v21];
        if ( v162 == p_dest )
        {
          v89 = n;
          if ( n )
          {
            if ( n == 1 )
              *v23 = dest;
            else
              memcpy(v23, p_dest, n);
            v89 = n;
            v23 = *(_BYTE **)v22;
          }
          *((_QWORD *)v22 + 1) = v89;
          v23[v89] = 0;
          v23 = v162;
          goto LABEL_29;
        }
        if ( v23 == (_BYTE *)&v18[v21 + 2] )
        {
          *(_QWORD *)v22 = v162;
          *((_QWORD *)v22 + 1) = n;
          *((_QWORD *)v22 + 2) = dest;
LABEL_169:
          v162 = p_dest;
          v23 = p_dest;
          goto LABEL_29;
        }
        v24 = v18[4 * v20 + 14];
        *(_QWORD *)v22 = v162;
        *((_QWORD *)v22 + 1) = n;
        *((_QWORD *)v22 + 2) = dest;
        if ( !v23 )
          goto LABEL_169;
        v162 = v23;
        dest = v24;
LABEL_29:
        n = 0;
        *v23 = 0;
        if ( v162 != p_dest )
          operator delete(v162);
        if ( (_BYTE)v188 )
        {
          sub_FC7790(v185, (__int64 *)&v183, SHIBYTE(v188));
          v185 = 0;
          v188 = 0;
        }
        if ( v186 != &v187 )
          operator delete(v186);
        v25 = (void **)v183;
        if ( v183 )
        {
          v26 = v184;
          if ( v184 )
          {
            if ( (unsigned __int64)v183 < v184 || (unsigned __int64)v183 > v184 + 14848 )
            {
              v27 = *((void ***)v183 + 66);
              v28 = &v27[8 * (unsigned __int64)*((unsigned int *)v183 + 134)];
              if ( v27 != v28 )
              {
                do
                {
                  while ( 1 )
                  {
                    v28 -= 8;
                    v29 = (void **)v28[3];
                    if ( v29 == v28 + 5 )
                      break;
                    operator delete(v29);
                    if ( v27 == v28 )
                      goto LABEL_41;
                  }
                }
                while ( v27 != v28 );
LABEL_41:
                v28 = (void **)v25[66];
              }
              if ( v28 != v25 + 68 )
                free(v28);
              v30 = (void **)v25[52];
              if ( v30 != v25 + 54 )
                free(v30);
              v31 = v25 + 48;
              v32 = v25 + 8;
              do
              {
                while ( *v31 != v31 + 2 )
                {
                  operator delete(*v31);
                  v31 -= 4;
                  if ( v31 == v32 )
                    goto LABEL_49;
                }
                v31 -= 4;
              }
              while ( v32 != v31 );
LABEL_49:
              operator delete(v25, 0x3A0u);
            }
            else
            {
              v90 = *(unsigned int *)(v184 + 14976);
              *(_DWORD *)(v184 + 14976) = v90 + 1;
              *(_QWORD *)(v26 + 8 * v90 + 14848) = v25;
            }
          }
        }
        v9 = v11[1];
        result = v11 + 1;
        if ( v9 != (signed __int64 *)-8LL && v9 )
        {
          ++v11;
          if ( v142 == result )
            return result;
        }
        else
        {
          result = v11 + 2;
          do
          {
            do
            {
              v9 = *result;
              v11 = result++;
            }
            while ( v9 == (signed __int64 *)-8LL );
          }
          while ( !v9 );
          if ( v142 == v11 )
            return result;
        }
      }
      if ( v15 < 0 )
        goto LABEL_271;
      v17 = (_BYTE *)operator new(v15 + 1);
      dest = v15;
      v162 = v17;
LABEL_160:
      memcpy(v17, v16, v15);
      v17 = v162;
      goto LABEL_25;
    }
  }
  return result;
}
