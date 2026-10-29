// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall sub_21C1250(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        std::_V2 *a7,
        __int64 a8,
        char a9)
{
  std::_V2 *v9; // r12
  _QWORD *v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __m128i *v17; // rbx
  _QWORD *j; // rax
  __int64 v19; // rax
  __m128i *v20; // r12
  __int64 v21; // rcx
  std::_V2 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // r12
  char v27; // cl
  __int64 v28; // rbx
  __int64 v29; // rax
  bool v30; // al
  __int64 **v31; // rdi
  __m128i *v32; // r14
  __int64 m128i_i64; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rbx
  __int64 v38; // rbp
  __int64 v39; // rbx
  char ***v41; // rax
  __int64 v42; // rdx
  int v43; // ebx
  unsigned int v44; // ebx
  __int64 v45; // r12
  __int64 v46; // r14
  __int64 v47; // rax
  bool v48; // al
  int v49; // edx
  char v50; // al
  bool v51; // r13
  __int8 v52; // al
  __int64 v53; // rax
  __m128i v54; // xmm2
  __m128i *v55; // rax
  __int64 v56; // rax
  __m128i v57; // xmm6
  __int64 v58; // rbx
  __m128i *v59; // rax
  __int64 v60; // r14
  __int64 v61; // r13
  _QWORD *v62; // r14
  __int64 v63; // r12
  _QWORD *v64; // rbp
  char v65; // al
  unsigned int v66; // r15d
  _QWORD *v67; // rax
  _QWORD *v68; // r12
  _QWORD *v69; // rdi
  __int32 v70; // r12d
  size_t v71; // rdx
  int v72; // eax
  __m128i *v73; // r14
  unsigned __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rdx
  __m128i *v77; // rbx
  _QWORD *n; // rax
  unsigned __int8 v79; // cl
  __m128i *v80; // r12
  __int64 v81; // rax
  int v82; // r14d
  __int64 v83; // rax
  __int64 v84; // rax
  __int8 v85; // dl
  __int64 v86; // r14
  __int64 v87; // rax
  bool v88; // al
  int v89; // ebx
  unsigned int v90; // ebx
  __int64 v91; // rax
  __int64 v92; // rcx
  _QWORD *k; // rcx
  __int64 v94; // rcx
  _QWORD *m; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __m128i *v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  __m128i *v103; // rdi
  __int64 i; // rcx
  __m128i *v106; // [rsp+8h] [rbp-3D0h]
  _QWORD *v107; // [rsp+8h] [rbp-3D0h]
  __m128i *v108; // [rsp+8h] [rbp-3D0h]
  _QWORD *v109; // [rsp+8h] [rbp-3D0h]
  __m128i *v110; // [rsp+8h] [rbp-3D0h]
  _QWORD *v111; // [rsp+8h] [rbp-3D0h]
  __int64 v112; // [rsp+10h] [rbp-3C8h]
  unsigned int v113; // [rsp+10h] [rbp-3C8h]
  std::_V2 *v114; // [rsp+10h] [rbp-3C8h]
  _QWORD *v115; // [rsp+10h] [rbp-3C8h]
  __int64 v116; // [rsp+10h] [rbp-3C8h]
  std::_V2 *v117; // [rsp+18h] [rbp-3C0h]
  __int64 v118; // [rsp+18h] [rbp-3C0h]
  __int64 v119; // [rsp+18h] [rbp-3C0h]
  std::_V2 *v120; // [rsp+18h] [rbp-3C0h]
  __m128i *v121; // [rsp+28h] [rbp-3B0h]
  int v122; // [rsp+30h] [rbp-3A8h]
  unsigned int v123; // [rsp+30h] [rbp-3A8h]
  __m128i *v124; // [rsp+30h] [rbp-3A8h]
  std::_V2 *v125; // [rsp+38h] [rbp-3A0h]
  __m128i *v126; // [rsp+40h] [rbp-398h]
  unsigned int v127; // [rsp+40h] [rbp-398h]
  __m128i *v128; // [rsp+48h] [rbp-390h]
  int v129; // [rsp+48h] [rbp-390h]
  int v130; // [rsp+48h] [rbp-390h]
  __int64 v131; // [rsp+48h] [rbp-390h]
  int v132; // [rsp+48h] [rbp-390h]
  int v133; // [rsp+50h] [rbp-388h]
  int v134; // [rsp+50h] [rbp-388h]
  int v135; // [rsp+50h] [rbp-388h]
  __int64 v136; // [rsp+50h] [rbp-388h]
  int v137; // [rsp+50h] [rbp-388h]
  int v138; // [rsp+58h] [rbp-380h]
  int v139; // [rsp+68h] [rbp-370h]
  int v140; // [rsp+70h] [rbp-368h]
  __m128i *v141; // [rsp+88h] [rbp-350h] BYREF
  __int64 v142; // [rsp+90h] [rbp-348h] BYREF
  __int64 *v143; // [rsp+98h] [rbp-340h] BYREF
  __int64 v144; // [rsp+A0h] [rbp-338h] BYREF
  __int64 *v145; // [rsp+A8h] [rbp-330h] BYREF
  __int64 v146; // [rsp+B0h] [rbp-328h] BYREF
  __int64 *v147; // [rsp+B8h] [rbp-320h] BYREF
  __int64 v148; // [rsp+C0h] [rbp-318h] BYREF
  __int64 *v149; // [rsp+C8h] [rbp-310h] BYREF
  __int64 v150; // [rsp+D0h] [rbp-308h] BYREF
  __int64 *v151; // [rsp+D8h] [rbp-300h] BYREF
  __m128i *v152; // [rsp+E0h] [rbp-2F8h] BYREF
  __int64 v153; // [rsp+E8h] [rbp-2F0h] BYREF
  __int64 *v154; // [rsp+F0h] [rbp-2E8h] BYREF
  __int64 v155; // [rsp+F8h] [rbp-2E0h] BYREF
  __int64 *v156; // [rsp+100h] [rbp-2D8h] BYREF
  __m128i *v157; // [rsp+108h] [rbp-2D0h] BYREF
  __int64 v158; // [rsp+110h] [rbp-2C8h] BYREF
  __int64 *v159; // [rsp+118h] [rbp-2C0h] BYREF
  __int64 v160; // [rsp+120h] [rbp-2B8h] BYREF
  __int64 *v161; // [rsp+128h] [rbp-2B0h] BYREF
  __int64 v162; // [rsp+130h] [rbp-2A8h] BYREF
  __int64 *v163; // [rsp+138h] [rbp-2A0h] BYREF
  __int64 v164; // [rsp+140h] [rbp-298h] BYREF
  __int64 *v165; // [rsp+148h] [rbp-290h] BYREF
  __m128i *v166; // [rsp+150h] [rbp-288h] BYREF
  __int64 v167; // [rsp+158h] [rbp-280h] BYREF
  __int64 *v168; // [rsp+160h] [rbp-278h] BYREF
  __int64 v169; // [rsp+168h] [rbp-270h] BYREF
  __int64 *v170; // [rsp+170h] [rbp-268h] BYREF
  __m128i *v171; // [rsp+178h] [rbp-260h] BYREF
  __int64 v172; // [rsp+180h] [rbp-258h] BYREF
  __int64 *v173; // [rsp+188h] [rbp-250h] BYREF
  __int64 v174; // [rsp+190h] [rbp-248h] BYREF
  __int64 *v175; // [rsp+198h] [rbp-240h] BYREF
  __int64 v176; // [rsp+1A0h] [rbp-238h] BYREF
  __int64 *v177; // [rsp+1A8h] [rbp-230h] BYREF
  __m128i v178; // [rsp+1B0h] [rbp-228h] BYREF
  __int64 v179; // [rsp+1C0h] [rbp-218h]
  _QWORD v180[2]; // [rsp+1D0h] [rbp-208h] BYREF
  unsigned __int8 v181; // [rsp+1E0h] [rbp-1F8h]
  _QWORD v182[2]; // [rsp+1F0h] [rbp-1E8h] BYREF
  unsigned __int8 v183; // [rsp+200h] [rbp-1D8h]
  _QWORD v184[2]; // [rsp+210h] [rbp-1C8h] BYREF
  unsigned __int8 v185; // [rsp+220h] [rbp-1B8h]
  _QWORD v186[2]; // [rsp+230h] [rbp-1A8h] BYREF
  char v187; // [rsp+240h] [rbp-198h]
  _QWORD v188[2]; // [rsp+250h] [rbp-188h] BYREF
  unsigned __int8 v189; // [rsp+260h] [rbp-178h]
  _QWORD v190[2]; // [rsp+270h] [rbp-168h] BYREF
  unsigned __int8 v191; // [rsp+280h] [rbp-158h]
  _QWORD v192[2]; // [rsp+290h] [rbp-148h] BYREF
  unsigned __int8 v193; // [rsp+2A0h] [rbp-138h]
  _QWORD v194[2]; // [rsp+2B0h] [rbp-128h] BYREF
  char v195; // [rsp+2C0h] [rbp-118h]
  _QWORD v196[2]; // [rsp+2D0h] [rbp-108h] BYREF
  unsigned __int8 v197; // [rsp+2E0h] [rbp-F8h]
  _QWORD v198[2]; // [rsp+2F0h] [rbp-E8h] BYREF
  unsigned __int8 v199; // [rsp+300h] [rbp-D8h]
  _QWORD v200[2]; // [rsp+310h] [rbp-C8h] BYREF
  unsigned __int8 v201; // [rsp+320h] [rbp-B8h]
  _QWORD v202[2]; // [rsp+330h] [rbp-A8h] BYREF
  unsigned __int8 v203; // [rsp+340h] [rbp-98h]
  __int64 v204; // [rsp+350h] [rbp-88h] BYREF
  __int64 v205; // [rsp+358h] [rbp-80h]
  unsigned __int8 v206; // [rsp+360h] [rbp-78h]
  __m128i v207; // [rsp+370h] [rbp-68h] BYREF
  std::_V2 *v208; // [rsp+380h] [rbp-58h]
  __int16 v209; // [rsp+390h] [rbp-48h]

  v9 = a7;
  if ( a9 == -1 )
  {
    v103 = &v178;
    for ( i = 6; i; --i )
    {
      v103->m128i_i32[0] = 0;
      v103 = (__m128i *)((char *)v103 + 4);
    }
    goto LABEL_247;
  }
  v10 = a1;
  v11 = a2;
  v179 = 0;
  v178 = 0;
  if ( a9 == 1 )
  {
    v178.m128i_i64[0] = (__int64)a7;
    LOBYTE(v179) = 1;
  }
  else
  {
    if ( a9 )
      goto LABEL_247;
    if ( !a8 )
    {
      v209 = 259;
      v207.m128i_i64[0] = (__int64)"Empty symbol name";
      v38 = std::_V2::generic_category(a7);
      v39 = operator new(0x40u);
      sub_2220590(v39, &v207, 22, v38);
      *a1 = v39;
      v206 |= 1u;
      v204 = 0;
      sub_111DFC0(&v204);
      return v10;
    }
    v41 = (char ***)sub_21C6410(a7);
    v206 &= ~1u;
    v205 = v42;
    v204 = (__int64)v41;
    sub_21BF540(&v207, (__int64 *)(a2 + 168), a2 + 96);
    v178 = _mm_load_si128(&v207);
    v9 = v208;
    sub_111DFC0(&v204);
  }
  v12 = *(unsigned int *)(a2 + 144);
  v106 = *(__m128i **)(a2 + 128);
  if ( !(_DWORD)v12 )
    goto LABEL_5;
  v180[0] = -1;
  v180[1] = 0;
  v181 = 0;
  v182[0] = -2;
  v182[1] = 0;
  v183 = 0;
  v141 = &v178;
  v31 = (__int64 **)&v141;
  v129 = 1;
  v134 = v12 - 1;
  v32 = nullptr;
  v113 = (v12 - 1)
       & ((unsigned __int64 (__fastcall *)(__int64, _QWORD *))funcs_21C1637[(unsigned __int8)v179])(
           (__int64)&v141,
           &v178);
  while ( 1 )
  {
    m128i_i64 = (__int64)v106[2 * v113].m128i_i64;
    v34 = *(unsigned __int8 *)(m128i_i64 + 16);
    if ( (_BYTE)v179 == 0xFF )
    {
      if ( (_BYTE)v34 == 0xFF )
        goto LABEL_36;
    }
    else if ( (_BYTE)v34 != 0xFF && (_BYTE)v179 == (_BYTE)v34 )
    {
      v142 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v34])((__int64)&v207, (__int64)&v178);
      v143 = &v142;
      v35 = *(unsigned __int8 *)(m128i_i64 + 16);
      if ( (_BYTE)v35 == 0xFF )
        goto LABEL_247;
      v31 = &v143;
      if ( ((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v35])((_QWORD ***)&v143, (_QWORD *)m128i_i64) )
      {
LABEL_36:
        v207.m128i_i64[0] = (__int64)"Duplicate symbol or string literal added. User of DataAccessProfData should aggrega"
                                     "te count for the same symbol. ";
        v209 = 259;
        v36 = std::_V2::generic_category((std::_V2 *)v31);
        v37 = operator new(0x40u);
        sub_2220590(v37, &v207, 22, v36);
        *v10 = v37;
        return v10;
      }
      v34 = *(unsigned __int8 *)(m128i_i64 + 16);
    }
    if ( (_BYTE)v34 != 0xFF )
      break;
    if ( v181 == 0xFF )
      goto LABEL_108;
