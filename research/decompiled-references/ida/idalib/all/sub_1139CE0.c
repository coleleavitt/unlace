__int64 __fastcall sub_1139CE0(__int64 *a1, _DWORD *a2, __int64 *a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rax
  const char **v8; // rax
  size_t v9; // rdx
  const char *v10; // r12
  char v11; // al
  __int64 v12; // rax
  const char **v13; // rax
  size_t v14; // rdx
  const char *v15; // r12
  char v16; // al
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // r14
  _QWORD *v20; // r12
  __int64 v21; // r13
  char **v22; // rbx
  void *v23; // rax
  char *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  char *v27; // rsi
  char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rbx
  const char **v31; // rax
  const char *v32; // r12
  size_t v33; // r13
  const char *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rbx
  _BYTE *v37; // r12
  size_t v38; // rax
  const __m128i *v39; // r13
  const __m128i *v40; // r15
  size_t v41; // r14
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  void **v46; // rbx
  size_t v47; // rax
  void **v48; // r13
  void **v49; // r12
  void **v50; // rdi
  void **v51; // rdi
  void **v52; // r13
  void **v53; // r12
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 v57; // rax
  __int64 *v58; // rbp
  __int64 *v59; // r14
  __int64 v60; // r15
  void **v61; // r12
  __int64 v62; // rsi
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  _QWORD *v65; // r13
  _QWORD *v66; // rbx
  __int64 v67; // r12
  unsigned __int64 v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // r12
  _QWORD *v71; // rbx
  __int64 v72; // r13
  int v73; // eax
  __int64 v74; // r13
  __int64 v75; // rax
  _QWORD *v76; // r12
  __int64 v77; // r14
  const char *v78; // rdi
  __int64 result; // rax
  __int64 v80; // r13
  __int64 v81; // rax
  _QWORD *v82; // r14
  __int64 v83; // r15
  __int64 *v84; // rbx
  __int64 *v85; // r14
  __int64 *v86; // r13
  __int64 v87; // r12
  __int64 v88; // rax
  __int64 *v89; // r13
  __int64 v90; // rbp
  void **v91; // r15
  __int64 v92; // rsi
  unsigned __int64 v94; // rax
  __int64 v95; // rdx
  _QWORD *v96; // rbx
  _QWORD *v97; // r12
  __int64 v98; // r13
  const char **v99; // r13
  const char **i; // r14
  const char *v101; // r15
  size_t v102; // rax
  _QWORD *v103; // rbx
  __int64 v104; // r13
  unsigned __int8 *v105; // r12
  _BYTE *v106; // rsi
  _QWORD *v107; // rdx
  __int64 v108; // rax
  void **v109; // r12
  _QWORD *v110; // rax
  void **v111; // r14
  void **v112; // r13
  void **v113; // rdi
  void **v114; // rdi
  void **v115; // r14
  void **v116; // r13
  __int64 v117; // r12
  __int64 v118; // rax
  _QWORD *v119; // r13
  __int64 v120; // r14
  unsigned __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rax
  const char **v124; // rax
  size_t v125; // rdx
  const char *v126; // r12
  unsigned __int8 *v127; // r12
  __int64 v128; // r14
  _QWORD *v129; // rdx
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rdx
  _QWORD *v133; // rdx
  int v134; // eax
  _QWORD *v135; // rdx
  int v136; // eax
  unsigned __int64 v137; // rax
  size_t v138; // rax
  __int64 v139; // rax
  __int64 v140; // r13
  __int64 v141; // r15
  __int64 v142; // r13
  void *v143; // rdi
  __int64 v144; // rax
  __int64 v145; // r13
  __int64 v146; // rdx
  __int64 v147; // r14
  __int64 v148; // r13
  void *v149; // rdi
  __int64 v150; // rdx
  unsigned __int64 v152; // [rsp+10h] [rbp-178h] BYREF
  __int64 *v153; // [rsp+18h] [rbp-170h]
  _DWORD *v154; // [rsp+20h] [rbp-168h]
  int v155; // [rsp+2Ch] [rbp-15Ch]
  __int64 v156; // [rsp+30h] [rbp-158h]
  int v157; // [rsp+38h] [rbp-150h]
  char v158; // [rsp+3Eh] [rbp-14Ah]
  char v159; // [rsp+3Fh] [rbp-149h]
  __int64 v160; // [rsp+48h] [rbp-140h] BYREF
  _BYTE *v161; // [rsp+50h] [rbp-138h] BYREF
  size_t v162; // [rsp+58h] [rbp-130h]
  __m128i v163; // [rsp+60h] [rbp-128h] BYREF
  __int128 v164; // [rsp+70h] [rbp-118h] BYREF
  __int64 v165; // [rsp+80h] [rbp-108h]
  __int128 v166; // [rsp+88h] [rbp-100h]
  __int64 v167; // [rsp+98h] [rbp-F0h]
  __int64 v168; // [rsp+A0h] [rbp-E8h]
  void *v169; // [rsp+B0h] [rbp-D8h] BYREF
  size_t v170; // [rsp+B8h] [rbp-D0h]
  __int64 v171; // [rsp+C0h] [rbp-C8h] BYREF
  void *v172; // [rsp+D0h] [rbp-B8h]
  __int64 v173; // [rsp+E0h] [rbp-A8h] BYREF
  __int16 v174; // [rsp+F0h] [rbp-98h]
  void *ptr[2]; // [rsp+100h] [rbp-88h] BYREF
  __m128i si128; // [rsp+110h] [rbp-78h] BYREF
  void *v177; // [rsp+120h] [rbp-68h]
  __int64 v178; // [rsp+130h] [rbp-58h] BYREF
  __int16 v179; // [rsp+140h] [rbp-48h]

  v153 = a1;
  v154 = a2;
  v155 = a5;
  v157 = a6;
  v164 = 0;
  v165 = 0;
  v166 = 0;
  v167 = 0;
  v168 = 0;
  if ( !(_BYTE)a5 )
  {
    v152 = 0;
    goto LABEL_3;
  }
  ptr[0] = (void *)0xD9F00000D4BLL;
  v94 = sub_21B6DA0(a3, ptr, 2);
  v95 = a3[1];
  si128.m128i_i64[0] = 0xD9F00000D4BLL;
  v96 = (_QWORD *)(v95 + 8LL * (unsigned int)v94);
  v97 = (_QWORD *)(v95 + 8 * HIDWORD(v94));
  v152 = (unsigned __int64)v97;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v152);
  if ( v96 == v97 )
    goto LABEL_262;
  while ( 1 )
  {
    v98 = *v96;
    if ( *v96 )
    {
      if ( (unsigned __int8)sub_21B9810(*v96, 3403) || (unsigned __int8)sub_21B9810(v98, 3487) )
        break;
    }
    ptr[0] = ++v96;
    if ( v97 == v96 )
      goto LABEL_262;
  }
  v152 = (unsigned __int64)v97;
  si128.m128i_i64[0] = 0xD9F00000D4BLL;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v152);
  if ( v97 == v96 )
  {
LABEL_262:
    v152 = 0;
    goto LABEL_3;
  }
  v152 = 0;
  v156 = 0;
  do
  {
    v99 = *(const char ***)(*v96 + 48LL);
    for ( i = &v99[*(unsigned int *)(*v96 + 56LL)]; i != v99; v152 = (unsigned __int64)(v101 + 7) )
    {
      while ( 1 )
      {
        v101 = *v99;
        if ( *v99 )
        {
          v102 = strlen(*v99);
          if ( v102 > 6 && *(_DWORD *)v101 == 1918987565 && *((_WORD *)v101 + 2) == 26723 && v101[6] == 61 )
            break;
        }
        if ( i == ++v99 )
          goto LABEL_278;
      }
      ++v99;
      v156 = v102 - 7;
    }
LABEL_278:
    v103 = v96 + 1;
    ptr[0] = v103;
    if ( v103 == v97 )
      break;
    while ( 1 )
    {
      v104 = *v103;
      if ( *v103 )
      {
        if ( (unsigned __int8)sub_21B9810(*v103, 3403) || (unsigned __int8)sub_21B9810(v104, 3487) )
          break;
      }
      ptr[0] = ++v103;
      if ( v97 == v103 )
        goto LABEL_283;
    }
    v96 = ptr[0];
  }
  while ( v97 != ptr[0] );
