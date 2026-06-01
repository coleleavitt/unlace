__int64 __fastcall sub_71EEC0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, char *a5)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  char *v7; // rbp
  _BYTE *v8; // r11
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v12; // r8
  unsigned int v13; // edx
  __int64 *v14; // r12
  int v15; // ecx
  __int64 v16; // r13
  int v17; // eax
  int v18; // edi
  __int64 v19; // rax
  size_t *v20; // rax
  size_t *v21; // rdx
  size_t v22; // rax
  size_t *v24; // r13
  unsigned int v25; // eax
  void *v26; // rax
  size_t *v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  void *v33; // r9
  unsigned __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  size_t v39; // r15
  void *v40; // r13
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r14
  void *v44; // r8
  size_t v45; // r13
  bool v46; // r15
  _QWORD *v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rsi
  void **v51; // rax
  _QWORD *v52; // rdi
  void **v53; // rdx
  char *v54; // rcx
  void *v55; // rsi
  void *v56; // rsi
  _QWORD *v57; // rdi
  __int64 v58; // r12
  char *v59; // r13
  char *v60; // r15
  char *v61; // r14
  __int64 v62; // r13
  __int64 v63; // rbp
  _QWORD *v64; // rax
  unsigned __int64 v65; // rdx
  size_t *v66; // rcx
  size_t *v67; // rbp
  size_t v68; // rax
  size_t *v69; // rbx
  size_t *v70; // rbp
  size_t v71; // rax
  size_t v72; // rdx
  size_t v73; // r15
  size_t v74; // r14
  void **v75; // r13
  size_t *v76; // r12
  size_t *v77; // rsi
  size_t v78; // rdx
  signed __int64 v79; // rax
  size_t v80; // rax
  size_t *v81; // r14
  size_t v82; // r8
  size_t *v83; // rcx
  size_t v84; // rdx
  const void *v85; // rbp
  size_t v86; // r12
  unsigned int v87; // eax
  unsigned int v88; // r13d
  _QWORD *v89; // rbx
  char *v90; // rax
  void *v91; // r13
  unsigned int v92; // eax
  int v93; // eax
  unsigned int v94; // r9d
  __int64 v95; // r11
  unsigned int v96; // ecx
  __int64 *v97; // rsi
  int v98; // r8d
  __int64 v99; // rdi
  int v100; // edx
  _QWORD *v101; // rax
  int v102; // ecx
  int v103; // esi
  int v104; // edx
  __int64 v105; // rdx
  _QWORD *v106; // rax
  __int64 v107; // rax
  _QWORD *v108; // rcx
  size_t *v109; // rdi
  size_t *v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rsi
  __int64 v113; // rax
  unsigned int v114; // ecx
  _QWORD *v115; // r11
  _QWORD *v116; // r14
  unsigned int v117; // eax
  __int64 *v118; // rax
  __int64 *v119; // rax
  void *v120; // rax
  _QWORD *v121; // rdi
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rsi
  void *v126; // rsi
  unsigned int v127; // esi
  __int64 v128; // rax
  __int64 v129; // rsi
  __int64 v130; // r10
  __int64 v131; // rcx
  void *v132; // r13
  _QWORD *v133; // rdx
  char *v134; // rax
  __int64 v135; // rsi
  char *v136; // rcx
  __int64 v137; // rdi
  unsigned int v138; // ecx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rbx
  __int64 v142; // r13
  int v143; // eax
  __int64 v144; // rax
  void *v145; // rdx
  size_t v146; // rdi
  int v147; // esi
  int v148; // ecx
  _QWORD *v149; // r13
  __int64 v150; // rdx
  _QWORD *v151; // rbx
  _QWORD *v152; // r12
  char *v153; // rax
  __int64 v154; // r12
  __int64 v155; // rbx
  __int64 v156; // rdi
  char *v157; // rdi
  __int64 v158; // r13
  __int64 v159; // r12
  __int64 v160; // rbx
  __int64 v161; // r14
  __int64 v162; // rax
  __int64 v163; // rbp
  unsigned __int64 v164; // r8
  char *v165; // rdi
  char *v166; // r11
  unsigned int v167; // esi
  unsigned int v168; // esi
  unsigned int v169; // edi
  __int64 v170; // r9
  unsigned __int64 v171; // rdi
  unsigned int v172; // ecx
  unsigned int v173; // ecx
  unsigned int v174; // r8d
  __int64 v175; // r11
  _BYTE *srcc; // [rsp+0h] [rbp-408h]
  void *src; // [rsp+0h] [rbp-408h]
  size_t *srca; // [rsp+0h] [rbp-408h]
  size_t *srcd; // [rsp+0h] [rbp-408h]
  size_t *srce; // [rsp+0h] [rbp-408h]
  _QWORD *srcf; // [rsp+0h] [rbp-408h]
  int srcb; // [rsp+0h] [rbp-408h]
  size_t *v183; // [rsp+8h] [rbp-400h]
  size_t *v184; // [rsp+10h] [rbp-3F8h]
  size_t *v185; // [rsp+18h] [rbp-3F0h]
  int v186; // [rsp+2Ch] [rbp-3DCh]
  char *v187; // [rsp+30h] [rbp-3D8h]
  unsigned int v188; // [rsp+38h] [rbp-3D0h]
  __int64 v189; // [rsp+38h] [rbp-3D0h]
  char *v190; // [rsp+40h] [rbp-3C8h]
  void *v191; // [rsp+48h] [rbp-3C0h]
  unsigned int v192; // [rsp+48h] [rbp-3C0h]
  void *v193; // [rsp+48h] [rbp-3C0h]
  __int64 v194; // [rsp+48h] [rbp-3C0h]
  __int64 v195; // [rsp+50h] [rbp-3B8h]
  char *v196; // [rsp+50h] [rbp-3B8h]
  __int64 v197; // [rsp+50h] [rbp-3B8h]
  unsigned __int64 v198; // [rsp+58h] [rbp-3B0h]
  void *v199; // [rsp+58h] [rbp-3B0h]
  char *v200; // [rsp+60h] [rbp-3A8h]
  __int64 v201; // [rsp+68h] [rbp-3A0h]
  __int64 v202; // [rsp+70h] [rbp-398h]
  unsigned __int64 v203; // [rsp+78h] [rbp-390h]
  __int64 v204; // [rsp+80h] [rbp-388h]
  __int64 v205; // [rsp+88h] [rbp-380h]
  __int64 v206; // [rsp+A0h] [rbp-368h]
  int v207; // [rsp+A0h] [rbp-368h]
  __int64 v208; // [rsp+A8h] [rbp-360h]
  __int64 v209; // [rsp+B0h] [rbp-358h] BYREF
  __int64 v210; // [rsp+B8h] [rbp-350h]
  size_t v211; // [rsp+C8h] [rbp-340h] BYREF
  void *v212; // [rsp+D0h] [rbp-338h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-330h]
  void *v214; // [rsp+F0h] [rbp-318h] BYREF
  size_t v215; // [rsp+F8h] [rbp-310h]
  _QWORD v216[2]; // [rsp+100h] [rbp-308h] BYREF
  __int64 *v217; // [rsp+110h] [rbp-2F8h] BYREF
  int v218; // [rsp+118h] [rbp-2F0h]
  __int128 v219; // [rsp+120h] [rbp-2E8h]
  __int64 v220; // [rsp+130h] [rbp-2D8h]
  char v221; // [rsp+138h] [rbp-2D0h]
  int v222; // [rsp+13Ch] [rbp-2CCh]
  void **v223; // [rsp+140h] [rbp-2C8h]
  __int64 *v224; // [rsp+150h] [rbp-2B8h] BYREF
  int v225; // [rsp+158h] [rbp-2B0h]
  __int128 v226; // [rsp+160h] [rbp-2A8h]
  __int64 v227; // [rsp+170h] [rbp-298h]
  char v228; // [rsp+178h] [rbp-290h]
  int v229; // [rsp+17Ch] [rbp-28Ch]
  void **p_ptr; // [rsp+180h] [rbp-288h]
  void *v231; // [rsp+190h] [rbp-278h] BYREF
  size_t v232[2]; // [rsp+198h] [rbp-270h]
  _BYTE v233[264]; // [rsp+1A8h] [rbp-260h] BYREF
  void *ptr; // [rsp+2B0h] [rbp-158h] BYREF
  size_t n[2]; // [rsp+2B8h] [rbp-150h] BYREF
  _BYTE v236[320]; // [rsp+2C8h] [rbp-140h] BYREF

  v5 = *(_QWORD *)(a1 + 2160);
  v209 = a2;
  v210 = a3;
  if ( (*(_BYTE *)(v5 + 16) & 6) == 0 )
  {
    LODWORD(v7) = 1;
    return (unsigned int)v7;
  }
  v6 = a1;
  v7 = a5;
  v8 = a5;
  v9 = *(unsigned int *)(a1 + 23208);
  v10 = v209;
  v186 = v210;
  v12 = *(_QWORD *)(a1 + 23192);
  if ( !(_DWORD)v9 )
    goto LABEL_25;
  v13 = (v9 - 1) & (((unsigned int)v209 >> 9) ^ ((unsigned int)v209 >> 4));
  v14 = (__int64 *)(v12 + 40LL * v13);
  v15 = *((_DWORD *)v14 + 2);
  v16 = *v14;
  if ( v15 != (_DWORD)v210 || v209 != v16 )
  {
    v17 = 1;
    while ( v15 || v16 )
    {
      v18 = v17 + 1;
      v19 = ((_DWORD)v9 - 1) & (v13 + v17);
      v13 = v19;
      v14 = (__int64 *)(v12 + 40 * v19);
      v16 = *v14;
      v15 = *((_DWORD *)v14 + 2);
      if ( v209 == *v14 && v15 == (_DWORD)v210 )
        goto LABEL_11;
      v17 = v18;
    }
    goto LABEL_25;
  }
