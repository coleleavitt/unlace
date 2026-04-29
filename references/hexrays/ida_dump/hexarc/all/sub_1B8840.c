__int64 __fastcall sub_1B8840(_QWORD *a1, __int64 a2, int *a3, __int64 a4)
{
  int v4; // eax
  int *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r13d
  int v9; // r12d
  __int64 *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  int *v13; // r15
  __int64 v14; // r14
  int *v15; // rax
  unsigned int v16; // ebp
  unsigned __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rdi
  bool v23; // bl
  int *v24; // rax
  unsigned __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // ebx
  int *v30; // rdx
  int *v31; // rax
  int dtype_size; // r12d
  __int64 v33; // rbp
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdi
  unsigned __int64 v38; // rdx
  __int64 v39; // rsi
  int v40; // ecx
  __int64 v41; // rax
  __int64 *v42; // rbp
  int v43; // eax
  __int64 v44; // r14
  __int64 v45; // rax
  size_t v46; // r15
  unsigned __int64 v47; // rbp
  __int64 head; // rax
  _QWORD *v49; // rbp
  __int64 v50; // r12
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // r9d
  char *v54; // r9
  __int64 v55; // rax
  int v56; // edx
  char *v57; // rcx
  char *v58; // rax
  void *v59; // rsi
  int v60; // eax
  __int64 **v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  int v69; // r9d
  _QWORD *v70; // rbx
  __int64 v71; // rsi
  __m128i si128; // xmm0
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // r15
  __int64 v76; // r14
  int v77; // edx
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rcx
  _QWORD *v80; // r12
  __int64 *v81; // rdi
  __int64 *v82; // rdi
  unsigned int i; // r12d
  char j; // al
  _QWORD *v85; // rax
  unsigned __int64 v86; // rbx
  unsigned __int64 v87; // rbp
  unsigned __int64 v88; // r12
  __int64 v89; // rax
  unsigned __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // rax
  signed __int64 v93; // rdx
  int v94; // edx
  int v95; // esi
  unsigned int v96; // ecx
  int v97; // edx
  int v98; // r12d
  int v99; // r9d
  __int64 v100; // rax
  unsigned __int64 v101; // r15
  __int64 v102; // r14
  void *v103; // rax
  unsigned __int64 v104; // r12
  __int64 *v105; // rax
  unsigned int v106; // r12d
  unsigned int v107; // eax
  unsigned __int64 v108; // xmm0_8
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // r12
  unsigned int k; // eax
  unsigned int *v113; // r15
  __int64 v114; // r12
  __int64 v115; // r12
  _QWORD *v116; // r12
  __int64 v117; // rdi
  __int64 v118; // rax
  signed int v119; // r15d
  __int64 v120; // r12
  __int64 v121; // r15
  __int64 v122; // r12
  _QWORD *v123; // rax
  __int64 v124; // rax
  __int64 v125; // r15
  signed int v126; // eax
  int v127; // [rsp+0h] [rbp-1C0h]
  _QWORD *v128; // [rsp+0h] [rbp-1C0h]
  __int64 v129; // [rsp+0h] [rbp-1C0h]
  _QWORD *v130; // [rsp+0h] [rbp-1C0h]
  __int64 v132; // [rsp+10h] [rbp-1B0h]
  int v133; // [rsp+10h] [rbp-1B0h]
  int *v134; // [rsp+10h] [rbp-1B0h]
  char *v135; // [rsp+10h] [rbp-1B0h]
  int n; // [rsp+20h] [rbp-1A0h]
  size_t na; // [rsp+20h] [rbp-1A0h]
  size_t nb; // [rsp+20h] [rbp-1A0h]
  __int64 nd; // [rsp+20h] [rbp-1A0h]
  unsigned int nc; // [rsp+20h] [rbp-1A0h]
  char v144; // [rsp+38h] [rbp-188h]
  _QWORD *v145; // [rsp+38h] [rbp-188h]
  char v146; // [rsp+38h] [rbp-188h]
  __int64 v147; // [rsp+40h] [rbp-180h]
  unsigned __int64 v148; // [rsp+48h] [rbp-178h]
  unsigned __int64 v149; // [rsp+48h] [rbp-178h]
  unsigned __int64 v150; // [rsp+48h] [rbp-178h]
  char *v151; // [rsp+48h] [rbp-178h]
  unsigned int v152; // [rsp+50h] [rbp-170h]
  int v153; // [rsp+5Ch] [rbp-164h]
  __int128 v154; // [rsp+68h] [rbp-158h] BYREF
  __int64 v155; // [rsp+78h] [rbp-148h] BYREF
  __int64 v156; // [rsp+80h] [rbp-140h]
  __int64 v157; // [rsp+88h] [rbp-138h] BYREF
  __int64 v158; // [rsp+90h] [rbp-130h]
  __int64 v159; // [rsp+98h] [rbp-128h] BYREF
  __int128 v160; // [rsp+A0h] [rbp-120h]
  unsigned __int64 v161; // [rsp+B8h] [rbp-108h] BYREF
  __int128 v162; // [rsp+C0h] [rbp-100h]
  int *v163; // [rsp+D0h] [rbp-F0h] BYREF
  __int128 v164; // [rsp+D8h] [rbp-E8h]
  int v165; // [rsp+F0h] [rbp-D0h] BYREF
  int *v166; // [rsp+F8h] [rbp-C8h]
  int *v167; // [rsp+100h] [rbp-C0h]
  int *v168; // [rsp+108h] [rbp-B8h]
  __int64 v169; // [rsp+110h] [rbp-B0h]
  void *src; // [rsp+118h] [rbp-A8h] BYREF
  __int128 v171; // [rsp+120h] [rbp-A0h]
  __int64 v172; // [rsp+130h] [rbp-90h]
  unsigned __int64 v173; // [rsp+138h] [rbp-88h] BYREF
  __int64 v174; // [rsp+140h] [rbp-80h]
  unsigned __int64 v175; // [rsp+148h] [rbp-78h] BYREF
  __int64 v176; // [rsp+150h] [rbp-70h]
  __int64 v177; // [rsp+158h] [rbp-68h] BYREF
  __int64 v178; // [rsp+160h] [rbp-60h]
  __int128 *v179; // [rsp+168h] [rbp-58h]
  char v180; // [rsp+170h] [rbp-50h]
  unsigned __int64 v181; // [rsp+180h] [rbp-40h]

  v4 = a3[8];
  v181 = __readfsqword(0x28u);
  v162 = 0;
  v161 = 0;
  v163 = nullptr;
  v159 = 0;
  v164 = 0;
  v160 = 0;
  if ( (v4 & 0x40000) != 0 )
  {
    if ( (v4 & 0x10000) != 0 )
      *((_QWORD *)a3 + 10) = 0;
    else
      *((_QWORD *)a3 + 6) = 0;
  }
  v5 = (int *)&v159;
  v8 = calc_switch_cases(&v161, &v159, a2, a3 + 8);
  if ( !(_BYTE)v8 || a3[24] == -1 || !(_QWORD)v160 )
  {
    v70 = (_QWORD *)a1[1];
    v71 = v70[62];
    if ( v70[64] <= 0x2Du )
    {
      v92 = qvector_reserve(v70 + 62, v71, 46, 1);
      v70[62] = v92;
      v71 = v92;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_3FA170);
    v70[63] = 46;
    *(__m128i *)v71 = si128;
    *(__m128i *)(v71 + 16) = _mm_load_si128((const __m128i *)&xmmword_3FA180);
    *(__m128i *)(v71 + 29) = _mm_load_si128((const __m128i *)&xmmword_3FA190);
    *(_BYTE *)(v70[62] + 45LL) = 0;
    goto LABEL_19;
  }
  v165 = 0;
  v166 = nullptr;
  v167 = &v165;
  v168 = &v165;
  v169 = 0;
  n = 0;
  v132 = 0;
  do
  {
    v9 = 0;
    v10 = (__int64 *)(v161 + 24 * v132);
    v11 = 0;
    if ( v10[1] )
    {
      while ( 1 )
      {
        v12 = *v10;
        v13 = v166;
        v14 = *(_QWORD *)(*v10 + 8 * v11);
        if ( v166 )
          break;
        v13 = &v165;
        if ( v167 != &v165 )
          goto LABEL_47;
        v13 = &v165;
        v23 = v8;
LABEL_34:
        v24 = (int *)operator new(0x28u);
        v24[8] = v14;
        v5 = v24;
        ++v9;
        std::_Rb_tree_insert_and_rebalance(v23, v24, v13, &v165);
        v11 = v9;
        ++v169;
        if ( v9 >= (unsigned __int64)v10[1] )
          goto LABEL_35;
      }
      while ( 1 )
      {
        v6 = (unsigned int)v13[8];
        v12 = *((_QWORD *)v13 + 2);
        v5 = nullptr;
        v15 = *((int **)v13 + 3);
        if ( (int)v14 < (int)v6 )
        {
          v15 = *((int **)v13 + 2);
          v5 = (int *)v8;
        }
        if ( !v15 )
          break;
        v13 = v15;
      }
      if ( (_BYTE)v5 )
      {
        if ( v167 == v13 )
        {
LABEL_32:
          v23 = v8;
          if ( v13 != &v165 )
            v23 = (int)v14 < v13[8];
          goto LABEL_34;
        }
LABEL_47:
        LODWORD(v6) = *(_DWORD *)(std::_Rb_tree_decrement(v13, v5, v12, v6, v7) + 32);
      }
      if ( (int)v14 <= (int)v6 )
      {
        sub_652F0((__int64 *)(a1[1] + 496LL), (__int64)"duplicate case %lld", v14);
        goto LABEL_18;
      }
      goto LABEL_32;
    }
LABEL_35:
    v25 = *(_QWORD *)(v159 + 8 * v132);
    v26 = a1[1];
    v27 = (__int64)sub_60B30(v26, v25);
    if ( v27 )
    {
      if ( v25 != *(_QWORD *)(v27 + 32) )
      {
        v28 = *(_QWORD *)(v27 + 48);
        if ( !v28 || v25 != *(_QWORD *)(v28 + 24) )
        {
LABEL_51:
          sub_652F0((__int64 *)(a1[1] + 496LL), (__int64)"bad target 0x%a for case %lld", 0.0, v25);
LABEL_18:
          sub_1B23B0(v166);
LABEL_19:
          v16 = -7;
          *(_QWORD *)(a1[1] + 488LL) = a2;
          goto LABEL_20;
        }
      }
    }
    else
    {
      v27 = sub_62A50(v26, a2, v25, 1);
      if ( !v27 )
        goto LABEL_51;
    }
    v5 = v163;
    v6 = v164;
    v29 = *(_DWORD *)(v27 + 72);
    v30 = &v163[v164];
    if ( v163 != v30 )
    {
      v31 = v163;
      while ( v29 != *v31 )
      {
        if ( v30 == ++v31 )
          goto LABEL_53;
      }
      if ( v30 != v31 )
      {
        if ( !under_debugger )
          sub_37B760(52924);
        goto LABEL_271;
      }
    }
LABEL_53:
    if ( *((_QWORD *)&v164 + 1) < (unsigned __int64)(v164 + 1) )
    {
      v163 = (int *)qvector_reserve(&v163, v163, v164 + 1, 4);
      v30 = &v163[v164];
    }
    ++n;
    *v30 = v29;
    v132 = n;
    *(_QWORD *)&v164 = v164 + 1;
  }
  while ( n < (unsigned __int64)v160 );
  v154 = 0xFFFFFFFF00000000LL;
  dtype_size = get_dtype_size(*((unsigned __int8 *)a3 + 100));
  DWORD2(v154) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[1] + 1504LL) + 168LL))(
                   *(_QWORD *)(a1[1] + 1504LL),
                   (unsigned int)a3[24]);
  v33 = a1[1];
  LOBYTE(v154) = 1;
  DWORD1(v154) = dtype_size;
  if ( SDWORD2(v154) < 0 )
  {
    sub_652F0((__int64 *)(v33 + 496), (__int64)"bad switch expression register (regnum=%d)", a3[24]);
    goto LABEL_165;
  }
  if ( dtype_size <= 0 )
  {
    sub_652F0(
      (__int64 *)(v33 + 496),
      (__int64)"bad switch expression register size (dtype=%d)",
      *((unsigned __int8 *)a3 + 100));
    goto LABEL_165;
  }
  v34 = *((_QWORD *)a3 + 7);
  if ( v34 == -1 )
  {
    v60 = a3[6];
    if ( v60 == 1 )
    {
      a3[6] = 2;
    }
    else if ( v60 != 2 )
    {
      goto LABEL_105;
    }
    v133 = -1;
    goto LABEL_116;
  }
  v35 = (__int64)sub_60B30(v33, *((_QWORD *)a3 + 7));
  if ( !v35 )
  {
    v35 = sub_62A50(v33, a2, v34, 1);
    if ( v35 )
      goto LABEL_63;
    goto LABEL_164;
  }
  if ( v34 != *(_QWORD *)(v35 + 32) )
  {
    v36 = *(_QWORD *)(v35 + 48);
    if ( !v36 || v34 != *(_QWORD *)(v36 + 24) )
    {
LABEL_164:
      sub_652F0((__int64 *)(v33 + 496), (__int64)"bad target 0x%a for default case", 0.0);
LABEL_165:
      sub_1166E0((__int64)&v154);
      goto LABEL_18;
    }
  }
