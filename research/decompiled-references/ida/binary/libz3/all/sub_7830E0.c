__int64 __fastcall sub_7830E0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const __m128i **a5,
        __int64 a6,
        _Unwind_Exception *a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  const __m128i *v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned int v17; // r15d
  __int64 v18; // r14
  unsigned int v19; // r13d
  size_t v20; // rsi
  unsigned int *v21; // rdx
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rax
  unsigned int v33; // r15d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned int v37; // r15d
  __int64 *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // r8
  bool v41; // zf
  unsigned int v42; // r15d
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r15
  __int64 *v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // r8
  int v49; // eax
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // rdx
  int **v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // r13
  __int64 v56; // r14
  __int64 v57; // rax
  unsigned int v58; // r12d
  __int64 *v59; // r11
  unsigned int v60; // r12d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r14
  unsigned int v64; // r12d
  __int64 *v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r12
  __int64 v70; // r14
  __int64 v71; // r12
  __int64 *v72; // rcx
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r15
  unsigned int v78; // r12d
  __int64 *v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // rax
  __int64 v83; // r15
  __int64 v84; // r12
  __int64 v85; // r12
  __int64 *v86; // rcx
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 *v89; // r13
  __int64 v90; // rdi
  __int64 v91; // r15
  __int64 v92; // rax
  unsigned int *v93; // r15
  __int64 v94; // rax
  unsigned int v95; // ecx
  _QWORD *v96; // r14
  __int64 v97; // rax
  __int64 v98; // r12
  __int64 v99; // rax
  __int64 v100; // r13
  int v101; // r12d
  char *v102; // rax
  __m128i *v103; // rdi
  unsigned __int64 v104; // rax
  __int64 v105; // rsi
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // r14
  __int64 v109; // r13
  __int64 *v110; // rax
  __int64 v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // r14
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // r13
  __int64 *v117; // rcx
  __int64 v118; // rsi
  __int64 v119; // rdi
  __int64 v120; // r14
  __int64 v121; // r13
  int v122; // eax
  int v123; // r8d
  int v124; // r9d
  __int64 (__fastcall *v125)(__int64); // rax
  const void *v126; // r15
  void *v127; // rdi
  __int64 *v128; // rbx
  __int64 *v129; // r12
  unsigned __int64 v130; // r15
  __int64 v131; // rsi
  __int64 v132; // rdi
  __int64 result; // rax
  unsigned __int64 v134; // rax
  __int64 v135; // r8
  __int64 v136; // r15
  int v137; // eax
  int v138; // r14d
  int v139; // eax
  int v140; // r8d
  int v141; // r9d
  unsigned __int64 v142; // r14
  __int64 *v143; // r13
  __int64 v144; // rsi
  __int64 v145; // rdi
  _QWORD *v146; // rax
  void *v147; // rax
  __int64 v148; // rax
  __m128i *v149; // r13
  __int64 v150; // rdx
  char **v151; // r15
  const char *v152; // rax
  char **v153; // r15
  char **v154; // r15
  const char *v155; // rax
  char **v156; // rbx
  char **v157; // r12
  char **exception; // rbx
  char **v159; // r12
  const char *v160; // rax
  int v161; // [rsp-10h] [rbp-150h]
  int v162; // [rsp-8h] [rbp-148h]
  _Unwind_Exception *v163; // [rsp+0h] [rbp-140h]
  int v164; // [rsp+0h] [rbp-140h]
  int v165; // [rsp+0h] [rbp-140h]
  int v166; // [rsp+0h] [rbp-140h]
  int v167; // [rsp+0h] [rbp-140h]
  __int64 v168; // [rsp+8h] [rbp-138h]
  int v169; // [rsp+8h] [rbp-138h]
  int v170; // [rsp+8h] [rbp-138h]
  int v171; // [rsp+8h] [rbp-138h]
  int v172; // [rsp+8h] [rbp-138h]
  __int64 *v173; // [rsp+10h] [rbp-130h]
  int v174; // [rsp+10h] [rbp-130h]
  int v175; // [rsp+10h] [rbp-130h]
  int v176; // [rsp+10h] [rbp-130h]
  int v177; // [rsp+10h] [rbp-130h]
  int v178; // [rsp+10h] [rbp-130h]
  __int64 *v179; // [rsp+18h] [rbp-128h]
  int v180; // [rsp+18h] [rbp-128h]
  int v181; // [rsp+18h] [rbp-128h]
  int v182; // [rsp+18h] [rbp-128h]
  int v183[2]; // [rsp+18h] [rbp-128h]
  int v184; // [rsp+18h] [rbp-128h]
  __int64 v185; // [rsp+20h] [rbp-120h]
  int v186[2]; // [rsp+20h] [rbp-120h]
  int v187; // [rsp+20h] [rbp-120h]
  int *v188; // [rsp+20h] [rbp-120h]
  __m128i *v189; // [rsp+20h] [rbp-120h]
  int v190; // [rsp+20h] [rbp-120h]
  int v191; // [rsp+20h] [rbp-120h]
  int v192; // [rsp+20h] [rbp-120h]
  int v193; // [rsp+28h] [rbp-118h]
  char v194; // [rsp+28h] [rbp-118h]
  char v195; // [rsp+28h] [rbp-118h]
  char v196; // [rsp+28h] [rbp-118h]
  char v197; // [rsp+28h] [rbp-118h]
  void **p_ptr; // [rsp+30h] [rbp-110h]
  int v199; // [rsp+30h] [rbp-110h]
  __int64 *v200; // [rsp+30h] [rbp-110h]
  int v201; // [rsp+30h] [rbp-110h]
  int v202; // [rsp+30h] [rbp-110h]
  int v203[2]; // [rsp+30h] [rbp-110h]
  int v204; // [rsp+30h] [rbp-110h]
  const __m128i **v205; // [rsp+38h] [rbp-108h]
  int v206; // [rsp+38h] [rbp-108h]
  int v207; // [rsp+38h] [rbp-108h]
  int v208; // [rsp+38h] [rbp-108h]
  int v209; // [rsp+38h] [rbp-108h]
  int v210[2]; // [rsp+40h] [rbp-100h]
  int v211; // [rsp+40h] [rbp-100h]
  int v212[2]; // [rsp+40h] [rbp-100h]
  int v213[2]; // [rsp+40h] [rbp-100h]
  int v214[2]; // [rsp+40h] [rbp-100h]
  int v215; // [rsp+40h] [rbp-100h]
  int v216; // [rsp+40h] [rbp-100h]
  int v217; // [rsp+40h] [rbp-100h]
  int v218[2]; // [rsp+40h] [rbp-100h]
  __int64 v219; // [rsp+48h] [rbp-F8h]
  void *v220; // [rsp+48h] [rbp-F8h]
  int *v221; // [rsp+48h] [rbp-F8h]
  unsigned int v222; // [rsp+48h] [rbp-F8h]
  unsigned int v223; // [rsp+48h] [rbp-F8h]
  void *v224; // [rsp+48h] [rbp-F8h]
  unsigned int v225; // [rsp+48h] [rbp-F8h]
  void *v226; // [rsp+48h] [rbp-F8h]
  void *v227; // [rsp+48h] [rbp-F8h]
  int *v228; // [rsp+50h] [rbp-F0h] BYREF
  int v229; // [rsp+58h] [rbp-E8h] BYREF
  __int64 v230; // [rsp+60h] [rbp-E0h] BYREF
  __int64 *v231; // [rsp+68h] [rbp-D8h]
  int v232; // [rsp+70h] [rbp-D0h]
  int v233; // [rsp+78h] [rbp-C8h]
  void *ptr; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v235; // [rsp+88h] [rbp-B8h]
  __m128i v236; // [rsp+90h] [rbp-B0h] BYREF
  int v237; // [rsp+A0h] [rbp-A0h]
  void *v238; // [rsp+A8h] [rbp-98h]
  int v239; // [rsp+B0h] [rbp-90h]
  __int64 v240; // [rsp+B8h] [rbp-88h]

  v168 = a2;
  v193 = a4;
  v205 = a5;
  if ( !*(_DWORD *)(a2 + 3612) && *(_BYTE *)(a2 + 3184) )
    return sub_EDBA20(a4, *(_QWORD *)(*a1 + 864LL), 0, a7, a8, a9, a10, a11);
  v13 = *a5;
  v14 = (__int64)*a5;
  if ( (*(_BYTE *)(a4 + 123) & 4) != 0 )
  {
    if ( !v13 )
    {
      v14 = sub_186B270(0x68u);
      v148 = *a1;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 32) = v148;
      *(_QWORD *)(v14 + 88) = v148;
      *(_BYTE *)(v14 + 24) = 1;
      v149 = (__m128i *)*v205;
      *(_QWORD *)v14 = &off_1C545D8;
      *(_QWORD *)(v14 + 40) = 0;
      *(_DWORD *)(v14 + 48) = 0;
      *(_QWORD *)(v14 + 96) = 0;
      *(_DWORD *)(v14 + 8) = 1;
      *(_OWORD *)(v14 + 56) = 0;
      *(_OWORD *)(v14 + 72) = 0;
      if ( v149 )
      {
        v41 = v149->m128i_i32[2]-- == 1;
        if ( v41 )
        {
          (*(void (__fastcall **)(__m128i *))v149->m128i_i64[0])(v149);
          sub_186B220(v149);
        }
      }
      *v205 = (const __m128i *)v14;
    }
  }
  else if ( !v13 )
  {
    goto LABEL_5;
  }
  sub_7826B0(v14, a2, a3);
