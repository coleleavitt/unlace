__int64 __fastcall sub_554A00(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __m128i a5, __m128i a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  int v14; // r12d
  __int64 v15; // r8
  unsigned __int64 v16; // r12
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdi
  __int64 v26; // r9
  unsigned int v27; // esi
  __int64 v28; // r11
  unsigned __int64 v29; // rbp
  int v30; // r13d
  __int64 v31; // r10
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  int v36; // eax
  char v37; // al
  unsigned __int64 v38; // r14
  _QWORD *v39; // r14
  char v40; // al
  __int64 v41; // rdx
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // eax
  _QWORD *v45; // rsi
  void *v46; // rdi
  __int64 v47; // rcx
  void *v48; // rdi
  unsigned __int64 v49; // rdx
  int v50; // ebx
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rax
  unsigned int v55; // r14d
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rsi
  int v60; // edx
  __int64 v61; // rax
  char v62; // al
  char v63; // r10
  bool v64; // zf
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  bool v67; // bl
  const char *m128i_i8; // rsi
  __int64 v69; // r12
  __m128i v70; // xmm0
  int v71; // eax
  char v72; // al
  char *v73; // r13
  __int64 v74; // rbx
  char *v75; // r12
  __m128i v76; // xmm0
  __m128i *v77; // rax
  __m128i v78; // xmm7
  __m128i v79; // xmm6
  __m128i v80; // xmm8
  __m128i v81; // xmm5
  __m128i v82; // xmm4
  __m128i v83; // xmm3
  __m128i v84; // xmm2
  __m128i v85; // xmm8
  __m128i v86; // xmm0
  __m128i v87; // xmm8
  __m128i v88; // xmm8
  __m128i v89; // xmm8
  __m128i v90; // xmm8
  char *v91; // rbp
  __int64 v92; // r12
  void *v93; // rdi
  void *v94; // rdi
  __int64 v95; // rbp
  char *v96; // rax
  char *v97; // rbx
  size_t v98; // r14
  __m128i v99; // xmm0
  __int32 v100; // eax
  __m128i v101; // xmm0
  __int32 v102; // eax
  const __m128i *v103; // rcx
  __m128i v104; // xmm0
  const __m128i *v105; // r13
  size_t v106; // r14
  void *v107; // rax
  void *v108; // rax
  char v109; // cl
  unsigned __int64 i; // rbx
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rax
  char *v113; // r12
  __int64 v114; // rbp
  void *v115; // rdi
  void *v116; // rdi
  __int64 v117; // r12
  char *v118; // rbx
  __int64 v119; // rbp
  void *v120; // rdi
  void *v121; // rdi
  char v122; // dl
  unsigned __int64 v123; // [rsp+8h] [rbp-200h]
  int v124; // [rsp+8h] [rbp-200h]
  unsigned int v125; // [rsp+8h] [rbp-200h]
  __int64 v126; // [rsp+10h] [rbp-1F8h]
  __int64 v127; // [rsp+10h] [rbp-1F8h]
  __int64 v128; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v129; // [rsp+18h] [rbp-1F0h]
  __int64 v130; // [rsp+18h] [rbp-1F0h]
  __int64 v131; // [rsp+18h] [rbp-1F0h]
  __int64 v132; // [rsp+20h] [rbp-1E8h]
  __int64 v133; // [rsp+20h] [rbp-1E8h]
  __int64 v134; // [rsp+28h] [rbp-1E0h]
  __int64 v135; // [rsp+28h] [rbp-1E0h]
  unsigned int v137; // [rsp+38h] [rbp-1D0h]
  __int64 v138; // [rsp+38h] [rbp-1D0h]
  __int64 v139; // [rsp+40h] [rbp-1C8h]
  __int64 v140; // [rsp+48h] [rbp-1C0h]
  __int64 v141; // [rsp+48h] [rbp-1C0h]
  unsigned __int64 v142; // [rsp+50h] [rbp-1B8h]
  __int64 v143; // [rsp+50h] [rbp-1B8h]
  int v144; // [rsp+58h] [rbp-1B0h]
  __int64 v145; // [rsp+58h] [rbp-1B0h]
  unsigned __int64 v148; // [rsp+70h] [rbp-198h]
  unsigned __int64 v149; // [rsp+78h] [rbp-190h]
  unsigned int v150; // [rsp+80h] [rbp-188h]
  bool v151; // [rsp+85h] [rbp-183h]
  unsigned __int8 v152; // [rsp+86h] [rbp-182h]
  char v153; // [rsp+88h] [rbp-180h]
  int v154; // [rsp+98h] [rbp-170h]
  int v155; // [rsp+9Ch] [rbp-16Ch]
  __int64 v156; // [rsp+A0h] [rbp-168h]
  __int64 v157; // [rsp+A8h] [rbp-160h]
  __int64 v158; // [rsp+A8h] [rbp-160h]
  unsigned __int8 v159; // [rsp+BCh] [rbp-14Ch] BYREF
  char v160; // [rsp+BDh] [rbp-14Bh]
  char v161; // [rsp+BEh] [rbp-14Ah]
  __m128i v162; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v163; // [rsp+D0h] [rbp-138h]
  unsigned __int64 v164; // [rsp+D8h] [rbp-130h]
  __int64 v165; // [rsp+E0h] [rbp-128h]
  unsigned __int64 v166; // [rsp+E8h] [rbp-120h]
  unsigned int v167; // [rsp+F0h] [rbp-118h]
  void *ptr; // [rsp+100h] [rbp-108h] BYREF
  __int128 v169; // [rsp+108h] [rbp-100h]
  __m128i v170; // [rsp+118h] [rbp-F0h]
  __int64 v171; // [rsp+128h] [rbp-E0h]
  int v172; // [rsp+130h] [rbp-D8h]
  __m128i v173; // [rsp+140h] [rbp-C8h]
  __m128i v174; // [rsp+150h] [rbp-B8h]
  __m128i v175; // [rsp+160h] [rbp-A8h]
  __m128i v176; // [rsp+170h] [rbp-98h]
  __m128i v177; // [rsp+180h] [rbp-88h]
  __m128i v178; // [rsp+190h] [rbp-78h]
  __m128i v179; // [rsp+1A0h] [rbp-68h]
  __m128i v180; // [rsp+1B0h] [rbp-58h]
  unsigned __int64 v181; // [rsp+1C8h] [rbp-40h]

  v153 = a4;
  v181 = __readfsqword(0x28u);
  v137 = *(_DWORD *)(a2 + 44) & 0xFFFFFFBF;
  if ( *(_BYTE *)(a1 + 52) )
    v137 = *(_DWORD *)(a2 + 44) | 0x40;
  *(_DWORD *)(a2 + 44) = v137;
  if ( a4 )
  {
    v154 = 1 << (a4 - 1);
    v148 = v154;
  }
  else
  {
    v148 = 0;
    v154 = 0;
  }
  v149 = *(_QWORD *)(a2 + 8);
  if ( !v149 )
  {
    v150 = 0;
    v144 = 0;
LABEL_141:
    v148 = 1;
    v154 = 1;
    goto LABEL_142;
  }
  v132 = 0;
  v126 = 0;
  v123 = 0;
  v134 = 0;
  v144 = 0;
  v155 = 0;
  v149 = 0;
  v150 = 0;
  v129 = v148;
  v6 = *(_QWORD *)a2;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
LABEL_7:
    v164 = v8;
    v10 = 24 * v9;
    v162.m128i_i64[0] = v134;
    v162.m128i_i64[1] = v123;
    v163 = v126;
    v165 = v132;
    v166 = v129;
    v11 = v9 << 7;
    v167 = v137;
    v12 = v6 + (v9 << 7);
    *(_DWORD *)(v12 + 116) &= ~0x40u;
    *(_BYTE *)(v12 + 120) = 0;
    v13 = *(unsigned int *)(*a3 + 24 * v9 + 16);
    if ( (*(_BYTE *)(v12 + 64) & 0xF) != 0xE )
    {
      if ( v126 )
      {
        if ( !v123 || (getinf(57) & 0xF) == 6 || (getinf(67) & 0x80u) != 0LL )
          v14 = 8;
        else
          v14 = v126;
        if ( (getinf(57) & 0xF) != 6 && (getinf(67) & 0x80u) == 0LL )
        {
          if ( v123 )
          {
            if ( v7 < v123 )
              goto LABEL_268;
            v22 = v123;
            if ( v7 - v123 + ((v123 + v14 - 1) & -v14) < v7 )
              goto LABEL_270;
            v7 = v7 - v123 + ((v123 + v14 - 1) & -v14);
          }
          if ( v129 && 8 * v129 < v14 )
            v14 = 8 * v129;
        }
        v15 = 0;
        v7 = (v7 + v14 - 1) & -v14;
      }
      else
      {
        v15 = v123;
      }
      v16 = 1;
      if ( !*(_BYTE *)(a1 + 52) )
        v16 = v13;
      if ( v148 < v16 && v148 )
      {
        v17 = v154;
        v16 = v148;
      }
      else
      {
        v17 = v16;
      }
      v18 = (v7 + 8 * v17 - 1) & (-8 * v17);
      v19 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 == v18 )
      {
        v26 = *(_QWORD *)(v12 + 8);
        if ( !v26 )
        {
          v27 = v137;
          v28 = v132;
          *(_DWORD *)(v12 + 112) = v17;
          v16 = v8;
          v29 = v129;
LABEL_52:
          v140 = v7;
          v30 = v144++;
          goto LABEL_53;
        }
        if ( !v16 )
          goto LABEL_245;
        v27 = v137;
        v28 = v132;
        *(_DWORD *)(v12 + 112) = v17;
        v16 = v8;
        v29 = v129;
LABEL_77:
        v140 = v7;
        v26 = 0;
        v30 = v144++;
        goto LABEL_53;
      }
      if ( *(_QWORD *)v12 >= v18 )
        goto LABEL_274;
      if ( (*(_BYTE *)(a2 + 44) & 0x20) != 0 )
        return (unsigned int)-1;
      *(_DWORD *)(v12 + 116) |= 0x40u;
      v16 = 1;
      v18 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18 >= v19 )
      {
        if ( v19 < v18 )
          goto LABEL_29;
      }
      else
      {
LABEL_274:
        do
        {
          if ( v16 >= *(_QWORD *)(a1 + 40) )
            break;
          v16 *= 2LL;
          v18 = (v7 + 8 * (int)v16 - 1) & (-8 * (int)v16);
        }
        while ( v18 < v19 );
        if ( v19 < v18 )
        {
          do
          {
LABEL_29:
            v16 >>= 1;
            if ( !v16 )
              return (unsigned int)-1;
            v20 = v7 + 8 * (int)v16 - 1;
          }
          while ( v19 < (v20 & (-8 * (int)v16)) );
          v18 = v20 & (-8 * (int)v16);
        }
        if ( v19 != v18 )
        {
          if ( !*(_QWORD *)(v12 + 8) )
          {
LABEL_66:
            v142 = v13;
            v28 = v132;
            v26 = 0;
            v140 = v7;
            *(_DWORD *)(v12 + 112) = v13;
            v30 = v144;
LABEL_67:
            if ( (*(_BYTE *)(a1 + 48) & 4) == 0 )
              return (unsigned int)-1;
            v35 = *(_QWORD *)v12;
            v162.m128i_i64[1] = v15;
            v162.m128i_i64[0] = v140;
            v163 = v26;
            v164 = v142;
            v165 = v28;
            v166 = v129;
            v167 = v137;
            v36 = sub_553C00(&v162, (__int64 *)a2, a3, v30, v7, v35, a5, a6, v13);
            if ( v36 == -1 )
              return (unsigned int)-1;
            if ( v36 == 1 )
            {
              v27 = v137;
              v144 = v30;
              v16 = v8;
              v29 = v129;
              v28 = v132;
              --v30;
              v26 = v126;
              v15 = v123;
              v140 = v134;
              ++v150;
              goto LABEL_53;
            }
            v15 = v162.m128i_i64[1];
            v26 = v163;
            v16 = v164;
            v140 = v162.m128i_i64[0];
            v28 = v165;
            v144 = v30 + 1;
            v29 = v166;
            v27 = v167;
            v9 = v30 + 1;
            if ( v30 >= 0 )
              goto LABEL_54;
LABEL_71:
            v137 = v27;
            v8 = v16;
            v7 = 0;
            v129 = v29;
            v32 = *(_QWORD *)(a2 + 8);
            v132 = v28;
            v126 = v26;
            v123 = v15;
            v134 = v140;
            goto LABEL_72;
          }
LABEL_83:
          if ( !v13 )
            goto LABEL_245;
          goto LABEL_66;
        }
      }
      v139 = v15;
      v37 = getinf(57);
      v26 = *(_QWORD *)(v12 + 8);
      v15 = v139;
      if ( ((v37 & 0xF) != 6 || v148 >= v16 || !v148) && ((*(_BYTE *)(a2 + 44) & 0x20) == 0 || v16 <= 8) )
      {
        if ( v16 >> 1 )
        {
          _BitScanReverse64(&v65, v16 >> 1);
          *(_BYTE *)(v12 + 120) = v65 + 2;
          if ( (*(_BYTE *)(v12 + 116) & 0x40) == 0 )
            goto LABEL_187;
LABEL_189:
          v27 = v137;
          v28 = v132;
          *(_DWORD *)(v12 + 112) = v16;
          v29 = v129;
          goto LABEL_77;
        }
        *(_BYTE *)(v12 + 120) = 1;
        if ( (*(_BYTE *)(v12 + 116) & 0x40) != 0 )
        {
          if ( !v26 )
            goto LABEL_189;
        }
        else
        {
LABEL_187:
          if ( v155 < v16 )
          {
            v155 = v16;
            goto LABEL_189;
          }
          if ( !v26 )
          {
            v27 = v137;
            v28 = v132;
            *(_DWORD *)(v12 + 112) = v16;
            v29 = v129;
            goto LABEL_52;
          }
        }
        if ( !v16 )
          goto LABEL_245;
        goto LABEL_189;
      }
      if ( !v26 )
        goto LABEL_66;
      goto LABEL_83;
    }
    v151 = 0;
    v157 = v10;
    while ( 1 )
    {
      v23 = *(_QWORD *)(v12 + 8);
      LODWORD(ptr) = 0;
      v159 = v13;
      v160 = v23;
      v161 = 0;
      v162.m128i_i64[0] = v134;
      v164 = v8;
      v162.m128i_i64[1] = v123;
      v167 = v137;
      v163 = v126;
      v165 = v132;
      v166 = v129;
      v24 = sub_54C7D0((unsigned __int64 *)&v162, &v159, v7, &ptr);
      v25 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 == v24 )
      {
        v152 = v13;
        if ( !*(_BYTE *)(a1 + 52) )
        {
          v44 = (int)ptr;
          if ( v155 >= (int)ptr )
            v44 = v155;
          v155 = v44;
        }
        v15 = v162.m128i_i64[1];
        v26 = v163;
        v140 = v162.m128i_i64[0];
        v16 = v164;
        v28 = v165;
        if ( !v151 )
        {
          if ( !*(_QWORD *)(v12 + 8) || v164 )
          {
            v27 = v137;
            *(_DWORD *)(v12 + 112) = v164;
            v29 = v129;
            v30 = v144++;
            goto LABEL_53;
          }
          goto LABEL_245;
        }
        v142 = v164;
        v30 = v144;
        v151 = 0;
        goto LABEL_165;
      }
      if ( (__int64)(v25 - v24) >= 0 )
      {
        v152 = v13;
        if ( v160 )
        {
          if ( v151 )
            goto LABEL_184;
          if ( *(_QWORD *)(v12 + 8) && !v13 )
            goto LABEL_245;
          *(_DWORD *)(v12 + 112) = v13;
        }
        else
        {
          v58 = v144;
          v59 = *(_QWORD *)(a2 + 8);
          v60 = v144;
          if ( v144 >= v59 )
            goto LABEL_223;
          while ( !*(_QWORD *)(*(_QWORD *)a2 + (v58 << 7) + 8) )
          {
            v58 = ++v60;
            if ( v60 >= v59 )
              goto LABEL_223;
          }
          v61 = *a3 + 24 * v58;
          v13 = *(unsigned int *)(v61 + 16);
          if ( *(_DWORD *)(v61 + 16) )
          {
            if ( v151 )
            {
              v152 = *(_DWORD *)(v61 + 16);
LABEL_184:
              v142 = v8;
              v16 = v13;
              v28 = v132;
              v26 = v126;
              v15 = v123;
              v30 = v144;
              v140 = v134;
              goto LABEL_165;
            }
            *(_DWORD *)(v12 + 112) = v13;
          }
          else
          {
LABEL_223:
            for ( i = 64; i > 8; i >>= 1 )
            {
              if ( !(v25 % i) )
                break;
            }
            v13 = i >> 3;
            if ( v151 )
            {
              v152 = v13;
              goto LABEL_184;
            }
            if ( *(_QWORD *)(v12 + 8) && !v13 )
              goto LABEL_245;
            *(_DWORD *)(v12 + 112) = v13;
          }
        }
        v28 = v132;
        v142 = v8;
        v26 = v126;
        v15 = v123;
        v140 = v134;
        v30 = v144;
        goto LABEL_67;
      }
      if ( !v160 )
        break;
      if ( (getinf(57) & 0xF) == 6 )
        return (unsigned int)-1;
      if ( (getinf(67) & 0x80u) != 0LL )
        return (unsigned int)-1;
      v151 = v8 != 0 && (int)v13 != v8;
      if ( !v151 )
        return (unsigned int)-1;
      v13 = v8;
    }
    v152 = v13;
    v45 = (_QWORD *)(*(_QWORD *)a2 + v11);
    clear_tinfo_t(v45 + 8);
    v46 = (void *)v45[5];
    v47 = v157;
    if ( v46 )
    {
      v45[6] = 0;
      qfree(v46);
      v47 = v157;
    }
    v48 = (void *)v45[2];
    if ( v48 )
    {
      v45[3] = 0;
      v141 = v47;
      qfree(v48);
      v47 = v141;
    }
    v143 = v47;
    memmove(v45, v45 + 16, *(_QWORD *)a2 + (*(_QWORD *)(a2 + 8) << 7) - (_QWORD)v45 - 128LL);
    --*(_QWORD *)(a2 + 8);
    memmove((void *)(v143 + *a3), (const void *)(v143 + *a3 + 24), 24 * a3[1]-- - 24 - v143);
    v30 = v144 - 1;
    if ( !v151 )
    {
      if ( !*(_QWORD *)(v12 + 8) || v13 )
      {
        v27 = v137;
        *(_DWORD *)(v12 + 112) = v13;
        v16 = v8;
        v29 = v129;
        v28 = v132;
        v26 = v126;
        v15 = v123;
        v140 = v134;
        goto LABEL_53;
      }
LABEL_245:
      if ( !under_debugger )
        interr(867);
LABEL_271:
      BUG();
    }
    v142 = v8;
    v16 = v13;
    v151 = 0;
    v28 = v132;
    v26 = v126;
    v15 = v123;
    v140 = v134;
