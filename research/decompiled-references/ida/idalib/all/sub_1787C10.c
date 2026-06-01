__int64 __fastcall sub_1787C10(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int64 a5)
{
  unsigned __int8 v9; // r14
  __int64 v10; // r15
  char v11; // r14
  char v12; // al
  unsigned __int8 v13; // al
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // r10
  _QWORD *v22; // r14
  unsigned __int64 v23; // r8
  unsigned __int8 v24; // al
  __int64 v25; // rax
  _QWORD *v26; // rdi
  __m128i v27; // xmm1
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  char *v31; // rdx
  const __m128i *v32; // rcx
  __m128i *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned int v41; // r13d
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rsi
  char v50; // cl
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int8 *v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // rax
  size_t v70; // rax
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  unsigned __int64 v75; // rax
  size_t v76; // rax
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 *v84; // rax
  bool v85; // al
  __int64 v86; // rcx
  __int64 v87; // r8
  bool v88; // al
  size_t v89; // rax
  __int64 v90; // rax
  bool v91; // al
  unsigned __int64 v92; // r11
  __int64 v93; // r9
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rbx
  __int64 v98; // r8
  __int64 v99; // r9
  void *v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rax
  __int64 v103; // r9
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rdx
  unsigned __int64 v112; // rsi
  __int64 v113; // rax
  unsigned __int64 v114; // r11
  __int64 v115; // r9
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // rax
  _QWORD *v123; // rax
  __int64 v124; // rcx
  int v125; // eax
  __int64 v126; // rsi
  __int64 v127; // rcx
  int v128; // eax
  __int64 v129; // rax
  __int64 v130; // r8
  __int64 v131; // r9
  unsigned __int64 v132; // r11
  __int64 v133; // rdx
  __int64 v134; // rax
  __int64 v135; // rcx
  _QWORD *v136; // rax
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rsi
  __int64 v140; // rcx
  void *v141; // rdi
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rsi
  __int64 v145; // rcx
  void *v146; // rdi
  __int64 v147; // [rsp+0h] [rbp-278h]
  __int64 v148; // [rsp+0h] [rbp-278h]
  unsigned __int64 v149; // [rsp+0h] [rbp-278h]
  unsigned __int64 v150; // [rsp+0h] [rbp-278h]
  __int64 v151; // [rsp+0h] [rbp-278h]
  __int64 v152; // [rsp+0h] [rbp-278h]
  unsigned __int64 v153; // [rsp+0h] [rbp-278h]
  __int64 v154; // [rsp+0h] [rbp-278h]
  __int64 v155; // [rsp+0h] [rbp-278h]
  __int64 v156; // [rsp+0h] [rbp-278h]
  __int64 v157; // [rsp+0h] [rbp-278h]
  __int64 v158; // [rsp+0h] [rbp-278h]
  __int64 v159; // [rsp+0h] [rbp-278h]
  __int64 v160; // [rsp+0h] [rbp-278h]
  __int64 v161; // [rsp+0h] [rbp-278h]
  __int64 v162; // [rsp+0h] [rbp-278h]
  __int64 v163; // [rsp+0h] [rbp-278h]
  unsigned __int64 v165; // [rsp+8h] [rbp-270h]
  __int64 v166; // [rsp+8h] [rbp-270h]
  _QWORD *v167; // [rsp+8h] [rbp-270h]
  __int64 v168; // [rsp+8h] [rbp-270h]
  __int64 v169; // [rsp+8h] [rbp-270h]
  __int64 v170; // [rsp+8h] [rbp-270h]
  __int64 v171; // [rsp+10h] [rbp-268h]
  unsigned __int64 v172; // [rsp+10h] [rbp-268h]
  unsigned __int64 v173; // [rsp+10h] [rbp-268h]
  __int64 v174; // [rsp+10h] [rbp-268h]
  __int64 v175; // [rsp+10h] [rbp-268h]
  __int64 *v176; // [rsp+10h] [rbp-268h]
  unsigned __int8 *v177; // [rsp+10h] [rbp-268h]
  _BYTE *v178; // [rsp+10h] [rbp-268h]
  __int64 v179; // [rsp+10h] [rbp-268h]
  int v180; // [rsp+10h] [rbp-268h]
  unsigned __int8 *v181; // [rsp+10h] [rbp-268h]
  __int64 v182; // [rsp+18h] [rbp-260h]
  char v183; // [rsp+18h] [rbp-260h]
  __int64 v184; // [rsp+18h] [rbp-260h]
  __int64 v185; // [rsp+18h] [rbp-260h]
  __int64 v186; // [rsp+18h] [rbp-260h]
  unsigned __int64 v187; // [rsp+18h] [rbp-260h]
  unsigned __int64 v188; // [rsp+18h] [rbp-260h]
  __int64 v189; // [rsp+18h] [rbp-260h]
  unsigned __int64 v190; // [rsp+18h] [rbp-260h]
  unsigned __int64 v191; // [rsp+18h] [rbp-260h]
  unsigned __int8 *v192; // [rsp+18h] [rbp-260h]
  __int64 v193; // [rsp+20h] [rbp-258h]
  __int64 v194; // [rsp+20h] [rbp-258h]
  __int64 v195; // [rsp+20h] [rbp-258h]
  unsigned __int64 v196; // [rsp+20h] [rbp-258h]
  __int64 v197; // [rsp+20h] [rbp-258h]
  __int64 v198; // [rsp+28h] [rbp-250h]
  __m128i v199; // [rsp+30h] [rbp-248h] BYREF
  __int64 v200; // [rsp+40h] [rbp-238h]
  __m128i v201; // [rsp+50h] [rbp-228h] BYREF
  __int64 v202; // [rsp+60h] [rbp-218h]
  unsigned __int64 v203; // [rsp+68h] [rbp-210h]
  __int128 v204; // [rsp+70h] [rbp-208h] BYREF
  void *v205[2]; // [rsp+80h] [rbp-1F8h] BYREF
  _OWORD v206[5]; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v207; // [rsp+E0h] [rbp-198h]
  __int64 v208; // [rsp+E8h] [rbp-190h]
  unsigned int v209; // [rsp+F0h] [rbp-188h]
  char v210; // [rsp+F4h] [rbp-184h]
  __int64 v211; // [rsp+F8h] [rbp-180h] BYREF
  __int128 v212; // [rsp+100h] [rbp-178h]
  __int64 v213; // [rsp+110h] [rbp-168h]
  void *ptr; // [rsp+120h] [rbp-158h] BYREF
  __int64 v215; // [rsp+128h] [rbp-150h]
  __int64 v216; // [rsp+130h] [rbp-148h] BYREF
  __int64 v217; // [rsp+138h] [rbp-140h] BYREF
  unsigned __int8 *v218; // [rsp+140h] [rbp-138h] BYREF
  __int64 v219; // [rsp+148h] [rbp-130h]
  __int128 v220; // [rsp+178h] [rbp-100h]
  __int64 v221; // [rsp+188h] [rbp-F0h]
  __int64 v222; // [rsp+190h] [rbp-E8h]
  __int64 v223; // [rsp+198h] [rbp-E0h]
  unsigned int v224; // [rsp+1A0h] [rbp-D8h]
  char v225; // [rsp+1A4h] [rbp-D4h]
  __int64 v226; // [rsp+1A8h] [rbp-D0h] BYREF
  __int128 v227; // [rsp+1B0h] [rbp-C8h]
  __int64 v228; // [rsp+1C0h] [rbp-B8h]
  unsigned int v229; // [rsp+230h] [rbp-48h]
  unsigned int v230; // [rsp+234h] [rbp-44h]

  v9 = *(_BYTE *)(a5 + 1);
  v147 = *(_QWORD *)(a5 + 8);
  v10 = sub_EEE9A0(24, *(_QWORD **)(a2 + 248), 8u);
  v11 = (v9 >> 3) & 7;
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
    sub_EE9B50(26);
  v12 = *(_BYTE *)(v10 + 1);
  *(_BYTE *)(v10 + 2) &= 0xF0u;
  *(_QWORD *)(v10 + 16) = a5;
  *(_DWORD *)(v10 + 4) = a4;
  *(_BYTE *)(v10 + 1) = (8 * (v11 & 7)) | v12 & 1 | 2;
  *(_QWORD *)(v10 + 8) = v147;
  v13 = sub_B62360(v10);
  *(_BYTE *)(v10 + 1) = (v13 << 6) | *(_BYTE *)(v10 + 1) & 0x3F;
  *(_BYTE *)(v10 + 2) = *(_BYTE *)(v10 + 2) & 0xF8 | (v13 >> 2) & 7;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = v10;
  v15 = sub_1783F70(a2, v10, a4, "await_ready", 0xBu, v14, 0, 0);
  if ( v15 == 1 )
    goto LABEL_7;
  v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)a1 = v16;
  if ( v16 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      goto LABEL_6;
    v172 = v16;
    v35 = sub_1C02150(a2, v16);
    v150 = v35;
    if ( v35 != 1 )
    {
      *(_QWORD *)a1 = sub_19A3EF0(a2, v35 & 0xFFFFFFFFFFFFFFFELL);
      goto LABEL_6;
    }
    v36 = sub_BFBC70(*(_QWORD *)(v172 + 32));
    if ( v36 && (*(_BYTE *)(v36 + 28) & 0x7Fu) - 34 >= 6 )
      v36 = 0;
    v37 = sub_B73090(v36);
    sub_168B9F0((__int64)&ptr, (__int64 *)(a2 + 8), v37, 0x16ADu, 0);
    sub_15F7200(&ptr);
    sub_168B9F0((__int64)&ptr, (__int64 *)(a2 + 8), a4, 0x16DFu, 0);
    v38 = sub_BFBC70(*(_QWORD *)(v172 + 32));
    v39 = v38;
    if ( v38 && (*(_BYTE *)(v38 + 28) & 0x7Fu) - 34 >= 6 )
      v39 = 0;
    if ( (_BYTE)v223 )
    {
      v49 = v39;
      sub_AE9DF0(&v218, v39, 0xAu);
      v50 = v223;
    }
    else
    {
      if ( !v225 )
      {
        v40 = sub_EEC8C0(a5, a2 + 8, 0.0);
        v41 = v40;
        v173 = HIDWORD(v40);
        goto LABEL_34;
      }
      v174 = v39;
      v42 = sub_168B9E0(&ptr);
      v45 = v174;
      v46 = v42;
      v47 = v216;
      if ( v216 )
      {
        v182 = v46;
        v47 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v216 + 32LL))(
                v216,
                *(_QWORD *)v216,
                v46,
                v174);
        v46 = v182;
        v45 = v174;
      }
      v175 = v45;
      *(_QWORD *)&v204 = v47;
      v48 = sub_1587BC0(v46, (__int64 *)&v204, v46, v45, v43, v44);
      v49 = v175;
      sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * v224 + 8), v175, 0xAu);
      v50 = v223;
    }
    v183 = v50;
    v51 = sub_EEC8C0(a5, v49, 0.0);
    v41 = v51;
    v52 = HIDWORD(v51);
    LODWORD(v173) = HIDWORD(v51);
    if ( v183 )
    {
      v53 = v218;
      if ( v218 )
      {
        v54 = *((unsigned int *)v218 + 106);
        v150 = v54 + 1;
        v55 = *((unsigned int *)v218 + 107);
      }
      else
      {
        v124 = v219;
        v125 = *(_DWORD *)(v219 + 14976);
        if ( v125 )
        {
          v137 = (unsigned int)(v125 - 1);
          *(_DWORD *)(v219 + 14976) = v137;
          v53 = *(unsigned __int8 **)(v124 + 8 * v137 + 14848);
          v138 = *((unsigned int *)v53 + 134);
          *v53 = 0;
          v139 = *((_QWORD *)v53 + 66);
          *((_DWORD *)v53 + 106) = 0;
          v140 = v139 + (v138 << 6);
          while ( v139 != v140 )
          {
            while ( 1 )
            {
              v140 -= 64;
              v141 = *(void **)(v140 + 24);
              if ( v141 == (void *)(v140 + 40) )
                break;
              v196 = v52;
              v181 = v53;
              v162 = v140;
              operator delete(v141);
              v140 = v162;
              v53 = v181;
              v52 = v196;
              if ( v139 == v162 )
                goto LABEL_123;
            }
          }
LABEL_123:
          *((_DWORD *)v53 + 134) = 0;
          v54 = *((unsigned int *)v53 + 106);
          v150 = v54 + 1;
          v55 = *((unsigned int *)v53 + 107);
        }
        else
        {
          v180 = v52;
          v53 = (unsigned __int8 *)operator new(0x3A0u);
          *v53 = 0;
          *((_QWORD *)v53 + 12) = v53 + 112;
          *((_QWORD *)v53 + 16) = v53 + 144;
          *((_QWORD *)v53 + 20) = v53 + 176;
          *((_QWORD *)v53 + 24) = v53 + 208;
          *((_QWORD *)v53 + 28) = v53 + 240;
          *((_QWORD *)v53 + 32) = v53 + 272;
          *((_QWORD *)v53 + 36) = v53 + 304;
          *((_QWORD *)v53 + 40) = v53 + 336;
          *((_QWORD *)v53 + 44) = v53 + 368;
          *((_QWORD *)v53 + 48) = v53 + 400;
          *((_QWORD *)v53 + 52) = v53 + 432;
          *((_QWORD *)v53 + 13) = 0;
          v53[112] = 0;
          *((_QWORD *)v53 + 17) = 0;
          v53[144] = 0;
          *((_QWORD *)v53 + 21) = 0;
          v53[176] = 0;
          *((_QWORD *)v53 + 25) = 0;
          v53[208] = 0;
          *((_QWORD *)v53 + 29) = 0;
          v53[240] = 0;
          *((_QWORD *)v53 + 33) = 0;
          v53[272] = 0;
          *((_QWORD *)v53 + 37) = 0;
          v53[304] = 0;
          *((_QWORD *)v53 + 41) = 0;
          v53[336] = 0;
          *((_QWORD *)v53 + 45) = 0;
          v53[368] = 0;
          *((_QWORD *)v53 + 49) = 0;
          v53[400] = 0;
          *((_QWORD *)v53 + 53) = 0x800000000LL;
          LODWORD(v52) = v180;
          *((_QWORD *)v53 + 66) = v53 + 544;
          v54 = 0;
          *((_QWORD *)v53 + 67) = 0x600000000LL;
          v55 = 8;
        }
        v218 = v53;
      }
      *(_QWORD *)&v204 = __PAIR64__(v52, v41);
      BYTE8(v204) = 1;
      if ( v55 >= v150 )
        goto LABEL_47;
      goto LABEL_94;
    }