LABEL_5:
  v15 = *(_QWORD *)(a2 + 3296);
  v16 = (_QWORD *)a1[2];
  if ( v15 )
  {
    v17 = 2 * *(_DWORD *)(v15 - 4);
    if ( v16 )
    {
      v18 = *((unsigned int *)v16 - 1);
      if ( 2 * *(_DWORD *)(v15 - 4) >= (unsigned int)v18 )
        goto LABEL_8;
      v142 = (unsigned __int64)&v16[v18];
      v143 = &v16[v17];
      if ( (unsigned __int64)v143 < v142 )
        goto LABEL_170;
LABEL_174:
      LODWORD(v18) = *((_DWORD *)v16 - 1);
LABEL_8:
      if ( (unsigned int)v18 >= v17 )
      {
LABEL_165:
        *((_DWORD *)v16 - 1) = v17;
        goto LABEL_16;
      }
      goto LABEL_13;
    }
  }
  else
  {
    if ( !v16 )
      goto LABEL_16;
    v17 = *((_DWORD *)v16 - 1);
    if ( !v17 )
      goto LABEL_165;
    v150 = v17;
    v143 = (__int64 *)a1[2];
    v17 = 0;
    v142 = (unsigned __int64)&v16[v150];
    if ( (unsigned __int64)v16 >= v142 )
      goto LABEL_165;
    do
    {
LABEL_170:
      while ( 1 )
      {
        v144 = *v143;
        if ( *v143 )
        {
          v145 = a1[1];
          v41 = (*(_DWORD *)(v144 + 8))-- == 1;
          if ( v41 )
            break;
        }
        if ( (unsigned __int64)++v143 >= v142 )
          goto LABEL_173;
      }
      sub_15D7BC0(v145, v144);
      ++v143;
    }
    while ( (unsigned __int64)v143 < v142 );
LABEL_173:
    v16 = (_QWORD *)a1[2];
    if ( v16 )
      goto LABEL_174;
  }
  if ( !v17 )
    goto LABEL_16;
  LODWORD(v18) = 0;
  v146 = (_QWORD *)sub_186B270(0x18u);
  *v146 = 2;
  v16 = v146 + 1;
  a1[2] = v16;