LABEL_165:
    v158 = v26;
    v156 = v15;
    v145 = v28;
    get_tinfo_details(*(_QWORD *)(v12 + 64), 14, &v159);
    v159 = v152;
    if ( !(unsigned __int8)create_tinfo(v12 + 64, 14, 14, &v159) )
      return (unsigned int)-1;
    v28 = v145;
    v15 = v156;
    v26 = v158;
    *(_DWORD *)(*a3 + 24LL * v30 + 16) = v13;
    if ( *(_QWORD *)(v12 + 8) && !v16 )
      goto LABEL_245;
    *(_DWORD *)(v12 + 112) = v16;
    if ( v151 )
      goto LABEL_67;
    v27 = v137;
    v29 = v129;
    v144 = v30 + 1;
    v16 = v142;
LABEL_53:
    v9 = v144;
    if ( v30 < 0 )
      goto LABEL_71;
LABEL_54:
    v6 = *(_QWORD *)a2;
    v31 = *(_QWORD *)a2 + ((__int64)v30 << 7);
    if ( *(_BYTE *)(a2 + 51) )
      break;
    v138 = *(_QWORD *)a2 + ((__int64)v30 << 7);
    v135 = v26;
    v133 = v15;
    v39 = (_QWORD *)(*a3 + 24LL * v30);
    v130 = v28;
    v127 = (__int64)v30 << 7;
    v7 = v39[1];
    v40 = getinf(57);
    v41 = v127;
    v28 = v130;
    v15 = v133;
    v26 = v135;
    v31 = v138;
    if ( (v40 & 0xF) == 6 )
    {
      v42 = *(_QWORD *)(a2 + 8);
      v43 = *(_QWORD *)a2;
LABEL_90:
      v32 = v42;
      if ( (*(_BYTE *)(v43 + v41 + 116) & 0x20) == 0 )
        goto LABEL_92;
      goto LABEL_91;
    }
    v62 = getinf(67);
    v41 = (__int64)v30 << 7;
    v63 = v62;
    v28 = v130;
    v15 = v133;
    v43 = *(_QWORD *)a2;
    v32 = *(_QWORD *)(a2 + 8);
    v26 = v135;
    v42 = v32;
    v64 = (v63 & 0x80) == 0;
    v31 = v138;
    if ( !v64 )
      goto LABEL_90;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + v127 + 116) & 0x20) == 0
      || v32 != v30 + 1LL && (*(_BYTE *)(v43 + v127 + 244) & 0x20) != 0 )
    {
      goto LABEL_92;
    }
