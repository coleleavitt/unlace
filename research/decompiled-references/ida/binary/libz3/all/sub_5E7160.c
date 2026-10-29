__int64 __fastcall sub_5E7160(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **v3; // rbp
  char **exception; // rbp
  char **v5; // rbp
  char **v6; // r12
  unsigned int v8; // r13d
  __m128i v9; // xmm0
  unsigned __int64 v10; // rbp
  _QWORD *v11; // rax
  unsigned __int64 *v12; // rax
  unsigned __int64 *v13; // rbx
  __int64 v14; // r14
  __int64 v15; // r15
  int i; // edx
  unsigned int v17; // edx
  _QWORD *v18; // rdx
  __int64 v19; // r14
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rbp
  _QWORD *v22; // rax
  int v23; // eax
  unsigned __int64 *v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned int v27; // eax
  _QWORD *v28; // rax
  unsigned int v29; // r13d
  __int64 v30; // r15
  _QWORD *v31; // rax
  _DWORD *v32; // rbp
  _DWORD **v33; // r14
  __int64 v34; // rax
  _DWORD *v35; // rsi
  size_t v36; // rdx
  _QWORD *v37; // rax
  _DWORD *v38; // r14
  __int64 v39; // rax
  void *v40; // rcx
  __int64 v41; // r14
  _DWORD *v42; // rsi
  size_t v43; // rdx
  unsigned int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rdx
  _DWORD *v48; // rax
  _DWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rbp
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rsi
  __int64 v55; // rdi
  bool v56; // zf
  __int64 v57; // r13
  __int64 v58; // rsi
  __int64 v59; // rdi
  unsigned int v60; // r15d
  __int64 v61; // rax
  __int64 v62; // r13
  int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r14
  __int64 v67; // rax
  __int64 v68; // rdi
  int v69; // ecx
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // ecx
  int v73; // r8d
  int v74; // r9d
  unsigned int v75; // r15d
  size_t v76; // rsi
  unsigned int *v77; // rax
  __int64 v78; // rcx
  unsigned int v79; // r9d
  size_t v80; // rsi
  unsigned int *v81; // rax
  __int64 v82; // rax
  int v83; // edx
  unsigned __int64 v84; // rbp
  unsigned int v85; // eax
  __int64 v86; // rdx
  int v87; // eax
  unsigned __int64 *v88; // rdx
  unsigned int v89; // r14d
  size_t v90; // rsi
  unsigned int *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rsi
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // rsi
  __int64 v98; // rdi
  _QWORD *v99; // rbp
  void *v100; // rdi
  __int64 *v101; // rbp
  unsigned __int64 v102; // r12
  __int64 v103; // rsi
  unsigned __int64 v104; // rdi
  __int64 *v105; // rbp
  unsigned __int64 v106; // r12
  __int64 v107; // rsi
  unsigned __int64 v108; // rdi
  __int64 *v109; // rbp
  unsigned __int64 v110; // r12
  __int64 v111; // rsi
  __int64 v112; // rdi
  unsigned __int64 v113; // rsi
  unsigned __int64 v114; // rdi
  unsigned __int64 *v115; // rbp
  unsigned __int64 v116; // r12
  unsigned __int64 v117; // rsi
  __int64 *v118; // rbx
  unsigned __int64 v119; // rbp
  __int64 v120; // rsi
  unsigned int v122; // edx
  size_t v123; // rsi
  unsigned int *v124; // rax
  __int64 v125; // rsi
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  unsigned int v128; // [rsp+10h] [rbp-298h]
  bool v130; // [rsp+20h] [rbp-288h]
  __int64 v131; // [rsp+20h] [rbp-288h]
  void *v132; // [rsp+20h] [rbp-288h]
  void *v133; // [rsp+20h] [rbp-288h]
  unsigned int v134; // [rsp+28h] [rbp-280h]
  unsigned int v135; // [rsp+28h] [rbp-280h]
  unsigned int v136; // [rsp+28h] [rbp-280h]
  __int64 v137; // [rsp+30h] [rbp-278h]
  __int64 v138; // [rsp+30h] [rbp-278h]
  unsigned int v139; // [rsp+30h] [rbp-278h]
  unsigned int v140; // [rsp+38h] [rbp-270h]
  __int64 v141; // [rsp+38h] [rbp-270h]
  __int64 v142; // [rsp+38h] [rbp-270h]
  unsigned int ptra; // [rsp+48h] [rbp-260h]
  void *ptrb; // [rsp+48h] [rbp-260h]
  int ptr; // [rsp+48h] [rbp-260h]
  void *ptrc; // [rsp+48h] [rbp-260h]
  void *ptrd; // [rsp+48h] [rbp-260h]
  _DWORD **v148; // [rsp+50h] [rbp-258h]
  int v149; // [rsp+50h] [rbp-258h]
  bool v150; // [rsp+5Fh] [rbp-249h]
  unsigned __int64 v151; // [rsp+60h] [rbp-248h]
  unsigned __int64 v153; // [rsp+70h] [rbp-238h] BYREF
  _QWORD *v154; // [rsp+78h] [rbp-230h]
  unsigned __int64 v155; // [rsp+80h] [rbp-228h]
  unsigned __int64 v156; // [rsp+90h] [rbp-218h] BYREF
  unsigned __int64 v157; // [rsp+98h] [rbp-210h]
  __int64 v158; // [rsp+A0h] [rbp-208h] BYREF
  __int64 v159; // [rsp+A8h] [rbp-200h]
  __int64 v160; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v161; // [rsp+B8h] [rbp-1F0h]
  __int64 v162; // [rsp+C0h] [rbp-1E8h] BYREF
  __int64 v163; // [rsp+C8h] [rbp-1E0h]
  __int64 v164; // [rsp+D0h] [rbp-1D8h] BYREF
  __int64 v165; // [rsp+D8h] [rbp-1D0h]
  __m128i v166; // [rsp+E0h] [rbp-1C8h] BYREF
  __int64 *v167; // [rsp+F0h] [rbp-1B8h]
  unsigned __int64 v168; // [rsp+F8h] [rbp-1B0h]
  __int64 *v169; // [rsp+100h] [rbp-1A8h]
  __int64 v170; // [rsp+108h] [rbp-1A0h]
  __int64 v171; // [rsp+110h] [rbp-198h]
  __int64 v172; // [rsp+118h] [rbp-190h]
  unsigned __int64 v173; // [rsp+120h] [rbp-188h]
  __int64 *v174; // [rsp+128h] [rbp-180h]
  void *s; // [rsp+130h] [rbp-178h]
  __int64 v176; // [rsp+138h] [rbp-170h]
  void *v177; // [rsp+140h] [rbp-168h]
  __int64 v178; // [rsp+148h] [rbp-160h]
  int v179; // [rsp+150h] [rbp-158h]
  __int64 v180; // [rsp+158h] [rbp-150h]
  _QWORD v181[2]; // [rsp+160h] [rbp-148h] BYREF
  __int64 v182[3]; // [rsp+170h] [rbp-138h] BYREF
  __int64 v183; // [rsp+188h] [rbp-120h]

  v8 = *(_DWORD *)(a2 + 68);
  v134 = *(_DWORD *)(a2 + 56);
  v151 = a1[4];
  v9 = _mm_unpacklo_epi64((__m128i)v151, (__m128i)v151);
  v153 = v151;
  v155 = v151;
  v157 = v151;
  v168 = v151;
  v154 = nullptr;
  v156 = 0;
  v167 = nullptr;
  v169 = nullptr;
  v170 = 0;
  v171 = 0;
  v166 = v9;
  v172 = 0;
  v173 = v151;
  v174 = nullptr;
  s = v181;
  v176 = 1;
  v177 = nullptr;
  v178 = 0;
  v179 = 1065353216;
  v180 = 0;
  v181[0] = 0;
  if ( v8 )
  {
    v10 = *(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a2 + 80) > 7u )
      ++*(_DWORD *)(v10 + 8);
    v11 = (_QWORD *)sub_186B270(0x18u);
    *v11 = 2;
    v12 = v11 + 1;
    v13 = v12;
    v14 = a2 + 8LL * v8;
    v15 = a2;
    for ( i = 1; ; i = v83 + 1 )
    {
      v15 += 8;
      *v12 = v10;
      *((_DWORD *)v13 - 1) = i;
      if ( v14 == v15 )
        break;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v15 + 80) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v15 + 80) > 7u )
          ++*(_DWORD *)(v10 + 8);
        v17 = *((_DWORD *)v13 - 1);
        if ( v17 == *((_DWORD *)v13 - 2) )
          break;
        v15 += 8;
        v13[v17] = v10;
        *((_DWORD *)v13 - 1) = v17 + 1;
        if ( v14 == v15 )
          goto LABEL_10;
      }
      v79 = (3 * v17 + 1) >> 1;
      v80 = 8 * v79 + 8;
      if ( 8 * v17 + 8 >= (unsigned int)v80 || v17 >= v79 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v182, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v182);
        sub_233E40((__int64)v182);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v128 = (3 * v17 + 1) >> 1;
      v81 = (unsigned int *)sub_186B300(v13 - 1, v80);
      v13 = (unsigned __int64 *)(v81 + 2);
      *v81 = v128;
      v82 = v81[1];
      v83 = v82;
      v12 = &v13[v82];
    }
  }
  else
  {
    v13 = nullptr;
  }
