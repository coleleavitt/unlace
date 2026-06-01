__int64 __fastcall sub_4878F0(__int64 a1, int a2, __int64 a3)
{
  char **v3; // rbp
  char **v4; // rbp
  char **exception; // rbp
  __int64 result; // rax
  __int64 v8; // rax
  _OWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rdx
  int v15; // eax
  _QWORD *v16; // rdx
  _DWORD *v17; // rax
  __int64 v18; // rbp
  unsigned int v19; // eax
  unsigned int v20; // r14d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rdx
  __m128i si128; // xmm2
  __int64 v25; // rbx
  __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  _DWORD *v28; // r14
  _DWORD *v29; // r13
  unsigned __int8 v30; // bl
  unsigned __int8 v31; // al
  unsigned int v32; // r12d
  unsigned int v33; // r15d
  unsigned __int8 v34; // al
  char v35; // al
  unsigned int v36; // ebp
  unsigned int v37; // r12d
  void *v38; // rbp
  void *v39; // rbp
  _DWORD *v40; // r15
  unsigned int v41; // ebp
  __int64 v42; // rcx
  int v43; // eax
  _QWORD *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rbx
  _QWORD *v47; // rdx
  unsigned int v48; // eax
  unsigned int v49; // r12d
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 *v52; // rbx
  __int64 v53; // r12
  unsigned __int64 v54; // rbp
  __int64 v55; // rsi
  bool v56; // zf
  __int64 *v57; // rbx
  unsigned __int64 v58; // rbp
  __int64 v59; // rsi
  __int64 *v60; // r15
  __int64 v61; // rax
  __int64 v62; // r10
  __int64 v63; // r14
  int v64; // eax
  __int64 v65; // rcx
  char *v66; // rbp
  __int64 v67; // rsi
  char *v68; // rdx
  char *v69; // rdi
  __int64 v70; // r8
  unsigned int v71; // r8d
  char *v72; // rcx
  char *v73; // rdi
  __int64 v74; // rsi
  _QWORD *v75; // rax
  _DWORD *v76; // r14
  _DWORD *v77; // r13
  unsigned __int8 v78; // bl
  unsigned __int8 v79; // al
  unsigned int v80; // r12d
  unsigned int v81; // r15d
  unsigned __int8 v82; // al
  char v83; // al
  unsigned int v84; // r12d
  unsigned int v85; // r15d
  void *v86; // r12
  void *v87; // r12
  _DWORD *v88; // r14
  __int64 *v89; // r12
  _DWORD *v90; // r14
  _DWORD *v91; // r13
  unsigned __int8 v92; // bl
  unsigned __int8 v93; // al
  unsigned int v94; // r15d
  unsigned __int8 v95; // al
  char v96; // al
  unsigned int v97; // r15d
  void *v98; // r13
  void *v99; // r13
  _QWORD *v100; // rax
  unsigned int v101; // edx
  __int64 v102; // rcx
  int v103; // edx
  _QWORD *v104; // rcx
  char *v105; // r12
  _DWORD *v106; // r13
  unsigned __int8 v107; // bl
  unsigned __int8 v108; // al
  unsigned int v109; // r15d
  unsigned __int8 v110; // al
  char v111; // al
  unsigned int v112; // r15d
  void *v113; // r13
  void *v114; // r13
  char *v115; // r12
  _DWORD *v116; // r13
  unsigned __int8 v117; // bl
  unsigned __int8 v118; // al
  unsigned int v119; // ebp
  unsigned int v120; // r14d
  unsigned __int8 v121; // al
  char v122; // al
  unsigned int v123; // r14d
  void *v124; // rbp
  void *v125; // rbp
  __int64 *v126; // rdi
  __int64 v127; // r8
  _QWORD *v128; // rax
  __int64 v129; // rsi
  unsigned int v130; // ebp
  unsigned int v131; // ecx
  unsigned int *v132; // rdx
  char *v133; // rax
  unsigned int v134; // r8d
  char *v135; // r9
  char *v136; // rax
  unsigned int v137; // eax
  char *v138; // r8
  char *v139; // rax
  __int64 v140; // rdx
  char *v141; // rsi
  char *v142; // rdx
  unsigned int v143; // esi
  _QWORD *v144; // rax
  unsigned int v145; // [rsp+8h] [rbp-1C0h]
  int v146; // [rsp+10h] [rbp-1B8h]
  void *v147; // [rsp+10h] [rbp-1B8h]
  unsigned int v148; // [rsp+10h] [rbp-1B8h]
  int v149; // [rsp+18h] [rbp-1B0h]
  unsigned int v150; // [rsp+18h] [rbp-1B0h]
  unsigned int v151; // [rsp+18h] [rbp-1B0h]
  __int64 v152; // [rsp+20h] [rbp-1A8h]
  __int64 v153; // [rsp+20h] [rbp-1A8h]
  __int64 v154; // [rsp+20h] [rbp-1A8h]
  __int64 v155; // [rsp+20h] [rbp-1A8h]
  unsigned int v156; // [rsp+28h] [rbp-1A0h]
  __int64 v157; // [rsp+28h] [rbp-1A0h]
  unsigned int v158; // [rsp+30h] [rbp-198h]
  __int64 v159; // [rsp+30h] [rbp-198h]
  char *v160; // [rsp+30h] [rbp-198h]
  unsigned int v161; // [rsp+38h] [rbp-190h]
  unsigned int v162; // [rsp+38h] [rbp-190h]
  char *v163; // [rsp+38h] [rbp-190h]
  char *v164; // [rsp+58h] [rbp-170h]
  __int64 *v165; // [rsp+58h] [rbp-170h]
  _QWORD *v166; // [rsp+60h] [rbp-168h]
  __m128i *v167; // [rsp+68h] [rbp-160h]
  char *v168; // [rsp+68h] [rbp-160h]
  char *v169; // [rsp+70h] [rbp-158h]
  __m128i *src; // [rsp+80h] [rbp-148h]
  int v172[4]; // [rsp+90h] [rbp-138h] BYREF
  __m128i *v173; // [rsp+A0h] [rbp-128h]
  void *ptr; // [rsp+A8h] [rbp-120h]
  __int64 v175; // [rsp+B0h] [rbp-118h]
  __int64 *v176; // [rsp+B8h] [rbp-110h]
  char v177; // [rsp+CFh] [rbp-F9h] BYREF
  __int64 v178; // [rsp+D0h] [rbp-F8h] BYREF
  _QWORD *v179; // [rsp+D8h] [rbp-F0h]
  __int64 v180; // [rsp+E0h] [rbp-E8h]
  int v181[4]; // [rsp+F0h] [rbp-D8h] BYREF
  __m128i v182; // [rsp+100h] [rbp-C8h] BYREF
  __m128i v183; // [rsp+110h] [rbp-B8h] BYREF
  __m128i v184; // [rsp+120h] [rbp-A8h] BYREF
  __m128i v185; // [rsp+130h] [rbp-98h] BYREF
  __m128i v186; // [rsp+140h] [rbp-88h] BYREF
  __int64 v187; // [rsp+150h] [rbp-78h] BYREF
  __int64 v188; // [rsp+158h] [rbp-70h]
  __int64 v189; // [rsp+160h] [rbp-68h] BYREF
  __int64 v190; // [rsp+168h] [rbp-60h]
  __int64 v191; // [rsp+170h] [rbp-58h] BYREF
  __int64 v192; // [rsp+178h] [rbp-50h]
  __int64 v193; // [rsp+180h] [rbp-48h] BYREF
  __int64 v194; // [rsp+188h] [rbp-40h]

  result = sub_3D9B00(a2, *(_QWORD *)(a1 + 16));
  if ( !(_BYTE)result )
    return result;
  v8 = *(_QWORD *)(a1 + 16);
  v179 = nullptr;
  v178 = v8;
  v176 = &v178;
  sub_3D9B60(a2, &v178);
  v175 = *(_QWORD *)(a1 + 16);
  v180 = v175;
  v9 = (_OWORD *)sub_186B270(0x40u);
  ptr = v9;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v10 = v179;
  if ( !v179 || (v11 = *((unsigned int *)v179 - 1), !(_DWORD)v11) )
  {
    sub_16669D0(v181, *(_QWORD *)(a1 + 16));
    v166 = nullptr;
    src = *(__m128i **)(a3 + 8);
    if ( !src )
      goto LABEL_240;
    goto LABEL_21;
  }
  v146 = 0;
  v12 = 0;
  v13 = 8 * v11;
  v149 = 0;
  v145 = 8;
  v166 = nullptr;
  while ( 2 )
  {
    if ( (unsigned __int8)sub_422190((_DWORD *)v10[v12 / 8]) )
      goto LABEL_10;
    v18 = v179[v12 / 8];
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    if ( v166 )
    {
      v19 = *((_DWORD *)v166 - 1);
      if ( v19 == *((_DWORD *)v166 - 2) )
      {
        v20 = (3 * v19 + 1) >> 1;
        v21 = 8 * v20 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v191, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v191);
          sub_233E40((__int64)&v191);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v22 = (unsigned int *)sub_186B300(v166 - 1, v21);
        v23 = v22[1];
        *v22 = v20;
        v166 = v22 + 2;
        LODWORD(v22) = v23;
        v16 = &v166[v23];
        v15 = (_DWORD)v22 + 1;
      }
      else
      {
        v14 = v19;
        v15 = v19 + 1;
        v16 = &v166[v14];
      }
    }
    else
    {
      v75 = (_QWORD *)sub_186B270(0x18u);
      *v75 = 2;
      v166 = v75 + 1;
      v16 = v75 + 1;
      v15 = 1;
    }
    *v16 = v18;
    *((_DWORD *)v166 - 1) = v15;
    if ( *(_WORD *)(v18 + 4) )
      goto LABEL_10;
    v17 = *(_DWORD **)(*(_QWORD *)(v18 + 16) + 24LL);
    if ( !v17 )
      goto LABEL_10;
    if ( *v17 != 5 )
      goto LABEL_10;
    if ( v17[1] != 6 )
      goto LABEL_10;
    v60 = (__int64 *)(v18 + 32);
    v61 = 8LL * *(unsigned int *)(v18 + 24);
    v62 = v18 + 32 + v61;
    if ( !v61 )
      goto LABEL_10;
    do
    {
      v63 = *v60;
      if ( *(_WORD *)(*v60 + 4) )
        goto LABEL_147;
      v64 = *(_DWORD *)(v63 + 12);
      v65 = 8LL * v145;
      v66 = (char *)ptr + v65;
      v67 = 8LL * (v64 & (v145 - 1));
      v68 = (char *)ptr + v67;
      if ( v67 == v65 )
      {
        v126 = (__int64 *)ptr;
        if ( v68 != ptr )
        {
          while ( 1 )
          {
LABEL_210:
            v127 = *v126;
            if ( (unsigned __int64)*v126 > 1 )
            {
              if ( *(_DWORD *)(v127 + 12) == v64 && v63 == v127 )
                goto LABEL_147;
            }
            else if ( !v127 )
            {
LABEL_83:
              v71 = 2 * v145;
              if ( 3 * v145 >= 4 * (v149 + v146) )
                goto LABEL_84;
              goto LABEL_257;
            }
            if ( v68 == (char *)++v126 )
              goto LABEL_83;
          }
        }
        if ( 3 * v145 >= 4 * (v149 + v146) )
        {
LABEL_224:
          v73 = nullptr;
LABEL_225:
          v72 = (char *)ptr;
          if ( ptr != v68 )
          {
            do
            {
              v129 = *(_QWORD *)v72;
              if ( *(_QWORD *)v72 > 1u )
              {
                if ( *(_DWORD *)(v129 + 12) == v64 && v63 == v129 )
                  goto LABEL_285;
              }
              else
              {
                if ( !v129 )
                  goto LABEL_140;
                v73 = v72;
              }
              v72 += 8;
            }
            while ( v72 != v68 );
          }
LABEL_255:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v71 = 2 * v145;
LABEL_257:
        v159 = v62;
        v145 = v71;
        v156 = v71;
        v153 = v71;
        v147 = (void *)(8LL * v71);
        v133 = (char *)sub_186B270((size_t)v147);
        v134 = v156;
        v65 = (__int64)v147;
        v135 = v133;
        v62 = v159;
        if ( v156 )
        {
          v136 = (char *)memset(v133, 0, 8 * v153);
          v62 = v159;
          v65 = (__int64)v147;
          v134 = v156;
          v135 = v136;
        }
        v137 = v134 - 1;
        v138 = &v135[v65];
        v148 = v137;
        v139 = (char *)ptr;
        if ( v66 != ptr )
        {
          do
          {
            if ( *(_QWORD *)v139 > 1u )
            {
              v140 = 8LL * (*(_DWORD *)(*(_QWORD *)v139 + 12LL) & v148);
              v141 = &v135[v140];
              if ( v65 == v140 )
              {
LABEL_268:
                if ( v135 == v141 )
                {
LABEL_284:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v142 = v135;
                while ( *(_QWORD *)v142 )
                {
                  v142 += 8;
                  if ( v141 == v142 )
                    goto LABEL_284;
                }
              }
              else
              {
                v142 = &v135[v140];
                while ( *(_QWORD *)v142 )
                {
                  v142 += 8;
                  if ( v138 == v142 )
                    goto LABEL_268;
                }
              }
              *(_QWORD *)v142 = *(_QWORD *)v139;
            }
            v139 += 8;
          }
          while ( v66 != v139 );
        }
        if ( ptr )
        {
          v163 = &v135[v65];
          v160 = v135;
          v157 = v65;
          v154 = v62;
          sub_186B220(ptr);
          v138 = v163;
          v135 = v160;
          v65 = v157;
          v62 = v154;
        }
        v143 = v148;
        v64 = *(_DWORD *)(v63 + 12);
        v66 = v138;
        ptr = v135;
        v146 = 0;
        v67 = 8LL * (v64 & v143);
        v68 = &v135[v67];
LABEL_84:
        if ( v67 == v65 )
          goto LABEL_224;
        goto LABEL_85;
      }
      v69 = (char *)ptr + v67;
      do
      {
        v70 = *(_QWORD *)v69;
        if ( *(_QWORD *)v69 > 1u )
        {
          if ( *(_DWORD *)(v70 + 12) == v64 && v63 == v70 )
            goto LABEL_147;
        }
        else if ( !v70 )
        {
          goto LABEL_83;
        }
        v69 += 8;
      }
      while ( v66 != v69 );
      v126 = (__int64 *)ptr;
      if ( v68 != ptr )
        goto LABEL_210;
      v71 = 2 * v145;
      if ( 3 * v145 < 4 * (v146 + v149) )
        goto LABEL_257;
      if ( !v65 )
        goto LABEL_255;
LABEL_85:
      v72 = v68;
      v73 = nullptr;
      while ( 1 )
      {
        v74 = *(_QWORD *)v72;
        if ( *(_QWORD *)v72 <= 1u )
          break;
        if ( *(_DWORD *)(v74 + 12) == v64 && v63 == v74 )
        {
LABEL_285:
          *(_QWORD *)v72 = v63;
          goto LABEL_143;
        }
LABEL_88:
        v72 += 8;
        if ( v72 == v66 )
          goto LABEL_225;
      }
      if ( v74 )
      {
        v73 = v72;
        goto LABEL_88;
      }
LABEL_140:
      if ( v73 )
        --v146;
      else
        v73 = v72;
      *(_QWORD *)v73 = v63;
      ++v149;
LABEL_143:
      ++*(_DWORD *)(v63 + 8);
      v100 = *(_QWORD **)(a3 + 8);
      if ( v100 )
      {
        v101 = *((_DWORD *)v100 - 1);
        if ( v101 == *((_DWORD *)v100 - 2) )
        {
          v130 = (3 * v101 + 1) >> 1;
          v131 = 8 * v130 + 8;
          if ( 8 * v101 + 8 >= v131 || v101 >= v130 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v191, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v191);
            sub_233E40((__int64)&v191);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v152 = v62;
          v132 = (unsigned int *)sub_186B300(v100 - 1, v131);
          v100 = v132 + 2;
          v62 = v152;
          *v132 = v130;
          *(_QWORD *)(a3 + 8) = v132 + 2;
          LODWORD(v132) = v132[1];
          v104 = &v100[(unsigned int)v132];
          v103 = (_DWORD)v132 + 1;
        }
        else
        {
          v102 = v101;
          v103 = v101 + 1;
          v104 = &v100[v102];
        }
      }
      else
      {
        v155 = v62;
        v144 = (_QWORD *)sub_186B270(0x18u);
        *v144 = 2;
        v100 = v144 + 1;
        v62 = v155;
        v104 = v100;
        *(_QWORD *)(a3 + 8) = v100;
        v103 = 1;
      }
      *v104 = v63;
      *((_DWORD *)v100 - 1) = v103;
LABEL_147:
      ++v60;
    }
    while ( (__int64 *)v62 != v60 );
LABEL_10:
    v12 += 8LL;
    if ( v12 != v13 )
    {
      v10 = v179;
      continue;
    }
    break;
  }
  sub_16669D0(v181, *(_QWORD *)(a1 + 16));
  result = *(_QWORD *)(a3 + 8);
  src = (__m128i *)result;
  if ( !result )
    goto LABEL_43;
LABEL_21:
  result = (__int64)src;
  si128 = _mm_load_si128((const __m128i *)v181);
  v25 = src[-1].m128i_u32[3];
  *(__m128i *)v172 = si128;
  v26 = v25;
  v173 = (__m128i *)((char *)src + v26 * 8);
  if ( &src->m128i_i8[v26 * 8] == (__int8 *)src )
    goto LABEL_43;
  _BitScanReverse64(&v27, (v26 * 8) >> 3);
  sub_483780(src, (__int64)&src->m128i_i64[v26], 2LL * (int)v27, si128.m128i_i64[0], *(__int64 *)&v172[2]);
  result = (__int64)src;
  v164 = &src->m128i_i8[8];
  if ( (unsigned __int64)v26 <= 16 )
  {
    v185 = _mm_load_si128((const __m128i *)v172);
    if ( v26 == 1 )
      goto LABEL_43;
    while ( 2 )
    {
      v28 = (_DWORD *)src->m128i_i64[0];
      v29 = *(_DWORD **)v164;
      v187 = 0;
      v188 = 0;
      v189 = 1;
      v190 = 0;
      v191 = 0;
      v192 = 0;
      v193 = 1;
      v194 = 0;
      v30 = sub_1666AE0(&v185, v29, &v187, &v183);
      v31 = sub_1666AE0(&v185, v28, &v191, &v182);
      if ( (v31 & v30) == 0 )
      {
        if ( v30 != v31 )
          goto LABEL_192;
        v32 = v29[6];
        if ( v32 )
        {
          v33 = 0;
          do
          {
            v34 = sub_1666AE0(&v185, *(_QWORD *)&v29[2 * v33++ + 8], &v187, &v184);
            v30 = v34;
            v35 = (v33 < v32) & (v34 ^ 1);
          }
          while ( v35 );
          v36 = v28[6];
          if ( v36 )
            goto LABEL_30;
LABEL_215:
          if ( v35 == v30 )
          {
LABEL_216:
            v30 = *v29 < *v28;
            v38 = qword_1C7F2C0;
            goto LABEL_38;
          }
LABEL_192:
          v38 = qword_1C7F2C0;
          goto LABEL_38;
        }
        v36 = v28[6];
        v30 = 0;
        if ( !v36 )
          goto LABEL_216;
LABEL_30:
        v37 = 0;
        do
          v35 = sub_1666AE0(&v185, *(_QWORD *)&v28[2 * v37++ + 8], &v191, &v186);
        while ( v35 != 1 && v37 < v36 );
        if ( !v30 || !v35 )
          goto LABEL_215;
      }
      v38 = qword_1C7F2C0;
      if ( (v189 & 0x100000000LL) != 0 || (_DWORD)v189 != 1 || (v193 & 0x100000000LL) != 0 || (_DWORD)v193 != 1 )
      {
        v30 = sub_1848D40(qword_1C7F2C0, &v187, &v191);
        v38 = qword_1C7F2C0;
      }
      else if ( (v187 & 0x100000000LL) != 0 || (v191 & 0x100000000LL) != 0 )
      {
        v30 = (int)sub_182C7B0(qword_1C7F2C0, &v187, &v191) < 0;
        v38 = qword_1C7F2C0;
      }
      else
      {
        v30 = (int)v187 < (int)v191;
      }
LABEL_38:
      sub_182CBA0(v38, &v191);
      sub_182CBA0(v38, &v193);
      v39 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v187);
      sub_182CBA0(v39, &v189);
      v40 = *(_DWORD **)v164;
      if ( v30 )
      {
        if ( v164 - (char *)src <= 8 )
        {
          if ( v164 - (char *)src == 8 )
            *(_QWORD *)v164 = src->m128i_i64[0];
        }
        else
        {
          memmove(&src->m128i_u64[1], src, v164 - (char *)src);
        }
        src->m128i_i64[0] = (__int64)v40;
LABEL_42:
        v164 += 8;
        result = (__int64)v164;
        if ( v173 == (__m128i *)v164 )
          goto LABEL_43;
        continue;
      }
      break;
    }
    v115 = v164;
    v186 = _mm_load_si128(&v185);
    while ( 2 )
    {
      v168 = v115;
      v116 = *((_DWORD **)v115 - 1);
      v187 = 0;
      v188 = 0;
      v189 = 1;
      v190 = 0;
      v191 = 0;
      v192 = 0;
      v193 = 1;
      v194 = 0;
      v117 = sub_1666AE0(&v186, v40, &v187, &v182);
      v118 = sub_1666AE0(&v186, v116, &v191, &v177);
      if ( (v118 & v117) == 0 )
      {
        if ( v117 != v118 )
          goto LABEL_188;
        v119 = v40[6];
        if ( v119 )
        {
          v120 = 0;
          do
          {
            v121 = sub_1666AE0(&v186, *(_QWORD *)&v40[2 * v120++ + 8], &v187, &v183);
            v117 = v121;
            v122 = (v120 < v119) & (v121 ^ 1);
          }
          while ( v122 );
          v162 = v116[6];
          if ( v162 )
            goto LABEL_178;
LABEL_189:
          if ( v117 == v122 )
          {
LABEL_190:
            v117 = *v40 < *v116;
            v124 = qword_1C7F2C0;
            goto LABEL_186;
          }
LABEL_188:
          v124 = qword_1C7F2C0;
LABEL_186:
          v115 -= 8;
          sub_182CBA0(v124, &v191);
          sub_182CBA0(v124, &v193);
          v125 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v187);
          sub_182CBA0(v125, &v189);
          if ( !v117 )
          {
            *(_QWORD *)v168 = v40;
            goto LABEL_42;
          }
          *((_QWORD *)v115 + 1) = *(_QWORD *)v115;
          continue;
        }
        v117 = 0;
        v162 = v116[6];
        if ( !v162 )
          goto LABEL_190;
LABEL_178:
        v123 = 0;
        do
          v122 = sub_1666AE0(&v186, *(_QWORD *)&v116[2 * v123++ + 8], &v191, &v184);
        while ( v122 != 1 && v123 < v162 );
        if ( !v117 || !v122 )
          goto LABEL_189;
      }
      break;
    }
    v124 = qword_1C7F2C0;
    if ( (v189 & 0x100000000LL) != 0 || (_DWORD)v189 != 1 || (v193 & 0x100000000LL) != 0 || (_DWORD)v193 != 1 )
    {
      v117 = sub_1848D40(qword_1C7F2C0, &v187, &v191);
      v124 = qword_1C7F2C0;
    }
    else if ( (v187 & 0x100000000LL) != 0 || (v191 & 0x100000000LL) != 0 )
    {
      v117 = (int)sub_182C7B0(qword_1C7F2C0, &v187, &v191) < 0;
      v124 = qword_1C7F2C0;
    }
    else
    {
      v117 = (int)v187 < (int)v191;
    }
    goto LABEL_186;
  }
  v167 = src + 8;
  v182 = _mm_load_si128((const __m128i *)v172);
  while ( 2 )
  {
    v76 = (_DWORD *)src->m128i_i64[0];
    v77 = *(_DWORD **)v164;
    v187 = 0;
    v188 = 0;
    v189 = 1;
    v190 = 0;
    v191 = 0;
    v192 = 0;
    v193 = 1;
    v194 = 0;
    v78 = sub_1666AE0(&v182, v77, &v187, &v184);
    v79 = sub_1666AE0(&v182, v76, &v191, &v183);
    if ( (v79 & v78) == 0 )
    {
      if ( v78 != v79 )
        goto LABEL_170;
      v80 = v77[6];
      if ( v80 )
      {
        v81 = 0;
        do
        {
          v82 = sub_1666AE0(&v182, *(_QWORD *)&v77[2 * v81++ + 8], &v187, &v185);
          v78 = v82;
          v83 = (v81 < v80) & (v82 ^ 1);
        }
        while ( v83 );
        v84 = v76[6];
        if ( v84 )
          goto LABEL_100;
LABEL_213:
        if ( v83 == v78 )
        {
LABEL_214:
          v78 = *v77 < *v76;
          v86 = qword_1C7F2C0;
          goto LABEL_108;
        }
LABEL_170:
        v86 = qword_1C7F2C0;
        goto LABEL_108;
      }
      v84 = v76[6];
      v78 = 0;
      if ( !v84 )
        goto LABEL_214;
LABEL_100:
      v85 = 0;
      while ( 1 )
      {
        v83 = sub_1666AE0(&v182, *(_QWORD *)&v76[2 * v85++ + 8], &v191, &v186);
        if ( v83 == 1 )
          break;
        if ( v85 >= v84 )
        {
          if ( !v83 )
            goto LABEL_213;
          break;
        }
      }
      if ( !v78 )
        goto LABEL_213;
    }
    v86 = qword_1C7F2C0;
    if ( (v189 & 0x100000000LL) != 0 || (_DWORD)v189 != 1 || (v193 & 0x100000000LL) != 0 || (_DWORD)v193 != 1 )
    {
      v78 = sub_1848D40(qword_1C7F2C0, &v187, &v191);
      v86 = qword_1C7F2C0;
    }
    else if ( (v187 & 0x100000000LL) != 0 || (v191 & 0x100000000LL) != 0 )
    {
      v78 = (int)sub_182C7B0(qword_1C7F2C0, &v187, &v191) < 0;
      v86 = qword_1C7F2C0;
    }
    else
    {
      v78 = (int)v187 < (int)v191;
    }
LABEL_108:
    sub_182CBA0(v86, &v191);
    sub_182CBA0(v86, &v193);
    v87 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v187);
    sub_182CBA0(v87, &v189);
    v88 = *(_DWORD **)v164;
    if ( !v78 )
    {
      v105 = v164;
      v183 = _mm_load_si128(&v182);
      while ( 1 )
      {
        v106 = *((_DWORD **)v105 - 1);
        v169 = v105;
        v187 = 0;
        v188 = 0;
        v189 = 1;
        v190 = 0;
        v191 = 0;
        v192 = 0;
        v193 = 1;
        v194 = 0;
        v107 = sub_1666AE0(&v183, v88, &v187, &v184);
        v108 = sub_1666AE0(&v183, v106, &v191, &v177);
        if ( (v108 & v107) == 0 )
        {
          if ( v107 != v108 )
            goto LABEL_166;
          v161 = v88[6];
          if ( v161 )
          {
            v109 = 0;
            do
            {
              v110 = sub_1666AE0(&v183, *(_QWORD *)&v88[2 * v109++ + 8], &v187, &v185);
              v107 = v110;
              v111 = (v109 < v161) & (v110 ^ 1);
            }
            while ( v111 );
            v151 = v106[6];
            if ( !v151 )
              goto LABEL_167;
          }
          else
          {
            v107 = 0;
            v151 = v106[6];
            if ( !v151 )
              goto LABEL_168;
          }
          v112 = 0;
          while ( 1 )
          {
            v111 = sub_1666AE0(&v183, *(_QWORD *)&v106[2 * v112++ + 8], &v191, &v186);
            if ( v111 == 1 )
              break;
            if ( v112 >= v151 )
            {
              if ( !v111 )
                goto LABEL_167;
              break;
            }
          }
          if ( !v107 )
          {
LABEL_167:
            if ( v107 != v111 )
            {
LABEL_166:
              v113 = qword_1C7F2C0;
              goto LABEL_164;
            }
LABEL_168:
            v107 = *v88 < *v106;
            v113 = qword_1C7F2C0;
            goto LABEL_164;
          }
        }
        v113 = qword_1C7F2C0;
        if ( (v189 & 0x100000000LL) != 0 || (_DWORD)v189 != 1 || (v193 & 0x100000000LL) != 0 || (_DWORD)v193 != 1 )
        {
          v107 = sub_1848D40(qword_1C7F2C0, &v187, &v191);
          v113 = qword_1C7F2C0;
        }
        else if ( (v187 & 0x100000000LL) != 0 || (v191 & 0x100000000LL) != 0 )
        {
          v107 = (int)sub_182C7B0(qword_1C7F2C0, &v187, &v191) < 0;
          v113 = qword_1C7F2C0;
        }
        else
        {
          v107 = (int)v187 < (int)v191;
        }
LABEL_164:
        v105 -= 8;
        sub_182CBA0(v113, &v191);
        sub_182CBA0(v113, &v193);
        v114 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v187);
        sub_182CBA0(v114, &v189);
        if ( !v107 )
        {
          *(_QWORD *)v169 = v88;
          goto LABEL_112;
        }
        *((_QWORD *)v105 + 1) = *(_QWORD *)v105;
      }
    }
    if ( v164 - (char *)src <= 8 )
    {
      if ( v164 - (char *)src == 8 )
        *(_QWORD *)v164 = src->m128i_i64[0];
    }
    else
    {
      memmove(&src->m128i_u64[1], src, v164 - (char *)src);
    }
    src->m128i_i64[0] = (__int64)v88;