LABEL_91:
    v7 = *(_QWORD *)v31 + 8LL * *v39;
LABEL_92:
    v33 = *(_QWORD *)(v31 + 8);
    if ( v33 || (*(_BYTE *)(v31 + 64) & 0xF) != 0xE )
    {
LABEL_59:
      v34 = *(_QWORD *)v31 + v33;
      if ( v149 >= v34 )
        v34 = v149;
      v149 = v34;
    }
    v137 = v27;
    v8 = v16;
    v129 = v29;
    v132 = v28;
    v126 = v26;
    v123 = v15;
    v134 = v140;
LABEL_72:
    if ( v9 >= v32 )
      goto LABEL_87;
    v6 = *(_QWORD *)a2;
  }
  v32 = *(_QWORD *)(a2 + 8);
  v33 = *(_QWORD *)(v31 + 8);
  if ( v9 < v32 )
  {
    if ( v33 )
    {
      v57 = *(_QWORD *)v31 + v33;
      if ( v149 >= v57 )
        v57 = v149;
      v149 = v57;
    }
    else if ( (*(_BYTE *)(v31 + 64) & 0xF) != 0xE )
    {
      v28 = v132;
      v16 = v8;
      v27 = v137;
      v29 = v129;
      v26 = v126;
      v15 = v123;
      v140 = v134;
      goto LABEL_59;
    }
    goto LABEL_7;
  }
  if ( v33 )
  {
    v49 = *(_QWORD *)v31 + v33;
    v38 = v15;
    if ( v149 >= v49 )
      v49 = v149;
    v149 = v49;
  }
  else
  {
    if ( (*(_BYTE *)(v31 + 64) & 0xF) != 0xE )
      goto LABEL_59;
LABEL_87:
    v38 = v15;
  }
  if ( v26 )
  {
    if ( !v38 || (v124 = v26, (getinf(57) & 0xF) == 6) || (getinf(67) & 0x80u) != 0LL )
      v50 = 8;
    else
      v50 = v124;
    if ( (getinf(57) & 0xF) != 6 && (getinf(67) & 0x80u) == 0LL )
    {
      if ( v38 )
      {
        if ( v149 < v38 )
        {
LABEL_268:
          if ( !under_debugger )
            interr(1138);
          goto LABEL_271;
        }
        v22 = v149;
        if ( v149 - v38 + ((v38 + v50 - 1) & -v50) < v149 )
LABEL_270:
          sub_548C70(67, v22, *(double *)a5.m128i_i64, *(double *)a6.m128i_i64);
        v149 = v149 - v38 + ((v38 + v50 - 1) & -v50);
      }
      if ( v29 && 8 * v29 < v50 )
        v50 = 8 * v29;
    }
    v149 = (v149 + v50 - 1) & -v50;
  }
  if ( !v148 || v148 >= v155 )
  {
    if ( !v155 )
      goto LABEL_141;
    v154 = v155;
    v148 = v155;
  }