LABEL_10:
  if ( v8 < v134 )
  {
    v18 = v154;
    v19 = a2 + 8LL * v8;
    v20 = a2 + 8 * (v8 + (unsigned __int64)(v134 - 1 - v8)) + 8;
    v21 = *(_QWORD *)(v19 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v19 + 80) > 7u )
      ++*(_DWORD *)(v21 + 8);
    if ( v18 )
      goto LABEL_18;
    v22 = (_QWORD *)sub_186B270(0x18u);
    v18 = v22 + 1;
    *v22 = 2;
    v23 = 1;
    v154 = v18;
    v24 = v18;
    while ( 1 )
    {
      v19 += 8;
      *v24 = v21;
      *((_DWORD *)v18 - 1) = v23;
      if ( v19 == v20 )
        break;
      while ( 1 )
      {
        v25 = *(_QWORD *)(v19 + 80);
        v21 = 0;
        if ( v25 > 7 )
        {
          v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
          ++*(_DWORD *)(v26 + 8);
          v21 = v26;
        }
LABEL_18:
        v27 = *((_DWORD *)v18 - 1);
        if ( v27 == *((_DWORD *)v18 - 2) )
          break;
        v19 += 8;
        v18[v27] = v21;
        *((_DWORD *)v18 - 1) = v27 + 1;
        if ( v19 == v20 )
          goto LABEL_20;
      }
      v75 = (3 * v27 + 1) >> 1;
      v76 = 8 * v75 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v76 || v27 >= v75 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v182, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v182);
        sub_233E40((__int64)v182);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v77 = (unsigned int *)sub_186B300(v18 - 1, v76);
      v78 = v77[1];
      v18 = v77 + 2;
      *v77 = v75;
      v154 = v18;
      LODWORD(v77) = v78;
      v24 = &v18[v78];
      v23 = (_DWORD)v77 + 1;
    }
  }