LABEL_283:
  if ( !v156 )
  {
LABEL_3:
    v7 = sub_10DCD30((__int64)a3, 0x8D4u);
    v160 = v7;
    if ( v7 )
    {
      v8 = *(const char ***)(v7 + 48);
      v9 = 0;
      v10 = *v8;
      if ( *v8 )
        v9 = j__strlen(*v8);
      v11 = sub_1138790(v153, (__int64)v10, v9, (__int64)&v164);
    }
    else
    {
      v123 = sub_10DCD30((__int64)a3, 0x913u);
      v160 = v123;
      if ( v123 )
      {
        v124 = *(const char ***)(v123 + 48);
        v125 = 0;
        v126 = *v124;
        if ( *v124 )
          v125 = j__strlen(*v124);
        v11 = sub_11394F0(v153, (__int64)v126, v125, a3, (__int64)&v164, a4);
      }
      else
      {
        v137 = (unsigned int)v154[11];
        if ( (unsigned int)v137 <= 0x1F && (v150 = 4160750114LL, _bittest64(&v150, v137)) )
        {
          sub_11397D0((__int64)ptr, (__int64)a3, v154, &v160);
          v11 = sub_11394F0(v153, (__int64)ptr[0], (__int64)ptr[1], a3, (__int64)&v164, a4);
          if ( ptr[0] != &si128 )
          {
            LOBYTE(v156) = v11;
            operator delete(ptr[0]);
            v11 = v156;
          }
        }
        else
        {
          v138 = j__strlen("armv8-a");
          v11 = sub_1138790(v153, (__int64)"armv8-a", v138, (__int64)&v164);
        }
      }
    }
    v156 = 0;
    if ( !v11 )
    {
      sub_FC70B0((__int64)ptr, *v153, 0, 497);
LABEL_358:
      sub_AEC220((unsigned __int8 **)ptr, *(_BYTE **)(v160 + 24), *(_QWORD *)(v160 + 32));
      v127 = (unsigned __int8 *)ptr[0];
      v128 = **(_QWORD **)(v160 + 48);
      if ( !ptr[0] )
      {
        v133 = ptr[1];
        v134 = *((_DWORD *)ptr[1] + 3744);
        if ( v134 )
        {
          v139 = (unsigned int)(v134 - 1);
          *((_DWORD *)ptr[1] + 3744) = v139;
          v127 = (unsigned __int8 *)v133[v139 + 1856];
          v140 = *((unsigned int *)v127 + 134);
          v141 = *((_QWORD *)v127 + 66);
          *v127 = 0;
          *((_DWORD *)v127 + 106) = 0;
          v142 = v141 + (v140 << 6);
          while ( v141 != v142 )
          {
            while ( 1 )
            {
              v142 -= 64;
              v143 = *(void **)(v142 + 24);
              if ( v143 == (void *)(v142 + 40) )
                break;
              operator delete(v143);
              if ( v141 == v142 )
                goto LABEL_396;
            }
          }
LABEL_396:
          *((_DWORD *)v127 + 134) = 0;
        }
        else
        {
          v127 = (unsigned __int8 *)operator new(0x3A0u);
          *v127 = 0;
          *((_QWORD *)v127 + 12) = v127 + 112;
          *((_QWORD *)v127 + 16) = v127 + 144;
          *((_QWORD *)v127 + 20) = v127 + 176;
          *((_QWORD *)v127 + 24) = v127 + 208;
          *((_QWORD *)v127 + 28) = v127 + 240;
          *((_QWORD *)v127 + 32) = v127 + 272;
          *((_QWORD *)v127 + 36) = v127 + 304;
          *((_QWORD *)v127 + 40) = v127 + 336;
          *((_QWORD *)v127 + 44) = v127 + 368;
          *((_QWORD *)v127 + 48) = v127 + 400;
          *((_QWORD *)v127 + 52) = v127 + 432;
          *((_QWORD *)v127 + 13) = 0;
          v127[112] = 0;
          *((_QWORD *)v127 + 17) = 0;
          v127[144] = 0;
          *((_QWORD *)v127 + 21) = 0;
          v127[176] = 0;
          *((_QWORD *)v127 + 25) = 0;
          v127[208] = 0;
          *((_QWORD *)v127 + 29) = 0;
          v127[240] = 0;
          *((_QWORD *)v127 + 33) = 0;
          v127[272] = 0;
          *((_QWORD *)v127 + 37) = 0;
          v127[304] = 0;
          *((_QWORD *)v127 + 41) = 0;
          v127[336] = 0;
          *((_QWORD *)v127 + 45) = 0;
          v127[368] = 0;
          *((_QWORD *)v127 + 49) = 0;
          v127[400] = 0;
          *((_QWORD *)v127 + 53) = 0x800000000LL;
          *((_QWORD *)v127 + 66) = v127 + 544;
          *((_QWORD *)v127 + 67) = 0x600000000LL;
        }
        ptr[0] = v127;
      }
      v127[*v127 + 1] = 1;
      v129 = ptr[0];
      v130 = *(unsigned __int8 *)ptr[0];
      *(_BYTE *)ptr[0] = v130 + 1;
      v129[v130 + 2] = v128;
LABEL_288:
      if ( (_BYTE)v179 )
      {
        sub_FC7790(si128.m128i_i64[0], (__int64 *)ptr, SHIBYTE(v179));
        si128.m128i_i64[0] = 0;
        v179 = 0;
      }
      if ( v177 != &v178 )
        operator delete(v177);
      v109 = (void **)ptr[0];
      if ( ptr[0] )
      {
        v110 = ptr[1];
        if ( ptr[1] )
        {
          if ( ptr[0] < ptr[1] || ptr[0] > (char *)ptr[1] + 14848 )
          {
            v111 = *((void ***)ptr[0] + 66);
            v112 = &v111[8 * (unsigned __int64)*((unsigned int *)ptr[0] + 134)];
            if ( v111 != v112 )
            {
              do
              {
                while ( 1 )
                {
                  v112 -= 8;
                  v113 = (void **)v112[3];
                  if ( v113 == v112 + 5 )
                    break;
                  operator delete(v113);
                  if ( v111 == v112 )
                    goto LABEL_298;
                }
              }
              while ( v111 != v112 );
LABEL_298:
              v112 = (void **)v109[66];
            }
            if ( v112 != v109 + 68 )
              free(v112);
            v114 = (void **)v109[52];
            if ( v114 != v109 + 54 )
              free(v114);
            v115 = v109 + 48;
            v116 = v109 + 8;
            do
            {
              while ( *v115 != v115 + 2 )
              {
                operator delete(*v115);
                v115 -= 4;
                if ( v115 == v116 )
                  goto LABEL_306;
              }
              v115 -= 4;
            }
            while ( v115 != v116 );
LABEL_306:
            operator delete(v109, 0x3A0u);
          }
          else
          {
            v131 = *((unsigned int *)ptr[1] + 3744);
            *((_DWORD *)ptr[1] + 3744) = v131 + 1;
            v110[v131 + 1856] = v109;
          }
        }
      }
      goto LABEL_13;
    }
    goto LABEL_8;
  }
  if ( !(unsigned __int8)sub_1138790(v153, v152, v156, (__int64)&v164) )
  {
    sub_FC70B0((__int64)ptr, *v153, 0, 497);
    goto LABEL_286;
  }