LABEL_11:
  if ( v14 != (__int64 *)(v12 + 40 * v9) )
  {
    if ( !a4 )
    {
      LOBYTE(n[1]) = 0;
      v22 = 0;
      ptr = &n[1];
      v21 = &n[1];
      n[0] = 0;
LABEL_21:
      v7 = (char *)v22;
      v24 = v21;
      v25 = sub_25E2710(v21, v22);
      LOBYTE(v7) = (unsigned int)sub_25E29F0(v14 + 2, v24, v7, v25) != -1;
      if ( ptr != &n[1] )
        operator delete(ptr, n[1] + 1);
      return (unsigned int)v7;
    }
    v231 = v7;
    ptr = &n[1];
    if ( (unsigned __int64)v7 > 0xF )
    {
      srcc = a4;
      v26 = (void *)std::string::_M_create();
      a4 = srcc;
      ptr = v26;
      v27 = (size_t *)v26;
      n[1] = (size_t)v231;
    }
    else
    {
      if ( v7 == (_BYTE *)&dword_0 + 1 )
      {
        LOBYTE(n[1]) = *a4;
        goto LABEL_16;
      }
      if ( !v7 )
      {
LABEL_16:
        v20 = &n[1];
LABEL_17:
        n[0] = (size_t)v8;
        v8[(_QWORD)v20] = 0;
        v21 = (size_t *)ptr;
        v22 = n[0];
        goto LABEL_21;
      }
      v27 = &n[1];
    }
    memcpy(v27, a4, (size_t)v7);
    v8 = v231;
    v20 = (size_t *)ptr;
    goto LABEL_17;
  }