LABEL_20:
  sub_15EE300(&v153);
  v28 = v154;
  if ( !v154 )
    goto LABEL_179;
  v150 = 0;
  v29 = 0;
  while ( v29 < *((_DWORD *)v28 - 1) )
  {
    v30 = v28[v29];
    v130 = sub_5E4500((__int64)a1, v30, &v162, &v164);
    if ( !v130 )
    {
      sub_14B9BF0(a1 + 9, v30, &v156);
      v84 = v156;
      if ( v156 )
        ++*(_DWORD *)(v156 + 8);
      if ( v13 )
      {
        v85 = *((_DWORD *)v13 - 1);
        if ( v85 == *((_DWORD *)v13 - 2) )
        {
          v89 = (3 * v85 + 1) >> 1;
          v90 = 8 * v89 + 8;
          if ( 8 * v85 + 8 >= (unsigned int)v90 || v85 >= v89 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v182, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v182);
            sub_233E40((__int64)v182);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v91 = (unsigned int *)sub_186B300(v13 - 1, v90);
          v92 = v91[1];
          v13 = (unsigned __int64 *)(v91 + 2);
          *v91 = v89;
          LODWORD(v91) = v92;
          v88 = &v13[v92];
          v87 = (_DWORD)v91 + 1;
        }
        else
        {
          v86 = v85;
          v87 = v85 + 1;
          v88 = &v13[v86];
        }
      }
      else
      {
        v126 = (_QWORD *)sub_186B270(0x18u);
        v13 = v126 + 1;
        *v126 = 2;
        v87 = 1;
        v88 = v13;
      }
      *v88 = v84;
      *((_DWORD *)v13 - 1) = v87;
      goto LABEL_49;
    }
    v137 = v162;
    v31 = (_QWORD *)sub_62B3A0(a1[7], v162);
    v32 = (_DWORD *)*v31;
    v33 = (_DWORD **)v31;
    if ( *v31 )
    {
      v135 = *(v32 - 2);
      v140 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(v32 - 1)));
      v34 = sub_186B270(4LL * v135 + 8);
      v32 = (_DWORD *)(v34 + 8);
      v35 = *v33;
      v9.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v135), _mm_cvtsi32_si128(v140)).m128i_u64[0];
      *(_QWORD *)v34 = v9.m128i_i64[0];
      if ( v35 )
      {
        v36 = 4LL * (unsigned int)*(v35 - 1);
        if ( v36 <= 4 )
        {
          if ( v36 == 4 )
            *(_DWORD *)(v34 + 8) = *v35;
        }
        else
        {
          memmove((void *)(v34 + 8), v35, v36);
        }
      }
    }
    v141 = v164;
    v37 = (_QWORD *)sub_62B3A0(a1[7], v164);
    v38 = (_DWORD *)*v37;
    if ( *v37 )
    {
      v148 = (_DWORD **)v37;
      v136 = *(v38 - 1);
      ptra = *(v38 - 2);
      v39 = sub_186B270(4LL * ptra + 8);
      v40 = (void *)v39;
      v41 = v39 + 8;
      v42 = *v148;
      v9.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(ptra), _mm_cvtsi32_si128(v136)).m128i_u64[0];
      *(_QWORD *)v39 = v9.m128i_i64[0];
      if ( v42 )
      {
        v43 = 4LL * (unsigned int)*(v42 - 1);
        if ( v43 <= 4 )
        {
          if ( v43 == 4 )
            *(_DWORD *)(v39 + 8) = *v42;
        }
        else
        {
          ptrb = (void *)v39;
          memmove((void *)(v39 + 8), v42, v43);
          v40 = ptrb;
        }
      }
      if ( !v32 )
      {
        ptrc = v40;
        sub_14EA0D0(&v166, v137, v141);
        sub_186B220(ptrc);
LABEL_181:
        v150 = v130;
        goto LABEL_49;
      }
      v44 = *(v32 - 1);
      if ( v136 < v44 )
      {
        v44 = v136;
        *(v32 - 1) = v136;
      }
      if ( !v44 )
        goto LABEL_190;
      v45 = 0;
      do
      {
        v46 = v45++;
        v32[v46] &= *(_DWORD *)(v41 + 4 * v46);
        v47 = (unsigned int)*(v32 - 1);
      }
      while ( v45 < (unsigned int)v47 );
      if ( (_DWORD)v47 )
      {
        v48 = v32;
        v49 = &v32[v47];
        while ( !*v48 )
        {
          if ( v49 == ++v48 )
            goto LABEL_190;
        }
        if ( v30 )
          ++*(_DWORD *)(v30 + 8);
        if ( v13 )
        {
          v50 = *((_DWORD *)v13 - 1);
          if ( v50 == *((_DWORD *)v13 - 2) )
          {
            v122 = (3 * v50 + 1) >> 1;
            v123 = 8 * v122 + 8;
            if ( 8 * v50 + 8 >= (unsigned int)v123 || v50 >= v122 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v182, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v182);
              sub_233E40((__int64)v182);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v139 = (3 * v50 + 1) >> 1;
            v132 = v40;
            v124 = (unsigned int *)sub_186B300(v13 - 1, v123);
            v125 = v124[1];
            v13 = (unsigned __int64 *)(v124 + 2);
            v40 = v132;
            *v124 = v139;
            *(_QWORD *)&v124[2 * v125 + 2] = v30;
            v124[1] = v125 + 1;
          }
          else
          {
            v13[v50] = v30;
            *((_DWORD *)v13 - 1) = v50 + 1;
          }
        }
        else
        {
          v133 = v40;
          v127 = (_QWORD *)sub_186B270(0x18u);
          v127[1] = v30;
          v13 = v127 + 1;
          *v127 = 0x100000002LL;
          v40 = v133;
        }
      }
      else
      {
LABEL_190:
        ptrd = v40;
        sub_14EA0D0(&v166, v137, v141);
        v40 = ptrd;
        v150 = v130;
      }
      sub_186B220(v40);
    }
    else
    {
      if ( !v32 )
      {
        sub_14EA0D0(&v166, v137, v141);
        goto LABEL_181;
      }
      if ( *(v32 - 1) )
        *(v32 - 1) = 0;
      sub_14EA0D0(&v166, v137, v141);
      v150 = v130;
    }
    sub_186B220(v32 - 2);