LABEL_46:
    if ( (_BYTE)v34 == 0xFF )
    {
      if ( v183 != 0xFF )
        goto LABEL_53;
LABEL_51:
      if ( !v32 )
        v32 = &v106[2 * v113];
      goto LABEL_53;
    }
    if ( v183 != 0xFF && (_BYTE)v34 == v183 )
    {
      v146 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v34])((__int64)&v207, m128i_i64);
      v147 = &v146;
      if ( v183 == 0xFF )
        goto LABEL_247;
      v31 = &v147;
      if ( ((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v183])((_QWORD ***)&v147, v182) )
        goto LABEL_51;
    }
LABEL_53:
    v113 = v134 & (v129 + v113);
    ++v129;
  }
  if ( v181 == 0xFF || v181 != (_BYTE)v34 )
    goto LABEL_46;
  v144 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v34])((__int64)&v207, m128i_i64);
  v145 = &v144;
  if ( v181 == 0xFF )
    goto LABEL_247;
  v31 = &v145;
  if ( !((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v181])((_QWORD ***)&v145, v180) )
  {
    v34 = *(unsigned __int8 *)(m128i_i64 + 16);
    goto LABEL_46;
  }
LABEL_108:
  a4 = v32;
  v72 = *(_DWORD *)(a2 + 136);
  if ( !v32 )
    a4 = &v106[2 * v113];
  v12 = *(unsigned int *)(a2 + 144);
  v49 = v72 + 1;
  if ( 4 * (v72 + 1) >= (unsigned int)(3 * v12) )
  {
    v106 = *(__m128i **)(a2 + 128);
LABEL_5:
    v13 = (((((((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v12 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v12 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v12 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v12 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1);
    v14 = ((v13 >> 16) | v13) + 1;
    if ( (unsigned int)v14 < 0x40 )
      LODWORD(v14) = 64;
    *(_DWORD *)(a2 + 144) = v14;
    v15 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v14, 8, 64, a4, a5, a6);
    v16 = v15;
    *(_QWORD *)(a2 + 128) = v15;
    if ( v106 )
    {
      *(_QWORD *)(a2 + 136) = 0;
      v112 = 32 * v12;
      v17 = &v106[2 * v12];
      for ( j = &v15[4 * *(unsigned int *)(a2 + 144)]; j != v16; *((_BYTE *)v16 - 16) = 0 )
      {
        *v16 = -1;
        v16 += 4;
        *(v16 - 3) = 0;
      }
      v188[1] = 0;
      v188[0] = -1;
      v189 = 0;
      v190[0] = -2;
      v190[1] = 0;
      v191 = 0;
      if ( v17 != v106 )
      {
        v19 = 0;
        v117 = v9;
        v20 = v106;
        while ( 1 )
        {
          v21 = v20[1].m128i_u8[0];
          if ( (_BYTE)v21 == 0xFF )
          {
            if ( (_BYTE)v19 == 0xFF )
              goto LABEL_56;
          }
          else if ( (_BYTE)v19 != 0xFF && (_BYTE)v21 == (_BYTE)v19 )
          {
            v148 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v19])((__int64)&v207, (__int64)v20);
            v149 = &v148;
            if ( v189 == 0xFF )
              goto LABEL_247;
            if ( ((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v189])((_QWORD ***)&v149, v188) )
              goto LABEL_56;
            v21 = v20[1].m128i_u8[0];
          }
          if ( (_BYTE)v21 == 0xFF )
          {
            if ( v191 == 0xFF )
              goto LABEL_56;
          }
          else if ( v191 != 0xFF && v191 == (_BYTE)v21 )
          {
            v150 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v21])((__int64)&v207, (__int64)v20);
            v151 = &v150;
            if ( v191 == 0xFF )
              goto LABEL_247;
            if ( ((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v191])((_QWORD ***)&v151, v190) )
              goto LABEL_56;
          }
          v122 = *(_DWORD *)(v11 + 144);
          if ( !v122 )
          {
            *(__m128i *)&dword_0 = _mm_loadu_si128(v20);
            LOBYTE(word_10) = v20[1].m128i_i8[0];
            BUG();
          }
          v22 = *(std::_V2 **)(v11 + 128);
          v192[1] = 0;
          v193 = 0;
          v125 = v22;
          v194[1] = 0;
          v192[0] = -1;
          v195 = 0;
          v194[0] = -2;
          v152 = v20;
          v23 = v20[1].m128i_u8[0];
          if ( (_BYTE)v23 == 0xFF )
            goto LABEL_247;
          v126 = v17;
          v133 = 1;
          v128 = nullptr;
          v139 = v122 - 1;
          v123 = (v122 - 1)
               & ((unsigned __int64 (__fastcall *)(__int64, _QWORD *))funcs_21C1637[v23])((__int64)&v152, v20);
          v24 = v11;
          v25 = (__int64)v20;
          v26 = v24;
          while ( 1 )
          {
            v27 = *(_BYTE *)(v25 + 16);
            v28 = (__int64)v125 + 32 * v123;
            v29 = *(unsigned __int8 *)(v28 + 16);
            if ( v27 == -1 )
            {
              if ( (_BYTE)v29 == 0xFF )
                goto LABEL_189;
            }
            else if ( (_BYTE)v29 != 0xFF && (_BYTE)v29 == v27 )
            {
              v153 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v29])((__int64)&v207, v25);
              v154 = &v153;
              v98 = *(unsigned __int8 *)(v28 + 16);
              if ( (_BYTE)v98 == 0xFF )
                goto LABEL_247;
              if ( ((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v98])((_QWORD ***)&v154, (_QWORD *)v28) )
              {
LABEL_189:
                v99 = v26;
                v100 = (__m128i *)((char *)v125 + 32 * v123);
                v17 = v126;
                v20 = (__m128i *)v25;
                v11 = v99;
                goto LABEL_190;
              }
              v29 = *(unsigned __int8 *)(v28 + 16);
            }
            if ( (_BYTE)v29 != 0xFF )
              break;
            if ( v193 == 0xFF )
              goto LABEL_215;
LABEL_27:
            v30 = sub_21C11D0(v28, (__int64)v194);
            if ( v128 || !v30 )
              v28 = (__int64)v128;
            v128 = (__m128i *)v28;
            v123 = v139 & (v133 + v123);
            ++v133;
          }
          if ( v193 == 0xFF || v193 != (_BYTE)v29 )
            goto LABEL_27;
          v155 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v29])((__int64)&v207, v28);
          v156 = &v155;
          if ( v193 == 0xFF )
            goto LABEL_247;
          if ( !((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v193])((_QWORD ***)&v156, v192) )
            goto LABEL_27;
LABEL_215:
          v102 = v26;
          v20 = (__m128i *)v25;
          v100 = (__m128i *)((char *)v125 + 32 * v123);
          v17 = v126;
          v11 = v102;
          if ( v128 )
            v100 = v128;
LABEL_190:
          *v100 = _mm_loadu_si128(v20);
          v100[1].m128i_i8[0] = v20[1].m128i_i8[0];
          v100[1].m128i_i32[2] = v20[1].m128i_i32[2];
          ++*(_DWORD *)(v11 + 136);
LABEL_56:
          v20 += 2;
          if ( v17 == v20 )
          {
            v9 = v117;
            break;
          }
          v19 = v189;
        }
      }
      operator delete(v106, v112, 8);
      v16 = *(_QWORD **)(v11 + 128);
      v43 = *(_DWORD *)(v11 + 144);
    }
    else
    {
      v92 = *(unsigned int *)(a2 + 144);
      *(_QWORD *)(a2 + 136) = 0;
      v43 = v92;
      for ( k = &v15[4 * v92]; k != v15; *((_BYTE *)v15 - 16) = 0 )
      {
        *v15 = -1;
        v15 += 4;
        *(v15 - 3) = 0;
      }
    }
    if ( v43 )
    {
      v107 = v16;
      v184[0] = -1;
      v184[1] = 0;
      v185 = 0;
      v186[0] = -2;
      v186[1] = 0;
      v187 = 0;
      v157 = &v178;
      if ( (_BYTE)v179 != 0xFF )
      {
        v114 = v9;
        v135 = v43 - 1;
        v44 = (v43 - 1)
            & ((unsigned __int64 (__fastcall *)(__int64, _QWORD *))funcs_21C1637[(unsigned __int8)v179])(
                (__int64)&v157,
                &v178);
        v118 = v11;
        v130 = 1;
        v121 = nullptr;
        while ( 1 )
        {
          v45 = (__int64)&v107[4 * v44];
          v46 = v45;
          v47 = *(unsigned __int8 *)(v45 + 16);
          if ( (_BYTE)v179 == 0xFF )
          {
            if ( (_BYTE)v47 == 0xFF )
              goto LABEL_181;
          }
          else if ( (_BYTE)v47 != 0xFF && (_BYTE)v179 == (_BYTE)v47 )
          {
            v158 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v47])((__int64)&v207, (__int64)&v178);
            v159 = &v158;
            v96 = *(unsigned __int8 *)(v45 + 16);
            if ( (_BYTE)v96 == 0xFF )
              break;
            if ( ((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v96])((_QWORD ***)&v159, (_QWORD *)v45) )
              goto LABEL_181;
            v47 = *(unsigned __int8 *)(v45 + 16);
          }
          if ( (_BYTE)v47 == 0xFF )
          {
            if ( v185 == 0xFF )
              goto LABEL_211;
          }
          else if ( v185 != 0xFF && v185 == (_BYTE)v47 )
          {
            v160 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v47])((__int64)&v207, v45);
            v161 = &v160;
            if ( v185 == 0xFF )
              break;
            if ( ((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v185])((_QWORD ***)&v161, v184) )
            {
LABEL_211:
              a4 = (__m128i *)&v107[4 * v44];
              v9 = v114;
              if ( v121 )
              {
                v46 = (__int64)v121;
                a4 = v121;
              }
              goto LABEL_80;
            }
          }
          v48 = sub_21C11D0(v45, (__int64)v186);
          if ( v121 || !v48 )
            v45 = (__int64)v121;
          v121 = (__m128i *)v45;
          v44 = v135 & (v130 + v44);
          ++v130;
        }
      }
