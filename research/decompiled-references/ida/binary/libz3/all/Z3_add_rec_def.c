void __fastcall Z3_add_rec_def(__int64 a1, __int64 a2, int a3, std::ios_base **a4, __int64 a5)
{
  char **v5; // r13
  char **exception; // r13
  std::ios_base **v8; // r13
  char v9; // al
  int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  unsigned int v15; // r9d
  __int64 *v16; // rsi
  __int64 v17; // r9
  __int64 *v18; // r8
  __int64 *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  char **v23; // rdi
  char *v24; // rcx
  __m128i si128; // xmm3
  void *v26; // rdx
  __int64 v27; // rax
  size_t v28; // rax
  __m128i v29; // xmm6
  __int64 v30; // rax
  std::ios_base *v31; // rdi
  size_t v32; // rbx
  char *v33; // rax
  _BYTE *v34; // r14
  void *v35; // rdx
  std::ios_base *v36; // rdx
  _QWORD *v37; // rax
  int v38; // ebx
  std::ios_base **v39; // rcx
  _QWORD *v40; // r14
  std::ios_base *v41; // rdx
  int v42; // eax
  unsigned int v43; // r12d
  std::ios_base **v44; // rbx
  __int64 i; // rax
  std::ios_base *v46; // rax
  std::ios_base *v47; // rdx
  char *v48; // rdi
  unsigned int v49; // eax
  std::ios_base *v51; // rdx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  size_t v54; // rsi
  _DWORD *v55; // rax
  __int64 v56; // rsi
  std::ios_base *v57; // rdx
  unsigned int v58; // ecx
  size_t v59; // rsi
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  int v63; // edi
  char *v64; // rcx
  __int64 v65; // rax
  int v66; // edx
  char *v67; // rsi
  char *v68; // rdx
  char *v69; // r8
  char *v70; // rax
  unsigned __int64 v71; // r12
  __int64 v72; // rax
  _QWORD *v73; // rcx
  __int64 v74; // rsi
  void *v75; // rcx
  void *v76; // rdx
  __int64 v77; // rax
  size_t v78; // rax
  __m128i v79; // xmm0
  std::ios_base *v80; // rdi
  size_t v81; // r14
  std::ios_base *v82; // rcx
  __m128i v83; // xmm0
  __m128i *v84; // rax
  std::ios_base *v85; // r8
  void *v86; // rdx
  char *v87; // r12
  char *v88; // r15
  char *v89; // r13
  __int64 v90; // rsi
  bool v91; // zf
  unsigned __int64 v92; // r12
  __int64 v93; // r13
  std::ios_base **v94; // r14
  std::ios_base *v95; // rsi
  __int64 v96; // rsi
  __int64 v97; // rdi
  _QWORD *v98; // r12
  void *v99; // rdi
  __int64 *v100; // r12
  unsigned __int64 v101; // r13
  char *v102; // r15
  __int64 v103; // rsi
  void *v104; // rdi
  __int64 *v105; // r12
  unsigned __int64 v106; // r13
  char *v107; // r15
  __int64 v108; // rsi
  __int64 v109; // rdi
  __int64 *v110; // r12
  unsigned __int64 v111; // r13
  char *v112; // r15
  __int64 v113; // rsi
  __int64 v114; // rdi
  char *v115; // r12
  char *v116; // r15
  char *v117; // r13
  __int64 v118; // rsi
  unsigned __int64 v119; // r12
  __int64 v120; // r13
  std::ios_base **v121; // r15
  std::ios_base *v122; // rsi
  __int64 v123; // rsi
  __int64 v124; // rdi
  _DWORD *v125; // rdi
  void **v126; // rdx
  int v127; // esi
  __int64 v128; // rcx
  unsigned __int64 v129; // rdi
  size_t v130; // r12
  std::ios_base *v131; // rax
  _QWORD *v132; // r9
  std::ios_base *v133; // rax
  __m128i v134; // xmm0
  __m128i *v135; // rax
  int v136; // esi
  __int128 *v137; // rdi
  _DWORD *v138; // rax
  __int64 v139; // rcx
  size_t v140; // r12
  unsigned __int64 v141; // rdi
  _BYTE *v142; // rax
  _QWORD *v143; // rcx
  char *v144; // rax
  _DWORD *v145; // rdi
  void **v146; // rdx
  int v147; // esi
  __int64 v148; // rcx
  int v149; // esi
  __int128 *v150; // rdi
  _DWORD *v151; // rax
  __int64 v152; // rcx
  char *v153; // r11
  __int64 v154; // rdx
  __int64 v155; // rcx
  char *v156; // r11
  __int64 v157; // rax
  __int64 v158; // rcx
  char *v159; // r11
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // [rsp+0h] [rbp-2B0h]
  __int64 v165; // [rsp+8h] [rbp-2A8h] BYREF
  __m128i v166; // [rsp+10h] [rbp-2A0h] BYREF
  void *v167; // [rsp+20h] [rbp-290h]
  void *v168; // [rsp+28h] [rbp-288h]
  int v169[3]; // [rsp+30h] [rbp-280h]
  char v170; // [rsp+3Fh] [rbp-271h]
  std::locale *v171[2]; // [rsp+40h] [rbp-270h] BYREF
  __int64 v172; // [rsp+50h] [rbp-260h]
  int v173[2]; // [rsp+58h] [rbp-258h]
  std::ios_base *v174; // [rsp+60h] [rbp-250h]
  std::ios_base *v175; // [rsp+68h] [rbp-248h]
  __int64 v176; // [rsp+70h] [rbp-240h]
  char *v177; // [rsp+78h] [rbp-238h]
  int v178[2]; // [rsp+80h] [rbp-230h] BYREF
  __int64 v179; // [rsp+88h] [rbp-228h]
  __int64 v180; // [rsp+90h] [rbp-220h]
  __m128i v181; // [rsp+A0h] [rbp-210h] BYREF
  void *src; // [rsp+B0h] [rbp-200h]
  size_t n; // [rsp+B8h] [rbp-1F8h]
  _QWORD v184[2]; // [rsp+C0h] [rbp-1F0h] BYREF
  _BYTE v185[16]; // [rsp+D0h] [rbp-1E0h] BYREF
  _BYTE v186[32]; // [rsp+E0h] [rbp-1D0h] BYREF
  void *v187[2]; // [rsp+100h] [rbp-1B0h] BYREF
  __int128 v188; // [rsp+110h] [rbp-1A0h] BYREF
  __int128 v189; // [rsp+120h] [rbp-190h]
  __int128 v190; // [rsp+130h] [rbp-180h]
  __int64 v191; // [rsp+140h] [rbp-170h] BYREF
  __int64 v192; // [rsp+148h] [rbp-168h]
  void *p_s; // [rsp+150h] [rbp-160h]
  __int64 *v194; // [rsp+158h] [rbp-158h]
  void *s; // [rsp+160h] [rbp-150h] BYREF
  __int64 v196; // [rsp+168h] [rbp-148h]
  void *v197; // [rsp+170h] [rbp-140h] BYREF
  __int64 v198; // [rsp+178h] [rbp-138h]
  int v199; // [rsp+180h] [rbp-130h]
  __int64 v200; // [rsp+188h] [rbp-128h]
  _QWORD v201[23]; // [rsp+190h] [rbp-120h] BYREF
  __int64 v202; // [rsp+248h] [rbp-68h]
  __int16 v203; // [rsp+250h] [rbp-60h]
  __int128 v204; // [rsp+258h] [rbp-58h]
  __int128 v205; // [rsp+268h] [rbp-48h]

  v8 = a4;
  v172 = a1;
  v173[0] = a3;
  *(_QWORD *)v169 = a5;
  v9 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v170 = v9;
  if ( v9 )
    sub_295BE0(v172, a2, (unsigned int)v173[0], a4, *(_QWORD *)v169);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = *(_QWORD *)(v172 + 232);
  v12 = *(_QWORD *)(v172 + 584);
  v13 = *(unsigned int *)(v12 + 40);
  v14 = *(__int64 **)(v12 + 32);
  v171[0] = (std::locale *)v12;
  v176 = v11;
  v15 = v13 - 1;
  v13 *= 16;
  v16 = (__int64 *)((char *)v14 + v13);
  v17 = 16LL * (v10 & v15);
  v18 = &v14[(unsigned __int64)v17 / 8];
  v19 = &v14[(unsigned __int64)v17 / 8];
  if ( v17 == v13 )
  {
LABEL_51:
    while ( v18 != v14 )
    {
      v62 = *v14;
      if ( (unsigned __int64)*v14 > 1 )
      {
        if ( *(_DWORD *)(v62 + 12) == v10 && a2 == v62 )
          goto LABEL_28;
      }
      else if ( !v62 )
      {
        break;
      }
      v14 += 2;
    }
LABEL_10:
    v168 = &`vtable for'std::stringbuf;
    *(_QWORD *)v173 = &`vtable for'std::streambuf;
    v166 = _mm_unpacklo_epi64(
             (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
             (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
    *(__m128i *)v171 = _mm_unpacklo_epi64(
                         (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                         (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    sub_1606360(v185, a2, v176, 0, 0, 0);
    v175 = (std::ios_base *)&v197;
    std::ios_base::ios_base((std::ios_base *)&v197);
    v203 = 0;
    v204 = 0;
    v174 = (std::ios_base *)&`vtable for'std::ios;
    v197 = (char *)&`vtable for'std::ios + 16;
    v205 = 0;
    v21 = (_QWORD *)`VTT for'std::ostringstream[1];
    v202 = 0;
    v22 = *(v21 - 3);
    v187[0] = v21;
    v23 = (char **)((char *)v187 + v22);
    v24 = (char *)`VTT for'std::ostringstream[2];
    *v23 = v24;
    v177 = v24;
    std::ios::init();
    si128 = _mm_load_si128((const __m128i *)v171);
    v197 = (char *)&`vtable for'std::ostringstream + 64;
    v171[0] = (std::locale *)&v191;
    *(__m128i *)v187 = si128;
    v188 = 0;
    v189 = 0;
    v190 = 0;
    std::locale::locale((std::locale *)&v191);
    v187[1] = (char *)&`vtable for'std::stringbuf + 16;
    LODWORD(v192) = 16;
    p_s = &s;
    v194 = nullptr;
    LOBYTE(s) = 0;
    *(_QWORD *)v169 = &v187[1];
    std::ios::init();
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_160E8B0(v187, v185);
    v26 = p_s;
    if ( (_QWORD)v190 )
    {
      v27 = v189;
      if ( !(_QWORD)v189 || (unsigned __int64)v189 < (unsigned __int64)v190 )
        v27 = v190;
      v194 = (__int64 *)(v27 - *((_QWORD *)&v189 + 1));
      *((_BYTE *)p_s + v27 - *((_QWORD *)&v189 + 1)) = 0;
      v26 = p_s;
      src = v184;
      if ( p_s != &s )
        goto LABEL_14;
    }
    else
    {
      src = v184;
      if ( p_s != &s )
      {
LABEL_14:
        src = v26;
        v184[0] = s;
        v28 = (size_t)v194;
        goto LABEL_15;
      }
    }
    v28 = (size_t)v194;
    v145 = v184;
    v146 = &s;
    v147 = (_DWORD)v194 + 1;
    if ( (unsigned int)((_DWORD)v194 + 1) >= 8 )
    {
      v159 = v177;
      LODWORD(v160) = 0;
      do
      {
        v161 = (unsigned int)v160;
        v160 = (unsigned int)(v160 + 8);
        *(_QWORD *)((char *)v184 + v161) = *(void **)((char *)&s + v161);
      }
      while ( (unsigned int)v160 < (v147 & 0xFFFFFFF8) );
      v145 = (_DWORD *)((char *)v184 + v160);
      v177 = v159;
      v146 = (void **)((char *)&s + v160);
    }
    v148 = 0;
    if ( (v147 & 4) != 0 )
    {
      *v145 = *(_DWORD *)v146;
      v148 = 4;
    }
    if ( (v147 & 2) != 0 )
    {
      *(_WORD *)((char *)v145 + v148) = *(_WORD *)((char *)v146 + v148);
      v148 += 2;
    }
    if ( (v147 & 1) != 0 )
      *((_BYTE *)v145 + v148) = *((_BYTE *)v146 + v148);
LABEL_15:
    n = v28;
    p_s = &s;
    v194 = nullptr;
    LOBYTE(s) = 0;
    std::stringbuf::_M_sync();
    v29 = _mm_load_si128(&v166);
    v197 = (char *)&`vtable for'std::ostringstream + 64;
    *(__m128i *)v187 = v29;
    if ( p_s != &s )
      operator delete(p_s, (unsigned __int64)s + 1);
    v187[1] = (void *)(*(_QWORD *)v173 + 16LL);
    std::locale::~locale(v171[0]);
    v30 = *(v21 - 3);
    v187[0] = v21;
    v31 = v175;
    *(void **)((char *)v187 + v30) = v177;
    v197 = (char *)v174 + 16;
    std::ios_base::~ios_base(v31);
    v32 = n;
    if ( 0x7FFFFFFFFFFFFFFFLL - n <= 0x28 )
      std::__throw_length_error("basic_string::append");
    v177 = (char *)(n + 41);
    if ( src == v184 )
    {
      v140 = n + 41;
      v141 = n + 42;
    }
    else
    {
      if ( v184[0] >= n + 41 )
      {
        v33 = (char *)src + n;
        *(__m128i *)v33 = _mm_load_si128((const __m128i *)&xmmword_18B6530);
        *((__m128i *)v33 + 1) = _mm_load_si128((const __m128i *)&xmmword_18B6540);
        *(__m128i *)(v33 + 25) = _mm_load_si128((const __m128i *)&xmmword_18B6550);
        v34 = src;
LABEL_21:
        n = (size_t)v177;
        v34[v32 + 41] = 0;
        v187[0] = &v188;
        v35 = (void *)n;
        if ( src == v184 )
        {
          v149 = n + 1;
          v150 = &v188;
          v151 = v184;
          if ( (unsigned int)(n + 1) >= 8 )
          {
            LODWORD(v162) = 0;
            do
            {
              v163 = (unsigned int)v162;
              v162 = (unsigned int)(v162 + 8);
              *(_QWORD *)((char *)&v188 + v163) = *(_QWORD *)((char *)v184 + v163);
            }
            while ( (unsigned int)v162 < (v149 & 0xFFFFFFF8) );
            v150 = (__int128 *)((char *)&v188 + v162);
            v151 = (_DWORD *)((char *)v184 + v162);
          }
          v152 = 0;
          if ( (v149 & 4) != 0 )
          {
            *(_DWORD *)v150 = *v151;
            v152 = 4;
          }
          if ( (v149 & 2) != 0 )
          {
            *(_WORD *)((char *)v150 + v152) = *(_WORD *)((char *)v151 + v152);
            v152 += 2;
          }
          if ( (v149 & 1) != 0 )
            *((_BYTE *)v150 + v152) = *((_BYTE *)v151 + v152);
        }
        else
        {
          v187[0] = src;
          *(_QWORD *)&v188 = v184[0];
        }
        v187[1] = v35;
        src = v184;
        n = 0;
        LOBYTE(v184[0]) = 0;
        sub_24EC20(v172, 3u, (__int64)v187);
        if ( v187[0] != &v188 )
          operator delete(v187[0], v188 + 1);
        if ( src != v184 )
          operator delete(src, v184[0] + 1LL);
        sub_18572D0(v186);
        goto LABEL_110;
      }
      if ( (__int64)v177 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v140 = 2LL * v184[0];
      if ( (unsigned __int64)v177 >= 2LL * v184[0] )
      {
        v140 = n + 41;
        v141 = n + 42;
        if ( (__int64)(n + 42) < 0 )
LABEL_236:
          std::__throw_bad_alloc();
      }
      else
      {
        v141 = v140 + 1;
        if ( (v184[0] & 0x4000000000000000LL) != 0 )
          goto LABEL_236;
      }
    }
    v142 = (_BYTE *)operator new(v141);
    v143 = src;
    v34 = v142;
    if ( v32 )
    {
      if ( v32 == 1 )
      {
        *v142 = *(_BYTE *)src;
      }
      else
      {
        v176 = (__int64)src;
        memcpy(v142, src, v32);
        v143 = (_QWORD *)v176;
      }
    }
    v144 = &v34[v32];
    *(__m128i *)v144 = _mm_load_si128((const __m128i *)&xmmword_18B6530);
    *((__m128i *)v144 + 1) = _mm_load_si128((const __m128i *)&xmmword_18B6540);
    *(__m128i *)(v144 + 25) = _mm_load_si128((const __m128i *)&xmmword_18B6550);
    if ( v143 != v184 )
      operator delete(v143, v184[0] + 1LL);
    src = v34;
    v184[0] = v140;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v20 = *v19;
    if ( (unsigned __int64)*v19 > 1 )
      break;
    if ( !v20 )
      goto LABEL_10;
LABEL_7:
    v19 += 2;
    if ( v16 == v19 )
      goto LABEL_51;
  }
  if ( *(_DWORD *)(v20 + 12) != v10 || a2 != v20 )
    goto LABEL_7;
LABEL_28:
  *(_QWORD *)v178 = 0;
  v179 = v176;
  v180 = v176;
  if ( !v173[0] )
  {
    v177 = nullptr;
    v44 = nullptr;
LABEL_60:
    sub_1697FC0(v176, 0, v173[0], (int)v44, v169[0], (int)v178, v164, v165, v166.m128i_i64[0], v166.m128i_i64[1], v167);
    v63 = *(_DWORD *)(a2 + 12);
    v64 = *((char **)v171[0] + 4);
    v65 = *((unsigned int *)v171[0] + 10);
    v66 = v65 - 1;
    v65 *= 16;
    v67 = &v64[v65];
    v68 = (char *)(16LL * (v63 & (unsigned int)v66));
    v69 = &v68[(_QWORD)v64];
    if ( v68 != (char *)v65 )
    {
      v68 = &v68[(_QWORD)v64];
      do
      {
        v70 = *(char **)v68;
        if ( *(_QWORD *)v68 > 1u )
        {
          if ( *((_DWORD *)v70 + 3) == v63 && (char *)a2 == v70 )
          {
            v70 = v68;
            goto LABEL_67;
          }
        }
        else if ( !v70 )
        {
          goto LABEL_67;
        }
        v68 += 16;
      }
      while ( v67 != v68 );
    }
    if ( v64 != v69 )
    {
      v67 = v177;
      while ( 1 )
      {
        v70 = *(char **)v64;
        if ( *(_QWORD *)v64 > 1u )
        {
          if ( *((_DWORD *)v70 + 3) == v63 && (char *)a2 == v70 )
          {
            v70 = v64;
            goto LABEL_67;
          }
        }
        else if ( !v70 )
        {
          goto LABEL_67;
        }
        v64 += 16;
        if ( v69 == v64 )
        {
          v70 = nullptr;
          goto LABEL_67;
        }
      }
    }
    v70 = nullptr;
LABEL_67:
    v71 = *((_QWORD *)v70 + 1);
    v181 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_162A780(v171[0], v67, v68, v64, v69), (__m128i)v71);
    if ( v71 )
    {
      v72 = *(_QWORD *)(v71 + 64);
      if ( v72 && *(_DWORD *)(v72 - 4) )
      {
        sub_1606360(v185, a2, v176, 0, 0, 0);
        v175 = (std::ios_base *)&v197;
        std::ios_base::ios_base((std::ios_base *)&v197);
        v203 = 0;
        v174 = (std::ios_base *)&`vtable for'std::ios;
        v197 = (char *)&`vtable for'std::ios + 16;
        v204 = 0;
        v73 = (_QWORD *)`VTT for'std::ostringstream[1];
        v205 = 0;
        v202 = 0;
        v74 = *(v73 - 3);
        v187[0] = v73;
        v166.m128i_i64[0] = (__int64)v73;
        v75 = (void *)`VTT for'std::ostringstream[2];
        *(void **)((char *)v187 + v74) = v75;
        v167 = v75;
        std::ios::init();
        *(_QWORD *)v173 = &`vtable for'std::streambuf;
        v197 = (char *)&`vtable for'std::ostringstream + 64;
        v165 = (__int64)&`vtable for'std::ostringstream + 24;
        v171[0] = (std::locale *)&v191;
        *(__m128i *)v187 = _mm_unpacklo_epi64(
                             (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                             (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
        v188 = 0;
        v189 = 0;
        v190 = 0;
        std::locale::locale((std::locale *)&v191);
        LODWORD(v192) = 16;
        p_s = &s;
        v168 = &`vtable for'std::stringbuf;
        v187[1] = (char *)&`vtable for'std::stringbuf + 16;
        v194 = nullptr;
        LOBYTE(s) = 0;
        *(_QWORD *)v169 = &v187[1];
        std::ios::init();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_160E8B0(v187, v185);
        v76 = p_s;
        if ( (_QWORD)v190 )
        {
          v77 = v189;
          if ( !(_QWORD)v189 || (unsigned __int64)v189 < (unsigned __int64)v190 )
            v77 = v190;
          v194 = (__int64 *)(v77 - *((_QWORD *)&v189 + 1));
          *((_BYTE *)p_s + v77 - *((_QWORD *)&v189 + 1)) = 0;
          v76 = p_s;
          src = v184;
          if ( p_s != &s )
            goto LABEL_74;
        }
        else
        {
          src = v184;
          if ( p_s != &s )
          {
LABEL_74:
            src = v76;
            v184[0] = s;
            v78 = (size_t)v194;
            goto LABEL_75;
          }
        }
        v78 = (size_t)v194;
        v125 = v184;
        v126 = &s;
        v127 = (_DWORD)v194 + 1;
        if ( (unsigned int)((_DWORD)v194 + 1) >= 8 )
        {
          v153 = v177;
          LODWORD(v154) = 0;
          do
          {
            v155 = (unsigned int)v154;
            v154 = (unsigned int)(v154 + 8);
            *(_QWORD *)((char *)v184 + v155) = *(void **)((char *)&s + v155);
          }
          while ( (unsigned int)v154 < (v127 & 0xFFFFFFF8) );
          v125 = (_DWORD *)((char *)v184 + v154);
          v177 = v153;
          v126 = (void **)((char *)&s + v154);
        }
        v128 = 0;
        if ( (v127 & 4) != 0 )
        {
          *v125 = *(_DWORD *)v126;
          v128 = 4;
        }
        if ( (v127 & 2) != 0 )
        {
          *(_WORD *)((char *)v125 + v128) = *(_WORD *)((char *)v126 + v128);
          v128 += 2;
        }
        if ( (v127 & 1) != 0 )
          *((_BYTE *)v125 + v128) = *((_BYTE *)v126 + v128);
LABEL_75:
        n = v78;
        p_s = &s;
        v194 = nullptr;
        LOBYTE(s) = 0;
        std::stringbuf::_M_sync();
        v79 = _mm_loadl_epi64((const __m128i *)&v165);
        v197 = (char *)&`vtable for'std::ostringstream + 64;
        *(__m128i *)v187 = _mm_unpacklo_epi64(v79, (__m128i)((unsigned __int64)v168 + 16));
        if ( p_s != &s )
          operator delete(p_s, (unsigned __int64)s + 1);
        v187[1] = (void *)(*(_QWORD *)v173 + 16LL);
        std::locale::~locale(v171[0]);
        v80 = v175;
        v187[0] = (void *)v166.m128i_i64[0];
        *(void **)((char *)v187 + *(_QWORD *)(v166.m128i_i64[0] - 24)) = v167;
        v197 = (char *)v174 + 16;
        std::ios_base::~ios_base(v80);
        v81 = n;
        if ( 0x7FFFFFFFFFFFFFFFLL - n <= 0x23 )
          std::__throw_length_error("basic_string::append");
        v82 = (std::ios_base *)(n + 36);
        if ( src == v184 )
        {
          v129 = n + 37;
          v130 = n + 36;
        }
        else
        {
          if ( v184[0] >= (unsigned __int64)v82 )
          {
            v83 = _mm_load_si128((const __m128i *)&xmmword_18B6560);
            v84 = (__m128i *)((char *)src + n);
            v84[2].m128i_i32[0] = 1852795252;
            *v84 = v83;
            v84[1] = _mm_load_si128((const __m128i *)&xmmword_18B6570);
            v85 = (std::ios_base *)src;
LABEL_81:
            n = (size_t)v82;
            *((_BYTE *)v85 + v81 + 36) = 0;
            v187[0] = &v188;
            v86 = (void *)n;
            if ( src == v184 )
            {
              v136 = n + 1;
              v137 = &v188;
              v138 = v184;
              if ( (unsigned int)(n + 1) >= 8 )
              {
                v156 = v177;
                LODWORD(v157) = 0;
                do
                {
                  v158 = (unsigned int)v157;
                  v157 = (unsigned int)(v157 + 8);
                  *(_QWORD *)((char *)&v188 + v158) = *(_QWORD *)((char *)v184 + v158);
                }
                while ( (unsigned int)v157 < (v136 & 0xFFFFFFF8) );
                v137 = (__int128 *)((char *)&v188 + v157);
                v177 = v156;
                v138 = (_DWORD *)((char *)v184 + v157);
              }
              v139 = 0;
              if ( (v136 & 4) != 0 )
              {
                *(_DWORD *)v137 = *v138;
                v139 = 4;
              }
              if ( (v136 & 2) != 0 )
              {
                *(_WORD *)((char *)v137 + v139) = *(_WORD *)((char *)v138 + v139);
                v139 += 2;
              }
              if ( (v136 & 1) != 0 )
                *((_BYTE *)v137 + v139) = *((_BYTE *)v138 + v139);
            }
            else
            {
              v187[0] = src;
              *(_QWORD *)&v188 = v184[0];
            }
            v187[1] = v86;
            src = v184;
            n = 0;
            LOBYTE(v184[0]) = 0;
            sub_24EC20(v172, 3u, (__int64)v187);
            if ( v187[0] != &v188 )
              operator delete(v187[0], v188 + 1);
            if ( src != v184 )
              operator delete(src, v184[0] + 1LL);
            sub_18572D0(v186);
LABEL_88:
            if ( v177 )
              goto LABEL_91;
            goto LABEL_99;
          }
          if ( (__int64)v82 < 0 )
            std::__throw_length_error("basic_string::_M_create");
          v130 = 2LL * v184[0];
          if ( (unsigned __int64)v82 >= 2LL * v184[0] )
          {
            v130 = n + 36;
            v129 = n + 37;
            if ( (__int64)(n + 37) < 0 )
LABEL_210:
              std::__throw_bad_alloc();
          }
          else
          {
            v129 = v130 + 1;
            if ( (v184[0] & 0x4000000000000000LL) != 0 )
              goto LABEL_210;
          }
        }
        v175 = (std::ios_base *)(n + 36);
        v131 = (std::ios_base *)operator new(v129);
        v132 = src;
        v82 = v175;
        v85 = v131;
        if ( v81 )
        {
          if ( v81 == 1 )
          {
            *(_BYTE *)v131 = *(_BYTE *)src;
          }
          else
          {
            v174 = v175;
            v175 = (std::ios_base *)src;
            v133 = (std::ios_base *)memcpy(v131, src, v81);
            v82 = v174;
            v132 = v175;
            v85 = v133;
          }
        }
        v134 = _mm_load_si128((const __m128i *)&xmmword_18B6560);
        v135 = (__m128i *)((char *)v85 + v81);
        v135[2].m128i_i32[0] = 1852795252;
        *v135 = v134;
        v135[1] = _mm_load_si128((const __m128i *)&xmmword_18B6570);
        if ( v132 != v184 )
        {
          v174 = v82;
          v175 = v85;
          operator delete(v132, v184[0] + 1LL);
          v82 = v174;
          v85 = v175;
        }
        src = v85;
        v184[0] = v130;
        goto LABEL_81;
      }
      if ( *(_QWORD *)(a2 + 40) == sub_15D1F10(*(_QWORD *)v178) )
      {
        v187[0] = &off_1C4CAA0;
        v187[1] = (void *)v176;
        *(_QWORD *)&v188 = v176;
        *((_QWORD *)&v188 + 1) = v176;
        *(_QWORD *)&v189 = 0;
        *((_QWORD *)&v189 + 1) = v176;
        v190 = 0u;
        v191 = 0;
        v192 = 0;
        p_s = (void *)v176;
        v194 = nullptr;
        s = v201;
        v196 = 1;
        v197 = nullptr;
        v198 = 0;
        v199 = 1065353216;
        v200 = 0;
        v201[0] = 0;
        sub_1631DC0(v171[0], (unsigned int)v187, (unsigned int)&v181, 0, v173[0], (_DWORD)v177, *(__int64 *)v178);
        v187[0] = &off_1C4CAA0;
        v98 = v197;
        if ( v197 )
        {
          do
          {
            v99 = v98;
            v98 = (_QWORD *)*v98;
            operator delete(v99, 0x18u);
          }
          while ( v98 );
        }
        memset(s, 0, 8 * v196);
        v198 = 0;
        v197 = nullptr;
        if ( s != v201 )
          operator delete(s, 8 * v196);
        v100 = v194;
        if ( v194 )
        {
          v101 = (unsigned __int64)&v194[*((unsigned int *)v194 - 1)];
          if ( (unsigned __int64)v194 >= v101 )
            goto LABEL_136;
          v102 = v177;
          do
          {
            while ( 1 )
            {
              v103 = *v100;
              if ( *v100 )
              {
                v104 = p_s;
                v91 = (*(_DWORD *)(v103 + 8))-- == 1;
                if ( v91 )
                  break;
              }
              if ( (unsigned __int64)++v100 >= v101 )
                goto LABEL_135;
            }
            sub_15D7BC0(v104, v103);
            ++v100;
          }
          while ( (unsigned __int64)v100 < v101 );
LABEL_135:
          v100 = v194;
          v177 = v102;
          if ( v194 )
LABEL_136:
            sub_186B220(v100 - 1);
        }
        if ( v192 )
          sub_186B220((void *)(v192 - 8));
        if ( v191 )
          sub_186B220((void *)(v191 - 8));
        if ( *((_QWORD *)&v190 + 1) )
          sub_186B220((void *)(*((_QWORD *)&v190 + 1) - 8LL));
        v105 = (__int64 *)v190;
        if ( (_QWORD)v190 )
        {
          v106 = v190 + 8LL * *(unsigned int *)(v190 - 4);
          if ( (unsigned __int64)v190 >= v106 )
            goto LABEL_151;
          v107 = v177;
          do
          {
            while ( 1 )
            {
              v108 = *v105;
              if ( *v105 )
              {
                v109 = *((_QWORD *)&v189 + 1);
                v91 = (*(_DWORD *)(v108 + 8))-- == 1;
                if ( v91 )
                  break;
              }
              if ( (unsigned __int64)++v105 >= v106 )
                goto LABEL_150;
            }
            sub_15D7BC0(v109, v108);
            ++v105;
          }
          while ( (unsigned __int64)v105 < v106 );
LABEL_150:
          v105 = (__int64 *)v190;
          v177 = v107;
          if ( (_QWORD)v190 )
LABEL_151:
            sub_186B220(v105 - 1);
        }
        v110 = (__int64 *)v189;
        if ( (_QWORD)v189 )
        {
          v111 = v189 + 8LL * *(unsigned int *)(v189 - 4);
          if ( (unsigned __int64)v189 >= v111 )
            goto LABEL_160;
          v112 = v177;
          do
          {
            while ( 1 )
            {
              v113 = *v110;
              if ( *v110 )
              {
                v114 = *((_QWORD *)&v188 + 1);
                v91 = (*(_DWORD *)(v113 + 8))-- == 1;
                if ( v91 )
                  break;
              }
              if ( (unsigned __int64)++v110 >= v111 )
                goto LABEL_159;
            }
            sub_15D7BC0(v114, v113);
            ++v110;
          }
          while ( (unsigned __int64)v110 < v111 );
LABEL_159:
          v110 = (__int64 *)v189;
          v177 = v112;
          if ( (_QWORD)v189 )
LABEL_160:
            sub_186B220(v110 - 1);
        }
        if ( v177 )
        {
          v115 = v177;
          v116 = v177;
          v117 = &v177[8 * *((unsigned int *)v177 - 1)];
          if ( v177 < v117 )
          {
            do
            {
              while ( 1 )
              {
                v118 = *(_QWORD *)v115;
                if ( *(_QWORD *)v115 )
                {
                  v91 = (*(_DWORD *)(v118 + 8))-- == 1;
                  if ( v91 )
                    break;
                }
                v115 += 8;
                if ( v115 >= v117 )
                  goto LABEL_168;
              }
              v115 += 8;
              sub_15D7BC0(v176, v118);
            }
            while ( v115 < v117 );
LABEL_168:
            v177 = v116;
          }
          sub_186B220(v177 - 8);
        }
        if ( v44 )
        {
          v119 = (unsigned __int64)&v44[*((unsigned int *)v44 - 1)];
          if ( (unsigned __int64)v44 < v119 )
          {
            v120 = v176;
            v121 = v44;
            do
            {
              while ( 1 )
              {
                v122 = *v121;
                if ( *v121 )
                {
                  v91 = (*((_DWORD *)v122 + 2))-- == 1;
                  if ( v91 )
                    break;
                }
                if ( (unsigned __int64)++v121 >= v119 )
                  goto LABEL_177;
              }
              sub_15D7BC0(v120, v122);
              ++v121;
            }
            while ( (unsigned __int64)v121 < v119 );
          }
LABEL_177:
          sub_186B220(v44 - 1);
        }
        v123 = *(_QWORD *)v178;
        if ( *(_QWORD *)v178 )
        {
          v124 = v179;
          v91 = (*(_DWORD *)(*(_QWORD *)v178 + 8LL))-- == 1;
          if ( v91 )
            sub_15D7BC0(v124, v123);
        }
        goto LABEL_110;
      }
    }
    sub_24EA30(v172, 3u, nullptr);
    goto LABEL_88;
  }
  v36 = *v8;
  if ( *v8 )
    ++*((_DWORD *)v36 + 2);
  v175 = v36;
  v37 = (_QWORD *)sub_186B270(0x18u);
  v38 = v173[0];
  v39 = (std::ios_base **)(v37 + 1);
  v40 = (_QWORD *)(a2 + 48);
  v177 = nullptr;
  v41 = v175;
  *v37 = 2;
  v42 = 1;
  v43 = v38 - 1;
  v44 = v39;
LABEL_32:
  *v39 = v41;
  *((_DWORD *)v44 - 1) = v42;
  for ( i = sub_15D1F10(v41); ; i = sub_15D1F10(v51) )
  {
    v46 = (std::ios_base *)sub_15DB5C0(v176, v43, i);
    v47 = v46;
    if ( v46 )
      ++*((_DWORD *)v46 + 2);
    v48 = v177;
    if ( v177 )
    {
      v49 = *((_DWORD *)v177 - 1);
      if ( v49 == *((_DWORD *)v177 - 2) )
      {
        v53 = (3 * v49 + 1) >> 1;
        v54 = 8 * v53 + 8;
        if ( 8 * v49 + 8 >= (unsigned int)v54 || v49 >= v53 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v187, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v187);
          sub_233E40((__int64)v187);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v174) = (3 * v49 + 1) >> 1;
        v175 = v47;
        v55 = (_DWORD *)sub_186B300(v177 - 8, v54);
        v56 = (unsigned int)v55[1];
        v177 = (char *)(v55 + 2);
        v57 = v175;
        *v55 = (_DWORD)v174;
        *(_QWORD *)&v55[2 * v56 + 2] = v57;
        v55[1] = v56 + 1;
      }
      else
      {
        *(_QWORD *)&v177[8 * v49] = v47;
        *((_DWORD *)v48 - 1) = v49 + 1;
      }
    }
    else
    {
      v175 = v46;
      v61 = (_QWORD *)sub_186B270(0x18u);
      v177 = (char *)(v61 + 1);
      v61[1] = v175;
      *v61 = 0x100000002LL;
    }
    if ( *v40 != sub_15D1F10(v44[*((_DWORD *)v44 - 1) - 1]) )
      break;
    ++v8;
    ++v40;
    if ( v43-- == 0 )
      goto LABEL_60;
    v51 = *v8;
    if ( *v8 )
      ++*((_DWORD *)v51 + 2);
    v52 = *((_DWORD *)v44 - 1);
    if ( v52 == *((_DWORD *)v44 - 2) )
    {
      v58 = (3 * v52 + 1) >> 1;
      v59 = 8 * v58 + 8;
      if ( 8 * v52 + 8 >= (unsigned int)v59 || v52 >= v58 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v187, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v187);
        sub_233E40((__int64)v187);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v174 = v51;
      LODWORD(v175) = (3 * v52 + 1) >> 1;
      v60 = sub_186B300(v44 - 1, v59);
      v44 = (std::ios_base **)(v60 + 8);
      v41 = v174;
      *(_DWORD *)v60 = (_DWORD)v175;
      LODWORD(v60) = *(_DWORD *)(v60 + 4);
      v39 = &v44[(unsigned int)v60];
      v42 = v60 + 1;
      goto LABEL_32;
    }
    v44[v52] = v51;
    *((_DWORD *)v44 - 1) = v52 + 1;
  }
  sub_24EA30(v172, 3u, nullptr);
LABEL_91:
  v87 = v177;
  v88 = v177;
  v89 = &v177[8 * *((unsigned int *)v177 - 1)];
  if ( v177 < v89 )
  {
    do
    {
      while ( 1 )
      {
        v90 = *(_QWORD *)v87;
        if ( *(_QWORD *)v87 )
        {
          v91 = (*(_DWORD *)(v90 + 8))-- == 1;
          if ( v91 )
            break;
        }
        v87 += 8;
        if ( v87 >= v89 )
          goto LABEL_97;
      }
      v87 += 8;
      sub_15D7BC0(v176, v90);
    }
    while ( v87 < v89 );
LABEL_97:
    v177 = v88;
  }
  sub_186B220(v177 - 8);
LABEL_99:
  if ( v44 )
  {
    v92 = (unsigned __int64)&v44[*((unsigned int *)v44 - 1)];
    if ( (unsigned __int64)v44 < v92 )
    {
      v93 = v176;
      v94 = v44;
      do
      {
        while ( 1 )
        {
          v95 = *v94;
          if ( *v94 )
          {
            v91 = (*((_DWORD *)v95 + 2))-- == 1;
            if ( v91 )
              break;
          }
          if ( (unsigned __int64)++v94 >= v92 )
            goto LABEL_106;
        }
        sub_15D7BC0(v93, v95);
        ++v94;
      }
      while ( (unsigned __int64)v94 < v92 );
    }
LABEL_106:
    sub_186B220(v44 - 1);
  }
  v96 = *(_QWORD *)v178;
  if ( *(_QWORD *)v178 )
  {
    v97 = v179;
    v91 = (*(_DWORD *)(*(_QWORD *)v178 + 8LL))-- == 1;
    if ( v91 )
      sub_15D7BC0(v97, v96);
  }
LABEL_110:
  if ( v170 )
    byte_1C7EBA0 = 1;
}

