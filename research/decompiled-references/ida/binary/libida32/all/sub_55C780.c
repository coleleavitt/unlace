__int64 __fastcall sub_55C780(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 a4, int a5, char a6, char a7)
{
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // rdi
  _BOOL4 v18; // r13d
  unsigned int v19; // eax
  __int64 v20; // r13
  unsigned __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  __int64 v25; // rsi
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rsi
  size_t v29; // r14
  __int64 v30; // rax
  size_t v31; // r8
  __int64 v32; // rsi
  size_t v33; // rdx
  const void *v34; // rsi
  unsigned __int64 v35; // r13
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rsi
  unsigned __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // r13
  __int64 v45; // r14
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // r13
  __int64 v49; // r14
  __int64 v50; // rsi
  __int64 v51; // r13
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rsi
  size_t v55; // r13
  __int64 v56; // rax
  size_t v57; // r14
  __int64 v58; // rsi
  unsigned __int64 v59; // rdx
  __int64 v60; // r14
  __int64 v61; // rbx
  __int64 v62; // rsi
  __int64 v63; // r14
  __int64 v64; // rbx
  __int64 v65; // rsi
  char *v66; // rdi
  __int64 v67; // r14
  __int64 v68; // r13
  char *v69; // rbx
  void *v70; // rdi
  void *v71; // rdi
  __int64 v73; // r14
  char v74; // r9
  unsigned __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rsi
  __int64 v78; // r14
  unsigned __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rsi
  __int64 v82; // r14
  unsigned __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rsi
  __int64 v86; // r14
  unsigned __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // rsi
  __int64 v90; // r14
  unsigned __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // rsi
  unsigned __int64 v94; // rax
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rbx
  char v103; // r14
  unsigned __int64 v104; // r12
  __int64 v105; // r13
  __int64 v106; // rsi
  __int64 v107; // rbx
  unsigned __int64 v108; // r12
  __int64 v109; // r13
  __int64 v110; // rsi
  __int64 v111; // rbx
  unsigned __int64 v112; // r12
  __int64 v113; // r13
  __int64 v114; // rsi
  __int64 v115; // rbx
  unsigned __int64 v116; // rax
  __int64 v117; // r12
  unsigned __int64 v118; // r14
  __int64 v119; // rsi
  __int64 v120; // rbx
  unsigned __int64 v121; // rax
  __int64 v122; // r12
  unsigned __int64 v123; // r14
  __int64 v124; // rsi
  char v125; // r14
  unsigned __int64 v126; // r13
  __int64 v127; // rsi
  unsigned __int64 v128; // r13
  __int64 v129; // rax
  __int64 v130; // rsi
  unsigned __int64 v131; // r13
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int64 v134; // r13
  __int64 v135; // rax
  __int64 v136; // r14
  __int64 v137; // rsi
  unsigned __int64 v138; // r13
  __int64 v139; // rax
  __int64 v140; // r14
  __int64 v141; // rsi
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // [rsp+8h] [rbp-4E8h]
  __int64 v165; // [rsp+8h] [rbp-4E8h]
  __int64 v166; // [rsp+8h] [rbp-4E8h]
  char v167; // [rsp+10h] [rbp-4E0h]
  char v168; // [rsp+10h] [rbp-4E0h]
  __int64 v169; // [rsp+10h] [rbp-4E0h]
  char v170; // [rsp+10h] [rbp-4E0h]
  __int64 v171; // [rsp+10h] [rbp-4E0h]
  int v172; // [rsp+18h] [rbp-4D8h]
  unsigned __int64 v173; // [rsp+18h] [rbp-4D8h]
  unsigned __int64 v174; // [rsp+18h] [rbp-4D8h]
  unsigned __int64 v175; // [rsp+18h] [rbp-4D8h]
  unsigned __int64 v176; // [rsp+18h] [rbp-4D8h]
  unsigned __int64 v177; // [rsp+18h] [rbp-4D8h]
  size_t v178; // [rsp+18h] [rbp-4D8h]
  __int64 tinfo_property; // [rsp+20h] [rbp-4D0h]
  unsigned __int64 v181; // [rsp+30h] [rbp-4C0h]
  size_t v182; // [rsp+30h] [rbp-4C0h]
  __int64 v184; // [rsp+38h] [rbp-4B8h]
  __int64 v185; // [rsp+38h] [rbp-4B8h]
  __int64 v186; // [rsp+38h] [rbp-4B8h]
  __int64 v187; // [rsp+38h] [rbp-4B8h]
  __int64 v188; // [rsp+38h] [rbp-4B8h]
  __int64 v189; // [rsp+38h] [rbp-4B8h]
  __int64 v190; // [rsp+38h] [rbp-4B8h]
  __int64 v191; // [rsp+38h] [rbp-4B8h]
  char v192; // [rsp+46h] [rbp-4AAh] BYREF
  char v193; // [rsp+47h] [rbp-4A9h] BYREF
  __int64 v194; // [rsp+48h] [rbp-4A8h] BYREF
  void *v195; // [rsp+50h] [rbp-4A0h] BYREF
  __int128 v196; // [rsp+58h] [rbp-498h]
  void *ptr; // [rsp+68h] [rbp-488h]
  __int128 v198; // [rsp+70h] [rbp-480h]
  int v199; // [rsp+80h] [rbp-470h]
  char v200; // [rsp+84h] [rbp-46Ch]
  __int128 v201; // [rsp+90h] [rbp-460h] BYREF
  __m128i v202; // [rsp+A0h] [rbp-450h]
  char s[1032]; // [rsp+B0h] [rbp-440h] BYREF
  unsigned __int64 v204; // [rsp+4B8h] [rbp-38h]

  v204 = __readfsqword(0x28u);
  if ( (get_tinfo_property(*a3, 2) & 0x3F) != 0x2D || a5 > 8 )
    return 4294967294LL;
  if ( (unsigned __int64)(8 * a5) <= 0x3F )
    a4 &= ~(-1LL << (8 * (unsigned __int8)a5));
  tinfo_property = get_tinfo_property(*a3, 291);
  if ( tinfo_property )
  {
    if ( (unsigned __int8)sub_615160(*a1, 2, 2) || *(_QWORD *)(a1[4] + 280LL) )
    {
      if ( a7 )
      {
        v73 = a2[1];
        v74 = *(_BYTE *)(a1[4] + 256LL);
        if ( v73 )
        {
          v75 = v73 + 1;
          v76 = a2[1];
          --v73;
        }
        else
        {
          v76 = 1;
          v75 = 2;
        }
        v77 = *a2;
        if ( a2[2] < v75 )
        {
          v165 = v76;
          v168 = *(_BYTE *)(a1[4] + 256LL);
          v174 = v75;
          v154 = qvector_reserve(a2, v77, v75, 1);
          v76 = v165;
          v74 = v168;
          *a2 = v154;
          v75 = v174;
          v77 = v154;
        }
        a2[1] = v75;
        *(_BYTE *)(v77 + v73) = 1;
        *(_BYTE *)(*a2 + v76) = 0;
        v78 = a2[1];
        if ( v78 )
        {
          v79 = v78 + 1;
          v80 = a2[1];
          --v78;
        }
        else
        {
          v80 = 1;
          v79 = 2;
        }
        v81 = *a2;
        if ( a2[2] < v79 )
        {
          v164 = v80;
          v167 = v74;
          v173 = v79;
          v153 = qvector_reserve(a2, v81, v79, 1);
          v80 = v164;
          v74 = v167;
          *a2 = v153;
          v79 = v173;
          v81 = v153;
        }
        a2[1] = v79;
        *(_BYTE *)(v81 + v78) = 9;
        *(_BYTE *)(*a2 + v80) = 0;
        v82 = a2[1];
        if ( v82 )
        {
          v83 = v82 + 1;
          v84 = a2[1];
          --v82;
        }
        else
        {
          v84 = 1;
          v83 = 2;
        }
        v85 = *a2;
        if ( a2[2] < v83 )
        {
          v166 = v84;
          v170 = v74;
          v176 = v83;
          v156 = qvector_reserve(a2, v85, v83, 1);
          v84 = v166;
          v74 = v170;
          *a2 = v156;
          v83 = v176;
          v85 = v156;
        }
        a2[1] = v83;
        *(_BYTE *)(v85 + v82) = v74;
        *(_BYTE *)(*a2 + v84) = 0;
        v86 = a2[1];
        if ( v86 )
        {
          v87 = v86 + 1;
          v88 = a2[1];
          --v86;
        }
        else
        {
          v88 = 1;
          v87 = 2;
        }
        v89 = *a2;
        if ( a2[2] < v87 )
        {
          v169 = v88;
          v175 = v87;
          v155 = qvector_reserve(a2, v89, v87, 1);
          v88 = v169;
          v87 = v175;
          *a2 = v155;
          v89 = v155;
        }
        a2[1] = v87;
        *(_BYTE *)(v89 + v86) = 2;
        *(_BYTE *)(*a2 + v88) = 0;
        v90 = a2[1];
        if ( v90 )
        {
          v91 = v90 + 1;
          v92 = a2[1];
          --v90;
        }
        else
        {
          v92 = 1;
          v91 = 2;
        }
        v93 = *a2;
        if ( a2[2] < v91 )
        {
          v171 = v92;
          v177 = v91;
          v158 = qvector_reserve(a2, v93, v91, 1);
          v92 = v171;
          v91 = v177;
          *a2 = v158;
          v93 = v158;
        }
        a2[1] = v91;
        *(_BYTE *)(v93 + v90) = 9;
        *(_BYTE *)(*a2 + v92) = 0;
      }
      goto LABEL_6;
    }
    return 4294967294LL;
  }
LABEL_6:
  v12 = *a1;
  v194 = a4;
  v192 = 1;
  v13 = *(_QWORD *)(v12 + 1480);
  v193 = 18;
  v172 = v13;
  v201 = 0;
  v14 = (_QWORD *)operator new(0x28u);
  *v14 = a2;
  v15 = _mm_loadl_epi64((const __m128i *)&off_2B04848);
  v14[1] = &v194;
  v14[2] = &v192;
  v14[3] = &v193;
  v14[4] = a1;
  *(_QWORD *)&v201 = v14;
  v202 = _mm_unpacklo_epi64(v15, (__m128i)(unsigned __int64)sub_558BB0);
  sub_3FFBA0(v172, a3, a4, a5, a6, (__int64)&v201, 0);
  if ( v202.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64))v202.m128i_i64[0])(&v201, &v201, 3, v16);
  if ( !v194 && !v192 )
    goto LABEL_67;
  v17 = *a3;
  v195 = nullptr;
  ptr = nullptr;
  v199 = 0;
  v200 = 0x80;
  v196 = 0;
  v198 = 0;
  get_tinfo_details(v17, 45, &v195);
  v18 = (v199 & 0x800) != 0;
  v19 = get_tinfo_property(*a3, 292);
  sub_56F930(s, 1024, v194, (unsigned int)a5, v19, v18);
  if ( !v192 )
  {
    v20 = *(_QWORD *)(a1[4] + 280LL);
    v184 = a2[1];
    if ( v20 )
    {
      if ( *(_BYTE *)(v20 + 1) )
      {
        v21 = 2;
        if ( v184 )
          v21 = v184-- + 1;
        v22 = *a2;
        if ( a2[2] < v21 )
        {
          v148 = qvector_reserve(a2, v22, v21, 1);
          *a2 = v148;
          v22 = v148;
        }
        a2[1] = v21;
        *(_BYTE *)(v22 + v184) = 32;
        *(_BYTE *)(*a2 + v184 + 1) = 0;
        if ( *(_BYTE *)v20 )
        {
          v23 = a2[1];
          v24 = 2;
          v185 = v23;
          if ( v23 )
          {
            v24 = v23 + 1;
            v185 = v23 - 1;
          }
          v25 = *a2;
          if ( a2[2] < v24 )
          {
            v159 = qvector_reserve(a2, v25, v24, 1);
            *a2 = v159;
            v25 = v159;
          }
          a2[1] = v24;
          v26 = 2;
          *(_BYTE *)(v25 + v185) = 1;
          *(_BYTE *)(*a2 + v185 + 1) = 0;
          v27 = a2[1];
          v186 = v27;
          if ( v27 )
          {
            v26 = v27 + 1;
            v186 = v27 - 1;
          }
          v28 = *a2;
          if ( a2[2] < v26 )
          {
            v161 = qvector_reserve(a2, v28, v26, 1);
            *a2 = v161;
            v28 = v161;
          }
          a2[1] = v26;
          *(_BYTE *)(v28 + v186) = 32;
          *(_BYTE *)(*a2 + v186 + 1) = 0;
          v29 = strlen((const char *)v20);
          v30 = a2[1];
          v31 = v29;
          v187 = v30;
          if ( v30 )
          {
            v187 = v30 - 1;
            v31 = v29 + v30 - 1;
          }
          v32 = *a2;
          v33 = v31 + 1;
          if ( a2[2] < v31 + 1 )
          {
            v178 = v31;
            v182 = v31 + 1;
            v163 = qvector_reserve(a2, v32, v33, 1);
            *a2 = v163;
            v31 = v178;
            v32 = v163;
            v33 = v182;
          }
          a2[1] = v33;
          *(_BYTE *)(v32 + v31) = 0;
          v34 = (const void *)v20;
          v35 = 2;
          memmove((void *)(*a2 + v187), v34, v29);
          v36 = a2[1];
          v37 = v36;
          if ( v36 )
          {
            v35 = v36 + 1;
            v37 = v36 - 1;
          }
          v38 = *a2;
          if ( a2[2] < v35 )
          {
            v162 = qvector_reserve(a2, v38, v35, 1);
            *a2 = v162;
            v38 = v162;
          }
          a2[1] = v35;
          v39 = 2;
          *(_BYTE *)(v38 + v37) = 2;
          *(_BYTE *)(*a2 + v37 + 1) = 0;
          v40 = a2[1];
          v41 = v40;
          if ( v40 )
          {
            v39 = v40 + 1;
            v41 = v40 - 1;
          }
          v42 = *a2;
          if ( a2[2] < v39 )
          {
            v160 = qvector_reserve(a2, v42, v39, 1);
            *a2 = v160;
            v42 = v160;
          }
          a2[1] = v39;
          *(_BYTE *)(v42 + v41) = 32;
          *(_BYTE *)(*a2 + v41 + 1) = 0;
        }
        v43 = a2[1];
        v44 = 2;
        v45 = v43;
        if ( v43 )
        {
          v44 = v43 + 1;
          v45 = v43 - 1;
        }
        v46 = *a2;
        if ( a2[2] < v44 )
        {
          v142 = qvector_reserve(a2, v46, v44, 1);
          *a2 = v142;
          v46 = v142;
        }
        a2[1] = v44;
        *(_BYTE *)(v46 + v45) = 32;
        *(_BYTE *)(*a2 + v45 + 1) = 0;
        goto LABEL_44;
      }
      v125 = *(_BYTE *)v20;
    }
    else
    {
      v125 = 124;
    }
    v126 = 2;
    if ( v184 )
      v126 = v184-- + 1;
    v127 = *a2;
    if ( a2[2] < v126 )
    {
      v147 = qvector_reserve(a2, v127, v126, 1);
      *a2 = v147;
      v127 = v147;
    }
    a2[1] = v126;
    v128 = 2;
    *(_BYTE *)(v127 + v184) = 1;
    *(_BYTE *)(*a2 + v184 + 1) = 0;
    v129 = a2[1];
    v190 = v129;
    if ( v129 )
    {
      v128 = v129 + 1;
      v190 = v129 - 1;
    }
    v130 = *a2;
    if ( a2[2] < v128 )
    {
      v146 = qvector_reserve(a2, v130, v128, 1);
      *a2 = v146;
      v130 = v146;
    }
    a2[1] = v128;
    v131 = 2;
    *(_BYTE *)(v130 + v190) = 9;
    *(_BYTE *)(*a2 + v190 + 1) = 0;
    v132 = a2[1];
    v191 = v132;
    if ( v132 )
    {
      v131 = v132 + 1;
      v191 = v132 - 1;
    }
    v133 = *a2;
    if ( a2[2] < v131 )
    {
      v145 = qvector_reserve(a2, v133, v131, 1);
      *a2 = v145;
      v133 = v145;
    }
    a2[1] = v131;
    v134 = 2;
    *(_BYTE *)(v133 + v191) = v125;
    *(_BYTE *)(*a2 + v191 + 1) = 0;
    v135 = a2[1];
    v136 = v135;
    if ( v135 )
    {
      v134 = v135 + 1;
      v136 = v135 - 1;
    }
    v137 = *a2;
    if ( a2[2] < v134 )
    {
      v144 = qvector_reserve(a2, v137, v134, 1);
      *a2 = v144;
      v137 = v144;
    }
    a2[1] = v134;
    v138 = 2;
    *(_BYTE *)(v137 + v136) = 2;
    *(_BYTE *)(*a2 + v136 + 1) = 0;
    v139 = a2[1];
    v140 = v139;
    if ( v139 )
    {
      v138 = v139 + 1;
      v140 = v139 - 1;
    }
    v141 = *a2;
    if ( a2[2] < v138 )
    {
      v143 = qvector_reserve(a2, v141, v138, 1);
      *a2 = v143;
      v141 = v143;
    }
    a2[1] = v138;
    *(_BYTE *)(v141 + v140) = 9;
    *(_BYTE *)(*a2 + v140 + 1) = 0;
    if ( !s[0] )
      goto LABEL_56;
LABEL_45:
    v47 = a2[1];
    v48 = 2;
    v49 = v47;
    if ( v47 )
    {
      v48 = v47 + 1;
      v50 = *a2;
      v49 = v47 - 1;
      if ( a2[2] >= (unsigned __int64)(v47 + 1) )
        goto LABEL_47;
    }
    else
    {
      v50 = *a2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_47;
    }
    v101 = qvector_reserve(a2, v50, v48, 1);
    *a2 = v101;
    v50 = v101;
LABEL_47:
    a2[1] = v48;
    v51 = 2;
    *(_BYTE *)(v50 + v49) = 1;
    *(_BYTE *)(*a2 + v49 + 1) = 0;
    v52 = a2[1];
    v53 = v52;
    if ( v52 )
    {
      v51 = v52 + 1;
      v54 = *a2;
      v53 = v52 - 1;
      if ( a2[2] >= (unsigned __int64)(v52 + 1) )
        goto LABEL_49;
    }
    else
    {
      v54 = *a2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_49;
    }
    v100 = qvector_reserve(a2, v54, v51, 1);
    *a2 = v100;
    v54 = v100;
LABEL_49:
    a2[1] = v51;
    *(_BYTE *)(v54 + v53) = 18;
    *(_BYTE *)(*a2 + v53 + 1) = 0;
    v55 = strlen(s);
    v56 = a2[1];
    v57 = v55;
    v188 = v56;
    if ( v56 )
    {
      v98 = v56 - 1;
      v58 = *a2;
      v57 = v55 + v98;
      v188 = v98;
      v59 = v55 + v98 + 1;
      if ( a2[2] >= v59 )
        goto LABEL_51;
    }
    else
    {
      v58 = *a2;
      v59 = v55 + 1;
      if ( a2[2] >= v55 + 1 )
        goto LABEL_51;
    }
    v181 = v59;
    v99 = qvector_reserve(a2, v58, v59, 1);
    *a2 = v99;
    v59 = v181;
    v58 = v99;
LABEL_51:
    a2[1] = v59;
    *(_BYTE *)(v58 + v57) = 0;
    v60 = 2;
    memmove((void *)(*a2 + v188), s, v55);
    v61 = a2[1];
    if ( v61 )
    {
      v96 = v61 + 1;
      v62 = *a2;
      --v61;
      v60 = v96;
      if ( a2[2] >= v96 )
        goto LABEL_53;
    }
    else
    {
      v62 = *a2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_53;
    }
    v97 = qvector_reserve(a2, v62, v60, 1);
    *a2 = v97;
    v62 = v97;
LABEL_53:
    a2[1] = v60;
    v63 = 2;
    *(_BYTE *)(v62 + v61) = 2;
    *(_BYTE *)(*a2 + v61 + 1) = 0;
    v64 = a2[1];
    if ( v64 )
    {
      v94 = v64 + 1;
      v65 = *a2;
      --v64;
      v63 = v94;
      if ( a2[2] >= v94 )
        goto LABEL_55;
    }
    else
    {
      v65 = *a2;
      if ( (unsigned __int64)a2[2] >= 2 )
      {
LABEL_55:
        a2[1] = v63;
        *(_BYTE *)(v65 + v64) = 18;
        *(_BYTE *)(*a2 + v64 + 1) = 0;
        goto LABEL_56;
      }
    }
    v95 = qvector_reserve(a2, v65, v63, 1);
    *a2 = v95;
    v65 = v95;
    goto LABEL_55;
  }
