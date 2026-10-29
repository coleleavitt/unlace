__int64 __fastcall sub_B107F0(_QWORD *a1, __int64 a2, char a3)
{
  char **v3; // rbp
  char **v4; // rbp
  char **exception; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **v8; // rbp
  _QWORD *v9; // r12
  _QWORD *v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // rsi
  int v17; // eax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rsi
  int v22; // eax
  __int64 v23; // r14
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // r13
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  _QWORD *v30; // rcx
  __int64 v31; // r14
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // r13
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  _QWORD *v38; // rcx
  __int64 v39; // r13
  int v40; // r14d
  __int64 v41; // rax
  _QWORD *v42; // rdx
  __int64 v43; // r12
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 *v47; // rcx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r12
  _QWORD *v51; // rdi
  __int64 v52; // r15
  __int64 v53; // r14
  __int64 v54; // rdi
  int v55; // edx
  unsigned int *v56; // rdx
  int v57; // r13d
  int v58; // edx
  unsigned int **v59; // r14
  unsigned int v61; // r14d
  size_t v62; // rsi
  unsigned int *v63; // rax
  __int64 v64; // rcx
  unsigned int v65; // r12d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rcx
  unsigned int v69; // ecx
  size_t v70; // rsi
  unsigned int *v71; // rax
  unsigned int v72; // r13d
  size_t v73; // rdi
  __int64 v74; // rax
  int *v75; // r9
  _DWORD *v76; // r15
  __int64 v77; // rax
  _QWORD *v78; // rdx
  int *v79; // rdi
  int *j; // rax
  int v81; // ecx
  char v82; // si
  __int64 v83; // rcx
  unsigned int v84; // r13d
  size_t v85; // rdi
  __int64 v86; // rax
  int *v87; // r9
  _DWORD *v88; // r15
  __int64 v89; // rax
  _QWORD *v90; // rdx
  int *v91; // rdi
  int *i; // rax
  int v93; // ecx
  char v94; // si
  __int64 v95; // rcx
  _QWORD *v96; // rax
  int v97; // eax
  __int64 v98; // rdi
  __int64 v99; // r13
  __int64 v100; // rdi
  char v101; // r14
  unsigned int **v102; // r14
  __int64 v103; // r15
  __int64 v104; // r12
  __int64 v105; // r15
  __int64 v106; // r13
  _QWORD *v107; // rax
  _QWORD *v108; // rdx
  _QWORD *v109; // r15
  unsigned int v110; // eax
  __int64 v111; // rcx
  int v112; // eax
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  unsigned int v117; // r14d
  unsigned int v118; // ecx
  unsigned int *v119; // rax
  __int64 v120; // rcx
  _QWORD *v121; // rdx
  unsigned int v123; // [rsp+8h] [rbp-C0h]
  _QWORD *v124; // [rsp+10h] [rbp-B8h]
  _QWORD v125[3]; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD *v126; // [rsp+30h] [rbp-98h]
  _QWORD v127[3]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v128; // [rsp+50h] [rbp-78h]
  _QWORD v129[3]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD *v130; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v131[10]; // [rsp+78h] [rbp-50h] BYREF

  v9 = a1 + 84;
  v12 = (_QWORD *)a1[84];
  if ( v12 )
  {
    v13 = *((unsigned int *)v12 - 1);
    if ( (_DWORD)v13 == *((_DWORD *)v12 - 2) )
    {
      v84 = (unsigned int)(3 * v13 + 1) >> 1;
      v85 = 16 * v84 + 8;
      if ( 16 * (int)v13 + 8 >= (unsigned int)v85 || (unsigned int)v13 >= v84 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B035D0((__int64 *)&v130, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v130);
        sub_233E40((__int64)&v130);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v86 = sub_186B270(v85);
      v87 = (int *)a1[84];
      v88 = (_DWORD *)v86;
      v12 = (_QWORD *)(v86 + 8);
      if ( v87 )
      {
        v89 = (unsigned int)*(v87 - 1);
        v90 = v12;
        v88[1] = v89;
        v91 = &v87[4 * v89];
        for ( i = v87; i != v91; *(v90 - 1) = v95 )
        {
          v93 = *i;
          v94 = *((_BYTE *)i + 4);
          i += 4;
          v90 += 2;
          *((_DWORD *)v90 - 4) = v93;
          *((_BYTE *)v90 - 12) = v94 & 3 | *((_BYTE *)v90 - 12) & 0xFC;
          v95 = *((_QWORD *)i - 1);
          *((_QWORD *)i - 1) = 0;
        }
        sub_186B220(v87 - 2);
        v14 = &v12[2 * (unsigned int)v88[1]];
      }
      else
      {
        *(_DWORD *)(v86 + 4) = 0;
        v14 = (_QWORD *)(v86 + 8);
      }
      a1[84] = v12;
      *v88 = v84;
    }
    else
    {
      v14 = &v12[2 * v13];
    }
  }
  else
  {
    v115 = (_QWORD *)sub_186B270(0x28u);
    v12 = v115 + 1;
    *v115 = 2;
    a1[84] = v115 + 1;
    v14 = v115 + 1;
  }
  *v14 = 0;
  v15 = *((unsigned int *)v12 - 1);
  v14[1] = 0;
  *((_DWORD *)v12 - 1) = v15 + 1;
  v16 = &v12[2 * v15];
  if ( (*(_BYTE *)(a2 + 172) & 1) != 0 )
  {
    sub_182EA00(a1[85], v16, a2 + 168);
    v12 = (_QWORD *)a1[84];
    if ( !v12 )
    {
      v96 = (_QWORD *)sub_186B270(0x28u);
      v12 = v96 + 1;
      *v96 = 2;
      a1[84] = v96 + 1;
      v19 = v96 + 1;
      goto LABEL_8;
    }
  }
  else
  {
    v17 = *(_DWORD *)(a2 + 168);
    *((_BYTE *)v16 + 4) &= ~1u;
    *(_DWORD *)v16 = v17;
  }
  v18 = *((unsigned int *)v12 - 1);
  if ( (_DWORD)v18 == *((_DWORD *)v12 - 2) )
  {
    v72 = (unsigned int)(3 * v18 + 1) >> 1;
    v73 = 16 * v72 + 8;
    if ( 16 * (int)v18 + 8 >= (unsigned int)v73 || (unsigned int)v18 >= v72 )
    {
      v7 = (char **)__cxa_allocate_exception(0x28u);
      sub_B035D0((__int64 *)&v130, "Overflow encountered when expanding vector");
      *v7 = (char *)off_1C63128;
      sub_2333C0(v7 + 1, &v130);
      sub_233E40((__int64)&v130);
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v74 = sub_186B270(v73);
    v75 = (int *)a1[84];
    v76 = (_DWORD *)v74;
    v12 = (_QWORD *)(v74 + 8);
    if ( v75 )
    {
      v77 = (unsigned int)*(v75 - 1);
      v78 = v12;
      v76[1] = v77;
      v79 = &v75[4 * v77];
      for ( j = v75; j != v79; *(v78 - 1) = v83 )
      {
        v81 = *j;
        v82 = *((_BYTE *)j + 4);
        j += 4;
        v78 += 2;
        *((_DWORD *)v78 - 4) = v81;
        *((_BYTE *)v78 - 12) = v82 & 3 | *((_BYTE *)v78 - 12) & 0xFC;
        v83 = *((_QWORD *)j - 1);
        *((_QWORD *)j - 1) = 0;
      }
      sub_186B220(v75 - 2);
      v19 = &v12[2 * (unsigned int)v76[1]];
    }
    else
    {
      *(_DWORD *)(v74 + 4) = 0;
      v19 = (_QWORD *)(v74 + 8);
    }
    a1[84] = v12;
    *v76 = v72;
  }
  else
  {
    v19 = &v12[2 * v18];
  }
LABEL_8:
  *v19 = 0;
  v19[1] = 0;
  v20 = *((unsigned int *)v12 - 1);
  *((_DWORD *)v12 - 1) = v20 + 1;
  v21 = &v12[2 * v20];
  if ( (*(_BYTE *)(a2 + 196) & 1) != 0 )
  {
    sub_182EA00(a1[85], v21, a2 + 192);
  }
  else
  {
    v22 = *(_DWORD *)(a2 + 192);
    *((_BYTE *)v21 + 4) &= ~1u;
    *(_DWORD *)v21 = v22;
  }
  v23 = a1[2];
  v24 = (_QWORD *)sub_180C100(v23 + 8400, 24);
  v25 = *(_QWORD **)(v23 + 9456);
  *v24 = off_1C56D28;
  v26 = v24;
  v24[1] = a2 + 160;
  v24[2] = v9;
  if ( v25 )
  {
    v27 = *((_DWORD *)v25 - 1);
    if ( v27 == *((_DWORD *)v25 - 2) )
    {
      v69 = (3 * v27 + 1) >> 1;
      v70 = 8 * v69 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v70 || v27 >= v69 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_B035D0((__int64 *)&v130, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, &v130);
        sub_233E40((__int64)&v130);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v123 = (3 * v27 + 1) >> 1;
      v71 = (unsigned int *)sub_186B300(v25 - 1, v70);
      v25 = v71 + 2;
      *(_QWORD *)(v23 + 9456) = v71 + 2;
      *v71 = v123;
      LODWORD(v71) = v71[1];
      v30 = &v25[(unsigned int)v71];
      v29 = (_DWORD)v71 + 1;
    }
    else
    {
      v28 = v27;
      v29 = v27 + 1;
      v30 = &v25[v28];
    }
  }
  else
  {
    v113 = (_QWORD *)sub_186B270(0x18u);
    v25 = v113 + 1;
    *v113 = 2;
    v29 = 1;
    *(_QWORD *)(v23 + 9456) = v25;
    v30 = v25;
  }
  *v30 = v26;
  v31 = a1[2];
  *((_DWORD *)v25 - 1) = v29;
  v32 = (_QWORD *)sub_180C100(v31 + 8400, 24);
  v33 = *(_QWORD **)(v31 + 9456);
  *v32 = off_1C56D28;
  v34 = v32;
  v32[1] = a2 + 184;
  v32[2] = v9;
  if ( v33 )
  {
    v35 = *((_DWORD *)v33 - 1);
    if ( v35 == *((_DWORD *)v33 - 2) )
    {
      v65 = (3 * v35 + 1) >> 1;
      v66 = 8 * v65 + 8;
      if ( 8 * v35 + 8 >= (unsigned int)v66 || v35 >= v65 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_B035D0((__int64 *)&v130, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, &v130);
        sub_233E40((__int64)&v130);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v67 = (unsigned int *)sub_186B300(v33 - 1, v66);
      v68 = v67[1];
      v33 = v67 + 2;
      *(_QWORD *)(v31 + 9456) = v67 + 2;
      *v67 = v65;
      LODWORD(v67) = v68;
      v38 = &v33[v68];
      v37 = (_DWORD)v67 + 1;
    }
    else
    {
      v36 = v35;
      v37 = v35 + 1;
      v38 = &v33[v36];
    }
  }
  else
  {
    v114 = (_QWORD *)sub_186B270(0x18u);
    v33 = v114 + 1;
    *v114 = 2;
    v37 = 1;
    *(_QWORD *)(v31 + 9456) = v33;
    v38 = v33;
  }
  *v38 = v34;
  v39 = a1[2];
  *((_DWORD *)v33 - 1) = v37;
  v40 = *(_DWORD *)(a2 + 152);
  v41 = sub_180C100(v39 + 8400, 24);
  v42 = *(_QWORD **)(v39 + 9456);
  v43 = v41;
  *(_QWORD *)v41 = &off_1C4C070;
  *(_QWORD *)(v41 + 8) = a2 + 152;
  *(_DWORD *)(v41 + 16) = v40;
  if ( v42 )
  {
    v44 = *((_DWORD *)v42 - 1);
    if ( v44 == *((_DWORD *)v42 - 2) )
    {
      v61 = (3 * v44 + 1) >> 1;
      v62 = 8 * v61 + 8;
      if ( 8 * v44 + 8 >= (unsigned int)v62 || v44 >= v61 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_B035D0((__int64 *)&v130, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, &v130);
        sub_233E40((__int64)&v130);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v63 = (unsigned int *)sub_186B300(v42 - 1, v62);
      v64 = v63[1];
      v42 = v63 + 2;
      *(_QWORD *)(v39 + 9456) = v63 + 2;
      *v63 = v61;
      LODWORD(v63) = v64;
      v47 = &v42[v64];
      v46 = (_DWORD)v63 + 1;
    }
    else
    {
      v45 = v44;
      v46 = v44 + 1;
      v47 = &v42[v45];
    }
  }
  else
  {
    v116 = (_QWORD *)sub_186B270(0x18u);
    v42 = v116 + 1;
    *v116 = 2;
    v46 = 1;
    *(_QWORD *)(v39 + 9456) = v42;
    v47 = v42;
  }
  *v47 = v43;
  *((_DWORD *)v42 - 1) = v46;
  v48 = *(_DWORD *)(a2 + 8);
  LODWORD(v47) = v48 & 1;
  v49 = *(_QWORD *)(a2 + 40LL * (v48 & 1) + 16);
  if ( v49 )
    v50 = *(unsigned int *)(v49 - 4);
  else
    v50 = 0;
  if ( a3 == (v48 & 1) )
  {
    v106 = a1[2];
    *(_DWORD *)(a2 + 8) = v48 ^ 1;
    v107 = (_QWORD *)sub_180C100(v106 + 8400, 16);
    v108 = *(_QWORD **)(v106 + 9456);
    v109 = v107;
    *v107 = off_1C56D00;
    v107[1] = a2;
    if ( v108 )
    {
      v110 = *((_DWORD *)v108 - 1);
      if ( v110 == *((_DWORD *)v108 - 2) )
      {
        v117 = (3 * v110 + 1) >> 1;
        v118 = 8 * v117 + 8;
        if ( 8 * v110 + 8 >= v118 || v110 >= v117 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_B035D0((__int64 *)&v130, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, &v130);
          sub_233E40((__int64)&v130);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v119 = (unsigned int *)sub_186B300(v108 - 1, v118);
        v120 = v119[1];
        v108 = v119 + 2;
        *(_QWORD *)(v106 + 9456) = v119 + 2;
        *v119 = v117;
        LODWORD(v119) = v120;
        v47 = &v108[v120];
        v112 = (_DWORD)v119 + 1;
      }
      else
      {
        v111 = v110;
        v112 = v110 + 1;
        v47 = &v108[v111];
      }
    }
    else
    {
      v121 = (_QWORD *)sub_186B270(0x18u);
      *v121 = 2;
      v112 = 1;
      v108 = v121 + 1;
      *(_QWORD *)(v106 + 9456) = v108;
      v47 = v108;
    }
    *v47 = (__int64)v109;
    *((_DWORD *)v108 - 1) = v112;
    v48 = *(_DWORD *)(a2 + 8);
    LODWORD(v47) = v48 & 1;
  }
  v125[0] = 0;
  v51 = a1 + 9;
  v124 = a1 + 9;
  v125[1] = 0;
  v126 = a1 + 9;
  v127[0] = 0;
  v127[1] = 0;
  if ( (_DWORD)v50 )
  {
    v52 = 0;
    v53 = 40LL * (unsigned int)v50;
    while ( 1 )
    {
      LODWORD(v47) = v48 & 1;
      v56 = (unsigned int *)(v52 + *(_QWORD *)(a2 + 40LL * (v48 & 1) + 16));
      v57 = *(char *)(*(_QWORD *)(a1[2] + 8848LL) + *v56);
      if ( v57 == -1 )
        goto LABEL_27;
      sub_1839610(v51, v125, v56 + 2);
      v48 = *(_DWORD *)(a2 + 8);
      LOBYTE(v58) = v48;
      v47 = (__int64 *)(v48 & 1);
      if ( v57 )
      {
        v51 = a1 + 9;
LABEL_31:
        v52 += 40;
        if ( v53 == v52 )
          break;
      }
      else
      {
        if ( LODWORD(v127[0]) )
        {
          if ( !(unsigned __int8)sub_B156B0(v126, v52 + *(_QWORD *)(a2 + 40LL * (_QWORD)v47 + 16) + 8, v127) )
            goto LABEL_39;
          v58 = *(_DWORD *)(a2 + 8);
        }
        LOBYTE(v48) = v58;
        LODWORD(v47) = v58 & 1;
        v54 = v52 + *(_QWORD *)(a2 + 40LL * (v58 & 1) + 16);
        if ( (*(_BYTE *)(v54 + 12) & 1) != 0 )
        {
          sub_182EA00(v126, v127, v54 + 8);
LABEL_39:
          v48 = *(_DWORD *)(a2 + 8);
          v51 = a1 + 9;
          LODWORD(v47) = v48 & 1;
          goto LABEL_31;
        }
        v55 = *(_DWORD *)(v54 + 8);
        BYTE4(v127[0]) &= ~1u;
        v51 = a1 + 9;
        LODWORD(v127[0]) = v55;
LABEL_27:
        v52 += 40;
        if ( v53 == v52 )
          break;
      }
    }
  }
  if ( (unsigned __int8)sub_B156B0(v51, v125, a2 + (-(int)v47 & 0x28) + 24) )
  {
    v59 = (unsigned int **)sub_B0FE70((__int64)a1, a2, 0);
    LODWORD(v130) = *(_DWORD *)(a2 + 8) ^ 1;
    sub_B0E290(v59, (unsigned int *)&v130);
    sub_B05AC0((__int64)a1, a2, (__int64 *)v59);
  }
  else
  {
    sub_B0B1B0((__int64)a1, a2);
  }
  if ( !(unsigned __int8)sub_B156B0(v124, v125, a2 + (-(*(_DWORD *)(a2 + 8) & 1) & 0x28) + 24) )
  {
    v97 = *(_DWORD *)(a2 + 8);
    v98 = (__int64)(a1 + 9);
    v131[0] = 0;
    v131[1] = 0;
    v130 = a1 + 9;
    v99 = a2 + (-(v97 & 1) & 0x28) + 24;
    if ( (v125[0] & 0x100000000LL) != 0 )
    {
      sub_182EA00(v124, v131, v125);
      v98 = (__int64)v130;
    }
    else
    {
      LODWORD(v131[0]) = v125[0];
    }
    sub_183A580(v98, v131, v127, v131);
    v129[0] = 0;
    v100 = (__int64)v130;
    v129[1] = 0;
    v128 = (__int64)v130;
    if ( (v131[0] & 0x100000000LL) != 0 )
    {
      sub_182EA00(v130, v129, v131);
      v100 = (__int64)v130;
    }
    else
    {
      LODWORD(v129[0]) = v131[0];
    }
    sub_182EF00(v100, v131);
    v101 = sub_B156B0(v128, v129, v99);
    sub_182EF00(v128, v129);
    if ( v101 )
    {
      v102 = (unsigned int **)sub_B0FE70((__int64)a1, a2, 1u);
      LODWORD(v130) = *(_DWORD *)(a2 + 8);
      sub_B0E290(v102, (unsigned int *)&v130);
      if ( (_DWORD)v50 )
      {
        v103 = 5 * v50;
        v104 = 0;
        v105 = 8 * v103;
        do
        {
          if ( !*(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL)
                         + *(unsigned int *)(*(_QWORD *)(a2 + 40LL * (*(_DWORD *)(a2 + 8) & 1) + 16) + v104)) )
            sub_B0DF40(
              (__int64)a1,
              a2,
              (__int64 *)v102,
              *(_DWORD *)(*(_QWORD *)(a2 + 40LL * (*(_DWORD *)(a2 + 8) & 1) + 16) + v104));
          v104 += 40;
        }
        while ( v105 != v104 );
      }
    }
  }
  sub_182EF00(v126, v127);
  return sub_182EF00(v124, v125);
}

