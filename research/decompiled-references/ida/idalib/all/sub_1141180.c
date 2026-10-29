void __fastcall sub_1141180(_WORD *a1, __int64 a2, int a3, void **a4)
{
  __int64 v5; // r12
  char *v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r13
  _QWORD *v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // r14
  _QWORD *v14; // rbp
  _WORD *v15; // rdi
  size_t v16; // rsi
  unsigned int v17; // eax
  int v18; // r13d
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  _QWORD *v21; // r14
  _QWORD *v22; // rbx
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 v25; // rax
  const char **v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  void **v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // r13
  __int64 v32; // rbp
  __int64 v33; // rax
  _QWORD *v34; // r13
  __int64 v35; // r14
  char *v36; // rbx
  size_t v37; // rax
  int v38; // eax
  __int64 v39; // rsi
  _BYTE *v40; // r13
  __int64 v41; // rbp
  unsigned __int8 *v42; // rbx
  _QWORD *v43; // rax
  _QWORD *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  void **v48; // rbp
  _BYTE *v49; // rdi
  __int64 v50; // rax
  unsigned __int8 *v51; // rbx
  _QWORD *v52; // rdx
  __int64 v53; // rax
  void **v54; // rbx
  unsigned __int64 v55; // rax
  void **v56; // r14
  void **v57; // rbp
  void **v58; // rdi
  void **v59; // rdi
  void **v60; // r14
  void **v61; // rbp
  _BOOL4 v62; // ebx
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  void **v65; // rbx
  void **v66; // rbp
  void *v67; // r12
  const char **v68; // r12
  const char **v69; // r13
  const char *v70; // r14
  size_t v71; // rax
  void **v72; // rbx
  void *v73; // r12
  unsigned int v74; // eax
  __int64 v75; // rdx
  void **v76; // rbx
  unsigned __int8 *v77; // rbp
  _BYTE *v78; // rsi
  signed __int64 v79; // r13
  _QWORD *v80; // rax
  _QWORD *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  void **v85; // r13
  _BYTE *v86; // rdi
  __int64 v87; // rax
  unsigned __int8 *v88; // rbp
  _QWORD *v89; // rdx
  __int64 v90; // rax
  void **v91; // rdi
  void **v92; // rbx
  _QWORD *v93; // rax
  void **v94; // r13
  void **v95; // rbp
  void **v96; // rdi
  void **v97; // rdi
  void **v98; // r13
  void **v99; // rbp
  __m128i *v100; // rax
  _BYTE *v101; // rbp
  __int64 v102; // rdx
  __int64 v103; // rbx
  size_t v104; // rdx
  size_t v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rdx
  _QWORD *v108; // rdx
  int v109; // eax
  unsigned __int64 v110; // rdx
  int v111; // eax
  unsigned __int64 v112; // rdx
  int v113; // eax
  _QWORD *v114; // rdx
  int v115; // eax
  __int64 v116; // rax
  __int64 v117; // r14
  __int64 v118; // rax
  __int64 v119; // r14
  __int64 v120; // rbx
  void *v121; // rdi
  __int64 v122; // rax
  __int64 v123; // r14
  __int64 v124; // rax
  __int64 v125; // r14
  __int64 v126; // r15
  unsigned __int8 *v127; // r12
  __int64 v128; // rbx
  void *v129; // rdi
  __int64 v130; // rax
  __int64 v131; // rbp
  __int64 v132; // r14
  __int64 v133; // rbp
  void *v134; // rdi
  __int64 v135; // rax
  __int64 v136; // r13
  __int64 v137; // r14
  __int64 v138; // r13
  void *v139; // rdi
  char *v140; // [rsp+10h] [rbp-1D8h]
  void *v141; // [rsp+18h] [rbp-1D0h]
  _BYTE *v142; // [rsp+18h] [rbp-1D0h]
  __int64 v143; // [rsp+20h] [rbp-1C8h]
  void **v144; // [rsp+28h] [rbp-1C0h] BYREF
  void *v145; // [rsp+30h] [rbp-1B8h] BYREF
  void **v146; // [rsp+38h] [rbp-1B0h]
  __int128 v147; // [rsp+40h] [rbp-1A8h]
  void **p_src; // [rsp+50h] [rbp-198h]
  bool v149; // [rsp+5Fh] [rbp-189h]
  _WORD *v150; // [rsp+60h] [rbp-188h]
  const char *v151; // [rsp+68h] [rbp-180h]
  void *src; // [rsp+70h] [rbp-178h] BYREF
  size_t n; // [rsp+78h] [rbp-170h]
  _BYTE v154[16]; // [rsp+80h] [rbp-168h] BYREF
  void *v155; // [rsp+90h] [rbp-158h] BYREF
  unsigned __int64 v156; // [rsp+98h] [rbp-150h]
  char v157; // [rsp+A0h] [rbp-148h] BYREF
  void *v158[4]; // [rsp+B0h] [rbp-138h] BYREF
  void *v159; // [rsp+D0h] [rbp-118h]
  size_t v160; // [rsp+D8h] [rbp-110h]
  _QWORD v161[2]; // [rsp+E0h] [rbp-108h] BYREF
  void *v162; // [rsp+F0h] [rbp-F8h]
  size_t v163; // [rsp+F8h] [rbp-F0h]
  _QWORD v164[2]; // [rsp+100h] [rbp-E8h] BYREF
  void *v165; // [rsp+110h] [rbp-D8h] BYREF
  unsigned __int64 v166; // [rsp+118h] [rbp-D0h]
  __int64 v167[2]; // [rsp+120h] [rbp-C8h] BYREF
  void *v168; // [rsp+130h] [rbp-B8h]
  __int64 v169; // [rsp+140h] [rbp-A8h] BYREF
  __int16 v170; // [rsp+150h] [rbp-98h]
  void *v171[2]; // [rsp+160h] [rbp-88h] BYREF
  __m128i v172; // [rsp+170h] [rbp-78h] BYREF
  void *v173; // [rsp+180h] [rbp-68h]
  __int64 v174; // [rsp+190h] [rbp-58h] BYREF
  __int16 v175; // [rsp+1A0h] [rbp-48h]

  v5 = a2;
  v6 = nullptr;
  v150 = a1;
  DWORD2(v147) = a3;
  LODWORD(v171[0]) = 2323;
  v7 = sub_21B6DA0(a2, v171, 1);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = (_QWORD *)(v8 + 8LL * (unsigned int)v7);
  v10 = (_QWORD *)(v8 + 8 * HIDWORD(v7));
  if ( v9 == v10 )
    goto LABEL_5;
  while ( !*v9 || !(unsigned __int8)sub_21B9810(*v9, 2323) )
  {
    if ( v10 == ++v9 )
      goto LABEL_5;
  }
  if ( v10 == v9 )
  {
LABEL_5:
    *(_QWORD *)&v147 = 0;
  }
  else
  {
    do
    {
      v24 = *v9;
      v25 = *(_QWORD *)(*v9 + 16LL);
      if ( !v25 )
        v25 = *v9;
      ++v9;
      *(_BYTE *)(v25 + 44) |= 1u;
      if ( v9 == v10 )
        break;
      while ( !*v9 || !(unsigned __int8)sub_21B9810(*v9, 2323) )
      {
        if ( v10 == ++v9 )
          goto LABEL_28;
      }
    }
    while ( v10 != v9 );
LABEL_28:
    *(_QWORD *)&v147 = 0;
    v26 = *(const char ***)(v24 + 48);
    v6 = (char *)*v26;
    if ( *v26 )
      *(_QWORD *)&v147 = strlen(*v26);
  }
  LODWORD(v171[0]) = 2260;
  v11 = sub_21B6DA0(a2, v171, 1);
  v12 = *(_QWORD *)(a2 + 8);
  v13 = (_QWORD *)(v12 + 8LL * (unsigned int)v11);
  v14 = (_QWORD *)(v12 + 8 * HIDWORD(v11));
  if ( v13 == v14 )
    goto LABEL_10;
  while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 2260) )
  {
    if ( v14 == ++v13 )
      goto LABEL_10;
  }
  if ( v14 == v13 )
  {
LABEL_10:
    v141 = nullptr;
    v144 = nullptr;
  }
  else
  {
    do
    {
      v27 = *v13;
      v28 = *(_QWORD *)(*v13 + 16LL);
      if ( !v28 )
        v28 = *v13;
      ++v13;
      *(_BYTE *)(v28 + 44) |= 1u;
      if ( v13 == v14 )
        break;
      while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 2260) )
      {
        if ( v14 == ++v13 )
          goto LABEL_39;
      }
    }
    while ( v14 != v13 );
