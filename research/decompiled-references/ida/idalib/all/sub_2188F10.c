__int64 __fastcall sub_2188F10(
        __int64 a1,
        __int64 _RSI,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128i a8)
{
  const char *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbp
  char v15; // r15
  char v16; // al
  __int64 (__fastcall **v17)(); // rax
  int v18; // ecx
  int v19; // r8d
  void *v20; // rax
  void *v21; // rsi
  __m128i v22; // xmm2
  signed __int64 v23; // r12
  unsigned __int64 v24; // rdx
  char *v25; // rax
  char *v26; // r9
  size_t v27; // r10
  __m128i v28; // xmm0
  char *v29; // rax
  char *v30; // r9
  __int64 v31; // r9
  const void *v32; // rsi
  __m128i v33; // xmm6
  void *v34; // rax
  signed __int64 v35; // r8
  char *v36; // rax
  char *v37; // rcx
  size_t v38; // r14
  __m128i v39; // xmm0
  __int64 v40; // rdx
  char *v41; // rcx
  void **v42; // r15
  void **v43; // r14
  void **v44; // r15
  void **v45; // r14
  int v46; // ecx
  int v47; // r8d
  void *v48; // rdx
  char *v49; // r9
  void *v50; // rsi
  signed __int64 v51; // r12
  size_t v52; // r10
  unsigned __int64 v53; // rax
  char *v54; // rax
  __m128i v55; // xmm0
  char *v56; // rax
  char *v57; // r9
  __int64 v58; // r8
  void *v59; // rdx
  const void *v60; // rsi
  __m128i v61; // xmm5
  signed __int64 v62; // rbp
  signed __int64 v63; // r9
  unsigned __int64 v64; // rax
  char *v65; // rcx
  char *v66; // rax
  __m128i v67; // xmm0
  char *v68; // rax
  char *v69; // rcx
  __int64 v70; // rdx
  void **v71; // r15
  void *v72; // rdi
  __int64 v73; // rdx
  void **v74; // r15
  void *v75; // rdi
  int v76; // ecx
  int v77; // r8d
  void *v78; // rdx
  char *v79; // r9
  void *v80; // rsi
  signed __int64 v81; // r12
  size_t v82; // r10
  unsigned __int64 v83; // rax
  char *v84; // rax
  __m128i v85; // xmm0
  char *v86; // rax
  char *v87; // r9
  __int64 v88; // r8
  void *v89; // rdx
  const void *v90; // rsi
  __m128i v91; // xmm7
  signed __int64 v92; // rbp
  signed __int64 v93; // r9
  unsigned __int64 v94; // rax
  char *v95; // rcx
  char *v96; // rax
  __m128i v97; // xmm0
  char *v98; // rax
  char *v99; // rcx
  void **v100; // rdx
  void **v101; // r15
  void *v102; // rdi
  void **v103; // rdx
  void **v104; // r15
  void *v105; // rdi
  int v106; // ecx
  int v107; // r8d
  void *v108; // rax
  void *v109; // rsi
  signed __int64 v110; // r12
  unsigned __int64 v111; // rdx
  char *v112; // rax
  char *v113; // r9
  size_t v114; // r10
  __m128i v115; // xmm0
  char *v116; // rax
  char *v117; // r9
  __int64 v118; // r8
  const void *v119; // rsi
  __m128i v120; // xmm7
  void *v121; // rax
  signed __int64 v122; // rbp
  unsigned __int64 v123; // rdx
  char *v124; // rax
  char *v125; // rcx
  signed __int64 v126; // r9
  __m128i v127; // xmm0
  char *v128; // rax
  char *v129; // rcx
  void **v130; // rdx
  void **v131; // r15
  void *v132; // rdi
  void **v133; // rdx
  void **v134; // r15
  void *v135; // rdi
  __int64 v136; // rax
  __int64 (__fastcall **v137)(); // rax
  __int64 (__fastcall **v138)(); // rax
  __int64 v139; // rax
  __int64 (__fastcall **v140)(); // rax
  __int64 (__fastcall **v141)(); // rax
  __int64 v142; // rax
  __int64 (__fastcall **v143)(); // rax
  __int64 (__fastcall **v144)(); // rax
  __int64 v145; // rax
  __int64 (__fastcall **v146)(); // rax
  __int64 (__fastcall **v147)(); // rax
  __int64 v148; // r13
  __int64 v149; // rdx
  __int64 v150; // rcx
  int v151; // r8d
  int v152; // r9d
  __int64 v153; // r13
  __int64 v154; // rdx
  __int64 v155; // rcx
  int v156; // r8d
  int v157; // r9d
  __int64 v158; // r13
  __int64 v159; // rdx
  __int64 v160; // rcx
  int v161; // r8d
  int v162; // r9d
  __int64 v163; // r13
  __int64 v164; // rdx
  __int64 v165; // rcx
  int v166; // r8d
  int v167; // r9d
  __m128i v168; // [rsp+8h] [rbp-610h] BYREF
  size_t v169; // [rsp+18h] [rbp-600h] BYREF
  __m128i v170; // [rsp+20h] [rbp-5F8h] BYREF
  void *v171[2]; // [rsp+30h] [rbp-5E8h]
  char *v172; // [rsp+40h] [rbp-5D8h]
  void *v173; // [rsp+48h] [rbp-5D0h] BYREF
  __int128 v174; // [rsp+50h] [rbp-5C8h]
  __m128i v175; // [rsp+60h] [rbp-5B8h] BYREF
  void *v176[2]; // [rsp+70h] [rbp-5A8h]
  char *v177; // [rsp+80h] [rbp-598h]
  void *v178; // [rsp+88h] [rbp-590h] BYREF
  __int128 v179; // [rsp+90h] [rbp-588h]
  __m128i v180; // [rsp+A0h] [rbp-578h] BYREF
  void *v181[2]; // [rsp+B0h] [rbp-568h]
  char *v182; // [rsp+C0h] [rbp-558h]
  void *v183; // [rsp+C8h] [rbp-550h] BYREF
  __int128 v184; // [rsp+D0h] [rbp-548h]
  __m128i v185; // [rsp+E0h] [rbp-538h] BYREF
  void *v186; // [rsp+F0h] [rbp-528h]
  void *v187; // [rsp+F8h] [rbp-520h]
  const void *v188[3]; // [rsp+108h] [rbp-510h] BYREF
  char v189; // [rsp+120h] [rbp-4F8h]
  __m128i v190; // [rsp+130h] [rbp-4E8h] BYREF
  void *v191; // [rsp+140h] [rbp-4D8h]
  void *v192; // [rsp+148h] [rbp-4D0h]
  const void *v193[3]; // [rsp+158h] [rbp-4C0h] BYREF
  char v194; // [rsp+170h] [rbp-4A8h]
  __m128i v195; // [rsp+180h] [rbp-498h] BYREF
  void *v196; // [rsp+190h] [rbp-488h]
  void *v197; // [rsp+198h] [rbp-480h]
  const void *v198[3]; // [rsp+1A8h] [rbp-470h] BYREF
  char v199; // [rsp+1C0h] [rbp-458h]
  __m128i v200; // [rsp+1D0h] [rbp-448h] BYREF
  void *src; // [rsp+1E0h] [rbp-438h]
  void *v202; // [rsp+1E8h] [rbp-430h]
  const void *v203[3]; // [rsp+1F8h] [rbp-420h] BYREF
  char v204; // [rsp+210h] [rbp-408h]
  _QWORD v205[6]; // [rsp+220h] [rbp-3F8h] BYREF
  char v206; // [rsp+250h] [rbp-3C8h]
  __m128i v207; // [rsp+258h] [rbp-3C0h]
  void *v208[2]; // [rsp+268h] [rbp-3B0h]
  char *v209; // [rsp+278h] [rbp-3A0h]
  void *v210; // [rsp+280h] [rbp-398h] BYREF
  __int128 v211; // [rsp+288h] [rbp-390h]
  __int128 v212; // [rsp+298h] [rbp-380h] BYREF
  __int64 v213; // [rsp+2A8h] [rbp-370h]
  void *v214; // [rsp+2B0h] [rbp-368h]
  __int64 v215; // [rsp+2B8h] [rbp-360h]
  void *v216; // [rsp+2C0h] [rbp-358h] BYREF
  __int64 v217; // [rsp+2C8h] [rbp-350h]
  _BYTE v218[16]; // [rsp+2D0h] [rbp-348h] BYREF
  _QWORD v219[6]; // [rsp+2E0h] [rbp-338h] BYREF
  char v220; // [rsp+310h] [rbp-308h]
  __m128i v221; // [rsp+318h] [rbp-300h]
  void *v222[2]; // [rsp+328h] [rbp-2F0h]
  char *v223; // [rsp+338h] [rbp-2E0h]
  void *v224; // [rsp+340h] [rbp-2D8h] BYREF
  __int128 v225; // [rsp+348h] [rbp-2D0h]
  __int128 v226; // [rsp+358h] [rbp-2C0h] BYREF
  __int64 v227; // [rsp+368h] [rbp-2B0h]
  void **v228; // [rsp+370h] [rbp-2A8h]
  __int64 v229; // [rsp+378h] [rbp-2A0h]
  void **v230; // [rsp+380h] [rbp-298h] BYREF
  __int64 v231; // [rsp+388h] [rbp-290h]
  _BYTE v232[16]; // [rsp+390h] [rbp-288h] BYREF
  _OWORD v233[3]; // [rsp+3A0h] [rbp-278h] BYREF
  char v234; // [rsp+3D0h] [rbp-248h]
  __m128i v235; // [rsp+3D8h] [rbp-240h]
  void *v236[2]; // [rsp+3E8h] [rbp-230h]
  char *v237; // [rsp+3F8h] [rbp-220h]
  void *v238; // [rsp+400h] [rbp-218h] BYREF
  __int128 v239; // [rsp+408h] [rbp-210h]
  __int128 v240; // [rsp+418h] [rbp-200h] BYREF
  __int64 v241; // [rsp+428h] [rbp-1F0h]
  void *v242; // [rsp+430h] [rbp-1E8h]
  __int64 v243; // [rsp+438h] [rbp-1E0h]
  void *v244; // [rsp+440h] [rbp-1D8h] BYREF
  __int64 v245; // [rsp+448h] [rbp-1D0h]
  _BYTE v246[16]; // [rsp+450h] [rbp-1C8h] BYREF
  __int64 (__fastcall **v247)(); // [rsp+460h] [rbp-1B8h] BYREF
  char v248; // [rsp+468h] [rbp-1B0h]
  char v249; // [rsp+490h] [rbp-188h]
  __m128i v250; // [rsp+498h] [rbp-180h]
  void *v251[2]; // [rsp+4A8h] [rbp-170h]
  char *v252; // [rsp+4B8h] [rbp-160h]
  void *v253; // [rsp+4C0h] [rbp-158h] BYREF
  __int128 v254; // [rsp+4C8h] [rbp-150h]
  __int128 v255; // [rsp+4D8h] [rbp-140h] BYREF
  __int64 v256; // [rsp+4E8h] [rbp-130h]
  void **v257; // [rsp+4F0h] [rbp-128h]
  __int64 v258; // [rsp+4F8h] [rbp-120h]
  void **v259; // [rsp+500h] [rbp-118h] BYREF
  __int64 v260; // [rsp+508h] [rbp-110h]
  _BYTE v261[16]; // [rsp+510h] [rbp-108h] BYREF
  __m128i v262; // [rsp+520h] [rbp-F8h] BYREF
  void *v263[2]; // [rsp+530h] [rbp-E8h]
  char *v264; // [rsp+540h] [rbp-D8h]
  void *ptr; // [rsp+548h] [rbp-D0h] BYREF
  __int128 v266; // [rsp+550h] [rbp-C8h]
  _BYTE v267[120]; // [rsp+560h] [rbp-B8h] BYREF
  char v268; // [rsp+5D8h] [rbp-40h]

  _RBP = a7.m128i_i64[0];
  if ( a7.m128i_i64[1] <= 0xFuLL )
  {
    if ( a7.m128i_i64[0] )
    {
      __asm { tzcnt   rbp, rbp }
      if ( (_DWORD)_RBP )
        goto LABEL_4;
    }
LABEL_7:
    v11 = "Insufficient alignment";
    goto LABEL_5;
  }
  v15 = _RSI;
  v16 = *(_BYTE *)(a7.m128i_i64[0] + 5);
  a3 = *(unsigned __int8 *)(a7.m128i_i64[0] + 4);
  __asm { tzcnt   rsi, rbp }
  if ( !(_DWORD)_RSI )
    goto LABEL_7;
  if ( (_BYTE)a3 == 1 )
  {
    if ( v16 != 1 )
    {
      if ( v16 != 2 )
      {
LABEL_12:
        v262.m128i_i64[0] = (__int64)"Invalid ELF data";
        LOWORD(v264) = 259;
        sub_2180450(&v247, (__int64)&v262, 259, a4);
        v17 = v247;
        *(_BYTE *)(a1 + 8) |= 1u;
        *(_QWORD *)a1 = v17;
        return a1;
      }
      v168 = a8;
      sub_217DCF0((__int64)&v190, a7.m128i_i64[0], a7.m128i_u64[1], a4);
      if ( (v194 & 1) != 0 )
      {
        v136 = v190.m128i_i64[0];
        v190.m128i_i64[0] = 0;
        if ( v136 )
        {
          v268 |= 1u;
          v262.m128i_i64[0] = v136;
LABEL_174:
          sub_2187E80(v190.m128i_i64);
          if ( (v268 & 1) != 0 && (v137 = (__int64 (__fastcall **)())v262.m128i_i64[0], v262.m128i_i64[0] = 0, v137) )
          {
            v248 |= 1u;
            v247 = v137;
          }
          else
          {
            v148 = operator new(0xB8u);
            sub_2188390(v148, (__int64)&v262, v149, v150, v151, v152);
            v248 &= ~1u;
            v247 = (__int64 (__fastcall **)())v148;
          }
          sub_2184840(v262.m128i_i64);
          *(_BYTE *)(a1 + 8) = v248 & 1 | *(_BYTE *)(a1 + 8) & 0xFE;
          v138 = v247;
          v247 = nullptr;
          *(_QWORD *)a1 = v138;
          sub_2184370((__int64 *)&v247);
          return a1;
        }
      }
      v48 = v192;
      v49 = nullptr;
      v50 = v191;
      v176[0] = nullptr;
      v176[1] = nullptr;
      v51 = (_BYTE *)v192 - (_BYTE *)v191;
      v175 = _mm_load_si128(&v190);
      v52 = (_BYTE *)v192 - (_BYTE *)v191;
      v177 = nullptr;
      v53 = 0xCCCCCCCCCCCCCCCDLL * (((_BYTE *)v192 - (_BYTE *)v191) >> 3);
      if ( v53 )
      {
        if ( v53 > 0x666666666666666LL )
          goto LABEL_216;
        v54 = (char *)operator new((_BYTE *)v192 - (_BYTE *)v191);
        v48 = v192;
        v50 = v191;
        v49 = v54;
        v52 = (_BYTE *)v192 - (_BYTE *)v191;
      }
      v169 = (size_t)v49;
      v55 = _mm_loadl_epi64((const __m128i *)&v169);
      v177 = &v49[v51];
      *(__m128i *)v176 = _mm_unpacklo_epi64(v55, v55);
      if ( v48 != v50 )
      {
        v169 = v52;
        v56 = (char *)memmove(v49, v50, v52);
        v52 = v169;
        v49 = v56;
      }
      v57 = &v49[v52];
      v176[1] = v57;
      v178 = &v180;
      v179 = 0;
      if ( v193[1] )
        sub_9C3DB0(&v178, v193);
      v262 = a7;
      *(__m128i *)v263 = v168;
      sub_21A20D0(
        (unsigned int)v219,
        14,
        (_DWORD)v48,
        v46,
        v47,
        (_DWORD)v57,
        a7.m128i_i64[0],
        a7.m128i_i64[1],
        v168.m128i_i64[0],
        v168.m128i_i64[1]);
      v59 = v176[1];
      v60 = v176[0];
      v61 = _mm_load_si128(&v175);
      v220 = 0;
      v222[0] = nullptr;
      v62 = (char *)v176[1] - (char *)v176[0];
      v221 = v61;
      v219[0] = &off_2C73D10;
      v63 = (char *)v176[1] - (char *)v176[0];
      v222[1] = nullptr;
      v223 = nullptr;
      v64 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v176[1] - (char *)v176[0]) >> 3);
      v65 = nullptr;
      if ( !v64 )
        goto LABEL_66;
      if ( v64 <= 0x666666666666666LL )
      {
        v66 = (char *)operator new((char *)v176[1] - (char *)v176[0]);
        v59 = v176[1];
        v60 = v176[0];
        v65 = v66;
        v63 = (char *)v176[1] - (char *)v176[0];
LABEL_66:
        v168.m128i_i64[0] = (__int64)v65;
        v67 = _mm_loadl_epi64(&v168);
        v223 = &v65[v62];
        *(__m128i *)v222 = _mm_unpacklo_epi64(v67, v67);
        if ( v59 != v60 )
        {
          v168.m128i_i64[0] = v63;
          v68 = (char *)memmove(v65, v60, v63);
          v63 = v168.m128i_i64[0];
          v65 = v68;
        }
        v69 = &v65[v63];
        v222[1] = v69;
        v224 = &v226;
        v225 = 0;
        if ( (_QWORD)v179 )
          sub_9C3DB0(&v224, (const void **)&v178);
        v228 = (void **)&v230;
        v226 = 0;
        v227 = 0;
        v229 = 0;
        v230 = (void **)v232;
        v231 = 0;
        v232[0] = 0;
        if ( v178 != &v180 )
          free(v178);
        if ( v176[0] )
          operator delete(v176[0]);
        if ( v15 && (sub_2184D50((__int64 *)&v247, (__int64)v219, (__int64)v59, (__int64)v69, v58, v63), v247) )
        {
          v268 |= 1u;
          v262.m128i_i64[0] = (__int64)v247;
        }
        else
        {
          v268 &= ~1u;
          sub_2188390((__int64)&v262, (__int64)v219, (__int64)v59, (__int64)v69, v58, v63);
        }
        v70 = (__int64)v230;
        v71 = &v230[4 * (unsigned int)v231];
        v219[0] = &off_2C73D10;
        if ( v230 != v71 )
        {
          do
          {
            while ( 1 )
            {
              v71 -= 4;
              v72 = *v71;
              if ( *v71 == v71 + 2 )
                break;
              v168.m128i_i64[0] = v70;
              operator delete(v72);
              v70 = v168.m128i_i64[0];
              if ( (void **)v168.m128i_i64[0] == v71 )
                goto LABEL_80;
            }
          }
          while ( (void **)v70 != v71 );
LABEL_80:
          v71 = v230;
        }
        if ( v71 != (void **)v232 )
          free(v71);
        v73 = (__int64)v228;
        v74 = &v228[2 * (unsigned int)v229];
        if ( v228 != v74 )
        {
          do
          {
            while ( 1 )
            {
              v74 -= 2;
              v75 = *v74;
              if ( *v74 == v74 + 2 )
                break;
              v168.m128i_i64[0] = v73;
              free(v75);
              v73 = v168.m128i_i64[0];
              if ( (void **)v168.m128i_i64[0] == v74 )
                goto LABEL_86;
            }
          }
          while ( (void **)v73 != v74 );
LABEL_86:
          v74 = v228;
        }
        if ( v74 != (void **)&v230 )
          free(v74);
        if ( v224 != &v226 )
          free(v224);
        if ( v222[0] )
          operator delete(v222[0]);
        v219[0] = &unk_2C74610;
        sub_21A25E0(v219);
        goto LABEL_174;
      }
LABEL_216:
      std::__throw_bad_alloc();
    }
    v168.m128i_i64[0] = a8.m128i_i64[1];
    v168.m128i_i64[1] = a8.m128i_i64[0];
    sub_217D6A0((__int64)&v185, a7.m128i_i64[0], a7.m128i_u64[1], a4);
    if ( (v189 & 1) != 0 && (v142 = v185.m128i_i64[0], v185.m128i_i64[0] = 0, v142) )
    {
      v268 |= 1u;
      v262.m128i_i64[0] = v142;
    }
    else
    {
      v78 = v187;
      v79 = nullptr;
      v80 = v186;
      v171[0] = nullptr;
      v171[1] = nullptr;
      v81 = (_BYTE *)v187 - (_BYTE *)v186;
      v170 = _mm_load_si128(&v185);
      v172 = nullptr;
      v82 = (_BYTE *)v187 - (_BYTE *)v186;
      v83 = 0xCCCCCCCCCCCCCCCDLL * (((_BYTE *)v187 - (_BYTE *)v186) >> 3);
      if ( v83 )
      {
        if ( v83 > 0x666666666666666LL )
          goto LABEL_216;
        v84 = (char *)operator new((_BYTE *)v187 - (_BYTE *)v186);
        v78 = v187;
        v80 = v186;
        v79 = v84;
        v82 = (_BYTE *)v187 - (_BYTE *)v186;
      }
      v169 = (size_t)v79;
      v85 = _mm_loadl_epi64((const __m128i *)&v169);
      v172 = &v79[v81];
      *(__m128i *)v171 = _mm_unpacklo_epi64(v85, v85);
      if ( v78 != v80 )
      {
        v169 = v82;
        v86 = (char *)memmove(v79, v80, v82);
        v82 = v169;
        v79 = v86;
      }
      v87 = &v79[v82];
      v171[1] = v87;
      v173 = &v175;
      v174 = 0;
      if ( v188[1] )
        sub_9C3DB0(&v173, v188);
      v262 = a7;
      v263[0] = (void *)v168.m128i_i64[1];
      v263[1] = (void *)v168.m128i_i64[0];
      sub_21A20D0(
        (unsigned int)v205,
        13,
        (_DWORD)v78,
        v76,
        v77,
        (_DWORD)v87,
        a7.m128i_i64[0],
        a7.m128i_i64[1],
        v168.m128i_i64[1],
        v168.m128i_i64[0]);
      v89 = v171[1];
      v90 = v171[0];
      v91 = _mm_load_si128(&v170);
      v206 = 0;
      v208[0] = nullptr;
      v92 = (char *)v171[1] - (char *)v171[0];
      v207 = v91;
      v205[0] = &off_2C73AC8;
      v93 = (char *)v171[1] - (char *)v171[0];
      v208[1] = nullptr;
      v209 = nullptr;
      v94 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v171[1] - (char *)v171[0]) >> 3);
      v95 = nullptr;
      if ( v94 )
      {
        if ( v94 > 0x666666666666666LL )
          goto LABEL_216;
        v96 = (char *)operator new((char *)v171[1] - (char *)v171[0]);
        v89 = v171[1];
        v90 = v171[0];
        v95 = v96;
        v93 = (char *)v171[1] - (char *)v171[0];
      }
      v168.m128i_i64[0] = (__int64)v95;
      v97 = _mm_loadl_epi64(&v168);
      v209 = &v95[v92];
      *(__m128i *)v208 = _mm_unpacklo_epi64(v97, v97);
      if ( v89 != v90 )
      {
        v168.m128i_i64[0] = v93;
        v98 = (char *)memmove(v95, v90, v93);
        v93 = v168.m128i_i64[0];
        v95 = v98;
      }
      v99 = &v95[v93];
      v208[1] = v99;
      v210 = &v212;
      v211 = 0;
      if ( (_QWORD)v174 )
        sub_9C3DB0(&v210, (const void **)&v173);
      v214 = &v216;
      v212 = 0;
      v213 = 0;
      v215 = 0;
      v216 = v218;
      v217 = 0;
      v218[0] = 0;
      if ( v173 != &v175 )
        free(v173);
      if ( v171[0] )
        operator delete(v171[0]);
      if ( v15 && (sub_21848D0((__int64 *)&v247, (__int64)v205, (__int64)v89, (__int64)v99, v88, v93), v247) )
      {
        v268 |= 1u;
        v262.m128i_i64[0] = (__int64)v247;
      }
      else
      {
        v268 &= ~1u;
        sub_2188670((__int64)&v262, (__int64)v205, (__int64)v89, (__int64)v99, v88, v93);
      }
      v100 = (void **)v216;
      v205[0] = &off_2C73AC8;
      v101 = (void **)((char *)v216 + 32 * (unsigned int)v217);
      while ( v100 != v101 )
      {
        while ( 1 )
        {
          v101 -= 4;
          v102 = *v101;
          if ( *v101 == v101 + 2 )
            break;
          v168.m128i_i64[0] = (__int64)v100;
          operator delete(v102);
          v100 = (void **)v168.m128i_i64[0];
          if ( (void **)v168.m128i_i64[0] == v101 )
            goto LABEL_120;
        }
      }