LABEL_25:
  src = a4;
  v28 = *(_QWORD *)(*(_QWORD *)(v6 + 2152) + 8LL);
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 17288) + 340LL) > 9u )
    v29 = sub_A633A0(v6, v28, 0);
  else
    v29 = sub_A37140(v6, v28, 0);
  v202 = v29;
  v212 = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E670);
  v30 = sub_6CE530((_QWORD *)v6);
  v31 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v30 + 24LL))(v30, v209, v210);
  v33 = src;
  if ( !v31 )
    goto LABEL_51;
  v203 = v209 & 0xFFFFFFFFFFFFFFF8LL;
  v34 = 0;
  if ( (*(_BYTE *)((v209 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) == 0x22 )
    v34 = v209 & 0xFFFFFFFFFFFFFFF8LL;
  v198 = v34;
  v201 = *(_QWORD *)v31 + 56LL * *(unsigned int *)(v31 + 8);
  if ( v201 == *(_QWORD *)v31 )
    goto LABEL_51;
  v204 = v209;
  v188 = v209 & 7;
  v205 = v6;
  v35 = *(_QWORD *)v31;
  do
  {
    while ( 1 )
    {
      v218 = 2;
      v231 = v233;
      v221 = 0;
      v222 = 1;
      v220 = 0;
      v223 = &v231;
      v217 = (__int64 *)&off_49DA340;
      *(__m128i *)v232 = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
      v219 = 0;
      sub_2623850(&v217, 0, 0, 0, v32, v33);
      v36 = *(_QWORD *)v202;
      if ( v198 )
      {
        (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, __int64, __int64 **))(v36 + 88))(
          v202,
          v198,
          v188,
          v35,
          1,
          &v217);
        ptr = v236;
        v225 = 2;
        p_ptr = &ptr;
        v228 = 0;
        v229 = 1;
        v227 = 0;
        v224 = (__int64 *)&off_49DA340;
        *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
        v226 = 0;
        sub_2623850(&v224, 0, 0, 0, v37, v38);
        (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, _QWORD, __int64 **))(*(_QWORD *)v202 + 88LL))(
          v202,
          v198,
          v188,
          v35,
          0,
          &v224);
      }
      else
      {
        (*(void (__fastcall **)(__int64, unsigned __int64, __int64, __int64, __int64 **))(v36 + 80))(
          v202,
          v203,
          v35,
          1,
          &v217);
        ptr = v236;
        v225 = 2;
        p_ptr = &ptr;
        v228 = 0;
        v229 = 1;
        v227 = 0;
        v224 = (__int64 *)&off_49DA340;
        *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
        v226 = 0;
        sub_2623850(&v224, 0, 0, 0, v122, v123);
        (*(void (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD, __int64 **))(*(_QWORD *)v202 + 80LL))(
          v202,
          v203,
          v35,
          0,
          &v224);
      }
      v39 = v232[0];
      v40 = v231;
      v41 = sub_25E2710(v231, v232[0]);
      v42 = (unsigned int)sub_25E2870(&v212, v40, v39, v41);
      v43 = *((_QWORD *)v212 + v42);
      if ( v43 )
      {
        if ( v43 != -8 )
          goto LABEL_36;
        --si128.m128i_i32[2];
      }
      v196 = (char *)v212 + 8 * v42;
      v192 = v42;
      v113 = sub_25CC9C0(v39 + 89, 8);
      v114 = v192;
      v115 = v196;
      v116 = (_QWORD *)v113;
      if ( v39 )
      {
        memcpy((void *)(v113 + 88), v40, v39);
        v115 = v196;
        v114 = v192;
      }
      *((_BYTE *)v116 + v39 + 88) = 0;
      v116[1] = v116 + 3;
      *v116 = v39;
      v116[2] = 0x200000000LL;
      *v115 = v116;
      ++si128.m128i_i32[1];
      v117 = sub_25E2C40(&v212, v114);
      v118 = (__int64 *)((char *)v212 + 8 * v117);
      v43 = *v118;
      if ( !*v118 || v43 == -8 )
      {
        v119 = v118 + 1;
        do
        {
          do
            v43 = *v119++;
          while ( !v43 );
        }
        while ( v43 == -8 );
      }
