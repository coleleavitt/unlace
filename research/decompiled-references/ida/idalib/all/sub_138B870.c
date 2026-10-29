void __fastcall sub_138B870(__int64 a1, _BYTE *a2, __int64 a3)
{
  __m128i si128; // xmm0
  void **v4; // r13
  char *v5; // rbp
  char *v6; // r14
  __int64 v7; // rax
  char ***v8; // r14
  char v9; // r13
  void **v10; // r12
  __int64 v11; // rax
  _BYTE *v12; // rbp
  __int64 v13; // rdx
  size_t v14; // rbp
  size_t v15; // r12
  char ***v16; // rdi
  char *v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int8 *v22; // rax
  unsigned __int8 *v23; // rsi
  _BYTE *v24; // rdi
  size_t v25; // rdx
  __int64 (__fastcall *v26)(__int64, unsigned int); // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  void *v31; // r13
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // r8
  __int64 *v36; // rax
  size_t *v37; // r13
  size_t **v38; // r8
  unsigned int v39; // r9d
  unsigned int v40; // eax
  __int64 v41; // rbp
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  int v44; // r13d
  char *v45; // rax
  char *v46; // rdi
  char *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // eax
  unsigned __int64 v55; // rdx
  void *v56; // rax
  void *v57; // rbp
  unsigned int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r9
  unsigned int v62; // r15d
  __int64 *v63; // r8
  __int64 *v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  int v68; // ebp
  void *v69; // rax
  __int64 v70; // r12
  char ***v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  size_t *v83; // r13
  unsigned int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rdx
  unsigned __int8 *v90; // rax
  __int64 v91; // rax
  size_t **v92; // r13
  unsigned __int8 *v93; // rdx
  unsigned __int64 v94; // r12
  unsigned __int8 *v95; // r14
  unsigned __int64 v96; // rcx
  unsigned __int64 v97; // rax
  unsigned __int8 *v98; // rdx
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rdx
  unsigned __int8 *v101; // rax
  __int64 v102; // rax
  char ***v103; // r12
  unsigned __int8 *v104; // rdx
  unsigned __int64 v105; // r13
  unsigned __int8 *v106; // r14
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rax
  unsigned __int8 *v109; // rdx
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rdx
  unsigned __int8 *v112; // rax
  __int64 v113; // rax
  char ***v114; // rbp
  unsigned __int8 *v115; // rdx
  unsigned __int64 v116; // r12
  unsigned __int8 *v117; // r14
  unsigned __int64 v118; // rax
  unsigned __int8 *v119; // rdx
  unsigned __int64 v120; // rcx
  unsigned __int8 *v121; // rdx
  unsigned __int8 *v122; // r13
  unsigned __int64 v123; // rdx
  __int64 v124; // rax
  size_t v125; // r12
  unsigned __int64 v126; // rdx
  __int64 v127; // rax
  size_t v128; // r13
  unsigned __int64 v129; // rdx
  __int64 v130; // rax
  size_t v131; // r12
  unsigned __int64 v132; // rdx
  char is_open; // [rsp+8h] [rbp-4F0h]
  __int64 *v134; // [rsp+8h] [rbp-4F0h]
  __int64 v136; // [rsp+18h] [rbp-4E0h]
  void *src; // [rsp+28h] [rbp-4D0h] BYREF
  char ***v138; // [rsp+30h] [rbp-4C8h]
  size_t **v139; // [rsp+38h] [rbp-4C0h]
  char v140; // [rsp+47h] [rbp-4B1h]
  void **v141; // [rsp+48h] [rbp-4B0h]
  __int64 v142; // [rsp+58h] [rbp-4A0h] BYREF
  unsigned __int8 *v143; // [rsp+60h] [rbp-498h] BYREF
  unsigned __int64 v144; // [rsp+68h] [rbp-490h]
  void *dest; // [rsp+70h] [rbp-488h]
  __m128 n; // [rsp+78h] [rbp-480h] BYREF
  void *v147; // [rsp+90h] [rbp-468h] BYREF
  unsigned __int64 v148; // [rsp+98h] [rbp-460h]
  char v149; // [rsp+A0h] [rbp-458h] BYREF
  __int128 v150; // [rsp+B0h] [rbp-448h] BYREF
  void *v151; // [rsp+C0h] [rbp-438h]
  __int64 v152; // [rsp+C8h] [rbp-430h]
  __int64 v153; // [rsp+D0h] [rbp-428h] BYREF
  void *v154; // [rsp+110h] [rbp-3E8h]
  __int64 v155; // [rsp+118h] [rbp-3E0h]
  __int64 v156; // [rsp+120h] [rbp-3D8h] BYREF
  void *v157; // [rsp+160h] [rbp-398h]
  __int64 v158; // [rsp+168h] [rbp-390h]
  __int64 v159; // [rsp+170h] [rbp-388h] BYREF
  size_t v160[2]; // [rsp+1B0h] [rbp-348h] BYREF
  void *v161; // [rsp+1C0h] [rbp-338h] BYREF
  __int64 v162; // [rsp+1C8h] [rbp-330h]
  _BYTE v163[64]; // [rsp+1D0h] [rbp-328h] BYREF
  void *v164; // [rsp+210h] [rbp-2E8h] BYREF
  __int64 v165; // [rsp+218h] [rbp-2E0h]
  _BYTE v166[64]; // [rsp+220h] [rbp-2D8h] BYREF
  void *ptr; // [rsp+260h] [rbp-298h] BYREF
  __int64 v168; // [rsp+268h] [rbp-290h]
  _BYTE v169[64]; // [rsp+270h] [rbp-288h] BYREF
  char *v170; // [rsp+2B0h] [rbp-248h] BYREF
  __int64 v171; // [rsp+2B8h] [rbp-240h]
  _QWORD v172[7]; // [rsp+2C0h] [rbp-238h] BYREF
  _BYTE v173[48]; // [rsp+2F8h] [rbp-200h] BYREF
  _BYTE v174[136]; // [rsp+328h] [rbp-1D0h] BYREF
  _QWORD v175[4]; // [rsp+3B0h] [rbp-148h] BYREF
  int v176; // [rsp+3D0h] [rbp-128h]
  __int64 v177; // [rsp+488h] [rbp-70h]
  __int16 v178; // [rsp+490h] [rbp-68h]
  __int128 v179; // [rsp+498h] [rbp-60h]
  __int128 v180; // [rsp+4A8h] [rbp-50h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA140);
  *(_QWORD *)(a1 + 8) = 0;
  v136 = a1 + 16;
  *(_QWORD *)a1 = &off_2C43D18;
  *(_QWORD *)(a1 + 16) = 0;
  *(__m128i *)(a1 + 24) = si128;
  if ( a2 )
  {
    v160[0] = (size_t)&v161;
    sub_1389990(v160, a2, (__int64)&a2[a3]);
    v4 = (void **)v160[0];
  }
  else
  {
    v4 = &v161;
    LOBYTE(v161) = 0;
    v160[0] = (size_t)&v161;
    v160[1] = 0;
  }
  std::ios_base::ios_base((std::ios_base *)v175);
  v178 = 0;
  v179 = 0;
  v175[0] = (char *)&`vtable for'std::ios + 16;
  v180 = 0;
  v5 = (char *)`VTT for'std::ifstream[1];
  v6 = (char *)`VTT for'std::ifstream[2];
  v177 = 0;
  v7 = *((_QWORD *)v5 - 3);
  v170 = v5;
  *(char **)((char *)&v170 + v7) = v6;
  v171 = 0;
  std::ios::init((char *)&v170 + *((_QWORD *)v5 - 3), 0);
  v170 = (char *)&`vtable for'std::ifstream + 24;
  v175[0] = (char *)&`vtable for'std::ifstream + 64;
  std::filebuf::basic_filebuf(v172);
  std::ios::init(v175, v172);
  if ( std::filebuf::open(v172, v4, 8) )
    std::ios::clear((char *)&v170 + *((_QWORD *)v170 - 3), 0);
  else
    std::ios::clear((char *)&v170 + *((_QWORD *)v170 - 3), *(_DWORD *)((char *)&v170 + *((_QWORD *)v170 - 3) + 32) | 4u);
  if ( (void **)v160[0] != &v161 )
    operator delete((void *)v160[0]);
  is_open = std::__basic_file<char>::is_open(v174);
  if ( !is_open )
  {
    v170 = (char *)&`vtable for'std::ifstream + 24;
    v175[0] = (char *)&`vtable for'std::ifstream + 64;
    v172[0] = (char *)&`vtable for'std::filebuf + 16;
    std::filebuf::close(v172);
    std::__basic_file<char>::~__basic_file(v174);
    v172[0] = (char *)&`vtable for'std::streambuf + 16;
    std::locale::~locale((std::locale *)v173);
    v73 = *((_QWORD *)v5 - 3);
    v170 = v5;
    *(char **)((char *)&v170 + v73) = v6;
    goto LABEL_35;
  }
  v8 = (char ***)&v150;
  v9 = 0;
  n.m128_u64[0] = 0;
  dest = &n.m128_u16[4];
  v151 = &v153;
  v154 = &v156;
  n.m128_i8[8] = 0;
  v152 = 0x800000000LL;
  v155 = 0x800000000LL;
  v157 = &v159;
  v158 = 0x800000000LL;
LABEL_9:
  if ( !v176 )
  {
    while ( 1 )
    {
      v10 = &v147;
      v149 = 0;
      v148 = 0;
      v147 = &v149;
      v11 = *((_QWORD *)v170 - 3);
      v12 = *(_BYTE **)&v174[v11 + 120];
      if ( !v12 )
        std::__throw_bad_cast();
      if ( v12[56] )
      {
        v13 = (unsigned int)(char)v12[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init(*(_QWORD *)&v174[v11 + 120]);
        v13 = 10;
        v26 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v12 + 48LL);
        if ( v26 != sub_124D700 )
          v13 = (unsigned int)((char (__fastcall *)(_BYTE *, __int64, __int64))v26)(v12, 10, 10);
      }
      std::getline<char,std::char_traits<char>,std::allocator<char>>(&v170, &v147, v13);
      v143 = (unsigned __int8 *)v147;
      v144 = v148;
      if ( sub_2246AB0(&v143, "*** Dumping AST Record Layout", 29, 0) != -1 )
      {
        v14 = n.m128_u64[0];
        if ( !n.m128_u64[0] )
        {
LABEL_15:
          v162 = 0x800000000LL;
          *(_OWORD *)v160 = 0;
          v161 = v163;
          v150 = 0;
          v164 = v166;
          v165 = 0x800000000LL;
          ptr = v169;
          v168 = 0x800000000LL;
          sub_1389CF0(v8 + 2, (char ***)&v161);
          sub_1389CF0(v8 + 12, (char ***)&v164);
          sub_9B8670(v8 + 22, (char ***)&ptr);
          if ( ptr != v169 )
            free(ptr);
          if ( v164 != v166 )
            free(v164);
          if ( v161 != v163 )
            free(v161);
          v9 = is_open;
          goto LABEL_22;
        }
        v31 = dest;
        src = dest;
        v32 = sub_2244B30(dest, n.m128_u64[0]);
        v33 = (unsigned int)sub_2244CB0(v136, v31, v14, v32);
        v35 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8 * v33);
        if ( *v35 )
        {
          if ( *v35 != -8 )
          {
            sub_1389E30((__int64 **)v160, v35, 0);
            v36 = (__int64 *)v160[0];
            goto LABEL_64;
          }
          --*(_DWORD *)(a1 + 32);
        }
        v139 = (size_t **)v35;
        LODWORD(v138) = v33;
        v37 = (size_t *)sub_22300B0(v14 + 265, 8, v33, v34, v35, v33);
        memcpy(v37 + 33, src, v14);
        *((_BYTE *)v37 + v14 + 264) = 0;
        v38 = v139;
        *v37 = v14;
        memset(v37 + 1, 0, 0x100u);
        v37[4] = 0x800000000LL;
        v39 = (unsigned int)v138;
        v37[3] = (size_t)(v37 + 5);
        v37[13] = (size_t)(v37 + 15);
        v37[14] = 0x800000000LL;
        v37[23] = (size_t)(v37 + 25);
        v37[24] = 0x800000000LL;
        *v38 = v37;
        ++*(_DWORD *)(a1 + 28);
        v40 = sub_22450D0(v136, v39);
        sub_1389E30((__int64 **)v160, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * v40), 0);
        v36 = (__int64 *)v160[0];
LABEL_64:
        v41 = *v36;
        *(_OWORD *)(v41 + 8) = v150;
        sub_1389C00((__int64 *)(v41 + 24), (__int64 *)v8 + 2);
        sub_1389C00((__int64 *)(v41 + 104), (__int64 *)v8 + 12);
        if ( (char ***)(v41 + 184) != v8 + 22 )
        {
          v42 = (unsigned int)v158;
          v43 = *(unsigned int *)(v41 + 192);
          v44 = v158;
          if ( (unsigned int)v158 <= v43 )
          {
            if ( (_DWORD)v158 )
              memmove(*(void **)(v41 + 184), v157, 8LL * (unsigned int)v158);
          }
          else
          {
            if ( (unsigned int)v158 > (unsigned __int64)*(unsigned int *)(v41 + 196) )
            {
              *(_DWORD *)(v41 + 192) = 0;
              sub_2237220(v41 + 184, v41 + 200, v42, 8);
              v45 = (char *)v157;
              v42 = (unsigned int)v158;
              v43 = 0;
              v46 = *(char **)(v41 + 184);
              v47 = (char *)v157;
            }
            else
            {
              v45 = (char *)v157;
              v46 = *(char **)(v41 + 184);
              v47 = (char *)v157;
              if ( *(_DWORD *)(v41 + 192) )
              {
                src = (void *)(8 * v43);
                memmove(v46, v157, 8 * v43);
                v45 = (char *)v157;
                v42 = (unsigned int)v158;
                v46 = (char *)src + *(_QWORD *)(v41 + 184);
                v43 = (unsigned __int64)src;
                v47 = (char *)src + (_QWORD)v157;
              }
            }
            v48 = 8 * v42;
            if ( v47 != &v45[v48] )
              memcpy(v46, v47, v48 - v43);
          }
          *(_DWORD *)(v41 + 192) = v44;
        }
        goto LABEL_15;
      }
      if ( !v9 )
      {
        v27 = sub_2246AB0(&v143, " Size:", 6, 0);
        if ( v27 != -1 )
        {
          v28 = v144;
          v29 = v27 + 6;
          v30 = 0;
          if ( v29 <= v144 )
          {
            v28 = v29;
            v30 = v144 - v29;
          }
          v143 += v28;
          v144 = v30;
          v160[0] = 0;
          if ( (unsigned __int8)sub_13898B0(&v143, v160) )
            *(_QWORD *)&v150 = v160[0];
          goto LABEL_22;
        }
        v49 = sub_2246AB0(&v143, "Alignment:", 10, 0);
        if ( v49 != -1 )
        {
          v50 = v144;
          v51 = v49 + 10;
          v52 = 0;
          if ( v51 <= v144 )
          {
            v50 = v51;
            v52 = v144 - v51;
          }
          v143 += v50;
          v144 = v52;
          v160[0] = 0;
          if ( (unsigned __int8)sub_13898B0(&v143, v160) )
            *((_QWORD *)&v150 + 1) = v160[0];
          goto LABEL_22;
        }
        v74 = sub_2246AB0(&v143, "sizeof=", 7, 0);
        v138 = (char ***)v74;
        if ( v74 != -1 )
        {
          v75 = 0;
          v76 = v74 + 7;
          v77 = v144;
          if ( v76 <= v144 )
          {
            v75 = v144 - v76;
            v77 = v76;
          }
          v143 += v77;
          v144 = v75;
          v142 = 0;
          if ( (unsigned __int8)sub_13898B0(&v143, &v142) )
            *(_QWORD *)&v150 = 8 * v142;
          v78 = sub_2246AB0(&v143, "align=", 6, 0);
          if ( v78 != -1 )
          {
            v79 = v144;
            v80 = v78 + 6;
            v81 = 0;
            if ( v80 <= v144 )
            {
              v79 = v80;
              v81 = v144 - v80;
            }
            v143 += v79;
            v144 = v81;
            v160[0] = 0;
            if ( (unsigned __int8)sub_13898B0(&v143, v160) )
              *((_QWORD *)&v150 + 1) = 8 * v160[0];
          }
          goto LABEL_22;
        }
        v85 = sub_2246AB0(&v143, "FieldOffsets: [", 15, 0);
        if ( v85 != -1 )
        {
          v99 = v85 + 15;
          if ( v99 > v144 )
          {
            v143 += v144;
            v144 = 0;
          }
          else
          {
            v100 = v144 - v99;
            v101 = &v143[v99];
            v143 = v101;
            v144 = v100;
            if ( v100 )
            {
              v102 = *v101;
              src = byte_2411740;
              if ( (byte_2411740[2 * v102] & 8) != 0 )
              {
                v140 = 0;
                v139 = (size_t **)v8;
                v141 = &v147;
                v103 = v138;
                while ( 1 )
                {
                  v160[0] = 0;
                  if ( (unsigned __int8)sub_13898B0(&v143, v160) )
                  {
                    v127 = (unsigned int)v158;
                    v128 = v160[0];
                    v129 = (unsigned int)v158 + 1LL;
                    if ( v129 > HIDWORD(v158) )
                    {
                      sub_2237220(v139 + 22, v139 + 24, v129, 8);
                      v127 = (unsigned int)v158;
                    }
                    *((_QWORD *)v157 + v127) = v128;
                    LODWORD(v158) = v158 + 1;
                  }
                  v104 = v143;
                  if ( !v144 || (v105 = v144 - 1, v104 = v143 + 1, ++v143, (v144 = v105) == 0) )
                  {
                    v9 = v140;
                    v10 = v141;
                    v107 = 0;
                    v8 = (char ***)v139;
                    goto LABEL_180;
                  }
                  v106 = v104;
                  while ( (unsigned __int8)sub_13898A0((__int64 (__fastcall *)(_QWORD))sub_B3A3A0, *v106) )
                  {
                    ++v106;
                    if ( !--v105 )
                    {
                      v107 = v144;
                      v104 = v143;
                      v108 = (unsigned __int64)v103;
                      goto LABEL_156;
                    }
                  }
                  v107 = v144;
                  v104 = v143;
                  v108 = v144 - v105;
LABEL_156:
                  if ( v108 > v107 )
                    break;
                  v109 = &v104[v108];
                  v143 = v109;
                  v144 = v107 - v108;
                  if ( v107 == v108 || (*((_BYTE *)src + 2 * *v109) & 8) == 0 )
                  {
                    v9 = v140;
                    v10 = v141;
                    v8 = (char ***)v139;
                    goto LABEL_128;
                  }
                }
                v9 = v140;
                v10 = v141;
                v8 = (char ***)v139;
LABEL_180:
                v144 = 0;
                v143 = &v104[v107];
              }
            }
          }
        }
LABEL_128:
        v86 = sub_2246AB0(&v143, "VBaseOffsets: [", 15, 0);
        v139 = (size_t **)v86;
        if ( v86 == -1 )
        {
          v87 = sub_2246AB0(&v143, "BaseOffsets: [", 14, 0);
          if ( v87 != -1 )
          {
            v88 = v87 + 14;
            if ( v88 > v144 )
            {
              v143 += v144;
              v144 = 0;
            }
            else
            {
              v89 = v144 - v88;
              v90 = &v143[v88];
              v143 = v90;
              v144 = v89;
              if ( v89 )
              {
                v91 = *v90;
                src = byte_2411740;
                if ( (byte_2411740[2 * v91] & 8) != 0 )
                {
                  v140 = v9;
                  v92 = v139;
                  v138 = v8;
                  v139 = (size_t **)v10;
                  while ( 1 )
                  {
                    v160[0] = 0;
                    if ( (unsigned __int8)sub_13898B0(&v143, v160) )
                    {
                      v130 = (unsigned int)v152;
                      v131 = v160[0];
                      v132 = (unsigned int)v152 + 1LL;
                      if ( v132 > HIDWORD(v152) )
                      {
                        sub_2237220(v138 + 2, v138 + 4, v132, 8);
                        v130 = (unsigned int)v152;
                      }
                      *((_QWORD *)v151 + v130) = v131;
                      LODWORD(v152) = v152 + 1;
                    }
                    v93 = v143;
                    if ( !v144 || (v94 = v144 - 1, v93 = v143 + 1, ++v143, (v144 = v94) == 0) )
                    {
                      v9 = v140;
                      v10 = (void **)v139;
                      v96 = 0;
                      v8 = v138;
                      goto LABEL_190;
                    }
                    v95 = v93;
                    while ( (unsigned __int8)sub_13898A0((__int64 (__fastcall *)(_QWORD))sub_B3A3A0, *v95) )
                    {
                      ++v95;
                      if ( !--v94 )
                      {
                        v96 = v144;
                        v93 = v143;
                        v97 = (unsigned __int64)v92;
                        goto LABEL_141;
                      }
                    }
                    v96 = v144;
                    v93 = v143;
                    v97 = v144 - v94;
LABEL_141:
                    if ( v96 < v97 )
                      break;
                    v98 = &v93[v97];
                    v143 = v98;
                    v144 = v96 - v97;
                    if ( v96 == v97 || (*((_BYTE *)src + 2 * *v98) & 8) == 0 )
                    {
                      v9 = v140;
                      v10 = (void **)v139;
                      v8 = v138;
                      goto LABEL_22;
                    }
                  }
                  v9 = v140;
                  v10 = (void **)v139;
                  v8 = v138;
LABEL_190:
                  v144 = 0;
                  v143 = &v93[v96];
                }
              }
            }
          }
          goto LABEL_22;
        }
        v110 = v86 + 15;
        if ( v110 > v144 )
        {
          v143 += v144;
          v144 = 0;
        }
        else
        {
          v111 = v144 - v110;
          v112 = &v143[v110];
          v143 = v112;
          v144 = v111;
          if ( v111 )
          {
            v113 = *v112;
            src = byte_2411740;
            if ( (byte_2411740[2 * v113] & 8) != 0 )
            {
              v139 = (size_t **)v10;
              v114 = v138;
              v138 = v8;
              while ( 1 )
              {
                v160[0] = 0;
                if ( (unsigned __int8)sub_13898B0(&v143, v160) )
                {
                  v124 = (unsigned int)v155;
                  v125 = v160[0];
                  v126 = (unsigned int)v155 + 1LL;
                  if ( v126 > HIDWORD(v155) )
                  {
                    sub_2237220(v138 + 12, v138 + 14, v126, 8);
                    v124 = (unsigned int)v155;
                  }
                  *((_QWORD *)v154 + v124) = v125;
                  LODWORD(v155) = v155 + 1;
                }
                v115 = v143;
                if ( !v144 || (v116 = v144 - 1, v115 = v143 + 1, ++v143, (v144 = v116) == 0) )
                {
                  v10 = (void **)v139;
                  v8 = v138;
                  v122 = v115;
                  v123 = 0;
                  goto LABEL_178;
                }
                v117 = v115;
                while ( (unsigned __int8)sub_13898A0((__int64 (__fastcall *)(_QWORD))sub_B3A3A0, *v117) )
                {
                  ++v117;
                  if ( !--v116 )
                  {
                    v118 = v144;
                    v119 = v143;
                    v120 = (unsigned __int64)v114;
                    goto LABEL_171;
                  }
                }
                v118 = v144;
                v119 = v143;
                v120 = v144 - v116;
LABEL_171:
                if ( v118 < v120 )
                  break;
                v121 = &v119[v120];
                v143 = v121;
                v144 = v118 - v120;
                if ( v118 == v120 || (*((_BYTE *)src + 2 * *v121) & 8) == 0 )
                {
                  v10 = (void **)v139;
                  v8 = v138;
                  goto LABEL_51;
                }
              }
              v122 = v119;
              v10 = (void **)v139;
              v123 = v118;
              v8 = v138;
LABEL_178:
              v144 = 0;
              v143 = &v122[v123];
            }
          }
        }
        goto LABEL_51;
      }
      v18 = sub_2246AB0(&v143, "struct ", 7, 0);
      if ( v18 != -1 )
      {
        v19 = v144;
        v20 = v18 + 7;
        if ( v20 > v144 )
          goto LABEL_79;
        goto LABEL_39;
      }
      v53 = sub_2246AB0(&v143, "class ", 6, 0);
      if ( v53 != -1 )
      {
        v19 = v144;
        v20 = v53 + 6;
        if ( v20 > v144 )
          goto LABEL_79;
        goto LABEL_39;
      }
      v82 = sub_2246AB0(&v143, "union ", 6, 0);
      if ( v82 != -1 )
        break;
LABEL_51:
      v9 = 0;
LABEL_22:
      if ( v147 == v10 + 2 )
        goto LABEL_9;
      operator delete(v147);
      if ( v176 )
        goto LABEL_24;
    }
    v19 = v144;
    v20 = v82 + 6;
    if ( v20 > v144 )
    {
LABEL_79:
      v143 += v19;
      v144 = 0;
      goto LABEL_41;
    }
LABEL_39:
    v21 = v19 - v20;
    v22 = &v143[v20];
    v23 = v22;
    v143 = v22;
    v144 = v21;
    if ( v21 && (byte_2411740[2 * *v22] & 0xE0) != 0 )
    {
      if ( v21 != 1 && (v54 = 1, byte_23F75C0[v23[1]]) )
      {
        do
          v55 = ++v54;
        while ( v54 < v21 && byte_23F75C0[v23[v54]] );
      }
      else
      {
        v55 = 1;
      }
      if ( v55 > v21 )
        v55 = v21;
      v160[0] = (size_t)&v161;
      sub_1389990(v160, v23, (__int64)&v23[v55]);
      v24 = dest;
      if ( (void **)v160[0] != &v161 )
      {
        if ( dest == &n.m128_u16[4] )
        {
          src = v161;
          dest = (void *)v160[0];
          n = _mm_loadh_ps((const double *)&src);
        }
        else
        {
          src = v161;
          v56 = (void *)n.m128_u64[1];
          dest = (void *)v160[0];
          n = _mm_loadh_ps((const double *)&src);
          if ( v24 )
          {
            v160[0] = (size_t)v24;
            v161 = v56;
            goto LABEL_43;
          }
        }
        v24 = &v161;
        v160[0] = (size_t)&v161;
        goto LABEL_43;
      }
      v25 = v160[1];
      if ( v160[1] )
      {
        if ( v160[1] == 1 )
          *(_BYTE *)dest = (_BYTE)v161;
        else
          memcpy(dest, (const void *)v160[0], v160[1]);
        v25 = v160[1];
        v24 = dest;
      }
    }
    else
    {
LABEL_41:
      LOBYTE(v161) = 0;
      v24 = dest;
      v25 = 0;
      v160[0] = (size_t)&v161;
    }
    n.m128_u64[0] = v25;
    v24[v25] = 0;
    v24 = (_BYTE *)v160[0];
LABEL_43:
    v160[1] = 0;
    *v24 = 0;
    if ( (void **)v160[0] != &v161 )
      operator delete((void *)v160[0]);
    v162 = 0x800000000LL;
    *(_OWORD *)v160 = 0;
    v161 = v163;
    v150 = 0;
    v164 = v166;
    v165 = 0x800000000LL;
    ptr = v169;
    v168 = 0x800000000LL;
    sub_1389CF0(v8 + 2, (char ***)&v161);
    sub_1389CF0(v8 + 12, (char ***)&v164);
    sub_9B8670(v8 + 22, (char ***)&ptr);
    if ( ptr != v169 )
      free(ptr);
    if ( v164 != v166 )
      free(v164);
    if ( v161 != v163 )
      free(v161);
    goto LABEL_51;
  }
LABEL_24:
  v15 = n.m128_u64[0];
  if ( !n.m128_u64[0] )
    goto LABEL_25;
  v57 = dest;
  v58 = sub_2244B30(dest, n.m128_u64[0]);
  v59 = (unsigned int)sub_2244CB0(v136, v57, v15, v58);
  v62 = v59;
  v63 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8 * v59);
  if ( *v63 )
  {
    if ( *v63 != -8 )
    {
      sub_1389E30((__int64 **)v160, v63, 0);
      v64 = (__int64 *)v160[0];
      goto LABEL_100;
    }
    --*(_DWORD *)(a1 + 32);
  }
  v134 = v63;
  v83 = (size_t *)sub_22300B0(v15 + 265, 8, v59, v60, v63, v61);
  memcpy(v83 + 33, v57, v15);
  *((_BYTE *)v83 + v15 + 264) = 0;
  *v83 = v15;
  memset(v83 + 1, 0, 0x100u);
  v83[13] = (size_t)(v83 + 15);
  v83[3] = (size_t)(v83 + 5);
  v83[23] = (size_t)(v83 + 25);
  v83[4] = 0x800000000LL;
  v83[14] = 0x800000000LL;
  v83[24] = 0x800000000LL;
  *v134 = (__int64)v83;
  ++*(_DWORD *)(a1 + 28);
  v84 = sub_22450D0(v136, v62);
  sub_1389E30((__int64 **)v160, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * v84), 0);
  v64 = (__int64 *)v160[0];
LABEL_100:
  v65 = *v64;
  *(_OWORD *)(v65 + 8) = v150;
  sub_1389C00((__int64 *)(v65 + 24), (__int64 *)v8 + 2);
  sub_1389C00((__int64 *)(v65 + 104), (__int64 *)v8 + 12);
  if ( (char ***)(v65 + 184) != v8 + 22 )
  {
    v66 = (unsigned int)v158;
    v67 = *(unsigned int *)(v65 + 192);
    v68 = v158;
    if ( (unsigned int)v158 <= v67 )
    {
      v16 = (char ***)v157;
      if ( (_DWORD)v158 )
      {
        memmove(*(void **)(v65 + 184), v157, 8LL * (unsigned int)v158);
        v16 = (char ***)v157;
      }
    }
    else
    {
      if ( (unsigned int)v158 > (unsigned __int64)*(unsigned int *)(v65 + 196) )
      {
        *(_DWORD *)(v65 + 192) = 0;
        sub_2237220(v65 + 184, v65 + 200, v66, 8);
        v16 = (char ***)v157;
        v66 = (unsigned int)v158;
        v67 = 0;
        v69 = *(void **)(v65 + 184);
        v71 = (char ***)v157;
      }
      else
      {
        v16 = (char ***)v157;
        v69 = *(void **)(v65 + 184);
        v70 = 8 * v67;
        v71 = (char ***)v157;
        if ( *(_DWORD *)(v65 + 192) )
        {
          memmove(*(void **)(v65 + 184), v157, 8 * v67);
          v16 = (char ***)v157;
          v67 = v70;
          v66 = (unsigned int)v158;
          v69 = (void *)(v70 + *(_QWORD *)(v65 + 184));
          v71 = (char ***)((char *)v157 + v70);
        }
      }
      v72 = v66;
      if ( v71 != &v16[v72] )
      {
        memcpy(v69, v71, v72 * 8 - v67);
        v16 = (char ***)v157;
      }
    }
    *(_DWORD *)(v65 + 192) = v68;
    goto LABEL_26;
  }
LABEL_25:
  v16 = (char ***)v157;
LABEL_26:
  if ( v16 != v8 + 24 )
    free(v16);
  if ( v154 != v8 + 14 )
    free(v154);
  if ( v151 != v8 + 4 )
    free(v151);
  if ( dest != &n.m128_u16[4] )
    operator delete(dest);
  v170 = (char *)&`vtable for'std::ifstream + 24;
  v175[0] = (char *)&`vtable for'std::ifstream + 64;
  v172[0] = (char *)&`vtable for'std::filebuf + 16;
  std::filebuf::close(v172);
  std::__basic_file<char>::~__basic_file(v174);
  v172[0] = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v173);
  v17 = (char *)`VTT for'std::ifstream[2];
  v170 = (char *)`VTT for'std::ifstream[1];
  *(char **)((char *)&v170 + *((_QWORD *)v170 - 3)) = v17;
LABEL_35:
  v171 = 0;
  v175[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v175);
}
