__int64 __fastcall sub_1BF0C0(_QWORD *a1, __int64 a2, int *a3, __int64 a4)
{
  int v4; // eax
  char v5; // r13
  int v6; // r12d
  _QWORD *v7; // rbp
  __int64 v8; // rax
  int *v9; // r15
  __int64 v10; // r14
  int v11; // ecx
  char v12; // si
  int *v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // ebx
  unsigned int *v26; // rdx
  unsigned int *v27; // rax
  int dtype_size; // r12d
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 *v38; // rbp
  int v39; // eax
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 head; // r15
  unsigned __int64 v43; // rbp
  _QWORD *v44; // rbp
  __int64 v45; // r12
  __int64 v46; // r8
  int v47; // r9d
  char *v48; // r9
  __int64 v49; // rax
  int v50; // edx
  char *v51; // rax
  int v52; // eax
  __int64 **v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  int v58; // r9d
  _QWORD *v59; // rbx
  __int64 v60; // rsi
  __m128i si128; // xmm0
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // r15
  __int64 v65; // r14
  int v66; // edx
  __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  _QWORD *v69; // r12
  __int64 *v70; // rdi
  __int64 *v71; // rdi
  unsigned int i; // r12d
  char j; // al
  _QWORD *v74; // rax
  unsigned __int64 v75; // rbx
  unsigned __int64 v76; // rbp
  unsigned __int64 v77; // r12
  __int64 v78; // rsi
  __int64 v79; // rax
  unsigned __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rax
  signed __int64 v83; // rdx
  int v84; // edx
  int v85; // r12d
  int v86; // r9d
  char *v87; // rax
  unsigned int *v88; // rax
  unsigned __int64 v89; // r15
  __int64 v90; // r14
  void *v91; // rax
  unsigned __int64 v92; // r12
  __int64 *v93; // rax
  unsigned int v94; // r12d
  unsigned int v95; // eax
  unsigned __int64 v96; // xmm0_8
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // r12
  unsigned int k; // eax
  __int64 v102; // rcx
  __int64 v103; // rdx
  unsigned int *v104; // r15
  __int64 v105; // r12
  __int64 v106; // r12
  __int64 v107; // rcx
  __int64 v108; // rcx
  _QWORD *v109; // r12
  __int64 v110; // rcx
  __int64 v111; // rdi
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rcx
  signed int v115; // r15d
  __int64 v116; // r12
  __int64 v117; // rsi
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r15
  __int64 v121; // r12
  _QWORD *v122; // rax
  __int64 v123; // rax
  __int64 v124; // r15
  signed int v125; // eax
  int v126; // [rsp+0h] [rbp-1C0h]
  _QWORD *v127; // [rsp+0h] [rbp-1C0h]
  __int64 v128; // [rsp+0h] [rbp-1C0h]
  _QWORD *v129; // [rsp+0h] [rbp-1C0h]
  __int64 v131; // [rsp+10h] [rbp-1B0h]
  int v132; // [rsp+10h] [rbp-1B0h]
  unsigned int *v133; // [rsp+10h] [rbp-1B0h]
  char *v134; // [rsp+10h] [rbp-1B0h]
  int n; // [rsp+20h] [rbp-1A0h]
  size_t na; // [rsp+20h] [rbp-1A0h]
  size_t nb; // [rsp+20h] [rbp-1A0h]
  __int64 nd; // [rsp+20h] [rbp-1A0h]
  unsigned int nc; // [rsp+20h] [rbp-1A0h]
  char v143; // [rsp+38h] [rbp-188h]
  _QWORD *v144; // [rsp+38h] [rbp-188h]
  char v145; // [rsp+38h] [rbp-188h]
  __int64 v146; // [rsp+40h] [rbp-180h]
  unsigned __int64 v147; // [rsp+48h] [rbp-178h]
  unsigned __int64 v148; // [rsp+48h] [rbp-178h]
  unsigned __int64 v149; // [rsp+48h] [rbp-178h]
  char *v150; // [rsp+48h] [rbp-178h]
  unsigned int v151; // [rsp+50h] [rbp-170h]
  int v152; // [rsp+5Ch] [rbp-164h]
  __int128 v153; // [rsp+68h] [rbp-158h] BYREF
  __int64 v154; // [rsp+78h] [rbp-148h] BYREF
  __int64 v155; // [rsp+80h] [rbp-140h]
  __int64 v156; // [rsp+88h] [rbp-138h] BYREF
  __int64 v157; // [rsp+90h] [rbp-130h]
  __int64 v158; // [rsp+98h] [rbp-128h]
  __int128 v159; // [rsp+A0h] [rbp-120h]
  unsigned __int64 v160; // [rsp+B8h] [rbp-108h] BYREF
  __int128 v161; // [rsp+C0h] [rbp-100h]
  unsigned int *v162; // [rsp+D0h] [rbp-F0h] BYREF
  __int128 v163; // [rsp+D8h] [rbp-E8h]
  int v164; // [rsp+F0h] [rbp-D0h] BYREF
  int *v165; // [rsp+F8h] [rbp-C8h]
  int *v166; // [rsp+100h] [rbp-C0h]
  int *v167; // [rsp+108h] [rbp-B8h]
  __int64 v168; // [rsp+110h] [rbp-B0h]
  void *src; // [rsp+118h] [rbp-A8h] BYREF
  __int128 v170; // [rsp+120h] [rbp-A0h]
  __int64 v171; // [rsp+130h] [rbp-90h]
  unsigned __int64 v172; // [rsp+138h] [rbp-88h] BYREF
  __int64 v173; // [rsp+140h] [rbp-80h]
  __int64 v174; // [rsp+148h] [rbp-78h] BYREF
  __int64 v175; // [rsp+150h] [rbp-70h]
  __int64 v176; // [rsp+158h] [rbp-68h] BYREF
  __int64 v177; // [rsp+160h] [rbp-60h]
  __int128 *v178; // [rsp+168h] [rbp-58h]
  char v179; // [rsp+170h] [rbp-50h]
  unsigned __int64 v180; // [rsp+180h] [rbp-40h]

  v4 = a3[8];
  v180 = __readfsqword(0x28u);
  v161 = 0;
  v160 = 0;
  v162 = nullptr;
  v158 = 0;
  v163 = 0;
  v159 = 0;
  if ( (v4 & 0x40000) != 0 )
  {
    if ( (v4 & 0x10000) != 0 )
      *((_QWORD *)a3 + 10) = 0;
    else
      *((_QWORD *)a3 + 6) = 0;
  }
  v5 = calc_switch_cases();
  if ( !v5 || a3[24] == -1 || !(_QWORD)v159 )
  {
    v59 = (_QWORD *)a1[1];
    v60 = v59[62];
    if ( v59[64] <= 0x2Du )
    {
      v82 = qvector_reserve((__int64)(v59 + 62), v60, 46, 1);
      v59[62] = v82;
      v60 = v82;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_424850);
    v59[63] = 46;
    *(__m128i *)v60 = si128;
    *(__m128i *)(v60 + 16) = _mm_load_si128((const __m128i *)&xmmword_424860);
    *(__m128i *)(v60 + 29) = _mm_load_si128((const __m128i *)&xmmword_424870);
    *(_BYTE *)(v59[62] + 45LL) = 0;
    goto LABEL_19;
  }
  v164 = 0;
  v165 = nullptr;
  v166 = &v164;
  v167 = &v164;
  v168 = 0;
  n = 0;
  v131 = 0;
  do
  {
    v6 = 0;
    v7 = (_QWORD *)(v160 + 24 * v131);
    v8 = 0;
    if ( v7[1] )
    {
      do
      {
        v9 = v165;
        v10 = *(_QWORD *)(*v7 + 8 * v8);
        if ( v165 )
        {
          while ( 1 )
          {
            v11 = v9[8];
            v12 = 0;
            v13 = *((int **)v9 + 3);
            if ( (int)v10 < v11 )
            {
              v13 = *((int **)v9 + 2);
              v12 = v5;
            }
            if ( !v13 )
              break;
            v9 = v13;
          }
          if ( !v12 )
            goto LABEL_16;
          if ( v166 != v9 )
            goto LABEL_45;
        }
        else if ( v166 != &v164 )
        {
LABEL_45:
          v11 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_16:
          if ( (int)v10 <= v11 )
            goto LABEL_17;
        }
        *(_DWORD *)(operator new(0x28u) + 32) = v10;
        ++v6;
        std::_Rb_tree_insert_and_rebalance();
        v8 = v6;
        ++v168;
      }
      while ( (unsigned __int64)v6 < v7[1] );
    }
    v21 = *(_QWORD *)(v158 + 8 * v131);
    v22 = a1[1];
    v23 = (__int64)sub_670B0(v22, v21);
    if ( v23 )
    {
      if ( v21 != *(_QWORD *)(v23 + 32) )
      {
        v24 = *(_QWORD *)(v23 + 48);
        if ( !v24 || v21 != *(_QWORD *)(v24 + 24) )
        {
LABEL_17:
          sub_6B870((__int64 *)(a1[1] + 496LL));
LABEL_18:
          sub_1B8C30(v165);
LABEL_19:
          v14 = -7;
          *(_QWORD *)(a1[1] + 488LL) = a2;
          goto LABEL_20;
        }
      }
    }
    else
    {
      v23 = sub_68FD0(v22, a2, v21, 1);
      if ( !v23 )
        goto LABEL_17;
    }
    v25 = *(_DWORD *)(v23 + 72);
    v26 = &v162[v163];
    if ( v162 != v26 )
    {
      v27 = v162;
      while ( v25 != *v27 )
      {
        if ( v26 == ++v27 )
          goto LABEL_51;
      }
      if ( v26 != v27 )
      {
        if ( !under_debugger )
          sub_383060(52924);
        goto LABEL_268;
      }
    }
LABEL_51:
    if ( *((_QWORD *)&v163 + 1) < (unsigned __int64)(v163 + 1) )
    {
      v162 = (unsigned int *)qvector_reserve((__int64)&v162, (__int64)v162, v163 + 1, 4);
      v26 = &v162[v163];
    }
    ++n;
    *v26 = v25;
    v131 = n;
    *(_QWORD *)&v163 = v163 + 1;
  }
  while ( n < (unsigned __int64)v159 );
  v153 = 0xFFFFFFFF00000000LL;
  dtype_size = get_dtype_size();
  v29 = (unsigned int)a3[24];
  DWORD2(v153) = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1[1] + 1504LL) + 168LL))(
                   *(_QWORD *)(a1[1] + 1504LL),
                   v29);
  v32 = a1[1];
  LOBYTE(v153) = 1;
  DWORD1(v153) = dtype_size;
  if ( SDWORD2(v153) < 0 || dtype_size <= 0 )
    goto LABEL_162;
  v33 = *((_QWORD *)a3 + 7);
  if ( v33 == -1 )
  {
    v52 = a3[6];
    if ( v52 == 1 )
    {
      a3[6] = 2;
    }
    else if ( v52 != 2 )
    {
      goto LABEL_103;
    }
    v132 = -1;
    goto LABEL_114;
  }
  v34 = (__int64)sub_670B0(v32, *((_QWORD *)a3 + 7));
  if ( !v34 )
  {
    v34 = sub_68FD0(v32, a2, v33, 1);
    if ( v34 )
      goto LABEL_61;
    goto LABEL_162;
  }
  if ( v33 != *(_QWORD *)(v34 + 32) )
  {
    v35 = *(_QWORD *)(v34 + 48);
    if ( !v35 || v33 != *(_QWORD *)(v35 + 24) )
    {
LABEL_162:
      sub_6B870((__int64 *)(v32 + 496));
      sub_11CDA0((__int64)&v153);
      goto LABEL_18;
    }
  }
