void __fastcall sub_648C10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 *a6,
        double a7,
        double a8,
        __m128 a9,
        _QWORD *a10,
        __int64 a11)
{
  char **exception; // rbx
  char **v12; // rbx
  char **v13; // r12
  char **v14; // rbx
  char **v15; // r12
  char **v16; // r12
  __int64 v18; // rbx
  __int64 v21; // r8
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 *v24; // rbp
  __int64 v25; // rax
  _QWORD *v26; // rdi
  unsigned int v27; // ecx
  __int64 v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // r9
  int v31; // eax
  _QWORD *v32; // r9
  int v33; // edx
  __int64 v34; // rax
  __int64 *v35; // r12
  _QWORD *v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // rsi
  unsigned int v39; // r15d
  __int64 v40; // rbp
  unsigned int v41; // eax
  __int64 v42; // rdi
  int v43; // eax
  unsigned int *v44; // rdi
  __int64 v45; // rsi
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // r12
  _QWORD *v49; // rax
  __int64 v50; // rsi
  _DWORD *v51; // r14
  _QWORD *v52; // rbp
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  _DWORD *v57; // rdx
  unsigned int v58; // eax
  int *v59; // rdx
  int v60; // r8d
  __int64 v61; // rax
  int *v62; // rax
  int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // r14
  __int64 v66; // rax
  unsigned int v67; // edx
  __int64 *v68; // r12
  unsigned __int64 v69; // r13
  __int64 v70; // rsi
  bool v71; // zf
  __int64 *v72; // rbp
  __int64 v73; // rax
  __int64 v74; // r12
  __int64 *v75; // rbx
  __int64 *v76; // r13
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rdi
  unsigned int v85; // r9d
  size_t v86; // rsi
  _DWORD *v87; // rax
  __int64 v88; // rsi
  unsigned int v89; // edx
  __int64 *v90; // r15
  __int64 v91; // r8
  __int64 v92; // rdx
  __int64 *v93; // rax
  __int64 *v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rsi
  __int64 *v97; // r12
  __int64 *v98; // r14
  __int64 v99; // rsi
  __int64 v100; // rdi
  unsigned int v101; // r8d
  size_t v102; // rsi
  unsigned int *v103; // rax
  __int64 v104; // rsi
  unsigned int v105; // r12d
  unsigned int v106; // ecx
  unsigned int *v107; // rax
  __int64 v108; // rsi
  unsigned int v109; // r14d
  unsigned int v110; // edx
  __int64 v111; // rax
  int *v112; // rsi
  _DWORD *v113; // r15
  __int64 v114; // rdi
  unsigned __int64 v115; // rax
  __int64 v116; // rdi
  unsigned int v117; // ecx
  size_t v118; // rsi
  _DWORD *v119; // rax
  _QWORD *v120; // rax
  _QWORD *v121; // rax
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  int v124; // [rsp+0h] [rbp-D8h]
  int v125; // [rsp+0h] [rbp-D8h]
  int v126[2]; // [rsp+0h] [rbp-D8h]
  int v127[2]; // [rsp+0h] [rbp-D8h]
  unsigned int v128; // [rsp+0h] [rbp-D8h]
  int v129[2]; // [rsp+0h] [rbp-D8h]
  _DWORD *v130; // [rsp+8h] [rbp-D0h]
  int *v131; // [rsp+10h] [rbp-C8h]
  void *v132; // [rsp+18h] [rbp-C0h]
  int v133; // [rsp+20h] [rbp-B8h]
  int v134; // [rsp+28h] [rbp-B0h]
  int v135[2]; // [rsp+30h] [rbp-A8h] BYREF
  int v136[2]; // [rsp+38h] [rbp-A0h] BYREF
  int v137[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v138; // [rsp+48h] [rbp-90h]
  int v139[2]; // [rsp+50h] [rbp-88h] BYREF
  int v140[2]; // [rsp+58h] [rbp-80h]
  int v141[2]; // [rsp+60h] [rbp-78h] BYREF
  int v142[2]; // [rsp+68h] [rbp-70h]
  __int64 v143; // [rsp+70h] [rbp-68h]
  __int64 v144; // [rsp+78h] [rbp-60h]
  __int64 v145[2]; // [rsp+80h] [rbp-58h] BYREF
  char v146; // [rsp+90h] [rbp-48h]

  HIDWORD(v132) = a5;
  if ( !a2 )
    return;
  v18 = *a6;
  *(_QWORD *)v137 = 0;
  v138 = v18;
  *(_QWORD *)v139 = 0;
  *(_QWORD *)v140 = v18;
  *(_QWORD *)v141 = 0;
  *(_QWORD *)v142 = v18;
  sub_62E310(a1, a3, (__int64 *)v137, a7, a8, a9);
  sub_62E310(a1, a4, (__int64 *)v139, a7, a8, a9);
  sub_62E310(a1, a11, (__int64 *)v141, a7, a8, a9);
  *(_QWORD *)v135 = 0;
  *(_QWORD *)v136 = 0;
  v22 = sub_186B270(0x28u);
  v23 = a6[1];
  v24 = (__int64 *)(v22 + 8);
  *(_QWORD *)(v22 + 16) = 0;
  *(_QWORD *)v22 = 2;
  v25 = *a6;
  *(_QWORD *)v135 = v22 + 8;
  *(_QWORD *)(v22 + 8) = v25;
  if ( v23 )
  {
    v26 = nullptr;
    v27 = 0;
    do
    {
      if ( v27 >= *(_DWORD *)(v23 - 4) )
        break;
      v28 = *(_QWORD *)(v23 + 8LL * v27);
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      if ( v26 )
      {
        v29 = *((_DWORD *)v26 - 1);
        if ( v29 == *((_DWORD *)v26 - 2) )
        {
          v85 = (3 * v29 + 1) >> 1;
          v86 = 8 * v85 + 8;
          if ( 8 * v29 + 8 >= (unsigned int)v86 || v29 >= v85 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v145, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v145);
            sub_233E40((__int64)v145);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v131) = (3 * v29 + 1) >> 1;
          LODWORD(v130) = v27;
          *(_QWORD *)v126 = v28;
          v87 = (_DWORD *)sub_186B300(v26 - 1, v86);
          v88 = (unsigned int)v87[1];
          v26 = v87 + 2;
          v28 = *(_QWORD *)v126;
          v27 = (unsigned int)v130;
          *(_QWORD *)(v22 + 16) = v87 + 2;
          *v87 = (_DWORD)v131;
          LODWORD(v87) = v88;
          v32 = &v26[v88];
          v23 = a6[1];
          v31 = (_DWORD)v87 + 1;
        }
        else
        {
          v30 = v29;
          v31 = v29 + 1;
          v32 = &v26[v30];
        }
      }
      else
      {
        LODWORD(v130) = v27;
        *(_QWORD *)v129 = v28;
        v121 = (_QWORD *)sub_186B270(0x18u);
        v26 = v121 + 1;
        v23 = a6[1];
        *(_QWORD *)(v22 + 16) = v121 + 1;
        v28 = *(_QWORD *)v129;
        v32 = v121 + 1;
        *v121 = 2;
        v27 = (unsigned int)v130;
        v31 = 1;
      }
      *v32 = v28;
      ++v27;
      *((_DWORD *)v26 - 1) = v31;
    }
    while ( v23 );
    v24 = *(__int64 **)v135;
    v33 = *(_DWORD *)(*(_QWORD *)v135 - 8LL);
    LODWORD(v34) = *(_DWORD *)(*(_QWORD *)v135 - 4LL) + 1;
    *(_DWORD *)(*(_QWORD *)v135 - 4LL) = v34;
    if ( (_DWORD)v34 == v33 )
    {
      LODWORD(v131) = (unsigned int)(3 * v34 + 1) >> 1;
      v89 = 16 * (_DWORD)v131 + 8;
      if ( 16 * (int)v34 + 8 >= v89 || (unsigned int)v34 >= (unsigned int)(3 * v34 + 1) >> 1 )
      {
        v14 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v145, "Overflow encountered when expanding vector");
        *v14 = (char *)off_1C63128;
        sub_2333C0(v14 + 1, v145);
        sub_233E40((__int64)v145);
        __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v34 = sub_186B270(v89);
      v90 = *(__int64 **)v135;
      v130 = (_DWORD *)v34;
      v24 = (__int64 *)(v34 + 8);
      if ( *(_QWORD *)v135 )
      {
        v91 = *(unsigned int *)(*(_QWORD *)v135 - 4LL);
        v92 = v34 + 8;
        *(_DWORD *)(v34 + 4) = v91;
        v93 = v90;
        v94 = &v90[2 * v91];
        if ( v94 != v90 )
        {
          do
          {
            v95 = *v93;
            v93 += 2;
            v92 += 16;
            *(_QWORD *)(v92 - 16) = v95;
            v96 = *(v93 - 1);
            *(v93 - 1) = 0;
            *(_QWORD *)(v92 - 8) = v96;
          }
          while ( v93 != v94 );
        }
        *(_QWORD *)v127 = &v90[2 * v91];
        if ( (_DWORD)v91 )
        {
          do
          {
            v97 = (__int64 *)v90[1];
            if ( v97 )
            {
              v98 = &v97[*((unsigned int *)v97 - 1)];
              if ( v97 >= v98 )
                goto LABEL_88;
              do
              {
                while ( 1 )
                {
                  v99 = *v97;
                  if ( *v97 )
                  {
                    v100 = *v90;
                    v71 = (*(_DWORD *)(v99 + 8))-- == 1;
                    if ( v71 )
                      break;
                  }
                  if ( ++v97 >= v98 )
                    goto LABEL_87;
                }
                sub_15D7BC0(v100, v99);
                ++v97;
              }
              while ( v97 < v98 );
LABEL_87:
              v97 = (__int64 *)v90[1];
              if ( v97 )
LABEL_88:
                sub_186B220(v97 - 1);
            }
            v90 += 2;
          }
          while ( v90 != *(__int64 **)v127 );
          v90 = *(__int64 **)v135;
        }
        sub_186B220(v90 - 1);
        v34 = (unsigned int)v130[1];
        v35 = &v24[2 * v34];
      }
      else
      {
        *(_DWORD *)(v34 + 4) = 0;
        v35 = (__int64 *)(v34 + 8);
        LODWORD(v34) = 0;
      }
      *(_QWORD *)v135 = v24;
      *v130 = (_DWORD)v131;
      goto LABEL_13;
    }
  }
  else
  {
    *(_DWORD *)(v22 + 4) = 1;
    LODWORD(v34) = 1;
  }
  v35 = &v24[2 * (unsigned int)v34];
LABEL_13:
  v36 = a10;
  v37 = (_QWORD *)*a10;
  v35[1] = 0;
  v38 = a10[1];
  *v35 = (__int64)v37;
  if ( v38 )
  {
    v37 = nullptr;
    v39 = 0;
    do
    {
      if ( v39 >= *(_DWORD *)(v38 - 4) )
        break;
      v40 = *(_QWORD *)(v38 + 8LL * v39);
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      if ( v37 )
      {
        v41 = *((_DWORD *)v37 - 1);
        if ( v41 == *((_DWORD *)v37 - 2) )
        {
          v101 = (3 * v41 + 1) >> 1;
          v102 = 8 * v101 + 8;
          if ( 8 * v41 + 8 >= (unsigned int)v102 || v41 >= v101 )
          {
            v12 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v145, "Overflow encountered when expanding vector");
            *v12 = (char *)off_1C63128;
            sub_2333C0(v12 + 1, v145);
            sub_233E40((__int64)v145);
            __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v128 = (3 * v41 + 1) >> 1;
          v103 = (unsigned int *)sub_186B300(v37 - 1, v102);
          v104 = v103[1];
          v21 = v128;
          v37 = v103 + 2;
          v36 = a10;
          v35[1] = (__int64)(v103 + 2);
          *v103 = v128;
          v44 = &v103[2 * v104 + 2];
          v43 = v104 + 1;
          v38 = a10[1];
        }
        else
        {
          v42 = v41;
          v43 = v41 + 1;
          v44 = (unsigned int *)&v37[v42];
        }
      }
      else
      {
        v120 = (_QWORD *)sub_186B270(0x18u);
        v37 = v120 + 1;
        v44 = (unsigned int *)v37;
        *v120 = 2;
        v36 = a10;
        v43 = 1;
        v35[1] = (__int64)v37;
        v38 = a10[1];
      }
      *(_QWORD *)v44 = v40;
      ++v39;
      *((_DWORD *)v37 - 1) = v43;
    }
    while ( v38 );
    v24 = *(__int64 **)v135;
    LODWORD(v34) = *(_DWORD *)(*(_QWORD *)v135 - 4LL);
  }
  v45 = *(_QWORD *)v137;
  v143 = v18;
  *((_DWORD *)v24 - 1) = v34 + 1;
  v46 = *(_DWORD *)(v18 + 712);
  *(_DWORD *)(v18 + 712) = 1;
  v124 = v46;
  v47 = sub_15DE060(v18, v45, v37, v36, v21);
  v48 = v47;
  if ( v47 )
    ++*(_DWORD *)(v47 + 8);
  v49 = (_QWORD *)sub_186B270(0x18u);
  v49[1] = v48;
  v50 = *(_QWORD *)v139;
  v51 = v49;
  v52 = v49 + 1;
  *v49 = 0x100000002LL;
  v56 = sub_15DE060(v18, v50, v53, v54, v55);
  v57 = (_DWORD *)v56;
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  v58 = v51[1];
  if ( v58 == *v51 )
  {
    v117 = (3 * v58 + 1) >> 1;
    v118 = 8 * v117 + 8;
    if ( 8 * v58 + 8 >= (unsigned int)v118 || v58 >= v117 )
    {
      v13 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v145, "Overflow encountered when expanding vector");
      *v13 = (char *)off_1C63128;
      sub_2333C0(v13 + 1, v145);
      sub_233E40((__int64)v145);
      __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    LODWORD(v131) = (3 * v58 + 1) >> 1;
    v130 = v57;
    v119 = (_DWORD *)sub_186B300(v51, v118);
    v52 = v119 + 2;
    v57 = v130;
    *v119 = (_DWORD)v131;
    v58 = v119[1];
  }
  v52[v58] = v57;
  v59 = *(int **)v136;
  *((_DWORD *)v52 - 1) = v58 + 1;
  v60 = HIDWORD(v132) + 1;
  if ( v59 )
  {
    v61 = (unsigned int)*(v59 - 1);
    if ( (_DWORD)v61 == *(v59 - 2) )
    {
      v109 = (unsigned int)(3 * v61 + 1) >> 1;
      v110 = 8 * v109 + 8;
      if ( 8 * (int)v61 + 8 >= v110 || (unsigned int)v61 >= v109 )
      {
        v16 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v145, "Overflow encountered when expanding vector");
        *v16 = (char *)off_1C63128;
        sub_2333C0(v16 + 1, v145);
        sub_233E40((__int64)v145);
        __cxa_throw(v16, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v130) = HIDWORD(v132) + 1;
      v111 = sub_186B270(v110);
      v112 = *(int **)v136;
      v60 = HIDWORD(v132) + 1;
      v113 = (_DWORD *)v111;
      v59 = (int *)(v111 + 8);
      if ( *(_QWORD *)v136 )
      {
        v114 = *(unsigned int *)(*(_QWORD *)v136 - 4LL);
        *(_DWORD *)(v111 + 4) = v114;
        v115 = 0;
        v116 = 8 * v114;
        if ( v116 )
        {
          do
          {
            *(_QWORD *)&v113[v115 / 4 + 2] = *(_QWORD *)&v112[v115 / 4];
            v115 += 8LL;
          }
          while ( v116 != v115 );
        }
        v131 = v59;
        sub_186B220(v112 - 2);
        v59 = v131;
        v60 = HIDWORD(v132) + 1;
        v62 = &v131[2 * v113[1]];
      }
      else
      {
        *(_DWORD *)(v111 + 4) = 0;
        v62 = (int *)(v111 + 8);
      }
      *(_QWORD *)v136 = v59;
      *v113 = v109;
    }
    else
    {
      v62 = &v59[2 * v61];
    }
  }
  else
  {
    LODWORD(v130) = HIDWORD(v132) + 1;
    v123 = (_QWORD *)sub_186B270(0x18u);
    v60 = HIDWORD(v132) + 1;
    v59 = (int *)(v123 + 1);
    *v123 = 2;
    v62 = v59;
    *(_QWORD *)v136 = v59;
  }
  *v62 = v60;
  v63 = v141[0];
  v62[1] = 0;
  ++*(v59 - 1);
  v64 = sub_15E9440(
          v18,
          2,
          (int)v52,
          v63,
          (int)v136,
          (int)v135,
          v124,
          (__int64)v130,
          (int)v131,
          v132,
          v133,
          v134,
          v135[0],
          v136[0],
          v137[0],
          v138,
          v139[0],
          v140[0],
          v141[0],
          v142[0],
          v143,
          v144,
          v145[0],
          v145[1],
          v146);
  v65 = v64;
  if ( v64 )
    *(_DWORD *)(v64 + 8) += 2;
  v66 = *(_QWORD *)(a2 + 32);
  if ( v66 )
  {
    v67 = *(_DWORD *)(v66 - 4);
    if ( v67 == *(_DWORD *)(v66 - 8) )
    {
      v105 = (3 * v67 + 1) >> 1;
      v106 = 8 * v105 + 8;
      if ( 8 * v67 + 8 >= v106 || v67 >= v105 )
      {
        v15 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v145, "Overflow encountered when expanding vector");
        *v15 = (char *)off_1C63128;
        sub_2333C0(v15 + 1, v145);
        sub_233E40((__int64)v145);
        __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v107 = (unsigned int *)sub_186B300((void *)(v66 - 8), v106);
      v108 = v107[1];
      *v107 = v105;
      *(_QWORD *)(a2 + 32) = v107 + 2;
      *(_QWORD *)&v107[2 * v108 + 2] = v65;
      v107[1] = v108 + 1;
    }
    else
    {
      *(_QWORD *)(v66 + 8LL * v67) = v65;
      *(_DWORD *)(v66 - 4) = v67 + 1;
    }
  }
  else
  {
    v122 = (_QWORD *)sub_186B270(0x18u);
    v122[1] = v65;
    *(_QWORD *)(a2 + 32) = v122 + 1;
    *v122 = 0x100000002LL;
  }
  v68 = v52;
  v69 = (unsigned __int64)&v52[*((unsigned int *)v52 - 1)];
  if ( (unsigned __int64)v52 < v69 )
  {
    do
    {
      while ( 1 )
      {
        v70 = *v68;
        if ( *v68 )
        {
          v71 = (*(_DWORD *)(v70 + 8))-- == 1;
          if ( v71 )
            break;
        }
        if ( (unsigned __int64)++v68 >= v69 )
          goto LABEL_42;
      }
      ++v68;
      sub_15D7BC0(v18, v70);
    }
    while ( (unsigned __int64)v68 < v69 );
  }
LABEL_42:
  sub_186B220(v52 - 1);
  if ( v65 )
  {
    v71 = (*(_DWORD *)(v65 + 8))-- == 1;
    if ( v71 )
      sub_15D7BC0(v18, v65);
  }
  *(_DWORD *)(v18 + 712) = v125;
  if ( *(_QWORD *)v136 )
    sub_186B220((void *)(*(_QWORD *)v136 - 8LL));
  v72 = *(__int64 **)v135;
  if ( *(_QWORD *)v135 )
  {
    v73 = *(unsigned int *)(*(_QWORD *)v135 - 4LL);
    if ( (_DWORD)v73 )
    {
      v74 = *(_QWORD *)v135 + 16 * v73;
      do
      {
        v75 = (__int64 *)v72[1];
        if ( v75 )
        {
          v76 = &v75[*((unsigned int *)v75 - 1)];
          if ( v75 >= v76 )
            goto LABEL_58;
          do
          {
            while ( 1 )
            {
              v77 = *v75;
              if ( *v75 )
              {
                v78 = *v72;
                v71 = (*(_DWORD *)(v77 + 8))-- == 1;
                if ( v71 )
                  break;
              }
              if ( ++v75 >= v76 )
                goto LABEL_57;
            }
            sub_15D7BC0(v78, v77);
            ++v75;
          }
          while ( v75 < v76 );
LABEL_57:
          v75 = (__int64 *)v72[1];
          if ( v75 )
LABEL_58:
            sub_186B220(v75 - 1);
        }
        v72 += 2;
      }
      while ( v72 != (__int64 *)v74 );
      v72 = *(__int64 **)v135;
    }
    sub_186B220(v72 - 1);
  }
  v79 = *(_QWORD *)v141;
  if ( *(_QWORD *)v141 )
  {
    v80 = *(_QWORD *)v142;
    v71 = (*(_DWORD *)(*(_QWORD *)v141 + 8LL))-- == 1;
    if ( v71 )
      sub_15D7BC0(v80, v79);
  }
  v81 = *(_QWORD *)v139;
  if ( *(_QWORD *)v139 )
  {
    v82 = *(_QWORD *)v140;
    v71 = (*(_DWORD *)(*(_QWORD *)v139 + 8LL))-- == 1;
    if ( v71 )
      sub_15D7BC0(v82, v81);
  }
  v83 = *(_QWORD *)v137;
  if ( *(_QWORD *)v137 )
  {
    v84 = v138;
    v71 = (*(_DWORD *)(*(_QWORD *)v137 + 8LL))-- == 1;
    if ( v71 )
      sub_15D7BC0(v84, v83);
  }
}

