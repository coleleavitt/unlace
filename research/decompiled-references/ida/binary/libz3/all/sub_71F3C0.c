__int64 __fastcall sub_71F3C0(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // r9
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  __int64 *v13; // rcx
  int v14; // esi
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *i; // rax
  __int64 v21; // rdx
  _OWORD *v22; // rax
  int v23; // r8d
  int v24; // r9d
  int v25; // edx
  __int64 v26; // r14
  _DWORD *v27; // r13
  __int64 v28; // rdx
  __int64 *v29; // rcx
  int v30; // eax
  __int64 *v31; // rdx
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 *v36; // rcx
  bool v37; // zf
  __int64 v38; // rbx
  int v39; // eax
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rbx
  unsigned int v44; // eax
  unsigned int v45; // edx
  size_t v46; // rsi
  unsigned int *v47; // rax
  _QWORD *v48; // r15
  __int64 v49; // rbx
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 result; // rax
  unsigned int j; // ebx
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned int v56; // ecx
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rcx
  int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // rbx
  unsigned __int64 v63; // r13
  unsigned __int64 *v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // rcx
  int v67; // eax
  unsigned __int64 *v68; // rcx
  unsigned int v69; // eax
  unsigned int v70; // ecx
  __int64 v71; // rsi
  unsigned int v72; // eax
  __int64 v73; // rsi
  __int64 v74; // rdi
  unsigned __int64 v75; // r8
  int v76; // edx
  int v77; // esi
  int v78; // eax
  __int64 v79; // rdx
  int v80; // ecx
  __int64 v81; // r13
  __m128i *v82; // rax
  __m128i v83; // xmm0
  __int64 v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // rdx
  __m128i *v87; // r9
  __int64 v88; // rsi
  __int64 v89; // rax
  unsigned int v90; // ecx
  size_t v91; // rsi
  unsigned int *v92; // rax
  __int64 *v93; // rbx
  unsigned __int64 v94; // r12
  __int64 v95; // rsi
  _QWORD *v96; // rax
  _QWORD *v97; // rax
  unsigned int v98; // r13d
  unsigned int v99; // ecx
  unsigned int *v100; // rax
  unsigned int v101; // r13d
  unsigned int v102; // ecx
  unsigned int *v103; // rax
  __int64 v104; // rax
  unsigned int v105; // r9d
  unsigned __int64 v106; // rdx
  __int64 v107; // rax
  const __m128i *v108; // r10
  __m128i *v109; // r11
  __int64 v110; // rdx
  __m128i *v111; // rsi
  __int64 *v112; // rdi
  __m128i *v113; // rdx
  _QWORD *v114; // rdx
  char **v115; // r13
  char **v116; // r13
  char **v117; // r13
  char **exception; // r13
  char **v119; // r13
  int v120; // [rsp-8h] [rbp-D8h]
  int v121; // [rsp+0h] [rbp-D0h]
  int v122; // [rsp+0h] [rbp-D0h]
  int v123; // [rsp+8h] [rbp-C8h]
  int v124; // [rsp+8h] [rbp-C8h]
  int v125; // [rsp+10h] [rbp-C0h]
  int v126; // [rsp+10h] [rbp-C0h]
  __int64 v127; // [rsp+18h] [rbp-B8h]
  int v128; // [rsp+18h] [rbp-B8h]
  __int64 v129; // [rsp+18h] [rbp-B8h]
  int v130; // [rsp+20h] [rbp-B0h]
  int v131; // [rsp+20h] [rbp-B0h]
  unsigned __int64 *v132; // [rsp+20h] [rbp-B0h]
  unsigned int v133; // [rsp+20h] [rbp-B0h]
  unsigned int v134; // [rsp+28h] [rbp-A8h]
  char v135; // [rsp+28h] [rbp-A8h]
  __int64 v136; // [rsp+30h] [rbp-A0h]
  int v137; // [rsp+30h] [rbp-A0h]
  __int64 v138; // [rsp+30h] [rbp-A0h]
  int v139; // [rsp+30h] [rbp-A0h]
  _DWORD *v140; // [rsp+38h] [rbp-98h]
  int v141; // [rsp+38h] [rbp-98h]
  unsigned __int64 v142; // [rsp+38h] [rbp-98h]
  int v143; // [rsp+38h] [rbp-98h]
  unsigned __int64 v144; // [rsp+38h] [rbp-98h]
  __int64 *v145; // [rsp+40h] [rbp-90h]
  int v146; // [rsp+40h] [rbp-90h]
  __int64 *v147; // [rsp+40h] [rbp-90h]
  int v148; // [rsp+40h] [rbp-90h]
  unsigned int v149; // [rsp+40h] [rbp-90h]
  _QWORD *v150; // [rsp+48h] [rbp-88h]
  void *v151; // [rsp+48h] [rbp-88h]
  __int64 *v152; // [rsp+48h] [rbp-88h]
  __int64 *v153; // [rsp+50h] [rbp-80h]
  size_t v154; // [rsp+50h] [rbp-80h]
  unsigned int v155; // [rsp+50h] [rbp-80h]
  int v156[2]; // [rsp+58h] [rbp-78h]
  int v157; // [rsp+60h] [rbp-70h]
  int v158; // [rsp+68h] [rbp-68h]
  int v159; // [rsp+70h] [rbp-60h]
  int v160; // [rsp+78h] [rbp-58h]
  __int64 v161; // [rsp+80h] [rbp-50h] BYREF
  int v162; // [rsp+88h] [rbp-48h]
  int v163; // [rsp+90h] [rbp-40h]
  int v164; // [rsp+98h] [rbp-38h]
  int v165; // [rsp+A0h] [rbp-30h]
  void *v166; // [rsp+A8h] [rbp-28h]
  int v167; // [rsp+B0h] [rbp-20h]
  __int64 v168; // [rsp+B8h] [rbp-18h]

  v7 = *a2;
  v136 = a4;
  v130 = (int)a2;
  v8 = *(_DWORD *)(*a2 + 12);
  v145 = a5;
  v9 = (a3[3] - v8) ^ (v8 << 8);
  v10 = (v8 - v9) << 10;
  v11 = v9 ^ ((v8 - v9) << 16);
  v12 = v9 - v8;
  v13 = *(__int64 **)(a1 + 216);
  v14 = (v11 + v12) ^ v10;
  v15 = *(unsigned int *)(a1 + 224);
  v16 = v15 - 1;
  v15 *= 32;
  v17 = (__int64 *)((char *)v13 + v15);
  v18 = 32LL * (v14 & v16);
  v19 = &v13[(unsigned __int64)v18 / 8];
  if ( v18 != v15 )
  {
    for ( i = &v13[(unsigned __int64)v18 / 8]; v17 != i; i += 4 )
    {
      v21 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *((_DWORD *)i + 6) == v14 && v7 == v21 && a3 == (_DWORD *)i[1] )
        {
LABEL_28:
          v48 = (_QWORD *)i[2];
          sub_14EC390(a1 + 56, v7, *v48, v136);
          if ( v145 )
          {
            v49 = *v48;
            if ( *v48 )
              ++*(_DWORD *)(v49 + 8);
            v50 = *v145;
            if ( *v145 )
            {
              v51 = v145[1];
              v37 = (*(_DWORD *)(v50 + 8))-- == 1;
              if ( v37 )
                sub_15D7BC0(v51, v50);
            }
            *v145 = v49;
          }
          result = v48[1];
          for ( j = 0; result; result = v48[1] )
          {
            if ( j >= *(_DWORD *)(result - 4) )
              break;
            v54 = j++;
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 88LL))(
              *(_QWORD *)(a1 + 24),
              *(_QWORD *)(result + 8 * v54));
          }
          return result;
        }
      }
      else if ( !v21 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v19 != v13; v13 += 4 )
  {
    v55 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
    {
      if ( *((_DWORD *)v13 + 6) == v14 && v7 == v55 && a3 == (_DWORD *)v13[1] )
      {
        i = v13;
        goto LABEL_28;
      }
    }
    else if ( !v55 )
    {
      break;
    }
  }