LABEL_34:
    if ( !v225 )
    {
LABEL_35:
      sub_15F7200(&ptr);
      *(_BYTE *)(a1 + 32) = 1;
LABEL_6:
      if ( (*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
LABEL_7:
        *(_BYTE *)(a1 + 32) = 1;
        return a1;
      }
      v148 = *(_QWORD *)(a3 + 48);
      v18 = sub_183D350(a2);
      v19 = sub_6F3470(*(_QWORD *)(a2 + 240) + 552LL, "coroutine_handle", 0x10u);
      v205[0] = (void *)0x800000000LL;
      *((_QWORD *)&v204 + 1) = &v205[1];
      memset((char *)&v206[3] + 8, 0, 24);
      v208 = v19;
      *(_QWORD *)&v204 = 0;
      v207 = a2;
      v209 = a4;
      sub_B85890(&v211, v19);
      v212 = 0;
      v213 = 0x101010000LL;
      sub_1A395A0(&v204);
      if ( v18 )
        v18 += 48;
      v20 = sub_1A48440(a2, &v204, v18, 0);
      v21 = v148;
      if ( !v20 )
      {
        sub_168B9F0((__int64)&ptr, (__int64 *)(a2 + 8), a4, 0xF6Bu, 0);
        if ( (_BYTE)v223 )
        {
          sub_AE9DF0(&v218, (__int64)"std::coroutine_handle", 1u);
        }
        else if ( v225 )
        {
          v59 = sub_168B9E0(&ptr);
          v62 = v216;
          if ( v216 )
            v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v216 + 32LL))(v216);
          v201.m128i_i64[0] = v62;
          v63 = sub_1587BC0(v59, v201.m128i_i64, v57, v58, v60, v61);
          sub_AE9DF0((unsigned __int8 **)(*v63 + 32LL * v224 + 8), (__int64)"std::coroutine_handle", 1u);
        }
        sub_15F7200(&ptr);
        sub_169D230((__int64)&v204);
        goto LABEL_7;
      }
      v22 = *((_QWORD **)&v204 + 1);
      if ( (_DWORD)v204 != 2 )
        goto LABEL_39;
      v23 = **((_QWORD **)&v204 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v24 = *(_BYTE *)(v23 + 28) & 0x7F;
      if ( ((v24 + 52) & 0x7Fu) <= 1 || (unsigned int)v24 - 53 <= 1 )
      {
        v25 = sub_B72ED0(**((_QWORD **)&v204 + 1) & 0xFFFFFFFFFFFFFFF8LL);
        v21 = v148;
        v23 = v25;
        v24 = *(_BYTE *)(v25 + 28) & 0x7F;
      }
      v149 = v23;
      if ( v24 != 72 )
      {
LABEL_39:
        *(_WORD *)((char *)&v213 + 3) = 0;
        sub_168B9F0((__int64)&ptr, (__int64 *)(a2 + 8), *(_DWORD *)((*v22 & 0xFFFFFFFFFFFFFFF8LL) + 24), 0x1024u, 0);
        sub_15F7200(&ptr);
        sub_169D230((__int64)&v204);
        goto LABEL_7;
      }
      v26 = *(_QWORD **)(a2 + 248);
      v171 = v21;
      ptr = &v216;
      v215 = 0x800000000LL;
      v229 = a4;
      v230 = a4;
      v165 = (unsigned __int64)sub_A81910(v26, v21, a4);
      sub_F1D250((__int64)&v199, v171, 0, 0);
      v27 = _mm_load_si128(&v199);
      v202 = v200;
      v201 = v27;
      v28 = v149;
      v203 = v165 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v29 = (unsigned int)v215;
      v30 = (unsigned int)v215 + 1LL;
      if ( v30 > HIDWORD(v215) )
      {
        if ( ptr > &v201 || (v178 = ptr, &v201 >= (__m128i *)((char *)ptr + 32 * (unsigned int)v215)) )
        {
          sub_2237220(&ptr, &v216, v30, 32);
          v32 = &v201;
          v28 = v149;
          v31 = (char *)ptr;
          v29 = (unsigned int)v215;
        }
        else
        {
          sub_2237220(&ptr, &v216, v30, 32);
          v31 = (char *)ptr;
          v29 = (unsigned int)v215;
          v28 = v149;
          v32 = (const __m128i *)((char *)ptr + (char *)&v201 - v178);
        }
      }
      else
      {
        v31 = (char *)ptr;
        v32 = &v201;
      }
      v33 = (__m128i *)&v31[32 * v29];
      *v33 = _mm_loadu_si128(v32);
      v33[1] = _mm_loadu_si128(v32 + 1);
      LODWORD(v215) = v215 + 1;
      sub_F22AA0((unsigned __int64 *)&v201, v28);
      v34 = sub_1CDD580(a2, v201.m128i_i64[0], a4, &ptr);
      if ( (v34 & 0xFFFFFFFFFFFFFFF0LL) == 0 || (v166 = v34, (unsigned __int8)sub_1E63CF0(a2, a4, v34, 1, 3532)) )
      {
        if ( ptr != &v216 )
          free(ptr);
        sub_169D230((__int64)&v204);
        goto LABEL_7;
      }
      if ( ptr != &v216 )
        free(ptr);
      sub_169D230((__int64)&v204);
      v167 = sub_169D2C0(a2, v166, v64, v65, v66, v166);
      v67 = sub_6F3470(*(_QWORD *)(a2 + 240) + 552LL, "from_address", 0xCu);
      v216 = 0x800000000LL;
      v215 = (__int64)&v217;
      v220 = 0;
      v223 = v67;
      ptr = nullptr;
      v221 = 0;
      v222 = a2;
      v224 = a4;
      sub_B85890(&v226, v67);
      v228 = 0x101010000LL;
      v227 = 0;
      sub_1A395A0(&ptr);
      if ( !(unsigned __int8)sub_1A48440(a2, &ptr, v167, 0) )
      {
        sub_168B9F0((__int64)&v204, (__int64 *)(a2 + 8), a4, 0xDC1u, 0);
        if ( (_BYTE)v208 )
        {
          sub_AE9DF0((unsigned __int8 **)v206, (__int64)"from_address", 1u);
        }
        else if ( v210 )
        {
          v97 = sub_168B9E0(&v204);
          v100 = v205[0];
          if ( v205[0] )
            v100 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v205[0] + 32LL))(v205[0]);
          v201.m128i_i64[0] = (__int64)v100;
          v101 = sub_1587BC0(v97, v201.m128i_i64, v95, v96, v98, v99);
          sub_AE9DF0((unsigned __int8 **)(*v101 + 32LL * v209 + 8), (__int64)"from_address", 1u);
        }
        sub_15F7200(&v204);
        sub_169D230((__int64)&ptr);
        goto LABEL_7;
      }
      v201.m128i_i64[0] = sub_190C6E0(a2, a4, 372, 0, 0);
      v204 = 0;
      *(_OWORD *)v205 = 0;
      v206[0] = 0;
      v69 = sub_190B490(a2, &v204, &ptr, 0, 0, v68);
      if ( v69 == 1 )
      {
        if ( !HIDWORD(v205[1]) )
        {
          sub_169D230((__int64)&ptr);
          goto LABEL_7;
        }
      }
      else
      {
        v69 = sub_192A5E0(a2, a4, 0, 0, 0);
        if ( !HIDWORD(v205[1]) )
        {
LABEL_60:
          v168 = v69;
          sub_169D230((__int64)&ptr);
          if ( v168 == 1 )
            goto LABEL_7;
          v201.m128i_i64[0] = v168 & 0xFFFFFFFFFFFFFFFELL;
          v70 = j__strlen("await_suspend");
          v72 = sub_1783F70(a2, v10, a4, "await_suspend", v70, v71, (__int64)&v201, 1);
          if ( v72 == 1 )
            goto LABEL_7;
          v75 = v72 & 0xFFFFFFFFFFFFFFFELL;
          *(_QWORD *)(a1 + 8) = v75;
          if ( !v75 )
            return a1;
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v75 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
            goto LABEL_64;
          v79 = *(_QWORD *)(a2 + 248);
          v151 = v75;
          v80 = sub_BFB6C0(v75, v79, v73, v74);
          v83 = v151;
          v169 = v80;
          v84 = (__int64 *)(v80 & 0xFFFFFFFFFFFFFFF0LL);
          v176 = v84;
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v84 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43) > 1u )
          {
            v184 = *v84;
            v85 = sub_F612B0(*v84, v79, *v84, v81, v82, v151);
            v83 = v151;
            if ( v85 || (v88 = sub_F612F0(v184, v79, v184, v86, v87, v151), v83 = v151, v88) )
            {
              v152 = v83;
              v89 = j__strlen("address");
              v90 = sub_1783F70(a2, v152, a4, "address", v89, v152, 0, 0);
              v83 = v152;
              if ( v90 != 1 )
              {
                v185 = v152;
                v153 = v90 & 0xFFFFFFFFFFFFFFFELL;
                v91 = sub_F67340(*(_QWORD *)(*(_QWORD *)((v90 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL));
                v92 = v153;
                v93 = v185;
                if ( !v91 )
                {
                  v113 = sub_BFBC70(*(_QWORD *)(v153 + 32));
                  sub_168B9F0((__int64)&ptr, (__int64 *)(a2 + 8), *(_DWORD *)(v113 + 24), 0x1A38u, 0);
                  v114 = v153;
                  v115 = v185;
                  if ( (_BYTE)v223 )
                  {
                    v126 = *(_QWORD *)(v153 + 8);
                    v159 = v185;
                    v188 = v114;
                    sub_AE9DF0(&v218, v126, 8u);
                    v115 = v159;
                    v114 = v188;
                  }
                  else if ( v225 )
                  {
                    v193 = *(_QWORD *)(v153 + 8);
                    v190 = v153;
                    v160 = v115;
                    v129 = sub_168B9E0(&ptr);
                    v131 = v160;
                    v132 = v190;
                    v133 = v129;
                    v134 = v216;
                    v135 = v193;
                    if ( v216 )
                    {
                      v198 = v193;
                      v194 = v133;
                      v134 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64))(*(_QWORD *)v216 + 32LL))(
                               v216,
                               *(_QWORD *)v216,
                               v133,
                               v135,
                               v130,
                               v160);
                      v135 = v198;
                      v133 = v194;
                      v132 = v190;
                      v131 = v160;
                    }
                    v191 = v132;
                    v161 = v131;
                    v195 = v135;
                    *(_QWORD *)&v204 = v134;
                    v136 = sub_1587BC0(v133, (__int64 *)&v204, v133, v135, v130, v131);
                    sub_AE9DF0((unsigned __int8 **)(*v136 + 32LL * v224 + 8), v195, 8u);
                    v114 = v191;
                    v115 = v161;
                  }
                  v187 = v114;
                  v157 = v115;
                  sub_15F7200(&ptr);
                  v92 = v187;
                  v93 = v157;
                }
                v154 = v93;
                v94 = sub_19A3EF0(a2, v92);
                v83 = v154;
                if ( v94 )
                  goto LABEL_73;
              }
            }
            v116 = *(_QWORD *)(*(_QWORD *)(*v176 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v116 + 16) == 13 && (((*(_WORD *)(v116 + 18) >> 3) + 77) & 0x1FFu) <= 1 )
            {
              v94 = sub_19A3EF0(a2, v83);
LABEL_73:
              *(_QWORD *)(a1 + 8) = v94;
LABEL_64:
              v76 = j__strlen("await_resume");
              v78 = sub_1783F70(a2, v10, a4, "await_resume", v76, v77, 0, 0);
              if ( v78 == 1 )
                *(_BYTE *)(a1 + 32) = 1;
              else
                *(_QWORD *)(a1 + 16) = v78 & 0xFFFFFFFFFFFFFFFELL;
              *(_WORD *)(a2 + 4512) = 257;
              return a1;
            }
          }
          v155 = v83;
          v102 = sub_BFBC70(*(_QWORD *)(v83 + 32));
          sub_168B9F0((__int64)&ptr, (__int64 *)(a2 + 8), *(_DWORD *)(v102 + 24), 0xCCCu, 0);
          v103 = v155;
          if ( (_BYTE)v223 )
          {
            sub_AE9DF0(&v218, v169, 8u);
            v103 = v155;
          }
          else if ( v225 )
          {
            v117 = sub_168B9E0(&ptr);
            v120 = v155;
            v121 = v117;
            v122 = v216;
            if ( v216 )
            {
              v179 = v121;
              v122 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v216 + 32LL))(
                       v216,
                       a2 + 8,
                       v121,
                       *(_QWORD *)v216,
                       v119,
                       v155);
              v121 = v179;
              v120 = v155;
            }
            v158 = v120;
            *(_QWORD *)&v204 = v122;
            v123 = sub_1587BC0(v121, (__int64 *)&v204, v121, v118, v119, v120);
            sub_AE9DF0((unsigned __int8 **)(*v123 + 32LL * v224 + 8), v169, 8u);
            v103 = v158;
          }
          v156 = v103;
          sub_15F7200(&ptr);
          sub_168B9F0((__int64)&ptr, (__int64 *)(a2 + 8), a4, 0x16DFu, 0);
          v104 = sub_BFBC70(*(_QWORD *)(v156 + 32));
          if ( v104 && (*(_BYTE *)(v104 + 28) & 0x7Fu) - 34 >= 6 )
            v104 = 0;
          *(_QWORD *)&v204 = v104;
          sub_16CEDA0((__int64)&ptr, (__int64 *)&v204);
          sub_15F7200(&ptr);
          *(_BYTE *)(a1 + 32) = 1;
          goto LABEL_64;
        }
      }
      v170 = v69;
      free(v205[0]);
      v69 = v170;
      goto LABEL_60;
    }
    v105 = sub_168B9E0(&ptr);
    v109 = v216;
    if ( v216 )
    {
      v186 = v105;
      v109 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v216 + 32LL))(v216);
      v105 = v186;
    }
    v201.m128i_i64[0] = v109;
    v110 = sub_1587BC0(v105, v201.m128i_i64, v105, v106, v107, v108);
    v111 = *v110 + 32LL * v224;
    v53 = *(unsigned __int8 **)(v111 + 8);
    if ( v53 )
    {
      v54 = *((unsigned int *)v53 + 106);
      v150 = v54 + 1;
      v112 = *((unsigned int *)v53 + 107);
    }
    else
    {
      v127 = *(_QWORD *)(v111 + 16);
      v128 = *(_DWORD *)(v127 + 14976);
      if ( v128 )
      {
        v142 = (unsigned int)(v128 - 1);
        *(_DWORD *)(v127 + 14976) = v142;
        v53 = *(unsigned __int8 **)(v127 + 8 * v142 + 14848);
        v143 = *((unsigned int *)v53 + 134);
        *v53 = 0;
        v144 = *((_QWORD *)v53 + 66);
        *((_DWORD *)v53 + 106) = 0;
        v145 = v144 + (v143 << 6);
        while ( v144 != v145 )
        {
          while ( 1 )
          {
            v145 -= 64;
            v146 = *(void **)(v145 + 24);
            if ( v146 == (void *)(v145 + 40) )
              break;
            v197 = v145;
            v192 = v53;
            v163 = v111;
            operator delete(v146);
            v145 = v197;
            v111 = v163;
            v53 = v192;
            if ( v144 == v197 )
              goto LABEL_127;
          }
        }
LABEL_127:
        *((_DWORD *)v53 + 134) = 0;
        v54 = *((unsigned int *)v53 + 106);
        v150 = v54 + 1;
        v112 = *((unsigned int *)v53 + 107);
      }
      else
      {
        v189 = v111;
        v53 = (unsigned __int8 *)operator new(0x3A0u);
        *v53 = 0;
        *((_QWORD *)v53 + 12) = v53 + 112;
        *((_QWORD *)v53 + 16) = v53 + 144;
        *((_QWORD *)v53 + 20) = v53 + 176;
        *((_QWORD *)v53 + 24) = v53 + 208;
        *((_QWORD *)v53 + 28) = v53 + 240;
        *((_QWORD *)v53 + 32) = v53 + 272;
        *((_QWORD *)v53 + 36) = v53 + 304;
        *((_QWORD *)v53 + 40) = v53 + 336;
        *((_QWORD *)v53 + 44) = v53 + 368;
        *((_QWORD *)v53 + 48) = v53 + 400;
        *((_QWORD *)v53 + 52) = v53 + 432;
        *((_QWORD *)v53 + 13) = 0;
        v53[112] = 0;
        *((_QWORD *)v53 + 17) = 0;
        v53[144] = 0;
        *((_QWORD *)v53 + 21) = 0;
        v53[176] = 0;
        *((_QWORD *)v53 + 25) = 0;
        v53[208] = 0;
        *((_QWORD *)v53 + 29) = 0;
        v53[240] = 0;
        *((_QWORD *)v53 + 33) = 0;
        v53[272] = 0;
        *((_QWORD *)v53 + 37) = 0;
        v53[304] = 0;
        *((_QWORD *)v53 + 41) = 0;
        v53[336] = 0;
        *((_QWORD *)v53 + 45) = 0;
        v53[368] = 0;
        *((_QWORD *)v53 + 49) = 0;
        v53[400] = 0;
        *((_QWORD *)v53 + 53) = 0x800000000LL;
        v111 = v189;
        *((_QWORD *)v53 + 66) = v53 + 544;
        v54 = 0;
        *((_QWORD *)v53 + 67) = 0x600000000LL;
        v112 = 8;
      }
      *(_QWORD *)(v111 + 8) = v53;
    }
    *(_QWORD *)&v204 = __PAIR64__(v173, v41);
    BYTE8(v204) = 1;
    if ( v112 >= v150 )
    {
LABEL_47:
      v56 = *((_QWORD *)v53 + 52) + 12 * v54;
      *(_QWORD *)v56 = v204;
      *(_DWORD *)(v56 + 8) = DWORD2(v204);
      ++*((_DWORD *)v53 + 106);
      goto LABEL_35;
    }
LABEL_94:
    v177 = v53;
    sub_2237220(v53 + 416, v53 + 432, v150, 12);
    v53 = v177;
    v54 = *((unsigned int *)v177 + 106);
    goto LABEL_47;
  }
  return a1;
}
