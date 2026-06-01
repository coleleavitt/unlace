void __fastcall sub_D11C80(size_t a1, __int64 a2)
{
  __int64 v2; // r12
  char **v3; // rbx
  int v4; // r13d
  char *v5; // rsi
  char *v6; // rax
  int v7; // edi
  __int64 v8; // rax
  __int64 *v9; // rcx
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // r12d
  size_t v18; // r15
  __m128i *v19; // rax
  void *v20; // r14
  _QWORD *v21; // r13
  size_t v22; // rax
  __int64 v23; // r15
  _QWORD *v24; // rbx
  size_t v25; // r13
  size_t v26; // rdx
  const void *v27; // rdi
  signed __int64 v28; // rax
  unsigned __int64 v29; // rax
  char **v30; // r13
  char **v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rcx
  char **v36; // rsi
  __int64 v37; // rcx
  __m128i v38; // xmm1
  __int64 v39; // rax
  _QWORD *v40; // rax
  _BYTE *v41; // rax
  size_t v42; // rax
  size_t v43; // r15
  void *v44; // r14
  _QWORD *v45; // r9
  void *v46; // r13
  __int64 v47; // rbx
  _QWORD *v48; // r14
  size_t v49; // r15
  size_t v50; // rdx
  int v51; // eax
  std::ios_base *v52; // rcx
  size_t v53; // r15
  size_t v54; // r14
  size_t v55; // rdx
  int v56; // eax
  std::ios_base *v57; // rax
  __int64 v58; // rax
  __m128i si128; // xmm4
  char *v60; // rax
  __int64 v61; // rax
  const char *v62; // rbx
  _QWORD *v63; // rax
  _BYTE *v64; // rax
  size_t v65; // rax
  size_t v66; // r15
  _QWORD *v67; // r14
  _QWORD *v68; // r15
  __int64 v69; // rbx
  _QWORD *v70; // r9
  size_t v71; // rax
  __int64 v72; // r12
  _QWORD *v73; // rbx
  size_t v74; // r13
  size_t v75; // rdx
  int v76; // eax
  size_t v77; // r14
  size_t v78; // rbx
  size_t v79; // rdx
  int v80; // eax
  __int64 v81; // rdi
  char **v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdi
  char **v85; // rcx
  __int64 v86; // rax
  std::ios_base *v87; // rdi
  _QWORD *v88; // r15
  __m128i *v89; // rax
  void *v90; // r13
  __int64 v91; // rbx
  __int64 v92; // r14
  size_t v93; // rdx
  signed __int64 v94; // rax
  unsigned __int64 v95; // r12
  unsigned __int64 v96; // rbx
  size_t v97; // rdx
  signed __int64 v98; // rax
  _QWORD *v99; // rax
  __m128i *v100; // rax
  size_t v101; // rcx
  _QWORD *v102; // r13
  _QWORD *v103; // rbx
  size_t v104; // r13
  size_t v105; // rdx
  const void *v106; // rdi
  signed __int64 v107; // rax
  unsigned __int64 v108; // rax
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  size_t v111; // r15
  _BYTE *v112; // rax
  size_t v113; // r15
  _QWORD *v114; // rax
  unsigned __int64 v115; // r12
  size_t v116; // rax
  signed __int64 v117; // rax
  _QWORD *v118; // rax
  __int64 v119; // rdx
  char ***v120; // r13
  __int64 v121; // r8
  __int32 v122; // r9d
  char ***v123; // r14
  int v124; // ecx
  __int64 v125; // r9
  char ***v126; // rdi
  size_t v127; // r10
  char ***v128; // rax
  char ***v129; // rsi
  char **v130; // rdx
  unsigned __int64 v131; // r12
  size_t v132; // rax
  signed __int64 v133; // rax
  __int64 v134; // r12
  unsigned __int64 v135; // rdi
  void *v136; // rax
  __int64 v137; // rbx
  unsigned __int64 v138; // rdi
  _QWORD *v139; // rax
  char **v140; // rbx
  __m128i *v141; // rax
  size_t v142; // rdx
  __m128i v143; // xmm0
  void *v144; // r14
  __int64 v145; // r15
  char *v146; // rbx
  size_t v147; // rdx
  const void *v148; // rdi
  signed __int64 v149; // rax
  unsigned __int64 v150; // rax
  unsigned __int64 v151; // rbx
  size_t v152; // rax
  signed __int64 v153; // rax
  _QWORD *v154; // rax
  size_t v155; // r14
  unsigned __int64 v156; // rdi
  std::ios_base *v157; // rax
  void *v158; // rsi
  size_t v159; // rbx
  unsigned __int64 v160; // rdi
  _QWORD *v161; // r14
  void *v162; // rsi
  char **v163; // rax
  char ***v164; // rax
  __int32 v165; // ecx
  char *v166; // r15
  char *v167; // r10
  __int64 v168; // rax
  char ***v169; // rdx
  char ***v170; // rax
  size_t v171; // rax
  size_t v172; // rax
  size_t v173; // [rsp+10h] [rbp-430h]
  char **v174; // [rsp+18h] [rbp-428h]
  _QWORD *v175; // [rsp+18h] [rbp-428h]
  void *v176; // [rsp+20h] [rbp-420h]
  char **v177; // [rsp+20h] [rbp-420h]
  _QWORD *v178; // [rsp+20h] [rbp-420h]
  void *v179; // [rsp+20h] [rbp-420h]
  _QWORD *v180; // [rsp+28h] [rbp-418h]
  std::ios_base *v181; // [rsp+30h] [rbp-410h]
  std::ios_base *v182; // [rsp+30h] [rbp-410h]
  std::ios_base *v183; // [rsp+30h] [rbp-410h]
  std::ios_base *v184; // [rsp+30h] [rbp-410h]
  __m128i v185; // [rsp+40h] [rbp-400h] BYREF
  std::locale *v186[2]; // [rsp+50h] [rbp-3F0h] BYREF
  _QWORD *v187; // [rsp+60h] [rbp-3E0h]
  void *v188; // [rsp+68h] [rbp-3D8h]
  char **v189; // [rsp+70h] [rbp-3D0h]
  __int64 v190; // [rsp+78h] [rbp-3C8h]
  __int64 v191; // [rsp+80h] [rbp-3C0h]
  __int64 v192; // [rsp+88h] [rbp-3B8h]
  __m128i v193; // [rsp+90h] [rbp-3B0h] BYREF
  char **v194; // [rsp+A0h] [rbp-3A0h]
  size_t v195; // [rsp+A8h] [rbp-398h]
  void *dest; // [rsp+B0h] [rbp-390h]
  size_t n; // [rsp+B8h] [rbp-388h]
  __int64 v198; // [rsp+C0h] [rbp-380h] BYREF
  char **p_s1; // [rsp+C8h] [rbp-378h] BYREF
  void *s1; // [rsp+D0h] [rbp-370h] BYREF
  size_t v201; // [rsp+D8h] [rbp-368h]
  _QWORD v202[2]; // [rsp+E0h] [rbp-360h] BYREF
  char **p_s2; // [rsp+F0h] [rbp-350h] BYREF
  __int64 v204; // [rsp+F8h] [rbp-348h]
  _OWORD v205[2]; // [rsp+100h] [rbp-340h] BYREF
  void *src[2]; // [rsp+120h] [rbp-320h]
  __int128 v207; // [rsp+130h] [rbp-310h]
  char v208[8]; // [rsp+140h] [rbp-300h] BYREF
  int v209; // [rsp+148h] [rbp-2F8h]
  void *v210; // [rsp+150h] [rbp-2F0h]
  size_t v211; // [rsp+158h] [rbp-2E8h]
  _QWORD v212[2]; // [rsp+160h] [rbp-2E0h] BYREF
  _QWORD v213[28]; // [rsp+170h] [rbp-2D0h] BYREF
  __int16 v214; // [rsp+250h] [rbp-1F0h]
  __int128 v215; // [rsp+258h] [rbp-1E8h]
  __int128 v216; // [rsp+268h] [rbp-1D8h]
  void *s2; // [rsp+280h] [rbp-1C0h] BYREF
  size_t v218; // [rsp+288h] [rbp-1B8h]
  _OWORD v219[2]; // [rsp+290h] [rbp-1B0h] BYREF
  void *v220[2]; // [rsp+2B0h] [rbp-190h]
  __int128 v221; // [rsp+2C0h] [rbp-180h]
  char v222[8]; // [rsp+2D0h] [rbp-170h] BYREF
  int v223; // [rsp+2D8h] [rbp-168h]
  void *v224; // [rsp+2E0h] [rbp-160h]
  size_t v225; // [rsp+2E8h] [rbp-158h]
  _QWORD v226[2]; // [rsp+2F0h] [rbp-150h] BYREF
  _QWORD v227[28]; // [rsp+300h] [rbp-140h] BYREF
  __int16 v228; // [rsp+3E0h] [rbp-60h]
  __int128 v229; // [rsp+3E8h] [rbp-58h]
  __int128 v230; // [rsp+3F8h] [rbp-48h]

  v2 = 0;
  v3 = (char **)a2;
  v4 = *(_DWORD *)(a2 + 32);
  n = a1;
  if ( v4 )
  {
    do
    {
      v5 = v3[v2++ + 6];
      sub_D10320(a1, v5);
    }
    while ( (unsigned int)v2 < *((_DWORD *)v3 + 8) );
    n = a1;
  }
  sub_D10320(n, v3[5]);
  v6 = v3[3];
  if ( v6 && *(_DWORD *)v6 != -1 )
  {
    v198 = 0;
    v188 = &v198;
    sub_1862300(&v198, "pp.single_line", 1);
    v195 = (size_t)v213;
    std::ios_base::ios_base((std::ios_base *)v213);
    v214 = 0;
    v215 = 0;
    v30 = (char **)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
    v216 = 0;
    v31 = (char **)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
    v213[0] = (char *)&`vtable for'std::ios + 16;
    v32 = (__int64)*(v30 - 3);
    p_s2 = v30;
    v213[27] = 0;
    *(char ***)((char *)&p_s2 + v32) = v31;
    v204 = 0;
    v194 = v31;
    std::ios::init();
    v33 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
    v34 = *(_QWORD *)(v33 - 24);
    *(_QWORD *)&v205[0] = v33;
    v192 = v33;
    v35 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
    *(_QWORD *)((char *)v205 + v34) = v35;
    v191 = v35;
    std::ios::init();
    v36 = (char **)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
    v185.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                      + 64;
    v37 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
    v38 = _mm_unpacklo_epi64(
            (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                    + 64),
            (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    v189 = v36;
    v39 = *(_QWORD *)(v37 - 24);
    v190 = v37;
    *(__m128i *)v186 = v38;
    *(char ***)((char *)&p_s2 + v39) = v36;
    v205[0] = v38;
    p_s2 = (char **)((char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24);
    v213[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
    v185.m128i_i64[1] = (__int64)v208;
    v205[1] = 0;
    *(_OWORD *)src = 0;
    v207 = 0;
    std::locale::locale((std::locale *)v208);
    v210 = v212;
    *((_QWORD *)&v205[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
    v209 = 24;
    v211 = 0;
    LOBYTE(v212[0]) = 0;
    std::ios::init();
    v193.m128i_i64[0] = (__int64)&s2;
    sub_1606330((unsigned int)&s2, (_DWORD)v3, *(_QWORD *)n, (_DWORD)v188, 0, 0, 0);
    sub_160E8B0(v205, &s2);
    dest = v219;
    sub_18572D0(v219);
    v40 = *(_QWORD **)(n + 8);
    s2 = v219;
    v218 = 0;
    v187 = v40;
    v41 = (_BYTE *)v207;
    LOBYTE(v219[0]) = 0;
    if ( (_QWORD)v207 )
    {
      if ( src[0] >= (void *)v207 )
        v41 = src[0];
      if ( !src[0] )
        v41 = (_BYTE *)v207;
      v42 = v41 - (char *)src[1];
      v43 = v42;
      if ( (v42 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_replace");
      if ( v42 > 0xF )
      {
        if ( v42 <= 0x1D )
        {
          v134 = 30;
          v135 = 31;
        }
        else
        {
          v134 = v42;
          v135 = v42 + 1;
          if ( (__int64)(v42 + 1) < 0 )
            std::__throw_bad_alloc();
        }
        v183 = (std::ios_base *)src[1];
        v136 = (void *)operator new(v135);
        v44 = v136;
        if ( v183 )
          memcpy(v136, v183, v43);
        if ( s2 != dest )
          operator delete(s2, *(_QWORD *)&v219[0] + 1LL);
        s2 = v44;
        *(_QWORD *)&v219[0] = v134;
      }
      else if ( src[1] == dest )
      {
        std::string::_M_replace_cold();
        v44 = s2;
      }
      else
      {
        if ( v42 )
        {
          if ( v42 == 1 )
            LOBYTE(v219[0]) = *(_BYTE *)src[1];
          else
            memcpy(dest, src[1], v42);
        }
        v44 = dest;
      }
      v218 = v43;
      *((_BYTE *)v44 + v43) = 0;
      goto LABEL_45;
    }
    v111 = v211;
    if ( v211 > 0xF )
    {
      if ( (v211 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( v211 > 0x1D )
      {
        v155 = v211;
        v156 = v211 + 1;
        if ( (__int64)(v211 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v155 = 30;
        v156 = 31;
      }
      v157 = (std::ios_base *)operator new(v156);
      if ( s2 != dest )
      {
        v184 = v157;
        operator delete(s2, *(_QWORD *)&v219[0] + 1LL);
        v157 = v184;
      }
      s2 = v157;
      v158 = v210;
      *(_QWORD *)&v219[0] = v155;
    }
    else
    {
      if ( !v211 )
      {
LABEL_162:
        v112 = dest;
LABEL_163:
        v218 = v111;
        v112[v111] = 0;
LABEL_45:
        v45 = v187 + 1;
        if ( !v187[2] )
          goto LABEL_150;
        v181 = (std::ios_base *)v30;
        v46 = s2;
        v174 = v3;
        v47 = v187[2];
        v48 = v187 + 1;
        v176 = (void *)n;
        n = v218;
        while ( 1 )
        {
          while ( 1 )
          {
            v49 = *(_QWORD *)(v47 + 40);
            v50 = n;
            if ( n > v49 )
              v50 = *(_QWORD *)(v47 + 40);
            if ( !v50 )
              break;
            v51 = memcmp(*(const void **)(v47 + 32), v46, v50);
            if ( !v51 )
              break;
LABEL_55:
            if ( v51 < 0 )
              goto LABEL_56;
LABEL_47:
            v48 = (_QWORD *)v47;
            v47 = *(_QWORD *)(v47 + 16);
            if ( !v47 )
              goto LABEL_57;
          }
          if ( (__int64)(v49 - n) >= 0x80000000LL )
            goto LABEL_47;
          if ( (__int64)(v49 - n) > (__int64)0xFFFFFFFF7FFFFFFFLL )
          {
            v51 = v49 - n;
            goto LABEL_55;
          }
LABEL_56:
          v47 = *(_QWORD *)(v47 + 24);
          if ( !v47 )
          {
LABEL_57:
            v52 = (std::ios_base *)v46;
            v45 = v48;
            v53 = n;
            v30 = (char **)v181;
            n = (size_t)v176;
            v3 = v174;
            if ( v48 == v187 + 1 )
              goto LABEL_150;
            v54 = v48[5];
            v55 = v54;
            if ( v53 <= v54 )
              v55 = v53;
            if ( v55
              && (v180 = v45, v182 = v52, v56 = memcmp(v52, (const void *)v45[4], v55), v52 = v182, v45 = v180, v56) )
            {
LABEL_65:
              if ( v56 < 0 )
                goto LABEL_150;
            }
            else if ( (__int64)(v53 - v54) <= 0x7FFFFFFF )
            {
              if ( (__int64)(v53 - v54) >= (__int64)0xFFFFFFFF80000000LL )
              {
                v56 = v53 - v54;
                goto LABEL_65;
              }
LABEL_150:
              s1 = (void *)v193.m128i_i64[0];
              v109 = sub_D0DD30(v187, (__int64)v45, (char ***)&s1);
              v52 = (std::ios_base *)s2;
              v45 = v109;
            }
            v57 = (std::ios_base *)dest;
            ++v45[8];
            if ( v52 != v57 )
              operator delete(v52, *(_QWORD *)&v219[0] + 1LL);
            std::ios_base::ios_base((std::ios_base *)v227);
            v228 = 0;
            v229 = 0;
            v230 = 0;
            v227[0] = (char *)&`vtable for'std::ios + 16;
            v58 = (__int64)*(v30 - 3);
            v227[27] = 0;
            s2 = v30;
            *(void **)((char *)&s2 + v58) = v194;
            v218 = 0;
            std::ios::init();
            *(_QWORD *)&v219[0] = v192;
            *(_QWORD *)((char *)dest + *(_QWORD *)(v192 - 24)) = v191;
            std::ios::init();
            si128 = _mm_load_si128((const __m128i *)v186);
            *(void **)((char *)&s2 + *(_QWORD *)(v190 - 24)) = v189;
            v219[0] = si128;
            v219[1] = 0;
            s2 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
            *(_OWORD *)v220 = 0;
            v221 = 0;
            v227[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                    + 104;
            v186[0] = (std::locale *)v222;
            std::locale::locale((std::locale *)v222);
            v223 = 24;
            LOBYTE(v226[0]) = 0;
            *((_QWORD *)&v219[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
            v224 = v226;
            v225 = 0;
            std::ios::init();
            v60 = v3[3];
            if ( v60 && (v61 = *((_QWORD *)v60 + 1)) != 0 && *(_DWORD *)(v61 - 4) )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              v62 = v3[2];
              if ( ((unsigned __int8)v62 & 7) != 0 )
                goto LABEL_154;
              if ( v62 )
LABEL_73:
                strlen(v62);
LABEL_74:
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            else
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              v62 = v3[2];
              if ( ((unsigned __int8)v62 & 7) == 0 )
              {
                if ( v62 )
                  goto LABEL_73;
                goto LABEL_74;
              }
LABEL_154:
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::operator<<();
            }
            std::__ostream_insert<char,std::char_traits<char>>();
            v201 = 0;
            s1 = v202;
            v63 = *(_QWORD **)(n + 8);
            LOBYTE(v202[0]) = 0;
            v187 = v63;
            v64 = (_BYTE *)v221;
            if ( (_QWORD)v221 )
            {
              if ( v220[0] >= (void *)v221 )
                v64 = v220[0];
              if ( !v220[0] )
                v64 = (_BYTE *)v221;
              v65 = v64 - (char *)v220[1];
              v66 = v65;
              if ( (v65 & 0x8000000000000000LL) != 0LL )
                std::__throw_length_error("basic_string::_M_replace");
              if ( v65 > 0xF )
              {
                if ( v65 <= 0x1D )
                {
                  v137 = 30;
                  v138 = 31;
                }
                else
                {
                  v137 = v65;
                  v138 = v65 + 1;
                  if ( (__int64)(v65 + 1) < 0 )
                    std::__throw_bad_alloc();
                }
                v179 = v220[1];
                v139 = (_QWORD *)operator new(v138);
                v67 = v139;
                if ( v179 )
                  memcpy(v139, v179, v66);
                if ( s1 != v202 )
                  operator delete(s1, v202[0] + 1LL);
                s1 = v67;
                v202[0] = v137;
              }
              else if ( v220[1] == v202 )
              {
                std::string::_M_replace_cold();
                v67 = s1;
              }
              else
              {
                if ( v65 )
                {
                  if ( v65 == 1 )
                    LOBYTE(v202[0]) = *(_BYTE *)v220[1];
                  else
                    memcpy(v202, v220[1], v65);
                }
                v67 = v202;
              }
              v201 = v66;
              *((_BYTE *)v67 + v66) = 0;
LABEL_86:
              v68 = s1;
              v69 = v187[2];
              v70 = v187 + 1;
              if ( !v69 )
                goto LABEL_151;
              v71 = n;
              v177 = v30;
              n = v201;
              v72 = v69;
              v73 = v187 + 1;
              v175 = v187 + 1;
              v173 = v71;
              while ( 2 )
              {
                while ( 2 )
                {
                  v74 = *(_QWORD *)(v72 + 40);
                  v75 = n;
                  if ( n > v74 )
                    v75 = *(_QWORD *)(v72 + 40);
                  if ( v75 && (v76 = memcmp(*(const void **)(v72 + 32), v68, v75)) != 0 )
                  {
LABEL_96:
                    if ( v76 >= 0 )
                    {
LABEL_88:
                      v73 = (_QWORD *)v72;
                      v72 = *(_QWORD *)(v72 + 16);
                      if ( !v72 )
                        goto LABEL_98;
                      continue;
                    }
                  }
                  else
                  {
                    if ( (__int64)(v74 - n) >= 0x80000000LL )
                      goto LABEL_88;
                    if ( (__int64)(v74 - n) > (__int64)0xFFFFFFFF7FFFFFFFLL )
                    {
                      v76 = v74 - n;
                      goto LABEL_96;
                    }
                  }
                  break;
                }
                v72 = *(_QWORD *)(v72 + 24);
                if ( !v72 )
                {
LABEL_98:
                  v70 = v73;
                  v77 = n;
                  v30 = v177;
                  n = v173;
                  if ( v73 == v175 )
                    goto LABEL_151;
                  v78 = v73[5];
                  v79 = v78;
                  if ( v77 <= v78 )
                    v79 = v77;
                  if ( v79 && (v178 = v70, v80 = memcmp(v68, (const void *)v70[4], v79), v70 = v178, v80) )
                  {
LABEL_106:
                    if ( v80 < 0 )
                      goto LABEL_151;
                  }
                  else if ( (__int64)(v77 - v78) <= 0x7FFFFFFF )
                  {
                    if ( (__int64)(v77 - v78) >= (__int64)0xFFFFFFFF80000000LL )
                    {
                      v80 = v77 - v78;
                      goto LABEL_106;
                    }
LABEL_151:
                    p_s1 = (char **)&s1;
                    v110 = sub_D0DD30(v187, (__int64)v70, &p_s1);
                    v68 = s1;
                    v70 = v110;
                  }
                  ++v70[8];
                  v193 = _mm_unpacklo_epi64(
                           _mm_loadl_epi64(&v185),
                           (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
                  if ( v68 != v202 )
                    operator delete(v68, v202[0] + 1LL);
                  v219[0] = _mm_load_si128(&v193);
                  s2 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                     + 24;
                  v227[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                          + 104;
                  if ( v224 != v226 )
                    operator delete(v224, v226[0] + 1LL);
                  *((_QWORD *)&v219[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
                  std::locale::~locale(v186[0]);
                  v81 = v191;
                  *(void **)((char *)&s2 + *(_QWORD *)(v190 - 24)) = v189;
                  v82 = v194;
                  *(_QWORD *)&v219[0] = v192;
                  *(_QWORD *)((char *)v219 + *(_QWORD *)(v192 - 24)) = v81;
                  v83 = (__int64)*(v30 - 3);
                  s2 = v30;
                  *(void **)((char *)&s2 + v83) = v82;
                  v218 = 0;
                  v227[0] = (char *)&`vtable for'std::ios + 16;
                  std::ios_base::~ios_base((std::ios_base *)v227);
                  v205[0] = _mm_load_si128(&v193);
                  p_s2 = (char **)((char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                                 + 24);
                  v213[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                          + 104;
                  if ( v210 != v212 )
                    operator delete(v210, v212[0] + 1LL);
                  *((_QWORD *)&v205[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
                  std::locale::~locale((std::locale *)v185.m128i_i64[1]);
                  v84 = v191;
                  v85 = v194;
                  *(char ***)((char *)&p_s2 + *(_QWORD *)(v190 - 24)) = v189;
                  *(_QWORD *)&v205[0] = v192;
                  *(_QWORD *)((char *)v205 + *(_QWORD *)(v192 - 24)) = v84;
                  v86 = (__int64)*(v30 - 3);
                  p_s2 = v30;
                  v87 = (std::ios_base *)v195;
                  *(char ***)((char *)&p_s2 + v86) = v85;
                  v204 = 0;
                  v213[0] = (char *)&`vtable for'std::ios + 16;
                  std::ios_base::~ios_base(v87);
                  sub_18572D0(v188);
                  goto LABEL_114;
                }
                continue;
              }
            }
            v113 = v225;
            if ( v225 > 0xF )
            {
              if ( (v225 & 0x8000000000000000LL) != 0LL )
                std::__throw_length_error("basic_string::_M_create");
              if ( v225 > 0x1D )
              {
                v159 = v225;
                v160 = v225 + 1;
                if ( (__int64)(v225 + 1) < 0 )
                  std::__throw_bad_alloc();
              }
              else
              {
                v159 = 30;
                v160 = 31;
              }
              v161 = (_QWORD *)operator new(v160);
              if ( s1 != v202 )
                operator delete(s1, v202[0] + 1LL);
              s1 = v161;
              v162 = v224;
              v202[0] = v159;
            }
            else
            {
              if ( !v225 )
                goto LABEL_166;
              v162 = v224;
              v161 = v202;
              if ( v225 == 1 )
              {
                LOBYTE(v202[0]) = *(_BYTE *)v224;
LABEL_166:
                v114 = v202;
LABEL_167:
                v201 = v113;
                *((_BYTE *)v114 + v113) = 0;
                goto LABEL_86;
              }
            }
            memcpy(v161, v162, v113);
            v114 = s1;
            goto LABEL_167;
          }
        }
      }
      v158 = v210;
      v157 = (std::ios_base *)dest;
      if ( v211 == 1 )
      {
        LOBYTE(v219[0]) = *(_BYTE *)v210;
        goto LABEL_162;
      }
    }
    memcpy(v157, v158, v111);
    v112 = s2;
    goto LABEL_163;
  }
  v7 = *((_DWORD *)v3 + 3);
  v8 = *(unsigned int *)(n + 48);
  v9 = *(__int64 **)(n + 40);
  v10 = v8 - 1;
  v8 *= 8;
  v11 = (__int64 *)((char *)v9 + v8);
  v12 = 8LL * (v7 & v10);
  v13 = &v9[(unsigned __int64)v12 / 8];
  if ( v12 != v8 )
  {
    for ( i = &v9[(unsigned __int64)v12 / 8]; v11 != i; ++i )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v7 && (char **)v15 == v3 )
        {
          dest = v219;
          goto LABEL_212;
        }
      }
      else if ( !v15 )
      {
        goto LABEL_21;
      }
    }
  }
  for ( ; v13 != v9; ++v9 )
  {
    v16 = *v9;
    if ( (unsigned __int64)*v9 > 1 )
    {
      if ( *(_DWORD *)(v16 + 12) == v7 && (char **)v16 == v3 )
      {
        dest = v219;
        goto LABEL_212;
      }
    }
    else if ( !v16 )
    {
      break;
    }
  }
LABEL_21:
  v17 = *((_DWORD *)v3 + 8);
  v18 = *(_QWORD *)(n + 8);
  v195 = v18;
  if ( v17 )
  {
    dest = v219;
    v100 = (__m128i *)operator new(0x18u);
    v101 = v195;
    *(_QWORD *)&v219[0] = 23;
    v20 = v100;
    s2 = v100;
    *v100 = _mm_load_si128((const __m128i *)&xmmword_18B68C0);
    strcpy(&v100->m128i_i8[15], "unctions");
    v102 = *(_QWORD **)(v101 + 16);
    v23 = v101 + 8;
    v218 = 23;
    if ( !v102 )
      goto LABEL_176;
    v194 = v3;
    v103 = v102;
    v104 = v101 + 8;
    v193.m128i_i64[0] = n;
    while ( 1 )
    {
      v108 = v103[5];
      if ( !v108 )
      {
LABEL_149:
        v103 = (_QWORD *)v103[3];
        goto LABEL_147;
      }
      v105 = 23;
      v106 = (const void *)v103[4];
      n = v103[5];
      if ( v108 <= 0x17 )
        v105 = v108;
      LODWORD(v107) = memcmp(v106, v20, v105);
      if ( !(_DWORD)v107 )
      {
        v107 = n - 23;
        if ( (__int64)(n - 23) >= 0x80000000LL )
          goto LABEL_146;
        if ( v107 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
          goto LABEL_149;
      }
      if ( (int)v107 < 0 )
        goto LABEL_149;
LABEL_146:
      v23 = (__int64)v103;
      v103 = (_QWORD *)v103[2];
LABEL_147:
      if ( !v103 )
      {
        v3 = v194;
        n = v193.m128i_i64[0];
        if ( v104 == v23 )
          goto LABEL_176;
        v131 = *(_QWORD *)(v23 + 40);
        if ( v131 )
        {
          v132 = 23;
          if ( v131 <= 0x17 )
            v132 = *(_QWORD *)(v23 + 40);
          LODWORD(v133) = memcmp(v20, *(const void **)(v23 + 32), v132);
          if ( (_DWORD)v133 )
          {
LABEL_195:
            if ( (int)v133 < 0 )
              goto LABEL_176;
          }
          else
          {
            v133 = 23 - v131;
            if ( (__int64)(23 - v131) <= 0x7FFFFFFF )
            {
              if ( v133 < (__int64)0xFFFFFFFF80000000LL )
                goto LABEL_176;
              goto LABEL_195;
            }
          }
        }
        goto LABEL_251;
      }
    }
  }
  dest = v219;
  s2 = v219;
  v19 = (__m128i *)operator new(0x18u);
  *(_QWORD *)&v219[0] = 23;
  v20 = v19;
  *v19 = _mm_load_si128((const __m128i *)&xmmword_18B68B0);
  strcpy(&v19->m128i_i8[15], "onstants");
  v21 = *(_QWORD **)(v18 + 16);
  s2 = v19;
  v22 = v18 + 8;
  v218 = 23;
  v23 = v18 + 8;
  if ( !v21 )
    goto LABEL_176;
  v194 = v3;
  v24 = v21;
  v25 = v22;
  v193.m128i_i64[0] = n;
  do
  {
    v29 = v24[5];
    if ( v29 )
    {
      v26 = 23;
      v27 = (const void *)v24[4];
      n = v24[5];
      if ( v29 <= 0x17 )
        v26 = v29;
      LODWORD(v28) = memcmp(v27, v20, v26);
      if ( (_DWORD)v28 )
        goto LABEL_29;
      v28 = n - 23;
      if ( (__int64)(n - 23) >= 0x80000000LL )
        goto LABEL_30;
      if ( v28 > (__int64)0xFFFFFFFF7FFFFFFFLL )
      {
LABEL_29:
        if ( (int)v28 >= 0 )
        {
LABEL_30:
          v23 = (__int64)v24;
          v24 = (_QWORD *)v24[2];
          continue;
        }
      }
    }
    v24 = (_QWORD *)v24[3];
  }
  while ( v24 );
  v3 = v194;
  n = v193.m128i_i64[0];
  if ( v25 == v23 )
    goto LABEL_176;
  v115 = *(_QWORD *)(v23 + 40);
  if ( !v115 )
    goto LABEL_251;
  v116 = 23;
  if ( v115 <= 0x17 )
    v116 = *(_QWORD *)(v23 + 40);
  LODWORD(v117) = memcmp(v20, *(const void **)(v23 + 32), v116);
  if ( (_DWORD)v117 )
  {
LABEL_175:
    if ( (int)v117 < 0 )
      goto LABEL_176;
    goto LABEL_251;
  }
  v117 = 23 - v115;
  if ( (__int64)(23 - v115) > 0x7FFFFFFF )
  {
LABEL_251:
    ++*(_QWORD *)(v23 + 64);
    goto LABEL_177;
  }
  if ( v117 >= (__int64)0xFFFFFFFF80000000LL )
    goto LABEL_175;
LABEL_176:
  v193.m128i_i64[0] = (__int64)&s2;
  p_s2 = (char **)&s2;
  v118 = sub_D0DD30((_QWORD *)v195, v23, &p_s2);
  v20 = s2;
  ++v118[8];
  if ( v20 != dest )
LABEL_177:
    operator delete(v20, *(_QWORD *)&v219[0] + 1LL);
  v119 = *(unsigned int *)(n + 48);
  if ( 3 * (int)v119 < (unsigned int)(4 * (*(_DWORD *)(n + 52) + *(_DWORD *)(n + 56))) )
  {
    v193.m128i_i32[0] = 2 * v119;
    v195 = 8LL * (unsigned int)(2 * v119);
    v164 = (char ***)sub_186B270(v195);
    v165 = v193.m128i_i32[0];
    v121 = v195;
    v120 = v164;
    if ( v193.m128i_i32[0] )
    {
      memset(v164, 0, v195);
      v121 = v195;
      v165 = v193.m128i_i32[0];
    }
    v122 = v165 - 1;
    v123 = (char ***)((char *)v120 + v121);
    v166 = *(char **)(n + 40);
    v167 = &v166[8 * *(unsigned int *)(n + 48)];
    if ( v166 != v167 )
    {
      do
      {
        if ( *(_QWORD *)v166 > 1u )
        {
          v168 = 8LL * (*(_DWORD *)(*(_QWORD *)v166 + 12LL) & (unsigned int)v122);
          v169 = &v120[(unsigned __int64)v168 / 8];
          if ( v121 == v168 )
          {
LABEL_273:
            if ( v120 == v169 )
            {
LABEL_290:
              LODWORD(v194) = v165;
              v193.m128i_i32[0] = v165 - 1;
              v195 = v121;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v170 = v120;
            while ( *v170 )
            {
              if ( v169 == ++v170 )
                goto LABEL_290;
            }
          }
          else
          {
            v170 = &v120[(unsigned __int64)v168 / 8];
            while ( *v170 )
            {
              if ( v123 == ++v170 )
                goto LABEL_273;
            }
          }
          *v170 = *(char ***)v166;
        }
        v166 += 8;
      }
      while ( v167 != v166 );
      v167 = *(char **)(n + 40);
    }
    if ( v167 )
    {
      LODWORD(v194) = v165;
      v193.m128i_i32[0] = v165 - 1;
      v195 = v121;
      sub_186B220(v167);
      v165 = (int)v194;
      v122 = v193.m128i_i32[0];
      v121 = v195;
    }
    v171 = n;
    *(_QWORD *)(n + 40) = v120;
    *(_DWORD *)(v171 + 48) = v165;
    *(_DWORD *)(v171 + 56) = 0;
  }
  else
  {
    v120 = *(char ****)(n + 40);
    v121 = 8 * v119;
    v122 = v119 - 1;
    v123 = &v120[v119];
  }
  v124 = *((_DWORD *)v3 + 3);
  v125 = v124 & (unsigned int)v122;
  v126 = &v120[v125];
  if ( 8 * v125 == v121 )
  {
    v129 = nullptr;
LABEL_253:
    if ( v126 == v120 )
    {
LABEL_261:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v163 = *v120;
      if ( (unsigned __int64)*v120 > 1 )
      {
        if ( *((_DWORD *)v163 + 3) == v124 && v163 == v3 )
        {
          *v120 = v3;
          goto LABEL_212;
        }
      }
      else
      {
        if ( !v163 )
        {
          v172 = n;
          if ( v129 )
            --*(_DWORD *)(n + 56);
          else
            v129 = v120;
          goto LABEL_286;
        }
        v129 = v120;
      }
      if ( v126 == ++v120 )
        goto LABEL_261;
    }
  }
  v127 = n;
  v128 = &v120[v125];
  v129 = nullptr;
  while ( 2 )
  {
    v130 = *v128;
    if ( (unsigned __int64)*v128 > 1 )
    {
      if ( *((_DWORD *)v130 + 3) == v124 && v130 == v3 )
      {
        *v128 = v3;
        goto LABEL_212;
      }
      goto LABEL_184;
    }
    if ( v130 )
    {
      v129 = v128;
LABEL_184:
      if ( ++v128 == v123 )
        goto LABEL_253;
      continue;
    }
    break;
  }
  if ( v129 )
    --*(_DWORD *)(n + 56);
  else
    v129 = v128;
  v172 = v127;
LABEL_286:
  *v129 = v3;
  ++*(_DWORD *)(v172 + 52);
LABEL_212:
  if ( !*((_DWORD *)v3 + 8) )
    goto LABEL_114;
  v140 = *(char ***)(n + 8);
  s2 = dest;
  v194 = v140;
  v141 = (__m128i *)operator new(0x23u);
  v142 = (size_t)(v140 + 1);
  v143 = _mm_load_si128((const __m128i *)&xmmword_18B68C0);
  strcpy(v141[2].m128i_i8, "es");
  v144 = v141;
  v145 = (__int64)(v140 + 1);
  *v141 = v143;
  *(_QWORD *)&v219[0] = 34;
  v141[1] = _mm_load_si128((const __m128i *)&xmmword_18B68D0);
  v146 = v140[2];
  s2 = v141;
  v218 = 34;
  if ( !v146 )
    goto LABEL_230;
  v195 = v142;
  v193.m128i_i64[0] = n;
  while ( 2 )
  {
    while ( 2 )
    {
      v150 = *((_QWORD *)v146 + 5);
      if ( v150 )
      {
        v147 = 34;
        v148 = *((const void **)v146 + 4);
        n = *((_QWORD *)v146 + 5);
        if ( v150 <= 0x22 )
          v147 = v150;
        LODWORD(v149) = memcmp(v148, v144, v147);
        if ( !(_DWORD)v149 )
        {
          v149 = n - 34;
          if ( (__int64)(n - 34) >= 0x80000000LL )
          {
LABEL_221:
            v145 = (__int64)v146;
            v146 = *((char **)v146 + 2);
            if ( !v146 )
              goto LABEL_224;
            continue;
          }
          if ( v149 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            break;
        }
        if ( (int)v149 < 0 )
          break;
        goto LABEL_221;
      }
      break;
    }
    v146 = *((char **)v146 + 3);
    if ( v146 )
      continue;
    break;
  }
LABEL_224:
  n = v193.m128i_i64[0];
  if ( v195 == v145 )
    goto LABEL_230;
  v151 = *(_QWORD *)(v145 + 40);
  if ( !v151 )
    goto LABEL_297;
  v152 = 34;
  if ( v151 <= 0x22 )
    v152 = *(_QWORD *)(v145 + 40);
  LODWORD(v153) = memcmp(v144, *(const void **)(v145 + 32), v152);
  if ( (_DWORD)v153 )
  {
LABEL_229:
    if ( (int)v153 < 0 )
      goto LABEL_230;
LABEL_297:
    ++*(_QWORD *)(v145 + 64);
LABEL_231:
    operator delete(v144, *(_QWORD *)&v219[0] + 1LL);
  }
  else
  {
    v153 = 34 - v151;
    if ( (__int64)(34 - v151) > 0x7FFFFFFF )
      goto LABEL_297;
    if ( v153 >= (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_229;
LABEL_230:
    v193.m128i_i64[0] = (__int64)&s2;
    p_s2 = (char **)&s2;
    v154 = sub_D0DD30(v194, v145, &p_s2);
    v144 = s2;
    ++v154[8];
    if ( v144 != dest )
      goto LABEL_231;
  }
LABEL_114:
  v88 = *(_QWORD **)(n + 8);
  s2 = dest;
  v89 = (__m128i *)operator new(0x16u);
  *(_QWORD *)&v219[0] = 21;
  v90 = v89;
  s2 = v89;
  *v89 = _mm_load_si128((const __m128i *)&xmmword_18B68E0);
  strcpy(&v89->m128i_i8[13], "ications");
  v91 = v88[2];
  v92 = (__int64)(v88 + 1);
  v218 = 21;
  if ( !v91 )
    goto LABEL_133;
  n = (size_t)(v88 + 1);
  while ( 2 )
  {
    while ( 2 )
    {
      v95 = *(_QWORD *)(v91 + 40);
      if ( v95 )
      {
        v93 = 21;
        if ( v95 <= 0x15 )
          v93 = *(_QWORD *)(v91 + 40);
        LODWORD(v94) = memcmp(*(const void **)(v91 + 32), v90, v93);
        if ( !(_DWORD)v94 )
        {
          v94 = v95 - 21;
          if ( (__int64)(v95 - 21) >= 0x80000000LL )
          {
LABEL_122:
            v92 = v91;
            v91 = *(_QWORD *)(v91 + 16);
            if ( !v91 )
              goto LABEL_125;
            continue;
          }
          if ( v94 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            break;
        }
        if ( (int)v94 < 0 )
          break;
        goto LABEL_122;
      }
      break;
    }
    v91 = *(_QWORD *)(v91 + 24);
    if ( v91 )
      continue;
    break;
  }
LABEL_125:
  if ( n == v92 )
    goto LABEL_133;
  v96 = *(_QWORD *)(v92 + 40);
  if ( !v96 )
    goto LABEL_155;
  v97 = 21;
  if ( v96 <= 0x15 )
    v97 = *(_QWORD *)(v92 + 40);
  LODWORD(v98) = memcmp(v90, *(const void **)(v92 + 32), v97);
  if ( (_DWORD)v98 )
  {
LABEL_132:
    if ( (int)v98 < 0 )
      goto LABEL_133;
    goto LABEL_155;
  }
  v98 = 21 - v96;
  if ( (__int64)(21 - v96) > 0x7FFFFFFF )
  {
LABEL_155:
    ++*(_QWORD *)(v92 + 64);
    goto LABEL_134;
  }
  if ( v98 >= (__int64)0xFFFFFFFF80000000LL )
    goto LABEL_132;
LABEL_133:
  v193.m128i_i64[0] = (__int64)&s2;
  p_s2 = (char **)&s2;
  v99 = sub_D0DD30(v88, v92, &p_s2);
  v90 = s2;
  ++v99[8];
  if ( v90 != dest )
LABEL_134:
    operator delete(v90, *(_QWORD *)&v219[0] + 1LL);
}