LABEL_120:
      if ( v216 != v218 )
        free(v216);
      v103 = (void **)v214;
      v104 = (void **)((char *)v214 + 16 * (unsigned int)v215);
      while ( v103 != v104 )
      {
        while ( 1 )
        {
          v104 -= 2;
          v105 = *v104;
          if ( *v104 == v104 + 2 )
            break;
          v168.m128i_i64[0] = (__int64)v103;
          free(v105);
          v103 = (void **)v168.m128i_i64[0];
          if ( (void **)v168.m128i_i64[0] == v104 )
            goto LABEL_126;
        }
      }
LABEL_126:
      if ( v214 != &v216 )
        free(v214);
      if ( v210 != &v212 )
        free(v210);
      if ( v208[0] )
        operator delete(v208[0]);
      v205[0] = &unk_2C74610;
      sub_21A25E0(v205);
    }
    sub_2187E30(v185.m128i_i64);
    if ( (v268 & 1) != 0 && (v143 = (__int64 (__fastcall **)())v262.m128i_i64[0], v262.m128i_i64[0] = 0, v143) )
    {
      v248 |= 1u;
      v247 = v143;
    }
    else
    {
      v158 = operator new(0xB8u);
      sub_2188670(v158, (__int64)&v262, v159, v160, v161, v162);
      v248 &= ~1u;
      v247 = (__int64 (__fastcall **)())v158;
    }
    sub_2184810(v262.m128i_i64);
    *(_BYTE *)(a1 + 8) = v248 & 1 | *(_BYTE *)(a1 + 8) & 0xFE;
    v144 = v247;
    v247 = nullptr;
    *(_QWORD *)a1 = v144;
    sub_2184350((__int64 *)&v247);
  }
  else
  {
    if ( (_BYTE)a3 != 2 )
    {
LABEL_4:
      v11 = "Invalid ELF class";
LABEL_5:
      v262.m128i_i64[0] = (__int64)v11;
      LOWORD(v264) = 259;
      v12 = sub_2195B10(a1, _RSI, a3, a4);
      v13 = operator new(0x40u);
      sub_2220590(v13, &v262, 3, v12);
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v13;
      return a1;
    }
    if ( v16 == 1 )
    {
      v168 = a8;
      sub_217E340((__int64)&v195, a7.m128i_i64[0], a7.m128i_u64[1], a4, a5, a6);
      if ( (v199 & 1) != 0 && (v145 = v195.m128i_i64[0], v195.m128i_i64[0] = 0, v145) )
      {
        v268 |= 1u;
        v262.m128i_i64[0] = v145;
      }
      else
      {
        v108 = v197;
        v109 = v196;
        v181[0] = nullptr;
        v181[1] = nullptr;
        v182 = nullptr;
        v110 = (_BYTE *)v197 - (_BYTE *)v196;
        v180 = _mm_load_si128(&v195);
        v111 = ((_BYTE *)v197 - (_BYTE *)v196) >> 6;
        if ( v111 )
        {
          if ( v111 > 0x3FFFFFFFFFFFFFFLL )
            goto LABEL_216;
          v112 = (char *)operator new((_BYTE *)v197 - (_BYTE *)v196);
          v109 = v196;
          v113 = v112;
          v108 = v197;
          v114 = (_BYTE *)v197 - (_BYTE *)v196;
        }
        else
        {
          v114 = (_BYTE *)v197 - (_BYTE *)v196;
          v113 = nullptr;
        }
        v169 = (size_t)v113;
        v115 = _mm_loadl_epi64((const __m128i *)&v169);
        v182 = &v113[v110];
        *(__m128i *)v181 = _mm_unpacklo_epi64(v115, v115);
        if ( v108 != v109 )
        {
          v169 = v114;
          v116 = (char *)memmove(v113, v109, v114);
          v114 = v169;
          v113 = v116;
        }
        v117 = &v113[v114];
        v181[1] = v117;
        v183 = &v185;
        v184 = 0;
        if ( v198[1] )
          sub_9C3DB0(&v183, v198);
        v262 = a7;
        *(__m128i *)v263 = v168;
        sub_21A20D0(
          (unsigned int)v233,
          15,
          v111,
          v106,
          v107,
          (_DWORD)v117,
          a7.m128i_i64[0],
          a7.m128i_i64[1],
          v168.m128i_i64[0],
          v168.m128i_i64[1]);
        v119 = v181[0];
        v234 = 0;
        v120 = _mm_load_si128(&v180);
        v236[0] = nullptr;
        v236[1] = nullptr;
        *(_QWORD *)&v233[0] = &off_2C73F58;
        v121 = v181[1];
        v235 = v120;
        v237 = nullptr;
        v122 = (char *)v181[1] - (char *)v181[0];
        v123 = ((char *)v181[1] - (char *)v181[0]) >> 6;
        if ( v123 )
        {
          if ( v123 > 0x3FFFFFFFFFFFFFFLL )
            goto LABEL_216;
          v124 = (char *)operator new((char *)v181[1] - (char *)v181[0]);
          v119 = v181[0];
          v125 = v124;
          v121 = v181[1];
          v126 = (char *)v181[1] - (char *)v181[0];
        }
        else
        {
          v126 = (char *)v181[1] - (char *)v181[0];
          v125 = nullptr;
        }
        v168.m128i_i64[0] = (__int64)v125;
        v127 = _mm_loadl_epi64(&v168);
        v237 = &v125[v122];
        *(__m128i *)v236 = _mm_unpacklo_epi64(v127, v127);
        if ( v121 != v119 )
        {
          v168.m128i_i64[0] = v126;
          v128 = (char *)memmove(v125, v119, v126);
          v126 = v168.m128i_i64[0];
          v125 = v128;
        }
        v129 = &v125[v126];
        v236[1] = v129;
        v238 = &v240;
        v239 = 0;
        if ( (_QWORD)v184 )
          sub_9C3DB0(&v238, (const void **)&v183);
        v242 = &v244;
        v240 = 0;
        v241 = 0;
        v243 = 0;
        v244 = v246;
        v245 = 0;
        v246[0] = 0;
        if ( v183 != &v185 )
          free(v183);
        if ( v181[0] )
          operator delete(v181[0]);
        if ( v15 && (sub_2185200((__int64 *)&v247, (__int64)v233, v123, (__int64)v129, v118, v126), v247) )
        {
          v268 |= 1u;
          v262.m128i_i64[0] = (__int64)v247;
        }
        else
        {
          v268 &= ~1u;
          sub_2188950((__int64)&v262, (__int64)v233, v123, (__int64)v129, v118, v126);
        }
        v130 = (void **)v244;
        *(_QWORD *)&v233[0] = &off_2C73F58;
        v131 = (void **)((char *)v244 + 32 * (unsigned int)v245);
        while ( v130 != v131 )
        {
          while ( 1 )
          {
            v131 -= 4;
            v132 = *v131;
            if ( *v131 == v131 + 2 )
              break;
            v168.m128i_i64[0] = (__int64)v130;
            operator delete(v132);
            v130 = (void **)v168.m128i_i64[0];
            if ( (void **)v168.m128i_i64[0] == v131 )
              goto LABEL_159;
          }
        }
LABEL_159:
        if ( v244 != v246 )
          free(v244);
        v133 = (void **)v242;
        v134 = (void **)((char *)v242 + 16 * (unsigned int)v243);
        while ( v133 != v134 )
        {
          while ( 1 )
          {
            v134 -= 2;
            v135 = *v134;
            if ( *v134 == v134 + 2 )
              break;
            v168.m128i_i64[0] = (__int64)v133;
            free(v135);
            v133 = (void **)v168.m128i_i64[0];
            if ( (void **)v168.m128i_i64[0] == v134 )
              goto LABEL_165;
          }
        }
LABEL_165:
        if ( v242 != &v244 )
          free(v242);
        if ( v238 != &v240 )
          free(v238);
        if ( v236[0] )
          operator delete(v236[0]);
        *(_QWORD *)&v233[0] = &unk_2C74610;
        sub_21A25E0(v233);
      }
      sub_20EAA20(v195.m128i_i64);
      if ( (v268 & 1) != 0 && (v146 = (__int64 (__fastcall **)())v262.m128i_i64[0], v262.m128i_i64[0] = 0, v146) )
      {
        v248 |= 1u;
        v247 = v146;
      }
      else
      {
        v163 = operator new(0xB8u);
        sub_2188950(v163, (__int64)&v262, v164, v165, v166, v167);
        v248 &= ~1u;
        v247 = (__int64 (__fastcall **)())v163;
      }
      sub_2184870(v262.m128i_i64);
      *(_BYTE *)(a1 + 8) = v248 & 1 | *(_BYTE *)(a1 + 8) & 0xFE;
      v147 = v247;
      v247 = nullptr;
      *(_QWORD *)a1 = v147;
      sub_2184390((__int64 *)&v247);
    }
    else
    {
      if ( v16 != 2 )
        goto LABEL_12;
      v168 = a8;
      sub_217E5A0((__int64)&v200, a7.m128i_i64[0], a7.m128i_u64[1]);
      if ( (v204 & 1) != 0 && (v139 = v200.m128i_i64[0], v200.m128i_i64[0] = 0, v139) )
      {
        v268 |= 1u;
        v262.m128i_i64[0] = v139;
      }
      else
      {
        v20 = v202;
        v21 = src;
        v263[0] = nullptr;
        v22 = _mm_load_si128(&v200);
        v263[1] = nullptr;
        v264 = nullptr;
        v23 = (_BYTE *)v202 - (_BYTE *)src;
        v262 = v22;
        v24 = ((_BYTE *)v202 - (_BYTE *)src) >> 6;
        if ( v24 )
        {
          if ( v24 > 0x3FFFFFFFFFFFFFFLL )
            goto LABEL_216;
          v25 = (char *)operator new((_BYTE *)v202 - (_BYTE *)src);
          v21 = src;
          v26 = v25;
          v20 = v202;
          v27 = (_BYTE *)v202 - (_BYTE *)src;
        }
        else
        {
          v27 = (_BYTE *)v202 - (_BYTE *)src;
          v26 = nullptr;
        }
        v169 = (size_t)v26;
        v28 = _mm_loadl_epi64((const __m128i *)&v169);
        v264 = &v26[v23];
        *(__m128i *)v263 = _mm_unpacklo_epi64(v28, v28);
        if ( v20 != v21 )
        {
          v169 = v27;
          v29 = (char *)memmove(v26, v21, v27);
          v27 = v169;
          v26 = v29;
        }
        v30 = &v26[v27];
        v263[1] = v30;
        ptr = v267;
        v266 = 0;
        if ( v203[1] )
          sub_9C3DB0(&ptr, v203);
        v233[0] = a7;
        v233[1] = v168;
        sub_21A20D0(
          (unsigned int)&v247,
          16,
          v24,
          v18,
          v19,
          (_DWORD)v30,
          a7.m128i_i64[0],
          a7.m128i_i64[1],
          v168.m128i_i64[0],
          v168.m128i_i64[1]);
        v32 = v263[0];
        v249 = 0;
        v33 = _mm_load_si128(&v262);
        v251[0] = nullptr;
        v251[1] = nullptr;
        v247 = &off_2C741A0;
        v34 = v263[1];
        v250 = v33;
        v252 = nullptr;
        v35 = (char *)v263[1] - (char *)v263[0];
        if ( ((char *)v263[1] - (char *)v263[0]) >> 6 )
        {
          if ( (unsigned __int64)(((char *)v263[1] - (char *)v263[0]) >> 6) > 0x3FFFFFFFFFFFFFFLL )
            goto LABEL_216;
          v168.m128i_i64[0] = (char *)v263[1] - (char *)v263[0];
          v36 = (char *)operator new((char *)v263[1] - (char *)v263[0]);
          v32 = v263[0];
          v35 = v168.m128i_i64[0];
          v37 = v36;
          v34 = v263[1];
          v38 = (char *)v263[1] - (char *)v263[0];
        }
        else
        {
          v38 = (char *)v263[1] - (char *)v263[0];
          v37 = nullptr;
        }
        v168.m128i_i64[0] = (__int64)v37;
        v39 = _mm_loadl_epi64(&v168);
        v40 = (__int64)&v37[v35];
        v252 = &v37[v35];
        *(__m128i *)v251 = _mm_unpacklo_epi64(v39, v39);
        if ( v34 != v32 )
          v37 = (char *)memmove(v37, v32, v38);
        v41 = &v37[v38];
        v251[1] = v41;
        v253 = &v255;
        v254 = 0;
        if ( (_QWORD)v266 )
          sub_9C3DB0(&v253, (const void **)&ptr);
        v256 = 0;
        v257 = (void **)&v259;
        v259 = (void **)v261;
        v255 = 0;
        v258 = 0;
        v260 = 0;
        v261[0] = 0;
        if ( ptr != v267 )
          free(ptr);
        if ( v263[0] )
          operator delete(v263[0]);
        if ( v15 && (sub_2185670((__int64 *)v233, (__int64)&v247, v40, (__int64)v41, v35, v31), *(_QWORD *)&v233[0]) )
        {
          v268 |= 1u;
          v262.m128i_i64[0] = *(_QWORD *)&v233[0];
        }
        else
        {
          v268 &= ~1u;
          sub_2188C30((__int64)&v262, (__int64)&v247, v40, (__int64)v41, v35, v31);
        }
        v42 = v259;
        v43 = &v259[4 * (unsigned int)v260];
        v247 = &off_2C741A0;
        if ( v259 != v43 )
        {
          do
          {
            while ( 1 )
            {
              v43 -= 4;
              if ( *v43 == v43 + 2 )
                break;
              operator delete(*v43);
              if ( v42 == v43 )
                goto LABEL_41;
            }
          }
          while ( v42 != v43 );
LABEL_41:
          v43 = v259;
        }
        if ( v43 != (void **)v261 )
          free(v43);
        v44 = v257;
        v45 = &v257[2 * (unsigned int)v258];
        if ( v257 != v45 )
        {
          do
          {
            while ( 1 )
            {
              v45 -= 2;
              if ( *v45 == v45 + 2 )
                break;
              free(*v45);
              if ( v44 == v45 )
                goto LABEL_47;
            }
          }
          while ( v44 != v45 );
LABEL_47:
          v45 = v257;
        }
        if ( v45 != (void **)&v259 )
          free(v45);
        if ( v253 != &v255 )
          free(v253);
        if ( v251[0] )
          operator delete(v251[0]);
        v247 = (__int64 (__fastcall **)())&unk_2C74610;
        sub_21A25E0(&v247);
      }
      sub_2187ED0(v200.m128i_i64);
      if ( (v268 & 1) != 0 && (v140 = (__int64 (__fastcall **)())v262.m128i_i64[0], v262.m128i_i64[0] = 0, v140) )
      {
        v248 |= 1u;
        v247 = v140;
      }
      else
      {
        v153 = operator new(0xB8u);
        sub_2188C30(v153, (__int64)&v262, v154, v155, v156, v157);
        v248 &= ~1u;
        v247 = (__int64 (__fastcall **)())v153;
      }
      sub_21848A0(v262.m128i_i64);
      *(_BYTE *)(a1 + 8) = v248 & 1 | *(_BYTE *)(a1 + 8) & 0xFE;
      v141 = v247;
      v247 = nullptr;
      *(_QWORD *)a1 = v141;
      sub_21843B0((__int64 *)&v247);
    }
  }
  return a1;
}