LABEL_142:
  v51 = *(_QWORD *)(a1 + 32);
  LODWORD(v52) = v148;
  v53 = *(_QWORD *)(a2 + 24);
  if ( v51 >= v148 )
    v52 = *(_QWORD *)(a1 + 32);
  if ( ((v149 + 8 * (int)v52 - 1) & (-8 * (int)v52)) >= 8 * v53 )
    goto LABEL_154;
  if ( !v149 )
  {
    v112 = 1;
    if ( *(char *)(a2 + 44) >= 0 )
    {
      v122 = getinf(57);
      v112 = 0;
      if ( (v122 & 0xF) != 6 )
        v112 = (getinf(67) & 0x80) == 0;
    }
    if ( v112 >= v53 )
      goto LABEL_153;
  }
  if ( (*(_BYTE *)(a1 + 48) & 4) == 0 )
    return (unsigned int)-1;
  if ( *(_BYTE *)(a2 + 51) )
  {
    v149 = 0;
    LODWORD(v54) = 0;
  }
  else
  {
    v54 = (v149 + 7) >> 3;
    v149 = (v149 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v55 = *(_QWORD *)(a2 + 24) - v54;
  v125 = v150 + 1;
  v131 = (__int64)(v144 - 1) << 7;
  while ( 2 )
  {
    if ( v144 > 0 )
    {
      if ( (getinf(57) & 0xF) == 6 )
      {
        v66 = *(_QWORD *)a2;
      }
      else
      {
        v109 = getinf(67);
        v66 = *(_QWORD *)a2;
        if ( (v109 & 0x80) == 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)a2 + v131 + 116) & 0x20) == 0 )
            break;
          if ( v144 == *(_QWORD *)(a2 + 8) )
          {
            m128i_i8 = (const char *)a3;
            if ( !(unsigned __int8)sub_5538F0((__int64 *)a2, a3, v144, v149, v55) )
              return (unsigned int)-1;
            v150 = v125;
LABEL_197:
            ptr = nullptr;
            v169 = 0;
            v69 = *(_QWORD *)(a2 + 8);
            if ( v69 )
            {
              v95 = 0;
              v96 = (char *)qalloc_or_throw(v69 << 7, m128i_i8);
              *((_QWORD *)&v169 + 1) = v69;
              ptr = v96;
              v97 = v96;
              do
              {
                v103 = (const __m128i *)(*(_QWORD *)a2 + (v95 << 7));
                v104 = _mm_loadu_si128(v103);
                *((_QWORD *)v97 + 2) = 0;
                v105 = v103;
                *(_OWORD *)(v97 + 24) = 0;
                *(__m128i *)v97 = v104;
                v106 = v103[1].m128i_u64[1];
                if ( v106 )
                {
                  v107 = (void *)qalloc_or_throw(v103[1].m128i_i64[1], m128i_i8);
                  *((_QWORD *)v97 + 4) = v106;
                  *((_QWORD *)v97 + 2) = v107;
                  m128i_i8 = (const char *)v105[1].m128i_i64[0];
                  memcpy(v107, m128i_i8, v106);
                  *((_QWORD *)v97 + 3) = v106;
                }
                *((_QWORD *)v97 + 5) = 0;
                *((_OWORD *)v97 + 3) = 0;
                v98 = v105[3].m128i_u64[0];
                if ( v98 )
                {
                  v108 = (void *)qalloc_or_throw(v105[3].m128i_i64[0], m128i_i8);
                  *((_QWORD *)v97 + 5) = v108;
                  *((_QWORD *)v97 + 7) = v98;
                  memcpy(v108, (const void *)v105[2].m128i_i64[1], v98);
                  *((_QWORD *)v97 + 6) = v98;
                }
                *((_QWORD *)v97 + 8) = 0;
                m128i_i8 = v105[4].m128i_i8;
                copy_tinfo_t(v97 + 64);
                v99 = _mm_loadu_si128((const __m128i *)((char *)v105 + 72));
                ++v95;
                v97 += 128;
                *((_QWORD *)v97 - 3) = v105[6].m128i_i64[1];
                v100 = v105[7].m128i_i32[0];
                *(__m128i *)(v97 - 56) = v99;
                v101 = _mm_loadu_si128((const __m128i *)((char *)v105 + 88));
                *((_DWORD *)v97 - 4) = v100;
                v102 = v105[7].m128i_i32[1];
                *(__m128i *)(v97 - 40) = v101;
                *((_DWORD *)v97 - 3) = v102;
                *(v97 - 8) = v105[7].m128i_i8[8];
              }
              while ( v69 != v95 );
              *(_QWORD *)&v169 = v69;
            }
            v70 = _mm_loadu_si128((const __m128i *)(a2 + 24));
            v171 = *(_QWORD *)(a2 + 40);
            v71 = *(_DWORD *)(a2 + 48);
            v170 = v70;
            v172 = v71;
            v72 = sub_5501A0((__int64 *)&ptr, *(double *)v70.m128i_i64, *(double *)a6.m128i_i64);
            v73 = (char *)ptr;
            if ( !v72 )
            {
              if ( ptr )
              {
                v117 = v169;
                v118 = (char *)ptr + 64;
                v119 = 0;
                if ( (_QWORD)v169 )
                {
                  do
                  {
                    clear_tinfo_t(v118);
                    v120 = *((void **)v118 - 3);
                    if ( v120 )
                    {
                      *((_QWORD *)v118 - 2) = 0;
                      qfree(v120);
                    }
                    v121 = *((void **)v118 - 6);
                    if ( v121 )
                    {
                      *((_QWORD *)v118 - 5) = 0;
                      qfree(v121);
                    }
                    ++v119;
                    v118 += 128;
                  }
                  while ( v117 != v119 );
                }
                qfree(v73);
              }
              return (unsigned int)-1;
            }
            v74 = v169;
            v75 = (char *)ptr + 128 * (_QWORD)v169 - 128;
            v128 = *(_QWORD *)(a2 + 24);
            v76 = _mm_loadu_si128((const __m128i *)v75);
            v149 = _mm_add_epi64(v76, _mm_srli_si128(v76, 8)).m128i_u64[0];
            v55 = v128 - (v149 >> 3);
            if ( (_DWORD)v128 == (unsigned int)(v149 >> 3) )
            {
              if ( ptr )
              {
                v113 = (char *)ptr + 64;
                v114 = 0;
                if ( (_QWORD)v169 )
                {
                  do
                  {
                    clear_tinfo_t(v113);
                    v115 = *((void **)v113 - 3);
                    if ( v115 )
                    {
                      *((_QWORD *)v113 - 2) = 0;
                      qfree(v115);
                    }
                    v116 = *((void **)v113 - 6);
                    if ( v116 )
                    {
                      *((_QWORD *)v113 - 5) = 0;
                      qfree(v116);
                    }
                    ++v114;
                    v113 += 128;
                  }
                  while ( v74 != v114 );
                }
                qfree(v73);
              }
              goto LABEL_153;
            }
            sub_3573A0((char **)v75 + 2);
            v77 = (__m128i *)(*(_QWORD *)a2 + ((__int64)v144 << 7));
            v78 = _mm_loadu_si128(v77);
            *v77 = _mm_loadu_si128((const __m128i *)v75);
            v79 = _mm_loadu_si128(v77 + 1);
            v80 = _mm_loadu_si128((const __m128i *)v75 + 1);
            v81 = _mm_loadu_si128(v77 + 2);
            v82 = _mm_loadu_si128(v77 + 3);
            v83 = _mm_loadu_si128(v77 + 4);
            v173 = v78;
            v77[1] = v80;
            v84 = _mm_loadu_si128(v77 + 5);
            a6 = _mm_loadu_si128(v77 + 6);
            v85 = _mm_loadu_si128((const __m128i *)v75 + 2);
            v86 = _mm_loadu_si128(v77 + 7);
            v174 = v79;
            v175 = v81;
            v77[2] = v85;
            v87 = _mm_loadu_si128((const __m128i *)v75 + 3);
            v176 = v82;
            v77[3] = v87;
            v88 = _mm_loadu_si128((const __m128i *)v75 + 4);
            v177 = v83;
            v77[4] = v88;
            v89 = _mm_loadu_si128((const __m128i *)v75 + 5);
            v178 = v84;
            v77[5] = v89;
            v90 = _mm_loadu_si128((const __m128i *)v75 + 6);
            v179 = a6;
            v180 = v86;
            v77[6] = v90;
            ++v144;
            v77[7] = _mm_loadu_si128((const __m128i *)v75 + 7);
            *(__m128i *)v75 = v78;
            *((__m128i *)v75 + 1) = v79;
            *((__m128i *)v75 + 2) = v81;
            *((__m128i *)v75 + 3) = v82;
            *((__m128i *)v75 + 4) = v83;
            *((__m128i *)v75 + 5) = v84;
            *((__m128i *)v75 + 6) = a6;
            *((__m128i *)v75 + 7) = v86;
            if ( v73 )
            {
              v91 = v73 + 64;
              v92 = 0;
              if ( v74 )
              {
                do
                {
                  clear_tinfo_t(v91);
                  v93 = *((void **)v91 - 3);
                  if ( v93 )
                  {
                    *((_QWORD *)v91 - 2) = 0;
                    qfree(v93);
                  }
                  v94 = *((void **)v91 - 6);
                  if ( v94 )
                  {
                    *((_QWORD *)v91 - 5) = 0;
                    qfree(v94);
                  }
                  ++v92;
                  v91 += 128;
                }
                while ( v74 != v92 );
              }
              qfree(v73);
            }
            ++v125;
            v131 += 128;
            continue;
          }
          v67 = (*(_BYTE *)(v66 + ((__int64)v144 << 7) + 116) & 0x20) == 0;
LABEL_195:
          m128i_i8 = (const char *)a3;
          if ( !(unsigned __int8)sub_5538F0((__int64 *)a2, a3, v144, v149, v55) )
            return (unsigned int)-1;
          v150 = v125;
          if ( !v67 )
            goto LABEL_153;
          goto LABEL_197;
        }
      }
      v67 = (*(_BYTE *)(v66 + v131 + 116) & 0x20) != 0;
      goto LABEL_195;
    }
    break;
  }
  if ( !(unsigned __int8)sub_5538F0((__int64 *)a2, a3, v144, v149, v55) )
    return (unsigned int)-1;
  v150 = v125;
LABEL_153:
  v51 = *(_QWORD *)(a1 + 32);
LABEL_154:
  if ( v148 < v51 )
  {
    *(_QWORD *)(a1 + 24) = v51;
    v56 = v51 >> 1;
    goto LABEL_156;
  }
  v111 = *(_QWORD *)(a1 + 24);
  if ( v111 )
  {
    v56 = v111 >> 1;
    if ( v56 )
    {
LABEL_156:
      _BitScanReverse64(&v56, v56);
      LOBYTE(v56) = v56 + 2;
    }
    else
    {
      LOBYTE(v56) = 1;
    }
    *(_BYTE *)(a2 + 49) = v56;
  }
  *(_DWORD *)(a2 + 40) = v154;
  *(_BYTE *)(a2 + 50) = v153;
  if ( 8LL * *(_QWORD *)(a2 + 24) < v149 && !*(_BYTE *)(a2 + 51) )
    return (unsigned int)-2;
  return v150;
}