LABEL_8:
  v12 = sub_10DCD30((__int64)a3, 0xB64u);
  v160 = v12;
  if ( v12 || (v12 = sub_10DCD30((__int64)a3, 0x913u), (v160 = v12) != 0) )
  {
    v13 = *(const char ***)(v12 + 48);
    v14 = 0;
    v15 = *v13;
    if ( *v13 )
      v14 = j__strlen(*v13);
    v16 = sub_11386F0(v153, (__int64)v15, v14);
  }
  else
  {
    v121 = (unsigned int)v154[11];
    if ( (unsigned int)v121 > 0x1F )
      goto LABEL_13;
    v122 = 4160750114LL;
    if ( !_bittest64(&v122, v121) )
      goto LABEL_13;
    sub_11397D0((__int64)ptr, (__int64)a3, v154, &v160);
    v16 = sub_11386F0(v153, (__int64)ptr[0], (__int64)ptr[1]);
    if ( ptr[0] != &si128 )
    {
      v158 = v16;
      operator delete(ptr[0]);
      v16 = v158;
    }
  }
  if ( !v16 )
  {
    sub_FC70B0((__int64)ptr, *v153, 0, 497);
    if ( !v156 )
      goto LABEL_358;
LABEL_286:
    v105 = (unsigned __int8 *)ptr[0];
    if ( !ptr[0] )
    {
      v135 = ptr[1];
      v136 = *((_DWORD *)ptr[1] + 3744);
      if ( v136 )
      {
        v144 = (unsigned int)(v136 - 1);
        *((_DWORD *)ptr[1] + 3744) = v144;
        v105 = (unsigned __int8 *)v135[v144 + 1856];
        v145 = *((unsigned int *)v105 + 134);
        v146 = *((_QWORD *)v105 + 66);
        *v105 = 0;
        *((_DWORD *)v105 + 106) = 0;
        v147 = v146;
        v148 = v146 + (v145 << 6);
        if ( v146 != v148 )
        {
          do
          {
            while ( 1 )
            {
              v148 -= 64;
              v149 = *(void **)(v148 + 24);
              if ( v149 == (void *)(v148 + 40) )
                break;
              operator delete(v149);
              if ( v147 == v148 )
                goto LABEL_400;
            }
          }
          while ( v147 != v148 );
        }
LABEL_400:
        *((_DWORD *)v105 + 134) = 0;
      }
      else
      {
        v105 = (unsigned __int8 *)operator new(0x3A0u);
        *v105 = 0;
        *((_QWORD *)v105 + 12) = v105 + 112;
        *((_QWORD *)v105 + 16) = v105 + 144;
        *((_QWORD *)v105 + 20) = v105 + 176;
        *((_QWORD *)v105 + 24) = v105 + 208;
        *((_QWORD *)v105 + 28) = v105 + 240;
        *((_QWORD *)v105 + 32) = v105 + 272;
        *((_QWORD *)v105 + 36) = v105 + 304;
        *((_QWORD *)v105 + 40) = v105 + 336;
        *((_QWORD *)v105 + 44) = v105 + 368;
        *((_QWORD *)v105 + 48) = v105 + 400;
        *((_QWORD *)v105 + 52) = v105 + 432;
        *((_QWORD *)v105 + 13) = 0;
        v105[112] = 0;
        *((_QWORD *)v105 + 17) = 0;
        v105[144] = 0;
        *((_QWORD *)v105 + 21) = 0;
        v105[176] = 0;
        *((_QWORD *)v105 + 25) = 0;
        v105[208] = 0;
        *((_QWORD *)v105 + 29) = 0;
        v105[240] = 0;
        *((_QWORD *)v105 + 33) = 0;
        v105[272] = 0;
        *((_QWORD *)v105 + 37) = 0;
        v105[304] = 0;
        *((_QWORD *)v105 + 41) = 0;
        v105[336] = 0;
        *((_QWORD *)v105 + 45) = 0;
        v105[368] = 0;
        *((_QWORD *)v105 + 49) = 0;
        v105[400] = 0;
        *((_QWORD *)v105 + 53) = 0x800000000LL;
        *((_QWORD *)v105 + 66) = v105 + 544;
        *((_QWORD *)v105 + 67) = 0x600000000LL;
      }
      ptr[0] = v105;
    }
    v106 = (_BYTE *)v152;
    v105[*v105 + 1] = 1;
    v107 = ptr[0];
    v108 = *(unsigned __int8 *)ptr[0];
    *(_BYTE *)ptr[0] = v108 + 1;
    v107[v108 + 2] = "-march=";
    sub_AEC220((unsigned __int8 **)ptr, v106, v156);
    goto LABEL_288;
  }