LABEL_36:
      v44 = ptr;
      v45 = n[0];
      v214 = v216;
      v46 = n[0] != 0 && ptr == nullptr;
      if ( v46 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v211 = n[0];
      if ( n[0] > 0xF )
      {
        v193 = ptr;
        v120 = (void *)std::string::_M_create();
        v44 = v193;
        v214 = v120;
        v121 = v120;
        v216[0] = v211;
      }
      else
      {
        if ( n[0] == 1 )
        {
          LOBYTE(v216[0]) = *(_BYTE *)ptr;
LABEL_40:
          v47 = v216;
          goto LABEL_41;
        }
        if ( !n[0] )
          goto LABEL_40;
        v121 = v216;
      }
      memcpy(v121, v44, v45);
      v45 = v211;
      v47 = v214;
LABEL_41:
      v215 = v45;
      *((_BYTE *)v47 + v45) = 0;
      v48 = *(unsigned int *)(v43 + 16);
      v49 = *(_QWORD *)(v43 + 8);
      v50 = v48 + 1;
      v51 = (void **)(v49 + 32 * v48);
      if ( *(unsigned int *)(v43 + 20) >= v50 )
      {
        v52 = v51 + 2;
        v53 = &v214;
        v54 = (char *)v216;
        *v51 = v51 + 2;
        v55 = v214;
        if ( v214 != v216 )
          goto LABEL_43;
        LODWORD(v126) = v215;
        goto LABEL_163;
      }
      v194 = -1;
      if ( (unsigned __int64)&v214 >= v49 && &v214 < v51 )
      {
        v46 = 1;
        v194 = (__int64)((__int64)&v214 - v49) >> 5;
      }
      v128 = sub_25D5F70(v43 + 8, v43 + 24, v50, 32, &v211);
      v129 = *(_QWORD *)(v43 + 8);
      v130 = v128;
      v131 = 32LL * *(unsigned int *)(v43 + 16);
      v132 = (void *)(v129 + v131);
      if ( v129 != v129 + v131 )
      {
        v133 = (_QWORD *)(v128 + 16);
        v134 = (char *)(v129 + 16);
        v135 = v130 + v131 + 16;
        while ( 1 )
        {
          *(v133 - 2) = v133;
          v136 = *((char **)v134 - 2);
          v137 = *((_QWORD *)v134 - 1);
          if ( v136 == v134 )
          {
            v138 = v137 + 1;
            if ( (unsigned int)(v137 + 1) >= 8 )
            {
              *v133 = *(_QWORD *)v134;
              *(_QWORD *)((char *)v133 + v138 - 8) = *(_QWORD *)&v134[v138 - 8];
              v171 = (unsigned __int64)(v133 + 1) & 0xFFFFFFFFFFFFFFF8LL;
              v172 = ((_DWORD)v133 - v171 + v138) & 0xFFFFFFF8;
              if ( v172 >= 8 )
              {
                v173 = v172 & 0xFFFFFFF8;
                v174 = 0;
                do
                {
                  v175 = v174;
                  v174 += 8;
                  *(_QWORD *)(v171 + v175) = *(_QWORD *)(v134 - ((char *)v133 - v171) + v175);
                }
                while ( v174 < v173 );
              }
LABEL_182:
              v137 = *((_QWORD *)v134 - 1);
              goto LABEL_176;
            }
            if ( (v138 & 4) != 0 )
            {
              *(_DWORD *)v133 = *(_DWORD *)v134;
              *(_DWORD *)((char *)v133 + v138 - 4) = *(_DWORD *)&v134[v138 - 4];
              v137 = *((_QWORD *)v134 - 1);
              goto LABEL_176;
            }
            if ( (_DWORD)v137 != -1 )
            {
              *(_BYTE *)v133 = *v134;
              if ( (v138 & 2) != 0 )
              {
                *(_WORD *)((char *)v133 + v138 - 2) = *(_WORD *)&v134[v138 - 2];
                v137 = *((_QWORD *)v134 - 1);
                goto LABEL_176;
              }
              goto LABEL_182;
            }
          }
          else
          {
            *(v133 - 2) = v136;
            *v133 = *(_QWORD *)v134;
          }
LABEL_176:
          *(v133 - 1) = v137;
          v133 += 4;
          *((_QWORD *)v134 - 2) = v134;
          v134 += 32;
          *((_QWORD *)v134 - 5) = 0;
          *(v134 - 32) = 0;
          if ( (_QWORD *)v135 == v133 )
          {
            v139 = *(_QWORD *)(v43 + 8);
            v140 = 32LL * *(unsigned int *)(v43 + 16);
            v132 = (void *)(v139 + v140);
            if ( v139 != v139 + v140 )
            {
              v208 = v130;
              v206 = v35;
              v141 = v139 + v140;
              v142 = *(_QWORD *)(v43 + 8);
              do
              {
                v141 -= 32;
                if ( *(_QWORD *)v141 != v141 + 16 )
                  operator delete(*(void **)v141, *(_QWORD *)(v141 + 16) + 1LL);
              }
              while ( v142 != v141 );
              v35 = v206;
              v130 = v208;
              v132 = *(void **)(v43 + 8);
            }
            break;
          }
        }
      }
      v143 = v211;
      if ( (void *)(v43 + 24) != v132 )
      {
        v207 = v211;
        v197 = v130;
        free(v132);
        v143 = v207;
        v130 = v197;
      }
      *(_DWORD *)(v43 + 20) = v143;
      v144 = *(unsigned int *)(v43 + 16);
      *(_QWORD *)(v43 + 8) = v130;
      v53 = (void **)(v130 + 32 * v194);
      if ( !v46 )
        v53 = &v214;
      v51 = (void **)(v130 + 32 * v144);
      v52 = v51 + 2;
      v54 = (char *)(v53 + 2);
      *v51 = v51 + 2;
      v55 = *v53;
      if ( *v53 != v53 + 2 )
      {
LABEL_43:
        *v51 = v55;
        v51[2] = v53[2];
        goto LABEL_44;
      }
      v126 = v53[1];
LABEL_163:
      v127 = (_DWORD)v126 + 1;
      if ( v127 >= 8 )
      {
        *v52 = *(_QWORD *)v54;
        *(_QWORD *)((char *)v52 + v127 - 8) = *(_QWORD *)&v54[v127 - 8];
        v164 = (unsigned __int64)(v52 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v165 = (char *)v52 - v164;
        v166 = (char *)(v54 - v165);
        v167 = ((_DWORD)v165 + v127) & 0xFFFFFFF8;
        if ( v167 >= 8 )
        {
          v168 = v167 & 0xFFFFFFF8;
          v169 = 0;
          do
          {
            v170 = v169;
            v169 += 8;
            *(_QWORD *)(v164 + v170) = *(_QWORD *)&v166[v170];
          }
          while ( v169 < v168 );
        }
      }
      else if ( (v127 & 4) != 0 )
      {
        *(_DWORD *)v52 = *(_DWORD *)v54;
        *(_DWORD *)((char *)v52 + v127 - 4) = *(_DWORD *)&v54[v127 - 4];
      }
      else if ( v127 )
      {
        *(_BYTE *)v52 = *v54;
        if ( (v127 & 2) != 0 )
          *(_WORD *)((char *)v52 + v127 - 2) = *(_WORD *)&v54[v127 - 2];
      }
LABEL_44:
      v56 = v53[1];
      *v53 = v54;
      v57 = v214;
      v53[1] = nullptr;
      v51[1] = v56;
      *((_BYTE *)v53 + 16) = 0;
      ++*(_DWORD *)(v43 + 16);
      if ( v57 != v216 )
        operator delete(v57, v216[0] + 1LL);
      v224 = &qword_4A6EA70[2];
      sub_2623770(&v224);
      if ( ptr != v236 )
        free(ptr);
      v217 = &qword_4A6EA70[2];
      sub_2623770(&v217);
      if ( v231 == v233 )
        break;
      free(v231);
      v35 += 56;
      if ( v201 == v35 )
        goto LABEL_50;
    }
    v35 += 56;
  }
  while ( v201 != v35 );