LABEL_39:
    v141 = nullptr;
    v29 = **(void ****)(v27 + 48);
    v144 = v29;
    if ( v29 )
    {
      v141 = (void *)strlen((const char *)v29);
      if ( *((_DWORD *)a4 + 13) == 5 )
        goto LABEL_41;
LABEL_12:
      p_src = &src;
      sub_1140F70((__int64)&src, v6, v147, v144, (__int64)v141, (__int64)a4);
      v15 = src;
      v16 = n;
      goto LABEL_13;
    }
  }
  if ( *((_DWORD *)a4 + 13) != 5 )
    goto LABEL_12;
LABEL_41:
  sub_113FDE0(v171, v144, (__int64)v141, (__int64)a4);
  if ( v171[1] )
  {
    v101 = (_BYTE *)sub_22A0130(a4, v171[0], v171[1]);
    v103 = v102;
    if ( v171[0] != &v172 )
      operator delete(v171[0]);
    if ( v101 )
    {
      p_src = &src;
      src = v154;
      sub_113C3F0(&src, v101, (__int64)&v101[v103]);
      v15 = src;
      v16 = n;
      goto LABEL_13;
    }
  }
  else if ( v171[0] != &v172 )
  {
    operator delete(v171[0]);
  }
  v15 = v154;
  v16 = 0;
  n = 0;
  p_src = &src;
  src = v154;
  v154[0] = 0;
