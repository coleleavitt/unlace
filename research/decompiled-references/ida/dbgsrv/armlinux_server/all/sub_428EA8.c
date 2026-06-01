/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428EA8
// Address: 0x0000000000428EA8

//----- (0000000000428EA8) ----------------------------------------------------
__int64 __fastcall sub_428EA8(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // w0
  unsigned __int64 v5; // x19
  __int64 v6; // x0
  char v7; // w25
  int v8; // w0
  char *v9; // x1
  unsigned __int64 v10; // x2
  unsigned __int64 v11; // x19
  unsigned __int8 *v12; // x0
  unsigned __int64 v13; // x28
  unsigned __int64 v14; // x21
  unsigned __int64 v15; // x19
  _BYTE *v16; // x0
  int v17; // w20
  char *v18; // x0
  size_t v19; // x19
  char *v20; // x20
  __int64 v21; // x21
  __int64 v22; // x19
  __int64 v23; // x20
  void *v24; // x0
  size_t v25; // x19
  __int64 v26; // x27
  size_t v27; // x19
  int v28; // w19
  char *v29; // x1
  __int64 v30; // x22
  __int64 v31; // x20
  __int64 v32; // x21
  void *v33; // x0
  char *v34; // x1
  char *v35; // x1
  __int64 v36; // x21
  __int64 v37; // x19
  __int64 v38; // x20
  void *v39; // x0
  char *v40; // x1
  void *v41; // x0
  char *v42; // x1
  signed __int64 v43; // x21
  __int64 v44; // x19
  __int64 v45; // x20
  void *v46; // x0
  char *v47; // x1
  int v49; // w20
  __int64 v50; // x21
  int v51; // w19
  char *v52; // x1
  unsigned __int64 v53; // x2
  char *v54; // x19
  unsigned __int64 v55; // x1
  __int64 v56; // x1
  char *v57; // x26
  unsigned __int64 v58; // x22
  unsigned __int64 v59; // x0
  int v60; // w22
  __int64 v61; // x26
  char *v62; // x0
  int v63; // w0
  size_t v64; // x19
  signed __int64 v65; // x27
  __int64 v66; // x3
  char *v67; // x0
  char *v68; // x2
  int v69; // w0
  int v70; // w0
  char *v71; // x0
  __int64 v72; // x21
  __int64 v73; // x26
  char *v74; // x19
  char *v75; // x20
  char *v76; // x19
  size_t v77; // x22
  void *v78; // x0
  __int64 v79; // x27
  signed __int64 v80; // x19
  __int64 v81; // x3
  char *v82; // x0
  char *v83; // x2
  void *v84; // x0
  __int64 v85; // x2
  char *v86; // x1
  __int64 v87; // x21
  __int64 v88; // x19
  __int64 v89; // x20
  void *v90; // x0
  char *v91; // x1
  signed __int64 v92; // x22
  __int64 v93; // x20
  __int64 v94; // x21
  void *v95; // x0
  size_t v96; // x20
  __int64 v97; // x28
  size_t v98; // x20
  int v99; // w20
  char *v100; // x1
  __int64 v101; // x26
  __int64 v102; // x21
  __int64 v103; // x22
  void *v104; // x0
  char *v105; // x1
  char *v106; // x0
  __int64 v107; // x22
  __int64 v108; // x26
  char *v109; // x19
  char *v110; // x20
  char *v111; // x19
  size_t v112; // x21
  void *v113; // x0
  unsigned __int64 v114; // x21
  unsigned __int64 v115; // x22
  char *v116; // x0
  __int64 v117; // x22
  __int64 v118; // x27
  __int64 v119; // x20
  char *v120; // x21
  __int64 v121; // x20
  size_t v122; // x26
  void *v123; // x0
  char *v124; // x0
  __int64 v125; // x22
  __int64 v126; // x26
  char *v127; // x19
  char *v128; // x20
  char *v129; // x19
  size_t v130; // x21
  void *v131; // x0
  size_t v132; // x2
  signed __int64 v133; // x1
  char *v134; // x0
  unsigned __int64 v135; // x2
  char *v136; // x0
  size_t v137; // x19
  signed __int64 v138; // x22
  __int64 v139; // x3
  char *v140; // x0
  char *v141; // x2
  char *v142; // x0
  __int64 v143; // x21
  __int64 v144; // x23
  char *v145; // x19
  char *v146; // x20
  char *v147; // x19
  size_t v148; // x24
  void *v149; // x0
  unsigned __int64 v150; // [xsp+68h] [xbp-1C8h]
  unsigned __int8 v153; // [xsp+98h] [xbp-198h]
  int v154; // [xsp+9Ch] [xbp-194h]
  unsigned __int64 v155; // [xsp+A0h] [xbp-190h]
  int v156; // [xsp+B8h] [xbp-178h] BYREF
  int v157; // [xsp+BCh] [xbp-174h] BYREF
  void *v158; // [xsp+C0h] [xbp-170h] BYREF
  void *dest; // [xsp+C8h] [xbp-168h] BYREF
  unsigned __int64 v160; // [xsp+D0h] [xbp-160h]
  unsigned __int64 v161; // [xsp+D8h] [xbp-158h]
  void *v162; // [xsp+E0h] [xbp-150h] BYREF
  __int64 v163; // [xsp+E8h] [xbp-148h] BYREF
  __int64 v164; // [xsp+F0h] [xbp-140h]
  void *v165; // [xsp+F8h] [xbp-138h] BYREF
  signed __int64 v166; // [xsp+100h] [xbp-130h]
  __int64 v167; // [xsp+108h] [xbp-128h]
  void *v168; // [xsp+110h] [xbp-120h] BYREF
  unsigned __int64 v169; // [xsp+118h] [xbp-118h]
  unsigned __int64 v170; // [xsp+120h] [xbp-110h]
  int v171; // [xsp+128h] [xbp-108h]
  int v172; // [xsp+12Ch] [xbp-104h]
  __int64 v173; // [xsp+130h] [xbp-100h]
  __int64 v174; // [xsp+138h] [xbp-F8h]
  char *v175; // [xsp+140h] [xbp-F0h]
  signed __int64 v176; // [xsp+148h] [xbp-E8h]
  signed __int64 v177; // [xsp+150h] [xbp-E0h]
  void *src; // [xsp+158h] [xbp-D8h] BYREF
  unsigned __int64 v179; // [xsp+160h] [xbp-D0h]
  size_t v180; // [xsp+168h] [xbp-C8h]
  void *v181; // [xsp+170h] [xbp-C0h] BYREF
  __int64 v182; // [xsp+178h] [xbp-B8h]
  __int64 v183; // [xsp+180h] [xbp-B0h]
  void *v184; // [xsp+188h] [xbp-A8h] BYREF
  unsigned __int64 v185; // [xsp+190h] [xbp-A0h]
  unsigned __int64 v186; // [xsp+198h] [xbp-98h]
  void *v187; // [xsp+1A0h] [xbp-90h]
  __int64 v188; // [xsp+1A8h] [xbp-88h] BYREF
  __int64 v189; // [xsp+1B0h] [xbp-80h] BYREF
  char v190[8]; // [xsp+1B8h] [xbp-78h] BYREF
  size_t n; // [xsp+1C0h] [xbp-70h] BYREF
  size_t v192; // [xsp+1C8h] [xbp-68h]
  size_t v193; // [xsp+1D0h] [xbp-60h]
  void *v194; // [xsp+1D8h] [xbp-58h]
  __int64 v195; // [xsp+1E0h] [xbp-50h]
  __int64 v196; // [xsp+1E8h] [xbp-48h]
  void *ptr; // [xsp+1F0h] [xbp-40h]
  size_t v198; // [xsp+1F8h] [xbp-38h]
  size_t v199; // [xsp+200h] [xbp-30h]
  void *v200; // [xsp+208h] [xbp-28h]
  __int64 v201; // [xsp+210h] [xbp-20h]
  __int64 v202; // [xsp+218h] [xbp-18h] BYREF
  char v203; // [xsp+220h] [xbp-10h]

  v4 = *(_DWORD *)(a1 + 236);
  if ( !v4 )
    return 0;
  v153 = *(_BYTE *)(a1 + 248);
  if ( !v153 )
    sub_4068C0();
  if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 120) )
    return 0;
  v5 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)v4 << 6);
  v155 = v5;
  if ( !v5 )
    return 0;
  sub_48C428(*(_QWORD *)(a1 + 472), *(_QWORD *)(v5 + 24) + *(_QWORD *)(a1 + 480), 0);
  v163 = 0;
  v164 = 0;
  v165 = nullptr;
  v166 = 0;
  v167 = 0;
  v6 = *(_QWORD *)(v5 + 32);
  v154 = *(unsigned __int8 *)(a1 + 509);
  dest = nullptr;
  v160 = 0;
  v7 = v154 == 2;
  v161 = 0;
  v162 = nullptr;
  if ( !v6 )
    return v153;
  do
  {
    sub_420C98(a1, (char *)&v162 + 4, 4u, 1u);
    v8 = HIDWORD(v162);
    if ( !HIDWORD(v162) )
    {
      v137 = v160;
      v168 = nullptr;
      v169 = 0;
      v170 = 0;
      if ( v160 )
      {
        v168 = sub_491248(v160);
        v170 = v137;
        memcpy(v168, dest, v137);
        v169 = v137;
        v8 = HIDWORD(v162);
      }
      v138 = v166;
      v171 = (int)v162;
      v172 = v8;
      v173 = v163;
      v174 = v164;
      v175 = nullptr;
      v176 = 0;
      v177 = 0;
      if ( v166 )
      {
        v142 = (char *)sub_491248(40 * v166);
        v143 = 0;
        v144 = 0;
        v175 = v142;
        v177 = v138;
        while ( 1 )
        {
          v145 = (char *)v165;
          v146 = &v142[v143];
          *(_QWORD *)&v142[v143] = 0;
          v147 = &v145[v143];
          *((_QWORD *)v146 + 1) = 0;
          *((_QWORD *)v146 + 2) = 0;
          v148 = *((_QWORD *)v147 + 1);
          if ( v148 )
          {
            v149 = sub_491248(*((_QWORD *)v147 + 1));
            *(_QWORD *)v146 = v149;
            *((_QWORD *)v146 + 2) = v148;
            memcpy(v149, *(const void **)v147, v148);
            *((_QWORD *)v146 + 1) = v148;
          }
          ++v144;
          *((_DWORD *)v146 + 6) = *((_DWORD *)v147 + 6);
          v143 += 40;
          *((_DWORD *)v146 + 7) = *((_DWORD *)v147 + 7);
          *((_DWORD *)v146 + 8) = *((_DWORD *)v147 + 8);
          v146[36] = v147[36];
          if ( v138 == v144 )
            break;
          v142 = v175;
        }
        v176 = v138;
      }
      v139 = *(_QWORD *)(a3 + 8);
      v140 = *(char **)a3;
      if ( (unsigned __int64)(v139 + 1) > *(_QWORD *)(a3 + 16) )
      {
        v140 = (char *)sub_491288(a3, *(void **)a3, v139 + 1, 0x48u);
        v139 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)a3 = v140;
      }
      v141 = &v140[72 * v139];
      *(_QWORD *)v141 = v168;
      *((_QWORD *)v141 + 1) = v169;
      *((_QWORD *)v141 + 2) = v170;
      *((_DWORD *)v141 + 6) = v171;
      *((_DWORD *)v141 + 7) = v172;
      *((_QWORD *)v141 + 4) = v173;
      *((_QWORD *)v141 + 5) = v174;
      *((_QWORD *)v141 + 6) = v175;
      *((_QWORD *)v141 + 7) = v176;
      *((_QWORD *)v141 + 8) = v177;
      ++*(_QWORD *)(a3 + 8);
      break;
    }
    if ( HIDWORD(v162) > 0xFFFFFFEF )
      goto LABEL_69;
    v168 = nullptr;
    v169 = 0;
    v170 = 0;
    sub_420C98(a1, &v163, 4u, 1u);
    if ( (_DWORD)v163 )
    {
      v49 = sub_48C428(*(_QWORD *)(a1 + 472), 0, 1);
      v50 = *(_QWORD *)(a1 + 480);
      HIDWORD(v163) = (_DWORD)v162 + 4 - v163;
      LODWORD(v164) = 0;
      sub_420C98(a1, &v156, 4u, 1u);
      sub_420C98(a1, &v157, 4u, 1u);
      if ( SHIDWORD(v162) <= 11 )
        goto LABEL_66;
      v51 = HIDWORD(v162) - 12;
      if ( HIDWORD(v162) == 12 )
      {
LABEL_105:
        v64 = v160;
        src = nullptr;
        v179 = 0;
        v180 = 0;
        if ( v160 )
        {
          src = sub_491248(v160);
          v180 = v64;
          memcpy(src, dest, v64);
          v179 = v64;
        }
        v65 = v166;
        v181 = v162;
        v182 = v163;
        v183 = v164;
        v184 = nullptr;
        v185 = 0;
        v186 = 0;
        if ( v166 )
        {
          v124 = (char *)sub_491248(40 * v166);
          v125 = 0;
          v126 = 0;
          v184 = v124;
          v186 = v65;
          while ( 1 )
          {
            v127 = (char *)v165;
            v128 = &v124[v125];
            *(_QWORD *)&v124[v125] = 0;
            v129 = &v127[v125];
            *((_QWORD *)v128 + 1) = 0;
            *((_QWORD *)v128 + 2) = 0;
            v130 = *((_QWORD *)v129 + 1);
            if ( v130 )
            {
              v131 = sub_491248(*((_QWORD *)v129 + 1));
              *(_QWORD *)v128 = v131;
              *((_QWORD *)v128 + 2) = v130;
              memcpy(v131, *(const void **)v129, v130);
              *((_QWORD *)v128 + 1) = v130;
            }
            ++v126;
            *((_DWORD *)v128 + 6) = *((_DWORD *)v129 + 6);
            v125 += 40;
            *((_DWORD *)v128 + 7) = *((_DWORD *)v129 + 7);
            *((_DWORD *)v128 + 8) = *((_DWORD *)v129 + 8);
            v128[36] = v129[36];
            if ( v65 == v126 )
              break;
            v124 = (char *)v184;
          }
          v185 = v65;
        }
        v66 = *(_QWORD *)(a3 + 8);
        v67 = *(char **)a3;
        if ( (unsigned __int64)(v66 + 1) > *(_QWORD *)(a3 + 16) )
        {
          v67 = (char *)sub_491288(a3, *(void **)a3, v66 + 1, 0x48u);
          v66 = *(_QWORD *)(a3 + 8);
          *(_QWORD *)a3 = v67;
        }
        v68 = &v67[72 * v66];
        *(_QWORD *)v68 = src;
        *((_QWORD *)v68 + 1) = v179;
        *((_QWORD *)v68 + 2) = v180;
        *((_QWORD *)v68 + 3) = v181;
        v69 = (int)v162;
        *((_DWORD *)v68 + 8) = v182;
        v70 = v69 + HIDWORD(v162);
        *((_DWORD *)v68 + 9) = HIDWORD(v182);
        LODWORD(v162) = v70 + 4;
        *((_QWORD *)v68 + 5) = v183;
        *((_QWORD *)v68 + 6) = v184;
        *((_QWORD *)v68 + 7) = v185;
        *((_QWORD *)v68 + 8) = v186;
        ++*(_QWORD *)(a3 + 8);
        goto LABEL_111;
      }
      v52 = (char *)v168;
      v53 = v169;
      if ( v51 > v169 )
      {
        if ( v51 > v170 )
        {
          v52 = (char *)sub_491288((__int64)&v168, v168, v51, 1u);
          v53 = v169;
          v168 = v52;
        }
        memset(&v52[v53], 0, v51 - v53);
        v52 = (char *)v168;
        v169 = v51;
      }
      else if ( v51 < v169 )
      {
        v169 = v51;
      }
      sub_420C98(a1, v52, v51, 1u);
      v41 = v168;
      if ( v154 == 2 )
      {
        sub_492FC8((char *)v168, v51);
        v41 = v168;
      }
      v54 = *(char **)a2;
      v55 = *(_QWORD *)a2 + 104LL * *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)a2 < v55 )
      {
        if ( *((_DWORD *)v54 + 18) == HIDWORD(v163) )
          goto LABEL_93;
        while ( 1 )
        {
          v54 += 104;
          if ( (unsigned __int64)v54 >= v55 )
            break;
          if ( *((_DWORD *)v54 + 18) == HIDWORD(v163) )
            goto LABEL_93;
        }
      }
      if ( (char *)v55 == v54 )
        goto LABEL_67;