LABEL_13:
  if ( sub_10DCD30((__int64)a3, 0x959u) )
    sub_2299260(&v164, 30);
  ptr[0] = (void *)0xAD900000916LL;
  v17 = sub_21B6DA0(a3, ptr, 2);
  v18 = a3[1];
  si128.m128i_i64[0] = 0xAD900000916LL;
  v19 = (_QWORD *)(v18 + 8LL * (unsigned int)v17);
  v20 = (_QWORD *)(v18 + 8 * HIDWORD(v17));
  v152 = (unsigned __int64)v20;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v152);
  if ( v19 != v20 )
  {
    while ( 1 )
    {
      v21 = *v19;
      if ( *v19 )
      {
        if ( (unsigned __int8)sub_21B9810(*v19, 2326) || (unsigned __int8)sub_21B9810(v21, 2777) )
          break;
      }
      ptr[0] = ++v19;
      if ( v20 == v19 )
        goto LABEL_20;
    }
    v152 = (unsigned __int64)v20;
    si128.m128i_i64[0] = 0xAD900000916LL;
    *(__m128 *)ptr = _mm_loadh_ps((const double *)&v152);
    if ( v20 != v19 )
    {
      do
      {
        v80 = *v19;
        v81 = *(_QWORD *)(*v19 + 16LL);
        if ( !v81 )
          v81 = *v19;
        v82 = v19 + 1;
        *(_BYTE *)(v81 + 44) |= 1u;
        ptr[0] = v82;
        if ( v82 == v20 )
          break;
        while ( 1 )
        {
          v83 = *v82;
          if ( *v82 )
          {
            if ( (unsigned __int8)sub_21B9810(*v82, 2326) || (unsigned __int8)sub_21B9810(v83, 2777) )
              break;
          }
          ptr[0] = ++v82;
          if ( v20 == v82 )
            goto LABEL_234;
        }
        v19 = ptr[0];
      }
      while ( v20 != ptr[0] );
LABEL_234:
      if ( (unsigned __int8)sub_21B9810(v80, 2326) )
        sub_2299030(&v164, 15);
      else
        sub_2299260(&v164, 15);
    }
  }
