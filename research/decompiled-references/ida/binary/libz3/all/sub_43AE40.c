__int64 __fastcall sub_43AE40(_QWORD *a1, __int64 a2, int a3)
{
  char **v3; // rbx
  char **v4; // rbx
  char **v5; // r13
  char **v6; // rbx
  char **v7; // r12
  char **v8; // rbx
  char **v9; // rbx
  char **v10; // rbx
  char **v11; // rbx
  char **exception; // rbx
  char **v13; // r13
  __int16 v17; // r11
  unsigned int v18; // eax
  int v19; // r14d
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  _QWORD *v29; // rcx
  __int64 v31; // r12
  __m128 *v32; // r10
  __int64 v33; // r9
  __int32 v34; // edi
  __int64 v35; // rax
  __m128 **v36; // rcx
  unsigned int v37; // edx
  __m128 **v38; // rsi
  __int64 v39; // rdx
  __m128 **v40; // r8
  __m128 **v41; // rax
  __m128 *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r12
  unsigned __int8 v45; // r12
  __int64 v46; // rax
  int v47; // r13d
  _QWORD *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // rax
  __int64 v56; // r13
  _QWORD *v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rcx
  int v60; // eax
  __int64 *v61; // rcx
  _QWORD *v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  __int64 *v66; // rcx
  __int64 v67; // rax
  int v68; // edx
  unsigned int v69; // ebx
  unsigned int v70; // ecx
  __m128 *v71; // rax
  unsigned int *v72; // rax
  __int64 v73; // rcx
  unsigned int v74; // r12d
  unsigned int v75; // ecx
  unsigned int *v76; // rax
  __int64 v77; // rcx
  _QWORD *v78; // rax
  unsigned int v79; // r15d
  unsigned int v80; // ecx
  unsigned int *v81; // rax
  __int64 v82; // r12
  unsigned int v83; // edx
  __int64 v84; // rcx
  int v85; // edx
  __int64 *v86; // rcx
  __int64 v87; // rax
  unsigned int v88; // edx
  _QWORD *v90; // rdx
  _QWORD *v91; // rdx
  unsigned int v92; // r12d
  unsigned int v93; // ecx
  unsigned int *v94; // rax
  __int64 v95; // rcx
  _QWORD *v96; // rdx
  _QWORD *v97; // rax
  unsigned int v98; // edx
  __int64 v99; // rcx
  int v100; // edx
  __int64 *v101; // rcx
  __int64 v102; // rax
  int v103; // edx
  __int64 v104; // rax
  __int64 v105; // rbx
  _QWORD *v106; // rax
  unsigned int v107; // edx
  __int64 v108; // rcx
  int v109; // edx
  __int64 *v110; // rcx
  _QWORD *v111; // rdx
  unsigned int v112; // r14d
  unsigned int v113; // ecx
  unsigned int *v114; // rax
  __int64 v115; // rcx
  _QWORD *v116; // rax
  unsigned int v117; // r13d
  unsigned int v118; // ecx
  unsigned int *v119; // rdx
  __int64 v120; // rcx
  unsigned int v121; // r12d
  unsigned int v122; // ecx
  unsigned int *v123; // rdx
  __int64 v124; // rcx
  unsigned int v125; // r13d
  unsigned int v126; // ecx
  unsigned int *v127; // rax
  __int64 v128; // rsi
  unsigned int v129; // r13d
  unsigned int v130; // ecx
  unsigned int *v131; // rdx
  __int64 v132; // rcx
  _QWORD *v133; // rax
  _QWORD *v134; // rax
  _QWORD *v135; // rax
  _QWORD *v136; // rax
  int v137; // [rsp+0h] [rbp-68h]
  int v138; // [rsp+8h] [rbp-60h]
  __int64 v139; // [rsp+10h] [rbp-58h] BYREF
  int v140; // [rsp+18h] [rbp-50h]
  int v141; // [rsp+20h] [rbp-48h]
  char v142; // [rsp+28h] [rbp-40h]
  int v143; // [rsp+30h] [rbp-38h]
  int v144; // [rsp+38h] [rbp-30h]
  int v145; // [rsp+40h] [rbp-28h]
  void *v146; // [rsp+48h] [rbp-20h]

  v17 = *(_WORD *)(a2 + 4);
  if ( v17 )
  {
    v18 = *(_DWORD *)(a2 + 8);
    if ( a3 )
    {
      if ( v18 <= 1 )
        goto LABEL_4;
      goto LABEL_22;
    }
    goto LABEL_5;
  }
  v31 = a1[18];
  v32 = *(__m128 **)(a2 + 16);
  v33 = *(_QWORD *)(v31 + 8);
  v34 = v32->m128_i32[3];
  v35 = *(unsigned int *)(v33 + 40);
  v36 = *(__m128 ***)(v33 + 32);
  v37 = v35 - 1;
  v35 *= 24;
  v38 = (__m128 **)((char *)v36 + v35);
  v39 = 24LL * (v34 & v37);
  v40 = &v36[(unsigned __int64)v39 / 8];
  if ( v39 == v35 )
  {
LABEL_58:
    if ( v36 != v40 )
    {
      while ( 1 )
      {
        v71 = *v36;
        if ( (unsigned __int64)*v36 > 1 )
        {
          if ( v71->m128_i32[3] == v34 && v32 == v71 )
          {
            v41 = v36;
            goto LABEL_38;
          }
        }
        else if ( !v71 )
        {
          goto LABEL_20;
        }
        v36 += 3;
        if ( v40 == v36 )
          goto LABEL_20;
      }
    }
    goto LABEL_20;
  }
  v41 = &v36[(unsigned __int64)v39 / 8];
  while ( 1 )
  {
    v42 = *v41;
    if ( (unsigned __int64)*v41 > 1 )
      break;
    if ( !v42 )
      goto LABEL_20;
LABEL_17:
    v41 += 3;
    if ( v38 == v41 )
      goto LABEL_58;
  }
  if ( v42->m128_i32[3] != v34 || v32 != v42 )
    goto LABEL_17;
LABEL_38:
  v51 = *(unsigned int *)(v31 + 16);
  if ( (_DWORD)v51 != *((_DWORD *)v41 + 4) )
  {
LABEL_20:
    v18 = *(_DWORD *)(a2 + 8);
    if ( a3 )
    {
      v19 = 0;
      if ( v18 <= 1 )
      {
LABEL_77:
        v78 = (_QWORD *)a1[7];
        if ( *(_DWORD *)(a2 + 24) )
        {
          v45 = (a3 - 1) & 3;
          if ( a3 == 3 )
            v45 = 3;
          if ( v78 )
            v47 = *((_DWORD *)v78 - 1);
          else
            v47 = 0;
          v48 = (_QWORD *)a1[5];
          if ( v48 )
          {
            v49 = *((unsigned int *)v48 - 1);
            if ( (_DWORD)v49 != *((_DWORD *)v48 - 2) )
              goto LABEL_35;
            v79 = (unsigned int)(3 * v49 + 1) >> 1;
            v80 = 16 * v79 + 8;
            if ( 16 * (int)v49 + 8 >= v80 || (unsigned int)v49 >= v79 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v139, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v139);
              sub_233E40((__int64)&v139);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            goto LABEL_86;
          }
LABEL_124:
          v116 = (_QWORD *)sub_186B270(0x28u);
          *v116 = 2;
          v48 = v116 + 1;
          a1[5] = v116 + 1;
          v50 = (__int64)(v116 + 1);
          goto LABEL_36;
        }
LABEL_88:
        v82 = a1[1];
        *(_DWORD *)(a2 + 8) += 2;
        if ( v78 )
        {
          v83 = *((_DWORD *)v78 - 1);
          if ( v83 == *((_DWORD *)v78 - 2) )
          {
            v129 = (3 * v83 + 1) >> 1;
            v130 = 8 * v129 + 8;
            if ( 8 * v83 + 8 >= v130 || v83 >= v129 )
            {
              v13 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v139, "Overflow encountered when expanding vector");
              *v13 = (char *)off_1C63128;
              sub_2333C0(v13 + 1, &v139);
              sub_233E40((__int64)&v139);
              __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v131 = (unsigned int *)sub_186B300(v78 - 1, v130);
            v78 = v131 + 2;
            v132 = v131[1];
            *v131 = v129;
            a1[7] = v131 + 2;
            LODWORD(v131) = v132;
            v86 = &v78[v132];
            v85 = (_DWORD)v131 + 1;
          }
          else
          {
            v84 = v83;
            v85 = v83 + 1;
            v86 = &v78[v84];
          }
        }
        else
        {
          v136 = (_QWORD *)sub_186B270(0x18u);
          *v136 = 2;
          v78 = v136 + 1;
          v85 = 1;
          a1[7] = v78;
          v86 = v78;
        }
        *v86 = a2;
        *((_DWORD *)v78 - 1) = v85;
        v87 = a1[11];
        if ( v87 )
        {
          v88 = *(_DWORD *)(v87 - 4);
          if ( v88 == *(_DWORD *)(v87 - 8) )
          {
            v125 = (3 * v88 + 1) >> 1;
            v126 = 8 * v125 + 8;
            if ( 8 * v88 + 8 >= v126 || v88 >= v125 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v139, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, &v139);
              sub_233E40((__int64)&v139);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v127 = (unsigned int *)sub_186B300((void *)(v87 - 8), v126);
            v128 = v127[1];
            *v127 = v125;
            a1[11] = v127 + 2;
            *(_QWORD *)&v127[2 * v128 + 2] = 0;
            v127[1] = v128 + 1;
          }
          else
          {
            *(_QWORD *)(v87 + 8LL * v88) = 0;
            *(_DWORD *)(v87 - 4) = v88 + 1;
          }
        }
        else
        {
          v135 = (_QWORD *)sub_186B270(0x18u);
          v135[1] = 0;
          a1[11] = v135 + 1;
          *v135 = 0x100000002LL;
        }
        if ( (*(_DWORD *)(a2 + 8))-- == 1 )
          sub_15D7BC0(v82, a2);
        return 1;
      }
LABEL_22:
      if ( a2 != a1[15] )
      {
        if ( v17 )
        {
          if ( v17 != 2 )
          {
            if ( v17 != 1 )
              goto LABEL_67;
            goto LABEL_70;
          }
        }
        else if ( !*(_DWORD *)(a2 + 24) )
        {
          v78 = (_QWORD *)a1[7];
          goto LABEL_88;
        }
        v43 = sub_1680FB0(a1[4], a2, 0);
        v44 = v43;
        if ( v43 )
        {
          ++*(_DWORD *)(v43 + 8);
          v97 = (_QWORD *)a1[7];
          if ( v97 )
          {
            v98 = *((_DWORD *)v97 - 1);
            if ( v98 == *((_DWORD *)v97 - 2) )
            {
              v117 = (3 * v98 + 1) >> 1;
              v118 = 8 * v117 + 8;
              if ( 8 * v98 + 8 >= v118 || v98 >= v117 )
              {
                v7 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v139, "Overflow encountered when expanding vector");
                *v7 = (char *)off_1C63128;
                sub_2333C0(v7 + 1, &v139);
                sub_233E40((__int64)&v139);
                __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v119 = (unsigned int *)sub_186B300(v97 - 1, v118);
              v97 = v119 + 2;
              v120 = v119[1];
              *v119 = v117;
              a1[7] = v119 + 2;
              LODWORD(v119) = v120;
              v101 = &v97[v120];
              v100 = (_DWORD)v119 + 1;
            }
            else
            {
              v99 = v98;
              v100 = v98 + 1;
              v101 = &v97[v99];
            }
          }
          else
          {
            v133 = (_QWORD *)sub_186B270(0x18u);
            v100 = 1;
            *v133 = 2;
            v97 = v133 + 1;
            a1[7] = v97;
            v101 = v97;
          }
          *v101 = v44;
          *((_DWORD *)v97 - 1) = v100;
          if ( a2 != v44 )
          {
            v102 = a1[5];
            if ( v102 )
            {
              v103 = *(_DWORD *)(v102 - 4);
              if ( v103 )
                *(_BYTE *)(v102 + 16LL * (unsigned int)(v103 - 1) + 8) |= 2u;
            }
          }
          v104 = sub_1680FB0(a1[9], a2, 0);
          v105 = v104;
          if ( v104 )
            ++*(_DWORD *)(v104 + 8);
          v106 = (_QWORD *)a1[11];
          if ( v106 )
          {
            v107 = *((_DWORD *)v106 - 1);
            if ( v107 == *((_DWORD *)v106 - 2) )
            {
              v121 = (3 * v107 + 1) >> 1;
              v122 = 8 * v121 + 8;
              if ( 8 * v107 + 8 >= v122 || v107 >= v121 )
              {
                v6 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v139, "Overflow encountered when expanding vector");
                *v6 = (char *)off_1C63128;
                sub_2333C0(v6 + 1, &v139);
                sub_233E40((__int64)&v139);
                __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v123 = (unsigned int *)sub_186B300(v106 - 1, v122);
              v106 = v123 + 2;
              v124 = v123[1];
              *v123 = v121;
              a1[11] = v123 + 2;
              LODWORD(v123) = v124;
              v110 = &v106[v124];
              v109 = (_DWORD)v123 + 1;
            }
            else
            {
              v108 = v107;
              v109 = v107 + 1;
              v110 = &v106[v108];
            }
          }
          else
          {
            v134 = (_QWORD *)sub_186B270(0x18u);
            v109 = 1;
            *v134 = 2;
            v106 = v134 + 1;
            a1[11] = v106;
            v110 = v106;
          }
          *v110 = v105;
          *((_DWORD *)v106 - 1) = v109;
          return 1;
        }
        v17 = *(_WORD *)(a2 + 4);
        v19 = 1;
LABEL_27:
        if ( v17 != 1 )
        {
          if ( v17 == 2 )
          {
            v45 = (a3 - 1) & 3;
            if ( a3 == 3 )
              v45 = 3;
            v46 = a1[7];
            if ( v46 )
              v47 = *(_DWORD *)(v46 - 4);
            else
              v47 = 0;
            v48 = (_QWORD *)a1[5];
            if ( v48 )
            {
              v49 = *((unsigned int *)v48 - 1);
              if ( (_DWORD)v49 != *((_DWORD *)v48 - 2) )
              {
LABEL_35:
                v50 = (__int64)&v48[2 * v49];
LABEL_36:
                *(_QWORD *)v50 = a2;
                *(_DWORD *)(v50 + 12) = v47;
                *(_DWORD *)(v50 + 8) = v19 | (16 * v45);
                ++*((_DWORD *)v48 - 1);
                return 0;
              }
              v79 = (unsigned int)(3 * v49 + 1) >> 1;
              v80 = 16 * v79 + 8;
              if ( 16 * (int)v49 + 8 >= v80 || (unsigned int)v49 >= v79 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v139, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, &v139);
                sub_233E40((__int64)&v139);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
LABEL_86:
              v81 = (unsigned int *)sub_186B300(v48 - 1, v80);
              v48 = v81 + 2;
              a1[5] = v81 + 2;
              *v81 = v79;
              v50 = (__int64)&v81[4 * v81[1] + 2];
              goto LABEL_36;
            }
            goto LABEL_124;
          }
          if ( v17 )
          {
LABEL_67:
            sub_1872CE0("");
            sub_1873130(114, 226);
          }
          goto LABEL_77;
        }
LABEL_70:
        sub_43A200(a1, a2);
        return 1;
      }
LABEL_4:
      v19 = 0;
      goto LABEL_27;
    }
LABEL_5:
    v20 = (_QWORD *)a1[7];
    *(_DWORD *)(a2 + 8) = v18 + 1;
    if ( v20 )
    {
      v21 = *((_DWORD *)v20 - 1);
      if ( v21 == *((_DWORD *)v20 - 2) )
      {
        v74 = (3 * v21 + 1) >> 1;
        v75 = 8 * v74 + 8;
        if ( 8 * v21 + 8 >= v75 || v21 >= v74 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v139, "Overflow encountered when expanding vector");
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, &v139);
          sub_233E40((__int64)&v139);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v76 = (unsigned int *)sub_186B300(v20 - 1, v75);
        v77 = v76[1];
        v20 = v76 + 2;
        *v76 = v74;
        a1[7] = v76 + 2;
        LODWORD(v76) = v77;
        v24 = &v20[v77];
        v23 = (_DWORD)v76 + 1;
      }
      else
      {
        v22 = v21;
        v23 = v21 + 1;
        v24 = &v20[v22];
      }
    }
    else
    {
      v90 = (_QWORD *)sub_186B270(0x18u);
      *v90 = 2;
      v23 = 1;
      v20 = v90 + 1;
      a1[7] = v20;
      v24 = v20;
    }
    *v24 = a2;
    *((_DWORD *)v20 - 1) = v23;
    v25 = (_QWORD *)a1[11];
    if ( v25 )
    {
      v26 = *((_DWORD *)v25 - 1);
      if ( v26 == *((_DWORD *)v25 - 2) )
      {
        v69 = (3 * v26 + 1) >> 1;
        v70 = 8 * v69 + 8;
        if ( 8 * v26 + 8 >= v70 || v26 >= v69 )
        {
          v11 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v139, "Overflow encountered when expanding vector");
          *v11 = (char *)off_1C63128;
          sub_2333C0(v11 + 1, &v139);
          sub_233E40((__int64)&v139);
          __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        goto LABEL_73;
      }
      goto LABEL_10;
    }
LABEL_101:
    v96 = (_QWORD *)sub_186B270(0x18u);
    *v96 = 2;
    v28 = 1;
    v25 = v96 + 1;
    a1[11] = v25;
    v29 = v25;
    goto LABEL_11;
  }
  v52 = sub_439010(*(_QWORD *)(v31 + 8), v32, v51, *(_DWORD *)(v31 + 20));
  v55 = sub_15DC610(
          *(_QWORD *)v31,
          v52,
          *(_DWORD *)(v52 + 32),
          (int)a2 + 32,
          v53,
          v54,
          v137,
          v138,
          v139,
          v140,
          v141,
          v142,
          v143,
          v144,
          v145,
          v146);
  v56 = v55;
  if ( v55 )
    ++*(_DWORD *)(v55 + 8);
  v57 = *(_QWORD **)(v31 + 40);
  if ( v57 )
  {
    v58 = *((_DWORD *)v57 - 1);
    if ( v58 == *((_DWORD *)v57 - 2) )
    {
      v112 = (3 * v58 + 1) >> 1;
      v113 = 8 * v112 + 8;
      if ( 8 * v58 + 8 >= v113 || v58 >= v112 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v139, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, &v139);
        sub_233E40((__int64)&v139);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v114 = (unsigned int *)sub_186B300(v57 - 1, v113);
      v115 = v114[1];
      v57 = v114 + 2;
      *(_QWORD *)(v31 + 40) = v114 + 2;
      *v114 = v112;
      LODWORD(v114) = v115;
      v61 = &v57[v115];
      v60 = (_DWORD)v114 + 1;
    }
    else
    {
      v59 = v58;
      v60 = v58 + 1;
      v61 = &v57[v59];
    }
  }
  else
  {
    v91 = (_QWORD *)sub_186B270(0x18u);
    *v91 = 2;
    v60 = 1;
    v57 = v91 + 1;
    *(_QWORD *)(v31 + 40) = v57;
    v61 = v57;
  }
  *v61 = v56;
  *((_DWORD *)v57 - 1) = v60;
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  v62 = (_QWORD *)a1[7];
  if ( v62 )
  {
    v63 = *((_DWORD *)v62 - 1);
    if ( v63 == *((_DWORD *)v62 - 2) )
    {
      v92 = (3 * v63 + 1) >> 1;
      v93 = 8 * v92 + 8;
      if ( 8 * v63 + 8 >= v93 || v63 >= v92 )
      {
        v9 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v139, "Overflow encountered when expanding vector");
        *v9 = (char *)off_1C63128;
        sub_2333C0(v9 + 1, &v139);
        sub_233E40((__int64)&v139);
        __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v94 = (unsigned int *)sub_186B300(v62 - 1, v93);
      v95 = v94[1];
      v62 = v94 + 2;
      *v94 = v92;
      a1[7] = v94 + 2;
      LODWORD(v94) = v95;
      v66 = &v62[v95];
      v65 = (_DWORD)v94 + 1;
    }
    else
    {
      v64 = v63;
      v65 = v63 + 1;
      v66 = &v62[v64];
    }
  }
  else
  {
    v111 = (_QWORD *)sub_186B270(0x18u);
    *v111 = 2;
    v65 = 1;
    v62 = v111 + 1;
    a1[7] = v62;
    v66 = v62;
  }
  *v66 = v56;
  *((_DWORD *)v62 - 1) = v65;
  if ( a2 != v56 )
  {
    v67 = a1[5];
    if ( v67 )
    {
      v68 = *(_DWORD *)(v67 - 4);
      if ( v68 )
        *(_BYTE *)(v67 + 16LL * (unsigned int)(v68 - 1) + 8) |= 2u;
    }
  }
  v25 = (_QWORD *)a1[11];
  if ( !v25 )
    goto LABEL_101;
  v26 = *((_DWORD *)v25 - 1);
  if ( v26 != *((_DWORD *)v25 - 2) )
  {
LABEL_10:
    v27 = v26;
    v28 = v26 + 1;
    v29 = &v25[v27];
    goto LABEL_11;
  }
  v69 = (3 * v26 + 1) >> 1;
  v70 = 8 * v69 + 8;
  if ( 8 * v26 + 8 >= v70 || v26 >= v69 )
  {
    v8 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(&v139, "Overflow encountered when expanding vector");
    *v8 = (char *)off_1C63128;
    sub_2333C0(v8 + 1, &v139);
    sub_233E40((__int64)&v139);
    __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
LABEL_73:
  v72 = (unsigned int *)sub_186B300(v25 - 1, v70);
  v73 = v72[1];
  v25 = v72 + 2;
  a1[11] = v72 + 2;
  *v72 = v69;
  LODWORD(v72) = v73;
  v29 = &v25[v73];
  v28 = (_DWORD)v72 + 1;
LABEL_11:
  *v29 = 0;
  *((_DWORD *)v25 - 1) = v28;
  return 1;
}

