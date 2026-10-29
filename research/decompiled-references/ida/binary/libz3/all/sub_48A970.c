void __fastcall sub_48A970(const __m128i *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  char **v4; // rbx
  char **v5; // rbx
  char **exception; // rbx
  char **v7; // rbx
  __int64 v8; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // r9
  _QWORD *v13; // r12
  _QWORD *v14; // r14
  char v15; // al
  char v16; // r10
  _DWORD *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // r13
  _DWORD *v21; // rax
  _DWORD *v22; // rax
  bool v23; // r15
  int v24; // ecx
  int v25; // r9d
  int v26; // edi
  char v27; // r10
  __int64 v28; // r8
  __int64 v29; // r15
  __int64 v30; // r8
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // rdx
  _DWORD *v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  _QWORD *v40; // rdx
  __int64 v41; // r15
  unsigned int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  unsigned int v47; // r15d
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rdx
  unsigned int v51; // edx
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rcx
  unsigned int v55; // edx
  size_t v56; // rsi
  unsigned int *v57; // rax
  unsigned int v58; // r15d
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rdx
  int v62; // edi
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // rsi
  __int64 v67; // rdi
  bool v68; // zf
  __int64 *v69; // r12
  unsigned __int64 v70; // r15
  __int64 v71; // rsi
  __int64 *v72; // r12
  unsigned __int64 v73; // r13
  __int64 v74; // rsi
  __m128i v75; // xmm0
  __int64 v76; // rbp
  int v77; // edx
  int v78; // ecx
  int v79; // r8d
  int v80; // r9d
  _QWORD *v81; // rbp
  void *v82; // rdi
  __int64 *v83; // rbp
  unsigned __int64 v84; // r12
  __int64 v85; // rsi
  __int64 v86; // rdi
  __int64 *v87; // rbp
  unsigned __int64 v88; // r12
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 *v91; // rbp
  unsigned __int64 v92; // r12
  __int64 v93; // rsi
  __int64 v94; // rdi
  __int64 v95; // rsi
  char v96; // al
  char v97; // r10
  void *v98; // r15
  __int64 *v99; // r15
  unsigned __int64 v100; // rbx
  __int64 v101; // rsi
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  __int64 *v105; // r13
  unsigned __int64 v106; // r15
  __int64 v107; // rsi
  __int64 *v108; // [rsp+18h] [rbp-190h]
  __int64 v109; // [rsp+18h] [rbp-190h]
  _QWORD *v110; // [rsp+20h] [rbp-188h]
  int v111; // [rsp+28h] [rbp-180h]
  __int64 v113; // [rsp+38h] [rbp-170h]
  __int64 v114; // [rsp+40h] [rbp-168h]
  char v115; // [rsp+40h] [rbp-168h]
  char v116; // [rsp+40h] [rbp-168h]
  char v117; // [rsp+40h] [rbp-168h]
  char v118; // [rsp+40h] [rbp-168h]
  char v119; // [rsp+40h] [rbp-168h]
  char v120; // [rsp+40h] [rbp-168h]
  __int64 *v121; // [rsp+48h] [rbp-160h]
  __int64 v122; // [rsp+50h] [rbp-158h]
  char v123; // [rsp+58h] [rbp-150h]
  __int64 v124; // [rsp+58h] [rbp-150h]
  unsigned int v125; // [rsp+58h] [rbp-150h]
  __int64 v126; // [rsp+58h] [rbp-150h]
  char v127; // [rsp+60h] [rbp-148h]
  __int64 v128; // [rsp+60h] [rbp-148h]
  char v129; // [rsp+60h] [rbp-148h]
  __int64 v130; // [rsp+60h] [rbp-148h]
  char v131; // [rsp+60h] [rbp-148h]
  __int64 v132; // [rsp+60h] [rbp-148h]
  char v133; // [rsp+60h] [rbp-148h]
  char v134; // [rsp+60h] [rbp-148h]
  __int64 v135; // [rsp+68h] [rbp-140h]
  void *v136; // [rsp+68h] [rbp-140h]
  unsigned int v137; // [rsp+68h] [rbp-140h]
  char v138; // [rsp+68h] [rbp-140h]
  __int64 v139; // [rsp+68h] [rbp-140h]
  __int64 v140; // [rsp+68h] [rbp-140h]
  __int64 v141; // [rsp+68h] [rbp-140h]
  __int64 v142; // [rsp+70h] [rbp-138h]
  __int64 v143; // [rsp+70h] [rbp-138h]
  char v144; // [rsp+7Fh] [rbp-129h]
  __int64 v145; // [rsp+88h] [rbp-120h]
  char v146; // [rsp+9Fh] [rbp-109h] BYREF
  __int64 v147; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v148; // [rsp+A8h] [rbp-100h] BYREF
  int v149[2]; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v150; // [rsp+B8h] [rbp-F0h]
  __int64 v151; // [rsp+C0h] [rbp-E8h]
  __int64 v152; // [rsp+D0h] [rbp-D8h]
  __m128i v153; // [rsp+E0h] [rbp-C8h] BYREF
  unsigned __int64 v154; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v155; // [rsp+F8h] [rbp-B0h]
  __int64 *v156; // [rsp+100h] [rbp-A8h]
  __int64 v157; // [rsp+108h] [rbp-A0h]
  __int64 v158; // [rsp+110h] [rbp-98h]
  __int64 v159; // [rsp+118h] [rbp-90h]
  __int64 v160; // [rsp+120h] [rbp-88h]
  __int64 *v161; // [rsp+128h] [rbp-80h]
  void *s; // [rsp+130h] [rbp-78h]
  __int64 v163; // [rsp+138h] [rbp-70h]
  void *v164; // [rsp+140h] [rbp-68h]
  __int64 v165; // [rsp+148h] [rbp-60h]
  int v166; // [rsp+150h] [rbp-58h]
  __int64 v167; // [rsp+158h] [rbp-50h]
  _QWORD v168[9]; // [rsp+160h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a3 + 8);
  v111 = a2;
  if ( !v8 )
    return;
  if ( *(_DWORD *)(v8 - 4) != 1 )
    return;
  v10 = a3;
  sub_16669D0(v149, a1[1].m128i_i64[0]);
  v11 = a1[1].m128i_i64[0];
  v147 = 0;
  v148 = 0;
  v122 = v11;
  v12 = *(_QWORD **)(a2 + 8);
  if ( !v12 )
    return;
  v13 = &v12[*((unsigned int *)v12 - 1)];
  if ( v12 == v13 )
    return;
  v14 = *(_QWORD **)(a2 + 8);
  v15 = sub_486D20((__int64)a1, *v14, v10, &v147, &v148);
LABEL_9:
  v16 = v15;
  if ( !v15 )
    goto LABEL_7;
  if ( *(_WORD *)(v147 + 4) )
    goto LABEL_7;
  v17 = *(_DWORD **)(*(_QWORD *)(v147 + 16) + 24LL);
  if ( !v17 )
    goto LABEL_7;
  if ( *v17 != 5 )
    goto LABEL_7;
  if ( v17[1] != 6 )
    goto LABEL_7;
  v145 = a1[1].m128i_i64[0];
  v18 = 8LL * *(unsigned int *)(v147 + 24);
  v151 = v145;
  v152 = v145;
  v121 = (__int64 *)(v147 + 32 + v18);
  if ( !v18 )
    goto LABEL_7;
  v19 = *(_QWORD *)(v147 + 32);
  v108 = (__int64 *)(v147 + 32);
  v113 = v148;
  if ( v19 != v148 )
  {
    v110 = nullptr;
    v20 = 0;
    v123 = 0;
    goto LABEL_17;
  }
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v124 = v19;
  v115 = v15;
  v46 = (_QWORD *)sub_186B270(0x18u);
  v40 = v46 + 1;
  *v46 = 2;
  v19 = v124;
  v20 = 0;
  v110 = v40;
  v16 = v115;
  v39 = 1;
  v36 = v40;
LABEL_40:
  *v40 = v19;
  *(v36 - 1) = v39;
  v41 = *a4;
  if ( *a4 )
    ++*(_DWORD *)(v41 + 8);
  if ( v20 )
  {
    v42 = *(_DWORD *)(v20 - 4);
    if ( v42 == *(_DWORD *)(v20 - 8) )
    {
      v55 = (3 * v42 + 1) >> 1;
      v56 = 8 * v55 + 8;
      if ( 8 * v42 + 8 >= (unsigned int)v56 || v42 >= v55 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v153.m128i_i64, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v153);
        sub_233E40((__int64)&v153);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v125 = (3 * v42 + 1) >> 1;
      v117 = v16;
      v57 = (unsigned int *)sub_186B300((void *)(v20 - 8), v56);
      v20 = (unsigned __int64)(v57 + 2);
      v16 = v117;
      *v57 = v125;
      LODWORD(v57) = v57[1];
      v45 = (_QWORD *)(v20 + 8LL * (unsigned int)v57);
      v44 = (_DWORD)v57 + 1;
    }
    else
    {
      v43 = v42;
      v44 = v42 + 1;
      v45 = (_QWORD *)(v20 + 8 * v43);
    }
  }
  else
  {
    v120 = v16;
    v104 = (_QWORD *)sub_186B270(0x18u);
    v20 = (unsigned __int64)(v104 + 1);
    *v104 = 2;
    v16 = v120;
    v44 = 1;
    v45 = (_QWORD *)v20;
  }
  ++v108;
  *v45 = v41;
  *(_DWORD *)(v20 - 4) = v44;
  if ( v121 != v108 )
  {
    v123 = v16;
    while ( 1 )
    {
      v19 = *v108;
      if ( v113 == *v108 )
      {
        if ( v113 )
          ++*(_DWORD *)(v113 + 8);
        v36 = v110;
        v37 = *((_DWORD *)v110 - 1);
        if ( v37 == *((_DWORD *)v110 - 2) )
        {
          v58 = (3 * v37 + 1) >> 1;
          v59 = 8 * v58 + 8;
          if ( 8 * v37 + 8 >= (unsigned int)v59 || v37 >= v58 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v153.m128i_i64, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, &v153);
            sub_233E40((__int64)&v153);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v126 = v19;
          v118 = v16;
          v60 = (unsigned int *)sub_186B300(v110 - 1, v59);
          v61 = v60[1];
          v36 = v60 + 2;
          v16 = v118;
          *v60 = v58;
          v110 = v36;
          v19 = v126;
          LODWORD(v60) = v61;
          v40 = &v36[2 * v61];
          v39 = (_DWORD)v60 + 1;
        }
        else
        {
          v38 = v37;
          v39 = v37 + 1;
          v40 = &v110[v38];
        }
        goto LABEL_40;
      }
LABEL_17:
      if ( *(_WORD *)(v19 + 4) )
        goto LABEL_20;
      v21 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
      if ( !v21 || *v21 != 5 || v21[1] != 9 || *(_DWORD *)(v19 + 24) != 2 )
        goto LABEL_20;
      v95 = *(_QWORD *)(v19 + 32);
      v138 = v16;
      v130 = v19;
      v153 = 0u;
      v154 = 1;
      v155 = 0;
      v96 = sub_1666AE0(v149, v95, &v153, &v146);
      v97 = v138;
      v98 = qword_1C7F2C0;
      if ( !v96
        || (v153.m128i_i8[4] & 1) != 0
        || v153.m128i_i32[0] != -1
        || (v154 & 0x100000000LL) != 0
        || (_DWORD)v154 != 1 )
      {
        break;
      }
      v141 = v130;
      v134 = v97;
      sub_182CBA0(qword_1C7F2C0, &v153);
      sub_182CBA0(v98, &v154);
      v30 = v141;
      v16 = v134;
      v29 = *(_QWORD *)(v141 + 40);
LABEL_26:
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      if ( v110 )
      {
        v31 = *((_DWORD *)v110 - 1);
        if ( v31 == *((_DWORD *)v110 - 2) )
        {
          v51 = (3 * v31 + 1) >> 1;
          v52 = 8 * v51 + 8;
          if ( 8 * v31 + 8 >= (unsigned int)v52 || v31 >= v51 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v153.m128i_i64, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v153);
            sub_233E40((__int64)&v153);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v143 = v30;
          v137 = (3 * v31 + 1) >> 1;
          v129 = v16;
          v53 = (unsigned int *)sub_186B300(v110 - 1, v52);
          v54 = v53[1];
          v16 = v129;
          v30 = v143;
          v110 = v53 + 2;
          *v53 = v137;
          *(_QWORD *)&v53[2 * v54 + 2] = v29;
          v53[1] = v54 + 1;
        }
        else
        {
          v110[v31] = v29;
          *((_DWORD *)v110 - 1) = v31 + 1;
        }
      }
      else
      {
        v140 = v30;
        v133 = v16;
        v103 = (_QWORD *)sub_186B270(0x18u);
        v103[1] = v29;
        v16 = v133;
        v110 = v103 + 1;
        v30 = v140;
        *v103 = 0x100000002LL;
      }
      ++*(_DWORD *)(v30 + 8);
      if ( v20 )
      {
        v32 = *(_DWORD *)(v20 - 4);
        if ( v32 == *(_DWORD *)(v20 - 8) )
        {
          v47 = (3 * v32 + 1) >> 1;
          v48 = 8 * v47 + 8;
          if ( 8 * v32 + 8 >= (unsigned int)v48 || v32 >= v47 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v153.m128i_i64, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, &v153);
            sub_233E40((__int64)&v153);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v128 = v30;
          v116 = v16;
          v49 = (unsigned int *)sub_186B300((void *)(v20 - 8), v48);
          v50 = v49[1];
          v20 = (unsigned __int64)(v49 + 2);
          v16 = v116;
          *v49 = v47;
          v30 = v128;
          LODWORD(v49) = v50;
          v35 = (_QWORD *)(v20 + 8 * v50);
          v34 = (unsigned int)((_DWORD)v49 + 1);
        }
        else
        {
          v33 = v32;
          v34 = v32 + 1;
          v35 = (_QWORD *)(v20 + 8 * v33);
        }
      }
      else
      {
        v132 = v30;
        v119 = v16;
        v102 = (_QWORD *)sub_186B270(0x18u);
        v35 = v102 + 1;
        v16 = v119;
        v30 = v132;
        *v102 = 2;
        v20 = (unsigned __int64)(v102 + 1);
        v34 = 1;
      }
      ++v108;
      *v35 = v30;
      *(_DWORD *)(v20 - 4) = v34;
      if ( v121 == v108 )
      {
        if ( v123 )
          goto LABEL_62;
        v99 = (__int64 *)v20;
        if ( v20 < v20 + 8 * v34 )
        {
          v109 = v10;
          v100 = v20 + 8 * v34;
          do
          {
            v101 = *v99;
            if ( *v99 )
            {
              v68 = (*(_DWORD *)(v101 + 8))-- == 1;
              if ( v68 )
                sub_15D7BC0(v145, v101);
            }
            ++v99;
          }
          while ( (unsigned __int64)v99 < v100 );
          v10 = v109;
        }
        sub_186B220((void *)(v20 - 8));
        v105 = v110;
        v106 = (unsigned __int64)&v110[*((unsigned int *)v110 - 1)];
        if ( (unsigned __int64)v110 < v106 )
        {
          do
          {
            v107 = *v105;
            if ( *v105 )
            {
              v68 = (*(_DWORD *)(v107 + 8))-- == 1;
              if ( v68 )
                sub_15D7BC0(v145, v107);
            }
            ++v105;
          }
          while ( (unsigned __int64)v105 < v106 );
        }
        sub_186B220(v110 - 1);
LABEL_7:
        if ( v13 == ++v14 )
          return;
        v15 = sub_486D20((__int64)a1, *v14, v10, &v147, &v148);
        goto LABEL_9;
      }
    }
    v139 = v130;
    v131 = v97;
    sub_182CBA0(qword_1C7F2C0, &v153);
    sub_182CBA0(v98, &v154);
    v16 = v131;
    v19 = v139;
LABEL_20:
    v127 = v16;
    v114 = v19;
    v22 = *(_DWORD **)(sub_15D1F10(v19) + 24);
    if ( v22 )
    {
      v23 = 0;
      if ( *v22 == 5 )
        v23 = v22[1] == 1;
    }
    else
    {
      v23 = 0;
    }
    v153 = (__m128i)0xFFFFFFFFuLL;
    v154 = 1;
    v155 = 0;
    sub_182CBA0(qword_1C7F2C0, &v154);
    v26 = v150;
    BYTE4(v154) &= ~1u;
    LODWORD(v154) = 1;
    v27 = v127;
    v28 = v114;
    if ( !v150 )
    {
      sub_16669E0(v149);
      v26 = v150;
      v28 = v114;
      v27 = v127;
    }
    v135 = v28;
    v144 = v27;
    sub_166A700(v26, (unsigned int)&v153, v23, v24, v28, v25);
    v142 = v135;
    v29 = sub_15E1B70(v149[0]);
    v136 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v153);
    sub_182CBA0(v136, &v154);
    v16 = v144;
    v30 = v142;
    goto LABEL_26;
  }