LABEL_112:
    v164 += 8;
    if ( v167 != (__m128i *)v164 )
      continue;
    break;
  }
  while ( 2 )
  {
    v89 = (__int64 *)v167;
    v90 = (_DWORD *)v167->m128i_i64[0];
    v184 = _mm_load_si128((const __m128i *)v172);
    while ( 2 )
    {
      v91 = (_DWORD *)*(v89 - 1);
      v165 = v89;
      v187 = 0;
      v188 = 0;
      v189 = 1;
      v190 = 0;
      v191 = 0;
      v192 = 0;
      v193 = 1;
      v194 = 0;
      v92 = sub_1666AE0(&v184, v90, &v187, &v183);
      v93 = sub_1666AE0(&v184, v91, &v191, &v182);
      if ( (v93 & v92) == 0 )
      {
        if ( v92 != v93 )
          goto LABEL_130;
        v158 = v90[6];
        if ( v158 )
        {
          v94 = 0;
          do
          {
            v95 = sub_1666AE0(&v184, *(_QWORD *)&v90[2 * v94++ + 8], &v187, &v185);
            v92 = v95;
            v96 = (v94 < v158) & (v95 ^ 1);
          }
          while ( v96 );
          v150 = v91[6];
          if ( v150 )
            goto LABEL_120;
LABEL_131:
          if ( v96 == v92 )
          {
LABEL_132:
            v92 = *v90 < *v91;
            v98 = qword_1C7F2C0;
            goto LABEL_128;
          }
LABEL_130:
          v98 = qword_1C7F2C0;
          goto LABEL_128;
        }
        v92 = 0;
        v150 = v91[6];
        if ( !v150 )
          goto LABEL_132;
LABEL_120:
        v97 = 0;
        do
          v96 = sub_1666AE0(&v184, *(_QWORD *)&v91[2 * v97++ + 8], &v191, &v186);
        while ( v96 != 1 && v97 < v150 );
        if ( !v92 || !v96 )
          goto LABEL_131;
      }
      v98 = qword_1C7F2C0;
      if ( (v189 & 0x100000000LL) != 0 || (_DWORD)v189 != 1 || (v193 & 0x100000000LL) != 0 || (_DWORD)v193 != 1 )
      {
        v92 = sub_1848D40(qword_1C7F2C0, &v187, &v191);
        v98 = qword_1C7F2C0;
      }
      else if ( (v187 & 0x100000000LL) != 0 || (v191 & 0x100000000LL) != 0 )
      {
        v92 = (int)sub_182C7B0(qword_1C7F2C0, &v187, &v191) < 0;
        v98 = qword_1C7F2C0;
      }
      else
      {
        v92 = (int)v187 < (int)v191;
      }
LABEL_128:
      --v89;
      sub_182CBA0(v98, &v191);
      sub_182CBA0(v98, &v193);
      v99 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v187);
      sub_182CBA0(v99, &v189);
      if ( v92 )
      {
        v89[1] = *v89;
        continue;
      }
      break;
    }
    v167 = (__m128i *)((char *)v167 + 8);
    *v165 = (__int64)v90;
    result = (__int64)v167;
    if ( v173 != v167 )
      continue;
    break;
  }