LABEL_247:
      abort();
    }
LABEL_79:
    v46 = 0;
    a4 = nullptr;
    goto LABEL_80;
  }
  if ( (int)v12 - *(_DWORD *)(a2 + 140) - v49 > (unsigned int)v12 >> 3 )
  {
    v46 = (__int64)a4;
    goto LABEL_81;
  }
  v73 = *(__m128i **)(a2 + 128);
  v110 = v73;
  v74 = ((((((((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
             | (unsigned int)(v12 - 1)
             | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
           | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
           | (unsigned int)(v12 - 1)
           | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 8)
         | (((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
           | (unsigned int)(v12 - 1)
           | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
         | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
         | (unsigned int)(v12 - 1)
         | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 16)
       | (((((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
           | (unsigned int)(v12 - 1)
           | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
         | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
         | (unsigned int)(v12 - 1)
         | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 8)
       | (((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
         | (unsigned int)(v12 - 1)
         | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
       | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
       | (unsigned int)(v12 - 1)
       | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1))
      + 1;
  if ( (unsigned int)v74 < 0x40 )
    LODWORD(v74) = 64;
  *(_DWORD *)(a2 + 144) = v74;
  v75 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v74, 8, 64, a4, a5, a6);
  v76 = v75;
  *(_QWORD *)(a2 + 128) = v75;
  if ( !v73 )
  {
    v94 = *(unsigned int *)(a2 + 144);
    *(_QWORD *)(a2 + 136) = 0;
    v89 = v94;
    for ( m = &v75[4 * v94]; m != v75; *((_BYTE *)v75 - 16) = 0 )
    {
      *v75 = -1;
      v75 += 4;
      *(v75 - 3) = 0;
    }
    goto LABEL_149;
  }
  *(_QWORD *)(a2 + 136) = 0;
  v116 = 32 * v12;
  v77 = &v73[2 * v12];
  for ( n = &v75[4 * *(unsigned int *)(a2 + 144)]; n != v76; *((_BYTE *)v76 - 16) = 0 )
  {
    *v76 = -1;
    v76 += 4;
    *(v76 - 3) = 0;
  }
  v200[1] = 0;
  v200[0] = -1;
  v201 = 0;
  v202[0] = -2;
  v202[1] = 0;
  v203 = 0;
  if ( v73 == v77 )
    goto LABEL_148;
  v79 = 0;
  v120 = v9;
  v80 = v73;
  while ( 2 )
  {
    v81 = v80[1].m128i_u8[0];
    if ( (_BYTE)v81 == 0xFF )
    {
      if ( v79 == 0xFF )
        goto LABEL_140;
    }
    else if ( v79 != 0xFF && v79 == (_BYTE)v81 )
    {
      v162 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v81])((__int64)&v207, (__int64)v80);
      v163 = &v162;
      if ( v201 == 0xFF )
        goto LABEL_247;
      if ( ((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v201])((_QWORD ***)&v163, v200) )
        goto LABEL_140;
      v81 = v80[1].m128i_u8[0];
    }
    if ( (_BYTE)v81 == 0xFF )
    {
      if ( v203 == 0xFF )
        goto LABEL_140;
    }
    else if ( v203 != 0xFF && v203 == (_BYTE)v81 )
    {
      v164 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v81])((__int64)&v207, (__int64)v80);
      v165 = &v164;
      if ( v203 == 0xFF )
        goto LABEL_247;
      if ( ((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v203])((_QWORD ***)&v165, v202) )
        goto LABEL_140;
    }
    v82 = *(_DWORD *)(a2 + 144);
    if ( !v82 )
    {
      *(__m128i *)&dword_0 = _mm_loadu_si128(v80);
      LOBYTE(word_10) = v80[1].m128i_i8[0];
      BUG();
    }
    v83 = *(_QWORD *)(a2 + 128);
    v205 = 0;
    v206 = 0;
    v131 = v83;
    v204 = -1;
    LOBYTE(v208) = 0;
    v207 = (__m128i)0xFFFFFFFFFFFFFFFELL;
    v166 = v80;
    v84 = v80[1].m128i_u8[0];
    if ( (_BYTE)v84 == 0xFF )
      goto LABEL_247;
    v138 = 1;
    v140 = v82 - 1;
    v127 = (v82 - 1) & ((unsigned __int64 (__fastcall *)(__int64, _QWORD *))funcs_21C1637[v84])((__int64)&v166, v80);
    v136 = 0;
    while ( 2 )
    {
      v85 = v80[1].m128i_i8[0];
      v86 = v131 + 32LL * v127;
      v87 = *(unsigned __int8 *)(v86 + 16);
      if ( v85 == -1 )
      {
        if ( (_BYTE)v87 == 0xFF )
          goto LABEL_193;
      }
      else if ( (_BYTE)v87 != 0xFF && v85 == (_BYTE)v87 )
      {
        v167 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v87])((__int64)v198, (__int64)v80);
        v168 = &v167;
        v101 = *(unsigned __int8 *)(v86 + 16);
        if ( (_BYTE)v101 == 0xFF )
          goto LABEL_247;
        if ( ((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v101])((_QWORD ***)&v168, (_QWORD *)v86) )
          goto LABEL_193;
        v87 = *(unsigned __int8 *)(v86 + 16);
      }
      if ( (_BYTE)v87 == 0xFF )
      {
        if ( v206 == 0xFF )
          break;
        goto LABEL_135;
      }
      if ( v206 == 0xFF || v206 != (_BYTE)v87 )
        goto LABEL_135;
      v169 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v87])((__int64)v198, v86);
      v170 = &v169;
      if ( v206 == 0xFF )
        goto LABEL_247;
      if ( !((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v206])((_QWORD ***)&v170, &v204) )
      {
LABEL_135:
        v88 = sub_21C11D0(v86, (__int64)&v207);
        if ( v136 || !v88 )
          v86 = v136;
        v136 = v86;
        v127 = v140 & (v138 + v127);
        ++v138;
        continue;
      }
      break;
    }
    if ( v136 )
      v86 = v136;
LABEL_193:
    *(__m128i *)v86 = _mm_loadu_si128(v80);
    *(_BYTE *)(v86 + 16) = v80[1].m128i_i8[0];
    *(_DWORD *)(v86 + 24) = v80[1].m128i_i32[2];
    ++*(_DWORD *)(a2 + 136);
LABEL_140:
    v80 += 2;
    if ( v77 != v80 )
    {
      v79 = v201;
      continue;
    }
    break;
  }
  v9 = v120;
LABEL_148:
  operator delete(v110, v116, 8);
  v76 = *(_QWORD **)(a2 + 128);
  v89 = *(_DWORD *)(a2 + 144);
LABEL_149:
  if ( !v89 )
    goto LABEL_79;
  v111 = v76;
  v196[0] = -1;
  v196[1] = 0;
  v197 = 0;
  v198[0] = -2;
  v198[1] = 0;
  v199 = 0;
  v171 = &v178;
  if ( (_BYTE)v179 == 0xFF )
    goto LABEL_247;
  v114 = v9;
  v137 = v89 - 1;
  v90 = (v89 - 1)
      & ((unsigned __int64 (__fastcall *)(__int64, _QWORD *))funcs_21C1637[(unsigned __int8)v179])(
          (__int64)&v171,
          &v178);
  v118 = a2;
  v132 = 1;
  v124 = nullptr;
  while ( 2 )
  {
    v45 = (__int64)&v111[4 * v90];
    v46 = v45;
    v91 = *(unsigned __int8 *)(v45 + 16);
    if ( (_BYTE)v179 == 0xFF )
    {
      if ( (_BYTE)v91 == 0xFF )
        goto LABEL_181;
    }
    else if ( (_BYTE)v91 != 0xFF && (_BYTE)v91 == (_BYTE)v179 )
    {
      v172 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v91])((__int64)&v207, (__int64)&v178);
      v173 = &v172;
      v97 = *(unsigned __int8 *)(v45 + 16);
      if ( (_BYTE)v97 == 0xFF )
        goto LABEL_247;
      if ( ((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v97])((_QWORD ***)&v173, (_QWORD *)v45) )
      {
LABEL_181:
        a4 = (__m128i *)v45;
        v11 = v118;
        v9 = v114;
        goto LABEL_80;
      }
      v91 = *(unsigned __int8 *)(v45 + 16);
    }
    if ( (_BYTE)v91 == 0xFF )
    {
      if ( v197 == 0xFF )
        goto LABEL_204;
LABEL_158:
      if ( (_BYTE)v91 == 0xFF )
      {
        if ( v199 != 0xFF )
        {
LABEL_166:
          v90 = v137 & (v132 + v90);
          ++v132;
          continue;
        }
      }
      else
      {
        if ( v199 == 0xFF || v199 != (_BYTE)v91 )
          goto LABEL_166;
        v176 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v91])((__int64)&v207, v45);
        v177 = &v176;
        if ( v199 == 0xFF )
          goto LABEL_247;
        if ( !((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v199])((_QWORD ***)&v177, v198) )
          goto LABEL_166;
      }
      if ( v124 )
        v45 = (__int64)v124;
      v124 = (__m128i *)v45;
      goto LABEL_166;
    }
    break;
  }
  if ( v197 == 0xFF || v197 != (_BYTE)v91 )
    goto LABEL_158;
  v174 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v91])((__int64)&v207, v45);
  v175 = &v174;
  if ( v197 == 0xFF )
    goto LABEL_247;
  if ( !((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v197])((_QWORD ***)&v175, v196) )
  {
    v91 = *(unsigned __int8 *)(v45 + 16);
    goto LABEL_158;
  }