LABEL_63:
  v37 = *(unsigned int *)(v35 + 72);
  v38 = v164;
  v127 = *(_DWORD *)(v35 + 72);
  if ( !(_QWORD)v164 )
  {
    v88 = v162;
    v86 = v162;
    if ( (_QWORD)v162 == 1 )
    {
      v133 = 0;
      v39 = (__int64)v163;
    }
    else
    {
      v133 = 0;
      v87 = 1;
LABEL_149:
      src = nullptr;
      v171 = 0;
      if ( v87 < v86 )
      {
        v104 = v87;
        do
        {
          v105 = (__int64 *)(v161 + 24 * v104);
          v37 = *v105;
          if ( *v105 )
          {
            v105[1] = 0;
            qfree(v37);
          }
          ++v104;
        }
        while ( v104 < v86 );
      }
      else if ( (unsigned __int64)&src < v161 || (unsigned __int64)&src >= v161 + 24LL * *((_QWORD *)&v162 + 1) )
      {
        if ( *((_QWORD *)&v162 + 1) < v87 )
        {
          v37 = (__int64)&v161;
          v161 = qvector_reserve(&v161, v161, v87, 24);
          v88 = v162;
        }
        while ( v88 < v87 )
        {
          v101 = v161 + 24 * v88;
          *(_QWORD *)v101 = 0;
          *(_OWORD *)(v101 + 8) = 0;
          v102 = v171;
          if ( (_QWORD)v171 )
          {
            nd = 8 * v171;
            v103 = (void *)qalloc_or_throw(8 * v171);
            *(_QWORD *)v101 = v103;
            v37 = (__int64)v103;
            *(_QWORD *)(v101 + 16) = v102;
            memcpy(v103, src, nd);
            *(_QWORD *)(v101 + 8) = v102;
          }
          ++v88;
        }
      }
      else
      {
        if ( *((_QWORD *)&v162 + 1) < v87 )
        {
          v37 = (__int64)&v161;
          v161 = qvector_reserve(&v161, v161, v87, 24);
          v86 = v162;
        }
        v89 = 24 * v86;
        if ( v86 < v87 )
        {
          do
          {
            ++v86;
            v90 = v89 + v161;
            v89 += 24;
            *(_QWORD *)v90 = 0;
            *(_OWORD *)(v90 + 8) = 0;
          }
          while ( v86 != v87 );
        }
      }
      *(_QWORD *)&v162 = v87;
      v38 = v164;
      v88 = v87;
      v39 = (__int64)v163;
LABEL_157:
      if ( v38 >= v88 )
      {
        if ( v38 != v88 )
          *(_QWORD *)&v164 = v88;
        goto LABEL_160;
      }
    }
    v100 = v39;
    if ( *((_QWORD *)&v164 + 1) < v88 )
    {
      v100 = qvector_reserve(&v163, v39, v88, 4);
      v163 = (int *)v100;
      v38 = v164;
    }
    v37 = v100 + 4 * v38;
    memset((void *)v37, 0, 4 * (v88 - v38));
    *(_QWORD *)&v164 = v88;
    v39 = (__int64)v163;
LABEL_160:
    *(_DWORD *)(v39 + 4 * v88 - 4) = v127;
    v91 = a3[6];
    if ( v91 != 1 )
    {
      if ( v91 == 2 )
        goto LABEL_116;
      goto LABEL_146;
    }
LABEL_115:
    a3[6] = 2;
    goto LABEL_116;
  }
  v39 = (__int64)v163;
  v40 = 0;
  v41 = 0;
  while ( (_DWORD)v37 != v163[v41] )
  {
    v41 = ++v40;
    if ( v40 >= (unsigned __int64)v164 )
    {
      v86 = v162;
      v133 = v164;
      v87 = (int)v164 + 1;
      v88 = v162;
      if ( v87 != (_QWORD)v162 )
        goto LABEL_149;
      goto LABEL_157;
    }
  }
  v133 = v40;
  v42 = (__int64 *)(v161 + 24 * v41);
  v37 = *v42;
  if ( *v42 )
  {
    v42[1] = 0;
    qfree(v37);
    *v42 = 0;
    v42[2] = 0;
  }
  v43 = a3[6];
  if ( v43 == 1 )
    goto LABEL_115;
  if ( v43 != 2 )
    goto LABEL_71;
