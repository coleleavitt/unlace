__int64 __fastcall sub_56E2C0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __m128i a5, __m128i a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  int v14; // r9d
  int v15; // r12d
  char v16; // al
  char v17; // al
  __int64 v18; // r8
  unsigned __int64 v19; // r13
  int v20; // ecx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdi
  __int64 v29; // r10
  unsigned int v30; // r9d
  unsigned __int64 v31; // rbp
  __int64 v32; // r11
  int v33; // r12d
  __int64 v34; // rsi
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // rsi
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // r9
  int v40; // eax
  char v41; // al
  __int64 v42; // r9
  _QWORD *v43; // r15
  char v44; // al
  __int64 v45; // rsi
  unsigned __int64 v46; // rdi
  __int64 v47; // rax
  char v48; // al
  char v49; // al
  int v50; // eax
  _QWORD *v51; // rsi
  void *v52; // rdi
  __int64 v53; // rcx
  void *v54; // rdi
  unsigned __int64 v55; // rsi
  char v56; // al
  char v57; // al
  int v58; // ebx
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // rax
  int v63; // r14d
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rsi
  __int64 v66; // rax
  unsigned __int64 v67; // rsi
  int v68; // ecx
  __int64 v69; // rax
  char v70; // r11
  bool v71; // zf
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  bool v74; // bl
  __int64 v75; // rbp
  __m128i v76; // xmm0
  int v77; // eax
  char v78; // al
  char *v79; // r13
  __int64 v80; // r12
  char *v81; // rbp
  __m128i v82; // xmm0
  __m128i *v83; // rax
  __m128i v84; // xmm8
  __m128i v85; // xmm7
  __m128i v86; // xmm6
  __m128i v87; // xmm9
  __m128i v88; // xmm5
  __m128i v89; // xmm4
  __m128i v90; // xmm3
  __m128i v91; // xmm9
  __m128i v92; // xmm2
  __m128i v93; // xmm0
  __m128i v94; // xmm9
  __m128i v95; // xmm9
  char *v96; // rbx
  __int64 v97; // rbp
  void *v98; // rdi
  void *v99; // rdi
  __int64 v100; // rbx
  __m128i *v101; // rax
  __m128i *v102; // r12
  size_t v103; // r13
  __m128i v104; // xmm0
  __int32 v105; // eax
  __m128i v106; // xmm0
  __int32 v107; // eax
  __m128i v108; // xmm0
  const __m128i *v109; // r8
  __m128i v110; // xmm0
  const __m128i *v111; // r15
  size_t v112; // r13
  void *v113; // rax
  void *v114; // rax
  char v115; // cl
  unsigned __int64 i; // rbx
  unsigned __int64 v117; // rax
  unsigned __int64 v118; // rax
  char *v119; // rbp
  __int64 v120; // rbx
  void *v121; // rdi
  void *v122; // rdi
  __int64 v123; // r12
  char *v124; // rbx
  __int64 v125; // rbp
  void *v126; // rdi
  void *v127; // rdi
  char v128; // dl
  unsigned int v129; // [rsp+8h] [rbp-210h]
  unsigned int v130; // [rsp+8h] [rbp-210h]
  __int64 v131; // [rsp+8h] [rbp-210h]
  unsigned __int64 v132; // [rsp+8h] [rbp-210h]
  __int64 v133; // [rsp+8h] [rbp-210h]
  __int64 v134; // [rsp+8h] [rbp-210h]
  unsigned __int64 v135; // [rsp+10h] [rbp-208h]
  __int64 v136; // [rsp+10h] [rbp-208h]
  int v137; // [rsp+10h] [rbp-208h]
  unsigned int v138; // [rsp+10h] [rbp-208h]
  unsigned __int64 v139; // [rsp+18h] [rbp-200h]
  __int64 v140; // [rsp+18h] [rbp-200h]
  __int64 v141; // [rsp+20h] [rbp-1F8h]
  __int64 v142; // [rsp+20h] [rbp-1F8h]
  __int64 v143; // [rsp+28h] [rbp-1F0h]
  __int64 v144; // [rsp+28h] [rbp-1F0h]
  __int64 v146; // [rsp+38h] [rbp-1E0h]
  __int64 v147; // [rsp+38h] [rbp-1E0h]
  int v148; // [rsp+40h] [rbp-1D8h]
  int v149; // [rsp+40h] [rbp-1D8h]
  __int64 v150; // [rsp+48h] [rbp-1D0h]
  __int64 v151; // [rsp+48h] [rbp-1D0h]
  __int64 v152; // [rsp+48h] [rbp-1D0h]
  __int64 v153; // [rsp+48h] [rbp-1D0h]
  unsigned __int64 v154; // [rsp+50h] [rbp-1C8h]
  int v155; // [rsp+58h] [rbp-1C0h]
  __int64 v156; // [rsp+58h] [rbp-1C0h]
  unsigned __int64 v159; // [rsp+70h] [rbp-1A8h]
  unsigned __int64 v160; // [rsp+78h] [rbp-1A0h]
  unsigned int v161; // [rsp+80h] [rbp-198h]
  bool v162; // [rsp+85h] [rbp-193h]
  unsigned __int8 v163; // [rsp+86h] [rbp-192h]
  char v164; // [rsp+88h] [rbp-190h]
  int v165; // [rsp+98h] [rbp-180h]
  int v166; // [rsp+9Ch] [rbp-17Ch]
  __int64 v167; // [rsp+A0h] [rbp-178h]
  __int64 v168; // [rsp+A8h] [rbp-170h]
  __int64 v169; // [rsp+A8h] [rbp-170h]
  unsigned __int8 v170; // [rsp+BCh] [rbp-15Ch] BYREF
  char v171; // [rsp+BDh] [rbp-15Bh]
  char v172; // [rsp+BEh] [rbp-15Ah]
  __m128i v173; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v174; // [rsp+D0h] [rbp-148h]
  unsigned __int64 v175; // [rsp+D8h] [rbp-140h]
  __int64 v176; // [rsp+E0h] [rbp-138h]
  unsigned __int64 v177; // [rsp+E8h] [rbp-130h]
  unsigned int v178; // [rsp+F0h] [rbp-128h]
  void *ptr; // [rsp+100h] [rbp-118h] BYREF
  __int128 v180; // [rsp+108h] [rbp-110h]
  __m128i v181; // [rsp+118h] [rbp-100h]
  __int64 v182; // [rsp+128h] [rbp-F0h]
  int v183; // [rsp+130h] [rbp-E8h]
  __m128i v184; // [rsp+140h] [rbp-D8h]
  __m128i v185; // [rsp+150h] [rbp-C8h]
  __m128i v186; // [rsp+160h] [rbp-B8h]
  __m128i v187; // [rsp+170h] [rbp-A8h]
  __m128i v188; // [rsp+180h] [rbp-98h]
  __m128i v189; // [rsp+190h] [rbp-88h]
  __m128i v190; // [rsp+1A0h] [rbp-78h]
  __m128i v191; // [rsp+1B0h] [rbp-68h]
  __m128i v192; // [rsp+1C0h] [rbp-58h]
  unsigned __int64 v193; // [rsp+1D8h] [rbp-40h]

  v164 = a4;
  v193 = __readfsqword(0x28u);
  v129 = *(_DWORD *)(a2 + 44) & 0xFFFFFFBF;
  if ( *(_BYTE *)(a1 + 52) )
    v129 = *(_DWORD *)(a2 + 44) | 0x40;
  *(_DWORD *)(a2 + 44) = v129;
  if ( a4 )
  {
    v165 = 1 << (a4 - 1);
    v159 = v165;
  }
  else
  {
    v159 = 0;
    v165 = 0;
  }
  v160 = *(_QWORD *)(a2 + 8);
  if ( !v160 )
  {
    v161 = 0;
    v155 = 0;
LABEL_141:
    v159 = 1;
    v165 = 1;
    goto LABEL_142;
  }
  v141 = 0;
  v146 = 0;
  v139 = v159;
  v6 = *(_QWORD *)a2;
  v135 = 0;
  v143 = 0;
  v155 = 0;
  v166 = 0;
  v160 = 0;
  v161 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