LABEL_8:
  v22 = (_OWORD *)sub_186B270(0x10u);
  v25 = a3[8];
  v150 = v22;
  *v22 = 0;
  v127 = *(_QWORD *)(a1 + 8);
  v26 = v127;
  v159 = v127;
  if ( v25 )
  {
    v156[0] = 0;
    v27 = a3;
    LODWORD(v140) = (_DWORD)a3 + 8 * v25;
    v153 = &v161;
    do
    {
      v38 = *((_QWORD *)v27 + 6);
      sub_180C5A0(v153, "x");
      v39 = sub_15E3D10(
              v26,
              (int)v153,
              (int)&qword_18D6CD0,
              0,
              0,
              v38,
              1,
              v120,
              v121,
              v123,
              v125,
              v127,
              v130,
              v134,
              v136,
              (int)v140,
              (int)v145,
              (int)v150,
              (int)v153,
              v156[0],
              v157,
              v158,
              v159,
              v160,
              v161,
              v162,
              v163,
              v164,
              v165,
              v166,
              v167,
              v168);
      v42 = sub_15DC610(v26, v39, 0, 0, v40, v41, v122, v124, v126, v128, v131, v135, v137, v141, v146, v151);
      v43 = v42;
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 88LL))(*(_QWORD *)(a1 + 24), v42);
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      if ( *(_QWORD *)v156 )
      {
        v44 = *(_DWORD *)(*(_QWORD *)v156 - 4LL);
        if ( v44 == *(_DWORD *)(*(_QWORD *)v156 - 8LL) )
        {
          v45 = (3 * v44 + 1) >> 1;
          v46 = 8 * v45 + 8;
          if ( 8 * v44 + 8 >= (unsigned int)v46 || v44 >= v45 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v153, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v153);
            sub_233E40((__int64)v153);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v134 = (3 * v44 + 1) >> 1;
          v47 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v156 - 8LL), v46);
          v29 = (__int64 *)(v47 + 2);
          *(_QWORD *)v156 = v47 + 2;
          *v47 = v134;
          LODWORD(v47) = v47[1];
          v31 = &v29[(unsigned int)v47];
          v30 = (_DWORD)v47 + 1;
        }
        else
        {
          v28 = v44;
          v29 = *(__int64 **)v156;
          v30 = v44 + 1;
          v31 = (__int64 *)(*(_QWORD *)v156 + 8 * v28);
        }
      }
      else
      {
        v97 = (_QWORD *)sub_186B270(0x18u);
        *v97 = 2;
        *(_QWORD *)v156 = v97 + 1;
        v31 = v97 + 1;
        v29 = v97 + 1;
        v30 = 1;
      }
      *v31 = v43;
      *((_DWORD *)v29 - 1) = v30;
      v32 = (_QWORD *)v150[1];
      if ( v32 )
      {
        v33 = *((_DWORD *)v32 - 1);
        if ( v33 == *((_DWORD *)v32 - 2) )
        {
          v56 = (3 * v33 + 1) >> 1;
          v57 = 8 * v56 + 8;
          if ( 8 * v33 + 8 >= (unsigned int)v57 || v33 >= v56 )
          {
            v117 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v153, "Overflow encountered when expanding vector");
            *v117 = (char *)off_1C63128;
            sub_2333C0(v117 + 1, v153);
            sub_233E40((__int64)v153);
            __cxa_throw(v117, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v134 = (3 * v33 + 1) >> 1;
          v58 = (unsigned int *)sub_186B300(v32 - 1, v57);
          v32 = v58 + 2;
          *v58 = v134;
          v59 = v58[1];
          v150[1] = v58 + 2;
          LODWORD(v58) = v59;
          v36 = &v32[v59];
          v35 = (_DWORD)v58 + 1;
        }
        else
        {
          v34 = v33;
          v35 = v33 + 1;
          v36 = &v32[v34];
        }
      }
      else
      {
        v96 = (_QWORD *)sub_186B270(0x18u);
        v32 = v96 + 1;
        *v96 = 2;
        v36 = v96 + 1;
        v150[1] = v96 + 1;
        v35 = 1;
      }
      *v36 = v43;
      *((_DWORD *)v32 - 1) = v35;
      if ( v43 )
      {
        v37 = (*(_DWORD *)(v43 + 8))-- == 1;
        if ( v37 )
          sub_15D7BC0(v26, v43);
      }
      v27 += 2;
      v26 = *(_QWORD *)(a1 + 8);
    }
    while ( v27 != v140 );
    v25 = *(_DWORD *)(*(_QWORD *)v156 - 4LL);
    v60 = v156[0];
  }
  else
  {
    *(_QWORD *)v156 = 0;
    v60 = 0;
  }
  v61 = sub_15DC610(
          v26,
          (int)a3,
          v25,
          v60,
          v23,
          v24,
          v121,
          v123,
          v125,
          v127,
          v130,
          v134,
          v136,
          (int)v140,
          (int)v145,
          v150);
  v62 = v61;
  if ( v61 )
    ++*(_DWORD *)(v61 + 8);
  v63 = *v132;
  if ( *v132 )
    ++*(_DWORD *)(v63 + 8);
  v64 = *(unsigned __int64 **)(a1 + 248);
  if ( v64 )
  {
    v65 = *((_DWORD *)v64 - 1);
    if ( v65 == *((_DWORD *)v64 - 2) )
    {
      v90 = (3 * v65 + 1) >> 1;
      v91 = 8 * v90 + 8;
      if ( 8 * v65 + 8 >= (unsigned int)v91 || v65 >= v90 )
      {
        v119 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v161, "Overflow encountered when expanding vector");
        *v119 = (char *)off_1C63128;
        sub_2333C0(v119 + 1, &v161);
        sub_233E40((__int64)&v161);
        __cxa_throw(v119, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v155 = (3 * v65 + 1) >> 1;
      v92 = (unsigned int *)sub_186B300(v64 - 1, v91);
      v64 = (unsigned __int64 *)(v92 + 2);
      *(_QWORD *)(a1 + 248) = v92 + 2;
      *v92 = v155;
      LODWORD(v92) = v92[1];
      v68 = &v64[(unsigned int)v92];
      v67 = (_DWORD)v92 + 1;
    }
    else
    {
      v66 = v65;
      v67 = v65 + 1;
      v68 = &v64[v66];
    }
  }
  else
  {
    v114 = (_QWORD *)sub_186B270(0x18u);
    *v114 = 2;
    v67 = 1;
    v64 = v114 + 1;
    *(_QWORD *)(a1 + 248) = v64;
    v68 = v64;
  }
  *v68 = v63;
  *((_DWORD *)v64 - 1) = v67;
  ++a3[2];
  v69 = *((_DWORD *)v64 - 1);
  v70 = *((_DWORD *)v64 - 2);
  if ( v69 == v70 )
  {
    v98 = (3 * v69 + 1) >> 1;
    v99 = 8 * v98 + 8;
    if ( 8 * v69 + 8 >= v99 || v69 >= v98 )
    {
      v116 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v161, "Overflow encountered when expanding vector");
      *v116 = (char *)off_1C63128;
      sub_2333C0(v116 + 1, &v161);
      sub_233E40((__int64)&v161);
      __cxa_throw(v116, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v100 = (unsigned int *)sub_186B300(v64 - 1, v99);
    v64 = (unsigned __int64 *)(v100 + 2);
    *v100 = v98;
    v70 = v98;
    v69 = v100[1];
    *(_QWORD *)(a1 + 248) = v64;
  }
  v71 = v69;
  v72 = v69 + 1;
  v64[v71] = (unsigned __int64)a3;
  *((_DWORD *)v64 - 1) = v72;
  if ( v62 )
  {
    ++*(_DWORD *)(v62 + 8);
    v72 = *((_DWORD *)v64 - 1);
    v70 = *((_DWORD *)v64 - 2);
  }
  if ( v72 == v70 )
  {
    v101 = (3 * v72 + 1) >> 1;
    v102 = 8 * v101 + 8;
    if ( 8 * v72 + 8 >= v102 || v72 >= v101 )
    {
      v115 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v161, "Overflow encountered when expanding vector");
      *v115 = (char *)off_1C63128;
      sub_2333C0(v115 + 1, &v161);
      sub_233E40((__int64)&v161);
      __cxa_throw(v115, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v103 = (unsigned int *)sub_186B300(v64 - 1, v102);
    v64 = (unsigned __int64 *)(v103 + 2);
    *v103 = v101;
    v72 = v103[1];
    *(_QWORD *)(a1 + 248) = v64;
  }
  v64[v72] = v62;
  *((_DWORD *)v64 - 1) = v72 + 1;
  if ( v147 )
  {
    if ( v62 )
      ++*(_DWORD *)(v62 + 8);
    v73 = *v147;
    if ( *v147 )
    {
      v74 = v147[1];
      v37 = (*(_DWORD *)(v73 + 8))-- == 1;
      if ( v37 )
        sub_15D7BC0(v74, v73);
    }
    *v147 = v62;
  }
  sub_14EC390(a1 + 56, *v132, v62, v138);
  v75 = *v132;
  v76 = a3[3];
  v77 = *(_DWORD *)(*v132 + 12);
  *v152 = v62;
  v78 = (v76 - v77) ^ (v77 << 8);
  v79 = *(unsigned int *)(a1 + 224);
  v80 = ((v78 ^ ((v77 - v78) << 16)) + v78 - v77) ^ ((v77 - v78) << 10);
  if ( 3 * (int)v79 < (unsigned int)(4 * (*(_DWORD *)(a1 + 228) + *(_DWORD *)(a1 + 232))) )
  {
    v139 = ((v78 ^ ((v77 - v78) << 16)) + v78 - v77) ^ ((v77 - v78) << 10);
    v142 = v75;
    v149 = 2 * v79;
    v154 = 32LL * (unsigned int)(2 * v79);
    v104 = sub_186B270(v154);
    v105 = v149;
    v75 = v142;
    v81 = v104;
    v80 = v139;
    if ( v149 )
    {
      v143 = v149 - 1;
      if ( v149 - 1 <= 2 )
      {
        *(_DWORD *)(v104 + 24) = 0;
        *(_DWORD *)(v104 + 56) = 0;
        *(_OWORD *)v104 = 0;
        *(_OWORD *)(v104 + 32) = 0;
      }
      else
      {
        v106 = v104 + ((unsigned __int64)(v149 >> 2) << 7);
        do
        {
          *(_DWORD *)(v104 + 24) = 0;
          v104 += 128;
          *(_OWORD *)(v104 - 128) = 0;
          *(_OWORD *)(v104 - 96) = 0;
          *(_OWORD *)(v104 - 64) = 0;
          *(_OWORD *)(v104 - 32) = 0;
          *(_DWORD *)(v104 - 72) = 0;
          *(_DWORD *)(v104 - 40) = 0;
          *(_DWORD *)(v104 - 8) = 0;
        }
        while ( v106 != v104 );
        v107 = v81 + 32LL * (v149 & 0xFFFFFFFC);
        if ( (v149 & 2) != 0 )
        {
          *(_DWORD *)(v107 + 24) = 0;
          *(_DWORD *)(v107 + 56) = 0;
          *(_OWORD *)v107 = 0;
          *(_OWORD *)(v107 + 32) = 0;
          if ( (v149 & 2) != 2 )
          {
            *(_DWORD *)(v107 + 88) = 0;
            *(_OWORD *)(v107 + 64) = 0;
          }
        }
      }
    }
    else
    {
      v143 = -1;
    }
    v108 = *(const __m128i **)(a1 + 216);
    v148 = v143;
    v109 = (__m128i *)&v108[2 * *(unsigned int *)(a1 + 224)];
    v82 = (__m128i *)(v81 + v154);
    if ( v108 != v109 )
    {
      do
      {
        if ( v108->m128i_i64[0] > 1uLL )
        {
          v110 = 32LL * (v108[1].m128i_i32[2] & (unsigned int)v143);
          v111 = (__m128i *)(v81 + v110);
          if ( v154 == v110 )
          {
LABEL_131:
            if ( (__m128i *)v81 == v111 )
            {
LABEL_144:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v112 = *(__int64 **)v156;
            v113 = (__m128i *)v81;
            while ( v113->m128i_i64[0] )
            {
              v113 += 2;
              if ( v111 == v113 )
                goto LABEL_144;
            }
          }
          else
          {
            v112 = *(__int64 **)v156;
            v113 = (__m128i *)(v81 + v110);
            while ( v113->m128i_i64[0] )
            {
              v113 += 2;
              if ( v82 == v113 )
                goto LABEL_131;
            }
          }
          *(_QWORD *)v156 = v112;
          *v113 = _mm_loadu_si128(v108);
          v113[1] = _mm_loadu_si128(v108 + 1);
        }
        v108 += 2;
      }
      while ( v109 != v108 );
      v109 = *(__m128i **)(a1 + 216);
    }
    if ( v109 )
    {
      v133 = v105;
      v144 = v75;
      sub_186B220(v109);
      v105 = v133;
      v82 = (__m128i *)(v81 + v154);
      v80 = v139;
      v75 = v144;
    }
    *(_QWORD *)(a1 + 216) = v81;
    *(_DWORD *)(a1 + 224) = v105;
    *(_DWORD *)(a1 + 232) = 0;
  }
  else
  {
    v81 = *(_QWORD *)(a1 + 216);
    v154 = 32 * v79;
    v148 = v79 - 1;
    v82 = (__m128i *)(v81 + 32 * v79);
  }
  v83 = _mm_unpacklo_epi64((__m128i)v75, (__m128i)(unsigned __int64)a3);
  v84 = 32LL * (v80 & (unsigned int)v148);
  v85 = v81 + v84;
  if ( v84 == v154 )
  {
    v87 = nullptr;
LABEL_81:
    if ( v85 == v81 )
    {
LABEL_140:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v89 = *(_QWORD *)v81;
      if ( *(_QWORD *)v81 > 1u )
      {
        if ( *(_DWORD *)(v81 + 24) == v80 && v75 == v89 && a3 == *(_DWORD **)(v81 + 8) )
        {
          result = (__int64)v152;
          *(_DWORD *)(v81 + 24) = v80;
          *(_QWORD *)(v81 + 16) = v152;
          *(__m128i *)v81 = v83;
          goto LABEL_94;
        }
      }
      else
      {
        if ( !v89 )
        {
          if ( !v87 )
          {
            v87 = (__m128i *)v81;
            goto LABEL_143;
          }
LABEL_142:
          --*(_DWORD *)(a1 + 232);
          goto LABEL_143;
        }
        v87 = (__m128i *)v81;
      }
      v81 += 32;
      if ( v85 == v81 )
        goto LABEL_140;
    }
  }
  v86 = v81 + v84;
  v87 = nullptr;
  while ( 1 )
  {
    while ( 1 )
    {
      v88 = *(_QWORD *)v86;
      if ( *(_QWORD *)v86 <= 1u )
        break;
      if ( *(_DWORD *)(v86 + 24) == v80 && v75 == v88 && a3 == *(_DWORD **)(v86 + 8) )
      {
        result = (__int64)v152;
        *(_DWORD *)(v86 + 24) = v80;
        *(_QWORD *)(v86 + 16) = v152;
        *(__m128i *)v86 = v83;
        goto LABEL_94;
      }
      v86 += 32;
      if ( (__m128i *)v86 == v82 )
        goto LABEL_81;
    }
    if ( !v88 )
      break;
    v87 = (__m128i *)v86;
    v86 += 32;
    if ( (__m128i *)v86 == v82 )
      goto LABEL_81;
  }
  if ( v87 )
    goto LABEL_142;
  v87 = (__m128i *)v86;
LABEL_143:
  result = (__int64)v152;
  *v87 = v83;
  v87[1].m128i_i32[2] = v80;
  v87[1].m128i_i64[0] = (__int64)v152;
  ++*(_DWORD *)(a1 + 228);
LABEL_94:
  if ( v62 )
  {
    v37 = (*(_DWORD *)(v62 + 8))-- == 1;
    if ( v37 )
      result = sub_15D7BC0(v26, v62);
  }
  v93 = *(__int64 **)v156;
  if ( *(_QWORD *)v156 )
  {
    v94 = *(_QWORD *)v156 + 8LL * *(unsigned int *)(*(_QWORD *)v156 - 4LL);
    if ( *(_QWORD *)v156 < v94 )
    {
      do
      {
        while ( 1 )
        {
          v95 = *v93;
          if ( *v93 )
          {
            v37 = (*(_DWORD *)(v95 + 8))-- == 1;
            if ( v37 )
              break;
          }
          if ( (unsigned __int64)++v93 >= v94 )
            return sub_186B220((void *)(*(_QWORD *)v156 - 8LL));
        }
        ++v93;
        sub_15D7BC0(v129, v95);
      }
      while ( (unsigned __int64)v93 < v94 );
    }
    return sub_186B220((void *)(*(_QWORD *)v156 - 8LL));
  }
  return result;
}

