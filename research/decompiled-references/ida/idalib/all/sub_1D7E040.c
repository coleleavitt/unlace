__int64 __fastcall sub_1D7E040(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10)
{
  char *v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rcx
  _BYTE *v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // r15
  __int64 *v17; // rax
  __int64 v18; // r13
  __int64 *v19; // rax
  __int64 v20; // r14
  unsigned int v21; // edx
  unsigned __int8 v22; // r12
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  bool v27; // cl
  char v28; // r15
  char v29; // r9
  __int64 v30; // rcx
  unsigned __int64 v31; // r8
  char v32; // r9
  __int64 v33; // r14
  char v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // r15
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r14
  void *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // r15
  __int64 v53; // rax
  unsigned int v54; // r14d
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  unsigned int v58; // eax
  int v59; // ecx
  int v60; // ebx
  __int64 v61; // rbp
  unsigned __int64 v62; // rax
  __int64 v63; // rdi
  __int64 *v64; // rax
  int v65; // eax
  _BYTE *v66; // rcx
  unsigned int *v68; // rdx
  unsigned int *v69; // r8
  int v70; // eax
  char *v71; // rax
  char *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rsi
  void **v75; // rsi
  __int64 v76; // rdx
  __int64 *v77; // r8
  __int64 *v78; // r9
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 *v81; // r10
  __int64 v82; // r14
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rdx
  unsigned int v86; // eax
  __int64 v87; // rcx
  char v88; // al
  char *v89; // rdx
  int v90; // eax
  __int64 v91; // rbp
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  unsigned __int64 v98; // rsi
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  unsigned int v102; // eax
  __int64 v104; // [rsp+8h] [rbp-230h]
  __int64 v106; // [rsp+10h] [rbp-228h]
  __int64 v107; // [rsp+10h] [rbp-228h]
  __int64 v108; // [rsp+10h] [rbp-228h]
  __int64 v109; // [rsp+10h] [rbp-228h]
  __int64 v110; // [rsp+28h] [rbp-210h]
  unsigned __int8 v111; // [rsp+30h] [rbp-208h]
  __int64 v112; // [rsp+30h] [rbp-208h]
  __int64 v113; // [rsp+30h] [rbp-208h]
  unsigned __int64 v114; // [rsp+38h] [rbp-200h]
  __int64 v115; // [rsp+38h] [rbp-200h]
  unsigned __int64 v117; // [rsp+48h] [rbp-1F0h]
  unsigned __int64 v118; // [rsp+50h] [rbp-1E8h]
  char *v119; // [rsp+58h] [rbp-1E0h]
  char *v120; // [rsp+60h] [rbp-1D8h]
  char v121; // [rsp+6Ch] [rbp-1CCh]
  bool v122; // [rsp+7Eh] [rbp-1BAh] BYREF
  bool v123; // [rsp+7Fh] [rbp-1B9h] BYREF
  void *v124; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v125; // [rsp+88h] [rbp-1B0h]
  _BYTE v126[48]; // [rsp+90h] [rbp-1A8h] BYREF
  void *v127; // [rsp+C0h] [rbp-178h] BYREF
  __int64 v128; // [rsp+C8h] [rbp-170h]
  _BYTE v129[48]; // [rsp+D0h] [rbp-168h] BYREF
  void *v130; // [rsp+100h] [rbp-138h] BYREF
  __int64 v131; // [rsp+108h] [rbp-130h]
  _BYTE v132[48]; // [rsp+110h] [rbp-128h] BYREF
  void *ptr; // [rsp+140h] [rbp-F8h] BYREF
  __int64 v134; // [rsp+148h] [rbp-F0h]
  _BYTE v135[48]; // [rsp+150h] [rbp-E8h] BYREF
  void *v136; // [rsp+180h] [rbp-B8h] BYREF
  __int64 v137; // [rsp+188h] [rbp-B0h]
  _BYTE v138[48]; // [rsp+190h] [rbp-A8h] BYREF
  void *v139[2]; // [rsp+1C0h] [rbp-78h] BYREF
  __int64 v140; // [rsp+1D0h] [rbp-68h] BYREF
  int v141; // [rsp+1D8h] [rbp-60h]

  v110 = a3;
  v11 = v129;
  v12 = *(_QWORD *)(a3 + 48);
  v13 = 0x600000000LL;
  v14 = v126;
  v15 = *(_QWORD *)(a2 + 48);
  v104 = a2;
  v124 = v126;
  v125 = 0x600000000LL;
  v127 = v129;
  v128 = 0x600000000LL;
  v117 = 0;
  v118 = 0;
  if ( a5 )
  {
    v111 = 0;
    v30 = 0;
    v31 = 0;
    v28 = 0;
    v32 = 0;
    v22 = 0;
    goto LABEL_15;
  }
  v16 = a6;
  v17 = (__int64 *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *v17;
  if ( *(_BYTE *)(*v17 + 16) != 26 )
    v18 = sub_F63050(*v17, a2, v129, 0x600000000LL);
  v19 = (__int64 *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *v19;
  if ( *(_BYTE *)(*v19 + 16) != 26 )
    v20 = sub_F63050(*v19, a2, v11, v13);
  v21 = (*(_BYTE *)(v12 + 28) & 0x7F) - 35;
  v119 = (char *)(v18 + 48);
  v120 = (char *)(v20 + 48);
  if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 35 > 3 )
  {
    if ( v21 > 3 )
    {
      v90 = sub_B77890(v15);
      if ( (unsigned int)(v90 - 42) <= 1 || !v90 )
        goto LABEL_69;
    }
    else
    {
      if ( !sub_B979F0((_QWORD *)v12) )
      {
        v23 = sub_B77890(v15);
        goto LABEL_120;
      }
      v70 = sub_B77890(v15);
      if ( v70 == 0 || (unsigned int)(v70 - 42) <= 1 )
      {
LABEL_69:
        v111 = 0;
        v29 = 0;
        v22 = 0;
        v114 = v16;
        v28 = 0;
        goto LABEL_70;
      }
    }
    v114 = v16 + 1;
    goto LABEL_101;
  }
  if ( v21 > 3 )
  {
    v22 = !sub_B979F0((_QWORD *)v15);
LABEL_98:
    v83 = sub_B77890(v15);
    v85 = (unsigned int)(v83 - 42);
    if ( (unsigned int)v85 > 1 && v83 )
    {
      v114 = v16 + 1;
      if ( !v22 || (unsigned __int8)sub_B771C0(v15, a2, v85, v84) )
        goto LABEL_101;
      goto LABEL_132;
    }
    if ( v22 )
    {
      v88 = sub_B771C0(v15, a2, v85, v84);
      v89 = (char *)(v18 + 56);
      if ( !v88 )
        v89 = (char *)(v18 + 48);
      v119 = v89;
    }
    goto LABEL_69;
  }
  v22 = !sub_B979F0((_QWORD *)v15);
  if ( sub_B979F0((_QWORD *)v12) )
    goto LABEL_98;
  v23 = sub_B77890(v15);
  if ( v22 )
  {
    v114 = v16 + 1;
    if ( (unsigned __int8)sub_B771C0(v15, a2, v24, v25) )
      goto LABEL_11;
    if ( !(unsigned __int8)sub_B771C0(v12, a2, v26, v25) )
    {
      v97 = *(_QWORD *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v97 + 16) != 26 )
        v97 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v95, v96);
      v98 = sub_1D38AA0(*(_QWORD *)(a1 + 248), v15, a7, ((*(_BYTE *)(v97 + 18) >> 3) & 3) == 2);
      v117 = v98;
      sub_A6A4A0((__int64)&v124, v98);
      v101 = *(_QWORD *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v101 + 16) != 26 )
        v101 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL), v98, v99, v100);
      v28 = 1;
      v27 = ((*(_BYTE *)(v101 + 18) >> 3) & 3) == 2;
      goto LABEL_13;
    }