LABEL_7:
    v175 = v7;
    v10 = 24 * v8;
    v173.m128i_i64[1] = v135;
    v173.m128i_i64[0] = v143;
    v176 = v141;
    v174 = v146;
    v178 = v129;
    v11 = 144 * v8;
    v177 = v139;
    v12 = v6 + 144 * v8;
    *(_DWORD *)(v12 + 132) &= ~0x40u;
    *(_BYTE *)(v12 + 136) = 0;
    v13 = *(unsigned int *)(*a3 + 24 * v8 + 16);
    v14 = v13;
    if ( (*(_BYTE *)(v12 + 64) & 0xF) != 0xE )
    {
      if ( v146 )
      {
        if ( !v135 || (v48 = getinf(57), v14 = v13, (v48 & 0xF) == 6) || (v49 = getinf(67), v14 = v13, v49 < 0) )
          v15 = 8;
        else
          v15 = v146;
        v148 = v14;
        v16 = getinf(57);
        v14 = v148;
        if ( (v16 & 0xF) != 6 )
        {
          v17 = getinf(67);
          v14 = v148;
          if ( v17 >= 0 )
          {
            if ( v135 )
            {
              if ( v9 < v135 )
                goto LABEL_268;
              v25 = v135;
              if ( v9 - v135 + ((v135 + v15 - 1) & -v15) < v9 )
                goto LABEL_270;
              v9 = v9 - v135 + ((v135 + v15 - 1) & -v15);
            }
            if ( v139 && 8 * v139 < v15 )
              v15 = 8 * v139;
          }
        }
        v18 = 0;
        v9 = (v9 + v15 - 1) & -v15;
      }
      else
      {
        v18 = v135;
      }
      v19 = 1;
      if ( !*(_BYTE *)(a1 + 52) )
        v19 = v13;
      if ( v159 < v19 && v159 )
      {
        v20 = v165;
        v19 = v159;
      }
      else
      {
        v20 = v19;
      }
      v21 = (v9 + 8 * v20 - 1) & (-8 * v20);
      v22 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 == v21 )
      {
        v29 = *(_QWORD *)(v12 + 8);
        if ( !v29 )
        {
          *(_DWORD *)(v12 + 128) = v20;
          v19 = v7;
          v30 = v129;
          v31 = v139;
          v150 = v141;
LABEL_52:
          v32 = v9;
          v33 = v155++;
          goto LABEL_53;
        }
        if ( !v19 )
          goto LABEL_245;
        *(_DWORD *)(v12 + 128) = v20;
        v19 = v7;
        v30 = v129;
        v31 = v139;
        v150 = v141;
LABEL_77:
        v32 = v9;
        v29 = 0;
        v33 = v155++;
        goto LABEL_53;
      }
      if ( *(_QWORD *)v12 >= v21 )
        goto LABEL_274;
      if ( (*(_BYTE *)(a2 + 44) & 0x20) != 0 )
        return (unsigned int)-1;
      *(_DWORD *)(v12 + 132) |= 0x40u;
      v19 = 1;
      v21 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v21 >= v22 )
      {
        if ( v22 < v21 )
          goto LABEL_29;
      }
      else
      {
LABEL_274:
        do
        {
          if ( v19 >= *(_QWORD *)(a1 + 40) )
            break;
          v19 *= 2LL;
          v21 = (v9 + 8 * (int)v19 - 1) & (-8 * (int)v19);
        }
        while ( v21 < v22 );
        if ( v22 < v21 )
        {
          do
          {
LABEL_29:
            v19 >>= 1;
            if ( !v19 )
              return (unsigned int)-1;
            v23 = v9 + 8 * (int)v19 - 1;
          }
          while ( v22 < (v23 & (-8 * (int)v19)) );
          v21 = v23 & (-8 * (int)v19);
        }
        if ( v22 != v21 )
        {
          if ( !*(_QWORD *)(v12 + 8) )
          {
LABEL_66:
            v154 = v13;
            v32 = v9;
            v29 = 0;
            *(_DWORD *)(v12 + 128) = v14;
            v33 = v155;
            v150 = v141;
LABEL_67:
            if ( (*(_BYTE *)(a1 + 48) & 4) == 0 )
              return (unsigned int)-1;
            v39 = *(_QWORD *)v12;
            v173.m128i_i64[1] = v18;
            v175 = v154;
            v173.m128i_i64[0] = v32;
            v176 = v150;
            v174 = v29;
            v177 = v139;
            v178 = v129;
            v40 = sub_56D4C0(&v173, (__int64 *)a2, a3, v33, v9, v39, a5, a6, v13);
            if ( v40 == -1 )
              return (unsigned int)-1;
            if ( v40 == 1 )
            {
              v155 = v33;
              v19 = v7;
              --v33;
              ++v161;
              v30 = v129;
              v31 = v139;
              v29 = v146;
              v150 = v141;
              v18 = v135;
              v32 = v143;
              goto LABEL_53;
            }
            v18 = v173.m128i_i64[1];
            v32 = v173.m128i_i64[0];
            v29 = v174;
            v150 = v176;
            v19 = v175;
            v155 = v33 + 1;
            v31 = v177;
            v30 = v178;
            v8 = v33 + 1;
            if ( v33 >= 0 )
              goto LABEL_54;
LABEL_71:
            v129 = v30;
            v7 = v19;
            v9 = 0;
            v139 = v31;
            v36 = *(_QWORD *)(a2 + 8);
            v146 = v29;
            v135 = v18;
            v141 = v150;
            v143 = v32;
            goto LABEL_72;
          }
LABEL_83:
          if ( !v13 )
            goto LABEL_245;
          goto LABEL_66;
        }
      }
      v151 = v18;
      v149 = v14;
      v41 = getinf(57);
      v29 = *(_QWORD *)(v12 + 8);
      v14 = v149;
      v18 = v151;
      if ( ((v41 & 0xF) != 6 || v159 >= v19 || !v159) && ((*(_BYTE *)(a2 + 44) & 0x20) == 0 || v19 <= 8) )
      {
        if ( v19 >> 1 )
        {
          _BitScanReverse64(&v72, v19 >> 1);
          *(_BYTE *)(v12 + 136) = v72 + 2;
          if ( (*(_BYTE *)(v12 + 132) & 0x40) == 0 )
            goto LABEL_187;
LABEL_189:
          *(_DWORD *)(v12 + 128) = v19;
          v30 = v129;
          v31 = v139;
          v150 = v141;
          goto LABEL_77;
        }
        *(_BYTE *)(v12 + 136) = 1;
        if ( (*(_BYTE *)(v12 + 132) & 0x40) != 0 )
        {
          if ( !v29 )
            goto LABEL_189;
        }
        else
        {
LABEL_187:
          if ( v166 < v19 )
          {
            v166 = v19;
            goto LABEL_189;
          }
          if ( !v29 )
          {
            *(_DWORD *)(v12 + 128) = v19;
            v30 = v129;
            v31 = v139;
            v150 = v141;
            goto LABEL_52;
          }
        }
        if ( !v19 )
          goto LABEL_245;
        goto LABEL_189;
      }
      if ( !v29 )
        goto LABEL_66;
      goto LABEL_83;
    }
    v162 = 0;
    v168 = v10;
    while ( 1 )
    {
      v26 = *(_QWORD *)(v12 + 8);
      LODWORD(ptr) = 0;
      v170 = v13;
      v171 = v26;
      v172 = 0;
      v173.m128i_i64[0] = v143;
      v174 = v146;
      v173.m128i_i64[1] = v135;
      v175 = v7;
      v176 = v141;
      v177 = v139;
      v178 = v129;
      v27 = sub_565F30((unsigned __int64 *)&v173, &v170, v9, &ptr);
      v28 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 == v27 )
      {
        v163 = v13;
        if ( !*(_BYTE *)(a1 + 52) )
        {
          v50 = (int)ptr;
          if ( v166 >= (int)ptr )
            v50 = v166;
          v166 = v50;
        }
        v18 = v173.m128i_i64[1];
        v32 = v173.m128i_i64[0];
        v150 = v176;
        v29 = v174;
        v19 = v175;
        if ( !v162 )
        {
          if ( !*(_QWORD *)(v12 + 8) || v175 )
          {
            v30 = v129;
            *(_DWORD *)(v12 + 128) = v175;
            v31 = v139;
            v33 = v155++;
            goto LABEL_53;
          }
          goto LABEL_245;
        }
        v154 = v175;
        v33 = v155;
        v162 = 0;
        goto LABEL_165;
      }
      if ( (__int64)(v28 - v27) >= 0 )
      {
        v163 = v13;
        if ( v171 )
        {
          if ( v162 )
            goto LABEL_184;
          if ( *(_QWORD *)(v12 + 8) && !v13 )
            goto LABEL_245;
          *(_DWORD *)(v12 + 128) = v13;
        }
        else
        {
          v66 = v155;
          v67 = *(_QWORD *)(a2 + 8);
          v68 = v155;
          if ( v155 >= v67 )
            goto LABEL_223;
          while ( !*(_QWORD *)(*(_QWORD *)a2 + 144 * v66 + 8) )
          {
            v66 = ++v68;
            if ( v68 >= v67 )
              goto LABEL_223;
          }
          v69 = *a3 + 24 * v66;
          v13 = *(unsigned int *)(v69 + 16);
          if ( *(_DWORD *)(v69 + 16) )
          {
            if ( v162 )
            {
              v163 = *(_DWORD *)(v69 + 16);
LABEL_184:
              v154 = v7;
              v19 = v13;
              v29 = v146;
              v18 = v135;
              v32 = v143;
              v33 = v155;
              v150 = v141;
              goto LABEL_165;
            }
            *(_DWORD *)(v12 + 128) = v13;
          }
          else
          {
LABEL_223:
            for ( i = 64; i > 8; i >>= 1 )
            {
              if ( !(v28 % i) )
                break;
            }
            v13 = i >> 3;
            if ( v162 )
            {
              v163 = v13;
              goto LABEL_184;
            }
            if ( *(_QWORD *)(v12 + 8) && !v13 )
              goto LABEL_245;
            *(_DWORD *)(v12 + 128) = v13;
          }
        }
        v29 = v146;
        v154 = v7;
        v18 = v135;
        v32 = v143;
        v150 = v141;
        v33 = v155;
        goto LABEL_67;
      }
      if ( !v171 )
        break;
      if ( (getinf(57) & 0xF) == 6 )
        return (unsigned int)-1;
      if ( (getinf(67) & 0x80u) != 0LL )
        return (unsigned int)-1;
      v162 = v7 != 0 && (int)v13 != v7;
      if ( !v162 )
        return (unsigned int)-1;
      v13 = v7;
    }
    v163 = v13;
    v51 = (_QWORD *)(*(_QWORD *)a2 + v11);
    clear_tinfo_t(v51 + 8);
    v52 = (void *)v51[5];
    v53 = v168;
    if ( v52 )
    {
      v51[6] = 0;
      qfree(v52);
      v53 = v168;
    }
    v54 = (void *)v51[2];
    if ( v54 )
    {
      v51[3] = 0;
      v152 = v53;
      qfree(v54);
      v53 = v152;
    }
    v153 = v53;
    memmove(v51, v51 + 18, *(_QWORD *)a2 + 144LL * *(_QWORD *)(a2 + 8) - (_QWORD)v51 - 144);
    --*(_QWORD *)(a2 + 8);
    memmove((void *)(v153 + *a3), (const void *)(v153 + *a3 + 24), 24 * a3[1]-- - 24 - v153);
    v33 = v155 - 1;
    if ( !v162 )
    {
      if ( !*(_QWORD *)(v12 + 8) || v13 )
      {
        *(_DWORD *)(v12 + 128) = v13;
        v19 = v7;
        v30 = v129;
        v31 = v139;
        v29 = v146;
        v18 = v135;
        v150 = v141;
        v32 = v143;
        goto LABEL_53;
      }
LABEL_245:
      if ( !under_debugger )
        interr(867);
LABEL_271:
      BUG();
    }
    v154 = v7;
    v19 = v13;
    v162 = 0;
    v29 = v146;
    v18 = v135;
    v32 = v143;
    v150 = v141;
