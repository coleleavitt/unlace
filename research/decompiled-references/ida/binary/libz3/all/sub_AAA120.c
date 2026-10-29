__int64 *__fastcall sub_AAA120(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        const char **a8,
        __int64 a9,
        __int64 a10)
{
  char **v10; // r14
  char **v11; // rbp
  char **exception; // rbp
  char **v13; // rbp
  __int64 v15; // rbp
  __int64 v17; // r13
  _OWORD *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  unsigned int *v23; // r13
  unsigned int *v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // r15
  int v27; // edx
  bool v28; // zf
  __int64 *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 *v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // ecx
  size_t v36; // rsi
  unsigned int v37; // r15d
  unsigned int *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 v41; // r13
  int v42; // eax
  __int64 *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 *v47; // rcx
  __int64 v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  __int64 *v55; // rbx
  unsigned __int64 v56; // rbp
  __int64 v57; // rsi
  __int64 *v58; // rbx
  unsigned __int64 v59; // rbp
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 *v62; // rbx
  unsigned __int64 v63; // rbp
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 *v66; // rbx
  unsigned __int64 v67; // rbp
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 *result; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  unsigned int v73; // ebp
  size_t v74; // rsi
  unsigned int *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r13
  __int64 v78; // rax
  __int64 v79; // rbp
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 *v82; // rdx
  unsigned int v83; // eax
  __int64 v84; // rsi
  int v85; // eax
  __int64 *v86; // rsi
  unsigned int v87; // eax
  __int64 v88; // rcx
  int v89; // edx
  unsigned int v90; // r8d
  size_t v91; // rsi
  _DWORD *v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rbp
  __int64 *v95; // rdx
  unsigned int v96; // eax
  __int64 v97; // rcx
  int v98; // eax
  __int64 *v99; // rcx
  unsigned int v100; // ebp
  size_t v101; // rsi
  unsigned int *v102; // rax
  __int64 v103; // rcx
  _QWORD *v104; // rax
  _QWORD *v105; // rdx
  void *v106; // [rsp+0h] [rbp-378h]
  __int64 v107; // [rsp+8h] [rbp-370h]
  __int64 v108; // [rsp+8h] [rbp-370h]
  __int64 v109; // [rsp+28h] [rbp-350h]
  __int64 v111; // [rsp+38h] [rbp-340h]
  int v112; // [rsp+40h] [rbp-338h]
  int v113; // [rsp+48h] [rbp-330h]
  __int64 v114; // [rsp+50h] [rbp-328h] BYREF
  int v115[2]; // [rsp+58h] [rbp-320h]
  __int64 v116; // [rsp+60h] [rbp-318h] BYREF
  int v117; // [rsp+68h] [rbp-310h]
  int v118; // [rsp+70h] [rbp-308h]
  __int64 v119; // [rsp+78h] [rbp-300h]
  __int64 v120; // [rsp+80h] [rbp-2F8h] BYREF
  void *v121; // [rsp+88h] [rbp-2F0h]
  void *v122; // [rsp+90h] [rbp-2E8h]
  int v123; // [rsp+98h] [rbp-2E0h]
  __int64 *v124; // [rsp+A0h] [rbp-2D8h]
  void *v125; // [rsp+A8h] [rbp-2D0h] BYREF
  void *v126; // [rsp+C0h] [rbp-2B8h]
  __int64 v127; // [rsp+D8h] [rbp-2A0h]
  char v128[16]; // [rsp+E0h] [rbp-298h] BYREF
  char v129[24]; // [rsp+F0h] [rbp-288h] BYREF
  char v130[16]; // [rsp+108h] [rbp-270h] BYREF
  char v131[64]; // [rsp+118h] [rbp-260h] BYREF
  __int64 v132; // [rsp+158h] [rbp-220h] BYREF
  __m128 v133; // [rsp+160h] [rbp-218h]
  int v134; // [rsp+170h] [rbp-208h]
  __int64 *v135; // [rsp+178h] [rbp-200h]
  __int64 v136; // [rsp+180h] [rbp-1F8h]
  int v137; // [rsp+188h] [rbp-1F0h]
  __int64 *v138; // [rsp+190h] [rbp-1E8h]
  __int64 v139; // [rsp+198h] [rbp-1E0h]
  int v140; // [rsp+1A0h] [rbp-1D8h]
  __int64 v141; // [rsp+1A8h] [rbp-1D0h]
  __int64 v142; // [rsp+1B0h] [rbp-1C8h]
  __int64 *v143; // [rsp+1B8h] [rbp-1C0h]
  __int64 v144; // [rsp+1C0h] [rbp-1B8h]
  __int64 v145; // [rsp+1C8h] [rbp-1B0h]
  __int64 v146; // [rsp+1D0h] [rbp-1A8h]
  __int64 v147; // [rsp+1D8h] [rbp-1A0h]
  char v148[24]; // [rsp+1E0h] [rbp-198h] BYREF
  char v149[8]; // [rsp+1F8h] [rbp-180h] BYREF
  void *v150; // [rsp+200h] [rbp-178h]
  void *v151; // [rsp+208h] [rbp-170h]
  int v152; // [rsp+218h] [rbp-160h]
  __int64 v153; // [rsp+220h] [rbp-158h]
  int v154; // [rsp+228h] [rbp-150h]
  __int64 v155; // [rsp+230h] [rbp-148h]
  int v156; // [rsp+238h] [rbp-140h]
  __int64 v157; // [rsp+240h] [rbp-138h]
  __int64 v158; // [rsp+250h] [rbp-128h]
  void *v159; // [rsp+258h] [rbp-120h]
  __int64 v160; // [rsp+260h] [rbp-118h]
  __int64 *v161; // [rsp+268h] [rbp-110h]
  __int64 v162; // [rsp+270h] [rbp-108h]
  char v163[8]; // [rsp+278h] [rbp-100h] BYREF
  __int64 v164; // [rsp+280h] [rbp-F8h]
  __int64 v165; // [rsp+288h] [rbp-F0h]
  __int64 v166; // [rsp+290h] [rbp-E8h]
  __int64 v167; // [rsp+298h] [rbp-E0h]
  __int64 v168; // [rsp+2A0h] [rbp-D8h]
  __int64 v169; // [rsp+2A8h] [rbp-D0h]
  __int64 (__fastcall **v170)(); // [rsp+2B0h] [rbp-C8h]
  void *v171; // [rsp+2C8h] [rbp-B0h]
  void *v172; // [rsp+2E0h] [rbp-98h]
  __int64 v173; // [rsp+2E8h] [rbp-90h]
  __int64 *v174; // [rsp+2F0h] [rbp-88h]
  __int64 v175; // [rsp+2F8h] [rbp-80h]
  __int64 v176; // [rsp+338h] [rbp-40h]

  v15 = a3;
  LODWORD(v109) = a5;
  v120 = *(_QWORD *)(a1 + 104);
  v17 = v120;
  v18 = (_OWORD *)sub_186B270(0x40u);
  v122 = &byte_8;
  v121 = v18;
  *v18 = 0;
  v18[1] = 0;
  v18[2] = 0;
  v18[3] = 0;
  v123 = 0;
  sub_16511B0(&v125);
  v127 = v17;
  v124 = (__int64 *)&off_1C63D10;
  sub_16669D0(v128, v17);
  sub_16744A0(v129, v17);
  sub_1684300(v130, v17);
  sub_15C5470(v131, v17);
  v132 = v17;
  sub_180C5A0(&v116, "seq");
  v19 = sub_15DA4C0(v17 + 560, &v116);
  v20 = sub_15D2690(v17, v19);
  v133 = _mm_loadh_ps((const double *)(v20 + 88));
  v21 = *(_DWORD *)(v20 + 16);
  v135 = &v132;
  v136 = v132;
  v139 = v132;
  v142 = v132;
  v134 = v21;
  v137 = v21;
  v138 = &v132;
  v140 = v21;
  v141 = 0;
  v143 = nullptr;
  v144 = 0;
  v145 = 0;
  v146 = 0xFFFFFFFFLL;
  v147 = 0;
  sub_15F01E0(v148, v17);
  sub_1624F90(v149, v17);
  v153 = 0;
  v152 = 0;
  v155 = 0;
  v154 = 0;
  v157 = 0;
  v156 = 0;
  v158 = 0;
  v159 = nullptr;
  v160 = v17;
  v161 = nullptr;
  v162 = 0;
  sub_15C0990(v163, v17);
  v22 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)v115 = 0;
  v114 = v22;
  sub_168AD20(&v120, &v114);
  v107 = *(_QWORD *)(a1 + 104);
  if ( (_DWORD)v15 )
  {
    v23 = a4;
    v24 = &a4[v15];
    v25 = 0;
    while ( 1 )
    {
      v34 = *v23;
      if ( dword_1C7ECE4 == *v23 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 856LL);
        if ( v26 )
          goto LABEL_15;
      }
      else if ( dword_1C7ECE0 == v34 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 864LL);
        if ( v26 )
        {
LABEL_15:
          v27 = *(_DWORD *)(v26 + 8) + 1;
          *(_DWORD *)(v26 + 8) = v27;
          if ( v25 )
          {
            v28 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v28 )
              goto LABEL_17;
            goto LABEL_8;
          }
LABEL_136:
          v25 = v26;
          goto LABEL_9;
        }
      }
      else
      {
        v26 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (v34 >> 1));
        if ( (v34 & 1) != 0 )
        {
          v72 = sub_15E1A70(*(_QWORD *)(a1 + 104));
          if ( v72 )
          {
            v27 = *(_DWORD *)(v72 + 8) + 1;
            *(_DWORD *)(v72 + 8) = v27;
            if ( !v25 )
            {
              v25 = v72;
LABEL_9:
              *(_DWORD *)(v25 + 8) = v27 + 1;
              v29 = *(__int64 **)v115;
              if ( !*(_QWORD *)v115 )
                goto LABEL_134;
              goto LABEL_10;
            }
            v28 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( !v28 )
            {
              v27 = *(_DWORD *)(v72 + 8);
              v25 = v72;
              goto LABEL_9;
            }
            v111 = v72;
            sub_15D7BC0(v107, v25);
            v25 = v111;
LABEL_18:
            v27 = *(_DWORD *)(v25 + 8);
            goto LABEL_9;
          }
        }
        else if ( v26 )
        {
          v27 = *(_DWORD *)(v26 + 8) + 1;
          *(_DWORD *)(v26 + 8) = v27;
          if ( v25 )
          {
            v28 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v28 )
            {
LABEL_17:
              sub_15D7BC0(v107, v25);
              v25 = v26;
              goto LABEL_18;
            }
LABEL_8:
            v27 = *(_DWORD *)(v26 + 8);
            v25 = v26;
            goto LABEL_9;
          }
          goto LABEL_136;
        }
      }
      if ( v25 && (v28 = *(_DWORD *)(v25 + 8) == 1, --*(_DWORD *)(v25 + 8), v28) )
      {
        sub_15D7BC0(v107, v25);
        v25 = 0;
      }
      else
      {
        v25 = 0;
      }
      v29 = *(__int64 **)v115;
      if ( !*(_QWORD *)v115 )
      {
LABEL_134:
        v71 = (_QWORD *)sub_186B270(0x18u);
        v29 = v71 + 1;
        *v71 = 2;
        v32 = 1;
        *(_QWORD *)v115 = v29;
        v33 = v29;
        goto LABEL_12;
      }