LABEL_132:
    v28 = 1;
    v22 = 1;
    v117 = sub_1D38AA0(
             *(_QWORD *)(a1 + 248),
             v15,
             a7,
             *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 44);
    sub_A6A4A0((__int64)&v124, v117);
    v29 = 0;
    v111 = 0;
    goto LABEL_70;
  }
LABEL_120:
  v26 = (unsigned int)(v23 - 42);
  LOBYTE(v26) = v23 != 0 && (unsigned int)v26 > 1;
  v111 = v26;
  if ( !(_BYTE)v26 )
  {
    v22 = sub_B771C0(v12, a2, v26, v25);
    v114 = v16;
    if ( v22 )
    {
      v22 = 0;
      v28 = 0;
      v120 = (char *)(v20 + 56);
      v29 = 0;
    }
    else
    {
      v29 = 0;
      v28 = 0;
      v111 = 0;
    }
    goto LABEL_70;
  }
  v114 = v16 + 1;
LABEL_11:
  v22 = sub_B771C0(v12, a2, v26, v25);
  if ( v22 )
  {
LABEL_101:
    v28 = 0;
    v29 = 0;
    v111 = 0;
    v22 = 0;
    goto LABEL_70;
  }
  v27 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL)
                 + 16LL) == 44;
  v28 = 0;