LABEL_13:
  while ( 1 )
  {
    v22 = *((_DWORD *)v16 - 2);
    if ( v22 >= v17 )
      break;
    v19 = (3 * v22 + 1) >> 1;
    v20 = 8 * v19 + 8;
    if ( 8 * v22 + 8 >= (unsigned int)v20 || v22 >= v19 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &ptr);
      sub_233E40((__int64)&ptr);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v21 = (unsigned int *)sub_186B300(v16 - 1, v20);
    v16 = v21 + 2;
    a1[2] = v21 + 2;
    *v21 = v19;
  }
  *((_DWORD *)v16 - 1) = v17;
  v23 = 8LL * (unsigned int)v18;
  v24 = 8LL * v17;
  if ( v23 != v24 )
    memset(&v16[(unsigned __int64)v23 / 8], 0, v24 - v23);
LABEL_16:
  v25 = a1 + 1;
  sub_7E6B80(a3, a1 + 1);
  if ( *(_DWORD *)(v168 + 3612) )
  {
    v27 = **(unsigned int **)(v168 + 3856);
LABEL_19:
    if ( (_DWORD)v27 )
    {
      v28 = 4 * v27;
      v29 = v168;
      p_ptr = &ptr;
      v219 = 0;
      while ( 1 )
      {
        v30 = *a1;
        if ( !(unsigned __int8)sub_18290A0(*a1) )
        {
          v154 = (char **)__cxa_allocate_exception(0x28u);
          v155 = (const char *)sub_1829130(*a1);
          sub_24ABB0((__int64 *)&ptr, v155);
          v156 = v154;
          goto LABEL_192;
        }
        if ( a1[3] < (unsigned __int64)Z3_get_estimated_alloc_size_0(v30, v25) )
        {
          v156 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&ptr, off_1C7E178);
LABEL_192:
          *v156 = (char *)off_1C63670;
          sub_2333C0(v156 + 1, &ptr);
          sub_233E40((__int64)&ptr);
          __cxa_throw(v156, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
        }
        v31 = *(unsigned int *)(*(_QWORD *)(v29 + 3784) + v219);
        v32 = a1[2];
        v25 = *(_QWORD **)(v32 + 8 * v31);
        v33 = *(_DWORD *)(*(_QWORD *)(v29 + 3784) + v219);
        if ( !v25 )
          break;
LABEL_21:
        sub_EDBA20(v193, (int)v25, 0, v163, v168, (int)v173, (__int64)v179, v185);
        v219 += 4;
        if ( v219 == v28 )
          goto LABEL_46;
      }
      if ( *v205
        && (v34 = (*v205)[6].m128i_i64[0], v35 = (unsigned int)v31 >> 1, v34)
        && (unsigned int)v35 < *(_DWORD *)(v34 - 4)
        && (v36 = *(_QWORD *)(v34 + 8 * v35)) != 0 )
      {
        v37 = v33 & 0xFFFFFFFE;
      }
      else
      {
        *(_QWORD *)v210 = *a1;
        *(_QWORD *)v186 = *(_QWORD *)(*a1 + 840LL);
        sub_180C5A0(p_ptr, 0);
        v49 = sub_15E3D10(
                v210[0],
                (int)p_ptr,
                (int)&qword_18D6CD0,
                0,
                0,
                v186[0],
                1,
                v162,
                (int)v163,
                v168,
                (int)v173,
                (int)v179,
                v186[0],
                v193,
                (char)p_ptr,
                (int)v205,
                v210[0],
                v219,
                (int)v228,
                v229,
                v230,
                (int)v231,
                v232,
                v233,
                (int)ptr,
                v235,
                v236.m128i_i32[0],
                v236.m128i_i32[2],
                v237,
                v238,
                v239,
                v240);
        v36 = sub_15DC610(v211, v49, 0, 0, v50, v51, v164, v169, v174, v180, v187, v194, v199, v206, v211, v220);
        if ( *v205 )
        {
          *(_QWORD *)v212 = v36;
          sub_781420(*v205, v33 >> 1, v36, 1);
          v36 = *(_QWORD *)v212;
        }
        v32 = a1[2];
        v37 = v33 & 0xFFFFFFFE;
        if ( !v36 )
          goto LABEL_31;
      }
      ++*(_DWORD *)(v36 + 8);
LABEL_31:
      v38 = (__int64 *)(8LL * v37 + v32);
      v39 = *v38;
      if ( *v38 )
      {
        v40 = a1[1];
        v41 = (*(_DWORD *)(v39 + 8))-- == 1;
        if ( v41 )
        {
          v185 = v36;
          sub_15D7BC0(v40, v39);
          v38 = (__int64 *)(a1[2] + 8LL * v37);
          v36 = v185;
        }
      }
      *v38 = v36;
      v42 = v37 ^ 1;
      v43 = sub_15EC2C0(*a1, v36);
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      v44 = a1[2];
      v45 = 8LL * v42;
      v46 = (__int64 *)(v44 + v45);
      v47 = *(_QWORD *)(v44 + v45);
      if ( v47 )
      {
        v48 = a1[1];
        v41 = (*(_DWORD *)(v47 + 8))-- == 1;
        if ( v41 )
        {
          *(_QWORD *)v218 = v43;
          sub_15D7BC0(v48, v47);
          v44 = a1[2];
          v43 = *(_QWORD *)v218;
          v46 = (__int64 *)(v44 + v45);
        }
      }
      *v46 = v43;
      v25 = *(_QWORD **)(v44 + 8 * v31);
      goto LABEL_21;
    }
    goto LABEL_46;
  }
  v26 = *(_QWORD *)(v168 + 3784);
  if ( v26 )
  {
    v27 = *(unsigned int *)(v26 - 4);
    goto LABEL_19;
  }