LABEL_165:
    v169 = v29;
    v167 = v18;
    v156 = v32;
    get_tinfo_details(*(_QWORD *)(v12 + 64), 14, &v170);
    v170 = v163;
    if ( !(unsigned __int8)create_tinfo(v12 + 64, 14, 14, &v170) )
      return (unsigned int)-1;
    v32 = v156;
    v18 = v167;
    v29 = v169;
    *(_DWORD *)(*a3 + 24LL * v33 + 16) = v13;
    if ( *(_QWORD *)(v12 + 8) && !v19 )
      goto LABEL_245;
    *(_DWORD *)(v12 + 128) = v19;
    if ( v162 )
      goto LABEL_67;
    v30 = v129;
    v31 = v139;
    v155 = v33 + 1;
    v19 = v154;
LABEL_53:
    v8 = v155;
    if ( v33 < 0 )
      goto LABEL_71;
LABEL_54:
    v34 = 144LL * v33;
    v6 = *(_QWORD *)a2;
    v35 = *(_QWORD *)a2 + v34;
    if ( *(_BYTE *)(a2 + 51) )
      break;
    v147 = *(_QWORD *)a2 + v34;
    v144 = v29;
    v142 = v18;
    v43 = (_QWORD *)(*a3 + 24LL * v33);
    v136 = v32;
    v130 = v30;
    v9 = v43[1];
    v44 = getinf(57);
    v30 = v130;
    v32 = v136;
    v45 = 144LL * v33;
    v18 = v142;
    v29 = v144;
    v35 = v147;
    if ( (v44 & 0xF) == 6 )
    {
      v46 = *(_QWORD *)(a2 + 8);
      v47 = *(_QWORD *)a2;
LABEL_90:
      v36 = v46;
      if ( (*(_BYTE *)(v47 + v45 + 132) & 0x20) == 0 )
        goto LABEL_92;
      goto LABEL_91;
    }
    v45 = 144LL * v33;
    v70 = getinf(67);
    v30 = v130;
    v18 = v142;
    v47 = *(_QWORD *)a2;
    v36 = *(_QWORD *)(a2 + 8);
    v29 = v144;
    v46 = v36;
    v71 = (v70 & 0x80) == 0;
    v32 = v136;
    v35 = v147;
    if ( !v71 )
      goto LABEL_90;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + v45 + 132) & 0x20) == 0
      || v36 != v33 + 1LL && (*(_BYTE *)(v47 + v45 + 276) & 0x20) != 0 )
    {
      goto LABEL_92;
    }