LABEL_93:
      src = v41;
      v56 = *((_QWORD *)v54 + 7);
      v150 = (unsigned __int64)v41 + v169;
      if ( v56 )
      {
        if ( **((_BYTE **)v54 + 6) == 122 )
        {
          if ( !(unsigned __int8)((__int64 (__fastcall *)(size_t *, __int64, _QWORD, void **))loc_48E7D8)(
                                   &n,
                                   32,
                                   0,
                                   &src) )
            goto LABEL_66;
          v57 = (char *)src;
          v58 = (unsigned int)n;
          if ( (unsigned int)n > (__int64)(v150 - (_QWORD)src) )
          {
            v58 = (unsigned int)(v150 - (_DWORD)src);
            LODWORD(n) = v150 - (_DWORD)src;
          }
          v160 = 0;
          v59 = v58;
          if ( v58 )
          {
            v132 = v58;
            v133 = 0;
            v134 = (char *)dest;
            if ( v58 > v161 )
            {
              v134 = (char *)sub_491288((__int64)&dest, dest, v58, 1u);
              v133 = v160;
              dest = v134;
              v132 = v58 - v160;
            }
            memset(&v134[v133], 0, v132);
            v160 = v58;
            memcpy(dest, v57, v58);
            v57 = (char *)src;
            v59 = (unsigned int)n;
          }
          src = &v57[v59];
          v60 = v156;
          v56 = *((_QWORD *)v54 + 7);
          if ( !v56 )
            goto LABEL_140;
        }
        else
        {
          v60 = v156;
        }
        if ( v56 != 1 )
        {
          v61 = *((_QWORD *)v54 + 6);
          v62 = strchr((const char *)(v61 + 1), 82);
          if ( v62 )
          {
            if ( &v62[-v61] != (char *)-1LL )
            {
              v63 = v60 + v49 - v50;
              LODWORD(v164) = v63;
LABEL_141:
              v92 = v166;
              HIDWORD(v164) = v157 + v63;
              if ( v166 )
              {
                v93 = 0;
                v94 = 0;
                do
                {
                  v95 = *(void **)((char *)v165 + v93);
                  if ( v95 )
                  {
                    *(_QWORD *)((char *)v165 + v93 + 8) = 0;
                    j__free(v95);
                  }
                  ++v94;
                  v93 += 40;
                }
                while ( v92 != v94 );
                v63 = v164;
              }
              LODWORD(v158) = v63;
              v166 = 0;
              while ( 1 )
              {
                if ( (unsigned __int64)src >= v150 )
                  goto LABEL_105;
                n = 0;
                v192 = 0;
                v193 = 0;
                v96 = *((_QWORD *)v54 + 1);
                if ( v96 )
                {
                  n = (size_t)sub_491248(*((_QWORD *)v54 + 1));
                  v193 = v96;
                  memcpy((void *)n, *(const void **)v54, v96);
                  v192 = v96;
                }
                v194 = nullptr;
                v195 = 0;
                v196 = 0;
                v97 = *((_QWORD *)v54 + 4);
                if ( v97 )
                  break;
                ptr = nullptr;
                v198 = 0;
                v199 = 0;
                v98 = *((_QWORD *)v54 + 7);
                if ( v98 )
                  goto LABEL_187;
LABEL_153:
                v200 = *((void **)v54 + 9);
                v201 = *((_QWORD *)v54 + 10);
                v202 = *((_QWORD *)v54 + 11);
                v203 = v54[96];
                v99 = (unsigned __int8)sub_41A390(
                                         (char **)&v165,
                                         (unsigned __int8 **)&src,
                                         v150,
                                         &v202,
                                         v7,
                                         (int *)&v158);
                if ( ptr )
                {
                  v198 = 0;
                  j__free(ptr);
                }
                v100 = (char *)v194;
                if ( v194 )
                {
                  v101 = v195;
                  if ( v195 )
                  {
                    v102 = 0;
                    v103 = 0;
                    do
                    {
                      v104 = *(void **)&v100[v102];
                      v105 = &v100[v102];
                      if ( v104 )
                      {
                        *((_QWORD *)v105 + 1) = 0;
                        j__free(v104);
                      }
                      ++v103;
                      v102 += 40;
                      v100 = (char *)v194;
                    }
                    while ( v101 != v103 );
                  }
                  v195 = 0;
                  j__free(v100);
                }
                if ( n )
                {
                  v192 = 0;
                  j__free((void *)n);
                }
                if ( !v99 )
                {
                  v41 = v168;
                  goto LABEL_67;
                }
              }
              v116 = (char *)sub_491248(40 * v97);
              v117 = 0;
              v118 = 0;
              v194 = v116;
              v196 = v97;
              while ( 1 )
              {
                v119 = *((_QWORD *)v54 + 3);
                v120 = &v116[v117];
                *(_QWORD *)&v116[v117] = 0;
                v121 = v119 + v117;
                *((_QWORD *)v120 + 1) = 0;
                *((_QWORD *)v120 + 2) = 0;
                v122 = *(_QWORD *)(v121 + 8);
                if ( v122 )
                {
                  v123 = sub_491248(*(_QWORD *)(v121 + 8));
                  *(_QWORD *)v120 = v123;
                  *((_QWORD *)v120 + 2) = v122;
                  memcpy(v123, *(const void **)v121, v122);
                  *((_QWORD *)v120 + 1) = v122;
                }
                ++v118;
                *((_DWORD *)v120 + 6) = *(_DWORD *)(v121 + 24);
                v117 += 40;
                *((_DWORD *)v120 + 7) = *(_DWORD *)(v121 + 28);
                *((_DWORD *)v120 + 8) = *(_DWORD *)(v121 + 32);
                v120[36] = *(_BYTE *)(v121 + 36);
                if ( v97 == v118 )
                  break;
                v116 = (char *)v194;
              }
              v195 = v97;
              ptr = nullptr;
              v198 = 0;
              v199 = 0;
              v98 = *((_QWORD *)v54 + 7);
              if ( !v98 )
                goto LABEL_153;
LABEL_187:
              ptr = sub_491248(v98);
              v199 = v98;
              memcpy(ptr, *((const void **)v54 + 6), v98);
              v198 = v98;
              goto LABEL_153;
            }
          }
        }
      }
      else
      {
        v60 = v156;
      }
