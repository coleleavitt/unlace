__int64 __fastcall sub_33EE60(_QWORD *a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // r13
  void (__fastcall ***v6)(void *); // r14
  unsigned int v7; // ebp
  bool v8; // zf
  __int64 v9; // rsi
  __int64 v10; // rdi
  char *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r14
  char v15; // al
  void *v16; // r15
  int v17; // edx
  int v18; // eax
  void *v19; // r15
  int v20; // eax
  int v21; // eax
  void *v22; // rdi
  int v23; // eax
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdi
  void *v31; // r15
  __int64 v32; // rax
  void (__fastcall ***v33)(void *); // r15
  _DWORD *v34; // r15
  void **v35; // rdx
  void (__fastcall ***v36)(void *); // r13
  __int64 v37; // rbp
  void *v38; // rbx
  int v39; // eax
  int v40; // eax
  void *v41; // rbx
  int v42; // eax
  int v43; // eax
  void *v44; // rbx
  int v45; // eax
  int v46; // eax
  unsigned int v47; // ebp
  unsigned int v48; // r13d
  char *v49; // rax
  void *v50; // r13
  bool v51; // al
  void *v52; // r13
  void *v53; // r13
  void *v54; // r13
  void *v55; // rbx
  void *v56; // rbx
  void *v57; // rbx
  void *v58; // rbx
  void *v59; // rbx
  void *v60; // rbx
  int v62; // eax
  char v63; // al
  bool v64; // al
  unsigned int v66; // eax
  __int64 v69; // rsi
  unsigned int v70; // eax
  __int64 v71; // rdx
  unsigned int v72; // eax
  void *v73; // rdi
  bool v74; // al
  bool v75; // al
  void *v76; // rdi
  void *v77; // rdi
  void *v78; // rdi
  __int64 v79; // rax
  int v80; // edx
  __int64 v81; // rdx
  char v82; // si
  __int64 v83; // rdx
  char v84; // si
  __int64 v85; // rdx
  char v86; // si
  __int64 v87; // rdx
  char v88; // si
  __int64 v89; // rdx
  char v90; // si
  __int64 v91; // rdx
  void *v92; // rdi
  char v93; // si
  char v94; // al
  bool v95; // al
  void *v96; // r13
  bool v97; // al
  bool v98; // al
  void *v99; // r13
  bool v100; // al
  bool v101; // r13
  void *v102; // r15
  void *v103; // r15
  void *v104; // r15
  int v105; // eax
  int v106; // eax
  unsigned int v107; // eax
  unsigned int v108; // eax
  __int64 v109; // [rsp+8h] [rbp-220h]
  _QWORD *v110; // [rsp+10h] [rbp-218h]
  _QWORD *v111; // [rsp+18h] [rbp-210h]
  __int64 v113; // [rsp+28h] [rbp-200h]
  __int64 v114; // [rsp+30h] [rbp-1F8h]
  void *v115; // [rsp+30h] [rbp-1F8h]
  void *v116; // [rsp+30h] [rbp-1F8h]
  __int64 v117; // [rsp+30h] [rbp-1F8h]
  __int64 v118; // [rsp+38h] [rbp-1F0h]
  __int64 v119; // [rsp+38h] [rbp-1F0h]
  __int64 v120; // [rsp+38h] [rbp-1F0h]
  void *v121; // [rsp+40h] [rbp-1E8h]
  void *v122; // [rsp+40h] [rbp-1E8h]
  void *v123; // [rsp+40h] [rbp-1E8h]
  void *v124; // [rsp+48h] [rbp-1E0h]
  unsigned __int8 v125; // [rsp+5Fh] [rbp-1C9h] BYREF
  _QWORD v126[2]; // [rsp+60h] [rbp-1C8h] BYREF
  _QWORD v127[2]; // [rsp+70h] [rbp-1B8h] BYREF
  _QWORD v128[2]; // [rsp+80h] [rbp-1A8h] BYREF
  _QWORD v129[2]; // [rsp+90h] [rbp-198h] BYREF
  _QWORD v130[2]; // [rsp+A0h] [rbp-188h] BYREF
  _QWORD v131[2]; // [rsp+B0h] [rbp-178h] BYREF
  _QWORD v132[2]; // [rsp+C0h] [rbp-168h] BYREF
  int v133; // [rsp+D0h] [rbp-158h] BYREF
  char v134; // [rsp+D4h] [rbp-154h]
  int v135; // [rsp+E0h] [rbp-148h] BYREF
  char v136; // [rsp+E4h] [rbp-144h]
  int v137; // [rsp+F0h] [rbp-138h] BYREF
  char v138; // [rsp+F4h] [rbp-134h]
  int v139; // [rsp+100h] [rbp-128h] BYREF
  char v140; // [rsp+104h] [rbp-124h]
  int v141; // [rsp+110h] [rbp-118h] BYREF
  char v142; // [rsp+114h] [rbp-114h]
  int v143; // [rsp+120h] [rbp-108h] BYREF
  char v144; // [rsp+124h] [rbp-104h]
  _QWORD v145[2]; // [rsp+130h] [rbp-F8h] BYREF
  _QWORD v146[2]; // [rsp+140h] [rbp-E8h] BYREF
  _QWORD v147[2]; // [rsp+150h] [rbp-D8h] BYREF
  _QWORD v148[2]; // [rsp+160h] [rbp-C8h] BYREF
  _QWORD v149[2]; // [rsp+170h] [rbp-B8h] BYREF
  _QWORD v150[2]; // [rsp+180h] [rbp-A8h] BYREF
  __int64 v151; // [rsp+190h] [rbp-98h] BYREF
  __int64 v152; // [rsp+198h] [rbp-90h]
  __int64 v153; // [rsp+1A0h] [rbp-88h] BYREF
  __int64 v154; // [rsp+1A8h] [rbp-80h]
  __int64 v155; // [rsp+1B0h] [rbp-78h] BYREF
  __int64 v156; // [rsp+1B8h] [rbp-70h]
  __int64 v157; // [rsp+1C0h] [rbp-68h] BYREF
  __int64 v158; // [rsp+1C8h] [rbp-60h]
  __int64 v159; // [rsp+1D0h] [rbp-58h] BYREF
  __int64 v160; // [rsp+1D8h] [rbp-50h]
  __int64 v161; // [rsp+1E0h] [rbp-48h] BYREF
  __int64 v162; // [rsp+1E8h] [rbp-40h]

  v3 = a2;
  v6 = (void (__fastcall ***)(void *))a1[115];
  v7 = *(_DWORD *)(a1[116] + 4LL * a2);
  v125 = 0;
  v110 = a1 + 115;
  if ( v6 )
  {
    v8 = (*((_DWORD *)v6 + 4))-- == 1;
    if ( v8 )
    {
      (**v6)(v6);
      sub_186B220(v6);
    }
  }
  a1[115] = 0;
  v9 = *a3;
  if ( *a3 )
  {
    v10 = a3[1];
    v8 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v10, v9);
  }
  *a3 = 0;
  v11 = sub_33D9C0((__int64)a1);
  (*(void (__fastcall **)(int *, char *, _QWORD, __int64 *, unsigned __int8 *))(*(_QWORD *)v11 + 24LL))(
    &v133,
    v11,
    v7,
    a3,
    &v125);
  v111 = a1 + 110;
  sub_8E3780(a1 + 110, v110);
  v145[0] = 0;
  v113 = 8 * v3;
  v12 = (_QWORD *)(a1[118] + 8 * v3);
  v146[0] = 1;
  v147[0] = 0;
  v148[0] = 1;
  v149[0] = 0;
  v150[0] = 1;
  v8 = *v12 == 0;
  v145[1] = 0;
  v146[1] = 0;
  v147[1] = 0;
  v148[1] = 0;
  v149[1] = 0;
  v150[1] = 0;
  v125 = 1;
  if ( v8 )
  {
    v71 = a1[115];
    if ( v71 )
      ++*(_DWORD *)(v71 + 16);
    *v12 = v71;
  }
  v13 = 96 * v3;
  v14 = 96 * v3 + a1[117];
  if ( (*(_BYTE *)(v14 + 20) & 1) != 0 || *(_DWORD *)(v14 + 16) != 1 || (v136 & 1) != 0 || v135 != 1 )
  {
    v15 = sub_1848D40(qword_1C7F2C0, 96 * v3 + a1[117], &v133);
    v16 = qword_1C7F2C0;
    if ( !v15 )
      goto LABEL_60;
LABEL_11:
    v14 = v13 + a1[117];
    if ( (v134 & 1) != 0 )
    {
      sub_182C690(v16, v13 + a1[117], &v133);
      if ( (v136 & 1) == 0 )
      {
LABEL_14:
        v18 = v135;
        *(_BYTE *)(v14 + 20) &= ~1u;
        v19 = qword_1C7F2C0;
        *(_DWORD *)(v14 + 16) = v18;
        if ( (v138 & 1) == 0 )
          goto LABEL_15;
        goto LABEL_98;
      }
LABEL_97:
      sub_182C690(v16, v14 + 16, &v135);
      v19 = qword_1C7F2C0;
      if ( (v138 & 1) == 0 )
      {
LABEL_15:
        v20 = v137;
        *(_BYTE *)(v14 + 36) &= ~1u;
        *(_DWORD *)(v14 + 32) = v20;
        if ( (v140 & 1) == 0 )
          goto LABEL_16;
        goto LABEL_99;
      }
LABEL_98:
      sub_182C690(v19, v14 + 32, &v137);
      if ( (v140 & 1) == 0 )
      {
LABEL_16:
        v21 = v139;
        *(_BYTE *)(v14 + 52) &= ~1u;
        v22 = qword_1C7F2C0;
        *(_DWORD *)(v14 + 48) = v21;
        if ( (v142 & 1) == 0 )
          goto LABEL_17;
        goto LABEL_100;
      }
LABEL_99:
      sub_182C690(v19, v14 + 48, &v139);
      v22 = qword_1C7F2C0;
      if ( (v142 & 1) == 0 )
      {
LABEL_17:
        v23 = v141;
        *(_BYTE *)(v14 + 68) &= ~1u;
        *(_DWORD *)(v14 + 64) = v23;
        if ( (v144 & 1) == 0 )
        {
LABEL_18:
          v24 = v143;
          *(_BYTE *)(v14 + 84) &= ~1u;
          *(_DWORD *)(v14 + 80) = v24;
          goto LABEL_19;
        }
        goto LABEL_101;
      }
LABEL_100:
      sub_182C690(v22, v14 + 64, &v141);
      if ( (v144 & 1) == 0 )
        goto LABEL_18;
LABEL_101:
      sub_182C690(v22, v14 + 80, &v143);
      goto LABEL_19;
    }
    v17 = v133;
LABEL_13:
    *(_BYTE *)(v14 + 4) &= ~1u;
    *(_DWORD *)v14 = v17;
    if ( (v136 & 1) == 0 )
      goto LABEL_14;
    goto LABEL_97;
  }
  v16 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v14 + 4) & 1) == 0 )
  {
    v63 = v134;
    if ( (v134 & 1) == 0 )
    {
      v17 = v133;
      if ( *(_DWORD *)v14 < v133 )
        goto LABEL_13;
      goto LABEL_62;
    }
  }
  v62 = sub_182C7B0(qword_1C7F2C0, 96 * v3 + a1[117], &v133);
  v16 = qword_1C7F2C0;
  if ( v62 < 0 )
    goto LABEL_11;