LABEL_13:
  v118 = sub_1D38AA0(*(_QWORD *)(a1 + 248), v12, a8, v27);
  sub_A6A4A0((__int64)&v127, v118);
  v29 = 1;
  v111 = 1;
LABEL_70:
  v121 = v29;
  sub_1D3C530(
    (__int64 *)&v124,
    (char *)v124 + 8 * (unsigned int)v125,
    v119,
    (char *)(v18 + 8LL * *(unsigned __int16 *)(v18 + 22) + 48));
  sub_1D3C530(
    (__int64 *)&v127,
    (char *)v127 + 8 * (unsigned int)v128,
    v120,
    (char *)(v20 + 8LL * *(unsigned __int16 *)(v20 + 22) + 48));
  v32 = v121;
  if ( (unsigned int)v125 > v114 )
    LODWORD(v125) = v114;
  v30 = (unsigned int)v128;
  if ( (unsigned int)v128 > v114 )
  {
    v30 = v114;
    LODWORD(v128) = v114;
  }
  v11 = (char *)v127;
  if ( a9 )
  {
    v71 = (char *)v127 + 8 * v30;
    if ( v71 != v127 )
    {
      v72 = v71 - 8;
      if ( v72 > v127 )
      {
        do
        {
          v73 = *(_QWORD *)v11;
          v74 = *(_QWORD *)v72;
          v11 += 8;
          v72 -= 8;
          *((_QWORD *)v11 - 1) = v74;
          *((_QWORD *)v72 + 1) = v73;
        }
        while ( v11 < v72 );
        v11 = (char *)v127;
        v30 = (unsigned int)v128;
      }
    }
  }
  v14 = v124;
  v31 = (unsigned int)v125;