LABEL_116:
  v73 = *a3;
  if ( *(_DWORD *)(a1[2] + 72LL) != *a3 )
  {
    if ( !under_debugger )
      sub_37B760(51755);
    goto LABEL_271;
  }
  v74 = *((_QWORD *)a3 + 2);
  v75 = *((_QWORD *)a3 + 1);
  if ( v74 )
    nb = *(_QWORD *)(v74 + 8);
  else
    nb = *(_QWORD *)(v75 + 48);
  v76 = *(_QWORD *)(v75 + 64);
  v77 = *(_DWORD *)(v75 + 72);
  v155 = 0;
  *((_QWORD *)&v171 + 1) = a4;
  v156 = 0;
  v173 = nb;
  *(_QWORD *)&v171 = v76;
  LODWORD(v172) = v77;
  LODWORD(v174) = v73;
  v175 = 0;
  v176 = 0;
  v177 = 0;
  v178 = 0;
  src = &off_4AB040;
  v179 = &v154;
  v180 = 0;
  sub_1B7CE0((const __m128i *)&src);
  v39 = (__int64)&v177;
  sub_5E350(&v155, &v177);
  v144 = v180;
  src = &off_4AB028;
  qfree(v177);
  v78 = v175;
  if ( !v175 )
    goto LABEL_132;
  v79 = *(_QWORD *)v175;
  if ( !v176 )
  {
    *(_QWORD *)v175 = *(_QWORD *)v175 & 3LL | v175 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(v175 + 8) = _mm_unpacklo_epi64((__m128i)v175, (__m128i)v175);
    *(_QWORD *)v175 &= ~1uLL;
    *(_QWORD *)v175 |= 2uLL;
    goto LABEL_130;
  }
  v80 = (_QWORD *)(v79 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)(v79 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_129;
  v81 = (__int64 *)v80[1];
  if ( (*(_BYTE *)v81 & 2) != 0 )
  {
    v82 = (__int64 *)v80[2];
    if ( (*(_BYTE *)v82 & 2) == 0 )
    {
LABEL_124:
      v149 = v79;
      sub_1B2280(v82);
      v79 = v149;
      goto LABEL_125;
    }
    goto LABEL_244;
  }
  v148 = *(_QWORD *)v175;
  sub_1B2280(v81);
  v82 = (__int64 *)v80[2];
  v79 = v148;
  if ( (*(_BYTE *)v82 & 2) == 0 )
    goto LABEL_124;
LABEL_125:
  if ( (*(_BYTE *)v80 & 2) == 0 )
  {
LABEL_244:
    v117 = v80[4];
    if ( v117 )
    {
      v150 = v79;
      v80[5] = 0;
      qfree(v117);
      v79 = v150;
    }
    *v80 |= 2uLL;
  }
  if ( v79 > 3 )
    qfree(v80);
  v78 = v175;
  v79 = *(_QWORD *)v175;
LABEL_129:
  *(_QWORD *)v78 = v79 & 3 | v78 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v175 + 8) = _mm_unpacklo_epi64((__m128i)v175, (__m128i)v175);
  *(_QWORD *)v175 &= ~1uLL;
  *(_QWORD *)v175 |= 2uLL;
  v176 = 0;