LABEL_10:
      v30 = *((_DWORD *)v29 - 1);
      if ( v30 == *((_DWORD *)v29 - 2) )
      {
        v35 = (3 * v30 + 1) >> 1;
        v36 = 8 * v35 + 8;
        v37 = v35;
        if ( 8 * v30 + 8 >= (unsigned int)v36 || v30 >= v35 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v116, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v116);
          sub_233E40((__int64)&v116);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v38 = (unsigned int *)sub_186B300(v29 - 1, v36);
        v39 = v38[1];
        *v38 = v37;
        ++v23;
        *(_QWORD *)v115 = v38 + 2;
        *(_QWORD *)&v38[2 * v39 + 2] = v25;
        v38[1] = v39 + 1;
        if ( v23 == v24 )
          goto LABEL_22;
      }
      else
      {
        v31 = v30;
        v32 = v30 + 1;
        v33 = &v29[v31];
LABEL_12:
        ++v23;
        *v33 = v25;
        *((_DWORD *)v29 - 1) = v32;
        if ( v23 == v24 )
          goto LABEL_22;
      }
    }
  }
  v25 = 0;
LABEL_22:
  if ( (_DWORD)v109 )
  {
    v40 = a6;
    v41 = a6 + 16LL * (unsigned int)v109;
    do
    {
      while ( 1 )
      {
        v48 = v25;
        v49 = sub_15E1B70(*(_QWORD *)(a1 + 104));
        v25 = v49;
        if ( !v49 )
          break;
        v42 = *(_DWORD *)(v49 + 8) + 1;
        *(_DWORD *)(v25 + 8) = v42;
        if ( v48 )
        {
          v28 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v28 )
            sub_15D7BC0(v107, v48);
          v42 = *(_DWORD *)(v25 + 8);
        }
        *(_DWORD *)(v25 + 8) = v42 + 1;
LABEL_29:
        v43 = *(__int64 **)v115;
        if ( *(_QWORD *)v115 )
          goto LABEL_30;
LABEL_37:
        v50 = sub_186B270(0x18u);
        *(_QWORD *)v50 = 2;
        v40 += 16;
        *(_QWORD *)v115 = v50 + 8;
        *(_QWORD *)(v50 + 8) = v25;
        *(_DWORD *)(v50 + 4) = 1;
        if ( v41 == v40 )
          goto LABEL_38;
      }
      if ( !v48 )
        goto LABEL_29;
      v28 = (*(_DWORD *)(v48 + 8))-- == 1;
      if ( !v28 )
        goto LABEL_29;
      sub_15D7BC0(v107, v48);
      v43 = *(__int64 **)v115;
      if ( !*(_QWORD *)v115 )
        goto LABEL_37;
LABEL_30:
      v44 = *((_DWORD *)v43 - 1);
      if ( v44 == *((_DWORD *)v43 - 2) )
      {
        v73 = (3 * v44 + 1) >> 1;
        v74 = 8 * v73 + 8;
        if ( 8 * v44 + 8 >= (unsigned int)v74 || v44 >= v73 )
        {
          v13 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v116, "Overflow encountered when expanding vector");
          *v13 = (char *)off_1C63128;
          sub_2333C0(v13 + 1, &v116);
          sub_233E40((__int64)&v116);
          __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v75 = (unsigned int *)sub_186B300(v43 - 1, v74);
        v76 = v75[1];
        v43 = (__int64 *)(v75 + 2);
        *v75 = v73;
        *(_QWORD *)v115 = v43;
        LODWORD(v75) = v76;
        v47 = &v43[v76];
        v46 = (_DWORD)v75 + 1;
      }
      else
      {
        v45 = v44;
        v46 = v44 + 1;
        v47 = &v43[v45];
      }
      v40 += 16;
      *v47 = v25;
      *((_DWORD *)v43 - 1) = v46;
    }
    while ( v41 != v40 );
  }