LABEL_13:
  v17 = sub_1140500(v15, v16, (__int64)v144, (__int64)v141, (__int64)a4);
  v143 = 0;
  v140 = (char *)&byte_22F0C30;
  if ( v17 )
  {
    v140 = (char *)sub_229FBC0(v17);
    v143 = v30;
  }
  v18 = *((_DWORD *)a4 + 8);
  v171[0] = (void *)0x8F70000099FLL;
  v19 = sub_21B6DA0(v5, v171, 2);
  v20 = *(_QWORD *)(v5 + 8);
  v172.m128i_i64[0] = 0x8F70000099FLL;
  v21 = (_QWORD *)(v20 + 8LL * (unsigned int)v19);
  v22 = (_QWORD *)(v20 + 8 * HIDWORD(v19));
  v145 = v22;
  *(__m128 *)v171 = _mm_loadh_ps((const double *)&v145);
  if ( v21 == v22 )
    goto LABEL_20;
  while ( 1 )
  {
    v23 = *v21;
    if ( *v21 )
    {
      if ( (unsigned __int8)sub_21B9810(*v21, 2463) || (unsigned __int8)sub_21B9810(v23, 2295) )
        break;
    }
    v171[0] = ++v21;
    if ( v22 == v21 )
      goto LABEL_20;
  }
  v145 = v22;
  v172.m128i_i64[0] = 0x8F70000099FLL;
  *(__m128 *)v171 = _mm_loadh_ps((const double *)&v145);
  if ( v22 == v21 )
  {
LABEL_20:
    LOBYTE(v145) = v18 == 2 || v18 == 36;
  }
  else
  {
    v31 = v21;
    do
    {
      v32 = *v31;
      v33 = *(_QWORD *)(*v31 + 16LL);
      if ( !v33 )
        v33 = *v31;
      v34 = v31 + 1;
      *(_BYTE *)(v33 + 44) |= 1u;
      v171[0] = v34;
      if ( v34 == v22 )
        break;
      while ( 1 )
      {
        v35 = *v34;
        if ( *v34 )
        {
          if ( (unsigned __int8)sub_21B9810(*v34, 2463) || (unsigned __int8)sub_21B9810(v35, 2295) )
            break;
        }
        v171[0] = ++v34;
        if ( v22 == v34 )
          goto LABEL_56;
      }
      v31 = v171[0];
    }
    while ( v22 != v171[0] );
LABEL_56:
    LOBYTE(v145) = sub_21B9810(v32, 2463) ^ 1;
  }
  v36 = "armeb";
  if ( !(_BYTE)v145 )
    v36 = (char *)"arm";
  v146 = &v155;
  v155 = &v157;
  v37 = strlen(v36);
  sub_113C3F0(&v155, v36, (__int64)&v36[v37]);
  v38 = sub_229CC10(v140, v143);
  v149 = v38 == 3;
  if ( v38 != 3 )
  {
    if ( (unsigned int)sub_229CB60(v140, v143) != 7 || (v62 = 1, *((_DWORD *)a4 + 13) != 5) )
      v62 = *((_DWORD *)a4 + 11) == 15;
    sub_21B7850(v5, 2906, 2739, v62);
LABEL_162:
    if ( DWORD2(v147) == 38 )
      goto LABEL_95;
LABEL_163:
    LOBYTE(v144) = sub_21B7850(v5, 2906, 2739, v62);
    goto LABEL_164;
  }
  if ( (unsigned __int8)sub_21B7850(v5, 2906, 2739, 1) )
  {
LABEL_161:
    v62 = 1;
    goto LABEL_162;
  }
  v39 = *(_QWORD *)v150;
  if ( !(_QWORD)v147 )
  {
    v76 = v158;
    sub_FC70B0((__int64)v171, v39, 0, 311);
    sub_113FDE0(v158, v144, (__int64)v141, (__int64)a4);
    v77 = (unsigned __int8 *)v171[0];
    v78 = v158[0];
    v79 = (signed __int64)v158[1];
    if ( !v171[0] )
    {
      v108 = v171[1];
      v109 = *((_DWORD *)v171[1] + 3744);
      if ( v109 )
      {
        v116 = (unsigned int)(v109 - 1);
        *((_DWORD *)v171[1] + 3744) = v116;
        v77 = (unsigned __int8 *)v108[v116 + 1856];
        v117 = *((unsigned int *)v77 + 134);
        *v77 = 0;
        v118 = *((_QWORD *)v77 + 66);
        *((_DWORD *)v77 + 106) = 0;
        v119 = v118 + (v117 << 6);
        if ( v118 != v119 )
        {
          v144 = v158;
          v120 = v118;
          do
          {
            while ( 1 )
            {
              v119 -= 64;
              v121 = *(void **)(v119 + 24);
              if ( v121 == (void *)(v119 + 40) )
                break;
              operator delete(v121);
              if ( v120 == v119 )
                goto LABEL_253;
            }
          }
          while ( v120 != v119 );
LABEL_253:
          v76 = v144;
        }
        *((_DWORD *)v77 + 134) = 0;
      }
      else
      {
        v142 = v158[0];
        v77 = (unsigned __int8 *)operator new(0x3A0u);
        *v77 = 0;
        *((_QWORD *)v77 + 12) = v77 + 112;
        *((_QWORD *)v77 + 16) = v77 + 144;
        *((_QWORD *)v77 + 20) = v77 + 176;
        *((_QWORD *)v77 + 24) = v77 + 208;
        *((_QWORD *)v77 + 28) = v77 + 240;
        *((_QWORD *)v77 + 32) = v77 + 272;
        *((_QWORD *)v77 + 36) = v77 + 304;
        *((_QWORD *)v77 + 40) = v77 + 336;
        *((_QWORD *)v77 + 44) = v77 + 368;
        *((_QWORD *)v77 + 48) = v77 + 400;
        *((_QWORD *)v77 + 52) = v77 + 432;
        *((_QWORD *)v77 + 13) = 0;
        v77[112] = 0;
        *((_QWORD *)v77 + 17) = 0;
        v77[144] = 0;
        *((_QWORD *)v77 + 21) = 0;
        v77[176] = 0;
        *((_QWORD *)v77 + 25) = 0;
        v77[208] = 0;
        *((_QWORD *)v77 + 29) = 0;
        v77[240] = 0;
        *((_QWORD *)v77 + 33) = 0;
        v77[272] = 0;
        *((_QWORD *)v77 + 37) = 0;
        v77[304] = 0;
        *((_QWORD *)v77 + 41) = 0;
        v77[336] = 0;
        *((_QWORD *)v77 + 45) = 0;
        v77[368] = 0;
        *((_QWORD *)v77 + 49) = 0;
        v77[400] = 0;
        *((_QWORD *)v77 + 53) = 0x800000000LL;
        v78 = v142;
        *((_QWORD *)v77 + 66) = v77 + 544;
        *((_QWORD *)v77 + 67) = 0x600000000LL;
      }
      v171[0] = v77;
    }
    v77[*v77 + 1] = 0;
    v162 = v164;
    if ( &v78[v79] && !v78 )
LABEL_278:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v79 > 0xF )
    {
      if ( v79 < 0 )
        goto LABEL_277;
      v80 = (_QWORD *)operator new(v79 + 1);
      v164[0] = v79;
      v162 = v80;
    }
    else
    {
      if ( v79 == 1 )
      {
        LOBYTE(v164[0]) = *v78;
        v80 = v164;
        goto LABEL_133;
      }
      v80 = v164;
      if ( !v79 )
      {
LABEL_133:
        v163 = v79;
        *((_BYTE *)v80 + v79) = 0;
        v81 = v171[0];
        v82 = *(unsigned __int8 *)v171[0];
        *(_BYTE *)v171[0] = v82 + 1;
        v83 = (unsigned __int8)v82;
        v84 = 4 * (v82 + 3);
        v85 = (void **)&v81[v84];
        v86 = (_BYTE *)v81[v84];
        if ( v162 == v164 )
        {
          v104 = v163;
          if ( v163 )
          {
            if ( v163 == 1 )
              *v86 = v164[0];
            else
              memcpy(v86, v162, v163);
            v104 = v163;
            v86 = *v85;
          }
          v85[1] = (void *)v104;
          v86[v104] = 0;
          v86 = v162;
          goto LABEL_137;
        }
        if ( v86 == (_BYTE *)&v81[v84 + 2] )
        {
          *v85 = v162;
          v85[1] = (void *)v163;
          v85[2] = (void *)v164[0];
        }
        else
        {
          v87 = v81[4 * v83 + 14];
          *v85 = v162;
          v85[1] = (void *)v163;
          v85[2] = (void *)v164[0];
          if ( v86 )
          {
            v162 = v86;
            v164[0] = v87;
LABEL_137:
            v163 = 0;
            *v86 = 0;
            if ( v162 != v164 )
              operator delete(v162);
            v88 = (unsigned __int8 *)v171[0];
            if ( !v171[0] )
            {
              v114 = v171[1];
              v115 = *((_DWORD *)v171[1] + 3744);
              if ( v115 )
              {
                v135 = (unsigned int)(v115 - 1);
                *((_DWORD *)v171[1] + 3744) = v135;
                v88 = (unsigned __int8 *)v114[v135 + 1856];
                v136 = *((unsigned int *)v88 + 134);
                *v88 = 0;
                v137 = *((_QWORD *)v88 + 66);
                *((_DWORD *)v88 + 106) = 0;
                v138 = v137 + (v136 << 6);
                while ( v137 != v138 )
                {
                  while ( 1 )
                  {
                    v138 -= 64;
                    v139 = *(void **)(v138 + 24);
                    if ( v139 == (void *)(v138 + 40) )
                      break;
                    operator delete(v139);
                    if ( v137 == v138 )
                      goto LABEL_274;
                  }
                }
LABEL_274:
                *((_DWORD *)v88 + 134) = 0;
              }
              else
              {
                v88 = (unsigned __int8 *)operator new(0x3A0u);
                *v88 = 0;
                *((_QWORD *)v88 + 12) = v88 + 112;
                *((_QWORD *)v88 + 16) = v88 + 144;
                *((_QWORD *)v88 + 20) = v88 + 176;
                *((_QWORD *)v88 + 24) = v88 + 208;
                *((_QWORD *)v88 + 28) = v88 + 240;
                *((_QWORD *)v88 + 32) = v88 + 272;
                *((_QWORD *)v88 + 36) = v88 + 304;
                *((_QWORD *)v88 + 40) = v88 + 336;
                *((_QWORD *)v88 + 44) = v88 + 368;
                *((_QWORD *)v88 + 48) = v88 + 400;
                *((_QWORD *)v88 + 52) = v88 + 432;
                *((_QWORD *)v88 + 13) = 0;
                v88[112] = 0;
                *((_QWORD *)v88 + 17) = 0;
                v88[144] = 0;
                *((_QWORD *)v88 + 21) = 0;
                v88[176] = 0;
                *((_QWORD *)v88 + 25) = 0;
                v88[208] = 0;
                *((_QWORD *)v88 + 29) = 0;
                v88[240] = 0;
                *((_QWORD *)v88 + 33) = 0;
                v88[272] = 0;
                *((_QWORD *)v88 + 37) = 0;
                v88[304] = 0;
                *((_QWORD *)v88 + 41) = 0;
                v88[336] = 0;
                *((_QWORD *)v88 + 45) = 0;
                v88[368] = 0;
                *((_QWORD *)v88 + 49) = 0;
                v88[400] = 0;
                *((_QWORD *)v88 + 53) = 0x800000000LL;
                *((_QWORD *)v88 + 66) = v88 + 544;
                *((_QWORD *)v88 + 67) = 0x600000000LL;
              }
              v171[0] = v88;
            }
            v88[*v88 + 1] = 1;
            v89 = v171[0];
            v90 = *(unsigned __int8 *)v171[0];
            *(_BYTE *)v171[0] = v90 + 1;
            v91 = (void **)v158[0];
            v89[v90 + 2] = "ARM";
            if ( v91 != v76 + 2 )
              operator delete(v91);
            if ( (_BYTE)v175 )
            {
              sub_FC7790(v172.m128i_i64[0], (__int64 *)v171, SHIBYTE(v175));
              v172.m128i_i64[0] = 0;
              v175 = 0;
            }
            if ( v173 != &v174 )
              operator delete(v173);
            v92 = (void **)v171[0];
            if ( v171[0] )
            {
              v93 = v171[1];
              if ( v171[1] )
              {
                if ( v171[0] < v171[1] || v171[0] > (char *)v171[1] + 14848 )
                {
                  v94 = *((void ***)v171[0] + 66);
                  v95 = &v94[8 * (unsigned __int64)*((unsigned int *)v171[0] + 134)];
                  if ( v94 != v95 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v95 -= 8;
                        v96 = (void **)v95[3];
                        if ( v96 == v95 + 5 )
                          break;
                        operator delete(v96);
                        if ( v94 == v95 )
                          goto LABEL_152;
                      }
                    }
                    while ( v94 != v95 );
LABEL_152:
                    v95 = (void **)v92[66];
                  }
                  if ( v95 != v92 + 68 )
                    free(v95);
                  v97 = (void **)v92[52];
                  if ( v97 != v92 + 54 )
                    free(v97);
                  v98 = v92 + 48;
                  v99 = v92 + 8;
                  do
                  {
                    while ( *v98 != v98 + 2 )
                    {
                      operator delete(*v98);
                      v98 -= 4;
                      if ( v99 == v98 )
                        goto LABEL_160;
                    }
                    v98 -= 4;
                  }
                  while ( v99 != v98 );
LABEL_160:
                  operator delete(v92, 0x3A0u);
                }
                else
                {
                  v106 = *((unsigned int *)v171[1] + 3744);
                  *((_DWORD *)v171[1] + 3744) = v106 + 1;
                  v93[v106 + 1856] = v92;
                }
              }
            }
            goto LABEL_161;
          }
        }
        v86 = v164;
        v162 = v164;
        goto LABEL_137;
      }
    }
    memcpy(v80, v78, v79);
    v80 = v162;
    goto LABEL_133;
  }
  sub_FC70B0((__int64)&v165, v39, 0, 317);
  v40 = src;
  v41 = n;
  v42 = (unsigned __int8 *)v165;
  if ( !v165 )
  {
    v110 = v166;
    v111 = *(_DWORD *)(v166 + 14976);
    if ( v111 )
    {
      v122 = (unsigned int)(v111 - 1);
      *(_DWORD *)(v166 + 14976) = v122;
      v42 = *(unsigned __int8 **)(v110 + 8 * v122 + 14848);
      v123 = *((unsigned int *)v42 + 134);
      *v42 = 0;
      v124 = *((_QWORD *)v42 + 66);
      *((_DWORD *)v42 + 106) = 0;
      v125 = v124 + (v123 << 6);
      if ( v124 != v125 )
      {
        v144 = a4;
        v126 = v5;
        v127 = v42;
        v128 = v124;
        do
        {
          while ( 1 )
          {
            v125 -= 64;
            v129 = *(void **)(v125 + 24);
            if ( v129 == (void *)(v125 + 40) )
              break;
            operator delete(v129);
            if ( v128 == v125 )
              goto LABEL_261;
          }
        }
        while ( v128 != v125 );
LABEL_261:
        v42 = v127;
        v5 = v126;
        a4 = v144;
      }
      *((_DWORD *)v42 + 134) = 0;
    }
    else
    {
      v42 = (unsigned __int8 *)operator new(0x3A0u);
      *v42 = 0;
      *((_QWORD *)v42 + 12) = v42 + 112;
      *((_QWORD *)v42 + 16) = v42 + 144;
      *((_QWORD *)v42 + 20) = v42 + 176;
      *((_QWORD *)v42 + 24) = v42 + 208;
      *((_QWORD *)v42 + 28) = v42 + 240;
      *((_QWORD *)v42 + 32) = v42 + 272;
      *((_QWORD *)v42 + 36) = v42 + 304;
      *((_QWORD *)v42 + 40) = v42 + 336;
      *((_QWORD *)v42 + 44) = v42 + 368;
      *((_QWORD *)v42 + 48) = v42 + 400;
      *((_QWORD *)v42 + 52) = v42 + 432;
      *((_QWORD *)v42 + 13) = 0;
      v42[112] = 0;
      *((_QWORD *)v42 + 17) = 0;
      v42[144] = 0;
      *((_QWORD *)v42 + 21) = 0;
      v42[176] = 0;
      *((_QWORD *)v42 + 25) = 0;
      v42[208] = 0;
      *((_QWORD *)v42 + 29) = 0;
      v42[240] = 0;
      *((_QWORD *)v42 + 33) = 0;
      v42[272] = 0;
      *((_QWORD *)v42 + 37) = 0;
      v42[304] = 0;
      *((_QWORD *)v42 + 41) = 0;
      v42[336] = 0;
      *((_QWORD *)v42 + 45) = 0;
      v42[368] = 0;
      *((_QWORD *)v42 + 49) = 0;
      v42[400] = 0;
      *((_QWORD *)v42 + 53) = 0x800000000LL;
      *((_QWORD *)v42 + 66) = v42 + 544;
      *((_QWORD *)v42 + 67) = 0x600000000LL;
    }
    v165 = v42;
  }
  v42[*v42 + 1] = 0;
  v159 = v161;
  if ( &v40[v41] && !v40 )
    goto LABEL_278;
  if ( (unsigned __int64)v41 > 0xF )
  {
    if ( v41 >= 0 )
    {
      v43 = (_QWORD *)operator new(v41 + 1);
      v161[0] = v41;
      v159 = v43;
LABEL_197:
      memcpy(v43, v40, v41);
      v43 = v159;
      goto LABEL_68;
    }
LABEL_277:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v41 == 1 )
  {
    LOBYTE(v161[0]) = *v40;
    v43 = v161;
    goto LABEL_68;
  }
  v43 = v161;
  if ( v41 )
    goto LABEL_197;