LABEL_130:
  if ( v175 )
    qfree(v175);
LABEL_132:
  if ( v144 )
  {
    v157 = 0;
    v158 = 0;
    for ( i = sub_5E3E0(&v155, 0); i != (_DWORD)v156; i = sub_5E3E0(&v155, i + 1) )
    {
      if ( *(_DWORD *)(v75 + 72) != i )
      {
        if ( i >= *(_DWORD *)(v76 + 64) )
        {
          if ( !under_debugger )
            sub_37B760(52719);
          goto LABEL_271;
        }
        for ( j = xrefblk_t_first_to(&src, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v76 + 528) + 8LL * i) + 32LL), 4);
              j;
              j = xrefblk_t_next_to(&src) )
        {
          v85 = sub_60B30(v76, (unsigned __int64)src);
          if ( v85 )
          {
            v145 = v85;
            if ( !sub_5E3B0(&v155, *((_DWORD *)v85 + 18)) )
              sub_5DC10(&v157, *((_DWORD *)v145 + 18));
          }
        }
      }
    }
    v174 = 0;
    v173 = 0xFFFFFFFF00000000LL;
    v175 = 0xFFFFFFFF00000000LL;
    v176 = 0;
    v177 = 0xFFFFFFFF00000000LL;
    v178 = 0;
    sub_329320(&src, -1);
    LODWORD(src) = 4;
    sub_116350((char *)&v173, (char *)&v154);
    v106 = HIDWORD(v173);
    v107 = sub_131A80((_QWORD *)v76, SHIDWORD(v173), 1);
    v108 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v106), _mm_cvtsi32_si128(v107)).m128i_u64[0];
    if ( v107 != -1 )
    {
      LOBYTE(v154) = 1;
      *(_QWORD *)((char *)&v154 + 4) = v108;
      sub_11EAC0((__int64)&v177, (unsigned __int8 *)&v154);
      if ( nb )
        v109 = *(_QWORD *)(nb + 16);
      else
        v109 = *(_QWORD *)(v75 + 56);
      if ( v109 )
        v110 = *(_QWORD *)(v109 + 24);
      else
        v110 = *(_QWORD *)(v75 + 32);
      v129 = v109;
      v172 = v110;
      v111 = j__qalloc_or_throw(80);
      *(_OWORD *)(v111 + 8) = 0;
      *(_QWORD *)(v111 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v111 + 40) = 0;
      *(_QWORD *)(v111 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v111 + 56) = 0;
      *(_QWORD *)(v111 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v111 + 72) = 0;
      sub_11ECE0(v111, (__int64)&src);
      sub_9CAA0(v75, (_QWORD *)v111, v129);
      v39 = 0;
      for ( k = sub_5E3E0(&v157, 0); ; k = sub_5E3E0(&v157, v39) )
      {
        nc = k;
        if ( k == (_DWORD)v158 )
          break;
        if ( k >= *(_DWORD *)(v76 + 64) )
        {
          if ( !under_debugger )
            sub_37B760(52719);
          goto LABEL_271;
        }
        v113 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(v76 + 528) + 8LL * k) + 56LL);
        v130 = *(_QWORD **)(*(_QWORD *)(v76 + 528) + 8LL * k);
        if ( v113 )
        {
          v172 = *((_QWORD *)v113 + 3);
          if ( (unsigned __int8)sub_327800(*v113, *((_BYTE *)v113 + 64) == 0) )
          {
            if ( *v113 - 56 <= 1 )
            {
              v115 = sub_61A50(v76, *((_QWORD *)v113 + 3), 2);
              if ( *v113 == 57 )
                sub_119B60((__int64)v130, (int)v113, (__int64)(v113 + 12), 0);
              sub_9CD00((__int64)v130, (__int64)v113);
              sub_AEC00(v130, *((_QWORD *)v113 + 3), *(_DWORD *)(v115 + 72));
              sub_9CAA0(v115, v113, 0);
              v116 = (_QWORD *)sub_61A50(v76, *((_QWORD *)v113 + 3), 2);
              sub_AEC00(v116, *((_QWORD *)v113 + 3), *(_DWORD *)(v130[1] + 72LL));
              v130 = v116;
              v113 = nullptr;
            }
            else
            {
              v113 = *((unsigned int **)v113 + 2);
            }
          }
        }
        else
        {
          v172 = v130[4];
        }
        v114 = j__qalloc_or_throw(80);
        *(_OWORD *)(v114 + 8) = 0;
        *(_QWORD *)(v114 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v114 + 40) = 0;
        *(_QWORD *)(v114 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v114 + 56) = 0;
        *(_QWORD *)(v114 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v114 + 72) = 0;
        sub_11ECE0(v114, (__int64)&src);
        sub_9CAA0((__int64)v130, (_QWORD *)v114, (__int64)v113);
        v39 = nc + 1;
      }
      sub_1166E0((__int64)&v177);
      sub_1166E0((__int64)&v175);
      sub_1166E0((__int64)&v173);
      qfree(v157);
      goto LABEL_145;
    }
    if ( !under_debugger )
      sub_37B760(52598);