LABEL_140:
      v63 = v60;
      LODWORD(v164) = v60;
      goto LABEL_141;
    }
    v190[0] = 0;
    src = nullptr;
    v179 = 0;
    v180 = 0;
    v181 = nullptr;
    v182 = 0;
    v183 = 0;
    v184 = nullptr;
    v185 = 0;
    v186 = 0;
    v187 = v162;
    v188 = 0;
    v189 = 0;
    sub_420C98(a1, v190, 1u, 1u);
    if ( SHIDWORD(v187) <= 4 )
      goto LABEL_55;
    v9 = (char *)v168;
    v10 = v169;
    v11 = HIDWORD(v187) - 5;
    if ( v11 > v169 )
    {
      if ( v11 > v170 )
      {
        v9 = (char *)sub_491288((__int64)&v168, v168, v11, 1u);
        v10 = v169;
        v168 = v9;
      }
      memset(&v9[v10], 0, v11 - v10);
      v9 = (char *)v168;
      v169 = v11;
    }
    else if ( v11 < v169 )
    {
      v169 = HIDWORD(v187) - 5;
    }
    sub_420C98(a1, v9, v11, 1u);
    v12 = (unsigned __int8 *)v168;
    if ( v154 == 2 )
    {
      sub_492FC8((char *)v168, v11);
      v12 = (unsigned __int8 *)v168;
    }
    v158 = v12;
    v13 = (unsigned __int64)&v12[v169];
    v185 = 0;
    while ( v13 > (unsigned __int64)v12 )
    {
      v158 = v12 + 1;
      v17 = *v12;
      if ( v185 )
      {
        v14 = v185 - 1;
        v15 = v185 + 1;
        v16 = v184;
        if ( v185 + 1 <= v186 )
          goto LABEL_17;
      }
      else
      {
        v15 = 2;
        v14 = 0;
        v16 = v184;
        if ( v186 >= 2 )
        {
LABEL_17:
          v185 = v15;
          v16[v14] = v17;
          *((_BYTE *)v184 + v14 + 1) = 0;
          if ( !v17 )
            break;
          goto LABEL_18;
        }
      }
      v184 = sub_491288((__int64)&v184, v16, v15, 1u);
      v185 = v15;
      *((_BYTE *)v184 + v14) = v17;
      *((_BYTE *)v184 + v14 + 1) = 0;
      if ( !v17 )
        break;
LABEL_18:
      v12 = (unsigned __int8 *)v158;
    }
    if ( !(unsigned __int8)((__int64 (__fastcall *)(char *, __int64, _QWORD, void **, unsigned __int64))loc_48E7D8)(
                             (char *)&v188 + 4,
                             32,
                             0,
                             &v158,
                             v13)
      || !(unsigned __int8)((__int64 (__fastcall *)(__int64 *, __int64, __int64, void **, unsigned __int64))loc_48E7D8)(
                             &v189,
                             32,
                             1,
                             &v158,
                             v13)
      || !(unsigned __int8)((__int64 (__fastcall *)(char *, __int64, _QWORD, void **, unsigned __int64))loc_48E7D8)(
                             (char *)&v189 + 4,
                             32,
                             0,
                             &v158,
                             v13) )
    {
      goto LABEL_55;
    }
    v18 = &byte_522118;
    if ( v185 )
      v18 = (char *)v184;
    if ( *v18 != 122 )
      goto LABEL_32;
    if ( !(unsigned __int8)((__int64 (__fastcall *)(size_t *, __int64, _QWORD, void **, unsigned __int64))loc_48E7D8)(
                             &n,
                             32,
                             0,
                             &v158,
                             v13) )
    {
LABEL_55:
      if ( v184 )
      {
        v185 = 0;
        j__free(v184);
      }
      v35 = (char *)v181;
      if ( v181 )
      {
        v36 = v182;
        if ( v182 )
        {
          v37 = 0;
          v38 = 0;
          do
          {
            v39 = *(void **)&v35[v37];
            v40 = &v35[v37];
            if ( v39 )
            {
              *((_QWORD *)v40 + 1) = 0;
              j__free(v39);
            }
            ++v38;
            v37 += 40;
            v35 = (char *)v181;
          }
          while ( v36 != v38 );
        }
        v182 = 0;
        j__free(v35);
      }
      if ( src )
      {
        v179 = 0;
        j__free(src);
      }
LABEL_66:
      v41 = v168;
LABEL_67:
      if ( v41 )
      {
        v169 = 0;
        j__free(v41);
      }
LABEL_69:
      v153 = 0;
      break;
    }
    v19 = (unsigned int)n;
    v20 = (char *)v158;
    if ( !(_DWORD)n )
      goto LABEL_31;
    v114 = v179;
    v115 = (unsigned int)n + v179;
    if ( v179 > v115 )
    {
      if ( v179 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v179 & 0x8000000000000000LL) != 0 )
          v179 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_201;
      }
      v115 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_206:
      v135 = v179;
      v136 = (char *)src;
      if ( v180 < v115 )
      {
        v136 = (char *)sub_491288((__int64)&src, src, v115, 1u);
        v135 = v179;
        src = v136;
      }
      memset(&v136[v135], 0, v115 - v135);
      v179 = v115;
      goto LABEL_201;
    }
    if ( v179 < (unsigned int)n + v179 )
      goto LABEL_206;