LABEL_61:
  v36 = *(unsigned int *)(v34 + 72);
  v30 = v163;
  v126 = *(_DWORD *)(v34 + 72);
  if ( !(_QWORD)v163 )
  {
    v77 = v161;
    v75 = v161;
    if ( (_QWORD)v161 == 1 )
    {
      v132 = 0;
      v29 = (__int64)v162;
    }
    else
    {
      v132 = 0;
      v76 = 1;
LABEL_147:
      src = nullptr;
      v170 = 0;
      if ( v76 < v75 )
      {
        v92 = v76;
        do
        {
          v93 = (__int64 *)(v160 + 24 * v92);
          v36 = *v93;
          if ( *v93 )
          {
            v93[1] = 0;
            qfree(v36);
          }
          ++v92;
        }
        while ( v92 < v75 );
      }
      else
      {
        v78 = v160;
        if ( (unsigned __int64)&src < v160
          || (v31 = v160 + 24LL * *((_QWORD *)&v161 + 1), (unsigned __int64)&src >= v31) )
        {
          if ( *((_QWORD *)&v161 + 1) < v76 )
          {
            v36 = (__int64)&v160;
            v160 = qvector_reserve((__int64)&v160, v160, v76, 24);
            v77 = v161;
          }
          while ( v77 < v76 )
          {
            v89 = v160 + 24 * v77;
            *(_QWORD *)v89 = 0;
            *(_OWORD *)(v89 + 8) = 0;
            v90 = v170;
            if ( (_QWORD)v170 )
            {
              nd = 8 * v170;
              v91 = (void *)qalloc_or_throw(8 * v170, v78, 8 * v170, v31);
              *(_QWORD *)v89 = v91;
              v36 = (__int64)v91;
              *(_QWORD *)(v89 + 16) = v90;
              v78 = (__int64)src;
              memcpy(v91, src, nd);
              *(_QWORD *)(v89 + 8) = v90;
            }
            ++v77;
          }
        }
        else
        {
          if ( *((_QWORD *)&v161 + 1) < v76 )
          {
            v36 = (__int64)&v160;
            v160 = qvector_reserve((__int64)&v160, v160, v76, 24);
            v75 = v161;
          }
          v79 = 24 * v75;
          if ( v75 < v76 )
          {
            do
            {
              ++v75;
              v80 = v79 + v160;
              v79 += 24;
              *(_QWORD *)v80 = 0;
              *(_OWORD *)(v80 + 8) = 0;
            }
            while ( v75 != v76 );
          }
        }
      }
      *(_QWORD *)&v161 = v76;
      v30 = v163;
      v77 = v76;
      v29 = (__int64)v162;
LABEL_155:
      if ( v30 >= v77 )
      {
        if ( v30 != v77 )
          *(_QWORD *)&v163 = v77;
        goto LABEL_158;
      }
    }
    v88 = (unsigned int *)v29;
    if ( *((_QWORD *)&v163 + 1) < v77 )
    {
      v88 = (unsigned int *)qvector_reserve((__int64)&v162, v29, v77, 4);
      v162 = v88;
      v30 = v163;
    }
    v36 = (__int64)&v88[v30];
    memset((void *)v36, 0, 4 * (v77 - v30));
    *(_QWORD *)&v163 = v77;
    v29 = (__int64)v162;
LABEL_158:
    *(_DWORD *)(v29 + 4 * v77 - 4) = v126;
    v81 = a3[6];
    if ( v81 != 1 )
    {
      if ( v81 == 2 )
        goto LABEL_114;
      goto LABEL_144;
    }
LABEL_113:
    a3[6] = 2;
    goto LABEL_114;
  }
  v29 = (__int64)v162;
  v31 = 0;
  v37 = 0;
  while ( (_DWORD)v36 != v162[v37] )
  {
    v31 = (unsigned int)(v31 + 1);
    v37 = (int)v31;
    if ( (int)v31 >= (unsigned __int64)v163 )
    {
      v75 = v161;
      v132 = v163;
      v76 = (int)v163 + 1;
      v77 = v161;
      if ( v76 != (_QWORD)v161 )
        goto LABEL_147;
      goto LABEL_155;
    }
  }
  v132 = v31;
  v38 = (__int64 *)(v160 + 24 * v37);
  v36 = *v38;
  if ( *v38 )
  {
    v38[1] = 0;
    qfree(v36);
    *v38 = 0;
    v38[2] = 0;
  }
  v39 = a3[6];
  if ( v39 == 1 )
    goto LABEL_113;
  if ( v39 != 2 )
    goto LABEL_69;