LABEL_20:
  if ( v168 && *(_QWORD *)(v168 + 48) )
  {
    *(__m128i *)ptr = _mm_loadu_si128((const __m128i *)(v168 + 40));
    sub_11394A0(a4, (__int64 *)ptr);
  }
  v22 = (char **)&unk_2B414C8;
  do
  {
    while ( 1 )
    {
      if ( !v22[6] )
        goto LABEL_26;
      v25 = 1LL << *(_DWORD *)v22;
      v26 = *(_DWORD *)v22 >> 6;
      if ( (v25 & *((_QWORD *)&v166 + v26)) == 0 )
        goto LABEL_26;
      v27 = *(char **)(a4 + 8);
      v28 = *(char **)(a4 + 16);
      if ( (v25 & *((_QWORD *)&v164 + v26)) != 0 )
      {
        *(__m128i *)ptr = _mm_load_si128((const __m128i *)(v22 + 5));
        if ( v27 == v28 )
          break;
        goto LABEL_25;
      }
      *(__m128i *)ptr = _mm_load_si128((const __m128i *)(v22 + 7));
      if ( v27 == v28 )
        break;
LABEL_25:
      v23 = ptr[1];
      v24 = v27 + 16;
      *((void **)v24 - 2) = ptr[0];
      *((_QWORD *)v24 - 1) = v23;
      *(_QWORD *)(a4 + 8) = v24;
LABEL_26:
      v22 += 14;
      if ( v22 == &off_2B44FD8 )
        goto LABEL_32;
    }
    v22 += 14;
    sub_1075D80(a4, v27, ptr);
  }
  while ( v22 != &off_2B44FD8 );
LABEL_32:
  v29 = sub_10DCD30((__int64)a3, 0xB60u);
  v30 = v29;
  if ( !v29 )
    goto LABEL_62;
  v31 = *(const char ***)(v29 + 48);
  v32 = *v31;
  if ( !*v31 )
  {
    if ( !j__strlen("tpidr_el3") )
      goto LABEL_264;
    if ( !j__strlen("el2") || !j__strlen("tpidr_el2") )
      goto LABEL_42;
    if ( j__strlen("el1") )
    {
      v33 = 0;
      goto LABEL_51;
    }
LABEL_371:
    v34 = "+tpidr-el1";
    goto LABEL_265;
  }
  v33 = j__strlen(*v31);
  if ( v33 == 3 )
  {
    if ( *(_WORD *)v32 == 27749 && v32[2] == 51 )
      goto LABEL_264;
    if ( j__strlen("tpidr_el3") == 3 )
    {
      v33 = 3;
LABEL_37:
      if ( !memcmp(v32, "tpidr_el3", v33) )
      {
LABEL_264:
        v34 = "+tpidr-el3";
        goto LABEL_265;
      }
      if ( v33 == j__strlen("el2") )
        goto LABEL_39;
      if ( j__strlen("tpidr_el2") == v33 )
        goto LABEL_41;
      goto LABEL_340;
    }
    if ( j__strlen("el2") == 3 )
    {
      v33 = 3;
      goto LABEL_39;
    }
    if ( j__strlen("tpidr_el2") == 3 )
    {
      v33 = 3;
      goto LABEL_41;
    }
    if ( j__strlen("el1") == 3 )
    {
      v33 = 3;
      goto LABEL_342;
    }
LABEL_51:
    if ( j__strlen("tpidr_el1") != v33 )
      goto LABEL_52;
    if ( v33 )
    {
LABEL_344:
      if ( memcmp(v32, "tpidr_el1", v33) )
      {
        if ( j__strlen("tpidrro_el0") == v33 )
        {
LABEL_54:
          if ( !memcmp(v32, "tpidrro_el0", v33) )
            goto LABEL_387;
          if ( v33 == j__strlen("el0") )
            goto LABEL_56;
          goto LABEL_384;
        }
LABEL_346:
        if ( j__strlen("el0") == v33 )
        {
          if ( !v33 )
            goto LABEL_62;
LABEL_56:
          if ( !memcmp(v32, "el0", v33) )
            goto LABEL_62;
          if ( v33 == j__strlen("tpidr_el0") )
          {
LABEL_58:
            if ( !memcmp(v32, "tpidr_el0", v33) )
              goto LABEL_62;
            goto LABEL_59;
          }
          goto LABEL_59;
        }
LABEL_384:
        if ( j__strlen("tpidr_el0") == v33 )
        {
          if ( !v33 )
            goto LABEL_62;
          goto LABEL_58;
        }
LABEL_59:
        sub_FC70B0((__int64)ptr, *v153, 0, 386);
        sub_21B5FF0(&v169, v30, a3);
        sub_AEC220((unsigned __int8 **)ptr, v169, v170);
        if ( v169 != &v171 )
          operator delete(v169);
        sub_AEA040((__int64)ptr);
        goto LABEL_62;
      }
    }
    goto LABEL_371;
  }
  if ( v33 == j__strlen("tpidr_el3") )
  {
    if ( v33 )
      goto LABEL_37;
    goto LABEL_264;
  }
  if ( v33 != j__strlen("el2") )
  {
    if ( v33 != j__strlen("tpidr_el2") )
      goto LABEL_340;
    if ( v33 )
      goto LABEL_41;
LABEL_42:
    v34 = "+tpidr-el2";
    goto LABEL_265;
  }
  if ( !v33 )
    goto LABEL_42;
LABEL_39:
  if ( !memcmp(v32, "el2", v33) )
    goto LABEL_42;
  if ( v33 != j__strlen("tpidr_el2") )
  {
LABEL_340:
    if ( j__strlen("el1") != v33 )
      goto LABEL_51;
    if ( v33 )
      goto LABEL_342;
    goto LABEL_371;
  }
LABEL_41:
  if ( !memcmp(v32, "tpidr_el2", v33) )
    goto LABEL_42;
  if ( j__strlen("el1") != v33 )
    goto LABEL_51;
LABEL_342:
  if ( !memcmp(v32, "el1", v33) )
    goto LABEL_371;
  if ( j__strlen("tpidr_el1") == v33 )
    goto LABEL_344;
LABEL_52:
  if ( j__strlen("tpidrro_el0") != v33 )
    goto LABEL_346;
  if ( v33 )
    goto LABEL_54;
LABEL_387:
  v34 = "+tpidrro-el0";
LABEL_265:
  ptr[0] = (void *)v34;
  ptr[1] = (void *)j__strlen(v34);
  sub_11394A0(a4, (__int64 *)ptr);