LABEL_50:
  v10 = v204;
  v6 = v205;
  v33 = src;
LABEL_51:
  v231 = nullptr;
  *(__m128i *)v232 = _mm_load_si128((const __m128i *)byte_3C7E680);
  if ( si128.m128i_i32[0] )
  {
    v58 = *(_QWORD *)v212;
    v59 = (char *)v212;
    if ( *(_QWORD *)v212 == -8 || !v58 )
    {
      do
      {
        do
        {
          v58 = *((_QWORD *)v59 + 1);
          v59 += 8;
        }
        while ( !v58 );
      }
      while ( v58 == -8 );
    }
    if ( (char *)v212 + 8 * si128.m128i_u32[0] != v59 )
    {
      v195 = v6;
      v199 = v33;
      v200 = v7;
      v191 = (void *)v10;
      v60 = (char *)v212 + 8 * si128.m128i_u32[0];
      v61 = v59;
      while ( 1 )
      {
        v62 = *(_QWORD *)(v58 + 8);
        v63 = 32LL * *(unsigned int *)(v58 + 16);
        v64 = (_QWORD *)(v62 + v63);
        if ( v62 == v62 + v63 )
          goto LABEL_94;
        srca = (size_t *)(v62 + v63);
        _BitScanReverse64(&v65, v63 >> 5);
        sub_71E7D0(*(_QWORD *)(v58 + 8), v62 + v63, (char *)(2LL * (int)v65));
        if ( (unsigned __int64)v63 <= 0x200 )
        {
          sub_6AEA10(v62, srca);
          v64 = *(_QWORD **)(v58 + 8);
          goto LABEL_94;
        }
        sub_6AEA10(v62, (_QWORD *)(v62 + 512));
        v187 = v60;
        v66 = (size_t *)(v62 + 528);
        v189 = v58;
        v67 = &n[1];
        v190 = v61;
        v185 = srca;
        while ( 2 )
        {
          ptr = v67;
          if ( (size_t *)*(v66 - 2) == v66 )
          {
            v109 = v67;
            v110 = v66;
            v111 = *(v66 - 1) + 1;
            if ( (unsigned int)v111 >= 8 )
            {
              LODWORD(v124) = 0;
              do
              {
                v125 = (unsigned int)v124;
                v124 = (unsigned int)(v124 + 8);
                *(size_t *)((char *)v67 + v125) = *(size_t *)((char *)v66 + v125);
              }
              while ( (unsigned int)v124 < ((unsigned int)v111 & 0xFFFFFFF8) );
              v109 = (size_t *)((char *)v67 + v124);
              v110 = (size_t *)((char *)v66 + v124);
            }
            v112 = 0;
            if ( (v111 & 4) != 0 )
            {
              *(_DWORD *)v109 = *(_DWORD *)v110;
              v112 = 4;
            }
            if ( (v111 & 2) != 0 )
            {
              *(_WORD *)((char *)v109 + v112) = *(_WORD *)((char *)v110 + v112);
              v112 += 2;
            }
            if ( (v111 & 1) != 0 )
              *((_BYTE *)v109 + v112) = *((_BYTE *)v110 + v112);
          }
          else
          {
            ptr = (void *)*(v66 - 2);
            n[1] = *v66;
          }
          v68 = *(v66 - 1);
          v184 = v67;
          v69 = v66 - 4;
          v70 = v66;
          *(v66 - 2) = (size_t)v66;
          n[0] = v68;
          *(v66 - 1) = 0;
          *(_BYTE *)v66 = 0;
          v183 = v66;
          while ( 1 )
          {
            v73 = n[0];
            v74 = *(v69 - 1);
            v75 = (void **)(v69 + 2);
            v76 = (size_t *)ptr;
            v77 = (size_t *)*(v69 - 2);
            v78 = v74;
            if ( n[0] <= v74 )
              v78 = n[0];
            if ( v78 )
            {
              srcd = (size_t *)*(v69 - 2);
              LODWORD(v79) = memcmp(ptr, v77, v78);
              v77 = srcd;
              if ( (_DWORD)v79 )
                goto LABEL_74;
            }
            v79 = v73 - v74;
            if ( (__int64)(v73 - v74) >= 0x80000000LL )
              break;
            if ( v79 > (__int64)0xFFFFFFFF7FFFFFFFLL )
            {
LABEL_74:
              if ( (int)v79 >= 0 )
                break;
            }
            if ( v70 == v69 + 4 )
            {
              if ( v69 != v77 )
              {
                v80 = *v69;
                v69[2] = (size_t)v77;
                v69[3] = v74;
                v69[4] = v80;
LABEL_78:
                *(v69 - 2) = (size_t)v69;
                v70 = v69;
                goto LABEL_67;
              }
            }
            else if ( v69 != v77 )
            {
              v71 = *v69;
              v72 = v69[4];
              v69[2] = (size_t)v77;
              v69[3] = v74;
              v69[4] = v71;
              if ( v70 )
              {
                *(v69 - 2) = (size_t)v70;
                *v69 = v72;
                goto LABEL_67;
              }
              goto LABEL_78;
            }
            if ( v75 == (void **)(v69 - 2) )
            {
              v70 = v77;
            }
            else
            {
              if ( v74 )
              {
                if ( v74 == 1 )
                  *(_BYTE *)v70 = *(_BYTE *)v77;
                else
                  memcpy(v70, v77, v74);
                v74 = *(v69 - 1);
                v70 = (size_t *)v69[2];
              }
              v69[3] = v74;
              *((_BYTE *)v70 + v74) = 0;
              v70 = (size_t *)*(v69 - 2);
            }
LABEL_67:
            *(v69 - 1) = 0;
            v69 -= 4;
            *(_BYTE *)v70 = 0;
            v70 = (size_t *)v69[2];
          }
          v81 = v70;
          v82 = v73;
          v83 = v183;
          v67 = v184;
          if ( v81 == v69 + 4 )
          {
            if ( v76 != v184 )
            {
              *v75 = v76;
              v69[3] = n[0];
              v69[4] = n[1];
              goto LABEL_124;
            }
LABEL_137:
            if ( v75 == &ptr )
            {
              v81 = v76;
            }
            else
            {
              if ( v73 )
              {
                if ( v73 == 1 )
                {
                  *(_BYTE *)v81 = *(_BYTE *)v76;
                  v82 = n[0];
                  v81 = (size_t *)*v75;
                }
                else
                {
                  memcpy(v81, v76, v73);
                  v81 = (size_t *)*v75;
                  v83 = v183;
                  v82 = n[0];
                }
              }
              v69[3] = v82;
              *((_BYTE *)v81 + v82) = 0;
              v81 = (size_t *)ptr;
            }
            goto LABEL_89;
          }
          if ( v76 == v184 )
            goto LABEL_137;
          *v75 = v76;
          v84 = v69[4];
          v69[3] = n[0];
          v69[4] = n[1];
          if ( v81 )
          {
            ptr = v81;
            n[1] = v84;
            goto LABEL_89;
          }
LABEL_124:
          ptr = v184;
          v67 = &n[1];
          v81 = &n[1];
LABEL_89:
          n[0] = 0;
          *(_BYTE *)v81 = 0;
          if ( ptr != v67 )
          {
            srce = v83;
            operator delete(ptr, n[1] + 1);
            v83 = srce;
          }
          if ( v185 != v83 + 2 )
          {
            v66 = v83 + 4;
            continue;
          }
          break;
        }
        v60 = v187;
        v61 = v190;
        v64 = *(_QWORD **)(v189 + 8);
LABEL_94:
        v85 = (const void *)*v64;
        v86 = v64[1];
        v87 = sub_25E2710(*v64, v86);
        v88 = sub_25E2870(&v231, v85, v86, v87);
        v89 = (char *)v231 + 8 * v88;
        if ( *v89 )
        {
          if ( *v89 != -8 )
            goto LABEL_96;
          --LODWORD(v232[1]);
        }
        v107 = sub_25CC9C0(v86 + 9, 8);
        v108 = (_QWORD *)v107;
        if ( v86 )
        {
          srcf = (_QWORD *)v107;
          memcpy((void *)(v107 + 8), v85, v86);
          v108 = srcf;
        }
        *((_BYTE *)v108 + v86 + 8) = 0;
        *v108 = v86;
        *v89 = v108;
        ++HIDWORD(v232[0]);
        sub_25E2C40(&v231, v88);
LABEL_96:
        v58 = *((_QWORD *)v61 + 1);
        if ( v58 && v58 != -8 )
        {
          v61 += 8;
        }
        else
        {
          v90 = v61 + 16;
          do
          {
            do
            {
              v58 = *(_QWORD *)v90;
              v61 = v90;
              v90 += 8;
            }
            while ( !v58 );
          }
          while ( v58 == -8 );
        }
        if ( v60 == v61 )
        {
          v10 = (__int64)v191;
          v6 = v195;
          v33 = v199;
          v7 = v200;
          break;
        }
      }
    }
  }
  v91 = v33;
  v92 = sub_25E2710(v33, v7);
  v93 = sub_25E29F0(&v231, v91, v7, v92);
  v94 = *(_DWORD *)(v6 + 23208);
  LODWORD(v7) = v93;
  if ( v94 )
  {
    v95 = *(_QWORD *)(v6 + 23192);
    v96 = (v94 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
    v97 = (__int64 *)(v95 + 40LL * v96);
    v98 = *((_DWORD *)v97 + 2);
    v99 = *v97;
    if ( v98 != v186 || v10 != v99 )
    {
      v100 = 1;
      v101 = nullptr;
      if ( !v99 )
        goto LABEL_113;
LABEL_107:
      if ( v99 == -1 && v98 == 0 && !v101 )
        v101 = v97;
      while ( 1 )
      {
        v96 = (v94 - 1) & (v96 + v100);
        v97 = (__int64 *)(v95 + 40LL * v96);
        v99 = *v97;
        v98 = *((_DWORD *)v97 + 2);
        if ( v10 == *v97 && v98 == v186 )
          break;
        ++v100;
        if ( v99 )
          goto LABEL_107;
LABEL_113:
        if ( !v98 )
        {
          v102 = *(_DWORD *)(v6 + 23200);
          if ( !v101 )
            v101 = v97;
          v103 = 2 * v94;
          v104 = v102 + 1;
          ptr = v101;
          if ( 4 * (v102 + 1) < 3 * v94 )
          {
            if ( v94 >> 3 < v94 - *(_DWORD *)(v6 + 23204) - v104 )
              goto LABEL_118;
            v103 = v94;
          }
          goto LABEL_242;
        }
      }
    }
    v106 = v97 + 2;
  }
  else
  {
    ptr = nullptr;
    v103 = 0;
LABEL_242:
    sub_715BB0((__int64 *)(v6 + 23192), v103);
    sub_6F2640((__int64 *)(v6 + 23192), &v209, &ptr);
    v104 = *(_DWORD *)(v6 + 23200) + 1;
    v101 = ptr;
LABEL_118:
    *(_DWORD *)(v6 + 23200) = v104;
    if ( *v101 || *((_DWORD *)v101 + 2) )
      --*(_DWORD *)(v6 + 23204);
    v105 = v209;
    v101[4] = 0;
    v106 = v101 + 2;
    *(_OWORD *)v106 = 0;
    *(v106 - 2) = v105;
    LODWORD(v105) = v210;
    *((_DWORD *)v106 + 5) = 8;
    *((_DWORD *)v106 - 2) = v105;
  }
  v145 = v231;
  v146 = v232[0];
  v231 = nullptr;
  v232[0] = 0;
  v147 = v232[1];
  LODWORD(v232[1]) = 0;
  v148 = *((_DWORD *)v106 + 3);
  v149 = (_QWORD *)*v106;
  *((_DWORD *)v106 + 4) = v147;
  *v106 = v145;
  v150 = *((unsigned int *)v106 + 2);
  v106[1] = v146;
  if ( v148 && (_DWORD)v150 )
  {
    v151 = v149;
    v152 = &v149[v150];
    do
    {
      if ( *v151 != -8 && *v151 )
        operator delete();
      ++v151;
    }
    while ( v151 != v152 );
  }
  free(v149);
  v153 = (char *)v231;
  if ( HIDWORD(v232[0]) && LODWORD(v232[0]) )
  {
    v154 = 8LL * LODWORD(v232[0]);
    v155 = 0;
    do
    {
      v156 = *(_QWORD *)&v153[v155];
      if ( v156 && v156 != -8 )
      {
        operator delete();
        v153 = (char *)v231;
      }
      v155 += 8;
    }
    while ( v155 != v154 );
  }
  free(v153);
  v157 = (char *)v212;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    srcb = (int)v7;
    v158 = 8LL * si128.m128i_u32[0];
    v159 = 0;
    do
    {
      v160 = *(_QWORD *)&v157[v159];
      if ( v160 != -8 && v160 )
      {
        v161 = *(_QWORD *)(v160 + 8);
        v162 = 32LL * *(unsigned int *)(v160 + 16);
        v163 = v161 + v162;
        if ( v161 != v161 + v162 )
        {
          do
          {
            v163 -= 32;
            if ( *(_QWORD *)v163 != v163 + 16 )
              operator delete(*(void **)v163, *(_QWORD *)(v163 + 16) + 1LL);
          }
          while ( v161 != v163 );
          v163 = *(_QWORD *)(v160 + 8);
        }
        if ( v163 != v160 + 24 )
          free((void *)v163);
        operator delete();
        v157 = (char *)v212;
      }
      v159 += 8;
    }
    while ( v159 != v158 );
    LODWORD(v7) = srcb;
  }
  free(v157);
  if ( v202 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v202 + 16LL))(v202);
  LOBYTE(v7) = (_DWORD)v7 != -1;
  return (unsigned int)v7;
}