LABEL_114:
  v62 = *a3;
  if ( *(_DWORD *)(a1[2] + 72LL) != *a3 )
  {
    if ( !under_debugger )
      sub_383060(51755);
    goto LABEL_268;
  }
  v63 = *((_QWORD *)a3 + 2);
  v64 = *((_QWORD *)a3 + 1);
  if ( v63 )
    nb = *(_QWORD *)(v63 + 8);
  else
    nb = *(_QWORD *)(v64 + 48);
  v65 = *(_QWORD *)(v64 + 64);
  v66 = *(_DWORD *)(v64 + 72);
  v154 = 0;
  *((_QWORD *)&v170 + 1) = a4;
  v155 = 0;
  v172 = nb;
  *(_QWORD *)&v170 = v65;
  LODWORD(v171) = v66;
  LODWORD(v173) = v62;
  v174 = 0;
  v175 = 0;
  v176 = 0;
  v177 = 0;
  src = &off_4DE800;
  v178 = &v153;
  v179 = 0;
  sub_1BE560((const __m128i *)&src);
  v29 = (__int64)&v176;
  sub_648D0(&v154, &v176);
  v143 = v179;
  src = &off_4DE7E8;
  qfree(v176);
  v67 = v174;
  if ( !v174 )
    goto LABEL_130;
  v68 = *(_QWORD *)v174;
  if ( !v175 )
  {
    *(_QWORD *)v174 = *(_QWORD *)v174 & 3LL | v174 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(v174 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v174, (__m128i)(unsigned __int64)v174);
    *(_QWORD *)v174 &= ~1uLL;
    *(_QWORD *)v174 |= 2uLL;
    goto LABEL_128;
  }
  v69 = (_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)(v68 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_127;
  v70 = (__int64 *)v69[1];
  if ( (*(_BYTE *)v70 & 2) != 0 )
  {
    v71 = (__int64 *)v69[2];
    if ( (*(_BYTE *)v71 & 2) == 0 )
    {
LABEL_122:
      v148 = v68;
      sub_1B8B00(v71);
      v68 = v148;
      goto LABEL_123;
    }
    goto LABEL_241;
  }
  v147 = *(_QWORD *)v174;
  sub_1B8B00(v70);
  v71 = (__int64 *)v69[2];
  v68 = v147;
  if ( (*(_BYTE *)v71 & 2) == 0 )
    goto LABEL_122;
LABEL_123:
  if ( (*(_BYTE *)v69 & 2) == 0 )
  {
LABEL_241:
    v111 = v69[4];
    if ( v111 )
    {
      v149 = v68;
      v69[5] = 0;
      qfree(v111);
      v68 = v149;
    }
    *v69 |= 2uLL;
  }
  if ( v68 > 3 )
    qfree((__int64)v69);
  v67 = v174;
  v68 = *(_QWORD *)v174;
LABEL_127:
  *(_QWORD *)v67 = v68 & 3 | v67 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v174 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v174, (__m128i)(unsigned __int64)v174);
  *(_QWORD *)v174 &= ~1uLL;
  *(_QWORD *)v174 |= 2uLL;
  v175 = 0;