LABEL_44:
  if ( s[0] )
    goto LABEL_45;
LABEL_56:
  if ( ptr )
  {
    *(_QWORD *)&v198 = 0;
    qfree(ptr);
  }
  v66 = (char *)v195;
  if ( v195 )
  {
    v67 = v196;
    if ( (_QWORD)v196 )
    {
      v68 = 0;
      v189 = 0;
      do
      {
        v69 = &v66[v68];
        v70 = *(void **)&v66[v68 + 24];
        if ( v70 )
        {
          *((_QWORD *)v69 + 4) = 0;
          qfree(v70);
        }
        v71 = *(void **)v69;
        if ( *(_QWORD *)v69 )
        {
          *((_QWORD *)v69 + 1) = 0;
          qfree(v71);
        }
        ++v189;
        v68 += 56;
        v66 = (char *)v195;
      }
      while ( v67 != v189 );
    }
    *(_QWORD *)&v196 = 0;
    qfree(v66);
  }
LABEL_67:
  if ( !tinfo_property )
    return (unsigned int)-(v193 == 18);
  if ( !a7 )
    return 0;
  v102 = a2[1];
  v103 = *(_BYTE *)(a1[4] + 257LL);
  if ( v102 )
  {
    v104 = v102 + 1;
    v105 = a2[1];
    --v102;
  }
  else
  {
    v105 = 1;
    v104 = 2;
  }
  v106 = *a2;
  if ( a2[2] < v104 )
  {
    v150 = qvector_reserve(a2, v106, v104, 1);
    *a2 = v150;
    v106 = v150;
  }
  a2[1] = v104;
  *(_BYTE *)(v106 + v102) = 1;
  *(_BYTE *)(*a2 + v105) = 0;
  v107 = a2[1];
  if ( v107 )
  {
    v108 = v107 + 1;
    v109 = a2[1];
    --v107;
  }
  else
  {
    v109 = 1;
    v108 = 2;
  }
  v110 = *a2;
  if ( a2[2] < v108 )
  {
    v149 = qvector_reserve(a2, v110, v108, 1);
    *a2 = v149;
    v110 = v149;
  }
  a2[1] = v108;
  *(_BYTE *)(v110 + v107) = 9;
  *(_BYTE *)(*a2 + v109) = 0;
  v111 = a2[1];
  if ( v111 )
  {
    v112 = v111 + 1;
    v113 = a2[1];
    --v111;
  }
  else
  {
    v113 = 1;
    v112 = 2;
  }
  v114 = *a2;
  if ( a2[2] < v112 )
  {
    v152 = qvector_reserve(a2, v114, v112, 1);
    *a2 = v152;
    v114 = v152;
  }
  a2[1] = v112;
  *(_BYTE *)(v114 + v111) = v103;
  *(_BYTE *)(*a2 + v113) = 0;
  v115 = a2[1];
  if ( v115 )
  {
    v116 = v115 + 1;
    v117 = a2[1];
    --v115;
    v118 = v116;
  }
  else
  {
    v117 = 1;
    v118 = 2;
  }
  v119 = *a2;
  if ( a2[2] < v118 )
  {
    v151 = qvector_reserve(a2, v119, v118, 1);
    *a2 = v151;
    v119 = v151;
  }
  a2[1] = v118;
  *(_BYTE *)(v119 + v115) = 2;
  *(_BYTE *)(*a2 + v117) = 0;
  v120 = a2[1];
  if ( v120 )
  {
    v121 = v120 + 1;
    v122 = a2[1];
    --v120;
    v123 = v121;
  }
  else
  {
    v122 = 1;
    v123 = 2;
  }
  v124 = *a2;
  if ( a2[2] < v123 )
  {
    v157 = qvector_reserve(a2, v124, v123, 1);
    *a2 = v157;
    v124 = v157;
  }
  a2[1] = v123;
  *(_BYTE *)(v124 + v120) = 9;
  *(_BYTE *)(*a2 + v122) = 0;
  return 0;
}

