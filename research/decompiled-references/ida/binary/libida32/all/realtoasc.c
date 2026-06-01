__int64 __fastcall realtoasc(_WORD *a1, __int64 a2, const __m128i *a3, int a4)
{
  int v4; // ebp
  unsigned int fpvalue_kind; // eax
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  const char *v10; // rsi
  __int16 v12; // ax
  __int64 v13; // r12
  unsigned int v14; // eax
  int v15; // r9d
  int v16; // edi
  int v17; // esi
  __int64 v18; // r13
  __int64 v19; // rbx
  int v20; // r8d
  int v21; // r9d
  char *v22; // rdi
  int v23; // eax
  int v24; // ebx
  __m128i *v25; // r10
  char *v26; // r15
  int v27; // ebx
  char *v28; // rbp
  int v29; // r12d
  __m128i *v30; // r10
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __int16 v33; // ax
  char *v34; // rax
  _WORD *v35; // rdi
  char v36; // al
  int v37; // r11d
  __int64 v38; // rbp
  __m128i *v39; // rcx
  int v40; // edx
  __int16 v41; // ax
  __m128i v42; // xmm0
  int v43; // edx
  __m128i *v44; // rcx
  __int16 v45; // ax
  int v46; // edx
  __m128i *v47; // rcx
  __int16 v48; // ax
  unsigned __int16 *v49; // rcx
  unsigned int v50; // edi
  __m128i *v51; // rdx
  int v52; // eax
  int v53; // esi
  unsigned int v54; // eax
  unsigned __int16 v55; // ax
  char *v56; // r8
  char *v57; // rcx
  char v58; // dl
  char *i; // rsi
  char v60; // al
  int v61; // edx
  char v62; // al
  int v63; // edx
  unsigned int v64; // r13d
  unsigned int v65; // ecx
  __m128i *v66; // r9
  int v67; // edi
  __int16 v68; // ax
  __m128i v69; // xmm0
  int v70; // edi
  __m128i *v71; // r9
  __int16 v72; // ax
  int v73; // edi
  __m128i *v74; // r9
  __int16 v75; // ax
  unsigned __int16 *v76; // r9
  unsigned int v77; // r10d
  __m128i *v78; // rdi
  int v79; // eax
  int v80; // edx
  unsigned int v81; // eax
  __int16 v82; // ax
  unsigned int v83; // ebx
  char *v84; // r12
  __m128i v85; // xmm0
  __int16 epi16; // dx
  int v87; // ecx
  int v88; // eax
  unsigned int v89; // eax
  __m128i *v90; // rdi
  unsigned int v91; // esi
  unsigned int v92; // eax
  __m128i *v93; // rcx
  char *v94; // rbx
  unsigned int v95; // r13d
  __m128i v96; // xmm0
  __int64 v97; // rax
  __int64 v98; // rdi
  __int64 v99; // r10
  unsigned int v100; // edx
  int v101; // eax
  _WORD *v102; // rsi
  char *v103; // rax
  char v104; // cl
  char *v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rsi
  int v108; // eax
  size_t v109; // rax
  __int64 v110; // rbx
  size_t v111; // rax
  int v112; // r11d
  int v113; // esi
  size_t v114; // r14
  int v115; // r10d
  unsigned int v116; // eax
  int v117; // r10d
  char *v118; // rcx
  int v119; // r8d
  int v120; // r9d
  unsigned int v121; // r10d
  char *v122; // rcx
  int v123; // eax
  __m128i *v124; // rdx
  unsigned __int16 *v125; // rcx
  __m128i *v126; // r10
  __m128i v127; // xmm0
  int v128; // r9d
  unsigned int v129; // esi
  __m128i *v130; // r11
  int v131; // eax
  int v132; // edi
  unsigned int v133; // eax
  __m128i v134; // xmm0
  size_t v135; // rax
  __int64 v136; // rbx
  signed int v137; // r13d
  unsigned int v138; // eax
  signed int v139; // ebx
  int v140; // eax
  size_t v141; // rbx
  size_t v142; // rax
  int v143; // eax
  int v144; // eax
  char *v145; // rdi
  size_t v146; // rdx
  char v147; // [rsp+0h] [rbp-188h]
  unsigned int src; // [rsp+10h] [rbp-178h]
  char *srca; // [rsp+10h] [rbp-178h]
  int srcb; // [rsp+10h] [rbp-178h]
  int v152; // [rsp+18h] [rbp-170h]
  __m128i *v153; // [rsp+18h] [rbp-170h]
  int v155; // [rsp+20h] [rbp-168h]
  int v156; // [rsp+24h] [rbp-164h]
  int v157; // [rsp+24h] [rbp-164h]
  __m128i *v158; // [rsp+28h] [rbp-160h]
  unsigned int v159; // [rsp+30h] [rbp-158h]
  unsigned int n; // [rsp+34h] [rbp-154h]
  char *n_4; // [rsp+38h] [rbp-150h]
  int v162; // [rsp+40h] [rbp-148h]
  __m128i *v163; // [rsp+48h] [rbp-140h]
  __m128i v164; // [rsp+50h] [rbp-138h] BYREF
  __m128i v165; // [rsp+60h] [rbp-128h] BYREF
  __m128i v166; // [rsp+70h] [rbp-118h] BYREF
  __m128i si128; // [rsp+80h] [rbp-108h] BYREF
  __m128i v168; // [rsp+90h] [rbp-F8h] BYREF
  int v169; // [rsp+A0h] [rbp-E8h]
  __int16 v170; // [rsp+A4h] [rbp-E4h]
  __m128i v171; // [rsp+B0h] [rbp-D8h] BYREF
  __int32 v172; // [rsp+C0h] [rbp-C8h]
  _WORD v173[6]; // [rsp+C4h] [rbp-C4h] BYREF
  __m128i v174; // [rsp+D0h] [rbp-B8h] BYREF
  __int32 v175; // [rsp+E0h] [rbp-A8h]
  __int16 v176; // [rsp+E4h] [rbp-A4h]
  __m128i v177; // [rsp+F0h] [rbp-98h] BYREF
  __int32 v178; // [rsp+100h] [rbp-88h]
  __int16 v179; // [rsp+104h] [rbp-84h] BYREF
  char v180[10]; // [rsp+106h] [rbp-82h] BYREF
  char s[56]; // [rsp+110h] [rbp-78h] BYREF
  unsigned __int64 v182; // [rsp+148h] [rbp-40h]

  v182 = __readfsqword(0x28u);
  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    BUG();
  }
  v4 = a2;
  fpvalue_kind = get_fpvalue_kind(a3, 0);
  if ( fpvalue_kind == 3 )
  {
    v9 = a2;
    v10 = "+Inf";
    return qstrncpy(a1, v10, v9);
  }
  if ( fpvalue_kind > 3 )
  {
    if ( fpvalue_kind == 4 )
    {
      v9 = a2;
      v10 = "-Inf";
      return qstrncpy(a1, v10, v9);
    }
  }
  else
  {
    if ( !fpvalue_kind )
      return v182 - __readfsqword(0x28u);
    if ( fpvalue_kind == 2 )
    {
      v9 = a2;
      v10 = "NaN";
      return qstrncpy(a1, v10, v9);
    }
  }
  n = BYTE1(a4);
  v159 = BYTE2(a4);
  if ( BYTE2(a4) && (BYTE1(a4) < (unsigned int)BYTE2(a4) + 3 || (unsigned int)BYTE1(a4) + 3 >= (unsigned __int64)a2) )
  {
    v159 = 0;
    n = 0;
  }
  n_4 = (char *)&byte_22CD811;
  v164 = _mm_loadu_si128(a3);
  v12 = v164.m128i_i16[7];
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384840);
  if ( v164.m128i_i16[7] < 0 )
  {
    v12 = v164.m128i_i16[7] & 0x7FFF;
    v164.m128i_i16[7] &= ~0x8000u;
    n_4 = "-";
  }
  if ( !v12 )
  {
    if ( !v159 )
    {
      qsnprintf((int)a1, a2, (int)"%s0.0", (int)n_4, v7, v8, v147);
      return v182 - __readfsqword(0x28u);
    }
    strcpy(s, "0.0");
    if ( n )
    {
      v156 = 0;
      LODWORD(v13) = v159;
      n = n - v159 - 3;
      goto LABEL_22;
    }
    goto LABEL_98;
  }
  v23 = ecmp(&unk_2399940, &v164);
  v156 = v23;
  if ( !v23 )
  {
    v30 = &v174;
    goto LABEL_48;
  }
  if ( v23 >= 0 )
  {
    if ( v164.m128i_i16[7] )
    {
      emovi(&v164, &v174);
      v126 = &v174;
      if ( (v176 & 7) != 0 )
      {
        v157 = 0;
      }
      else
      {
        do
        {
          v127 = _mm_load_si128(v126);
          v172 = v126[1].m128i_i32[0];
          v171 = v127;
          v173[0] = 0;
          sub_80CC40((__int64)&v171);
          sub_80CC40((__int64)&v171);
          v129 = 0;
          v125 = v173;
          v124 = v130;
          do
          {
            v131 = v124->m128i_u16[0];
            v132 = *v125;
            v124 = (__m128i *)((char *)v124 - 2);
            --v125;
            v133 = v129 + v132 + v131;
            v125[1] = v133;
            v129 = HIWORD(v133);
          }
          while ( v124 != (__m128i *)&v174.m128i_i16[1] );
          for ( v171.m128i_i16[1] += 3; v171.m128i_i16[2]; ++v171.m128i_i16[1] )
            sub_80CC40((__int64)&v171);
          if ( v173[0] )
            break;
          if ( v171.m128i_i16[1] > 0x3FFEu )
            break;
          v134 = _mm_load_si128(&v171);
          --v128;
          v126[1].m128i_i32[0] = v172;
          v176 = 0;
          *v126 = v134;
        }
        while ( v128 != -34 );
        v157 = v128;
      }
      v153 = v126;
      emovo(v126, &v164, v124, v125);
      v25 = v153;
    }
    else if ( v164.m128i_i16[6] < 0 )
    {
      v157 = 0;
      v25 = &v174;
    }
    else
    {
      v24 = 0;
      do
      {
        --v24;
        emul(&v164, &unk_23998C0, &v164);
      }
      while ( v164.m128i_i16[6] >= 0 );
      v157 = v24;
      v25 = &v174;
    }
    v152 = v4;
    v26 = (char *)&unk_2399720;
    v27 = -4096;
    v28 = (char *)&unk_2399800;
    v29 = v157;
    v163 = v25;
    v165 = _mm_load_si128(&v164);
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384840);
    while ( (int)ecmp(&unk_2399940, &v165) > 0 )
    {
      if ( (int)ecmp(v26, &v165) >= 0 )
      {
        v29 += v27;
        emul(&v165, v28, &v165);
        emul(&si128, v28, &si128);
      }
      v27 /= 2;
      if ( v26 == (char *)&unk_23997E0 )
        break;
      v26 += 16;
      v28 += 16;
    }
    v156 = v29;
    v4 = v152;
    ediv(&unk_2399940, &si128, &si128);
    v30 = v163;
    goto LABEL_48;
  }
  v156 = 0;
  v83 = 16;
  v166 = _mm_load_si128(&v164);
  v84 = (char *)&unk_2399880;
  v166.m128i_i16[7] = 16494;
  do
  {
    ediv(&v166, v84, &si128);
    v85 = _mm_load_si128(&si128);
    epi16 = _mm_extract_epi16(v85, 7);
    v177 = v85;
    v87 = (epi16 & 0x7FFF) - 16382;
    if ( v87 <= 0 )
    {
      v165 = 0;
    }
    else
    {
      v88 = 112 - v87;
      v165 = _mm_load_si128(&v177);
      if ( 112 - v87 <= 0 )
        goto LABEL_139;
      if ( v88 <= 15 )
      {
        v93 = &v165;
      }
      else
      {
        v89 = (unsigned int)v88 >> 4;
        v90 = &v165;
        v91 = v89 - 1;
        v92 = 2 * v89;
        if ( v92 >= 8 )
        {
          LODWORD(v98) = 0;
          do
          {
            v99 = (unsigned int)v98;
            v98 = (unsigned int)(v98 + 8);
            *(__int64 *)((char *)v165.m128i_i64 + v99) = 0;
          }
          while ( (unsigned int)v98 < (v92 & 0xFFFFFFF8) );
          v90 = (__m128i *)((char *)&v165 + v98);
        }
        if ( (v92 & 4) != 0 )
        {
          v90->m128i_i32[0] = 0;
          v90 = (__m128i *)((char *)v90 + 4);
        }
        if ( (v92 & 2) != 0 )
          v90->m128i_i16[0] = 0;
        v88 = 96 - v87 - 16 * v91;
        v93 = (__m128i *)&v165.m128i_i16[v91 + 1];
      }
      v93->m128i_i16[0] &= word_23998E0[v88];
    }
    if ( epi16 < 0 )
    {
      v97 = 0;
      while ( v177.m128i_i16[v97] == v165.m128i_i16[v97] )
      {
        if ( ++v97 == 7 )
          goto LABEL_139;
      }
      eadd(&v165, &unk_2399940, &v165, 1);
    }
LABEL_139:
    if ( si128.m128i_i64[0] == v165.m128i_i64[0]
      && *(__int64 *)((char *)si128.m128i_i64 + 6) == *(__int64 *)((char *)v165.m128i_i64 + 6) )
    {
      v156 += v83;
      v166 = _mm_load_si128(&si128);
    }
    v84 += 16;
    v83 >>= 1;
  }
  while ( v84 != (char *)&unk_23998D0 );
  v94 = (char *)&unk_2399800;
  v95 = 4096;
  v166.m128i_i16[7] = v166.m128i_i16[7] + v164.m128i_i16[7] - 16494;
  v96 = _mm_load_si128(&v166);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384840);
  v164 = v96;
  do
  {
    if ( (int)ecmp(&unk_23998C0, &v166) > 0 )
      break;
    if ( (int)ecmp(v94, &v166) <= 0 )
    {
      ediv(&v166, v94, &v166);
      emul(&si128, v94, &si128);
      v156 += v95;
    }
    v94 += 16;
    v95 >>= 1;
  }
  while ( v94 != (char *)&unk_23998D0 );
  v30 = &v174;