LABEL_128:
  if ( v174 )
    qfree(v174);
LABEL_130:
  if ( v143 )
  {
    v156 = 0;
    v157 = 0;
    for ( i = sub_64960(&v154, 0); i != (_DWORD)v155; i = sub_64960(&v154, i + 1) )
    {
      if ( *(_DWORD *)(v64 + 72) != i )
      {
        if ( i >= *(_DWORD *)(v65 + 64) )
        {
          if ( !under_debugger )
            sub_383060(52719);
          goto LABEL_268;
        }
        for ( j = xrefblk_t_first_to(); j; j = xrefblk_t_next_to() )
        {
          v74 = sub_670B0(v65, (unsigned __int64)src);
          if ( v74 )
          {
            v144 = v74;
            if ( !sub_64930(&v154, *((_DWORD *)v74 + 18)) )
              sub_64190(&v156, *((_DWORD *)v144 + 18));
          }
        }
      }
    }
    v173 = 0;
    v172 = 0xFFFFFFFF00000000LL;
    v174 = 0xFFFFFFFF00000000LL;
    v175 = 0;
    v176 = 0xFFFFFFFF00000000LL;
    v177 = 0;
    sub_330970(&src, -1);
    LODWORD(src) = 4;
    sub_11CA10((char *)&v172, (char *)&v153);
    v94 = HIDWORD(v172);
    v95 = sub_138140((_QWORD *)v65, SHIDWORD(v172), 1);
    v96 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v94), _mm_cvtsi32_si128(v95)).m128i_u64[0];
    if ( v95 != -1 )
    {
      LOBYTE(v153) = 1;
      *(_QWORD *)((char *)&v153 + 4) = v96;
      sub_125180((__int64)&v176, (unsigned __int8 *)&v153);
      if ( nb )
        v98 = *(_QWORD *)(nb + 16);
      else
        v98 = *(_QWORD *)(v64 + 56);
      if ( v98 )
        v99 = *(_QWORD *)(v98 + 24);
      else
        v99 = *(_QWORD *)(v64 + 32);
      v128 = v98;
      v171 = v99;
      v100 = j__qalloc_or_throw(80, (__int64)&v153, v98, v97);
      *(_OWORD *)(v100 + 8) = 0;
      *(_QWORD *)(v100 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v100 + 40) = 0;
      *(_QWORD *)(v100 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v100 + 56) = 0;
      *(_QWORD *)(v100 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v100 + 72) = 0;
      sub_1253A0(v100, (__int64)&src);
      sub_A3160(v64, (_QWORD *)v100, v128);
      v29 = 0;
      for ( k = sub_64960(&v156, 0); ; k = sub_64960(&v156, v29) )
      {
        nc = k;
        if ( k == (_DWORD)v157 )
          break;
        if ( k >= *(_DWORD *)(v65 + 64) )
        {
          if ( !under_debugger )
            sub_383060(52719);
          goto LABEL_268;
        }
        v103 = *(_QWORD *)(v65 + 528);
        v104 = *(unsigned int **)(*(_QWORD *)(v103 + 8LL * k) + 56LL);
        v129 = *(_QWORD **)(v103 + 8LL * k);
        if ( v104 )
        {
          v171 = *((_QWORD *)v104 + 3);
          v29 = *((_BYTE *)v104 + 64) == 0;
          if ( (unsigned __int8)sub_32ED40(*v104, v29) )
          {
            if ( *v104 - 56 <= 1 )
            {
              v106 = sub_67FD0(v65, *((_QWORD *)v104 + 3), 2, v102);
              if ( *v104 == 57 )
                sub_120220((__int64)v129, (int)v104, (__int64)(v104 + 12), 0);
              sub_A33C0((__int64)v129, (__int64)v104);
              sub_B52C0(v129, *((_QWORD *)v104 + 3), *(unsigned int *)(v106 + 72), v107);
              sub_A3160(v106, v104, 0);
              v109 = (_QWORD *)sub_67FD0(v65, *((_QWORD *)v104 + 3), 2, v108);
              v29 = *((_QWORD *)v104 + 3);
              sub_B52C0(v109, v29, *(unsigned int *)(v129[1] + 72LL), v110);
              v129 = v109;
              v104 = nullptr;
            }
            else
            {
              v104 = *((unsigned int **)v104 + 2);
            }
          }
        }
        else
        {
          v171 = v129[4];
        }
        v105 = j__qalloc_or_throw(80, v29, v103, v102);
        *(_OWORD *)(v105 + 8) = 0;
        *(_QWORD *)(v105 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v105 + 40) = 0;
        *(_QWORD *)(v105 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v105 + 56) = 0;
        *(_QWORD *)(v105 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v105 + 72) = 0;
        sub_1253A0(v105, (__int64)&src);
        sub_A3160((__int64)v129, (_QWORD *)v105, (__int64)v104);
        v29 = nc + 1;
      }
      sub_11CDA0((__int64)&v176);
      sub_11CDA0((__int64)&v174);
      sub_11CDA0((__int64)&v172);
      qfree(v156);
      goto LABEL_143;
    }
    if ( !under_debugger )
      sub_383060(52598);