LABEL_60:
  if ( (*(_BYTE *)(v14 + 4) & 1) != 0 )
  {
LABEL_63:
    v64 = (unsigned int)sub_182C7B0(v16, v14, &v133) == 0;
    goto LABEL_64;
  }
  v63 = v134;
LABEL_62:
  if ( (v63 & 1) != 0 )
    goto LABEL_63;
  v64 = *(_DWORD *)v14 == v133;
LABEL_64:
  if ( v64
    && ((*(_BYTE *)(v14 + 20) & 1) != 0 || (v136 & 1) != 0
      ? (unsigned int)sub_182C7B0(v16, v14 + 16, &v135) == 0
      : *(_DWORD *)(v14 + 16) == v135) )
  {
    v16 = qword_1C7F2C0;
    v109 = v14 + 32;
    if ( (*(_BYTE *)(v14 + 52) & 1) != 0 || *(_DWORD *)(v14 + 48) != 1 || (v140 & 1) != 0 || v139 != 1 )
    {
      LOBYTE(v66) = sub_1848D40(qword_1C7F2C0, v109, &v137);
      v16 = qword_1C7F2C0;
    }
    else if ( (*(_BYTE *)(v14 + 36) & 1) != 0 || (v138 & 1) != 0 )
    {
      v107 = sub_182C7B0(qword_1C7F2C0, v109, &v137);
      v16 = qword_1C7F2C0;
      v66 = v107 >> 31;
    }
    else
    {
      LOBYTE(v66) = *(_DWORD *)(v14 + 32) < v137;
    }
    if ( (_BYTE)v66 )
      goto LABEL_11;
    if ( ((*(_BYTE *)(v14 + 36) & 1) != 0 || (v138 & 1) != 0
        ? (unsigned int)sub_182C7B0(v16, v109, &v137) == 0
        : *(_DWORD *)(v14 + 32) == v137)
      && ((*(_BYTE *)(v14 + 52) & 1) != 0 || (v140 & 1) != 0
        ? (unsigned int)sub_182C7B0(v16, v14 + 48, &v139) == 0
        : *(_DWORD *)(v14 + 48) == v139) )
    {
      v69 = v14 + 64;
      if ( (*(_BYTE *)(v14 + 84) & 1) != 0 || *(_DWORD *)(v14 + 80) != 1 || (v144 & 1) != 0 || v143 != 1 )
      {
        LOBYTE(v70) = sub_1848D40(qword_1C7F2C0, v69, &v141);
      }
      else if ( (*(_BYTE *)(v14 + 68) & 1) != 0 || (v142 & 1) != 0 )
      {
        v70 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v69, &v141) >> 31;
      }
      else
      {
        LOBYTE(v70) = *(_DWORD *)(v14 + 64) < v141;
      }
      if ( (_BYTE)v70 )
      {
        v16 = qword_1C7F2C0;
        goto LABEL_11;
      }
    }
  }