LABEL_48:
  v158 = v30;
  emovi(&si128, v30);
  v31 = _mm_load_si128(&v174);
  v169 = v175;
  v170 = 0;
  v168 = v31;
  emovi(&v164, v158);
  v32 = _mm_load_si128(&v174);
  v178 = v175;
  v179 = 0;
  v177 = v32;
  v33 = sub_80DB40((__int64)&v168, (__int64)&v177);
  if ( v33 == 10 )
  {
    ++v156;
    v36 = 49;
  }
  else if ( v33 )
  {
    v36 = v33 + 48;
  }
  else
  {
    do
    {
      v34 = &v177.m128i_i8[4];
      v35 = &unk_2399914;
      while ( *(_WORD *)v34 == *v35 )
      {
        v34 += 2;
        ++v35;
        if ( v34 == v180 )
        {
          v36 = 48;
          goto LABEL_54;
        }
      }
      v66 = (__m128i *)&v179;
      v67 = 0;
      do
      {
        if ( v66->m128i_i16[0] < 0 )
          v67 |= 1u;
        v68 = 2 * v66->m128i_i16[0];
        if ( (v67 & 2) != 0 )
          v68 |= 1u;
        v66 = (__m128i *)((char *)v66 - 2);
        v67 *= 2;
        v66->m128i_i16[1] = v68;
      }
      while ( v66 != (__m128i *)&v177.m128i_i16[1] );
      v69 = _mm_load_si128(&v177);
      v70 = 0;
      v71 = (__m128i *)v173;
      v172 = v178;
      v173[0] = 0;
      v171 = v69;
      do
      {
        if ( v71->m128i_i16[0] < 0 )
          v70 |= 1u;
        v72 = 2 * v71->m128i_i16[0];
        if ( (v70 & 2) != 0 )
          v72 |= 1u;
        v71 = (__m128i *)((char *)v71 - 2);
        v70 *= 2;
        v71->m128i_i16[1] = v72;
      }
      while ( v71 != (__m128i *)&v171.m128i_i16[1] );
      v73 = 0;
      v74 = (__m128i *)v173;
      do
      {
        if ( v74->m128i_i16[0] < 0 )
          v73 |= 1u;
        v75 = 2 * v74->m128i_i16[0];
        if ( (v73 & 2) != 0 )
          v75 |= 1u;
        v74 = (__m128i *)((char *)v74 - 2);
        v73 *= 2;
        v74->m128i_i16[1] = v75;
      }
      while ( v74 != (__m128i *)&v171.m128i_i16[1] );
      v76 = (unsigned __int16 *)&v179;
      v77 = 0;
      v78 = (__m128i *)v173;
      do
      {
        v79 = v78->m128i_u16[0];
        v80 = *v76;
        v78 = (__m128i *)((char *)v78 - 2);
        --v76;
        v81 = v77 + v80 + v79;
        v76[1] = v81;
        v77 = HIWORD(v81);
      }
      while ( v78 != (__m128i *)&v171.m128i_i16[1] );
      v82 = sub_80DB40((__int64)&v168, (__int64)&v177);
      --v156;
    }
    while ( !v82 );
    v36 = v82 + 48;
  }
