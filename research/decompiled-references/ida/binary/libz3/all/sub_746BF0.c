__int64 __fastcall sub_746BF0(_QWORD *a1, __int64 a2, int a3)
{
  char **v3; // r13
  char **v4; // rbx
  char **v5; // rbx
  char **v6; // rbx
  char **v7; // r13
  char **v8; // rbx
  char **exception; // rbx
  char **v10; // r13
  char **v11; // rbx
  char **v12; // r13
  __int16 v16; // ax
  __int16 v17; // ax
  _QWORD *v18; // rdx
  char v19; // al
  unsigned __int8 v20; // r13
  int v21; // ebp
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rax
  _QWORD *v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 *v30; // rdx
  _QWORD *v31; // rdi
  unsigned int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  _QWORD *v35; // rdx
  __int64 *v36; // r14
  __int64 v37; // r15
  _QWORD *v38; // rax
  __int64 v39; // r8
  __int64 v40; // rdx
  _QWORD *v41; // rbp
  __int64 v42; // r8
  unsigned int v43; // edx
  __int64 v44; // rax
  unsigned int i; // ecx
  __int64 v46; // rsi
  int v47; // eax
  _QWORD *v48; // rsi
  __int64 v49; // r8
  _QWORD *v50; // rdx
  unsigned int v51; // eax
  unsigned int v52; // r9d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rsi
  unsigned int v56; // ebp
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rdx
  unsigned __int8 v60; // bp
  __int64 v61; // rax
  int v62; // r13d
  _QWORD *v63; // rdx
  __int64 v64; // rax
  __int64 *v65; // rax
  unsigned int v66; // r9d
  size_t v67; // rsi
  unsigned int *v68; // rax
  __int64 v69; // rax
  int v70; // edx
  unsigned __int64 v71; // rdx
  __int64 *j; // r14
  __int64 v73; // rsi
  bool v74; // zf
  __int64 v75; // rax
  __int64 v76; // rbp
  _QWORD *v77; // rdx
  unsigned int v78; // eax
  __int64 v79; // rcx
  int v80; // eax
  __int64 *v81; // rcx
  __int64 v82; // rax
  int v83; // edx
  __int64 v84; // rax
  __int64 v85; // rbx
  _QWORD *v86; // rdx
  unsigned int v87; // eax
  __int64 v88; // rcx
  int v89; // eax
  __int64 *v90; // rcx
  unsigned int v91; // ebx
  size_t v92; // rsi
  unsigned int *v93; // rax
  __int64 v94; // rdx
  unsigned int v95; // r14d
  size_t v96; // rsi
  unsigned int *v97; // rax
  __int64 v98; // rax
  _QWORD *v99; // rax
  _QWORD *v100; // rdx
  unsigned int v101; // r14d
  size_t v102; // rsi
  unsigned int *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rbp
  unsigned int v106; // eax
  __int64 v107; // rcx
  int v108; // eax
  __int64 *v109; // rcx
  __int64 v110; // rax
  unsigned int v111; // edx
  _QWORD *v112; // rax
  _QWORD *v113; // rax
  unsigned int v114; // ebp
  unsigned int v115; // ecx
  unsigned int *v116; // rax
  __int64 v117; // rcx
  unsigned int v118; // r13d
  unsigned int v119; // ecx
  unsigned int *v120; // rax
  __int64 v121; // rcx
  _QWORD *v122; // rax
  unsigned int v123; // r13d
  unsigned int v124; // ecx
  unsigned int *v125; // rax
  __int64 v126; // rsi
  unsigned int v127; // r13d
  unsigned int v128; // ecx
  unsigned int *v129; // rax
  __int64 v130; // rcx
  _QWORD *v131; // rax
  _QWORD *v132; // rdx
  _QWORD *v133; // rax
  _QWORD *v134; // rdx
  __int64 v135; // [rsp+0h] [rbp-88h]
  unsigned int v136; // [rsp+0h] [rbp-88h]
  unsigned __int64 v137; // [rsp+0h] [rbp-88h]
  __int64 v138; // [rsp+0h] [rbp-88h]
  unsigned int v139; // [rsp+8h] [rbp-80h]
  __int64 v140; // [rsp+8h] [rbp-80h]
  unsigned int v141; // [rsp+8h] [rbp-80h]
  __int64 v142; // [rsp+10h] [rbp-78h]
  unsigned __int8 v143; // [rsp+1Bh] [rbp-6Dh]
  unsigned int v144; // [rsp+1Ch] [rbp-6Ch]
  __int64 v145[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v26 = (_QWORD *)a1[7];
    if ( v26 )
    {
      v27 = *((_DWORD *)v26 - 1);
      if ( v27 == *((_DWORD *)v26 - 2) )
      {
        v56 = (3 * v27 + 1) >> 1;
        v57 = 8 * v56 + 8;
        if ( 8 * v27 + 8 >= (unsigned int)v57 || v27 >= v56 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_743560(v145, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v145);
          sub_233E40((__int64)v145);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v58 = (unsigned int *)sub_186B300(v26 - 1, v57);
        v59 = v58[1];
        v26 = v58 + 2;
        *v58 = v56;
        a1[7] = v58 + 2;
        LODWORD(v58) = v59;
        v30 = &v26[v59];
        v29 = (_DWORD)v58 + 1;
      }
      else
      {
        v28 = v27;
        v29 = v27 + 1;
        v30 = &v26[v28];
      }
    }
    else
    {
      v113 = (_QWORD *)sub_186B270(0x18u);
      v26 = v113 + 1;
      *v113 = 2;
      v29 = 1;
      a1[7] = v26;
      v30 = v26;
    }
    *v30 = a2;
    *((_DWORD *)v26 - 1) = v29;
    v31 = (_QWORD *)a1[11];
    if ( v31 )
    {
      v32 = *((_DWORD *)v31 - 1);
      if ( v32 == *((_DWORD *)v31 - 2) )
      {
        v91 = (3 * v32 + 1) >> 1;
        v92 = 8 * v91 + 8;
        if ( 8 * v32 + 8 >= (unsigned int)v92 || v32 >= v91 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_743560(v145, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v145);
          sub_233E40((__int64)v145);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v93 = (unsigned int *)sub_186B300(v31 - 1, v92);
        v94 = v93[1];
        v31 = v93 + 2;
        *v93 = v91;
        a1[11] = v93 + 2;
        LODWORD(v93) = v94;
        v35 = &v31[v94];
        v34 = (_DWORD)v93 + 1;
      }
      else
      {
        v33 = v32;
        v34 = v32 + 1;
        v35 = &v31[v33];
      }
    }
    else
    {
      v112 = (_QWORD *)sub_186B270(0x18u);
      v31 = v112 + 1;
      *v112 = 2;
      v34 = 1;
      a1[11] = v31;
      v35 = v31;
    }
    *v35 = 0;
    *((_DWORD *)v31 - 1) = v34;
    return 1;
  }
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v143 = 0;
    goto LABEL_9;
  }
  v16 = *(_WORD *)(a2 + 4);
  if ( v16 )
  {
    if ( v16 != 2 )
    {
      if ( v16 != 1 )
        goto LABEL_7;
      goto LABEL_75;
    }
    goto LABEL_76;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_76:
    v75 = sub_1680FB0(a1[4], a2, 0);
    v143 = 1;
    v76 = v75;
    if ( v75 )
    {
      v77 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v75 + 8);
      if ( v77 )
      {
        v78 = *((_DWORD *)v77 - 1);
        if ( v78 == *((_DWORD *)v77 - 2) )
        {
          v118 = (3 * v78 + 1) >> 1;
          v119 = 8 * v118 + 8;
          if ( 8 * v78 + 8 >= v119 || v78 >= v118 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_743560(v145, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v145);
            sub_233E40((__int64)v145);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v120 = (unsigned int *)sub_186B300(v77 - 1, v119);
          v121 = v120[1];
          v77 = v120 + 2;
          *v120 = v118;
          a1[7] = v120 + 2;
          LODWORD(v120) = v121;
          v81 = &v77[v121];
          v80 = (_DWORD)v120 + 1;
        }
        else
        {
          v79 = v78;
          v80 = v78 + 1;
          v81 = &v77[v79];
        }
      }
      else
      {
        v100 = (_QWORD *)sub_186B270(0x18u);
        *v100 = 2;
        v80 = 1;
        v77 = v100 + 1;
        a1[7] = v77;
        v81 = v77;
      }
      *v81 = v76;
      *((_DWORD *)v77 - 1) = v80;
      if ( a2 != v76 )
      {
        v82 = a1[5];
        if ( v82 )
        {
          v83 = *(_DWORD *)(v82 - 4);
          if ( v83 )
            *(_BYTE *)(v82 + 16LL * (unsigned int)(v83 - 1) + 8) |= 2u;
        }
      }
      v84 = sub_1680FB0(a1[9], a2, 0);
      v85 = v84;
      if ( v84 )
        ++*(_DWORD *)(v84 + 8);
      v86 = (_QWORD *)a1[11];
      if ( v86 )
      {
        v87 = *((_DWORD *)v86 - 1);
        if ( v87 == *((_DWORD *)v86 - 2) )
        {
          v114 = (3 * v87 + 1) >> 1;
          v115 = 8 * v114 + 8;
          if ( 8 * v87 + 8 >= v115 || v87 >= v114 )
          {
            v11 = (char **)__cxa_allocate_exception(0x28u);
            sub_743560(v145, "Overflow encountered when expanding vector");
            *v11 = (char *)off_1C63128;
            sub_2333C0(v11 + 1, v145);
            sub_233E40((__int64)v145);
            __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v116 = (unsigned int *)sub_186B300(v86 - 1, v115);
          v117 = v116[1];
          v86 = v116 + 2;
          *v116 = v114;
          a1[11] = v116 + 2;
          LODWORD(v116) = v117;
          v90 = &v86[v117];
          v89 = (_DWORD)v116 + 1;
        }
        else
        {
          v88 = v87;
          v89 = v87 + 1;
          v90 = &v86[v88];
        }
      }
      else
      {
        v132 = (_QWORD *)sub_186B270(0x18u);
        *v132 = 2;
        v89 = 1;
        v86 = v132 + 1;
        a1[11] = v86;
        v90 = v86;
      }
      *v90 = v85;
      *((_DWORD *)v86 - 1) = v89;
      return 1;
    }
LABEL_9:
    v17 = *(_WORD *)(a2 + 4);
    if ( v17 != 2 )
    {
      if ( v17 != 1 )
        goto LABEL_11;
LABEL_75:
      sub_745FA0(a1, a2);
      return 1;
    }
    v36 = (__int64 *)a1[18];
    v142 = *v36;
    if ( *(_DWORD *)(a2 + 20) )
    {
      v37 = *(_QWORD *)(a2 + 80);
      if ( v37 )
        ++*(_DWORD *)(v37 + 8);
      v38 = (_QWORD *)(sub_186B270(0x18u) + 8);
      v39 = 0;
      v40 = 1;
      *(v38 - 1) = 2;
      v41 = v38;
      while ( 1 )
      {
        *v38 = v37;
        v42 = v39 + 1;
        *((_DWORD *)v41 - 1) = v40;
        if ( (unsigned int)v42 >= *(_DWORD *)(a2 + 20) )
          break;
        while ( 1 )
        {
          v37 = *(_QWORD *)(a2 + 8 * v42 + 80);
          if ( v37 )
            ++*(_DWORD *)(v37 + 8);
          v43 = *((_DWORD *)v41 - 1);
          if ( v43 == *((_DWORD *)v41 - 2) )
            break;
          v44 = v43;
          v40 = v43 + 1;
          ++v42;
          v41[v44] = v37;
          *((_DWORD *)v41 - 1) = v40;
          if ( (unsigned int)v42 >= *(_DWORD *)(a2 + 20) )
            goto LABEL_40;
        }
        v66 = (3 * v43 + 1) >> 1;
        v67 = 8 * v66 + 8;
        if ( 8 * v43 + 8 >= (unsigned int)v67 || v43 >= v66 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_743560(v145, "Overflow encountered when expanding vector");
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, v145);
          sub_233E40((__int64)v145);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v140 = v42;
        v136 = (3 * v43 + 1) >> 1;
        v68 = (unsigned int *)sub_186B300(v41 - 1, v67);
        v41 = v68 + 2;
        v39 = v140;
        *v68 = v136;
        v69 = v68[1];
        v70 = v69;
        v38 = &v41[v69];
        v40 = (unsigned int)(v70 + 1);
      }
LABEL_40:
      for ( i = 0; i < (unsigned int)v40; ++i )
      {
        v49 = v41[i];
        if ( v49 )
          ++*(_DWORD *)(v49 + 8);
        v50 = (_QWORD *)v36[13];
        if ( v50 )
        {
          v51 = *((_DWORD *)v50 - 1);
          if ( v51 == *((_DWORD *)v50 - 2) )
          {
            v52 = (3 * v51 + 1) >> 1;
            v53 = 8 * v52 + 8;
            if ( 8 * v51 + 8 >= (unsigned int)v53 || v51 >= v52 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_743560(v145, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v145);
              sub_233E40((__int64)v145);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v144 = (3 * v51 + 1) >> 1;
            v139 = i;
            v135 = v49;
            v54 = (unsigned int *)sub_186B300(v50 - 1, v53);
            v55 = v54[1];
            v50 = v54 + 2;
            v49 = v135;
            i = v139;
            v36[13] = (__int64)(v54 + 2);
            *v54 = v144;
            LODWORD(v54) = v55;
            v48 = &v50[v55];
            v47 = (_DWORD)v54 + 1;
          }
          else
          {
            v46 = v51;
            v47 = v51 + 1;
            v48 = &v50[v46];
          }
        }
        else
        {
          v141 = i;
          v138 = v49;
          v99 = (_QWORD *)sub_186B270(0x18u);
          v50 = v99 + 1;
          v49 = v138;
          v48 = v50;
          *v99 = 2;
          i = v141;
          v47 = 1;
          v36[13] = (__int64)v50;
        }
        *v48 = v49;
        *((_DWORD *)v50 - 1) = v47;
        v40 = *((unsigned int *)v41 - 1);
      }
      v71 = (unsigned __int64)&v41[v40];
      for ( j = v41; (unsigned __int64)j < v71; ++j )
      {
        v73 = *j;
        if ( *j )
        {
          v74 = (*(_DWORD *)(v73 + 8))-- == 1;
          if ( v74 )
          {
            v137 = v71;
            sub_15D7BC0(v142, v73);
            v71 = v137;
          }
        }
      }
      sub_186B220(v41 - 1);
      v17 = *(_WORD *)(a2 + 4);
      if ( v17 == 1 )
        goto LABEL_75;
      if ( v17 != 2 )
      {
LABEL_11:
        if ( v17 )
        {
LABEL_7:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
        goto LABEL_12;
      }
    }
    v60 = (a3 - 1) & 3;
    if ( a3 == 3 )
      v60 = 3;
    v61 = a1[7];
    if ( v61 )
      v62 = *(_DWORD *)(v61 - 4);
    else
      v62 = 0;
    v63 = (_QWORD *)a1[5];
    if ( v63 )
    {
      v64 = *((unsigned int *)v63 - 1);
      if ( (_DWORD)v64 == *((_DWORD *)v63 - 2) )
      {
        v95 = (unsigned int)(3 * v64 + 1) >> 1;
        v96 = 16 * v95 + 8;
        if ( 16 * (int)v64 + 8 >= (unsigned int)v96 || (unsigned int)v64 >= v95 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_743560(v145, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v145);
          sub_233E40((__int64)v145);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v97 = (unsigned int *)sub_186B300(v63 - 1, v96);
        v63 = v97 + 2;
        *v97 = v95;
        v98 = v97[1];
        a1[5] = v63;
        v65 = &v63[2 * v98];
      }
      else
      {
        v65 = &v63[2 * v64];
      }
    }
    else
    {
      v122 = (_QWORD *)sub_186B270(0x28u);
      v63 = v122 + 1;
      *v122 = 2;
      a1[5] = v122 + 1;
      v65 = v122 + 1;
    }
    *v65 = a2;
    *((_DWORD *)v65 + 3) = v62;
    *((_DWORD *)v65 + 2) = v143 | (16 * v60);
    ++*((_DWORD *)v63 - 1);
    return 0;
  }
  v143 = 0;
LABEL_12:
  v18 = (_QWORD *)a1[7];
  if ( !*(_DWORD *)(a2 + 24) )
  {
    v105 = a1[1];
    *(_DWORD *)(a2 + 8) += 2;
    if ( v18 )
    {
      v106 = *((_DWORD *)v18 - 1);
      if ( v106 == *((_DWORD *)v18 - 2) )
      {
        v127 = (3 * v106 + 1) >> 1;
        v128 = 8 * v127 + 8;
        if ( 8 * v106 + 8 >= v128 || v106 >= v127 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_743560(v145, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v145);
          sub_233E40((__int64)v145);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v129 = (unsigned int *)sub_186B300(v18 - 1, v128);
        v130 = v129[1];
        v18 = v129 + 2;
        *v129 = v127;
        a1[7] = v129 + 2;
        LODWORD(v129) = v130;
        v109 = &v18[v130];
        v108 = (_DWORD)v129 + 1;
      }
      else
      {
        v107 = v106;
        v108 = v106 + 1;
        v109 = &v18[v107];
      }
    }
    else
    {
      v134 = (_QWORD *)sub_186B270(0x18u);
      *v134 = 2;
      v108 = 1;
      v18 = v134 + 1;
      a1[7] = v18;
      v109 = v18;
    }
    *v109 = a2;
    *((_DWORD *)v18 - 1) = v108;
    v110 = a1[11];
    if ( v110 )
    {
      v111 = *(_DWORD *)(v110 - 4);
      if ( v111 == *(_DWORD *)(v110 - 8) )
      {
        v123 = (3 * v111 + 1) >> 1;
        v124 = 8 * v123 + 8;
        if ( 8 * v111 + 8 >= v124 || v111 >= v123 )
        {
          v12 = (char **)__cxa_allocate_exception(0x28u);
          sub_743560(v145, "Overflow encountered when expanding vector");
          *v12 = (char *)off_1C63128;
          sub_2333C0(v12 + 1, v145);
          sub_233E40((__int64)v145);
          __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v125 = (unsigned int *)sub_186B300((void *)(v110 - 8), v124);
        v126 = v125[1];
        *v125 = v123;
        a1[11] = v125 + 2;
        *(_QWORD *)&v125[2 * v126 + 2] = 0;
        v125[1] = v126 + 1;
      }
      else
      {
        *(_QWORD *)(v110 + 8LL * v111) = 0;
        *(_DWORD *)(v110 - 4) = v111 + 1;
      }
    }
    else
    {
      v133 = (_QWORD *)sub_186B270(0x18u);
      v133[1] = 0;
      a1[11] = v133 + 1;
      *v133 = 0x100000002LL;
    }
    v74 = (*(_DWORD *)(a2 + 8))-- == 1;
    if ( v74 )
      sub_15D7BC0(v105, a2);
    return 1;
  }
  v19 = 3;
  if ( a3 != 3 )
    v19 = (a3 - 1) & 3;
  v20 = v19;
  if ( v18 )
    v21 = *((_DWORD *)v18 - 1);
  else
    v21 = 0;
  v22 = (_QWORD *)a1[5];
  if ( v22 )
  {
    v23 = *((unsigned int *)v22 - 1);
    if ( (_DWORD)v23 == *((_DWORD *)v22 - 2) )
    {
      v101 = (unsigned int)(3 * v23 + 1) >> 1;
      v102 = 16 * v101 + 8;
      if ( 16 * (int)v23 + 8 >= (unsigned int)v102 || (unsigned int)v23 >= v101 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_743560(v145, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v145);
        sub_233E40((__int64)v145);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v103 = (unsigned int *)sub_186B300(v22 - 1, v102);
      v22 = v103 + 2;
      *v103 = v101;
      v104 = v103[1];
      a1[5] = v22;
      v24 = &v22[2 * v104];
    }
    else
    {
      v24 = &v22[2 * v23];
    }
  }
  else
  {
    v131 = (_QWORD *)sub_186B270(0x28u);
    v22 = v131 + 1;
    *v131 = 2;
    a1[5] = v131 + 1;
    v24 = v131 + 1;
  }
  *v24 = a2;
  *((_DWORD *)v24 + 3) = v21;
  *((_DWORD *)v24 + 2) = (16 * v20) | v143;
  ++*((_DWORD *)v22 - 1);
  return 0;
}