LABEL_15:
  v33 = v110;
  v34 = sub_1D7D410(a1, a4, v104, v110, a5, v32, (unsigned __int64)v14, v31, (__int64)v11, v30);
  v35 = a4;
  if ( v34 == (unsigned __int8)sub_1D7D410(
                                 a1,
                                 a4,
                                 v110,
                                 v104,
                                 a5,
                                 v28,
                                 (unsigned __int64)v127,
                                 (unsigned int)v128,
                                 (__int64)v124,
                                 (unsigned int)v125) )
  {
    v33 = 0;
    if ( !v34 )
      goto LABEL_54;
    v131 = 0x600000000LL;
    v130 = v132;
    v38 = (unsigned int)sub_B76070(v15, a4, v36, v37) + (unsigned __int64)v22;
    if ( v38 > HIDWORD(v131) )
    {
      v35 = (__int64)v132;
      sub_2237220(&v130, v132, v38, 8);
    }
    if ( v22 )
    {
      v35 = v117;
      sub_A6A4A0((__int64)&v130, v117);
    }
    v40 = *(_QWORD *)(v15 + 120);
    v43 = v40 + 8LL * (unsigned int)sub_B76070(v15, v35, v38, v39);
    if ( v43 != v40 )
    {
      v35 = (__int64)v132;
      v44 = (unsigned int)v131;
      do
      {
        v42 = HIDWORD(v131);
        v45 = *(_QWORD *)(*(_QWORD *)v40 + 48LL);
        if ( v44 + 1 > (unsigned __int64)HIDWORD(v131) )
        {
          v35 = (__int64)v132;
          sub_2237220(&v130, v132, v44 + 1, 8);
          v41 = (unsigned int)v131;
          *((_QWORD *)v130 + (unsigned int)v131) = v45;
        }
        else
        {
          v41 = (__int64)v130;
          *((_QWORD *)v130 + v44) = v45;
        }
        v40 += 8;
        v44 = (unsigned int)(v131 + 1);
        LODWORD(v131) = v131 + 1;
      }
      while ( v43 != v40 );
    }
    v134 = 0x600000000LL;
    ptr = v135;
    v46 = (unsigned int)sub_B76070(v12, v35, v41, v42) + (unsigned __int64)v111;
    if ( v46 > HIDWORD(v134) )
    {
      v35 = (__int64)v135;
      sub_2237220(&ptr, v135, v46, 8);
      if ( !v111 )
        goto LABEL_28;
    }
    else if ( !v111 )
    {
      goto LABEL_28;
    }
    v35 = v118;
    sub_A6A4A0((__int64)&ptr, v118);
LABEL_28:
    v48 = *(_QWORD *)(v12 + 120);
    v51 = v48 + 8LL * (unsigned int)sub_B76070(v12, v35, v46, v47);
    if ( v51 == v48 )
    {
      LODWORD(v52) = v134;
    }
    else
    {
      v52 = (unsigned int)v134;
      do
      {
        while ( 1 )
        {
          v50 = HIDWORD(v134);
          v53 = *(_QWORD *)(*(_QWORD *)v48 + 48LL);
          if ( v52 + 1 > (unsigned __int64)HIDWORD(v134) )
            break;
          v49 = ptr;
          v48 += 8;
          *((_QWORD *)ptr + v52) = v53;
          v52 = (unsigned int)(v134 + 1);
          LODWORD(v134) = v134 + 1;
          if ( v51 == v48 )
            goto LABEL_33;
        }
        v35 = (__int64)v135;
        v115 = v51;
        v112 = *(_QWORD *)(*(_QWORD *)v48 + 48LL);
        v48 += 8;
        sub_2237220(&ptr, v135, v52 + 1, 8);
        v51 = v115;
        v50 = (unsigned int)v134;
        v49 = ptr;
        *((_QWORD *)ptr + (unsigned int)v134) = v112;
        v52 = (unsigned int)(v134 + 1);
        LODWORD(v134) = v134 + 1;
      }
      while ( v115 != v48 );
    }
LABEL_33:
    v54 = v131;
    if ( (unsigned int)sub_B76070(v15, v35, (__int64)v49, v50)
      && (v108 = *(_QWORD *)(v15 + 120),
          v86 = sub_B76070(v15, v35, v108, v56),
          sub_B799A0(*(_QWORD *)(v108 + 8LL * v86 - 8))) )
    {
      if ( !(unsigned int)sub_B76070(v12, v35, v55, v56) )
      {
        v59 = v54;
        if ( v54 > (unsigned int)v52 )
          goto LABEL_46;
LABEL_39:
        if ( v59 > 0 && !a10 )
        {
          v107 = v15;
          v60 = v59;
          v113 = v12;
          v61 = 0;
          while ( 1 )
          {
            v62 = *(_QWORD *)&byte_8[*((_QWORD *)v130 + v61) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
            v63 = *(_QWORD *)v62;
            if ( *(_BYTE *)(*(_QWORD *)v62 + 16LL) == 49 )
            {
              v64 = (__int64 *)(*(_QWORD *)&byte_8[*((_QWORD *)ptr + v61) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(*v64 + 16) == 49 )
              {
                v65 = sub_1D368A0(v63, *v64);
                if ( v65 == 1 )
                  goto LABEL_96;
                if ( v65 == 2 )
                  goto LABEL_46;
              }
            }
            if ( v60 <= (int)++v61 )
            {
              v15 = v107;
              v12 = v113;
              break;
            }
          }
        }
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 1LL) >= 0 )
          goto LABEL_117;
        v68 = *(unsigned int **)(v104 + 56);
        v69 = *(unsigned int **)(v110 + 56);
        if ( (v69[5] & 0x1FFFFFFF) != (v68[5] & 0x1FFFFFFF) )
          goto LABEL_117;
        v66 = ptr;
        if ( v54 != (_DWORD)v52 )
        {
LABEL_64:
          v110 = 0;
          goto LABEL_47;
        }
        v140 = 0;
        *(_OWORD *)v139 = 0;
        v141 = 0;
        v75 = v139;
        if ( !(unsigned __int8)sub_1CD38B0(a1, v139, v68, nullptr, v69, 0, 0.0, 2, 0) )
          goto LABEL_117;
        if ( v54 )
        {
          v77 = (__int64 *)v130;
          v78 = (__int64 *)ptr;
          do
          {
            v75 = (void **)*v78;
            if ( !sub_1D37210(*v77, *v78) )
              goto LABEL_64;
            v77 = (__int64 *)(v79 + 8);
            v78 = (__int64 *)(v80 + 8);
          }
          while ( v77 != v81 );
        }
        if ( a5 == 1 )
        {
          v91 = sub_C1D490(v12, (__int64)v75, v76, (__int64)v66);
          v94 = sub_C1D490(v15, (__int64)v75, v92, v93);
          if ( (*(_QWORD *)&byte_8[v94 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v94 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v94) & 7) != (*(_QWORD *)&byte_8[v91 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v91 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v91) & 7) )
          {
LABEL_117:
            v66 = ptr;
            goto LABEL_64;
          }
        }
        v139[0] = &v140;
        v136 = v138;
        v137 = 0x300000000LL;
        v139[1] = (void *)0x300000000LL;
        sub_BBDAC0(v104, (__int64)&v136);
        sub_BBDAC0(v110, (__int64)v139);
        if ( (unsigned __int8)sub_175BCD0(
                                a1,
                                v104,
                                (__int64)v136,
                                (unsigned int)v137,
                                v110,
                                &v122,
                                (__int64)v139[0],
                                LODWORD(v139[1]))
          || (v82 = v110,
              (unsigned __int8)sub_175BCD0(
                                 a1,
                                 v110,
                                 (__int64)v139[0],
                                 LODWORD(v139[1]),
                                 v104,
                                 &v123,
                                 (__int64)v136,
                                 (unsigned int)v137))
          || v122 == v123 )
        {
          v104 = 0;
        }
        else
        {
          if ( v122 )
            v82 = v104;
          v104 = v82;
        }
        if ( v139[0] != &v140 )
          free(v139[0]);
        if ( v136 != v138 )
          free(v136);
LABEL_96:
        v110 = v104;
LABEL_46:
        v66 = ptr;
LABEL_47:
        if ( v66 != v135 )
          free(v66);
        if ( v130 != v132 )
          free(v130);
        v33 = v110;
        goto LABEL_54;
      }
      v109 = *(_QWORD *)(v12 + 120);
      v102 = sub_B76070(v12, v35, v109, v87);
      if ( !sub_B799A0(*(_QWORD *)(v109 + 8LL * v102 - 8)) )
      {
        v59 = v54;
        if ( v54 > (unsigned int)v52 )
          goto LABEL_46;
        goto LABEL_39;
      }
    }
    else if ( (unsigned int)sub_B76070(v12, v35, v55, v56) )
    {
      v106 = *(_QWORD *)(v12 + 120);
      v58 = sub_B76070(v12, v35, v106, v57);
      if ( sub_B799A0(*(_QWORD *)(v106 + 8LL * v58 - 8)) )
      {
        if ( v54 < (unsigned int)v52 )
          goto LABEL_96;
      }
    }
    v59 = v52;
    if ( v54 <= (unsigned int)v52 )
      v59 = v54;
    goto LABEL_39;
  }
  if ( v34 )
    v33 = v104;
LABEL_54:
  if ( v127 != v129 )
    free(v127);
  if ( v124 != v126 )
    free(v124);
  return v33;
}