LABEL_19:
  v25 = a1[115];
  if ( v25 )
  {
    v26 = a1[120];
    v127[0] = 0;
    v128[0] = 1;
    v127[1] = 0;
    v27 = *(_QWORD *)(v26 + 8 * v3);
    v128[1] = 0;
    sub_1374250(v126, v25, v27);
    sub_16669D0(&v151, a1[111]);
    if ( !(unsigned __int8)sub_1666AE0(&v151, v126[0], v127, v129) )
      goto LABEL_23;
    v28 = v13 + a1[117];
    if ( *(int *)v28 < 0 )
      goto LABEL_121;
    if ( *(_DWORD *)v28 )
      goto LABEL_23;
    v114 = v28 + 32;
    if ( (*(_BYTE *)(v28 + 52) & 1) != 0
      || *(_DWORD *)(v28 + 48) != 1
      || (v128[0] & 0x100000000LL) != 0
      || LODWORD(v128[0]) != 1 )
    {
      v118 = v13 + a1[117];
      v94 = sub_1848D40(qword_1C7F2C0, v114, v127);
      v28 = v118;
      if ( v94 )
        goto LABEL_121;
    }
    else
    {
      if ( (*(_BYTE *)(v28 + 36) & 1) != 0 || (v127[0] & 0x100000000LL) != 0 )
      {
        v120 = v13 + a1[117];
        v108 = sub_182C7B0(qword_1C7F2C0, v114, v127);
        v28 = v120;
        v72 = v108 >> 31;
      }
      else
      {
        LOBYTE(v72) = *(_DWORD *)(v28 + 32) < SLODWORD(v127[0]);
      }
      if ( (_BYTE)v72 )
        goto LABEL_121;
    }
    v73 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v28 + 36) & 1) != 0 || (v127[0] & 0x100000000LL) != 0 )
    {
      v119 = v28;
      v105 = sub_182C7B0(qword_1C7F2C0, v114, v127);
      v28 = v119;
      v74 = v105 == 0;
    }
    else
    {
      v74 = *(_DWORD *)(v28 + 32) == LODWORD(v127[0]);
    }
    if ( !v74
      || ((*(_BYTE *)(v28 + 52) & 1) != 0 || (v128[0] & 0x100000000LL) != 0
        ? (v117 = v28, v106 = sub_182C7B0(v73, v28 + 48, v128), v28 = v117, v75 = v106 == 0)
        : (v75 = *(_DWORD *)(v28 + 48) == LODWORD(v128[0])),
          !v75 || *(int *)(v28 + 64) >= 0) )
    {
LABEL_23:
      v29 = v126[0];
      if ( v126[0] )
      {
        v30 = v126[1];
        v8 = (*(_DWORD *)(v126[0] + 8LL))-- == 1;
        if ( v8 )
          sub_15D7BC0(v30, v29);
      }
      v31 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v127);
      sub_182CBA0(v31, v128);
      if ( v133 )
        goto LABEL_38;
      v32 = sub_8E3AC0(v111);
      if ( (unsigned __int8)sub_8FCFF0(v32, v125) )
      {
        v33 = (void (__fastcall ***)(void *))a1[115];
        if ( v33 )
        {
          v8 = (*((_DWORD *)v33 + 4))-- == 1;
          if ( v8 )
          {
            (**v33)(v33);
            sub_186B220(v33);
          }
        }
        a1[115] = 0;
        sub_8E3780(v111, v110);
        v34 = (_DWORD *)a1[115];
        if ( !v34 )
          goto LABEL_57;
        if ( !v125 )
          goto LABEL_33;
        v48 = *(_DWORD *)(a1[116] + 4 * v3);
        v49 = sub_33D9C0((__int64)a1);
        (*(void (__fastcall **)(__int64 *, char *, _QWORD))(*(_QWORD *)v49 + 16LL))(&v151, v49, v48);
        v50 = qword_1C7F2C0;
        if ( (v134 & 1) != 0 || (v151 & 0x100000000LL) != 0 )
          v51 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v133, &v151) == 0;
        else
          v51 = v133 == (_DWORD)v151;
        if ( v51
          && ((v136 & 1) != 0 || (v153 & 0x100000000LL) != 0
            ? (v95 = (unsigned int)sub_182C7B0(v50, &v135, &v153) == 0)
            : (v95 = v135 == (_DWORD)v153),
              (v96 = qword_1C7F2C0, v95)
           && ((v138 & 1) != 0 || (v155 & 0x100000000LL) != 0
             ? (v97 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v137, &v155) == 0)
             : (v97 = v137 == (_DWORD)v155),
               v97
            && ((v140 & 1) != 0 || (v157 & 0x100000000LL) != 0
              ? (v98 = (unsigned int)sub_182C7B0(v96, &v139, &v157) == 0)
              : (v98 = v139 == (_DWORD)v157),
                (v99 = qword_1C7F2C0, v98)
             && ((v142 & 1) != 0 || (v159 & 0x100000000LL) != 0
               ? (v100 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v141, &v159) == 0)
               : (v100 = v141 == (_DWORD)v159),
                 v100)))) )
        {
          if ( (v144 & 1) != 0 || (v161 & 0x100000000LL) != 0 )
            v101 = (unsigned int)sub_182C7B0(v99, &v143, &v161) == 0;
          else
            v101 = v143 == (_DWORD)v161;
          v102 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v159);
          sub_182CBA0(v102, &v161);
          v103 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v155);
          sub_182CBA0(v103, &v157);
          v104 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v151);
          sub_182CBA0(v104, &v153);
          if ( v101 )
          {
            v34 = (_DWORD *)a1[115];
            if ( !v34 )
            {
LABEL_34:
              v35 = (void **)(a1[118] + v113);
              v36 = (void (__fastcall ***)(void *))*v35;
              if ( *v35 )
              {
                v8 = (*((_DWORD *)v36 + 4))-- == 1;
                if ( v8 )
                {
                  (**v36)(v36);
                  sub_186B220(v36);
                  v35 = (void **)(a1[118] + v113);
                }
              }
              *v35 = v34;
              goto LABEL_38;
            }
LABEL_33:
            ++v34[4];
            goto LABEL_34;
          }
        }
        else
        {
          v52 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v159);
          sub_182CBA0(v52, &v161);
          v53 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v155);
          sub_182CBA0(v53, &v157);
          v54 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v151);
          sub_182CBA0(v54, &v153);
        }
      }
      if ( (unsigned __int8)sub_33ECD0((__int64)a1, a2, (__int64)&v133) && (unsigned int)sub_8E3730(v111, 0, 0) == 1 )
      {
LABEL_38:
        v37 = a1[117] + v13;
        v38 = qword_1C7F2C0;
        if ( (v134 & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v37, &v133);
        }
        else
        {
          v39 = v133;
          *(_BYTE *)(v37 + 4) &= ~1u;
          *(_DWORD *)v37 = v39;
        }
        if ( (v136 & 1) != 0 )
        {
          sub_182C690(v38, v37 + 16, &v135);
        }
        else
        {
          v40 = v135;
          *(_BYTE *)(v37 + 20) &= ~1u;
          *(_DWORD *)(v37 + 16) = v40;
        }
        v41 = qword_1C7F2C0;
        if ( (v138 & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v37 + 32, &v137);
        }
        else
        {
          v42 = v137;
          *(_BYTE *)(v37 + 36) &= ~1u;
          *(_DWORD *)(v37 + 32) = v42;
        }
        if ( (v140 & 1) != 0 )
        {
          sub_182C690(v41, v37 + 48, &v139);
        }
        else
        {
          v43 = v139;
          *(_BYTE *)(v37 + 52) &= ~1u;
          *(_DWORD *)(v37 + 48) = v43;
        }
        v44 = qword_1C7F2C0;
        if ( (v142 & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v37 + 64, &v141);
        }
        else
        {
          v45 = v141;
          *(_BYTE *)(v37 + 68) &= ~1u;
          *(_DWORD *)(v37 + 64) = v45;
        }
        if ( (v144 & 1) != 0 )
        {
          sub_182C690(v44, v37 + 80, &v143);
        }
        else
        {
          v46 = v143;
          *(_BYTE *)(v37 + 84) &= ~1u;
          *(_DWORD *)(v37 + 80) = v46;
        }
        goto LABEL_50;
      }
