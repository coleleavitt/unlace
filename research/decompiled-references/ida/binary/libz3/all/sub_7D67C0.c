__int64 __fastcall sub_7D67C0(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **exception; // rbp
  char **v5; // rbp
  char **v6; // rbp
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  _QWORD *v18; // rbp
  _QWORD *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 v23; // rbp
  int v24; // eax
  __int64 *v25; // r14
  __int64 *v26; // rax
  unsigned int v27; // r9d
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rdi
  __int64 *v35; // r14
  __int64 v36; // rsi
  unsigned int v37; // ebx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdi
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 *v47; // rcx
  unsigned int v48; // ebx
  unsigned int v49; // ecx
  __int64 v50; // rbx
  __int64 v51; // rdi
  __int64 v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rdx
  unsigned int v58; // r9d
  __int64 *v59; // rax
  int v60; // ecx
  unsigned int v61; // r10d
  __int64 v62; // r14
  __int64 v63; // r11
  __int64 v64; // rsi
  char v65; // al
  __int64 v66; // r11
  unsigned int v67; // r10d
  _QWORD *v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // r12
  __int64 *v72; // rcx
  __int64 v73; // rsi
  __int64 v74; // rsi
  __int64 v75; // rax
  unsigned int v76; // r9d
  __int64 v77; // rdx
  __int64 v78; // rdi
  __int64 *v79; // r12
  __int64 v80; // rsi
  __int64 v81; // rax
  unsigned int v82; // r9d
  __int64 v83; // r12
  _QWORD *v84; // rax
  _QWORD *v85; // rcx
  __int64 v86; // rsi
  __int64 v87; // rdi
  unsigned int v88; // edx
  __int64 *v89; // rdx
  unsigned int v90; // r9d
  __int64 v91; // rbx
  _QWORD *v92; // rax
  int v93; // edx
  unsigned int v94; // ecx
  size_t v95; // rsi
  unsigned int *v96; // rdx
  __int64 v97; // rdx
  int v98; // r9d
  unsigned int v99; // ecx
  unsigned int v100; // edx
  unsigned int *v101; // rdx
  _QWORD *v102; // rax
  __int64 *v103; // rbx
  unsigned __int64 v104; // rbp
  __int64 v105; // rsi
  __int64 v106; // rdi
  unsigned int v107; // ecx
  unsigned int v108; // ebp
  unsigned int v109; // edx
  unsigned int *v110; // rdx
  unsigned int v111; // [rsp+0h] [rbp-100h]
  __int64 v112; // [rsp+0h] [rbp-100h]
  __int64 v113; // [rsp+8h] [rbp-F8h]
  __int64 v114; // [rsp+10h] [rbp-F0h]
  int v115; // [rsp+10h] [rbp-F0h]
  int v116; // [rsp+10h] [rbp-F0h]
  __int64 v117; // [rsp+18h] [rbp-E8h]
  int v118; // [rsp+18h] [rbp-E8h]
  unsigned int v119; // [rsp+18h] [rbp-E8h]
  __int64 v120; // [rsp+18h] [rbp-E8h]
  int v121; // [rsp+18h] [rbp-E8h]
  int v122; // [rsp+18h] [rbp-E8h]
  int v123; // [rsp+18h] [rbp-E8h]
  int v124; // [rsp+18h] [rbp-E8h]
  __int64 *v125; // [rsp+18h] [rbp-E8h]
  unsigned int v126; // [rsp+20h] [rbp-E0h]
  __int64 v127; // [rsp+20h] [rbp-E0h]
  int v128; // [rsp+20h] [rbp-E0h]
  int v129; // [rsp+20h] [rbp-E0h]
  _QWORD *v130; // [rsp+20h] [rbp-E0h]
  int v131; // [rsp+20h] [rbp-E0h]
  unsigned int v132; // [rsp+20h] [rbp-E0h]
  unsigned int v133; // [rsp+20h] [rbp-E0h]
  unsigned int v134; // [rsp+20h] [rbp-E0h]
  unsigned int v135; // [rsp+20h] [rbp-E0h]
  unsigned int v136; // [rsp+20h] [rbp-E0h]
  unsigned int v137; // [rsp+28h] [rbp-D8h]
  unsigned int v138; // [rsp+28h] [rbp-D8h]
  unsigned int v139; // [rsp+28h] [rbp-D8h]
  _QWORD *v140; // [rsp+28h] [rbp-D8h]
  __int64 v141; // [rsp+30h] [rbp-D0h]
  unsigned int v142; // [rsp+30h] [rbp-D0h]
  __int64 v143; // [rsp+38h] [rbp-C8h]
  __int64 v144; // [rsp+48h] [rbp-B8h]
  unsigned int v145; // [rsp+50h] [rbp-B0h]
  unsigned int v146; // [rsp+54h] [rbp-ACh]
  __m128i v147; // [rsp+68h] [rbp-98h] BYREF
  __int64 v148; // [rsp+78h] [rbp-88h] BYREF
  __int64 v149; // [rsp+80h] [rbp-80h]
  __int64 v150; // [rsp+88h] [rbp-78h] BYREF
  __int64 v151; // [rsp+90h] [rbp-70h]
  __int64 v152; // [rsp+98h] [rbp-68h] BYREF
  __int64 v153; // [rsp+A0h] [rbp-60h]
  __m128i v154; // [rsp+A8h] [rbp-58h] BYREF

  v9 = _mm_loadl_epi64((const __m128i *)(a1 + 72));
  v147 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, v9);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v10 = *(_QWORD *)(a1 + 80);
  v148 = 0;
  v149 = v9.m128i_i64[0];
  sub_14B9B80(v10 + 2192, &v147);
  sub_148F880(a1 + 3160, v147.m128i_i64[0], &v147, &v148);
  v11 = *(_QWORD *)(a1 + 80);
  if ( *(_BYTE *)(v11 + 1046) )
  {
    sub_E66730(&v152, *(_QWORD *)(a1 + 72), *(_QWORD *)(v11 + 24) + 3904LL, 1);
    v154.m128i_i64[0] = 0;
    v154.m128i_i64[1] = v147.m128i_i64[1];
    sub_E67520((unsigned int)&v152, (unsigned int)&v147, (unsigned int)&v154, v12, v13, v14);
    v15 = v154.m128i_i64[0];
    if ( v154.m128i_i64[0] )
    {
      v16 = v154.m128i_i64[1];
      v17 = (*(_DWORD *)(v154.m128i_i64[0] + 8))-- == 1;
      if ( v17 )
        sub_15D7BC0(v16, v15);
    }
    sub_E66770(&v152);
  }
  v18 = *(_QWORD **)(a1 + 3152);
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = *(_QWORD *)(a1 + 3144);
          v17 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_15;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_15:
    v18 = *(_QWORD **)(a1 + 3152);
    if ( v18 )