LABEL_68:
  v160 = v41;
  *((_BYTE *)v43 + v41) = 0;
  v44 = v165;
  v45 = *(unsigned __int8 *)v165;
  *(_BYTE *)v165 = v45 + 1;
  v46 = (unsigned __int8)v45;
  v47 = 4 * (v45 + 3);
  v48 = (void **)&v44[v47];
  v49 = (_BYTE *)v44[v47];
  if ( v159 == v161 )
  {
    v105 = v160;
    if ( v160 )
    {
      if ( v160 == 1 )
        *v49 = v161[0];
      else
        memcpy(v49, v159, v160);
      v105 = v160;
      v49 = *v48;
    }
    v48[1] = (void *)v105;
    v49[v105] = 0;
    v49 = v159;
  }
  else
  {
    if ( v49 == (_BYTE *)&v44[v47 + 2] )
    {
      *v48 = v159;
      v48[1] = (void *)v160;
      v48[2] = (void *)v161[0];
    }
    else
    {
      v50 = v44[4 * v46 + 14];
      *v48 = v159;
      v48[1] = (void *)v160;
      v48[2] = (void *)v161[0];
      if ( v49 )
      {
        v159 = v49;
        v161[0] = v50;
        goto LABEL_72;
      }
    }
    v49 = v161;
    v159 = v161;
  }