LABEL_57:
      v47 = 0;
      goto LABEL_58;
    }
LABEL_121:
    v129[0] = 0;
    v76 = qword_1C7F2C0;
    v129[1] = 0;
    v130[0] = 1;
    v130[1] = 0;
    if ( (v127[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v129, v127);
    else
      LODWORD(v129[0]) = v127[0];
    if ( (v128[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v76, v130, v128);
    }
    else
    {
      BYTE4(v130[0]) &= ~1u;
      LODWORD(v130[0]) = v128[0];
    }
    v131[0] = 0;
    v131[1] = 0;
    v132[0] = 1;
    v132[1] = 0;
    v121 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v131);
    sub_182CBA0(v121, v132);
    BYTE4(v132[0]) &= ~1u;
    v77 = qword_1C7F2C0;
    LODWORD(v132[0]) = 1;
    v151 = 0;
    v152 = 0;
    v153 = 1;
    v154 = 0;
    v155 = 0;
    v156 = 0;
    v157 = 1;
    v158 = 0;
    if ( (v129[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v155, v129);
    else
      LODWORD(v155) = v129[0];
    if ( (v130[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v77, &v157, v130);
    }
    else
    {
      BYTE4(v157) &= ~1u;
      LODWORD(v157) = v130[0];
    }
    v159 = 0;
    v78 = qword_1C7F2C0;
    v160 = 0;
    v161 = 1;
    v162 = 0;
    if ( (v131[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v159, v131);
    else
      LODWORD(v159) = v131[0];
    if ( (v132[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v78, &v161, v132);
    }
    else
    {
      BYTE4(v161) &= ~1u;
      LODWORD(v161) = v132[0];
    }
    v79 = v13 + a1[117];
    v80 = *(_DWORD *)v79;
    *(_DWORD *)v79 = v151;
    LODWORD(v151) = v80;
    v81 = *(_QWORD *)(v79 + 8);
    *(_QWORD *)(v79 + 8) = v152;
    v152 = v81;
    LOBYTE(v81) = *(_BYTE *)(v79 + 4);
    *(_BYTE *)(v79 + 4) = BYTE4(v151) & 2 | v81 & 0xFD;
    BYTE4(v151) = v81 & 2 | BYTE4(v151) & 0xFD;
    v82 = *(_BYTE *)(v79 + 4);
    *(_BYTE *)(v79 + 4) = BYTE4(v151) & 1 | v82 & 0xFE;
    BYTE4(v151) = v82 & 1 | BYTE4(v151) & 0xFE;
    LODWORD(v81) = *(_DWORD *)(v79 + 16);
    *(_DWORD *)(v79 + 16) = v153;
    LODWORD(v153) = v81;
    v83 = *(_QWORD *)(v79 + 24);
    *(_QWORD *)(v79 + 24) = v154;
    v154 = v83;
    LOBYTE(v83) = *(_BYTE *)(v79 + 20);
    *(_BYTE *)(v79 + 20) = BYTE4(v153) & 2 | v83 & 0xFD;
    BYTE4(v153) = v83 & 2 | BYTE4(v153) & 0xFD;
    v84 = *(_BYTE *)(v79 + 20);
    *(_BYTE *)(v79 + 20) = BYTE4(v153) & 1 | v84 & 0xFE;
    BYTE4(v153) = v84 & 1 | BYTE4(v153) & 0xFE;
    LODWORD(v83) = *(_DWORD *)(v79 + 32);
    *(_DWORD *)(v79 + 32) = v155;
    LODWORD(v155) = v83;
    v85 = *(_QWORD *)(v79 + 40);
    *(_QWORD *)(v79 + 40) = v156;
    v156 = v85;
    LOBYTE(v85) = *(_BYTE *)(v79 + 36);
    *(_BYTE *)(v79 + 36) = BYTE4(v155) & 2 | v85 & 0xFD;
    BYTE4(v155) = v85 & 2 | BYTE4(v155) & 0xFD;
    v86 = *(_BYTE *)(v79 + 36) & 1;
    *(_BYTE *)(v79 + 36) = BYTE4(v155) & 1 | *(_BYTE *)(v79 + 36) & 0xFE;
    BYTE4(v155) = v86 | BYTE4(v155) & 0xFE;
    LODWORD(v85) = *(_DWORD *)(v79 + 48);
    *(_DWORD *)(v79 + 48) = v157;
    LODWORD(v157) = v85;
    v87 = *(_QWORD *)(v79 + 56);
    *(_QWORD *)(v79 + 56) = v158;
    v158 = v87;
    LOBYTE(v87) = *(_BYTE *)(v79 + 52);
    *(_BYTE *)(v79 + 52) = BYTE4(v157) & 2 | v87 & 0xFD;
    BYTE4(v157) = v87 & 2 | BYTE4(v157) & 0xFD;
    v88 = *(_BYTE *)(v79 + 52);
    *(_BYTE *)(v79 + 52) = BYTE4(v157) & 1 | v88 & 0xFE;
    BYTE4(v157) = v88 & 1 | BYTE4(v157) & 0xFE;
    LODWORD(v87) = *(_DWORD *)(v79 + 64);
    *(_DWORD *)(v79 + 64) = v159;
    LODWORD(v159) = v87;
    v89 = *(_QWORD *)(v79 + 72);
    *(_QWORD *)(v79 + 72) = v160;
    v160 = v89;
    LOBYTE(v89) = *(_BYTE *)(v79 + 68);
    *(_BYTE *)(v79 + 68) = BYTE4(v159) & 2 | v89 & 0xFD;
    BYTE4(v159) = v89 & 2 | BYTE4(v159) & 0xFD;
    v90 = *(_BYTE *)(v79 + 68);
    *(_BYTE *)(v79 + 68) = BYTE4(v159) & 1 | v90 & 0xFE;
    BYTE4(v159) = v90 & 1 | BYTE4(v159) & 0xFE;
    LODWORD(v89) = *(_DWORD *)(v79 + 80);
    *(_DWORD *)(v79 + 80) = v161;
    LODWORD(v161) = v89;
    v91 = *(_QWORD *)(v79 + 88);
    *(_QWORD *)(v79 + 88) = v162;
    v162 = v91;
    LOBYTE(v91) = *(_BYTE *)(v79 + 84);
    *(_BYTE *)(v79 + 84) = BYTE4(v161) & 2 | v91 & 0xFD;
    v92 = qword_1C7F2C0;
    v124 = qword_1C7F2C0;
    BYTE4(v161) = v91 & 2 | BYTE4(v161) & 0xFD;
    v93 = *(_BYTE *)(v79 + 84) & 1;
    *(_BYTE *)(v79 + 84) = BYTE4(v161) & 1 | *(_BYTE *)(v79 + 84) & 0xFE;
    BYTE4(v161) = v93 | BYTE4(v161) & 0xFE;
    sub_182CBA0(v92, &v159);
    sub_182CBA0(v124, &v161);
    v122 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v155);
    sub_182CBA0(v122, &v157);
    v123 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v151);
    sub_182CBA0(v123, &v153);
    v115 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v131);
    sub_182CBA0(v115, v132);
    v116 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v129);
    sub_182CBA0(v116, v130);
    goto LABEL_23;
  }
LABEL_50:
  v47 = 1;
LABEL_58:
  v55 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v149);
  sub_182CBA0(v55, v150);
  v56 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v147);
  sub_182CBA0(v56, v148);
  v57 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v145);
  sub_182CBA0(v57, v146);
  v58 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v141);
  sub_182CBA0(v58, &v143);
  v59 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v137);
  sub_182CBA0(v59, &v139);
  v60 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v133);
  sub_182CBA0(v60, &v135);
  return v47;
}