LABEL_43:
  v41 = 0;
  if ( !v166 )
  {
    if ( !ptr )
      goto LABEL_64;
LABEL_240:
    result = sub_186B220(ptr);
    goto LABEL_64;
  }
  while ( 1 )
  {
    v45 = *((unsigned int *)v166 - 1);
    if ( v41 >= (unsigned int)v45 )
      break;
    v46 = v166[v41];
    if ( v46 )
      ++*(_DWORD *)(v46 + 8);
    v47 = *(_QWORD **)(a3 + 8);
    if ( v47 )
    {
      v48 = *((_DWORD *)v47 - 1);
      if ( v48 == *((_DWORD *)v47 - 2) )
      {
        v49 = (3 * v48 + 1) >> 1;
        v50 = 8 * v49 + 8;
        if ( 8 * v48 + 8 >= (unsigned int)v50 || v48 >= v49 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v191, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, &v191);
          sub_233E40((__int64)&v191);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v51 = (unsigned int *)sub_186B300(v47 - 1, v50);
        v47 = v51 + 2;
        *v51 = v49;
        *(_QWORD *)(a3 + 8) = v51 + 2;
        LODWORD(v51) = v51[1];
        v44 = &v47[(unsigned int)v51];
        v43 = (_DWORD)v51 + 1;
      }
      else
      {
        v42 = v48;
        v43 = v48 + 1;
        v44 = &v47[v42];
      }
    }
    else
    {
      v128 = (_QWORD *)sub_186B270(0x18u);
      *v128 = 2;
      v47 = v128 + 1;
      *(_QWORD *)(a3 + 8) = v128 + 1;
      v44 = v128 + 1;
      v43 = 1;
    }
    *v44 = v46;
    ++v41;
    *((_DWORD *)v47 - 1) = v43;
  }
  if ( ptr )
  {
    sub_186B220(ptr);
    v45 = *((unsigned int *)v166 - 1);
  }
  v52 = v166;
  v53 = v175;
  v54 = (unsigned __int64)&v166[v45];
  if ( (unsigned __int64)v166 < v54 )
  {
    do
    {
      while ( 1 )
      {
        v55 = *v52;
        if ( *v52 )
        {
          v56 = (*(_DWORD *)(v55 + 8))-- == 1;
          if ( v56 )
            break;
        }
        if ( (unsigned __int64)++v52 >= v54 )
          goto LABEL_63;
      }
      ++v52;
      sub_15D7BC0(v53, v55);
    }
    while ( (unsigned __int64)v52 < v54 );
  }
LABEL_63:
  result = sub_186B220(v166 - 1);
LABEL_64:
  v57 = v179;
  if ( v179 )
  {
    result = *((unsigned int *)v179 - 1);
    v58 = (unsigned __int64)&v179[result];
    if ( (unsigned __int64)v179 >= v58 )
      return sub_186B220(v57 - 1);
    do
    {
      while ( 1 )
      {
        v59 = *v57;
        if ( *v57 )
        {
          v56 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v56 )
            break;
        }
        if ( (unsigned __int64)++v57 >= v58 )
          goto LABEL_71;
      }
      result = sub_15D7BC0(v178, v59);
      ++v57;
    }
    while ( (unsigned __int64)v57 < v58 );
LABEL_71:
    v57 = v179;
    if ( v179 )
      return sub_186B220(v57 - 1);
  }
  return result;
}