LABEL_72:
  v160 = 0;
  *v49 = 0;
  if ( v159 != v161 )
    operator delete(v159);
  v51 = (unsigned __int8 *)v165;
  if ( !v165 )
  {
    v112 = v166;
    v113 = *(_DWORD *)(v166 + 14976);
    if ( v113 )
    {
      v130 = (unsigned int)(v113 - 1);
      *(_DWORD *)(v166 + 14976) = v130;
      v51 = *(unsigned __int8 **)(v112 + 8 * v130 + 14848);
      v131 = *((unsigned int *)v51 + 134);
      *v51 = 0;
      v132 = *((_QWORD *)v51 + 66);
      *((_DWORD *)v51 + 106) = 0;
      v133 = v132 + (v131 << 6);
      while ( v132 != v133 )
      {
        while ( 1 )
        {
          v133 -= 64;
          v134 = *(void **)(v133 + 24);
          if ( v134 == (void *)(v133 + 40) )
            break;
          operator delete(v134);
          if ( v132 == v133 )
            goto LABEL_269;
        }
      }
LABEL_269:
      *((_DWORD *)v51 + 134) = 0;
    }
    else
    {
      v51 = (unsigned __int8 *)operator new(0x3A0u);
      *v51 = 0;
      *((_QWORD *)v51 + 12) = v51 + 112;
      *((_QWORD *)v51 + 16) = v51 + 144;
      *((_QWORD *)v51 + 20) = v51 + 176;
      *((_QWORD *)v51 + 24) = v51 + 208;
      *((_QWORD *)v51 + 28) = v51 + 240;
      *((_QWORD *)v51 + 32) = v51 + 272;
      *((_QWORD *)v51 + 36) = v51 + 304;
      *((_QWORD *)v51 + 40) = v51 + 336;
      *((_QWORD *)v51 + 44) = v51 + 368;
      *((_QWORD *)v51 + 48) = v51 + 400;
      *((_QWORD *)v51 + 52) = v51 + 432;
      *((_QWORD *)v51 + 13) = 0;
      v51[112] = 0;
      *((_QWORD *)v51 + 17) = 0;
      v51[144] = 0;
      *((_QWORD *)v51 + 21) = 0;
      v51[176] = 0;
      *((_QWORD *)v51 + 25) = 0;
      v51[208] = 0;
      *((_QWORD *)v51 + 29) = 0;
      v51[240] = 0;
      *((_QWORD *)v51 + 33) = 0;
      v51[272] = 0;
      *((_QWORD *)v51 + 37) = 0;
      v51[304] = 0;
      *((_QWORD *)v51 + 41) = 0;
      v51[336] = 0;
      *((_QWORD *)v51 + 45) = 0;
      v51[368] = 0;
      *((_QWORD *)v51 + 49) = 0;
      v51[400] = 0;
      *((_QWORD *)v51 + 53) = 0x800000000LL;
      *((_QWORD *)v51 + 66) = v51 + 544;
      *((_QWORD *)v51 + 67) = 0x600000000LL;
    }
    v165 = v51;
  }
  v51[*v51 + 1] = 1;
  v52 = v165;
  v53 = *(unsigned __int8 *)v165;
  *(_BYTE *)v165 = v53 + 1;
  v52[v53 + 2] = "ARM";
  if ( (_BYTE)v170 )
  {
    sub_FC7790(v167[0], (__int64 *)&v165, SHIBYTE(v170));
    v167[0] = 0;
    v170 = 0;
  }
  if ( v168 != &v169 )
    operator delete(v168);
  v54 = (void **)v165;
  if ( v165 )
  {
    v55 = v166;
    if ( v166 )
    {
      if ( (unsigned __int64)v165 < v166 || (unsigned __int64)v165 > v166 + 14848 )
      {
        v56 = *((void ***)v165 + 66);
        v57 = &v56[8 * (unsigned __int64)*((unsigned int *)v165 + 134)];
        if ( v56 != v57 )
        {
          do
          {
            while ( 1 )
            {
              v57 -= 8;
              v58 = (void **)v57[3];
              if ( v58 == v57 + 5 )
                break;
              operator delete(v58);
              if ( v56 == v57 )
                goto LABEL_85;
            }
          }
          while ( v56 != v57 );
LABEL_85:
          v57 = (void **)v54[66];
        }
        if ( v57 != v54 + 68 )
          free(v57);
        v59 = (void **)v54[52];
        if ( v59 != v54 + 54 )
          free(v59);
        v60 = v54 + 48;
        v61 = v54 + 8;
        do
        {
          while ( *v60 != v60 + 2 )
          {
            operator delete(*v60);
            v60 -= 4;
            if ( v61 == v60 )
              goto LABEL_93;
          }
          v60 -= 4;
        }
        while ( v61 != v60 );
LABEL_93:
        operator delete(v54, 0x3A0u);
      }
      else
      {
        v107 = *(unsigned int *)(v166 + 14976);
        *(_DWORD *)(v166 + 14976) = v107 + 1;
        *(_QWORD *)(v55 + 8 * v107 + 14848) = v54;
      }
    }
  }
  v62 = 1;
  if ( DWORD2(v147) != 38 )
    goto LABEL_163;
