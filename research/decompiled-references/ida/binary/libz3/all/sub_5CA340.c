__int64 __fastcall sub_5CA340(_QWORD *a1, __int64 a2, int a3, __int64 *a4, __int64 *a5)
{
  char **exception; // rbx
  unsigned int v6; // r13d
  _DWORD *v7; // rax
  int v9; // eax
  _QWORD *v10; // r9
  __int64 *v12; // rbx
  __int64 v13; // rbp
  __int64 *v14; // r12
  int v16; // r13d
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 *v20; // r13
  __int64 v21; // r12
  __int64 *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // r15d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r12
  __int64 *v32; // r15
  unsigned __int64 v33; // rdx
  __int64 *v34; // r14
  __int64 v35; // r11
  __int64 v36; // rbx
  __int64 v37; // r9
  __int64 *v38; // r10
  int v39; // eax
  __int64 *v40; // rbp
  __int64 v41; // r12
  char v42; // cl
  _DWORD *v43; // rdx
  _DWORD *v44; // rdx
  __int64 v45; // r13
  _DWORD *v46; // rcx
  _DWORD *v47; // rdx
  __int64 *v48; // rdx
  __int64 v49; // rbp
  _DWORD *v50; // rax
  int v51; // eax
  __int64 v52; // rax
  __int64 *v53; // rdx
  __int64 *v54; // rbx
  unsigned __int64 v55; // r12
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // r14
  __int64 *v59; // rbp
  unsigned int v60; // r12d
  unsigned int i; // r13d
  __int64 v62; // rax
  unsigned int v63; // edx
  __int64 v64; // rdi
  __int64 *v65; // r15
  __int64 v66; // rsi
  __int64 *v67; // r14
  __int64 *v68; // r9
  __int64 *v69; // r12
  __int64 v70; // rsi
  __int64 v71; // rdi
  _DWORD *v72; // rax
  unsigned __int8 v73; // r8
  unsigned int v74; // r12d
  unsigned int v75; // r14d
  unsigned int v76; // r10d
  char v77; // r15
  const __m128i *v78; // r13
  __int16 v79; // ax
  _QWORD *v80; // rax
  __int64 *v81; // r15
  __int64 *v82; // r12
  __int64 *v83; // rbx
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rdi
  __int64 v87; // rbx
  _DWORD *v88; // rax
  __m128i v89; // xmm0
  __int64 v90; // rdi
  const __m128i **v91; // rbx
  const __m128i *v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // rbx
  __int64 *v95; // rax
  __int16 v96; // dx
  unsigned int v97; // edx
  unsigned int v98; // ecx
  int v99; // r15d
  __int64 v100; // r9
  __int64 v101; // rdi
  __int64 v102; // rsi
  __int16 v103; // ax
  _DWORD *v104; // rdx
  _DWORD *v105; // rax
  int v106; // eax
  __int64 v107; // r9
  __int64 v108; // r10
  int v109; // edx
  __int64 v110; // rax
  __m128i v111; // xmm0
  _DWORD *v112; // rax
  int v113; // eax
  _QWORD *v114; // rax
  __int64 v115; // rdi
  __int64 *v116; // r13
  __int64 v117; // rsi
  __int64 v118; // rax
  _QWORD *v119; // rbx
  __m128i *v120; // rcx
  int v121; // ebp
  _QWORD *v122; // r13
  __int64 v123; // r15
  int v124; // eax
  _QWORD *v125; // r9
  __int64 v126; // rax
  __int128 v127; // rdi
  __int64 v128; // rbx
  _DWORD *v129; // rax
  __int64 v130; // rsi
  __int64 v131; // rax
  __int64 v132; // rdi
  __int64 v133; // rsi
  __int64 v134; // [rsp+0h] [rbp-A8h]
  _QWORD *v136; // [rsp+10h] [rbp-98h]
  _QWORD *v137; // [rsp+10h] [rbp-98h]
  _QWORD *v138; // [rsp+10h] [rbp-98h]
  __int64 v139; // [rsp+10h] [rbp-98h]
  int v140; // [rsp+10h] [rbp-98h]
  __int64 *v141; // [rsp+10h] [rbp-98h]
  unsigned int v142; // [rsp+10h] [rbp-98h]
  _QWORD *v143; // [rsp+10h] [rbp-98h]
  _QWORD *v144; // [rsp+10h] [rbp-98h]
  _QWORD *v145; // [rsp+10h] [rbp-98h]
  __int64 v146; // [rsp+10h] [rbp-98h]
  __int64 *v147; // [rsp+18h] [rbp-90h]
  __int8 v148; // [rsp+18h] [rbp-90h]
  unsigned __int8 v149; // [rsp+18h] [rbp-90h]
  unsigned int v150; // [rsp+18h] [rbp-90h]
  __m128i v151; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v152; // [rsp+30h] [rbp-78h]
  _QWORD *v153; // [rsp+38h] [rbp-70h]
  __m128i v154; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v155[5]; // [rsp+50h] [rbp-58h] BYREF

  v6 = 5;
  v7 = *(_DWORD **)(a2 + 24);
  if ( !v7 || *v7 )
    return v6;
  v9 = v7[1];
  v10 = a1;
  if ( v9 == 8 )
  {
    v49 = *a4;
    if ( *(_WORD *)(*a4 + 4) )
      return v6;
    v50 = *(_DWORD **)(*(_QWORD *)(v49 + 16) + 24LL);
    if ( !v50 )
      return v6;
    if ( *v50 )
      return v6;
    v51 = v50[1];
    if ( v51 != 5 && v51 != 6 )
      return v6;
    v52 = *a1;
    v53 = (__int64 *)a1[29];
    *(_QWORD *)&v155[0] = 0;
    *((_QWORD *)&v155[0] + 1) = v52;
    v54 = v53;
    if ( v53 )
    {
      v55 = (unsigned __int64)&v53[*((unsigned int *)v53 - 1)];
      if ( (unsigned __int64)v53 >= v55 )
        goto LABEL_194;
      do
      {
        v56 = *v54;
        if ( *v54 )
        {
          v57 = v10[28];
          v19 = (*(_DWORD *)(v56 + 8))-- == 1;
          if ( v19 )
          {
            v138 = v10;
            sub_15D7BC0(v57, v56);
            v10 = v138;
          }
        }
        ++v54;
      }
      while ( (unsigned __int64)v54 < v55 );
      v53 = (__int64 *)v10[29];
      if ( v53 )
LABEL_194:
        *((_DWORD *)v53 - 1) = 0;
    }
    v118 = *(unsigned int *)(v49 + 24);
    v119 = (_QWORD *)(v49 + 32);
    v120 = &v154;
    v121 = (_DWORD)v10 + 8;
    v118 *= 8;
    v122 = (_QWORD *)((char *)v119 + v118);
    if ( !v118 )
      goto LABEL_204;
    while ( 1 )
    {
      v145 = v10;
      v124 = sub_14DEE90(v121, *v119, (unsigned int)v155, (_DWORD)v120, (_DWORD)a5, (_DWORD)v10, v134);
      v125 = v145;
      if ( v124 == 5 )
        break;
      v123 = *(_QWORD *)&v155[0];
      v154.m128i_i64[0] = *(_QWORD *)&v155[0];
      if ( *(_QWORD *)&v155[0] )
        goto LABEL_198;
LABEL_199:
      v144 = v125;
      sub_5C94A0(v125 + 29, &v154);
      ++v119;
      v10 = v144;
      if ( v122 == v119 )
      {
        v53 = (__int64 *)v144[29];
LABEL_204:
        v128 = v10[28];
        if ( *(_WORD *)(*a4 + 4)
          || (v129 = *(_DWORD **)(*(_QWORD *)(*a4 + 16) + 24LL)) == nullptr
          || *v129
          || v129[1] != 5 )
        {
          if ( v53 )
            v130 = *((unsigned int *)v53 - 1);
          else
            v130 = 0;
          v131 = sub_15EC1C0(v10[28], v130);
          if ( v131 )
            ++*(_DWORD *)(v131 + 8);
        }
        else
        {
          if ( v53 )
            v133 = *((unsigned int *)v53 - 1);
          else
            v133 = 0;
          v131 = sub_15EC240(v10[28], v133);
          if ( v131 )
            ++*(_DWORD *)(v131 + 8);
        }
        v132 = *a5;
        *a5 = v131;
        sub_5C8340(v132, v128);
        v6 = 1;
        sub_5C8340(*(__int64 *)&v155[0], *((__int64 *)&v155[0] + 1));
        return v6;
      }
    }
    v126 = sub_15E1A70(v145[1]);
    v123 = v126;
    if ( !v126 )
    {
      sub_5C8340(*(__int64 *)&v155[0], *((__int64 *)&v155[0] + 1));
      *(_QWORD *)&v155[0] = 0;
      v125 = v145;
      v154.m128i_i64[0] = 0;
      goto LABEL_199;
    }
    v127 = v155[0];
    ++*(_DWORD *)(v126 + 8);
    sub_5C8340(v127, *((__int64 *)&v127 + 1));
    *(_QWORD *)&v155[0] = v123;
    v125 = v145;
    v154.m128i_i64[0] = v123;
LABEL_198:
    ++*(_DWORD *)(v123 + 8);
    goto LABEL_199;
  }
  if ( (unsigned int)(v9 - 5) > 1 )
    return v6;
  if ( !a3 )
  {
    v93 = *a1;
    if ( v9 != 5 )
    {
      v94 = *(_QWORD *)(v93 + 864);
      if ( v94 )
        ++*(_DWORD *)(v94 + 8);
      v95 = a5;
      goto LABEL_129;
    }
    v94 = *(_QWORD *)(v93 + 856);
    if ( v94 )
      goto LABEL_184;
    goto LABEL_185;
  }
  if ( a3 == 1 )
  {
    v94 = *a4;
    if ( *a4 )
LABEL_184:
      ++*(_DWORD *)(v94 + 8);
LABEL_185:
    v95 = a5;
LABEL_129:
    v6 = 4;
    sub_5C8340(*v95, v95[1]);
    *a5 = v94;
    return v6;
  }
  v12 = (__int64 *)a1[29];
  v13 = a2;
  if ( !v12 )
    goto LABEL_180;
  v14 = &v12[*((unsigned int *)v12 - 1)];
  if ( v12 < v14 )
  {
    v16 = a3;
    do
    {
      while ( 1 )
      {
        v17 = *v12;
        if ( *v12 )
        {
          v18 = a1[28];
          v19 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v12 >= v14 )
          goto LABEL_15;
      }
      sub_15D7BC0(v18, v17);
      ++v12;
    }
    while ( v12 < v14 );
LABEL_15:
    v12 = (__int64 *)a1[29];
    v10 = a1;
    a3 = v16;
    if ( !v12 )
    {
LABEL_180:
      v20 = a4;
      v21 = *a4;
      v22 = &a4[a3];
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      v143 = v10;
      v114 = (_QWORD *)sub_186B270(0x18u);
      v10 = v143;
      v12 = v114 + 1;
      *v114 = 2;
      v24 = 1;
      v143[29] = v12;
      v25 = v12;
      goto LABEL_19;
    }
  }
  v20 = a4;
  *((_DWORD *)v12 - 1) = 0;
  v21 = *a4;
  v22 = &a4[a3];
  if ( v21 )
    goto LABEL_21;
  while ( 1 )
  {
    v26 = *((_DWORD *)v12 - 1);
    if ( v26 != *((_DWORD *)v12 - 2) )
      break;
    v27 = (3 * v26 + 1) >> 1;
    v28 = 8 * v27 + 8;
    if ( 8 * v26 + 8 >= (unsigned int)v28 || v26 >= v27 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v155, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v155);
      sub_233E40((__int64)v155);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v136 = v10;
    ++v20;
    v29 = (unsigned int *)sub_186B300(v12 - 1, v28);
    v10 = v136;
    v30 = v29[1];
    v12 = (__int64 *)(v29 + 2);
    *v29 = v27;
    v136[29] = v29 + 2;
    v24 = (unsigned int)(v30 + 1);
    v12[v30] = v21;
    *((_DWORD *)v12 - 1) = v24;
    if ( v22 == v20 )
      goto LABEL_26;
LABEL_20:
    v21 = *v20;
    if ( *v20 )
LABEL_21:
      ++*(_DWORD *)(v21 + 8);
  }
  v23 = v26;
  v24 = v26 + 1;
  v25 = &v12[v23];
LABEL_19:
  ++v20;
  *v25 = v21;
  *((_DWORD *)v12 - 1) = v24;
  if ( v22 != v20 )
    goto LABEL_20;
LABEL_26:
  v31 = 8 * v24;
  v32 = &v12[v24];
  if ( v32 == v12 )
    goto LABEL_60;
  v137 = v10;
  _BitScanReverse64(&v33, v31 >> 3);
  sub_5CFD00(v12, &v12[v24], 2LL * (int)v33, v10[30]);
  if ( (unsigned __int64)v31 <= 0x80 )
  {
    sub_5CCFA0(v12);
    v10 = v137;
    goto LABEL_59;
  }
  v34 = v12 + 16;
  sub_5CCFA0(v12);
  v35 = v13;
  v153 = v137;
  while ( 2 )
  {
    v36 = *v34;
    v37 = *(v34 - 1);
    v38 = v34 - 1;
    if ( *v34 != v37 )
    {
      v39 = *(unsigned __int16 *)(v36 + 4);
      v40 = v34;
      if ( !(_WORD)v39 )
      {
LABEL_34:
        v41 = v36;
        v42 = 0;
        v43 = *(_DWORD **)(*(_QWORD *)(v36 + 16) + 24LL);
        if ( v43 && !*v43 && v43[1] == 8 && *(_DWORD *)(v36 + 24) == 1 )
        {
          v41 = *(_QWORD *)(v36 + 32);
          v42 = 1;
        }
        goto LABEL_36;
      }
      while ( 1 )
      {
        v41 = v36;
        v42 = 0;
LABEL_36:
        if ( *(_WORD *)(v37 + 4) )
        {
          if ( v37 == v41 || !*(_WORD *)(v41 + 4) )
            goto LABEL_31;
          v45 = v37;
LABEL_132:
          if ( *(_DWORD *)v41 >= *(_DWORD *)v45 )
            goto LABEL_31;
          goto LABEL_43;
        }
        v44 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
        if ( v44 && !*v44 && v44[1] == 8 && *(_DWORD *)(v37 + 24) == 1 )
        {
          v45 = *(_QWORD *)(v37 + 32);
          if ( v45 == v41 )
          {
            if ( v42 )
              goto LABEL_31;
            goto LABEL_43;
          }
          v96 = *(_WORD *)(v45 + 4);
          if ( *(_WORD *)(v41 + 4) )
          {
            if ( !v96 )
              goto LABEL_43;
            goto LABEL_132;
          }
          if ( v96 )
            goto LABEL_31;
          v46 = *(_DWORD **)(v41 + 16);
          v47 = *(_DWORD **)(v45 + 16);
          if ( v46 != v47 )
            goto LABEL_42;
        }
        else
        {
          if ( v37 == v41 )
            goto LABEL_31;
          v45 = v37;
          if ( *(_WORD *)(v41 + 4) )
            goto LABEL_43;
          v46 = *(_DWORD **)(v41 + 16);
          v47 = *(_DWORD **)(v37 + 16);
          if ( v46 != v47 )
          {
LABEL_42:
            if ( *v46 >= *v47 )
              goto LABEL_31;
            goto LABEL_43;
          }
        }
        v97 = *(_DWORD *)(v41 + 24);
        v98 = *(_DWORD *)(v45 + 24);
        if ( v97 == v98 )
        {
          if ( !v97 )
            goto LABEL_132;
          v140 = 0;
          v147 = v32;
          v99 = v39;
          v151.m128i_i64[0] = v37;
          v100 = 32;
          v152 = v38;
          do
          {
            v101 = *(_QWORD *)(v41 + v100);
            v102 = *(_QWORD *)(v45 + v100);
            v103 = *(_WORD *)(v102 + 4);
            if ( !*(_WORD *)(v101 + 4)
              && (v104 = *(_DWORD **)(*(_QWORD *)(v101 + 16) + 24LL)) != nullptr
              && !*v104
              && v104[1] == 8
              && *(_DWORD *)(v101 + 24) == 1 )
            {
              v101 = *(_QWORD *)(v101 + 32);
              if ( !v103
                && (v112 = *(_DWORD **)(*(_QWORD *)(v102 + 16) + 24LL)) != nullptr
                && !*v112
                && v112[1] == 8
                && *(_DWORD *)(v102 + 24) == 1 )
              {
                v102 = *(_QWORD *)(v102 + 32);
              }
              else if ( !v140 )
              {
                v140 = -1;
              }
            }
            else if ( !v103 )
            {
              v105 = *(_DWORD **)(*(_QWORD *)(v102 + 16) + 24LL);
              if ( v105 )
              {
                if ( !*v105 && v105[1] == 8 )
                {
                  v113 = *(_DWORD *)(v102 + 24);
                  if ( v113 == 1 )
                  {
                    v102 = *(_QWORD *)(v102 + 32);
                    if ( v140 )
                      v113 = v140;
                    v140 = v113;
                  }
                }
              }
            }
            v106 = sub_5C8360(v101, v102, 3);
            if ( v106 )
            {
              v109 = v106;
              v37 = v151.m128i_i64[0];
              v39 = v99;
              v38 = v152;
              v32 = v147;
              goto LABEL_159;
            }
            v100 = v107 + 8;
          }
          while ( v100 != v108 );
          v39 = v99;
          v37 = v151.m128i_i64[0];
          v38 = v152;
          v32 = v147;
          v109 = v140;
          if ( !v140 )
            goto LABEL_132;
LABEL_159:
          if ( v109 != -1 )
            goto LABEL_31;
        }
        else if ( v98 < v97 )
        {
          goto LABEL_31;
        }
LABEL_43:
        v38[1] = v37;
        v37 = *(v38 - 1);
        v48 = v38 - 1;
        if ( v36 == v37 )
        {
          v40 = v38;
          goto LABEL_31;
        }
        --v38;
        v40 = v48 + 1;
        if ( !(_WORD)v39 )
          goto LABEL_34;
      }
    }
    v40 = v34;
LABEL_31:
    ++v34;
    *v40 = v36;
    if ( v32 != v34 )
      continue;
    break;
  }
  v10 = v153;
  v13 = v35;
LABEL_59:
  v12 = (__int64 *)v10[29];
LABEL_60:
  v58 = *v12;
  v139 = v13;
  v59 = v10;
  v60 = 1;
  for ( i = 1; ; ++i )
  {
    v62 = 0;
    if ( v12 )
    {
      v63 = *((_DWORD *)v12 - 1);
      while ( 1 )
      {
        v62 = v63;
        if ( v60 >= v63 )
          break;
        while ( v58 != v12[v60] )
        {
          v58 = v12[v60];
          if ( v60 != i )
            goto LABEL_69;
          i = v60 + 1;
          v62 = v63;
          if ( ++v60 >= v63 )
            goto LABEL_67;
        }
        ++v60;
      }
    }
LABEL_67:
    if ( (_DWORD)v62 == v60 )
      break;
    v58 = v12[v60];
    if ( i != v60 )
    {
LABEL_69:
      v64 = v59[28];
      v65 = &v12[i];
      if ( v58 )
        ++*(_DWORD *)(v58 + 8);
      v66 = *v65;
      if ( *v65 )
      {
        v19 = (*(_DWORD *)(v66 + 8))-- == 1;
        if ( v19 )
        {
          sub_15D7BC0(v64, v66);
          v12 = (__int64 *)v59[29];
        }
      }
      *v65 = v58;
    }
    ++v60;
  }
  v67 = &v12[v62];
  v68 = v59;
  v69 = &v12[i];
  if ( v69 < v67 )
  {
    do
    {
      while ( 1 )
      {
        v70 = *v69;
        if ( *v69 )
        {
          v71 = v59[28];
          v19 = (*(_DWORD *)(v70 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v69 >= v67 )
          goto LABEL_83;
      }
      sub_15D7BC0(v71, v70);
      ++v69;
    }
    while ( v69 < v67 );
LABEL_83:
    v68 = v59;
    v12 = (__int64 *)v59[29];
  }
  if ( !v12 )
  {
    v6 = 4;
    goto LABEL_124;
  }
  v72 = *(_DWORD **)(v139 + 24);
  v73 = 0;
  *((_DWORD *)v12 - 1) = i;
  if ( v72 && !*v72 )
    v73 = v72[1] == 6;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v154 = 0;
  v77 = 0;
  while ( 2 )
  {
    if ( v74 < *((_DWORD *)v12 - 1) )
    {
      while ( 2 )
      {
        v78 = (const __m128i *)v12[v74];
        v79 = v78->m128i_i16[2];
        if ( v73 )
        {
          if ( v79 || (v80 = *(_QWORD **)(v78[1].m128i_i64[0] + 24)) == nullptr || *v80 != 0x500000000LL )
          {
LABEL_94:
            if ( v75 != v74 )
            {
              v90 = v68[28];
              v77 = 0;
              v91 = (const __m128i **)&v12[v75];
              goto LABEL_117;
            }
            v74 = v75 + 1;
            v77 = 0;
            v75 = v74;
            if ( v74 >= *((_DWORD *)v12 - 1) )
              goto LABEL_96;
            continue;
          }
        }
        else
        {
          if ( v79 )
            goto LABEL_94;
          v88 = *(_DWORD **)(v78[1].m128i_i64[0] + 24);
          if ( !v88 || *v88 || v88[1] != 6 )
            goto LABEL_94;
        }
        break;
      }
      if ( v78[1].m128i_i32[2] == 2 )
      {
        v89 = _mm_loadu_si128(v78 + 2);
        if ( !v77 )
        {
          v154 = v89;
          if ( v75 == v74 )
          {
            ++v75;
            v76 = v74;
            v77 = 1;
            v74 = v75;
            continue;
          }
LABEL_115:
          v90 = v68[28];
          v76 = v75;
          v77 = 1;
          v91 = (const __m128i **)&v12[v75];
LABEL_117:
          v92 = *v91;
          ++v78->m128i_i32[2];
          if ( v92 )
          {
            v19 = v92->m128i_i32[2]-- == 1;
            if ( v19 )
            {
              v151.m128i_i64[0] = (__int64)v68;
              v149 = v73;
              v142 = v76;
              sub_15D7BC0(v90, v92);
              v68 = (__int64 *)v151.m128i_i64[0];
              v73 = v149;
              v76 = v142;
            }
          }
          *v91 = v78;
          v12 = (__int64 *)v68[29];
LABEL_121:
          ++v74;
          ++v75;
          goto LABEL_122;
        }
        LODWORD(v152) = v76;
        v148 = v73;
        v141 = v68;
        v155[0] = v89;
        v151 = v89;
        v110 = sub_5CC790(v68, &v154, v155, v73);
        v68 = v141;
        v73 = v148;
        v111 = _mm_load_si128(&v151);
        v76 = (unsigned int)v152;
        v12 = (__int64 *)v141[29];
        if ( !v110 )
        {
          v154 = v111;
          v76 = v75;
          if ( v75 != v74 )
            goto LABEL_115;
          goto LABEL_121;
        }
        v115 = v141[28];
        ++*(_DWORD *)(v110 + 8);
        v116 = &v12[v76];
        v117 = *v116;
        if ( *v116 )
        {
          v19 = (*(_DWORD *)(v117 + 8))-- == 1;
          if ( v19 )
          {
            v152 = v141;
            v151.m128i_i8[0] = v148;
            v150 = v76;
            v146 = v110;
            sub_15D7BC0(v115, v117);
            v68 = v152;
            v73 = v151.m128i_i8[0];
            v76 = v150;
            v110 = v146;
            v12 = (__int64 *)v152[29];
          }
        }
        *v116 = v110;
        ++v74;
        v77 = 0;
LABEL_122:
        if ( v12 )
          continue;
        v6 = 4 * (v75 == v74);
LABEL_124:
        v86 = *v68;
LABEL_105:
        v87 = sub_15E1AF0(v86);
        if ( v87 )
          goto LABEL_106;
        goto LABEL_107;
      }
      goto LABEL_94;
    }
    break;
  }
LABEL_96:
  v81 = &v12[*((unsigned int *)v12 - 1)];
  v6 = 4 * (v75 == v74);
  v82 = &v12[v75];
  if ( v82 < v81 )
  {
    v83 = v68;
    do
    {
      while ( 1 )
      {
        v84 = *v82;
        if ( *v82 )
        {
          v85 = v83[28];
          v19 = (*(_DWORD *)(v84 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v82 >= v81 )
          goto LABEL_102;
      }
      sub_15D7BC0(v85, v84);
      ++v82;
    }
    while ( v82 < v81 );
LABEL_102:
    v68 = v83;
    v12 = (__int64 *)v83[29];
    if ( !v12 )
      goto LABEL_124;
  }
  *((_DWORD *)v12 - 1) = v75;
  if ( v75 != 1 )
  {
    v86 = *v68;
    goto LABEL_105;
  }
  v87 = *v12;
  if ( v87 )
LABEL_106:
    ++*(_DWORD *)(v87 + 8);
LABEL_107:
  sub_5C8340(*a5, a5[1]);
  *a5 = v87;
  return v6;
}