LABEL_16:
      *((_DWORD *)v18 - 1) = 0;
  }
  v22 = v147.m128i_i64[0];
  if ( a2 == v147.m128i_i64[0] )
  {
    v23 = a2;
    if ( *(_WORD *)(a2 + 4) != 2 )
    {
LABEL_25:
      sub_1872CE0("");
      sub_1873130(114, 274);
    }
    v24 = *(_DWORD *)(a2 + 16);
    if ( !v24 )
    {
LABEL_73:
      sub_15EEF60(*(_QWORD *)(v23 + 24));
      goto LABEL_26;
    }
  }
  else
  {
    sub_14B9B80(*(_QWORD *)(a1 + 80) + 2192LL, &v147);
    v23 = v147.m128i_i64[0];
    if ( *(_WORD *)(v147.m128i_i64[0] + 4) != 2 )
    {
      v43 = *(_QWORD **)(a1 + 3152);
      ++*(_DWORD *)(v147.m128i_i64[0] + 8);
      if ( v43 )
      {
        v44 = *((_DWORD *)v43 - 1);
        if ( v44 == *((_DWORD *)v43 - 2) )
        {
          v48 = (3 * v44 + 1) >> 1;
          v49 = 8 * v48 + 8;
          if ( 8 * v44 + 8 >= v49 || v44 >= v48 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v154.m128i_i64, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v154);
            sub_233E40((__int64)&v154);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          goto LABEL_76;
        }
LABEL_56:
        v45 = v44;
        v46 = v44 + 1;
        v47 = &v43[v45];
LABEL_57:
        *v47 = v23;
        *((_DWORD *)v43 - 1) = v46;
        goto LABEL_42;
      }
LABEL_99:
      v68 = (_QWORD *)sub_186B270(0x18u);
      *v68 = 2;
      v46 = 1;
      v43 = v68 + 1;
      *(_QWORD *)(a1 + 3152) = v43;
      v47 = v43;
      goto LABEL_57;
    }
    v24 = *(_DWORD *)(v147.m128i_i64[0] + 16);
    if ( *(_WORD *)(a2 + 4) == 2 && !*(_DWORD *)(a2 + 16) )
    {
      if ( !v24 )
      {
        if ( a2 == v147.m128i_i64[0] )
          goto LABEL_53;
        goto LABEL_73;
      }
LABEL_58:
      v43 = *(_QWORD **)(a1 + 3152);
      ++*(_DWORD *)(v147.m128i_i64[0] + 8);
      if ( v43 )
      {
        v44 = *((_DWORD *)v43 - 1);
        if ( v44 == *((_DWORD *)v43 - 2) )
        {
          v48 = (3 * v44 + 1) >> 1;
          v49 = 8 * v48 + 8;
          if ( 8 * v44 + 8 >= v49 || v44 >= v48 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v154.m128i_i64, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, &v154);
            sub_233E40((__int64)&v154);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_76:
          v53 = (unsigned int *)sub_186B300(v43 - 1, v49);
          v54 = v53[1];
          v43 = v53 + 2;
          *(_QWORD *)(a1 + 3152) = v53 + 2;
          *v53 = v48;
          LODWORD(v53) = v54;
          v47 = &v43[v54];
          v46 = (_DWORD)v53 + 1;
          goto LABEL_57;
        }
        goto LABEL_56;
      }
      goto LABEL_99;
    }
    if ( !v24 )
      goto LABEL_58;
    if ( a2 == v147.m128i_i64[0] )
      goto LABEL_53;
  }
  if ( v24 != 1 )
    goto LABEL_25;
  sub_15EE230(*(_QWORD *)(v23 + 24));