LABEL_95:
  v171[0] = (void *)0xD9F00000D4BLL;
  v63 = sub_21B6DA0(v5, v171, 2);
  v64 = *(_QWORD *)(v5 + 8);
  v172.m128i_i64[0] = 0xD9F00000D4BLL;
  v65 = (void **)(v64 + 8LL * (unsigned int)v63);
  v66 = (void **)(v64 + 8 * HIDWORD(v63));
  v144 = v66;
  *(__m128 *)v171 = _mm_loadh_ps((const double *)&v144);
  if ( v65 != v66 )
  {
    while ( 1 )
    {
      v67 = *v65;
      if ( *v65 )
      {
        if ( (unsigned __int8)sub_21B9810(*v65, 3403) || (unsigned __int8)sub_21B9810(v67, 3487) )
          break;
      }
      v171[0] = ++v65;
      if ( v66 == v65 )
        goto LABEL_165;
    }
    v144 = v66;
    v172.m128i_i64[0] = 0xD9F00000D4BLL;
    *(__m128 *)v171 = _mm_loadh_ps((const double *)&v144);
    if ( v66 != v65 )
    {
      v151 = nullptr;
      v150 = nullptr;
      v147 = 0u;
      LOBYTE(v144) = 0;
      while ( 1 )
      {
        v68 = *((const char ***)*v65 + 6);
        v69 = &v68[*((unsigned int *)*v65 + 14)];
        if ( v68 != v69 )
          break;
LABEL_114:
        v72 = v65 + 1;
        v171[0] = v72;
        if ( v72 != v66 )
        {
          while ( 1 )
          {
            v73 = *v72;
            if ( *v72 )
            {
              if ( (unsigned __int8)sub_21B9810(*v72, 3403) || (unsigned __int8)sub_21B9810(v73, 3487) )
                break;
            }
            v171[0] = ++v72;
            if ( v66 == v72 )
              goto LABEL_119;
          }
          v65 = (void **)v171[0];
          if ( v66 != v171[0] )
            continue;
        }
LABEL_119:
        if ( v147 != 0 )
        {
          v74 = sub_1140500(v150, v147, (__int64)v151, *((__int64 *)&v147 + 1), (__int64)a4);
          v143 = 0;
          v140 = (char *)&byte_22F0C30;
          if ( v74 )
          {
            v140 = (char *)sub_229FBC0(v74);
            v143 = v75;
            if ( (_BYTE)v144 )
              goto LABEL_122;
            goto LABEL_165;
          }
        }
LABEL_164:
        if ( (_BYTE)v144 )
          goto LABEL_122;
        goto LABEL_165;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v70 = *v68;
          if ( !*v68 )
            goto LABEL_107;
          v71 = strlen(*v68);
          if ( v71 == 7 )
            break;
          if ( v71 <= 6 )
          {
            if ( v71 == 6 )
              goto LABEL_106;
            goto LABEL_107;
          }
LABEL_105:
          if ( *(_DWORD *)v70 != 1918987565 || *((_WORD *)v70 + 2) != 26723 || v70[6] != 61 )
          {
LABEL_106:
            if ( *(_DWORD *)v70 == 1885564205 && *((_WORD *)v70 + 2) == 15733 )
            {
              *(_QWORD *)&v147 = v71 - 6;
              v150 = v70 + 6;
            }
            goto LABEL_107;
          }
          *((_QWORD *)&v147 + 1) = v71 - 7;
          v151 = v70 + 7;
LABEL_107:
          if ( v69 == ++v68 )
            goto LABEL_114;
        }
        if ( *(_DWORD *)v70 != 1752460589 || *((_WORD *)v70 + 2) != 28021 || v70[6] != 98 )
          goto LABEL_105;
        ++v68;
        LOBYTE(v144) = 1;
        if ( v69 == v68 )
          goto LABEL_114;
      }
    }
  }