LABEL_62:
  v62 = v149[0];
  if ( *((_DWORD *)v110 - 1) == 1 && (v63 = *v110, !*(_WORD *)(*v110 + 4LL))
    || (v64 = sub_15E1AF0(v149[0]), v62 = v149[0], (v63 = v64) != 0) )
  {
    ++*(_DWORD *)(v63 + 8);
  }
  if ( *(_DWORD *)(v20 - 4) == 1 && (v65 = *(_QWORD *)v20, !*(_WORD *)(*(_QWORD *)v20 + 4LL))
    || (v65 = sub_15E1AF0(v62)) != 0 )
  {
    ++*(_DWORD *)(v65 + 8);
  }
  v66 = *a4;
  if ( *a4 )
  {
    v67 = a4[1];
    v68 = (*(_DWORD *)(v66 + 8))-- == 1;
    if ( v68 )
      sub_15D7BC0(v67, v66);
  }
  *a4 = v65;
  v69 = (__int64 *)v20;
  v70 = v20 + 8LL * *(unsigned int *)(v20 - 4);
  if ( v20 < v70 )
  {
    do
    {
      v71 = *v69;
      if ( *v69 )
      {
        v68 = (*(_DWORD *)(v71 + 8))-- == 1;
        if ( v68 )
          sub_15D7BC0(v145, v71);
      }
      ++v69;
    }
    while ( (unsigned __int64)v69 < v70 );
  }
  sub_186B220((void *)(v20 - 8));
  v72 = v110;
  v73 = (unsigned __int64)&v110[*((unsigned int *)v110 - 1)];
  if ( (unsigned __int64)v110 < v73 )
  {
    do
    {
      v74 = *v72;
      if ( *v72 )
      {
        v68 = (*(_DWORD *)(v74 + 8))-- == 1;
        if ( v68 )
          sub_15D7BC0(v145, v74);
      }
      ++v72;
    }
    while ( (unsigned __int64)v72 < v73 );
  }
  sub_186B220(v110 - 1);
  if ( v63 )
  {
    v75 = _mm_loadl_epi64(a1 + 1);
    v76 = v148;
    v154 = 0;
    v156 = nullptr;
    v157 = 0;
    v158 = 0;
    v159 = 0;
    v161 = nullptr;
    s = v168;
    v163 = 1;
    v164 = nullptr;
    v165 = 0;
    v166 = 1065353216;
    v167 = 0;
    v168[0] = 0;
    v153 = _mm_unpacklo_epi64(v75, v75);
    v155 = v75.m128i_i64[0];
    v160 = v75.m128i_i64[0];
    sub_14EA0D0(&v153, v148, v63);
    sub_14EA0D0(&v153, v147, v76);
    sub_14EC260((unsigned int)&v153, v111, v77, v78, v79, v80);
    v81 = v164;
    if ( v164 )
    {
      do
      {
        v82 = v81;
        v81 = (_QWORD *)*v81;
        operator delete(v82, 0x18u);
      }
      while ( v81 );
    }
    memset(s, 0, 8 * v163);
    v165 = 0;
    v164 = nullptr;
    if ( s != v168 )
      operator delete(s, 8 * v163);
    v83 = v161;
    if ( v161 )
    {
      v84 = (unsigned __int64)&v161[*((unsigned int *)v161 - 1)];
      if ( (unsigned __int64)v161 >= v84 )
        goto LABEL_98;
      do
      {
        while ( 1 )
        {
          v85 = *v83;
          if ( *v83 )
          {
            v86 = v160;
            v68 = (*(_DWORD *)(v85 + 8))-- == 1;
            if ( v68 )
              break;
          }
          if ( (unsigned __int64)++v83 >= v84 )
            goto LABEL_97;
        }
        sub_15D7BC0(v86, v85);
        ++v83;
      }
      while ( (unsigned __int64)v83 < v84 );
LABEL_97:
      v83 = v161;
      if ( v161 )
LABEL_98:
        sub_186B220(v83 - 1);
    }
    if ( v159 )
      sub_186B220((void *)(v159 - 8));
    if ( v158 )
      sub_186B220((void *)(v158 - 8));
    if ( v157 )
      sub_186B220((void *)(v157 - 8));
    v87 = v156;
    if ( v156 )
    {
      v88 = (unsigned __int64)&v156[*((unsigned int *)v156 - 1)];
      if ( (unsigned __int64)v156 >= v88 )
        goto LABEL_113;
      do
      {
        while ( 1 )
        {
          v89 = *v87;
          if ( *v87 )
          {
            v90 = v155;
            v68 = (*(_DWORD *)(v89 + 8))-- == 1;
            if ( v68 )
              break;
          }
          if ( (unsigned __int64)++v87 >= v88 )
            goto LABEL_112;
        }
        sub_15D7BC0(v90, v89);
        ++v87;
      }
      while ( (unsigned __int64)v87 < v88 );
LABEL_112:
      v87 = v156;
      if ( v156 )
LABEL_113:
        sub_186B220(v87 - 1);
    }
    v91 = (__int64 *)v154;
    if ( v154 )
    {
      v92 = v154 + 8LL * *(unsigned int *)(v154 - 4);
      if ( v154 >= v92 )
        goto LABEL_122;
      do
      {
        while ( 1 )
        {
          v93 = *v91;
          if ( *v91 )
          {
            v94 = v153.m128i_i64[1];
            v68 = (*(_DWORD *)(v93 + 8))-- == 1;
            if ( v68 )
              break;
          }
          if ( (unsigned __int64)++v91 >= v92 )
            goto LABEL_121;
        }
        sub_15D7BC0(v94, v93);
        ++v91;
      }
      while ( (unsigned __int64)v91 < v92 );
LABEL_121:
      v91 = (__int64 *)v154;
      if ( v154 )
LABEL_122:
        sub_186B220(v91 - 1);
    }
    v68 = (*(_DWORD *)(v63 + 8))-- == 1;
    if ( v68 )
      sub_15D7BC0(v122, v63);
  }
}