LABEL_46:
  v52 = *((unsigned __int8 *)a1 + 32);
  v53 = &v228;
  v228 = nullptr;
  sub_11BA360(v168, &v228, v52, 0);
  if ( v228 )
  {
    *(_QWORD *)v213 = &v228[2 * *(v228 - 1)];
    if ( *(int **)v213 != v228 )
    {
      v221 = v228;
      v188 = &v229;
      while ( 1 )
      {
        v54 = *a1;
        if ( !(unsigned __int8)sub_18290A0(*a1) )
        {
          v151 = (char **)__cxa_allocate_exception(0x28u);
          v152 = (const char *)sub_1829130(*a1);
          sub_24ABB0((__int64 *)&ptr, v152);
          *v151 = (char *)off_1C63670;
          sub_2333C0(v151 + 1, &ptr);
          sub_233E40((__int64)&ptr);
          __cxa_throw(v151, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
        }
        if ( a1[3] < (unsigned __int64)Z3_get_estimated_alloc_size_0(v54, v53) )
        {
          v153 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&ptr, off_1C7E178);
          *v153 = (char *)off_1C63670;
          sub_2333C0(v153 + 1, &ptr);
          sub_233E40((__int64)&ptr);
          __cxa_throw(v153, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
        }
        v55 = *a1;
        v56 = (unsigned int)v221[1];
        v57 = a1[2];
        v58 = v221[1];
        if ( !*(_QWORD *)(v57 + 8 * v56) )
          break;
LABEL_53:
        v59 = (__int64 *)(unsigned int)*v221;
        v60 = *v221;
        if ( !*(_QWORD *)(v57 + 8LL * (_QWORD)v59) )
        {
          if ( *v205 )
          {
            v61 = (*v205)[6].m128i_i64[0];
            v62 = (unsigned int)v59 >> 1;
            if ( v61 )
            {
              if ( (unsigned int)v62 < *(_DWORD *)(v61 - 4) )
              {
                v63 = *(_QWORD *)(v61 + 8 * v62);
                if ( v63 )
                {
                  v64 = v60 & 0xFFFFFFFE;
                  goto LABEL_59;
                }
              }
            }
          }
          v177 = *v221;
          *(_QWORD *)v203 = *a1;
          *(_QWORD *)v183 = *(_QWORD *)(*a1 + 840LL);
          sub_180C5A0(&ptr, 0);
          v138 = v203[0];
          v139 = sub_15E3D10(
                   v203[0],
                   (int)&ptr,
                   (int)&qword_18D6CD0,
                   0,
                   0,
                   v183[0],
                   1,
                   v162,
                   (int)v163,
                   v168,
                   v177,
                   v183[0],
                   (int)v188,
                   v193,
                   v203[0],
                   (int)v205,
                   v213[0],
                   (int)v221,
                   (int)v228,
                   v229,
                   v230,
                   (int)v231,
                   v232,
                   v233,
                   (int)ptr,
                   v235,
                   v236.m128i_i32[0],
                   v236.m128i_i32[2],
                   v237,
                   v238,
                   v239,
                   v240);
          v63 = sub_15DC610(v138, v139, 0, 0, v140, v141, v167, v172, v178, v184, v192, v197, v204, v209, v217, v227);
          v59 = v173;
          if ( *v205 )
          {
            sub_781420(*v205, v60 >> 1, v63, 1);
            v59 = v173;
          }
          v57 = a1[2];
          v64 = v60 & 0xFFFFFFFE;
          if ( v63 )
LABEL_59:
            ++*(_DWORD *)(v63 + 8);
          v65 = (__int64 *)(8LL * v64 + v57);
          v66 = *v65;
          if ( *v65 )
          {
            v67 = a1[1];
            v41 = (*(_DWORD *)(v66 + 8))-- == 1;
            if ( v41 )
            {
              v179 = v59;
              sub_15D7BC0(v67, v66);
              LOBYTE(v59) = (_BYTE)v179;
              v65 = (__int64 *)(a1[2] + 8LL * v64);
            }
          }
          *v65 = v63;
          LOBYTE(p_ptr) = (_BYTE)v59;
          v68 = sub_15EC2C0(*a1, v63);
          v69 = v64 ^ 1;
          v70 = v68;
          if ( v68 )
            ++*(_DWORD *)(v68 + 8);
          v71 = 8 * v69;
          v72 = (__int64 *)(a1[2] + v71);
          v73 = *v72;
          if ( *v72 )
          {
            v74 = a1[1];
            v41 = (*(_DWORD *)(v73 + 8))-- == 1;
            if ( v41 )
            {
              sub_15D7BC0(v74, v73);
              v72 = (__int64 *)(a1[2] + v71);
            }
          }
          *v72 = v70;
        }
        v53 = (int **)sub_15E1B70(v55);
        sub_EDBA20(v193, (int)v53, 0, v163, v168, (int)v173, (__int64)v179, (__int64)v188);
        v221 += 2;
        if ( *(int **)v213 == v221 )
          goto LABEL_84;
      }
      if ( *v205
        && (v75 = (*v205)[6].m128i_i64[0], v76 = (unsigned int)v56 >> 1, v75)
        && (unsigned int)v76 < *(_DWORD *)(v75 - 4)
        && (v77 = *(_QWORD *)(v75 + 8 * v76)) != 0 )
      {
        v78 = v58 & 0xFFFFFFFE;
      }
      else
      {
        v136 = *(_QWORD *)(v55 + 840);
        sub_180C5A0(v188, 0);
        v137 = sub_15E3D10(
                 v55,
                 (int)v188,
                 (int)&qword_18D6CD0,
                 0,
                 0,
                 v136,
                 1,
                 v162,
                 (int)v163,
                 v168,
                 (int)v173,
                 (int)v179,
                 (int)v188,
                 v193,
                 (char)p_ptr,
                 (int)v205,
                 v213[0],
                 (int)v221,
                 (int)v228,
                 v229,
                 v230,
                 (int)v231,
                 v232,
                 v233,
                 (int)ptr,
                 v235,
                 v236.m128i_i32[0],
                 v236.m128i_i32[2],
                 v237,
                 v238,
                 v239,
                 v240);
        v77 = sub_15DC610(v55, v137, 0, 0, v161, v162, v166, v171, v176, v182, v191, v196, v202, v208, v216, v226);
        if ( *v205 )
          sub_781420(*v205, v58 >> 1, v77, 1);
        v57 = a1[2];
        v78 = v58 & 0xFFFFFFFE;
        if ( !v77 )
          goto LABEL_75;
      }
      ++*(_DWORD *)(v77 + 8);
LABEL_75:
      v79 = (__int64 *)(8LL * v78 + v57);
      v80 = *v79;
      if ( *v79 )
      {
        v81 = a1[1];
        v41 = (*(_DWORD *)(v80 + 8))-- == 1;
        if ( v41 )
        {
          p_ptr = (void **)(8LL * v78);
          sub_15D7BC0(v81, v80);
          v79 = (__int64 *)((char *)p_ptr + a1[2]);
        }
      }
      *v79 = v77;
      v82 = sub_15EC2C0(*a1, v77);
      v83 = v82;
      v84 = v78 ^ 1;
      if ( v82 )
        ++*(_DWORD *)(v82 + 8);
      v57 = a1[2];
      v85 = 8 * v84;
      v86 = (__int64 *)(v57 + v85);
      v87 = *(_QWORD *)(v57 + v85);
      if ( v87 )
      {
        v88 = a1[1];
        v41 = (*(_DWORD *)(v87 + 8))-- == 1;
        if ( v41 )
        {
          sub_15D7BC0(v88, v87);
          v57 = a1[2];
          v86 = (__int64 *)(v57 + v85);
        }
      }
      *v86 = v83;
      goto LABEL_53;
    }
  }
LABEL_84:
  v189 = &v236;
  ptr = &v236;
  v235 = 0x1000000000LL;
  v89 = *(__int64 **)(v168 + 3224);
  if ( !v89 )
    goto LABEL_129;
  v173 = &v89[*((unsigned int *)v89 - 1)];
  if ( v89 == v173 )
    goto LABEL_129;
  v200 = *(__int64 **)(v168 + 3224);
  v179 = &v230;
  do
  {
    v90 = *a1;
    v91 = *v200;
    if ( !(unsigned __int8)sub_18290A0(*a1) )
    {
      v159 = (char **)__cxa_allocate_exception(0x28u);
      v160 = (const char *)sub_1829130(*a1);
      sub_24ABB0(&v230, v160);
      *v159 = (char *)off_1C63670;
      sub_2333C0(v159 + 1, &v230);
      sub_233E40((__int64)&v230);
      __cxa_throw(v159, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    if ( a1[3] < (unsigned __int64)Z3_get_estimated_alloc_size_0(v90, v53) )
    {
      v157 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v230, off_1C7E178);
      *v157 = (char *)off_1C63670;
      sub_2333C0(v157 + 1, &v230);
      sub_233E40((__int64)&v230);
      __cxa_throw(v157, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    LODWORD(v235) = 0;
    v92 = v91;
    v93 = (unsigned int *)(v91 + 20);
    v94 = *(unsigned int *)(v92 + 4);
    *(_QWORD *)v214 = &v93[v94];
    if ( v94 * 4 )
    {
      v95 = 0;
      while ( 1 )
      {
        v99 = a1[2];
        v222 = *v93;
        v98 = *v93;
        v100 = *(_QWORD *)(v99 + 8 * v98);
        if ( !v100 )
          break;
LABEL_94:
        if ( v95 < HIDWORD(v235) )
        {
          v96 = ptr;
        }
        else
        {
          v101 = 2 * HIDWORD(v235);
          v102 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v235)));
          v95 = v235;
          v103 = (__m128i *)ptr;
          v96 = v102;
          if ( (_DWORD)v235 )
          {
            if ( (unsigned int)(v235 - 1) <= 2 || v102 == (char *)ptr + 8 )
            {
              v134 = 0;
              v135 = 8LL * (unsigned int)v235;
              do
              {
                v96[v134 / 8] = v103->m128i_i64[v134 / 8];
                v134 += 8LL;
              }
              while ( v134 != v135 );
            }
            else
            {
              v104 = 0;
              v105 = 16LL * ((unsigned int)v235 >> 1);
              do
              {
                *(__m128i *)&v96[v104 / 8] = _mm_loadu_si128(&v103[v104 / 0x10]);
                v104 += 16LL;
              }
              while ( v104 != v105 );
              if ( (v95 & 1) != 0 )
                v96[v95 & 0xFFFFFFFE] = v103->m128i_i64[v95 & 0xFFFFFFFE];
            }
          }
          if ( v103 != v189 && v103 )
          {
            sub_186B220(v103);
            v95 = v235;
          }
          ptr = v96;
          HIDWORD(v235) = v101;
        }
        v97 = v95++;
        ++v93;
        v96[v97] = v100;
        LODWORD(v235) = v95;
        if ( *(unsigned int **)v214 == v93 )
          goto LABEL_125;
      }
      if ( *v205
        && (v106 = (*v205)[6].m128i_i64[0], v107 = v222 >> 1, v106)
        && (unsigned int)v107 < *(_DWORD *)(v106 - 4)
        && (v108 = *(_QWORD *)(v106 + 8 * v107)) != 0 )
      {
        v223 = v222 & 0xFFFFFFFE;
      }
      else
      {
        v120 = *a1;
        v121 = *(_QWORD *)(*a1 + 840LL);
        sub_180C5A0(v179, 0);
        v122 = sub_15E3D10(
                 v120,
                 (int)v179,
                 (int)&qword_18D6CD0,
                 0,
                 0,
                 v121,
                 1,
                 v162,
                 (int)v163,
                 v168,
                 (int)v173,
                 (int)v179,
                 (int)v189,
                 v193,
                 (char)v200,
                 (int)v205,
                 v214[0],
                 v222,
                 (int)v228,
                 v229,
                 v230,
                 (int)v231,
                 v232,
                 v233,
                 (int)ptr,
                 v235,
                 v236.m128i_i32[0],
                 v236.m128i_i32[2],
                 v237,
                 v238,
                 v239,
                 v240);
        v108 = sub_15DC610(v120, v122, 0, 0, v123, v124, v165, v170, v175, v181, v190, v195, v201, v207, v215, v224);
        if ( *v205 )
          sub_781420(*v205, v225 >> 1, v108, 1);
        v223 = v225 & 0xFFFFFFFE;
        v99 = a1[2];
        if ( !v108 )
          goto LABEL_112;
      }
      ++*(_DWORD *)(v108 + 8);
LABEL_112:
      v109 = 8LL * v223;
      v110 = (__int64 *)(v109 + v99);
      v111 = *v110;
      if ( *v110 )
      {
        v112 = a1[1];
        v41 = (*(_DWORD *)(v111 + 8))-- == 1;
        if ( v41 )
        {
          sub_15D7BC0(v112, v111);
          v110 = (__int64 *)(v109 + a1[2]);
        }
      }
      *v110 = v108;
      v113 = sub_15EC2C0(*a1, v108);
      v114 = v223 ^ 1;
      if ( v113 )
        ++*(_DWORD *)(v113 + 8);
      v115 = a1[2];
      v116 = 8 * v114;
      v117 = (__int64 *)(v115 + 8 * v114);
      v118 = *v117;
      if ( *v117 )
      {
        v119 = a1[1];
        v41 = (*(_DWORD *)(v118 + 8))-- == 1;
        if ( v41 )
        {
          sub_15D7BC0(v119, v118);
          v115 = a1[2];
          v117 = (__int64 *)(v115 + v116);
        }
      }
      *v117 = v113;
      v95 = v235;
      v100 = *(_QWORD *)(v115 + 8 * v98);
      goto LABEL_94;
    }
LABEL_125:
    v53 = (int **)sub_15E1AF0(*a1);
    sub_EDBA20(v193, (int)v53, 0, v163, v168, (int)v173, (__int64)v179, (__int64)v189);
    ++v200;
  }
  while ( v173 != v200 );
  if ( ptr != v189 && ptr )
    sub_186B220(ptr);
LABEL_129:
  v125 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v168 + 88LL);
  if ( v125 == sub_782AB0 )
    v126 = *(const void **)(v168 + 528);
  else
    v126 = (const void *)v125(v168);
  if ( v126 )
  {
    v235 = (__int64)a1;
    v231 = nullptr;
    ptr = v205;
    v230 = *a1;
    v236 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C54630), (__m128i)(unsigned __int64)&sub_782EE0);
    v127 = __dynamic_cast(
             v126,
             (const struct __class_type_info *)&`typeinfo for'sat::extension,
             (const struct __class_type_info *)&`typeinfo for'pb::solver,
             0);
    if ( v127 )
    {
      (*(void (__fastcall **)(void *, void **, __int64 *))(*(_QWORD *)v127 + 632LL))(v127, &ptr, &v230);
    }
    else
    {
      v147 = __dynamic_cast(
               v126,
               (const struct __class_type_info *)&`typeinfo for'sat::extension,
               (const struct __class_type_info *)&`typeinfo for'euf::solver,
               0);
      (*(void (__fastcall **)(void *, void **, __int64 *))(*(_QWORD *)v147 + 464LL))(v147, &ptr, &v230);
    }
    v128 = v231;
    if ( v231 )
    {
      v129 = &v231[*((unsigned int *)v231 - 1)];
      if ( v129 == v231 )
        goto LABEL_145;
      do
        sub_EDBA20(v193, *v128++, 0, v163, v168, (int)v173, (__int64)v179, (__int64)v189);
      while ( v129 != v128 );
      v128 = v231;
      if ( v231 )
      {
        if ( v231 >= &v231[*((unsigned int *)v231 - 1)] )
          goto LABEL_145;
        v130 = (unsigned __int64)&v231[*((unsigned int *)v231 - 1)];
        do
        {
          while ( 1 )
          {
            v131 = *v128;
            if ( *v128 )
            {
              v132 = v230;
              v41 = (*(_DWORD *)(v131 + 8))-- == 1;
              if ( v41 )
                break;
            }
            if ( (unsigned __int64)++v128 >= v130 )
              goto LABEL_144;
          }
          sub_15D7BC0(v132, v131);
          ++v128;
        }
        while ( (unsigned __int64)v128 < v130 );
LABEL_144:
        v128 = v231;
        if ( v231 )
LABEL_145:
          sub_186B220(v128 - 1);
      }
    }
    if ( v236.m128i_i64[0] )
      ((void (__fastcall *)(void **, void **, __int64))v236.m128i_i64[0])(&ptr, &ptr, 3);
  }
  result = (__int64)v228;
  if ( v228 )
    return sub_186B220(v228 - 2);
  return result;
}