LABEL_49:
    v28 = v154;
    ++v29;
    if ( !v154 )
      break;
  }
  if ( !v150 )
  {
LABEL_179:
    sub_63DAD0(a3, a2, *(double *)v9.m128i_i64);
    v60 = 0;
    goto LABEL_114;
  }
  v51 = a1[4];
  v158 = 0;
  v160 = 0;
  v159 = v51;
  v161 = v51;
  v162 = 0;
  v163 = v51;
  v52 = sub_15E1AF0(v51);
  v53 = v52;
  if ( v52 )
    ++*(_DWORD *)(v52 + 8);
  v54 = v160;
  if ( v160 )
  {
    v55 = v161;
    v56 = (*(_DWORD *)(v160 + 8))-- == 1;
    if ( v56 )
      sub_15D7BC0(v55, v54);
  }
  v160 = v53;
  v57 = *(_QWORD *)(a2 + 40);
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  v58 = v162;
  if ( v162 )
  {
    v59 = v163;
    v56 = (*(_DWORD *)(v162 + 8))-- == 1;
    if ( v56 )
    {
      sub_15D7BC0(v59, v58);
      v53 = v160;
    }
  }
  v162 = v57;
  sub_14EA2A0(&v166, v53, &v160);
  sub_14B9B80(a1 + 9, &v160);
  sub_14EA2A0(&v166, v162, &v162);
  sub_14B9B80(a1 + 9, &v162);
  v60 = sub_5E4F90((__int64)a1, a2, &v160, &v162);
  if ( (_BYTE)v60 )
  {
    v61 = sub_15E1B70(a1[4]);
    v62 = v61;
    if ( v61 )
      ++*(_DWORD *)(v61 + 8);
    v131 = a1[4];
    sub_63D370(v182, a1[3]);
    sub_631ED0(a1[7], v62, 0, (unsigned int)v182, a2 + 72, v63);
    v64 = a1[7];
    v164 = 0;
    v165 = v64;
    v65 = 0x7FFFFFFF8LL;
    if ( v183 )
      v65 = 8LL * (unsigned int)(*(_DWORD *)(v183 - 4) - 1);
    if ( (unsigned __int8)sub_5CB220(a1 + 11, *(_QWORD *)(v183 + v65), &v164) )
    {
      v66 = *(_QWORD *)(a2 + 48);
      if ( v66 )
      {
        v67 = a1[4];
        v68 = a1[7];
        v69 = *(_DWORD *)(v67 + 712);
        v142 = v67;
        *(_DWORD *)(v67 + 712) = 1;
        ptr = v69;
        sub_62E310(v68, a2, &v158);
        v70 = sub_15DE370(a1[4]);
        v138 = v70;
        if ( v70 )
          ++*(_DWORD *)(v70 + 8);
        v71 = sub_15DE0E0(a1[4], *(_QWORD *)(a2 + 48), v70);
        v66 = v71;
        if ( v71 )
          ++*(_DWORD *)(v71 + 8);
        if ( v138 )
        {
          v149 = *(_DWORD *)(v138 + 8);
          *(_DWORD *)(v138 + 8) = v149 - 1;
          if ( v149 == 1 )
            sub_15D7BC0(v131, v138);
        }
        sub_62A430(v164, a1[4], v66);
        *(_DWORD *)(v142 + 712) = ptr;
      }
      sub_63DAD0(a3, v164, *(double *)v9.m128i_i64);
      sub_62F7F0(a1[7], a2, v164, v72, v73, v74);
      if ( v164 )
        sub_62A410(v165, v164);
      sub_63D960(v182);
      if ( v66 )
      {
        v56 = (*(_DWORD *)(v66 + 8))-- == 1;
        if ( v56 )
          sub_15D7BC0(v131, v66);
      }
    }
    else
    {
      if ( v164 )
        sub_62A410(v165, v164);
      sub_63D960(v182);
    }
    v93 = v162;
    if ( v162 )
    {
LABEL_104:
      v94 = v163;
      v56 = (*(_DWORD *)(v93 + 8))-- == 1;
      if ( v56 )
        sub_15D7BC0(v94, v93);
    }
    v95 = v160;
    if ( !v160 || (v96 = v161, v56 = *(_DWORD *)(v160 + 8) == 1, --*(_DWORD *)(v160 + 8), !v56) )
    {
LABEL_108:
      if ( v62 )
      {
        v56 = (*(_DWORD *)(v62 + 8))-- == 1;
        if ( v56 )
          sub_15D7BC0(v51, v62);
      }
      goto LABEL_111;
    }
LABEL_178:
    sub_15D7BC0(v96, v95);
    goto LABEL_108;
  }
  sub_63DAD0(a3, a2, *(double *)v9.m128i_i64);
  v93 = v162;
  v62 = 0;
  if ( v162 )
    goto LABEL_104;
  v95 = v160;
  if ( v160 )
  {
    v96 = v161;
    v56 = (*(_DWORD *)(v160 + 8))-- == 1;
    if ( v56 )
      goto LABEL_178;
  }