LABEL_268:
    BUG();
  }
LABEL_143:
  v36 = v154;
  qfree(v154);
LABEL_144:
  if ( v132 == -1 )
    goto LABEL_103;
LABEL_69:
  v30 = v132;
  v127 = (_QWORD *)a1[2];
  v133 = &v162[v132];
  if ( v127[6] )
  {
    v40 = v127[8];
    v41 = *v133;
    if ( (unsigned int)v41 >= *(_DWORD *)(v40 + 64) )
      sub_1B81F0(v36, v29);
    v30 = *(_QWORD *)(v40 + 528);
    if ( *(_DWORD *)(*(_QWORD *)(v30 + 8 * v41) + 76LL) != 6 )
    {
      head = a2;
      v43 = v127[4];
      if ( v43 < *((_QWORD *)a3 + 8) )
        v43 = *((_QWORD *)a3 + 8);
      do
      {
        v29 = v43;
        na = head;
        head = prev_head();
      }
      while ( head != -1 && get_first_fcref_from() != *((_QWORD *)a3 + 7) );
      v44 = (_QWORD *)v127[7];
      if ( v44[3] >= na )
      {
        src = nullptr;
        v170 = 0;
        v45 = *(_QWORD *)(v40 + 1504);
        if ( v44 )
        {
          while ( 2 )
          {
            if ( !sub_11E8A0(*(unsigned int *)v44) )
              goto LABEL_95;
            if ( *((_BYTE *)v44 + 64) != 1 || (v29 = v45, (unsigned __int8)sub_1205A0(v44, v45, 0, v31, v46, v47)) )
            {
              if ( src )
              {
                *(_QWORD *)&v170 = 0;
                qfree((__int64)src);
              }
              goto LABEL_103;
            }
            if ( *((_BYTE *)v44 + 64) == 1 && *((_DWORD *)v44 + 18) >= *(_DWORD *)(v45 + 68) )
              goto LABEL_95;
            v29 = *((unsigned int *)v44 + 18);
            if ( sub_64930((_QWORD *)(v45 + 104), v29) )
              goto LABEL_95;
            v29 = (__int64)src;
            v48 = (char *)src + 8 * v170;
            v49 = (8 * (__int64)v170) >> 5;
            if ( v49 > 0 )
            {
              v50 = *((_DWORD *)v44 + 18);
              v31 = (unsigned __int64)src;
              v51 = (char *)src + 32 * v49;
              while ( 1 )
              {
                if ( v50 == *(_DWORD *)(*(_QWORD *)v31 + 72LL) )
                {
                  v51 = (char *)v31;
                  goto LABEL_92;
                }
                if ( v50 == *(_DWORD *)(*(_QWORD *)(v31 + 8) + 72LL) )
                  break;
                if ( v50 == *(_DWORD *)(*(_QWORD *)(v31 + 16) + 72LL) )
                {
                  v51 = (char *)(v31 + 16);
                  goto LABEL_92;
                }
                if ( v50 == *(_DWORD *)(*(_QWORD *)(v31 + 24) + 72LL) )
                {
                  v51 = (char *)(v31 + 24);
                  goto LABEL_92;
                }
                v31 += 32LL;
                if ( v51 == (char *)v31 )
                  goto LABEL_169;
              }
              v51 = (char *)(v31 + 8);
LABEL_92:
              if ( v48 != v51 )
              {
                v30 = *(_QWORD *)v51;
                if ( *(_DWORD *)(*(_QWORD *)v51 + 68LL) < *((_DWORD *)v44 + 17) )
                  *(_QWORD *)v51 = v44;
                goto LABEL_95;
              }
LABEL_174:
              v30 = v170 + 1;
              if ( *((_QWORD *)&v170 + 1) < (unsigned __int64)(v170 + 1) )
              {
                v87 = (char *)qvector_reserve((__int64)&src, (__int64)src, v30, 8);
                v30 = v170;
                src = v87;
                v48 = &v87[8 * v170];
              }
              *(_QWORD *)v48 = v44;
              *(_QWORD *)&v170 = v170 + 1;
LABEL_95:
              v44 = (_QWORD *)v44[2];
              if ( !v44 || v44[3] < na )
              {
                if ( !(_QWORD)v170 )
                  goto LABEL_98;
                v112 = sub_332AB0(v40, na);
                v146 = sub_67FD0(v40, v112, 2, v113);
                sub_B52C0((_QWORD *)v146, *(_QWORD *)(v146 + 32), *v133, v114);
                *v133 = *(_DWORD *)(v146 + 72);
                v29 = (__int64)src;
                v150 = (char *)src + 8 * v170;
                if ( src != v150 )
                {
                  v134 = (char *)src;
                  do
                  {
                    v121 = *(_QWORD *)v134;
                    v151 = *(_DWORD *)(*(_QWORD *)v134 + 72LL);
                    if ( v151 == DWORD2(v153) && (unsigned __int8)netnode_charval() != 3 )
                    {
                      v122 = sub_670B0(v40, *((_QWORD *)a3 + 8));
                      if ( v122 )
                      {
                        if ( v122[6] )
                        {
                          v123 = v122[7];
                          if ( *(_DWORD *)v123 == 42 )
                          {
                            v124 = *(_QWORD *)(v123 + 16);
                            if ( v124 )
                            {
                              while ( *(_QWORD *)(v124 + 24) >= *((_QWORD *)a3 + 8) )
                              {
                                if ( (unsigned int)(*(_DWORD *)v124 - 29) <= 0xC
                                  && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v40 + 1504)
                                                                                       + 240LL))(
                                       *(_QWORD *)(v40 + 1504),
                                       (unsigned int)a3[24]) == 2 )
                                {
                                  v125 = DWORD1(v153);
                                  v145 = v5;
                                  if ( *(_DWORD *)(v121 + 68) >= SDWORD1(v153) )
                                    v125 = *(_DWORD *)(v121 + 68);
                                  v115 = v125;
                                  goto LABEL_250;
                                }
                                v124 = *(_QWORD *)(v124 + 16);
                                if ( !v124 )
                                  break;
                              }
                            }
                          }
                        }
                      }
                    }
                    v145 = 0;
                    v115 = *(_DWORD *)(v121 + 68);
LABEL_250:
                    v152 = sub_138140((_QWORD *)v40, v115, 1);
                    if ( v152 == -1 )
                      break;
                    v116 = j__qalloc_or_throw(80, v115, v30, v31);
                    *(_QWORD *)(v116 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v116 + 40) = 0;
                    *(_QWORD *)(v116 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v116 + 56) = 0;
                    *(_QWORD *)(v116 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v116 + 72) = 0;
                    sub_330970(v116, na);
                    *(_BYTE *)(v116 + 32) = 1;
                    v117 = v116;
                    *(_BYTE *)(v116 + 64) = 1;
                    *(_DWORD *)v116 = 4;
                    *(_DWORD *)(v116 + 72) = v152;
                    *(_DWORD *)(v116 + 68) = v115;
                    *(_QWORD *)(v116 + 36) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v115), _mm_cvtsi32_si128(v151)).m128i_u64[0];
                    v44 = sub_A3160((__int64)v127, (_QWORD *)v116, (__int64)v44);
                    if ( v145 )
                    {
                      v117 = v116 + 64;
                      sub_125180((__int64)&v153, (unsigned __int8 *)(v116 + 64));
                    }
                    v120 = j__qalloc_or_throw(80, v117, v118, v119);
                    *(_QWORD *)(v120 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v120 + 40) = 0;
                    *(_QWORD *)(v120 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v120 + 56) = 0;
                    *(_QWORD *)(v120 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v120 + 72) = 0;
                    *(_OWORD *)(v120 + 8) = 0;
                    sub_1253A0(v120, v116);
                    *(_QWORD *)(v120 + 24) = *(_QWORD *)(v146 + 32);
                    sub_11CA10((char *)(v120 + 64), (char *)(v120 + 32));
                    sub_A3160(v146, (_QWORD *)v120, 0);
                    v134 += 8;
                  }
                  while ( v150 != v134 );
LABEL_98:
                  v29 = (__int64)src;
                }
                if ( v29 )
                {
                  *(_QWORD *)&v170 = 0;
                  qfree(v29);
                }
                goto LABEL_103;
              }
              continue;
            }
            break;
          }
          v51 = (char *)src;