LABEL_201:
    memcpy((char *)src + v114, v20, v19);
    v19 = (unsigned int)n;
    v20 = (char *)v158;
LABEL_31:
    v158 = &v20[v19];
LABEL_32:
    v21 = v182;
    if ( v182 )
    {
      v22 = 0;
      v23 = 0;
      do
      {
        v24 = *(void **)((char *)v181 + v22);
        if ( v24 )
        {
          *(_QWORD *)((char *)v181 + v22 + 8) = 0;
          j__free(v24);
        }
        ++v23;
        v22 += 40;
      }
      while ( v21 != v23 );
    }
    v182 = 0;
    while ( 2 )
    {
      n = 0;
      v192 = 0;
      v193 = 0;
      v25 = v179;
      if ( (unsigned __int64)v158 < v13 )
      {
        if ( v179 )
        {
          n = (size_t)sub_491248(v179);
          v193 = v25;
          memcpy((void *)n, src, v25);
          v26 = v182;
          v192 = v25;
          v194 = nullptr;
          v195 = 0;
          v196 = 0;
          if ( v182 )
            goto LABEL_116;
        }
        else
        {
          v26 = v182;
          v194 = nullptr;
          v195 = 0;
          v196 = 0;
          if ( !v182 )
            goto LABEL_41;
LABEL_116:
          v71 = (char *)sub_491248(40 * v26);
          v72 = 0;
          v73 = 0;
          v194 = v71;
          v196 = v26;
          while ( 1 )
          {
            v74 = (char *)v181;
            v75 = &v71[v72];
            *(_QWORD *)&v71[v72] = 0;
            v76 = &v74[v72];
            *((_QWORD *)v75 + 1) = 0;
            *((_QWORD *)v75 + 2) = 0;
            v77 = *((_QWORD *)v76 + 1);
            if ( v77 )
            {
              v78 = sub_491248(*((_QWORD *)v76 + 1));
              *(_QWORD *)v75 = v78;
              *((_QWORD *)v75 + 2) = v77;
              memcpy(v78, *(const void **)v76, v77);
              *((_QWORD *)v75 + 1) = v77;
            }
            ++v73;
            *((_DWORD *)v75 + 6) = *((_DWORD *)v76 + 6);
            v72 += 40;
            *((_DWORD *)v75 + 7) = *((_DWORD *)v76 + 7);
            *((_DWORD *)v75 + 8) = *((_DWORD *)v76 + 8);
            v75[36] = v76[36];
            if ( v26 == v73 )
              break;
            v71 = (char *)v194;
          }
          v195 = v26;
        }
LABEL_41:
        v27 = v185;
        ptr = nullptr;
        v198 = 0;
        v199 = 0;
        if ( v185 )
        {
          ptr = sub_491248(v185);
          v199 = v27;
          memcpy(ptr, v184, v27);
          v198 = v27;
        }
        v203 = v190[0];
        v200 = v187;
        v201 = v188;
        v202 = v189;
        v28 = (unsigned __int8)sub_41A390((char **)&v181, (unsigned __int8 **)&v158, v13, &v202, v7, nullptr);
        if ( ptr )
        {
          v198 = 0;
          j__free(ptr);
        }
        v29 = (char *)v194;
        if ( v194 )
        {
          v30 = v195;
          if ( v195 )
          {
            v31 = 0;
            v32 = 0;
            do
            {
              v33 = *(void **)&v29[v31];
              v34 = &v29[v31];
              if ( v33 )
              {
                *((_QWORD *)v34 + 1) = 0;
                j__free(v33);
              }
              ++v32;
              v31 += 40;
              v29 = (char *)v194;
            }
            while ( v30 != v32 );
          }
          v195 = 0;
          j__free(v29);
        }
        if ( n )
        {
          v192 = 0;
          j__free((void *)n);
        }
        if ( !v28 )
          goto LABEL_55;
        continue;
      }
      break;
    }
    if ( v179 )
    {
      n = (size_t)sub_491248(v179);
      v193 = v25;
      memcpy((void *)n, src, v25);
      v79 = v182;
      v192 = v25;
      v194 = nullptr;
      v195 = 0;
      v196 = 0;
      if ( v182 )
        goto LABEL_170;
LABEL_125:
      v80 = v185;
      ptr = nullptr;
      v198 = 0;
      v199 = 0;
      if ( v185 )
      {
LABEL_169:
        ptr = sub_491248(v80);
        v199 = v80;
        memcpy(ptr, v184, v80);
        v198 = v80;
      }
    }
    else
    {
      v79 = v182;
      v194 = nullptr;
      v195 = 0;
      v196 = 0;
      if ( !v182 )
        goto LABEL_125;
LABEL_170:
      v106 = (char *)sub_491248(40 * v79);
      v107 = 0;
      v108 = 0;
      v194 = v106;
      v196 = v79;
      while ( 1 )
      {
        v109 = (char *)v181;
        v110 = &v106[v107];
        *(_QWORD *)&v106[v107] = 0;
        v111 = &v109[v107];
        *((_QWORD *)v110 + 1) = 0;
        *((_QWORD *)v110 + 2) = 0;
        v112 = *((_QWORD *)v111 + 1);
        if ( v112 )
        {
          v113 = sub_491248(*((_QWORD *)v111 + 1));
          *(_QWORD *)v110 = v113;
          *((_QWORD *)v110 + 2) = v112;
          memcpy(v113, *(const void **)v111, v112);
          *((_QWORD *)v110 + 1) = v112;
        }
        ++v108;
        *((_DWORD *)v110 + 6) = *((_DWORD *)v111 + 6);
        v107 += 40;
        *((_DWORD *)v110 + 7) = *((_DWORD *)v111 + 7);
        *((_DWORD *)v110 + 8) = *((_DWORD *)v111 + 8);
        v110[36] = v111[36];
        if ( v79 == v108 )
          break;
        v106 = (char *)v194;
      }
      v80 = v185;
      v195 = v79;
      ptr = nullptr;
      v198 = 0;
      v199 = 0;
      if ( v185 )
        goto LABEL_169;
    }
    v203 = v190[0];
    v200 = v187;
    v201 = v188;
    v202 = v189;
    v81 = *(_QWORD *)(a2 + 8);
    v82 = *(char **)a2;
    if ( (unsigned __int64)(v81 + 1) > *(_QWORD *)(a2 + 16) )
    {
      v82 = (char *)sub_491288(a2, *(void **)a2, v81 + 1, 0x68u);
      v81 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v82;
    }
    v83 = &v82[104 * v81];
    *(_QWORD *)v83 = n;
    *((_QWORD *)v83 + 1) = v192;
    *((_QWORD *)v83 + 2) = v193;
    *((_QWORD *)v83 + 3) = v194;
    *((_QWORD *)v83 + 4) = v195;
    *((_QWORD *)v83 + 5) = v196;
    *((_QWORD *)v83 + 6) = ptr;
    *((_QWORD *)v83 + 7) = v198;
    *((_QWORD *)v83 + 8) = v199;
    *((_QWORD *)v83 + 9) = v200;
    *((_QWORD *)v83 + 10) = v201;
    *((_QWORD *)v83 + 11) = v202;
    v83[96] = v203;
    v84 = v184;
    v85 = *(_QWORD *)(a2 + 8) + 1LL;
    LODWORD(v162) = (_DWORD)v162 + HIDWORD(v187) + 4;
    *(_QWORD *)(a2 + 8) = v85;
    if ( v84 )
    {
      v185 = 0;
      j__free(v84);
    }
    v86 = (char *)v181;
    if ( v181 )
    {
      v87 = v182;
      if ( v182 )
      {
        v88 = 0;
        v89 = 0;
        do
        {
          v90 = *(void **)&v86[v88];
          v91 = &v86[v88];
          if ( v90 )
          {
            *((_QWORD *)v91 + 1) = 0;
            j__free(v90);
          }
          ++v89;
          v88 += 40;
          v86 = (char *)v181;
        }
        while ( v87 != v89 );
      }
      v182 = 0;
      j__free(v86);
    }
    if ( src )
    {
      v179 = 0;
      j__free(src);
    }
LABEL_111:
    if ( v168 )
    {
      v169 = 0;
      j__free(v168);
    }
  }
  while ( (unsigned __int64)(int)v162 < *(_QWORD *)(v155 + 32) );
  v42 = (char *)v165;
  if ( v165 )
  {
    v43 = v166;
    if ( v166 )
    {
      v44 = 0;
      v45 = 0;
      do
      {
        v46 = *(void **)&v42[v44];
        v47 = &v42[v44];
        if ( v46 )
        {
          *((_QWORD *)v47 + 1) = 0;
          j__free(v46);
        }
        ++v45;
        v44 += 40;
        v42 = (char *)v165;
      }
      while ( v43 != v45 );
    }
    v166 = 0;
    j__free(v42);
  }
  if ( dest )
  {
    v160 = 0;
    j__free(dest);
  }
  return v153;
}
// 428EA8: could not find valid save-restore pair for x21
// 428EA8: could not find valid save-restore pair for x22
// 428EA8: could not find valid save-restore pair for x24
// 428EA8: could not find valid save-restore pair for x25
// 428EA8: could not find valid save-restore pair for x26
// 428EA8: could not find valid save-restore pair for x27
// 428EA8: could not find valid save-restore pair for x28
// 522118: using guessed type char byte_522118;