LABEL_38:
  if ( a9 && a10 )
  {
    v77 = *(_QWORD *)(a1 + 104);
    v78 = sub_15E1B70(v77);
    v79 = v78;
    if ( v78 )
      ++*(_DWORD *)(v78 + 8);
    v80 = sub_15E1A70(*(_QWORD *)(a1 + 104));
    v81 = v80;
    if ( v80 )
      ++*(_DWORD *)(v80 + 8);
    v82 = *(__int64 **)v115;
    if ( *(_QWORD *)v115 )
    {
      v83 = *(_DWORD *)(*(_QWORD *)v115 - 4LL);
      if ( v83 == *(_DWORD *)(*(_QWORD *)v115 - 8LL) )
      {
        v90 = (3 * v83 + 1) >> 1;
        v91 = 8 * v90 + 8;
        if ( 8 * v83 + 8 >= (unsigned int)v91 || v83 >= v90 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v116, "Overflow encountered when expanding vector");
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, &v116);
          sub_233E40((__int64)&v116);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(a6) = (3 * v83 + 1) >> 1;
        v109 = v81;
        v92 = (_DWORD *)sub_186B300((void *)(*(_QWORD *)v115 - 8LL), v91);
        v93 = (unsigned int)v92[1];
        v82 = (__int64 *)(v92 + 2);
        *(_QWORD *)v115 = v92 + 2;
        v81 = v109;
        *v92 = a6;
        LODWORD(v92) = v93;
        v86 = &v82[v93];
        v85 = (_DWORD)v92 + 1;
      }
      else
      {
        v84 = v83;
        v85 = v83 + 1;
        v86 = (__int64 *)(*(_QWORD *)v115 + 8 * v84);
      }
    }
    else
    {
      v109 = v80;
      v105 = (_QWORD *)sub_186B270(0x18u);
      *v105 = 2;
      v81 = v109;
      v85 = 1;
      v82 = v105 + 1;
      *(_QWORD *)v115 = v82;
      v86 = v82;
    }
    *v86 = v81;
    *((_DWORD *)v82 - 1) = v85;
    if ( v79 )
    {
      v28 = (*(_DWORD *)(v79 + 8))-- == 1;
      if ( v28 )
        sub_15D7BC0(v77, v79);
    }
  }
  if ( (_DWORD)a7 != dword_1C7ECE0 )
  {
    v87 = a7 ^ 1;
    if ( ((unsigned int)a7 ^ 1) == dword_1C7ECE4 )
    {
      v94 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 856LL);
      if ( !v94 )
        goto LABEL_177;
    }
    else if ( dword_1C7ECE0 == v87 )
    {
      v94 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 864LL);
      if ( !v94 )
        goto LABEL_177;
    }
    else
    {
      v88 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (v87 >> 1));
      if ( (v87 & 1) == 0 )
      {
        if ( v88 )
        {
          v89 = *(_DWORD *)(v88 + 8) + 1;
          *(_DWORD *)(v88 + 8) = v89;
          if ( !v25 )
          {
            v25 = v88;
            goto LABEL_171;
          }
          v28 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( !v28 )
          {
            v89 = *(_DWORD *)(v88 + 8);
            v25 = v88;
LABEL_171:
            *(_DWORD *)(v25 + 8) = v89 + 1;
LABEL_172:
            v95 = *(__int64 **)v115;
            if ( *(_QWORD *)v115 )
            {
              v96 = *(_DWORD *)(*(_QWORD *)v115 - 4LL);
              if ( v96 == *(_DWORD *)(*(_QWORD *)v115 - 8LL) )
              {
                v100 = (3 * v96 + 1) >> 1;
                v101 = 8 * v100 + 8;
                if ( 8 * v96 + 8 >= (unsigned int)v101 || v96 >= v100 )
                {
                  v11 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v116, "Overflow encountered when expanding vector");
                  *v11 = (char *)off_1C63128;
                  sub_2333C0(v11 + 1, &v116);
                  sub_233E40((__int64)&v116);
                  __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v102 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v115 - 8LL), v101);
                v103 = v102[1];
                v95 = (__int64 *)(v102 + 2);
                *v102 = v100;
                *(_QWORD *)v115 = v95;
                LODWORD(v102) = v103;
                v99 = &v95[v103];
                v98 = (_DWORD)v102 + 1;
              }
              else
              {
                v97 = v96;
                v98 = v96 + 1;
                v99 = (__int64 *)(*(_QWORD *)v115 + 8 * v97);
              }
            }
            else
            {
              v104 = (_QWORD *)sub_186B270(0x18u);
              v95 = v104 + 1;
              *v104 = 2;
              v98 = 1;
              *(_QWORD *)v115 = v95;
              v99 = v95;
            }
            *v99 = v25;
            *((_DWORD *)v95 - 1) = v98;
            goto LABEL_41;
          }
          v109 = v88;
          sub_15D7BC0(v107, v25);
          v25 = v109;
          goto LABEL_189;
        }