LABEL_91:
    v9 = *(_QWORD *)v35 + 8LL * *v43;
LABEL_92:
    v37 = *(_QWORD *)(v35 + 8);
    if ( v37 || (*(_BYTE *)(v35 + 64) & 0xF) != 0xE )
    {
LABEL_59:
      v38 = *(_QWORD *)v35 + v37;
      if ( v160 >= v38 )
        v38 = v160;
      v160 = v38;
    }
    v129 = v30;
    v7 = v19;
    v139 = v31;
    v141 = v150;
    v146 = v29;
    v135 = v18;
    v143 = v32;
LABEL_72:
    if ( v8 >= v36 )
      goto LABEL_87;
    v6 = *(_QWORD *)a2;
  }
  v36 = *(_QWORD *)(a2 + 8);
  v37 = *(_QWORD *)(v35 + 8);
  if ( v8 < v36 )
  {
    if ( v37 )
    {
      v65 = *(_QWORD *)v35 + v37;
      if ( v160 >= v65 )
        v65 = v160;
      v160 = v65;
    }
    else if ( (*(_BYTE *)(v35 + 64) & 0xF) != 0xE )
    {
      v30 = v129;
      v19 = v7;
      v31 = v139;
      v29 = v146;
      v32 = v143;
      v18 = v135;
      v150 = v141;
      goto LABEL_59;
    }
    goto LABEL_7;
  }
  if ( v37 )
  {
    v55 = *(_QWORD *)v35 + v37;
    v42 = v18;
    if ( v160 >= v55 )
      v55 = v160;
    v160 = v55;
  }
  else
  {
    if ( (*(_BYTE *)(v35 + 64) & 0xF) != 0xE )
      goto LABEL_59;
LABEL_87:
    v42 = v18;
  }
  if ( v29 )
  {
    if ( !v42
      || (v131 = v42, v137 = v29, v56 = getinf(57), v42 = v131, (v56 & 0xF) == 6)
      || (v57 = getinf(67), v42 = v131, v57 < 0) )
    {
      v58 = 8;
    }
    else
    {
      v58 = v137;
    }
    v132 = v42;
    if ( (getinf(57) & 0xF) != 6 && (getinf(67) & 0x80u) == 0LL )
    {
      if ( v132 )
      {
        if ( v160 < v132 )
        {
LABEL_268:
          if ( !under_debugger )
            interr(1138);
          goto LABEL_271;
        }
        v25 = v160;
        if ( v160 - v132 + ((v132 + v58 - 1) & -v58) < v160 )
LABEL_270:
          sub_561E80(67, v25, *(double *)a5.m128i_i64, *(double *)a6.m128i_i64);
        v160 = v160 - v132 + ((v132 + v58 - 1) & -v58);
      }
      if ( v31 && 8 * v31 < v58 )
        v58 = 8 * v31;
    }
    v160 = (v160 + v58 - 1) & -v58;
  }
  if ( !v159 || v159 >= v166 )
  {
    if ( !v166 )
      goto LABEL_141;
    v165 = v166;
    v159 = v166;
  }