LABEL_54:
  v37 = (unsigned __int8)a4;
  s[0] = v36;
  s[1] = 46;
  if ( (unsigned __int8)a4 > 0x21u )
    v37 = 33;
  v162 = v4;
  v38 = 0;
  v155 = v37;
  do
  {
    v39 = (__m128i *)&v179;
    v40 = 0;
    do
    {
      if ( v39->m128i_i16[0] < 0 )
        v40 |= 1u;
      v41 = 2 * v39->m128i_i16[0];
      if ( (v40 & 2) != 0 )
        v41 |= 1u;
      v39 = (__m128i *)((char *)v39 - 2);
      v40 *= 2;
      v39->m128i_i16[1] = v41;
    }
    while ( v39 != (__m128i *)&v177.m128i_i16[1] );
    v42 = _mm_load_si128(&v177);
    v43 = 0;
    v44 = (__m128i *)v173;
    v172 = v178;
    v173[0] = 0;
    v171 = v42;
    do
    {
      if ( v44->m128i_i16[0] < 0 )
        v43 |= 1u;
      v45 = 2 * v44->m128i_i16[0];
      if ( (v43 & 2) != 0 )
        v45 |= 1u;
      v44 = (__m128i *)((char *)v44 - 2);
      v43 *= 2;
      v44->m128i_i16[1] = v45;
    }
    while ( v44 != (__m128i *)&v171.m128i_i16[1] );
    v46 = 0;
    v47 = (__m128i *)v173;
    do
    {
      if ( v47->m128i_i16[0] < 0 )
        v46 |= 1u;
      v48 = 2 * v47->m128i_i16[0];
      if ( (v46 & 2) != 0 )
        v48 |= 1u;
      v47 = (__m128i *)((char *)v47 - 2);
      v46 *= 2;
      v47->m128i_i16[1] = v48;
    }
    while ( v47 != (__m128i *)&v171.m128i_i16[1] );
    v49 = (unsigned __int16 *)&v179;
    v50 = 0;
    v51 = (__m128i *)v173;
    do
    {
      v52 = v51->m128i_u16[0];
      v53 = *v49;
      v51 = (__m128i *)((char *)v51 - 2);
      --v49;
      v54 = v50 + v53 + v52;
      v49[1] = v54;
      v50 = HIWORD(v54);
    }
    while ( v51 != (__m128i *)&v171.m128i_i16[1] );
    v55 = sub_80DB40((__int64)&v168, (__int64)&v177);
    s[v38++ + 2] = v55 + 48;
  }
  while ( v155 >= (int)v38 );
  v4 = v162;
  v57 = &s[v155 + 2];
  v58 = *(v57 - 1);
  if ( v55 > 4u )
  {
    if ( v55 == 5 )
    {
      v102 = &unk_2399914;
      v103 = &v177.m128i_i8[4];
      v56 = v180;
      while ( *(_WORD *)v103 == *v102 )
      {
        v103 += 2;
        ++v102;
        if ( v103 == v180 )
        {
          if ( (v58 & 1) != 0 )
          {
            i = v57 - 1;
            v61 = v58 & 0x7F;
            v62 = *(v57 - 1) & 0x7F;
            goto LABEL_81;
          }
          goto LABEL_87;
        }
      }
    }
    for ( i = v57 - 1; ; --i )
    {
      v60 = v58;
      v61 = v58 & 0x7F;
      v62 = v60 & 0x7F;
      if ( v62 == 46 )
        break;
LABEL_81:
      *i = v62 + 1;
      if ( v61 + 1 <= 57 )
        goto LABEL_86;
      *i = 48;
      v58 = *(i - 1);
    }
    v63 = (*(i - 1))++;
    if ( v63 + 1 > 57 )
    {
      ++v156;
      *(i - 1) = 49;
    }
LABEL_86:
    v58 = *(v57 - 1);
  }