LABEL_177:
        if ( v25 && (v28 = *(_DWORD *)(v25 + 8) == 1, --*(_DWORD *)(v25 + 8), v28) )
        {
          sub_15D7BC0(v107, v25);
          v25 = 0;
        }
        else
        {
          v25 = 0;
        }
        goto LABEL_172;
      }
      v94 = sub_15E1A70(*(_QWORD *)(a1 + 104));
      if ( !v94 )
        goto LABEL_177;
    }
    v89 = *(_DWORD *)(v94 + 8) + 1;
    *(_DWORD *)(v94 + 8) = v89;
    if ( !v25 )
    {
      v25 = v94;
      goto LABEL_171;
    }
    v28 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( !v28 )
    {
      v89 = *(_DWORD *)(v94 + 8);
      v25 = v94;
      goto LABEL_171;
    }
    sub_15D7BC0(v107, v25);
    v25 = v94;
LABEL_189:
    v89 = *(_DWORD *)(v25 + 8);
    goto LABEL_171;
  }
LABEL_41:
  if ( *a8 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( ((unsigned __int8)*a8 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( *a8 )
        strlen(*a8);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  sub_168AD20(&v120, &v114);
  sub_168C010(
    (int)&v120,
    a2,
    v51,
    v52,
    v53,
    v54,
    v106,
    v107,
    (int)&v116,
    (int)&v114,
    (__int64)&v120,
    v109,
    a6,
    v111,
    v112,
    v113,
    v114,
    v115[0],
    v116,
    v117,
    v118,
    v119,
    v120,
    (int)v121,
    v122,
    v123,
    (int)v124,
    v125);
  sub_168BA90(&v120, a2, &v114, 1);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v25 )
  {
    v28 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v108, v25);
  }
  v55 = *(__int64 **)v115;
  if ( *(_QWORD *)v115 )
  {
    v56 = *(_QWORD *)v115 + 8LL * *(unsigned int *)(*(_QWORD *)v115 - 4LL);
    if ( *(_QWORD *)v115 >= v56 )
      goto LABEL_58;
    do
    {
      while ( 1 )
      {
        v57 = *v55;
        if ( *v55 )
        {
          v28 = (*(_DWORD *)(v57 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( (unsigned __int64)++v55 >= v56 )
          goto LABEL_57;
      }
      sub_15D7BC0(v114, v57);
      ++v55;
    }
    while ( (unsigned __int64)v55 < v56 );
LABEL_57:
    v55 = *(__int64 **)v115;
    if ( *(_QWORD *)v115 )
LABEL_58:
      sub_186B220(v55 - 1);
  }
  if ( v176 )
    sub_186B220((void *)(v176 - 8));
  if ( v175 )
    sub_186B220((void *)(v175 - 8));
  v58 = v174;
  if ( v174 )
  {
    v59 = (unsigned __int64)&v174[*((unsigned int *)v174 - 1)];
    if ( (unsigned __int64)v174 >= v59 )
      goto LABEL_71;
    do
    {
      while ( 1 )
      {
        v60 = *v58;
        if ( *v58 )
        {
          v61 = v173;
          v28 = (*(_DWORD *)(v60 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( (unsigned __int64)++v58 >= v59 )
          goto LABEL_70;
      }
      sub_15D7BC0(v61, v60);
      ++v58;
    }
    while ( (unsigned __int64)v58 < v59 );
LABEL_70:
    v58 = v174;
    if ( v174 )
LABEL_71:
      sub_186B220(v58 - 1);
  }
  v170 = &off_1C62200;
  if ( v172 )
    sub_186B220(v172);
  if ( v171 )
    sub_186B220(v171);
  if ( v169 )
    sub_186B220((void *)(v169 - 8));
  if ( v168 )
    sub_186B220((void *)(v168 - 8));
  if ( v167 )
    sub_186B220((void *)(v167 - 8));
  if ( v166 )
    sub_186B220((void *)(v166 - 8));
  if ( v165 )
    sub_186B220((void *)(v165 - 8));
  if ( v164 )
    sub_186B220((void *)(v164 - 8));
  if ( v162 )
    sub_186B220((void *)(v162 - 8));
  v62 = v161;
  if ( v161 )
  {
    v63 = (unsigned __int64)&v161[*((unsigned int *)v161 - 1)];
    if ( (unsigned __int64)v161 >= v63 )
      goto LABEL_98;
    do
    {
      while ( 1 )
      {
        v64 = *v62;
        if ( *v62 )
        {
          v65 = v160;
          v28 = (*(_DWORD *)(v64 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( (unsigned __int64)++v62 >= v63 )
          goto LABEL_97;
      }
      sub_15D7BC0(v65, v64);
      ++v62;
    }
    while ( (unsigned __int64)v62 < v63 );
LABEL_97:
    v62 = v161;
    if ( v161 )
LABEL_98:
      sub_186B220(v62 - 1);
  }
  if ( v159 )
    sub_186B220(v159);
  if ( v157 )
    sub_186B220((void *)(v157 - 8));
  if ( v155 )
    sub_186B220((void *)(v155 - 8));
  if ( v153 )
    sub_186B220((void *)(v153 - 8));
  v124 = (__int64 *)&off_1C63D10;
  if ( v151 )
    sub_186B220(v151);
  if ( v150 )
    sub_186B220(v150);
  v66 = v143;
  if ( v143 )
  {
    v67 = (unsigned __int64)&v143[*((unsigned int *)v143 - 1)];
    if ( (unsigned __int64)v143 >= v67 )
      goto LABEL_119;
    do
    {
      while ( 1 )
      {
        v68 = *v66;
        if ( *v66 )
        {
          v69 = v142;
          v28 = (*(_DWORD *)(v68 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( (unsigned __int64)++v66 >= v67 )
          goto LABEL_118;
      }
      sub_15D7BC0(v69, v68);
      ++v66;
    }
    while ( (unsigned __int64)v66 < v67 );
LABEL_118:
    v66 = v143;
    if ( v143 )
LABEL_119:
      sub_186B220(v66 - 1);
  }
  if ( v141 )
    sub_186B220((void *)(v141 - 8));
  result = qword_1C7A350;
  v124 = qword_1C7A350;
  if ( v126 )
    result = (__int64 *)sub_186B220(v126);
  if ( v125 )
    result = (__int64 *)sub_186B220(v125);
  if ( v121 )
    return (__int64 *)sub_186B220(v121);
  return result;
}