LABEL_142:
  v59 = *(_QWORD *)(a1 + 32);
  LODWORD(v60) = v159;
  v61 = *(_QWORD *)(a2 + 24);
  if ( v59 >= v159 )
    v60 = *(_QWORD *)(a1 + 32);
  if ( ((v160 + 8 * (int)v60 - 1) & (-8 * (int)v60)) >= 8 * v61 )
    goto LABEL_154;
  if ( !v160 )
  {
    v118 = 1;
    if ( *(char *)(a2 + 44) >= 0 )
    {
      v128 = getinf(57);
      v118 = 0;
      if ( (v128 & 0xF) != 6 )
        v118 = (getinf(67) & 0x80) == 0;
    }
    if ( v118 >= v61 )
      goto LABEL_153;
  }
  if ( (*(_BYTE *)(a1 + 48) & 4) == 0 )
    return (unsigned int)-1;
  if ( *(_BYTE *)(a2 + 51) )
  {
    v160 = 0;
    LODWORD(v62) = 0;
  }
  else
  {
    v62 = (v160 + 7) >> 3;
    v160 = (v160 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v63 = *(_QWORD *)(a2 + 24) - v62;
  v138 = v161 + 1;
  v140 = 144LL * (v155 - 1);
  while ( 2 )
  {
    if ( v155 > 0 )
    {
      if ( (getinf(57) & 0xF) == 6 )
      {
        v73 = *(_QWORD *)a2;
      }
      else
      {
        v115 = getinf(67);
        v73 = *(_QWORD *)a2;
        if ( (v115 & 0x80) == 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)a2 + v140 + 132) & 0x20) == 0 )
            break;
          if ( v155 == *(_QWORD *)(a2 + 8) )
          {
            if ( !(unsigned __int8)sub_56D1B0((__int64 *)a2, a3, v155, v160, v63) )
              return (unsigned int)-1;
            v161 = v138;
LABEL_197:
            ptr = nullptr;
            v180 = 0;
            v75 = *(_QWORD *)(a2 + 8);
            if ( v75 )
            {
              v100 = 0;
              v101 = (__m128i *)qalloc_or_throw(144 * v75);
              *((_QWORD *)&v180 + 1) = v75;
              ptr = v101;
              v102 = v101 + 4;
              v134 = -64LL - (_QWORD)v101;
              do
              {
                v109 = (__m128i *)((char *)v102 + v134 + *(_QWORD *)a2);
                v110 = _mm_loadu_si128(v109);
                *(__m128i *)((char *)&v102[-3] + 8) = 0;
                v111 = v109;
                v102[-3].m128i_i64[0] = 0;
                v102[-4] = v110;
                v112 = v109[1].m128i_u64[1];
                if ( v112 )
                {
                  v113 = (void *)qalloc_or_throw(v109[1].m128i_i64[1]);
                  v102[-2].m128i_i64[0] = v112;
                  v102[-3].m128i_i64[0] = (__int64)v113;
                  memcpy(v113, (const void *)v111[1].m128i_i64[0], v112);
                  v102[-3].m128i_i64[1] = v112;
                }
                v102[-2].m128i_i64[1] = 0;
                v102[-1] = 0;
                v103 = v111[3].m128i_u64[0];
                if ( v103 )
                {
                  v114 = (void *)qalloc_or_throw(v111[3].m128i_i64[0]);
                  v102[-2].m128i_i64[1] = (__int64)v114;
                  v102[-1].m128i_i64[1] = v103;
                  memcpy(v114, (const void *)v111[2].m128i_i64[1], v103);
                  v102[-1].m128i_i64[0] = v103;
                }
                v102->m128i_i64[0] = 0;
                copy_tinfo_t(v102);
                v104 = _mm_loadu_si128((const __m128i *)((char *)v111 + 72));
                ++v100;
                v102 += 9;
                v102[-6].m128i_i64[1] = v111[7].m128i_i64[1];
                v105 = v111[8].m128i_i32[0];
                *(__m128i *)((char *)v102 - 136) = v104;
                v106 = _mm_loadu_si128((const __m128i *)((char *)v111 + 88));
                v102[-5].m128i_i32[0] = v105;
                v107 = v111[8].m128i_i32[1];
                *(__m128i *)((char *)v102 - 120) = v106;
                v108 = _mm_loadu_si128((const __m128i *)((char *)v111 + 104));
                v102[-5].m128i_i32[1] = v107;
                LOBYTE(v107) = v111[8].m128i_i8[8];
                *(__m128i *)((char *)v102 - 104) = v108;
                v102[-5].m128i_i8[8] = v107;
              }
              while ( v75 != v100 );
              *(_QWORD *)&v180 = v75;
            }
            v76 = _mm_loadu_si128((const __m128i *)(a2 + 24));
            v182 = *(_QWORD *)(a2 + 40);
            v77 = *(_DWORD *)(a2 + 48);
            v181 = v76;
            v183 = v77;
            v78 = sub_569960((__int64 *)&ptr, *(double *)v76.m128i_i64, *(double *)a6.m128i_i64);
            v79 = (char *)ptr;
            if ( !v78 )
            {
              if ( ptr )
              {
                v123 = v180;
                v124 = (char *)ptr + 64;
                v125 = 0;
                if ( (_QWORD)v180 )
                {
                  do
                  {
                    clear_tinfo_t(v124);
                    v126 = *((void **)v124 - 3);
                    if ( v126 )
                    {
                      *((_QWORD *)v124 - 2) = 0;
                      qfree(v126);
                    }
                    v127 = *((void **)v124 - 6);
                    if ( v127 )
                    {
                      *((_QWORD *)v124 - 5) = 0;
                      qfree(v127);
                    }
                    ++v125;
                    v124 += 144;
                  }
                  while ( v123 != v125 );
                }
                qfree(v79);
              }
              return (unsigned int)-1;
            }
            v80 = v180;
            v81 = (char *)ptr + 144 * v180 - 144;
            v133 = *(_QWORD *)(a2 + 24);
            v82 = _mm_loadu_si128((const __m128i *)v81);
            v160 = _mm_add_epi64(v82, _mm_srli_si128(v82, 8)).m128i_u64[0];
            v63 = v133 - (v160 >> 3);
            if ( (_DWORD)v133 == (unsigned int)(v160 >> 3) )
            {
              if ( ptr )
              {
                v119 = (char *)ptr + 64;
                v120 = 0;
                if ( (_QWORD)v180 )
                {
                  do
                  {
                    clear_tinfo_t(v119);
                    v121 = *((void **)v119 - 3);
                    if ( v121 )
                    {
                      *((_QWORD *)v119 - 2) = 0;
                      qfree(v121);
                    }
                    v122 = *((void **)v119 - 6);
                    if ( v122 )
                    {
                      *((_QWORD *)v119 - 5) = 0;
                      qfree(v122);
                    }
                    ++v120;
                    v119 += 144;
                  }
                  while ( v80 != v120 );
                }
                qfree(v79);
              }
              goto LABEL_153;
            }
            sub_35A790((char **)v81 + 2);
            v83 = (__m128i *)(*(_QWORD *)a2 + 144LL * v155);
            v84 = _mm_loadu_si128(v83);
            *v83 = _mm_loadu_si128((const __m128i *)v81);
            v85 = _mm_loadu_si128(v83 + 1);
            v86 = _mm_loadu_si128(v83 + 2);
            v83[1] = _mm_loadu_si128((const __m128i *)v81 + 1);
            v87 = _mm_loadu_si128((const __m128i *)v81 + 2);
            v88 = _mm_loadu_si128(v83 + 3);
            v89 = _mm_loadu_si128(v83 + 4);
            v90 = _mm_loadu_si128(v83 + 5);
            v184 = v84;
            v83[2] = v87;
            v91 = _mm_loadu_si128((const __m128i *)v81 + 3);
            v92 = _mm_loadu_si128(v83 + 6);
            a6 = _mm_loadu_si128(v83 + 7);
            v93 = _mm_loadu_si128(v83 + 8);
            v185 = v85;
            v83[3] = v91;
            v94 = _mm_loadu_si128((const __m128i *)v81 + 4);
            v186 = v86;
            v83[4] = v94;
            v95 = _mm_loadu_si128((const __m128i *)v81 + 5);
            v187 = v88;
            v188 = v89;
            v189 = v90;
            v190 = v92;
            v191 = a6;
            v192 = v93;
            v83[5] = v95;
            ++v155;
            v83[6] = _mm_loadu_si128((const __m128i *)v81 + 6);
            v83[7] = _mm_loadu_si128((const __m128i *)v81 + 7);
            v83[8] = _mm_loadu_si128((const __m128i *)v81 + 8);
            *(__m128i *)v81 = v84;
            *((__m128i *)v81 + 1) = v85;
            *((__m128i *)v81 + 2) = v86;
            *((__m128i *)v81 + 3) = v88;
            *((__m128i *)v81 + 4) = v89;
            *((__m128i *)v81 + 5) = v90;
            *((__m128i *)v81 + 6) = v92;
            *((__m128i *)v81 + 7) = a6;
            *((__m128i *)v81 + 8) = v93;
            if ( v79 )
            {
              v96 = v79 + 64;
              v97 = 0;
              if ( v80 )
              {
                do
                {
                  clear_tinfo_t(v96);
                  v98 = *((void **)v96 - 3);
                  if ( v98 )
                  {
                    *((_QWORD *)v96 - 2) = 0;
                    qfree(v98);
                  }
                  v99 = *((void **)v96 - 6);
                  if ( v99 )
                  {
                    *((_QWORD *)v96 - 5) = 0;
                    qfree(v99);
                  }
                  ++v97;
                  v96 += 144;
                }
                while ( v80 != v97 );
              }
              qfree(v79);
            }
            ++v138;
            v140 += 144;
            continue;
          }
          v74 = (*(_BYTE *)(v73 + 144LL * v155 + 132) & 0x20) == 0;
LABEL_195:
          if ( !(unsigned __int8)sub_56D1B0((__int64 *)a2, a3, v155, v160, v63) )
            return (unsigned int)-1;
          v161 = v138;
          if ( !v74 )
            goto LABEL_153;
          goto LABEL_197;
        }
      }
      v74 = (*(_BYTE *)(v73 + v140 + 132) & 0x20) != 0;
      goto LABEL_195;
    }
    break;
  }
  if ( !(unsigned __int8)sub_56D1B0((__int64 *)a2, a3, v155, v160, v63) )
    return (unsigned int)-1;
  v161 = v138;
LABEL_153:
  v59 = *(_QWORD *)(a1 + 32);
LABEL_154:
  if ( v159 < v59 )
  {
    *(_QWORD *)(a1 + 24) = v59;
    v64 = v59 >> 1;
    goto LABEL_156;
  }
  v117 = *(_QWORD *)(a1 + 24);
  if ( v117 )
  {
    v64 = v117 >> 1;
    if ( v64 )
    {
LABEL_156:
      _BitScanReverse64(&v64, v64);
      LOBYTE(v64) = v64 + 2;
    }
    else
    {
      LOBYTE(v64) = 1;
    }
    *(_BYTE *)(a2 + 49) = v64;
  }
  *(_DWORD *)(a2 + 40) = v165;
  *(_BYTE *)(a2 + 50) = v164;
  if ( 8LL * *(_QWORD *)(a2 + 24) < v160 && !*(_BYTE *)(a2 + 51) )
    return (unsigned int)-2;
  return v161;
}