LABEL_87:
  while ( v58 == 48 )
  {
    v58 = *(v57 - 2);
    --v57;
  }
  if ( v58 == 46 )
    *v57++ = 48;
  *v57 = 0;
  if ( !n )
  {
    LODWORD(v19) = qsnprintf((int)a1, v162, (int)"%s%s", (int)n_4, (int)s, v8, v147);
    goto LABEL_29;
  }
  v64 = -v156;
  if ( v156 > 0 )
    v64 = v156;
  if ( !v159 )
  {
    if ( !v156 )
    {
LABEL_98:
      qsnprintf((int)a1, v4, (int)"%s%s", (int)n_4, (int)s, v8, v147);
      return v182 - __readfsqword(0x28u);
    }
    if ( n < v64 )
    {
      LODWORD(v19) = qsnprintf((int)a1, v162, (int)"%s%s", (int)n_4, (int)s, v8, v147);
      goto LABEL_30;
    }
    if ( s[2] == 48 && !s[3] )
    {
      s[1] = 0;
      v13 = 0;
      goto LABEL_170;
    }
    v13 = 0;
LABEL_183:
    v109 = strlen(&s[2]);
    memmove(&s[1], &s[2], v109 + 1);
    if ( v159 )
    {
LABEL_184:
      if ( v156 > 0 )
      {
        LODWORD(v110) = n - v64;
        if ( n == v64 )
        {
          v110 = 0;
          v111 = strlen(s);
          v112 = (int)a1;
          v113 = v162;
          v114 = v111;
          v115 = v111;
          if ( v64 < (unsigned int)v111 )
          {
LABEL_187:
            v116 = v115 - v64 - 1;
            v117 = v64 + 1;
            if ( v159 < v116 )
            {
              v144 = v64 + 1 + v13;
              LODWORD(v13) = 0;
              s[v144] = 0;
            }
            else
            {
              LODWORD(v13) = v159 - v116;
            }
            v114 = v117;
            v118 = (char *)(v110 + (int)qsnprintf(v112, v113, (int)"%s%.*s", (int)n_4, v117, (int)s, v147));
            v121 = v64 + 1;
            goto LABEL_190;
          }
        }
        else
        {
          v110 = (unsigned int)v110;
          memset(a1, 32, (unsigned int)v110);
          *((_BYTE *)a1 + (unsigned int)v110) = 0;
          v142 = strlen(s);
          v112 = (_DWORD)a1 + v110;
          v113 = v162 - v110;
          v114 = v142;
          v115 = v142;
          if ( v64 < (unsigned int)v142 )
            goto LABEL_187;
        }
        srcb = v115;
        v143 = qsnprintf(v112, v113, (int)"%s%.*s", (int)n_4, v115, (int)s, v147);
        v121 = srcb;
        v118 = (char *)(v110 + v143);
        goto LABEL_190;
      }
      LODWORD(v136) = n - 1;
      if ( n == 1 )
      {
        v105 = (char *)a1;
        v106 = 1;
        v136 = 0;
      }
      else
      {
        v136 = (unsigned int)v136;
        memset(a1, 32, (unsigned int)v136);
        v105 = (char *)a1 + (unsigned int)v136;
        v106 = (unsigned int)v136 + 1LL;
        *v105 = 0;
      }
      v19 = v136 + 2;
      v104 = *n_4;
      if ( !*n_4 )
      {
LABEL_174:
        v8 = v159;
        *v105 = 48;
        *((_BYTE *)a1 + v106) = 46;
        if ( v159 && (int)v13 < (int)v64 )
        {
          v108 = v162 - v19;
          if ( v162 - (int)v19 >= (unsigned int)v13 )
            goto LABEL_178;
          goto LABEL_177;
        }
        v137 = v64 - 1;
        if ( v137 )
        {
          v145 = (char *)a1 + v19;
          v19 += v137;
          memset(v145, 48, v137);
          LODWORD(v56) = v159;
          if ( v159 )
          {
            v13 = (unsigned int)(v13 - v137);
            goto LABEL_216;
          }
        }
        else if ( v159 )
        {
LABEL_216:
          v138 = strlen(s);
          if ( (unsigned int)v13 < v138 )
          {
            s[v13] = 0;
            qsnprintf(v19 + (_DWORD)a1, v162 - v19, (int)"%s", (int)s, v119, v120, v147);
            return v182 - __readfsqword(0x28u);
          }
          LODWORD(v13) = v13 - v138;
          v122 = s;
LABEL_192:
          v123 = qsnprintf((int)a1 + (int)v19, v162 - (int)v19, (int)"%s", (int)v122, v119, v120, v147);
          if ( !(_DWORD)v13 )
            return v182 - __readfsqword(0x28u);
          v19 += v123;
          v108 = v162 - v19;
          if ( v162 - (int)v19 >= (unsigned int)v13 )
          {
LABEL_179:
            v156 = 0;
            goto LABEL_28;
          }
LABEL_177:
          LODWORD(v13) = v108;
LABEL_178:
          if ( !(_DWORD)v13 )
            return v182 - __readfsqword(0x28u);
          goto LABEL_179;
        }
LABEL_220:
        qsnprintf(v19 + (_DWORD)a1, v162 - v19, (int)"%s", (int)s, (int)v56, v8, v147);
        return v182 - __readfsqword(0x28u);
      }
      v19 = v106 + 2;
      v107 = v106++;
LABEL_173:
      *v105 = v104;
      v105 = (char *)a1 + v107;
      goto LABEL_174;
    }
LABEL_170:
    if ( v156 > 0 )
    {
      v135 = strlen(s);
      v114 = v135;
      if ( v64 >= (unsigned int)v135 )
      {
        src = v135;
        v140 = qsnprintf((int)a1, v162, (int)"%s%.*s", (int)n_4, v135, (int)s, v147);
        v121 = src;
        v118 = (char *)v140;
        if ( s[(unsigned int)v114] )
          goto LABEL_222;
      }
      else
      {
        v114 = (int)(v64 + 1);
        v118 = (char *)(int)qsnprintf((int)a1, v162, (int)"%s%.*s", (int)n_4, v64 + 1, (int)s, v147);
        v121 = v64 + 1;
        if ( s[v64 + 1] )
          goto LABEL_190;
      }
      LODWORD(v13) = v13 + 1;
LABEL_190:
      if ( v64 < v121 )
      {
LABEL_191:
        v19 = (__int64)(v118 + 1);
        v118[(_QWORD)a1] = 46;
        v122 = &s[v114];
        goto LABEL_192;
      }
LABEL_222:
      srca = v118;
      v141 = (int)(v64 + 1 - v121);
      memset(&v118[(_QWORD)a1], 48, v141);
      v118 = &srca[v141];
      goto LABEL_191;
    }
    v104 = *n_4;
    if ( !*n_4 )
    {
      *a1 = 11824;
      v139 = v64 - 1;
      if ( v64 == 1 )
      {
        LODWORD(v19) = 2;
      }
      else
      {
        v146 = v139;
        LODWORD(v19) = v139 + 2;
        memset(a1 + 1, 48, v146);
      }
      goto LABEL_220;
    }
    v105 = (char *)a1;
    v19 = 3;
    v106 = 2;
    v107 = 1;
    goto LABEL_173;
  }
  v13 = v159;
  v65 = n - 2 - (v159 + (v156 >= 0));
  n = v65;
  if ( !v156 )
    goto LABEL_22;
  if ( v65 >= v64 )
  {
    if ( s[2] == 48 && !s[3] )
    {
      s[1] = 0;
      goto LABEL_184;
    }
    goto LABEL_183;
  }
  n = v65 - ((v65 != 0) & ((unsigned int)v156 >> 31));