LABEL_165:
  if ( !v149 && *((_DWORD *)a4 + 11) != 15 )
  {
LABEL_167:
    if ( !v140 )
      goto LABEL_124;
    goto LABEL_168;
  }
LABEL_122:
  if ( !(_BYTE)v145 )
  {
    sub_99BDC0(v146, 0, v156, "thumb", 5u);
    goto LABEL_167;
  }
  sub_99BDC0(v146, 0, v156, "thumbeb", 7u);
  if ( !v140 )
  {
LABEL_124:
    LOBYTE(v167[0]) = 0;
    v166 = 0;
    v165 = v167;
    goto LABEL_169;
  }
LABEL_168:
  v165 = v167;
  sub_113C3F0(&v165, v140, (__int64)&v140[v143]);
LABEL_169:
  v100 = (__m128i *)sub_99BDC0(&v165, 0, 0, v155, v156);
  v171[0] = &v172;
  if ( (__m128i *)v100->m128i_i64[0] == &v100[1] )
  {
    v172 = _mm_loadu_si128(v100 + 1);
  }
  else
  {
    v171[0] = (void *)v100->m128i_i64[0];
    v172.m128i_i64[0] = v100[1].m128i_i64[0];
  }
  v171[1] = (void *)v100->m128i_i64[1];
  v100->m128i_i64[0] = (__int64)v100[1].m128i_i64;
  v100->m128i_i64[1] = 0;
  v100[1].m128i_i8[0] = 0;
  sub_22BAF00(a4, v171[0], v171[1]);
  if ( v171[0] != &v172 )
    operator delete(v171[0]);
  if ( v165 != v167 )
    operator delete(v165);
  if ( v155 != v146 + 2 )
    operator delete(v155);
  if ( src != p_src + 2 )
    operator delete(src);
}