LABEL_271:
    BUG();
  }
LABEL_145:
  v37 = v155;
  qfree(v155);
LABEL_146:
  if ( v133 == -1 )
    goto LABEL_105;
LABEL_71:
  v128 = (_QWORD *)a1[2];
  v134 = &v163[v133];
  if ( v128[6] )
  {
    v44 = v128[8];
    v45 = (unsigned int)*v134;
    if ( (unsigned int)v45 >= *(_DWORD *)(v44 + 64) )
      sub_1B1950(v37, v39);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 528) + 8 * v45) + 76LL) != 6 )
    {
      v46 = a2;
      v47 = v128[4];
      if ( v47 < *((_QWORD *)a3 + 8) )
        v47 = *((_QWORD *)a3 + 8);
      do
      {
        na = v46;
        head = prev_head(v46, v47);
        v46 = head;
      }
      while ( head != -1 && get_first_fcref_from(head) != *((_QWORD *)a3 + 7) );
      v49 = (_QWORD *)v128[7];
      if ( v49[3] >= na )
      {
        src = nullptr;
        v171 = 0;
        v50 = *(_QWORD *)(v44 + 1504);
        if ( v49 )
        {
          while ( 2 )
          {
            if ( !sub_1181E0(*(unsigned int *)v49) )
              goto LABEL_97;
            if ( *((_BYTE *)v49 + 64) != 1 || (unsigned __int8)sub_119EE0(v49, v50, 0, v51, v52, v53) )
            {
              if ( src )
              {
                *(_QWORD *)&v171 = 0;
                qfree(src);
              }
              goto LABEL_105;
            }
            if ( *((_BYTE *)v49 + 64) == 1 && *((_DWORD *)v49 + 18) >= *(_DWORD *)(v50 + 68)
              || sub_5E3B0((_QWORD *)(v50 + 104), *((_DWORD *)v49 + 18)) )
            {
              goto LABEL_97;
            }
            v54 = (char *)src + 8 * v171;
            v55 = (8 * (__int64)v171) >> 5;
            if ( v55 > 0 )
            {
              v56 = *((_DWORD *)v49 + 18);
              v57 = (char *)src;
              v58 = (char *)src + 32 * v55;
              while ( 1 )
              {
                if ( v56 == *(_DWORD *)(*(_QWORD *)v57 + 72LL) )
                {
                  v58 = v57;
                  goto LABEL_94;
                }
                if ( v56 == *(_DWORD *)(*((_QWORD *)v57 + 1) + 72LL) )
                  break;
                if ( v56 == *(_DWORD *)(*((_QWORD *)v57 + 2) + 72LL) )
                {
                  v58 = v57 + 16;
                  goto LABEL_94;
                }
                if ( v56 == *(_DWORD *)(*((_QWORD *)v57 + 3) + 72LL) )
                {
                  v58 = v57 + 24;
                  goto LABEL_94;
                }
                v57 += 32;
                if ( v58 == v57 )
                  goto LABEL_172;
              }
              v58 = v57 + 8;
LABEL_94:
              if ( v54 != v58 )
              {
                if ( *(_DWORD *)(*(_QWORD *)v58 + 68LL) < *((_DWORD *)v49 + 17) )
                  *(_QWORD *)v58 = v49;
                goto LABEL_97;
              }
LABEL_177:
              if ( *((_QWORD *)&v171 + 1) < (unsigned __int64)(v171 + 1) )
              {
                src = (void *)qvector_reserve(&src, src, v171 + 1, 8);
                v54 = (char *)src + 8 * v171;
              }
              *(_QWORD *)v54 = v49;
              *(_QWORD *)&v171 = v171 + 1;
LABEL_97:
              v49 = (_QWORD *)v49[2];
              if ( !v49 || v49[3] < na )
              {
                if ( !(_QWORD)v171 )
                  goto LABEL_100;
                v118 = sub_32B470(v44, na);
                v147 = sub_61A50(v44, v118, 2);
                sub_AEC00((_QWORD *)v147, *(_QWORD *)(v147 + 32), *v134);
                *v134 = *(_DWORD *)(v147 + 72);
                v59 = src;
                v151 = (char *)src + 8 * v171;
                if ( src != v151 )
                {
                  v135 = (char *)src;
                  do
                  {
                    v122 = *(_QWORD *)v135;
                    v152 = *(_DWORD *)(*(_QWORD *)v135 + 72LL);
                    if ( v152 == DWORD2(v154)
                      && (unsigned __int8)netnode_charval(
                                            *(_QWORD *)(*(_QWORD *)(v44 + 1496) + 104LL),
                                            *((_QWORD *)a3 + 8),
                                            256) != 3 )
                    {
                      v123 = sub_60B30(v44, *((_QWORD *)a3 + 8));
                      if ( v123 )
                      {
                        if ( v123[6] )
                        {
                          v124 = v123[7];
                          if ( *(_DWORD *)v124 == 42 )
                          {
                            v125 = *(_QWORD *)(v124 + 16);
                            if ( v125 )
                            {
                              while ( *(_QWORD *)(v125 + 24) >= *((_QWORD *)a3 + 8) )
                              {
                                if ( (unsigned int)(*(_DWORD *)v125 - 29) <= 0xC
                                  && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v44 + 1504)
                                                                                       + 240LL))(
                                       *(_QWORD *)(v44 + 1504),
                                       (unsigned int)a3[24]) == 2 )
                                {
                                  v126 = DWORD1(v154);
                                  v146 = v8;
                                  if ( *(_DWORD *)(v122 + 68) >= SDWORD1(v154) )
                                    v126 = *(_DWORD *)(v122 + 68);
                                  v119 = v126;
                                  goto LABEL_253;
                                }
                                v125 = *(_QWORD *)(v125 + 16);
                                if ( !v125 )
                                  break;
                              }
                            }
                          }
                        }
                      }
                    }
                    v146 = 0;
                    v119 = *(_DWORD *)(v122 + 68);
LABEL_253:
                    v153 = sub_131A80((_QWORD *)v44, v119, 1);
                    if ( v153 == -1 )
                      break;
                    v120 = j__qalloc_or_throw(80);
                    *(_QWORD *)(v120 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v120 + 40) = 0;
                    *(_QWORD *)(v120 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v120 + 56) = 0;
                    *(_QWORD *)(v120 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v120 + 72) = 0;
                    sub_329320(v120, na);
                    *(_BYTE *)(v120 + 32) = 1;
                    *(_BYTE *)(v120 + 64) = 1;
                    *(_DWORD *)v120 = 4;
                    *(_DWORD *)(v120 + 72) = v153;
                    *(_DWORD *)(v120 + 68) = v119;
                    *(_QWORD *)(v120 + 36) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v119), _mm_cvtsi32_si128(v152)).m128i_u64[0];
                    v49 = sub_9CAA0((__int64)v128, (_QWORD *)v120, (__int64)v49);
                    if ( v146 )
                      sub_11EAC0((__int64)&v154, (unsigned __int8 *)(v120 + 64));
                    v121 = j__qalloc_or_throw(80);
                    *(_QWORD *)(v121 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v121 + 40) = 0;
                    *(_QWORD *)(v121 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v121 + 56) = 0;
                    *(_QWORD *)(v121 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v121 + 72) = 0;
                    *(_OWORD *)(v121 + 8) = 0;
                    sub_11ECE0(v121, v120);
                    *(_QWORD *)(v121 + 24) = *(_QWORD *)(v147 + 32);
                    sub_116350((char *)(v121 + 64), (char *)(v121 + 32));
                    sub_9CAA0(v147, (_QWORD *)v121, 0);
                    v135 += 8;
                  }
                  while ( v151 != v135 );
LABEL_100:
                  v59 = src;
                }
                if ( v59 )
                {
                  *(_QWORD *)&v171 = 0;
                  qfree(v59);
                }
                goto LABEL_105;
              }
              continue;
            }
            break;
          }
          v58 = (char *)src;