LABEL_169:
          v83 = v48 - v51;
          if ( v48 - v51 == 16 )
          {
            v84 = *((_DWORD *)v44 + 18);
          }
          else
          {
            if ( v83 != 24 )
            {
              if ( v83 != 8 )
                goto LABEL_174;
              v84 = *((_DWORD *)v44 + 18);
              goto LABEL_173;
            }
            v31 = *(_QWORD *)v51;
            v84 = *((_DWORD *)v44 + 18);
            if ( v84 == *(_DWORD *)(*(_QWORD *)v51 + 72LL) )
              goto LABEL_92;
            v51 += 8;
          }
          v31 = *(_QWORD *)v51;
          if ( v84 == *(_DWORD *)(*(_QWORD *)v51 + 72LL) )
            goto LABEL_92;
          v51 += 8;
LABEL_173:
          v31 = *(_QWORD *)v51;
          if ( *(_DWORD *)(*(_QWORD *)v51 + 72LL) == v84 )
            goto LABEL_92;
          goto LABEL_174;
        }
      }
    }
  }
LABEL_103:
  if ( (_QWORD)v161 == 1 )
  {
    sub_B52C0((_QWORD *)a1[2], a2, *v162, v31);
  }
  else
  {
    if ( (_QWORD)v161 != 2 )
      goto LABEL_108;
    v53 = (__int64 **)v160;
    v29 = *(_QWORD *)(v160 + 8);
    if ( !v29 )
    {
      v29 = *(_QWORD *)(v160 + 32);
      v31 = 1;
      v53 = (__int64 **)(v160 + 24);
      v30 = 0;
      goto LABEL_107;
    }
    v31 = *(_QWORD *)(v160 + 32);
    if ( v31 )
      goto LABEL_108;
    v30 = 1;
LABEL_107:
    if ( v29 == 1 )
    {
      v29 = v162[v30];
      v31 = v162[v31];
      v30 = (unsigned int)(*(_DWORD *)(a1[2] + 72LL) + 1);
      if ( (_DWORD)v29 == (_DWORD)v30 )
      {
        v85 = 44;
      }
      else
      {
        if ( (_DWORD)v30 != (_DWORD)v31 )
          goto LABEL_108;
        LODWORD(v31) = v29;
        v85 = 43;
      }
      v156 = 0xFFFFFFFF00000007LL;
      v157 = (unsigned int)v31;
      src = (void *)0xFFFFFFFF00000000LL;
      *(_QWORD *)&v170 = 0;
      sub_120A10((__int64)&src, *(_QWORD *)(a1[100] + 112LL), **v53, SDWORD1(v153), a2, 0);
      sub_1D6450((_DWORD)a1, v85, (unsigned int)&v153, (unsigned int)&src, (unsigned int)&v156, v86);
      sub_11CDA0((__int64)&src);
      sub_11CDA0((__int64)&v156);
    }
    else
    {
LABEL_108:
      v54 = j__qalloc_or_throw(48, v29, v30, v31);
      *(_QWORD *)v54 = 0;
      v55 = v160;
      *(_OWORD *)(v54 + 8) = 0;
      *(_QWORD *)v54 = v55;
      v56 = v161;
      *(_QWORD *)(v54 + 24) = 0;
      *(_QWORD *)(v54 + 8) = v56;
      v57 = *((_QWORD *)&v161 + 1);
      *(_OWORD *)(v54 + 32) = 0;
      *(_QWORD *)(v54 + 16) = v57;
      v160 = 0;
      *(_QWORD *)(v54 + 24) = v162;
      v162 = nullptr;
      *(_QWORD *)(v54 + 32) = v163;
      v161 = 0;
      *(_QWORD *)(v54 + 40) = *((_QWORD *)&v163 + 1);
      src = (void *)-4294967284LL;
      *(_QWORD *)&v170 = v54;
      v163 = 0;
      sub_1D6450((_DWORD)a1, 53, (unsigned int)&v153, (unsigned int)&src, 0, v58);
      sub_11CDA0((__int64)&src);
    }
  }
  v14 = 0;
  sub_11CDA0((__int64)&v153);
  sub_1B8C30(v165);
LABEL_20:
  if ( v158 )
  {
    *(_QWORD *)&v159 = 0;
    qfree(v158);
  }
  if ( v162 )
  {
    *(_QWORD *)&v163 = 0;
    qfree((__int64)v162);
  }
  v15 = v160;
  if ( v160 )
  {
    v16 = v161;
    if ( (_QWORD)v161 )
    {
      v17 = 0;
      do
      {
        v18 = (__int64 *)(v15 + 24 * v17);
        v19 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v19);
          v15 = v160;
        }
        ++v17;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v161 = 0;
    qfree(v15);
  }
  return v14;
}
