__int64 __fastcall sub_2285F10(__int64 a1, __int64 *a2, unsigned __int64 a3, __m128 *a4, char a5)
{
  bool v5; // zf
  __int64 v6; // rax
  signed __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rsi
  _BYTE *v11; // r14
  int v12; // eax
  unsigned __int64 v13; // rax
  char *v14; // rax
  _BYTE *v15; // rbx
  char *v16; // r13
  char v17; // r12
  char v18; // r14
  _BYTE *v19; // r12
  signed __int64 v20; // rdx
  char v21; // cl
  char *v22; // rdi
  int v23; // r14d
  __int64 *v24; // r13
  char *v25; // r12
  __int64 v26; // r15
  int v27; // ebx
  void *v28; // rax
  int v29; // r11d
  int v30; // ebp
  __int64 v31; // r8
  int v32; // r15d
  __int64 v33; // rax
  const unsigned __int16 *v34; // rax
  __int16 v35; // cx
  __int64 v36; // rdx
  int v37; // r9d
  unsigned __int64 v39; // rax
  __int64 *v40; // rsi
  char *v41; // rcx
  char v42; // bp
  _BYTE *v43; // r14
  char v44; // r12
  char *v45; // rbp
  signed __int64 v46; // rdx
  __int64 *v47; // rbx
  char *v48; // rax
  void *v49; // rbx
  __int64 *v50; // rax
  void *v51; // r8
  int v52; // ebp
  __int64 v53; // rax
  char *v54; // r12
  char *v55; // rax
  int v56; // r12d
  char *i; // rbp
  int v58; // ebx
  size_t v59; // rdx
  int v60; // eax
  __int64 *v61; // rcx
  _BYTE *v62; // rax
  int v63; // r11d
  int v64; // r13d
  __int64 v65; // r8
  int v66; // ebp
  const unsigned __int16 *v67; // rax
  __int16 v68; // dx
  __int64 v69; // rcx
  int v70; // r9d
  char *v71; // rax
  __int16 v72; // cx
  unsigned __int8 *j; // rbp
  unsigned __int8 *v74; // rsi
  unsigned __int8 *v75; // rbx
  unsigned __int8 *v76; // rax
  unsigned __int8 *v77; // r12
  __int64 v78; // rbp
  char *v79; // rax
  char *v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int8 *v83; // rbx
  unsigned __int8 *v84; // rax
  char *v85; // rsi
  unsigned __int64 v86; // rcx
  __m128 *v87; // rdi
  unsigned __int8 *v88; // r12
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rcx
  __int64 v91; // rdx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rsi
  unsigned __int64 v94; // rdx
  __m128 *v95; // rax
  unsigned __int64 v96; // rcx
  void *v97; // rdi
  __int16 v98; // dx
  unsigned __int8 *v99; // rsi
  unsigned __int8 *v100; // rax
  unsigned __int8 *v101; // rbx
  char *v102; // r12
  __int64 v103; // rbp
  char *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 *v107; // rsi
  unsigned __int8 *v108; // rax
  unsigned __int64 v109; // rcx
  __m128 *v110; // rsi
  unsigned __int8 *v111; // rbx
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rcx
  __int64 v114; // rdx
  unsigned __int64 v115; // rax
  unsigned __int64 v116; // rsi
  unsigned __int64 v117; // rdx
  __m128 *v118; // rax
  unsigned __int64 v119; // rcx
  __m128 *v120; // rdi
  _BYTE *v121; // rbx
  size_t v122; // rax
  size_t v123; // rax
  char *v124; // rdi
  void *s1; // [rsp+0h] [rbp-138h] BYREF
  __int64 v126; // [rsp+8h] [rbp-130h]
  unsigned __int64 v127; // [rsp+10h] [rbp-128h]
  _BYTE *v128; // [rsp+18h] [rbp-120h]
  void *dest; // [rsp+20h] [rbp-118h]
  __int64 *v130; // [rsp+28h] [rbp-110h]
  __int64 *v131; // [rsp+30h] [rbp-108h]
  void *v132; // [rsp+38h] [rbp-100h]
  void *v133; // [rsp+40h] [rbp-F8h]
  unsigned int v134; // [rsp+4Ch] [rbp-ECh]
  __int64 *v135; // [rsp+50h] [rbp-E8h]
  __int64 v136; // [rsp+58h] [rbp-E0h]
  int v137; // [rsp+60h] [rbp-D8h]
  int v138; // [rsp+64h] [rbp-D4h]
  int v139; // [rsp+68h] [rbp-D0h]
  int v140; // [rsp+6Ch] [rbp-CCh]
  char *v141; // [rsp+70h] [rbp-C8h]
  __m128 *v142; // [rsp+78h] [rbp-C0h]
  __int64 v143; // [rsp+80h] [rbp-B8h]
  __int64 v144; // [rsp+88h] [rbp-B0h]
  __int64 *v145; // [rsp+90h] [rbp-A8h] BYREF
  int v146; // [rsp+98h] [rbp-A0h]
  void *ptr; // [rsp+A0h] [rbp-98h]
  __int64 *v148; // [rsp+A8h] [rbp-90h]
  unsigned __int8 *v149; // [rsp+B0h] [rbp-88h]
  __int64 *v150; // [rsp+B8h] [rbp-80h]
  unsigned __int8 *v151; // [rsp+C0h] [rbp-78h]
  void *v152; // [rsp+C8h] [rbp-70h]
  __int64 v153; // [rsp+D0h] [rbp-68h]
  void *v154[2]; // [rsp+D8h] [rbp-60h]
  __int128 v155; // [rsp+E8h] [rbp-50h]
  char *v156; // [rsp+F8h] [rbp-40h]

  v5 = *(_DWORD *)a1 == 62053;
  v127 = a3;
  v142 = a4;
  v134 = 2;
  if ( !v5 )
    return v134;
  v6 = *(_QWORD *)(a1 + 24);
  v5 = *(_DWORD *)v6 == 53829;
  v126 = v6;
  if ( !v5 )
    return v134;
  LODWORD(s1) = *(_DWORD *)(v6 + 72);
  v134 = (unsigned __int8)s1 & 4;
  if ( ((unsigned __int8)s1 & 4) != 0 )
    return 2;
  v8 = *(_QWORD *)(v6 + 48);
  v9 = *(_QWORD *)(v6 + 64);
  v137 = a5 & 7;
  v10 = *(_QWORD *)(v6 + 56);
  v11 = (_BYTE *)(v10 + 1);
  s1 = (void *)__PAIR64__(HIDWORD(v10), *(_DWORD *)(v6 + 40));
  v12 = (unsigned __int8)s1 & 4;
  if ( v8 > 64 )
  {
    v5 = v12 == 0;
    v39 = 0;
    if ( v5 )
      v39 = v127;
    v127 = v39;
    if ( (a5 & 4) != 0 )
    {
      s1 = (char *)a2 + a4->m128_u64[0];
      v130 = (__int64 *)((char *)a2 + a4->m128_u64[1]);
      v40 = v130;
    }
    else
    {
      s1 = a2;
      v123 = strlen((const char *)a2);
      a2 = (__int64 *)s1;
      v130 = (__int64 *)((char *)s1 + v123);
      v40 = (__int64 *)((char *)s1 + v123);
    }
    if ( s1 > v40 )
      return 16;
    v41 = *(char **)(v126 + 96);
    if ( v41 )
    {
      if ( s1 >= v40 )
      {
        v47 = (__int64 *)s1;
      }
      else
      {
        v42 = *v41;
        v128 = (_BYTE *)v8;
        dest = v11;
        v43 = s1;
        v44 = v42;
        v131 = a2;
        v45 = v41;
        while ( 1 )
        {
          if ( *v43 == v44 )
          {
            v46 = *(int *)(v126 + 104);
            if ( (char *)v40 - v43 >= v46 && !memcmp(v43, v45, v46) )
              break;
          }
          if ( v40 == (__int64 *)++v43 )
            return 1;
        }
        v47 = (__int64 *)v43;
        v8 = (signed __int64)v128;
        v11 = dest;
        a2 = v131;
      }
      if ( v130 == v47 )
        return 1;
    }
    ptr = nullptr;
    v152 = nullptr;
    v146 = v137;
    v145 = (__int64 *)v126;
    v149 = (unsigned __int8 *)s1;
    v148 = a2;
    v150 = v130;
    v48 = (char *)malloc(4 * v8);
    v49 = v48;
    v154[0] = v48;
    if ( !v48 )
      return 12;
    v154[1] = v48;
    dest = &v48[v8];
    *(_QWORD *)&v155 = &v48[v8];
    v133 = &v48[v8 + v8];
    *((_QWORD *)&v155 + 1) = v133;
    v153 = 4;
    v156 = (char *)v133 + v8;
    memset((char *)v133 + v8, 0, v8);
    v50 = (__int64 *)v126;
    v51 = v49;
    v131 = (__int64 *)&v145;
    v52 = 128;
LABEL_63:
    v53 = (__int64)memset(v51, 0, v50[6]);
    v11[v53] = 1;
    v54 = (char *)sub_2284030(v145 + 1, v145 + 3, (__int64)v11, v9, v53, 132, v53);
    memmove(dest, v54, v145[6]);
    v55 = v54;
    v128 = nullptr;
    v56 = v52;
    for ( i = v55; ; i = (char *)sub_2284030(v145 + 1, v145 + 3, (__int64)v11, v9, (__int64)v133, v58, (__int64)i) )
    {
      v58 = 128;
      if ( v150 != s1 )
        v58 = *(char *)s1;
      v59 = v145[6];
      v132 = v145;
      v60 = memcmp(i, dest, v59);
      v61 = (__int64 *)v132;
      v5 = v60 == 0;
      v62 = v128;
      if ( v5 )
        v62 = s1;
      v128 = v62;
      if ( v56 == 10 )
        break;
      v63 = 0;
      v64 = 0;
      if ( v56 == 128 && (v146 & 1) == 0 )
        goto LABEL_235;
LABEL_70:
      if ( v58 == 10 )
      {
        if ( (*((_BYTE *)v132 + 40) & 8) == 0 )
          goto LABEL_72;
        v63 += *((_DWORD *)v132 + 20);
        if ( v64 != 129 )
          goto LABEL_171;
      }
      else
      {
        if ( v58 != 128 || (v146 & 2) != 0 )
        {
LABEL_72:
          if ( v63 > 0 )
          {
LABEL_73:
            v65 = (__int64)i;
            v66 = v63;
            while ( 1 )
            {
              v65 = sub_2284030(v61 + 1, v61 + 3, (__int64)v11, v9, v65, v64, v65);
              if ( !--v66 )
                break;
              v61 = v145;
            }
            i = (char *)v65;
          }
          if ( v64 == 129 )
          {
            if ( v58 != 128 )
            {
              v67 = *__ctype_b_loc();
              v68 = v67[(unsigned __int8)v58] & 8;
              if ( v68 || v58 == 95 )
              {
                v69 = (unsigned __int8)v56;
                if ( v56 != 128 )
                {
LABEL_82:
                  if ( ((v67[v69] & 8) != 0 || v56 == 95) && v58 != 95 && !v68 )
                  {
LABEL_225:
                    v70 = 134;
                    goto LABEL_85;
                  }
                }
LABEL_84:
                v70 = 133;
LABEL_85:
                i = (char *)sub_2284030(v145 + 1, v145 + 3, (__int64)v11, v9, (__int64)i, v70, (__int64)i);
LABEL_86:
                v71 = &i[v9];
                if ( i[v9] )
                  goto LABEL_188;
                goto LABEL_87;
              }
            }
            goto LABEL_178;
          }
          goto LABEL_172;
        }
        v63 += *((_DWORD *)v132 + 20);
        if ( v64 != 129 )
          goto LABEL_171;
      }
      v64 = 131;
      if ( v63 > 0 )
        goto LABEL_73;
LABEL_172:
      if ( v56 == 128 )
        goto LABEL_86;
LABEL_173:
      v67 = *__ctype_b_loc();
      v69 = (unsigned __int8)v56;
      v98 = v67[(unsigned __int8)v56] & 8;
      if ( !v98 && v56 != 95 )
      {
        if ( v58 == 128 )
          goto LABEL_86;
        v68 = v67[(unsigned __int8)v58] & 8;
        if ( v68 || v58 == 95 )
          goto LABEL_82;
LABEL_178:
        if ( v56 == 128 )
          goto LABEL_86;
        v67 = *__ctype_b_loc();
        v98 = v67[(unsigned __int8)v56] & 8;
      }
      if ( v56 != 95 && !v98 )
        goto LABEL_86;
      if ( v64 == 130 )
        goto LABEL_225;
      if ( v58 == 128 )
        goto LABEL_86;
      if ( (v67[(unsigned __int8)v58] & 8) == 0 && v58 != 95 )
        goto LABEL_225;
      if ( (unsigned int)(v64 - 133) <= 1 )
        goto LABEL_84;
      v71 = &i[v9];
      if ( i[v9] )
      {
LABEL_188:
        v99 = v128;
        v151 = v128;
        if ( !*v71 || s1 == (void *)-1LL )
        {
          free(ptr);
          free(v152);
          free(v154[0]);
          return 1;
        }
        if ( !v127 && !*(_DWORD *)(v126 + 120) )
        {
          v124 = (char *)ptr;
          goto LABEL_219;
        }
        while ( 1 )
        {
          v100 = sub_2284450(v131, v99, v130, (__int64)v11, v9);
          if ( v100 )
            break;
          v99 = ++v151;
        }
        v101 = v100;
        if ( v127 == 1 && !*(_DWORD *)(v126 + 120) )
        {
          v120 = v142;
          v121 = (_BYTE *)(v100 - (unsigned __int8 *)v148);
          v142->m128_u64[0] = v151 - (unsigned __int8 *)v148;
          v120->m128_u64[1] = (unsigned __int64)v121;
          v124 = (char *)ptr;
          goto LABEL_219;
        }
        v102 = (char *)ptr;
        v103 = v145[14];
        if ( !ptr )
        {
          v102 = (char *)malloc(16 * (v103 + 1));
          ptr = v102;
          if ( !v102 )
          {
LABEL_245:
            free(v154[0]);
            return 12;
          }
        }
        v104 = v102;
        if ( v103 )
        {
          do
          {
            v104 += 16;
            *(_OWORD *)v104 = -1;
          }
          while ( &v102[16 * v103] != v104 );
        }
        if ( *(_DWORD *)(v126 + 120) | v146 & 0x400 )
        {
          v105 = *(_QWORD *)(v126 + 128);
          if ( v105 > 0 && !v152 )
          {
            v152 = malloc(8 * v105 + 8);
            if ( !v152 )
            {
              free(v102);
              goto LABEL_245;
            }
          }
          v106 = sub_2283440(v131, v151, v101, (__int64)v11, v9, 0, 0);
        }
        else
        {
          v106 = (__int64)sub_22849B0(v131, v151, v101, (__int64)v11, v9);
        }
        if ( !v106 )
        {
          while ( 1 )
          {
            v107 = (__int64 *)v151;
            if ( v151 >= v101 )
              goto LABEL_237;
            v108 = sub_2284450(v131, v151, v101 - 1, (__int64)v11, v9);
            v101 = v108;
            if ( !v108 )
              break;
            if ( sub_2283440(v131, v151, v108, (__int64)v11, v9, 0, 0) )
              goto LABEL_207;
          }
          v107 = (__int64 *)v151;
LABEL_237:
          if ( v130 != v107 )
          {
            v52 = 128;
            v51 = v154[1];
            s1 = (char *)v107 + 1;
            v133 = *((void **)&v155 + 1);
            dest = (void *)v155;
            if ( (unsigned __int8 *)((char *)v107 + 1) != v149 )
              v52 = *(char *)v107;
            v50 = v145;
            goto LABEL_63;
          }
        }
LABEL_207:
        v109 = v127;
        v124 = (char *)ptr;
        if ( v127
          && (v110 = v142,
              v111 = (unsigned __int8 *)(v101 - (unsigned __int8 *)v148),
              v142->m128_u64[0] = v151 - (unsigned __int8 *)v148,
              v110->m128_u64[1] = (unsigned __int64)v111,
              v109 > 1) )
        {
          v112 = v145[14];
          if ( !v112 )
          {
            v115 = 1;
            goto LABEL_215;
          }
          v113 = v109 - 1;
          v114 = 1;
          if ( v113 > v112 )
            v113 = v145[14];
          v115 = 1;
          do
          {
            ++v115;
            v110[v114] = (__m128)_mm_loadu_si128((const __m128i *)&v124[v114 * 16]);
            ++v114;
          }
          while ( v115 <= v113 );
          if ( v127 > v115 )
          {
LABEL_215:
            v116 = v127 - v115;
            if ( v127 < v115 + 1 )
              v116 = 1;
            v117 = 0;
            v118 = &v142[v115];
            do
            {
              v119 = v117++;
              v118[v119] = (__m128)-1LL;
            }
            while ( v116 > v117 );
            goto LABEL_219;
          }
LABEL_256:
          free(v124);
        }
        else
        {
LABEL_219:
          if ( v124 )
            goto LABEL_256;
        }
        if ( v152 )
          free(v152);
        v97 = v154[0];
        goto LABEL_137;
      }
LABEL_87:
      if ( v130 == s1 )
        goto LABEL_188;
      memmove(v133, i, v145[6]);
      memmove(i, dest, v145[6]);
      v56 = v58;
      s1 = (char *)s1 + 1;
    }
    v64 = *((_DWORD *)v132 + 10) & 8;
    if ( !v64 )
    {
      if ( v58 != 128 || (v146 & 2) != 0 )
        goto LABEL_173;
      v63 = *((_DWORD *)v132 + 20);
LABEL_171:
      v64 = 130;
      if ( v63 > 0 )
        goto LABEL_73;
      goto LABEL_172;
    }
LABEL_235:
    v63 = *((_DWORD *)v132 + 19);
    v64 = 129;
    goto LABEL_70;
  }
  v5 = v12 == 0;
  v13 = 0;
  if ( v5 )
    v13 = a3;
  v127 = v13;
  if ( (a5 & 4) != 0 )
  {
    s1 = (char *)a2 + a4->m128_u64[0];
    v14 = (char *)a2 + a4->m128_u64[1];
  }
  else
  {
    s1 = a2;
    v122 = strlen((const char *)a2);
    a2 = (__int64 *)s1;
    v14 = (char *)s1 + v122;
  }
  v133 = v14;
  v15 = s1;
  if ( s1 > v14 )
    return 16;
  v16 = *(char **)(v126 + 96);
  if ( v16 )
  {
    if ( s1 < v14 )
    {
      v17 = *v16;
      v128 = (_BYTE *)(v10 + 1);
      dest = a2;
      v18 = v17;
      v19 = v14;
      while ( 1 )
      {
        if ( *v15 == v18 )
        {
          v20 = *(int *)(v126 + 104);
          if ( v19 - v15 >= v20 && !memcmp(v15, v16, v20) )
            break;
        }
        if ( v19 == ++v15 )
          return 1;
      }
      v11 = v128;
      a2 = (__int64 *)dest;
    }
    if ( v133 == v15 )
      return 1;
  }
  v21 = (char)v11;
  v22 = (char *)s1;
  s1 = v11;
  v146 = v137;
  v23 = 128;
  v24 = (__int64 *)v126;
  v141 = (char *)v133;
  v25 = v22;
  v145 = (__int64 *)v126;
  v148 = a2;
  v143 = 1LL << v9;
  ptr = nullptr;
  v152 = nullptr;
  v149 = (unsigned __int8 *)v22;
  v150 = (__int64 *)v133;
  v144 = 1LL << v21;
  v132 = nullptr;
  v135 = (__int64 *)&v145;
  *(_OWORD *)v154 = 0;
  v155 = 0;
  while ( 2 )
  {
    v130 = v24 + 1;
    v131 = v24 + 3;
    v136 = sub_2283BC0(v24 + 1, v24 + 3, (__int64)s1, v9, v144, 132, v144);
    dest = nullptr;
    v128 = (_BYTE *)v9;
    v26 = v136;
    v138 = v137 & 2;
    v140 = v137 & 1;
    while ( 1 )
    {
      v27 = 128;
      if ( v25 != v141 )
        v27 = *v25;
      v28 = dest;
      if ( v136 == v26 )
        v28 = v25;
      dest = v28;
      if ( v23 == 10 )
      {
        v30 = v24[5] & 8;
        if ( !v30 )
        {
          if ( v27 != 128 || v138 )
            goto LABEL_142;
          v29 = *((_DWORD *)v24 + 20);
LABEL_140:
          v30 = 130;
          if ( v29 <= 0 )
            break;
          goto LABEL_30;
        }
LABEL_153:
        v29 = *((_DWORD *)v24 + 19);
        v30 = 129;
        goto LABEL_27;
      }
      v29 = 0;
      v30 = 0;
      if ( v23 == 128 && !v140 )
        goto LABEL_153;
LABEL_27:
      if ( v27 == 10 )
      {
        if ( (v24[5] & 8) == 0 )
          goto LABEL_29;
        v29 += *((_DWORD *)v24 + 20);
        if ( v30 != 129 )
          goto LABEL_140;
      }
      else
      {
        if ( v27 != 128 || v138 )
        {
LABEL_29:
          if ( v29 <= 0 )
            goto LABEL_33;
          goto LABEL_30;
        }
        v29 += *((_DWORD *)v24 + 20);
        if ( v30 != 129 )
          goto LABEL_140;
      }
      v30 = 131;
      if ( v29 <= 0 )
        break;
LABEL_30:
      v31 = v26;
      v32 = v29;
      do
      {
        v33 = sub_2283BC0(v130, v131, (__int64)s1, (__int64)v128, v31, v30, v31);
        v31 = v33;
        --v32;
      }
      while ( v32 );
      v26 = v33;
LABEL_33:
      if ( v30 != 129 )
        break;
      if ( v27 != 128 )
      {
        v34 = *__ctype_b_loc();
        v35 = v34[(unsigned __int8)v27] & 8;
        if ( v27 == 95 || v35 )
        {
          v36 = (unsigned __int8)v23;
          if ( v23 == 128 )
          {
LABEL_40:
            v37 = 133;
LABEL_41:
            v26 = sub_2283BC0(v130, v131, (__int64)s1, (__int64)v128, v26, v37, v26);
            goto LABEL_42;
          }
LABEL_38:
          if ( (v34[v36] & 8) == 0 && v23 != 95 || v27 == 95 || v35 )
            goto LABEL_40;
LABEL_93:
          v37 = 134;
          goto LABEL_41;
        }
      }
      if ( v23 != 128 )
      {
        LODWORD(v36) = (unsigned __int8)v23;
LABEL_96:
        v139 = v36;
        v34 = *__ctype_b_loc();
        v72 = v34[v139] & 8;
        goto LABEL_97;
      }
LABEL_42:
      if ( (v26 & v143) != 0 )
        goto LABEL_105;
LABEL_43:
      if ( v133 == v25 )
        goto LABEL_89;
      ++v25;
      v23 = v27;
      v26 = sub_2283BC0(v130, v131, (__int64)s1, (__int64)v128, v26, v27, v136);
    }
    if ( v23 == 128 )
      goto LABEL_42;
LABEL_142:
    v34 = *__ctype_b_loc();
    v36 = (unsigned __int8)v23;
    v72 = v34[(unsigned __int8)v23] & 8;
    if ( !v72 && v23 != 95 )
    {
      if ( v27 == 128 )
        goto LABEL_42;
      v35 = v34[(unsigned __int8)v27] & 8;
      if ( v35 || v27 == 95 )
        goto LABEL_38;
      goto LABEL_96;
    }
LABEL_97:
    if ( v23 != 95 && !v72 )
      goto LABEL_42;
    if ( v30 == 130 )
      goto LABEL_93;
    if ( v27 == 128 )
      goto LABEL_42;
    if ( (v34[(unsigned __int8)v27] & 8) == 0 && v27 != 95 )
      goto LABEL_93;
    if ( (unsigned int)(v30 - 133) <= 1 )
      goto LABEL_40;
    if ( (v26 & v143) == 0 )
      goto LABEL_43;
LABEL_105:
    v9 = (__int64)v128;
    v151 = (unsigned __int8 *)dest;
    if ( v25 == (char *)-1LL )
    {
LABEL_89:
      free(v132);
      free(v152);
      return 1;
    }
    if ( !v127 && !*(_DWORD *)(v126 + 120) )
      goto LABEL_135;
    for ( j = (unsigned __int8 *)dest; ; v151 = j )
    {
      v74 = j;
      v75 = j++;
      v76 = sub_2284FC0(v135, v74, v133, (__int64)s1, (__int64)v128);
      if ( v76 )
        break;
    }
    v77 = v76;
    if ( v127 == 1 && !*(_DWORD *)(v126 + 120) )
    {
      s1 = (void *)(v76 - (unsigned __int8 *)v148);
      *v142 = _mm_loadh_ps((const double *)&s1);
      goto LABEL_135;
    }
    v78 = v24[14];
    if ( !v132 )
    {
      v132 = malloc(16 * (v78 + 1));
      ptr = v132;
      if ( !v132 )
        return 12;
    }
    v79 = (char *)v132;
    v80 = (char *)v132 + 16 * v78;
    if ( v78 )
    {
      do
      {
        v79 += 16;
        *(_OWORD *)v79 = -1;
      }
      while ( v80 != v79 );
    }
    if ( *(_DWORD *)(v126 + 120) | v137 & 0x400 )
    {
      v81 = *(_QWORD *)(v126 + 128);
      if ( v81 > 0 && !v152 )
      {
        v152 = malloc(8 * v81 + 8);
        if ( !v152 )
        {
          free(v132);
          return 12;
        }
      }
      v82 = sub_2282CC0(v135, v75, v77, (__int64)s1, v9, 0, 0);
    }
    else
    {
      v82 = (__int64)sub_22858D0(v135, v75, v77, (__int64)s1, v9);
    }
    if ( !v82 )
    {
      while ( 1 )
      {
        v83 = v151;
        if ( v151 >= v77 )
          break;
        v84 = sub_2284FC0(v135, v151, v77 - 1, (__int64)s1, v9);
        v77 = v84;
        if ( !v84 )
          break;
        if ( sub_2282CC0(v135, v83, v84, (__int64)s1, v9, 0, 0) )
          goto LABEL_123;
      }
      if ( v133 != v83 )
      {
        v25 = (char *)(v83 + 1);
        v23 = 128;
        if ( v83 + 1 != v149 )
          v23 = (char)*v83;
        v24 = v145;
        v141 = (char *)v150;
        v137 = v146;
        v132 = ptr;
        continue;
      }
    }
    break;
  }
LABEL_123:
  v85 = (char *)ptr;
  v86 = v127;
  v132 = ptr;
  if ( v127
    && (v87 = v142,
        v88 = (unsigned __int8 *)(v77 - (unsigned __int8 *)v148),
        v142->m128_u64[0] = v151 - (unsigned __int8 *)v148,
        v87->m128_u64[1] = (unsigned __int64)v88,
        v86 > 1) )
  {
    v89 = v145[14];
    if ( !v89 )
    {
      v92 = 1;
      goto LABEL_131;
    }
    v90 = v86 - 1;
    v91 = 1;
    if ( v90 > v89 )
      v90 = v145[14];
    v92 = 1;
    do
    {
      ++v92;
      v87[v91] = (__m128)_mm_loadu_si128((const __m128i *)&v85[v91 * 16]);
      ++v91;
    }
    while ( v92 <= v90 );
    if ( v127 > v92 )
    {
LABEL_131:
      v93 = v127 - v92;
      if ( v127 < v92 + 1 )
        v93 = 1;
      v94 = 0;
      v95 = &v142[v92];
      do
      {
        v96 = v94++;
        v95[v96] = (__m128)-1LL;
      }
      while ( v93 > v94 );
      goto LABEL_135;
    }
LABEL_253:
    free(v132);
  }
  else
  {
LABEL_135:
    if ( v132 )
      goto LABEL_253;
  }
  v97 = v152;
  if ( v152 )
LABEL_137:
    free(v97);
  return v134;
}