LABEL_22:
  v14 = strlen(&s[2]);
  if ( v159 < v14 )
  {
    v100 = v159;
    do
    {
      if ( s[v100 + 1] != 48 )
      {
        v101 = v100 + 2;
        LODWORD(v13) = v159 - v100;
        goto LABEL_161;
      }
      --v100;
    }
    while ( v100 );
    v101 = 2;
LABEL_161:
    s[v101] = 0;
  }
  else
  {
    LODWORD(v13) = v159 - v14;
  }
  if ( n )
  {
    v18 = n;
    memset(a1, 32, n);
    v16 = (_DWORD)a1 + n;
    *((_BYTE *)a1 + n) = 0;
    v17 = v4 - n;
  }
  else
  {
    v16 = (int)a1;
    v17 = v4;
    v18 = 0;
  }
  v19 = v18 + (int)qsnprintf(v16, v17, (int)"%s%s", (int)n_4, (int)s, v15, v147);
  if ( (_DWORD)v13 )
  {
    if ( v4 - (int)v19 >= (unsigned int)v13 || (LODWORD(v13) = v4 - v19, v4 != (_DWORD)v19) )
    {
LABEL_28:
      v22 = (char *)a1 + v19;
      v19 += (int)v13;
      memset(v22, 48, (int)v13);
      *((_BYTE *)a1 + v19) = 0;
    }
  }
LABEL_29:
  if ( v156 )
LABEL_30:
    qsnprintf(v19 + (_DWORD)a1, v4 - v19, (int)"e%d", v156, v20, v21, v147);
  return v182 - __readfsqword(0x28u);
}