LABEL_26:
  v25 = *(__int64 **)(a1 + 3152);
  v26 = v25;
  if ( !v25 )
    goto LABEL_53;
  v27 = *((_DWORD *)v25 - 1);
  if ( v27 != 1 )
  {
    if ( v27 > 1 )
      goto LABEL_29;
LABEL_53:
    v37 = 0;
    goto LABEL_43;
  }
  if ( *(_WORD *)(v23 + 4) != 2 )
    goto LABEL_64;
  v146 = *(_DWORD *)(v23 + 16);
  if ( v146 )
    goto LABEL_64;
  v55 = *v25;
  v56 = *(_QWORD *)(a1 + 3144);
  if ( !*v25
    || (v17 = *(_DWORD *)(v55 + 8) == 1, --*(_DWORD *)(v55 + 8), !v17)
    || (sub_15D7BC0(v56, v55), v26 = *(__int64 **)(a1 + 3152), v27 = 1, v26) )
  {
    *((_DWORD *)v26 - 1) = 0;
  }
  v111 = v27;
  sub_15EE230(*(_QWORD *)(v23 + 24));
  v57 = *(_QWORD *)(a1 + 3152);
  v58 = v111;
  v144 = *(_QWORD *)(a1 + 72);
  v59 = (__int64 *)v57;
  if ( !v57 )
  {
    if ( a2 == v22 )
      goto LABEL_53;
    v112 = 0;
    v141 = 0;
    v114 = *(_QWORD *)(a1 + 72);
    v113 = v114;
    goto LABEL_165;
  }
  v60 = *(_DWORD *)(v57 - 4);
  v61 = v60 - 1;
  if ( !v60 )
  {
    if ( a2 == v22 )
      goto LABEL_53;
    v62 = 0;
    v113 = *(_QWORD *)(a1 + 72);
    v114 = v113;
    v141 = 0;
    v112 = 0;
    goto LABEL_197;
  }
  v62 = 0;
  v145 = 0;
  v141 = 0;
  v63 = 8LL * v61;
  v114 = *(_QWORD *)(a1 + 72);
  v113 = v114;
  v143 = 0;
  v112 = 0;
  while ( 1 )
  {
    v64 = *(_QWORD *)(v57 + v63);
    v137 = v58;
    v150 = v112;
    v126 = v61;
    v151 = v113;
    v117 = v63;
    v152 = v62;
    v153 = v114;
    v65 = sub_7D43E0(a1, v64, &v150, &v152);
    v62 = v152;
    v66 = v117;
    v67 = v126;
    v58 = v137;
    v114 = v153;
    v112 = v150;
    v113 = v151;
    if ( !v65 )
      goto LABEL_87;
    if ( v143 )
      break;
    if ( v150 )
      ++*(_DWORD *)(v150 + 8);
    if ( v141 != v62 )
    {
      if ( v141 )
      {
        v118 = *(_DWORD *)(v141 + 8);
        *(_DWORD *)(v141 + 8) = v118 - 1;
        if ( v118 == 1 )
        {
          v127 = v66;
          v119 = v67;
          sub_15D7BC0(v144, v141);
          v67 = v119;
          v66 = v127;
          v58 = v137;
        }
      }
      if ( v62 )
        ++*(_DWORD *)(v62 + 8);
    }
    v141 = v62;
    v145 = v67;
    v143 = v112;
LABEL_87:
    v61 = v67 - 1;
    v63 = v66 - 8;
    if ( v61 == -1 )
    {
      if ( v143 )
      {
        v69 = *(_QWORD *)(a1 + 3152);
        v70 = *(_QWORD *)(a1 + 3144);
        v71 = 8LL * v145;
        v72 = (__int64 *)(v69 + v71);
        v73 = *(_QWORD *)(v69 + v71);
        ++*(_DWORD *)(v143 + 8);
        if ( v73 )
        {
          v17 = (*(_DWORD *)(v73 + 8))-- == 1;
          if ( v17 )
          {
            v136 = v58;
            v125 = (__int64 *)(v69 + v71);
            sub_15D7BC0(v70, v73);
            v72 = v125;
            v58 = v136;
            v70 = *(_QWORD *)(a1 + 3144);
            v69 = *(_QWORD *)(a1 + 3152);
          }
        }
        *v72 = v143;
        if ( v69 )
          v74 = *(unsigned int *)(v69 - 4);
        else
          v74 = 0;
        v138 = v58;
        v75 = sub_15EC240(v70, v74);
        v120 = v75;
        v76 = v138;
        if ( v75 )
          ++*(_DWORD *)(v75 + 8);
        v128 = *(_DWORD *)(v143 + 8);
        *(_DWORD *)(v143 + 8) = v128 - 1;
        if ( v128 == 1 )
        {
          sub_15D7BC0(v70, v143);
          v76 = v138;
        }
        v77 = *(_QWORD *)(a1 + 3152);
        v78 = *(_QWORD *)(a1 + 3144);
        v79 = (__int64 *)(v77 + v71);
        if ( v141 )
          ++*(_DWORD *)(v141 + 8);
        v80 = *v79;
        if ( *v79 )
        {
          v17 = (*(_DWORD *)(v80 + 8))-- == 1;
          if ( v17 )
          {
            v135 = v76;
            sub_15D7BC0(v78, v80);
            v76 = v135;
            v78 = *(_QWORD *)(a1 + 3144);
            v77 = *(_QWORD *)(a1 + 3152);
          }
        }
        *v79 = v141;
        if ( v77 )
          v146 = *(_DWORD *)(v77 - 4);
        v139 = v76;
        v81 = sub_15EC240(v78, v146);
        v82 = v139;
        v83 = v81;
        if ( v81 )
          ++*(_DWORD *)(v81 + 8);
        if ( v141 )
        {
          v129 = *(_DWORD *)(v141 + 8);
          *(_DWORD *)(v141 + 8) = v129 - 1;
          if ( v129 == 1 )
          {
            sub_15D7BC0(v78, v141);
            v82 = v139;
          }
        }
        v84 = *(_QWORD **)(a1 + 3152);
        if ( v84 )
        {
          v85 = &v84[*((unsigned int *)v84 - 1)];
          if ( v84 >= v85 )
            goto LABEL_142;
          do
          {
            v86 = *v84;
            if ( *v84 )
            {
              v87 = *(_QWORD *)(a1 + 3144);
              v17 = (*(_DWORD *)(v86 + 8))-- == 1;
              if ( v17 )
              {
                v142 = v82;
                v140 = v85;
                v130 = v84;
                sub_15D7BC0(v87, v86);
                v82 = v142;
                v85 = v140;
                v84 = v130;
              }
            }
            ++v84;
          }
          while ( v84 < v85 );
          v84 = *(_QWORD **)(a1 + 3152);
          if ( v84 )
          {
LABEL_142:
            *((_DWORD *)v84 - 1) = 0;
            if ( v120 )
            {
              ++*(_DWORD *)(v120 + 8);
              v88 = *((_DWORD *)v84 - 2);
              if ( v88 != *((_DWORD *)v84 - 1) )
              {
LABEL_144:
                v89 = &v84[*((unsigned int *)v84 - 1)];
                v90 = *((_DWORD *)v84 - 1) + 1;
                goto LABEL_145;
              }
              v94 = (3 * v88 + 1) >> 1;
              v95 = 8 * v94 + 8;
              if ( 8 * v88 + 8 < (unsigned int)v95 && v88 < v94 )
              {
                v132 = (3 * v88 + 1) >> 1;
                v96 = (unsigned int *)sub_186B300(v84 - 1, v95);
                v84 = v96 + 2;
                *(_QWORD *)(a1 + 3152) = v96 + 2;
                *v96 = v132;
                v97 = v96[1];
                v98 = v97;
                v89 = &v84[v97];
                v90 = v98 + 1;
                goto LABEL_145;
              }
            }
            else if ( *((_DWORD *)v84 - 2) )
            {
              goto LABEL_144;
            }
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v154.m128i_i64, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, &v154);
            sub_233E40((__int64)&v154);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
        }
        if ( v120 )
          ++*(_DWORD *)(v120 + 8);
        v134 = v82;
        v102 = (_QWORD *)sub_186B270(0x18u);
        *v102 = 2;
        v84 = v102 + 1;
        v90 = v134;
        *(_QWORD *)(a1 + 3152) = v84;
        v89 = v84;
LABEL_145:
        *v89 = v120;
        *((_DWORD *)v84 - 1) = v90;
        if ( v83 )
        {
          ++*(_DWORD *)(v83 + 8);
          v90 = *((_DWORD *)v84 - 1);
        }
        if ( *((_DWORD *)v84 - 2) == v90 )
        {
          v99 = (3 * v90 + 1) >> 1;
          v100 = 8 * v99 + 8;
          if ( 8 * v90 + 8 >= v100 || v90 >= v99 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v154.m128i_i64, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, &v154);
            sub_233E40((__int64)&v154);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v133 = (3 * v90 + 1) >> 1;
          v101 = (unsigned int *)sub_186B300(v84 - 1, v100);
          v84 = v101 + 2;
          *(_QWORD *)(a1 + 3152) = v101 + 2;
          v90 = v101[1];
          *v101 = v133;
        }
        v84[v90] = v83;
        *((_DWORD *)v84 - 1) = v90 + 1;
        if ( v83 )
        {
          v17 = (*(_DWORD *)(v83 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v144, v83);
        }
        if ( v120 )
        {
          v131 = *(_DWORD *)(v120 + 8);
          *(_DWORD *)(v120 + 8) = v131 - 1;
          if ( v131 == 1 )
            sub_15D7BC0(v144, v120);
        }
        if ( v62 )
        {
          v17 = (*(_DWORD *)(v62 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v114, v62);
        }
        if ( v112 )
        {
          v116 = *(_DWORD *)(v112 + 8);
          *(_DWORD *)(v112 + 8) = v116 - 1;
          if ( v116 == 1 )
            sub_15D7BC0(v113, v112);
        }
        v25 = *(__int64 **)(a1 + 3152);
        if ( !v25 )
          goto LABEL_53;
        v27 = *((_DWORD *)v25 - 1);
        if ( v27 > 1 )
        {
LABEL_29:
          v28 = v27 - 1;
          while ( 1 )
          {
            v31 = *(_QWORD *)(a1 + 72);
            v32 = sub_15DBB60(v31, v23, v25[v28]);
            v154 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v32, (__m128i)v31);
            if ( v32 )
              ++*(_DWORD *)(v32 + 8);
            sub_14B9B80(*(_QWORD *)(a1 + 80) + 2192LL, &v154);
            v33 = v154.m128i_i64[0];
            v34 = *(_QWORD *)(a1 + 3144);
            v35 = (__int64 *)(v28 * 8 + *(_QWORD *)(a1 + 3152));
            if ( v154.m128i_i64[0] )
              ++*(_DWORD *)(v154.m128i_i64[0] + 8);
            v36 = *v35;
            if ( *v35 )
            {
              v17 = (*(_DWORD *)(v36 + 8))-- == 1;
              if ( v17 )
                sub_15D7BC0(v34, v36);
            }
            *v35 = v33;
            v29 = v154.m128i_i64[0];
            if ( v154.m128i_i64[0]
              && (v30 = v154.m128i_i64[1],
                  v17 = *(_DWORD *)(v154.m128i_i64[0] + 8) == 1,
                  --*(_DWORD *)(v154.m128i_i64[0] + 8),
                  v17) )
            {
              sub_15D7BC0(v30, v29);
              if ( --v28 == -1 )
                goto LABEL_42;
            }
            else if ( --v28 == -1 )
            {
              goto LABEL_42;
            }
            v25 = *(__int64 **)(a1 + 3152);
          }
        }
LABEL_64:
        if ( a2 == v22 || (v27 & 1) == 0 )
          goto LABEL_53;
        v50 = v147.m128i_i64[0];
        v51 = *(_QWORD *)(a1 + 3144);
        if ( v147.m128i_i64[0] )
          ++*(_DWORD *)(v147.m128i_i64[0] + 8);
        v52 = *v25;
        if ( *v25 )
        {
          v17 = (*(_DWORD *)(v52 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v51, v52);
        }
        *v25 = v50;
        sub_7D5350(a1, v147.m128i_i64[0]);
LABEL_42:
        v37 = 1;
        goto LABEL_43;
      }
      if ( a2 == v22 )
      {
        v37 = 0;
        if ( v141 )
        {
          v124 = *(_DWORD *)(v141 + 8);
          *(_DWORD *)(v141 + 8) = v124 - 1;
          if ( v124 == 1 )
            sub_15D7BC0(v144, v141);
          goto LABEL_134;
        }
        goto LABEL_135;
      }
      v59 = *(__int64 **)(a1 + 3152);
      v57 = v62;
      v103 = v59;
      if ( v59 )
      {
        v104 = (unsigned __int64)&v59[*((unsigned int *)v59 - 1)];
        if ( (unsigned __int64)v59 >= v104 )
          goto LABEL_197;
        do
        {
          v105 = *v103;
          if ( *v103 )
          {
            v106 = *(_QWORD *)(a1 + 3144);
            v17 = (*(_DWORD *)(v105 + 8))-- == 1;
            if ( v17 )
              sub_15D7BC0(v106, v105);
          }
          ++v103;
        }
        while ( (unsigned __int64)v103 < v104 );
        v59 = *(__int64 **)(a1 + 3152);
        if ( v59 )
        {
LABEL_197:
          v91 = v147.m128i_i64[0];
          *((_DWORD *)v59 - 1) = 0;
          if ( v91 )
            ++*(_DWORD *)(v91 + 8);
          v107 = *((_DWORD *)v59 - 2);
          if ( *((_DWORD *)v59 - 1) == v107 )
          {
            v108 = (3 * v107 + 1) >> 1;
            v109 = 8 * v108 + 8;
            if ( 8 * v107 + 8 >= v109 || v107 >= v108 )
            {
              v2 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v154.m128i_i64, "Overflow encountered when expanding vector");
              *v2 = (char *)off_1C63128;
              sub_2333C0(v2 + 1, &v154);
              sub_233E40((__int64)&v154);
              __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v110 = (unsigned int *)sub_186B300(v59 - 1, v109);
            v59 = (__int64 *)(v110 + 2);
            *(_QWORD *)(a1 + 3152) = v110 + 2;
            *v110 = v108;
          }
LABEL_169:
          v93 = *((_DWORD *)v59 - 1);
          v59[v93] = v91;
          *((_DWORD *)v59 - 1) = v93 + 1;
          if ( v141 )
          {
            v123 = *(_DWORD *)(v141 + 8);
            *(_DWORD *)(v141 + 8) = v123 - 1;
            if ( v123 == 1 )
              sub_15D7BC0(v144, v141);
          }
          v37 = 1;
          goto LABEL_135;
        }
LABEL_166:
        v91 = v147.m128i_i64[0];
        if ( v147.m128i_i64[0] )
          ++*(_DWORD *)(v147.m128i_i64[0] + 8);
        v92 = (_QWORD *)sub_186B270(0x18u);
        *v92 = 2;
        v59 = v92 + 1;
        *(_QWORD *)(a1 + 3152) = v59;
        goto LABEL_169;
      }
LABEL_165:
      v62 = v57;
      goto LABEL_166;
    }
    v57 = *(_QWORD *)(a1 + 3152);
  }
  if ( v141 )
  {
    v121 = *(_DWORD *)(v141 + 8);
    *(_DWORD *)(v141 + 8) = v121 - 1;
    if ( v121 == 1 )
      sub_15D7BC0(v144, v141);
  }
  v122 = *(_DWORD *)(v143 + 8);
  *(_DWORD *)(v143 + 8) = v122 - 1;
  if ( v122 == 1 )
    sub_15D7BC0(v144, v143);
LABEL_134:
  v37 = 0;
LABEL_135:
  if ( v62 )
  {
    v17 = (*(_DWORD *)(v62 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v114, v62);
  }
  if ( v112 )
  {
    v115 = *(_DWORD *)(v112 + 8);
    *(_DWORD *)(v112 + 8) = v115 - 1;
    if ( v115 == 1 )
      sub_15D7BC0(v113, v112);
  }
LABEL_43:
  v38 = v148;
  if ( v148 )
  {
    v39 = v149;
    v17 = (*(_DWORD *)(v148 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v39, v38);
  }
  v40 = v147.m128i_i64[0];
  if ( v147.m128i_i64[0] )
  {
    v41 = v147.m128i_i64[1];
    v17 = (*(_DWORD *)(v147.m128i_i64[0] + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v41, v40);
  }
  return v37;
}