LABEL_62:
  v35 = sub_10DCD30((__int64)a3, 0x964u);
  v36 = v35;
  if ( !v35 )
    goto LABEL_105;
  v37 = **(_BYTE ***)(v35 + 48);
  v161 = v37;
  if ( v37 )
  {
    v162 = j__strlen(v37);
    if ( v162 == 4 && *(_DWORD *)v37 == 1701736302 )
      goto LABEL_105;
  }
  else
  {
    v162 = 0;
  }
  ptr[1] = (void *)0x400000000LL;
  ptr[0] = &si128;
  v38 = j__strlen(",");
  sub_22471D0(&v161, ptr, ",", v38, 0xFFFFFFFFLL, 1);
  v39 = (const __m128i *)((char *)ptr[0] + 16 * LODWORD(ptr[1]));
  if ( ptr[0] == v39 )
  {
    if ( ptr[0] != &si128 )
      free(ptr[0]);
    goto LABEL_105;
  }
  v159 = 0;
  v40 = (const __m128i *)ptr[0];
  v158 = 0;
  LOBYTE(v156) = 0;
  v152 = (unsigned __int64)&v163;
  while ( 2 )
  {
    v41 = 0;
    v163 = _mm_loadu_si128(v40);
    v42 = sub_2246FB0(v152, asc_22E1692, 6, 0);
    v43 = v163.m128i_u64[1];
    if ( v42 < v163.m128i_i64[1] )
    {
      v41 = v163.m128i_i64[1] - v42;
      v43 = v42;
    }
    v170 = v41;
    v169 = (void *)(v163.m128i_i64[0] + v43);
    v44 = sub_2247130(&v169, asc_22E1692, 6, -1) + 1;
    if ( v44 > v170 )
      v44 = v170;
    v45 = v170 - v41 + v44;
    if ( v45 > v170 )
      v45 = v170;
    v163.m128i_i64[1] = v45;
    v163.m128i_i64[0] = (__int64)v169;
    switch ( v45 )
    {
      case 3uLL:
        if ( *(_WORD *)v169 == 27745 && *((_BYTE *)v169 + 2) == 108 )
        {
          v158 = 1;
          LOBYTE(v156) = 1;
        }
        else
        {
          if ( *(_WORD *)v169 != 27746 || *((_BYTE *)v169 + 2) != 114 )
            goto LABEL_77;
          v158 = 1;
        }
        goto LABEL_222;
      case 5uLL:
        if ( *(_DWORD *)v169 != 1651795314 || *((_BYTE *)v169 + 4) != 114 )
          goto LABEL_77;
        LOBYTE(v156) = 1;
        goto LABEL_222;
      case 6uLL:
        if ( *(_DWORD *)v169 != 1684893539 || *((_WORD *)v169 + 2) != 29793 )
          goto LABEL_77;
        v159 = 0;
        goto LABEL_222;
    }
    if ( v45 == 8 && *(_QWORD *)v169 == 0x7461646D6F636F6ELL )
    {
      v159 = 1;
LABEL_222:
      if ( v39 == ++v40 )
        goto LABEL_97;
      continue;
    }
    break;
  }
LABEL_77:
  sub_FC70B0((__int64)&v169, *v153, 0, 497);
  sub_AEC220((unsigned __int8 **)&v169, *(_BYTE **)(v36 + 24), *(_QWORD *)(v36 + 32));
  sub_AEC220((unsigned __int8 **)&v169, v161, v162);
  if ( (_BYTE)v174 )
  {
    sub_FC7790(v171, (__int64 *)&v169, SHIBYTE(v174));
    v171 = 0;
    v174 = 0;
  }
  if ( v172 != &v173 )
    operator delete(v172);
  v46 = (void **)v169;
  if ( v169 )
  {
    v47 = v170;
    if ( v170 )
    {
      if ( (unsigned __int64)v169 >= v170 && (unsigned __int64)v169 <= v170 + 14848 )
      {
        v132 = *(unsigned int *)(v170 + 14976);
        *(_DWORD *)(v170 + 14976) = v132 + 1;
        *(_QWORD *)(v47 + 8 * v132 + 14848) = v46;
      }
      else
      {
        v48 = *((void ***)v169 + 66);
        v49 = &v48[8 * (unsigned __int64)*((unsigned int *)v169 + 134)];
        if ( v48 != v49 )
        {
          do
          {
            while ( 1 )
            {
              v49 -= 8;
              v50 = (void **)v49[3];
              if ( v50 == v49 + 5 )
                break;
              operator delete(v50);
              if ( v48 == v49 )
                goto LABEL_88;
            }
          }
          while ( v48 != v49 );
LABEL_88:
          v49 = (void **)v46[66];
        }
        if ( v49 != v46 + 68 )
          free(v49);
        v51 = (void **)v46[52];
        if ( v51 != v46 + 54 )
          free(v51);
        v52 = v46 + 48;
        v53 = v46 + 8;
        do
        {
          while ( *v52 != v52 + 2 )
          {
            operator delete(*v52);
            v52 -= 4;
            if ( v52 == v53 )
              goto LABEL_96;
          }
          v52 -= 4;
        }
        while ( v52 != v53 );
LABEL_96:
        operator delete(v46, 0x3A0u);
      }
    }
  }