LABEL_172:
          v93 = v54 - v58;
          if ( v54 - v58 == 16 )
          {
            v94 = *((_DWORD *)v49 + 18);
          }
          else
          {
            if ( v93 != 24 )
            {
              if ( v93 != 8 )
                goto LABEL_177;
              v94 = *((_DWORD *)v49 + 18);
              goto LABEL_176;
            }
            v94 = *((_DWORD *)v49 + 18);
            if ( v94 == *(_DWORD *)(*(_QWORD *)v58 + 72LL) )
              goto LABEL_94;
            v58 += 8;
          }
          if ( v94 == *(_DWORD *)(*(_QWORD *)v58 + 72LL) )
            goto LABEL_94;
          v58 += 8;
LABEL_176:
          if ( *(_DWORD *)(*(_QWORD *)v58 + 72LL) == v94 )
            goto LABEL_94;
          goto LABEL_177;
        }
      }
    }
  }
LABEL_105:
  if ( (_QWORD)v162 == 1 )
  {
    sub_AEC00((_QWORD *)a1[2], a2, *v163);
  }
  else
  {
    if ( (_QWORD)v162 != 2 )
      goto LABEL_110;
    v61 = (__int64 **)v161;
    v62 = *(_QWORD *)(v161 + 8);
    if ( !v62 )
    {
      v62 = *(_QWORD *)(v161 + 32);
      v63 = 1;
      v61 = (__int64 **)(v161 + 24);
      v64 = 0;
      goto LABEL_109;
    }
    v63 = *(_QWORD *)(v161 + 32);
    if ( v63 )
      goto LABEL_110;
    v64 = 1;
LABEL_109:
    if ( v62 == 1 )
    {
      v95 = v163[v64];
      v96 = v163[v63];
      v97 = *(_DWORD *)(a1[2] + 72LL) + 1;
      if ( v95 == v97 )
      {
        v98 = 44;
      }
      else
      {
        if ( v97 != v96 )
          goto LABEL_110;
        v96 = v95;
        v98 = 43;
      }
      v157 = 0xFFFFFFFF00000007LL;
      v158 = v96;
      src = (void *)0xFFFFFFFF00000000LL;
      *(_QWORD *)&v171 = 0;
      sub_11A350((__int64)&src, *(_QWORD *)(a1[100] + 112LL), **v61, SDWORD1(v154), a2, 0);
      sub_1CF350((_DWORD)a1, v98, (unsigned int)&v154, (unsigned int)&src, (unsigned int)&v157, v99);
      sub_1166E0((__int64)&src);
      sub_1166E0((__int64)&v157);
    }
    else
    {
LABEL_110:
      v65 = j__qalloc_or_throw(48);
      *(_QWORD *)v65 = 0;
      v66 = v161;
      *(_OWORD *)(v65 + 8) = 0;
      *(_QWORD *)v65 = v66;
      v67 = v162;
      *(_QWORD *)(v65 + 24) = 0;
      *(_QWORD *)(v65 + 8) = v67;
      v68 = *((_QWORD *)&v162 + 1);
      *(_OWORD *)(v65 + 32) = 0;
      *(_QWORD *)(v65 + 16) = v68;
      v161 = 0;
      *(_QWORD *)(v65 + 24) = v163;
      v163 = nullptr;
      *(_QWORD *)(v65 + 32) = v164;
      v162 = 0;
      *(_QWORD *)(v65 + 40) = *((_QWORD *)&v164 + 1);
      src = (void *)-4294967284LL;
      *(_QWORD *)&v171 = v65;
      v164 = 0;
      sub_1CF350((_DWORD)a1, 53, (unsigned int)&v154, (unsigned int)&src, 0, v69);
      sub_1166E0((__int64)&src);
    }
  }
  v16 = 0;
  sub_1166E0((__int64)&v154);
  sub_1B23B0(v166);
LABEL_20:
  if ( v159 )
  {
    *(_QWORD *)&v160 = 0;
    qfree(v159);
  }
  if ( v163 )
  {
    *(_QWORD *)&v164 = 0;
    qfree(v163);
  }
  v17 = v161;
  if ( v161 )
  {
    v18 = v162;
    if ( (_QWORD)v162 )
    {
      v19 = 0;
      do
      {
        v20 = (__int64 *)(v17 + 24 * v19);
        v21 = *v20;
        if ( *v20 )
        {
          v20[1] = 0;
          qfree(v21);
          v17 = v161;
        }
        ++v19;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v162 = 0;
    qfree(v17);
  }
  return v16;
}