LABEL_204:
  a4 = (__m128i *)&v111[4 * v90];
  v9 = v114;
  if ( v124 )
  {
    v46 = (__int64)v124;
    a4 = v124;
  }
LABEL_80:
  v49 = *(_DWORD *)(v11 + 136) + 1;
LABEL_81:
  *(_DWORD *)(v11 + 136) = v49;
  v207 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  LOBYTE(v208) = 0;
  if ( a4[1].m128i_i8[0]
    || (v108 = a4,
        v202[0] = sub_21BF340((__int64)&v204, v46),
        v204 = (__int64)v202,
        v50 = sub_21BF4E0((char ****)&v204, (__int64)&v207),
        a4 = v108,
        !v50) )
  {
    --*(_DWORD *)(v11 + 140);
  }
  v51 = a9 == 1;
  *a4 = _mm_load_si128(&v178);
  v52 = v179;
  a4[1].m128i_i32[2] = 0;
  a4[1].m128i_i8[0] = v52;
  v53 = *(unsigned int *)(v11 + 160);
  a4[1].m128i_i32[2] = v53;
  if ( *(_DWORD *)(v11 + 164) <= (unsigned int)v53 )
  {
    v109 = (_QWORD *)(v11 + 168);
    v56 = sub_2237400(v11 + 152, v11 + 168, 0, 64, &v207);
    v57 = _mm_load_si128(&v178);
    v58 = v56;
    v59 = (__m128i *)(v56 + ((unsigned __int64)*(unsigned int *)(v11 + 160) << 6));
    v59[1].m128i_i64[0] = v179;
    v59[3].m128i_i64[1] = 0;
    v60 = *(unsigned int *)(v11 + 160);
    *v59 = v57;
    v59[2].m128i_i8[8] = v51;
    v59[3].m128i_i64[0] = (__int64)v59[4].m128i_i64;
    v61 = *(_QWORD *)(v11 + 152);
    v59[1].m128i_i64[1] = (__int64)v9;
    v62 = (_QWORD *)(v61 + (v60 << 6));
    v59[2].m128i_i64[0] = a3;
    if ( (_QWORD *)v61 != v62 )
    {
      v63 = v58;
      v115 = v10;
      v119 = v11;
      do
      {
        v64 = (_QWORD *)(v61 + 64);
        *(__m128i *)v63 = _mm_loadu_si128((const __m128i *)v61);
        *(_QWORD *)(v63 + 16) = *(_QWORD *)(v61 + 16);
        *(_QWORD *)(v63 + 24) = *(_QWORD *)(v61 + 24);
        *(_QWORD *)(v63 + 32) = *(_QWORD *)(v61 + 32);
        v65 = *(_BYTE *)(v61 + 40);
        *(_DWORD *)(v63 + 56) = 0;
        *(_DWORD *)(v63 + 60) = 0;
        v66 = *(_DWORD *)(v61 + 56);
        *(_BYTE *)(v63 + 40) = v65;
        *(_QWORD *)(v63 + 48) = v63 + 64;
        if ( v66 && v63 + 48 != v61 + 48 )
        {
          v67 = *(_QWORD **)(v61 + 48);
          if ( v67 == v64 )
          {
            sub_2237220(v63 + 48, v63 + 64, v66, 24);
            v71 = 24LL * *(unsigned int *)(v61 + 56);
            if ( v71 )
              memcpy(*(void **)(v63 + 48), *(const void **)(v61 + 48), v71);
            *(_DWORD *)(v63 + 56) = v66;
            *(_DWORD *)(v61 + 56) = 0;
          }
          else
          {
            *(_QWORD *)(v63 + 48) = v67;
            *(_DWORD *)(v63 + 56) = v66;
            *(_DWORD *)(v63 + 60) = *(_DWORD *)(v61 + 60);
            *(_QWORD *)(v61 + 48) = v64;
            *(_DWORD *)(v61 + 60) = 0;
            *(_DWORD *)(v61 + 56) = 0;
          }
        }
        v63 += 64;
        v61 += 64;
      }
      while ( v62 != v64 );
      v11 = v119;
      v10 = v115;
      v68 = *(_QWORD **)(v119 + 152);
      v62 = &v68[8 * (unsigned __int64)*(unsigned int *)(v119 + 160)];
      if ( v68 != v62 )
      {
        do
        {
          while ( 1 )
          {
            v62 -= 8;
            v69 = (_QWORD *)v62[6];
            if ( v69 == v62 + 8 )
              break;
            free(v69);
            if ( v68 == v62 )
              goto LABEL_97;
          }
        }
        while ( v68 != v62 );
LABEL_97:
        v62 = *(_QWORD **)(v119 + 152);
      }
    }
    v70 = v207.m128i_i32[0];
    if ( v109 != v62 )
      free(v62);
    *(_QWORD *)(v11 + 152) = v58;
    *(_DWORD *)(v11 + 164) = v70;
    ++*(_DWORD *)(v11 + 160);
  }
  else
  {
    v54 = _mm_load_si128(&v178);
    v55 = (__m128i *)(*(_QWORD *)(v11 + 152) + (v53 << 6));
    v55[1].m128i_i64[0] = v179;
    *v55 = v54;
    v55[1].m128i_i64[1] = (__int64)v9;
    v55[2].m128i_i64[0] = a3;
    v55[2].m128i_i8[8] = v51;
    v55[3].m128i_i64[0] = (__int64)v55[4].m128i_i64;
    v55[3].m128i_i64[1] = 0;
    ++*(_DWORD *)(v11 + 160);
  }
  *v10 = 0;
  return v10;
}