LABEL_97:
  if ( ptr[0] != &si128 )
    free(ptr[0]);
  if ( (_BYTE)v156 )
  {
    ptr[0] = (void *)"+harden-sls-retbr";
    ptr[1] = (void *)j__strlen("+harden-sls-retbr");
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( v158 )
  {
    ptr[0] = (void *)"+harden-sls-blr";
    ptr[1] = (void *)j__strlen("+harden-sls-blr");
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( v159 )
  {
    ptr[0] = (void *)"+harden-sls-nocomdat";
    ptr[1] = (void *)j__strlen("+harden-sls-nocomdat");
    sub_11394A0(a4, (__int64 *)ptr);
  }
LABEL_105:
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_23A9930);
  v54 = sub_21B6DA0(a3, ptr, 4);
  v55 = a3[1];
  v56 = (unsigned int)v54;
  v57 = HIDWORD(v54);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9930);
  v152 = v55 + 8 * v57;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v152);
  if ( v55 + 8 * v56 != v152 )
  {
    v152 = a4;
    v58 = (__int64 *)(v55 + 8 * v56);
    v59 = (__int64 *)(v55 + 8 * v57);
    do
    {
      v60 = *v58;
      v61 = ptr;
      if ( *v58 )
      {
        do
        {
          v62 = *((unsigned int *)v61 + 4);
          if ( !(_DWORD)v62 )
            break;
          if ( (unsigned __int8)sub_21B9810(v60, v62) )
          {
            v84 = v59;
            v85 = v58;
            a4 = v152;
            v152 = (unsigned __int64)v84;
            si128 = _mm_load_si128((const __m128i *)&xmmword_23A9930);
            *(__m128 *)ptr = _mm_loadh_ps((const double *)&v152);
            if ( v84 == v85 )
              goto LABEL_113;
            v152 = a4;
            v86 = v85;
LABEL_240:
            v87 = *v86;
            v88 = *(_QWORD *)(*v86 + 16);
            if ( !v88 )
              v88 = *v86;
            v89 = v86 + 1;
            *(_BYTE *)(v88 + 44) |= 1u;
            for ( ptr[0] = v89; v84 != v89; ptr[0] = v89 )
            {
              v90 = *v89;
              v91 = ptr;
              if ( *v89 )
              {
                do
                {
                  v92 = *((unsigned int *)v91 + 4);
                  if ( !(_DWORD)v92 )
                    break;
                  if ( (unsigned __int8)sub_21B9810(v90, v92) )
                  {
                    v86 = (__int64 *)ptr[0];
                    if ( ptr[0] != v84 )
                      goto LABEL_240;
                    goto LABEL_248;
                  }
                  v91 = (void **)((char *)v91 + 4);
                }
                while ( v91 != (void **)&si128 );
              }
              ++v89;
            }
LABEL_248:
            a4 = v152;
            if ( !(unsigned __int8)sub_21B9810(v87, 2895) && !(unsigned __int8)sub_21B9810(v87, 2746) )
              goto LABEL_114;
            goto LABEL_250;
          }
          v61 = (void **)((char *)v61 + 4);
        }
        while ( &si128 != (__m128i *)v61 );
      }
      ptr[0] = ++v58;
    }
    while ( v59 != v58 );
    a4 = v152;
  }
LABEL_113:
  if ( v154[11] == 12 )
  {
LABEL_250:
    ptr[0] = (void *)"+strict-align";
    ptr[1] = (void *)j__strlen("+strict-align");
    sub_11394A0(a4, (__int64 *)ptr);
  }
LABEL_114:
  if ( !(_BYTE)v155 && !(_BYTE)v157 )
  {
    ptr[0] = (void *)0xA1B00000934LL;
    v63 = sub_21B6DA0(a3, ptr, 2);
    v64 = a3[1];
    si128.m128i_i64[0] = 0xA1B00000934LL;
    v65 = (_QWORD *)(v64 + 8LL * (unsigned int)v63);
    v66 = (_QWORD *)(v64 + 8 * HIDWORD(v63));
    v152 = (unsigned __int64)v66;
    *(__m128 *)ptr = _mm_loadh_ps((const double *)&v152);
    if ( v65 != v66 )
    {
      while ( 1 )
      {
        v67 = *v65;
        if ( *v65 )
        {
          if ( (unsigned __int8)sub_21B9810(*v65, 2356) || (unsigned __int8)sub_21B9810(v67, 2587) )
            break;
        }
        ptr[0] = ++v65;
        if ( v66 == v65 )
          goto LABEL_121;
      }
      v152 = (unsigned __int64)v66;
      si128.m128i_i64[0] = 0xA1B00000934LL;
      *(__m128 *)ptr = _mm_loadh_ps((const double *)&v152);
      if ( v66 != v65 )
      {
        do
        {
          v117 = *v65;
          v118 = *(_QWORD *)(*v65 + 16LL);
          if ( !v118 )
            v118 = *v65;
          v119 = v65 + 1;
          *(_BYTE *)(v118 + 44) |= 1u;
          ptr[0] = v119;
          if ( v119 == v66 )
            break;
          while ( 1 )
          {
            v120 = *v119;
            if ( *v119 )
            {
              if ( (unsigned __int8)sub_21B9810(*v119, 2356) || (unsigned __int8)sub_21B9810(v120, 2587) )
                break;
            }
            ptr[0] = ++v119;
            if ( v66 == v119 )
              goto LABEL_317;
          }
          v65 = ptr[0];
        }
        while ( v66 != ptr[0] );
LABEL_317:
        if ( (unsigned __int8)sub_21B9810(v117, 2356) )
        {
          ptr[0] = (void *)"+execute-only";
          ptr[1] = (void *)j__strlen("+execute-only");
          sub_11394A0(a4, (__int64 *)ptr);
        }
      }
    }
  }