LABEL_111:
  v97 = v158;
  if ( v158 )
  {
    v98 = v159;
    v56 = (*(_DWORD *)(v158 + 8))-- == 1;
    if ( v56 )
      sub_15D7BC0(v98, v97);
  }
LABEL_114:
  v99 = v177;
  if ( v177 )
  {
    do
    {
      v100 = v99;
      v99 = (_QWORD *)*v99;
      operator delete(v100, 0x18u);
    }
    while ( v99 );
  }
  memset(s, 0, 8 * v176);
  v178 = 0;
  v177 = nullptr;
  if ( s != v181 )
    operator delete(s, 8 * v176);
  v101 = v174;
  if ( v174 )
  {
    v102 = (unsigned __int64)&v174[*((unsigned int *)v174 - 1)];
    if ( (unsigned __int64)v174 >= v102 )
      goto LABEL_126;
    do
    {
      while ( 1 )
      {
        v103 = *v101;
        if ( *v101 )
        {
          v104 = v173;
          v56 = (*(_DWORD *)(v103 + 8))-- == 1;
          if ( v56 )
            break;
        }
        if ( (unsigned __int64)++v101 >= v102 )
          goto LABEL_125;
      }
      sub_15D7BC0(v104, v103);
      ++v101;
    }
    while ( (unsigned __int64)v101 < v102 );
LABEL_125:
    v101 = v174;
    if ( v174 )
LABEL_126:
      sub_186B220(v101 - 1);
  }
  if ( v172 )
    sub_186B220((void *)(v172 - 8));
  if ( v171 )
    sub_186B220((void *)(v171 - 8));
  if ( v170 )
    sub_186B220((void *)(v170 - 8));
  v105 = v169;
  if ( v169 )
  {
    v106 = (unsigned __int64)&v169[*((unsigned int *)v169 - 1)];
    if ( (unsigned __int64)v169 >= v106 )
      goto LABEL_141;
    do
    {
      while ( 1 )
      {
        v107 = *v105;
        if ( *v105 )
        {
          v108 = v168;
          v56 = (*(_DWORD *)(v107 + 8))-- == 1;
          if ( v56 )
            break;
        }
        if ( (unsigned __int64)++v105 >= v106 )
          goto LABEL_140;
      }
      sub_15D7BC0(v108, v107);
      ++v105;
    }
    while ( (unsigned __int64)v105 < v106 );
LABEL_140:
    v105 = v169;
    if ( v169 )
LABEL_141:
      sub_186B220(v105 - 1);
  }
  v109 = v167;
  if ( v167 )
  {
    v110 = (unsigned __int64)&v167[*((unsigned int *)v167 - 1)];
    if ( (unsigned __int64)v167 >= v110 )
      goto LABEL_150;
    do
    {
      while ( 1 )
      {
        v111 = *v109;
        if ( *v109 )
        {
          v112 = v166.m128i_i64[1];
          v56 = (*(_DWORD *)(v111 + 8))-- == 1;
          if ( v56 )
            break;
        }
        if ( (unsigned __int64)++v109 >= v110 )
          goto LABEL_149;
      }
      sub_15D7BC0(v112, v111);
      ++v109;
    }
    while ( (unsigned __int64)v109 < v110 );
LABEL_149:
    v109 = v167;
    if ( v167 )
LABEL_150:
      sub_186B220(v109 - 1);
  }
  v113 = v156;
  if ( v156 )
  {
    v114 = v157;
    v56 = (*(_DWORD *)(v156 + 8))-- == 1;
    if ( v56 )
      sub_15D7BC0(v114, v113);
  }
  if ( v13 )
  {
    v115 = v13;
    v116 = (unsigned __int64)&v13[*((unsigned int *)v13 - 1)];
    if ( (unsigned __int64)v13 < v116 )
    {
      do
      {
        while ( 1 )
        {
          v117 = *v115;
          if ( *v115 )
          {
            v56 = (*(_DWORD *)(v117 + 8))-- == 1;
            if ( v56 )
              break;
          }
          if ( (unsigned __int64)++v115 >= v116 )
            goto LABEL_161;
        }
        ++v115;
        sub_15D7BC0(v151, v117);
      }
      while ( (unsigned __int64)v115 < v116 );
    }
LABEL_161:
    sub_186B220(v13 - 1);
  }
  v118 = v154;
  if ( v154 )
  {
    v119 = (unsigned __int64)&v154[*((unsigned int *)v154 - 1)];
    if ( (unsigned __int64)v154 >= v119 )
      goto LABEL_170;
    do
    {
      while ( 1 )
      {
        v120 = *v118;
        if ( *v118 )
        {
          v56 = (*(_DWORD *)(v120 + 8))-- == 1;
          if ( v56 )
            break;
        }
        if ( (unsigned __int64)++v118 >= v119 )
          goto LABEL_169;
      }
      sub_15D7BC0(v153, v120);
      ++v118;
    }
    while ( (unsigned __int64)v118 < v119 );
LABEL_169:
    v118 = v154;
    if ( v154 )
LABEL_170:
      sub_186B220(v118 - 1);
  }
  return v60;
}