LABEL_121:
  if ( sub_10DCD30((__int64)a3, 0x2FAu) )
  {
    ptr[1] = byte_9 + 2;
    ptr[0] = "+reserve-x1";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x305u) )
  {
    ptr[1] = byte_9 + 2;
    ptr[0] = "+reserve-x2";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x308u) )
  {
    ptr[1] = byte_9 + 2;
    ptr[0] = "+reserve-x3";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x309u) )
  {
    ptr[1] = byte_9 + 2;
    ptr[0] = "+reserve-x4";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x30Au) )
  {
    ptr[1] = byte_9 + 2;
    ptr[0] = "+reserve-x5";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x30Bu) )
  {
    ptr[1] = byte_9 + 2;
    ptr[0] = "+reserve-x6";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x30Cu) )
  {
    ptr[1] = byte_9 + 2;
    ptr[0] = "+reserve-x7";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x30Eu) )
  {
    ptr[1] = byte_9 + 2;
    ptr[0] = "+reserve-x9";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x2F0u) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x10";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x2F1u) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x11";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x2F2u) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x12";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x2F3u) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x13";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x2F4u) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x14";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x2F5u) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x15";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x2F8u) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x18";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x2FBu) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x20";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x2FCu) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x21";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x2FDu) )
  {
    ptr[0] = (void *)"+reserve-x22";
    ptr[1] = (void *)j__strlen("+reserve-x22");
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x2FEu) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x23";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x2FFu) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x24";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x300u) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x25";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x301u) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x26";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x302u) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x27";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x303u) )
  {
    ptr[1] = byte_9 + 3;
    ptr[0] = "+reserve-x28";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x9A8u) )
  {
    ptr[1] = &word_12;
    ptr[0] = "+reserve-lr-for-ra";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x1E7u) )
  {
    ptr[1] = byte_9 + 5;
    ptr[0] = "+call-saved-x8";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x1E8u) )
  {
    ptr[1] = byte_9 + 5;
    ptr[0] = "+call-saved-x9";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x1E0u) )
  {
    ptr[1] = byte_9 + 6;
    ptr[0] = "+call-saved-x10";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x1E1u) )
  {
    ptr[1] = byte_9 + 6;
    ptr[0] = "+call-saved-x11";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x1E2u) )
  {
    ptr[1] = byte_9 + 6;
    ptr[0] = "+call-saved-x12";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x1E3u) )
  {
    ptr[1] = byte_9 + 6;
    ptr[0] = "+call-saved-x13";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x1E4u) )
  {
    ptr[1] = byte_9 + 6;
    ptr[0] = "+call-saved-x14";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x1E5u) )
  {
    ptr[1] = byte_9 + 6;
    ptr[0] = "+call-saved-x15";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0x1E6u) )
  {
    ptr[1] = byte_9 + 6;
    ptr[0] = "+call-saved-x18";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  if ( sub_10DCD30((__int64)a3, 0xA65u) )
  {
    ptr[1] = &word_12;
    ptr[0] = (void *)"+no-neg-immediates";
    sub_11394A0(a4, (__int64 *)ptr);
  }
  ptr[0] = (void *)0xA200000093CLL;
  v68 = sub_21B6DA0(a3, ptr, 2);
  v69 = a3[1];
  si128.m128i_i64[0] = 0xA200000093CLL;
  v70 = (_QWORD *)(v69 + 8LL * (unsigned int)v68);
  v71 = (_QWORD *)(v69 + 8 * HIDWORD(v68));
  v152 = (unsigned __int64)v71;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v152);
  if ( v70 == v71 )
    goto LABEL_196;
  while ( 1 )
  {
    v72 = *v70;
    if ( *v70 )
    {
      if ( (unsigned __int8)sub_21B9810(*v70, 2364) || (unsigned __int8)sub_21B9810(v72, 2592) )
        break;
    }
    ptr[0] = ++v70;
    if ( v71 == v70 )
      goto LABEL_196;
  }
  v152 = (unsigned __int64)v71;
  si128.m128i_i64[0] = 0xA200000093CLL;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v152);
  if ( v71 == v70 )
  {
LABEL_196:
    LODWORD(v152) = v154[12];
    if ( (v152 & 0xFFFFFFDF) == 0x11 )
      goto LABEL_213;
    v73 = v154[11];
    if ( v73 == 39 )
      goto LABEL_213;
    if ( v73 == 4 )
    {
      sub_11C8180(ptr, v153, a3, v154, 0);
      if ( !ptr[1] || !sub_9B4AA0((__int64)ptr, "generic") || !sub_9B4AA0((__int64)ptr, "cortex-a53") )
      {
        v169 = (void *)"+fix-cortex-a53-835769";
        v170 = j__strlen("+fix-cortex-a53-835769");
        sub_11394A0(a4, (__int64 *)&v169);
      }
      if ( ptr[0] != &si128 )
        operator delete(ptr[0]);
    }
  }
  else
  {
    do
    {
      v74 = *v70;
      v75 = *(_QWORD *)(*v70 + 16LL);
      if ( !v75 )
        v75 = *v70;
      v76 = v70 + 1;
      *(_BYTE *)(v75 + 44) |= 1u;
      ptr[0] = v76;
      if ( v76 == v71 )
        break;
      while ( 1 )
      {
        v77 = *v76;
        if ( *v76 )
        {
          if ( (unsigned __int8)sub_21B9810(*v76, 2364) || (unsigned __int8)sub_21B9810(v77, 2592) )
            break;
        }
        ptr[0] = ++v76;
        if ( v71 == v76 )
          goto LABEL_212;
      }
      v70 = ptr[0];
    }
    while ( v71 != ptr[0] );
LABEL_212:
    v78 = "-fix-cortex-a53-835769";
    if ( (unsigned __int8)sub_21B9810(v74, 2364) )
LABEL_213:
      v78 = "+fix-cortex-a53-835769";
    ptr[0] = (void *)v78;
    ptr[1] = (void *)j__strlen(v78);
    sub_11394A0(a4, (__int64 *)ptr);
  }
  result = sub_10DCD30((__int64)a3, 0x9FEu);
  if ( result )
  {
    ptr[1] = &dword_14 + 3;
    ptr[0] = (void *)"+no-bti-at-return-twice";
    return sub_11394A0(a4, (__int64 *)ptr);
  }
  return result;
}
