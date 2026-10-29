__int64 __fastcall sub_8810F0(_DWORD *a1, __int64 *a2)
{
  char **v2; // r13
  char **v3; // r13
  char **exception; // rbp
  char **v5; // rbp
  char **v6; // r13
  char **v7; // r13
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // r12
  void *v13; // r14
  void *v14; // r14
  int v15; // edx
  __int64 v16; // rdx
  char v17; // cl
  __int64 v18; // rax
  void *v19; // r15
  unsigned int v20; // eax
  void *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // r13d
  __int64 *v25; // rbx
  __int64 v26; // r14
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r12
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // edi
  __int64 v34; // r15
  unsigned int v35; // eax
  unsigned int v36; // edx
  __int64 v37; // rsi
  unsigned int v38; // eax
  int v39; // eax
  bool v40; // zf
  unsigned int v41; // edx
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rsi
  unsigned int v45; // ecx
  size_t v46; // rsi
  unsigned int *v47; // rax
  unsigned int v48; // edx
  unsigned int v49; // r14d
  int v50; // eax
  void *v51; // rdi
  void *v52; // r13
  void *v53; // r13
  void *v54; // r13
  int v55; // ecx
  int v56; // r8d
  int v57; // r9d
  int v58; // edi
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  __int64 *v64; // rcx
  void *v65; // rdi
  unsigned int v66; // edx
  __int64 v67; // r12
  __int64 v68; // rax
  unsigned int v69; // eax
  void *v70; // r13
  __int64 v71; // r12
  unsigned int v72; // edx
  size_t v73; // rsi
  unsigned int *v74; // rax
  unsigned int v75; // ecx
  size_t v76; // rsi
  unsigned int *v77; // rax
  unsigned int v78; // r13d
  __int64 v79; // r14
  __int64 v80; // rax
  __int64 v81; // r15
  __int64 v82; // rax
  __int64 v83; // r12
  int v84; // ecx
  int v85; // r8d
  int v86; // r9d
  int v87; // edi
  __int64 v88; // rax
  void *v89; // r15
  unsigned int v90; // eax
  unsigned int v91; // edx
  __int64 v92; // rsi
  unsigned int v93; // eax
  int v94; // eax
  __int64 v95; // r12
  int v96; // r13d
  __int64 v97; // rax
  void *v98; // rbp
  __int64 v99; // r12
  __int64 *v100; // rbp
  unsigned __int64 v101; // r13
  __int64 v102; // rsi
  unsigned int v104; // r15d
  size_t v105; // rsi
  unsigned int *v106; // rax
  __int64 v107; // rdx
  __int64 *v108; // rsi
  unsigned int v109; // r15d
  size_t v110; // rsi
  unsigned int *v111; // rax
  __int64 v112; // rcx
  _QWORD *v113; // rax
  __int64 v114; // rax
  _QWORD *v115; // rax
  int v116; // [rsp+0h] [rbp-148h]
  _QWORD *v117; // [rsp+10h] [rbp-138h]
  __int64 *v119; // [rsp+20h] [rbp-128h]
  void *v120; // [rsp+28h] [rbp-120h]
  __int64 v121; // [rsp+30h] [rbp-118h]
  __int64 v122; // [rsp+30h] [rbp-118h]
  void *v123; // [rsp+38h] [rbp-110h]
  unsigned int v124; // [rsp+38h] [rbp-110h]
  unsigned int v125; // [rsp+38h] [rbp-110h]
  void *v126; // [rsp+38h] [rbp-110h]
  unsigned int v127; // [rsp+38h] [rbp-110h]
  __int64 v128; // [rsp+38h] [rbp-110h]
  __int64 v129; // [rsp+38h] [rbp-110h]
  int v130[2]; // [rsp+40h] [rbp-108h]
  unsigned int v131; // [rsp+54h] [rbp-F4h]
  char *v132; // [rsp+60h] [rbp-E8h]
  char v133[8]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v134; // [rsp+88h] [rbp-C0h]
  __int64 v135; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v136; // [rsp+98h] [rbp-B0h]
  __int64 v137; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v138; // [rsp+A8h] [rbp-A0h]
  int v139; // [rsp+B0h] [rbp-98h] BYREF
  char v140; // [rsp+B4h] [rbp-94h]
  __int64 v141; // [rsp+B8h] [rbp-90h]
  int v142; // [rsp+C0h] [rbp-88h] BYREF
  char v143; // [rsp+C4h] [rbp-84h]
  __int64 v144; // [rsp+C8h] [rbp-80h]
  int v145; // [rsp+D0h] [rbp-78h] BYREF
  char v146; // [rsp+D4h] [rbp-74h]
  __int64 v147; // [rsp+D8h] [rbp-70h]
  int v148; // [rsp+E0h] [rbp-68h] BYREF
  char v149; // [rsp+E4h] [rbp-64h]
  __int64 v150; // [rsp+E8h] [rbp-60h]
  __int64 v151; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v152; // [rsp+F8h] [rbp-50h]
  __int64 v153; // [rsp+100h] [rbp-48h] BYREF
  __int64 v154; // [rsp+108h] [rbp-40h]

  v8 = *(__int64 (__fastcall **)(__int64))(*a2 + 424);
  v119 = a2;
  if ( v8 == sub_79EFD0 )
    *(_QWORD *)v130 = a2[18];
  else
    *(_QWORD *)v130 = v8((__int64)a2);
  sub_180C5A0(&v151, "arith");
  v9 = (unsigned int)sub_15D1320(*(_QWORD *)v130 + 560LL, &v151);
  sub_16669D0(v133, *(_QWORD *)v130);
  v10 = (_QWORD *)a2[300];
  if ( v10 )
  {
    if ( (unsigned int)v9 >= *((_DWORD *)v10 - 1) )
      v10 = nullptr;
    else
      v10 = (_QWORD *)v10[v9];
  }
  v117 = __dynamic_cast(
           v10,
           (const struct __class_type_info *)&`typeinfo for'euf::th_solver,
           (const struct __class_type_info *)&`typeinfo for'arith::solver,
           0);
  if ( !v117 )
    __cxa_bad_cast();
  switch ( a1[2] )
  {
    case 0:
      v132 = "farkas";
      break;
    case 1:
      v132 = "bound";
      break;
    case 2:
      v132 = "cut";
      break;
    case 3:
      v132 = "implied-eq";
      break;
    case 4:
      v132 = "nla";
      break;
    default:
      v132 = "unknown-arithmetic";
      break;
  }
  v135 = 1;
  v136 = 0;
  v137 = 1;
  v138 = 0;
  sub_182CBA0(qword_1C7F2C0, &v137);
  BYTE4(v137) &= ~1u;
  LODWORD(v137) = 1;
  v11 = a1[3];
  if ( v11 >= a1[4] )
  {
    v24 = a1[5];
    if ( v24 >= a1[6] )
    {
      v25 = nullptr;
      v96 = 0;
      v95 = *(_QWORD *)(*(_QWORD *)v130 + 848LL);
      goto LABEL_114;
    }
    goto LABEL_17;
  }
  v12 = 40LL * v11;
  do
  {
    v21 = qword_1C7F2C0;
    v22 = v117[120];
    v146 &= 0xFCu;
    v149 &= 0xFCu;
    v145 = 0;
    v23 = v12 + v22;
    v147 = 0;
    v148 = 1;
    v150 = 0;
    if ( (*(_BYTE *)(v23 + 20) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v145, v23 + 16);
    else
      v145 = *(_DWORD *)(v23 + 16);
    sub_182CBA0(v21, &v148);
    v13 = qword_1C7F2C0;
    v148 = 1;
    v149 &= ~1u;
    BYTE4(v151) &= 0xFCu;
    BYTE4(v153) &= 0xFCu;
    LODWORD(v151) = 0;
    v152 = 0;
    LODWORD(v153) = 1;
    v154 = 0;
    sub_1836B00(qword_1C7F2C0, &v135, &v145, &v151);
    sub_182CBA0(v13, &v153);
    v14 = qword_1C7F2C0;
    ++v11;
    v12 += 40;
    v15 = v151;
    LODWORD(v151) = v135;
    LODWORD(v135) = v15;
    v16 = v152;
    v152 = v136;
    v136 = v16;
    v17 = BYTE4(v151) & 1;
    LOBYTE(v16) = BYTE4(v135) & 0xFC | BYTE4(v151) & 2;
    BYTE4(v151) = BYTE4(v135) & 1 | BYTE4(v151) & 0xFC | BYTE4(v135) & 2;
    BYTE4(v135) = v17 | v16;
    LODWORD(v153) = v137;
    v18 = v138;
    v138 = v154;
    v154 = v18;
    LODWORD(v137) = 1;
    LOBYTE(v16) = BYTE4(v137) & 0xFC | BYTE4(v153) & 2;
    BYTE4(v153) = BYTE4(v137) & 1 | BYTE4(v137) & 2 | BYTE4(v153) & 0xFC;
    BYTE4(v137) = v16;
    sub_182CBA0(qword_1C7F2C0, &v151);
    sub_182CBA0(v14, &v153);
    v19 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v145);
    sub_182CBA0(v19, &v148);
    v20 = a1[4];
  }
  while ( v11 < v20 );
  v24 = a1[5];
  if ( v24 >= a1[6] )
  {
    v49 = a1[3];
    v25 = nullptr;
    if ( v49 >= v20 )
    {
      v96 = 0;
      v95 = *(_QWORD *)(*(_QWORD *)v130 + 848LL);
      goto LABEL_114;
    }
LABEL_43:
    v121 = 40LL * v49;
    while ( 1 )
    {
      v70 = qword_1C7F2C0;
      v71 = v117[120] + v121;
      v151 = 0;
      v152 = 0;
      v153 = 1;
      v154 = 0;
      if ( (*(_BYTE *)(v71 + 4) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v151, v71);
        if ( (*(_BYTE *)(v71 + 20) & 1) == 0 )
        {
LABEL_45:
          v50 = *(_DWORD *)(v71 + 16);
          BYTE4(v153) &= ~1u;
          LODWORD(v153) = v50;
          goto LABEL_46;
        }
      }
      else
      {
        LODWORD(v151) = *(_DWORD *)v71;
        if ( (*(_BYTE *)(v71 + 20) & 1) == 0 )
          goto LABEL_45;
      }
      sub_182C690(v70, &v153, v71 + 16);
LABEL_46:
      v51 = qword_1C7F2C0;
      if ( (v153 & 0x100000000LL) != 0 || (_DWORD)v153 != 1 || (v137 & 0x100000000LL) != 0 || (_DWORD)v137 != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, &v151, &v135);
      }
      else
      {
        sub_1831650(qword_1C7F2C0, &v151, &v135);
        sub_182CBA0(v51, &v153);
        BYTE4(v153) &= ~1u;
        LODWORD(v153) = 1;
      }
      v140 &= 0xFCu;
      v52 = qword_1C7F2C0;
      v143 &= 0xFCu;
      v139 = 0;
      v141 = 0;
      v142 = 1;
      v144 = 0;
      if ( (v151 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v139, &v151);
      else
        v139 = v151;
      if ( (v153 & 0x100000000LL) != 0 )
      {
        sub_182C690(v52, &v142, &v153);
      }
      else
      {
        v143 &= ~1u;
        v142 = v153;
      }
      v53 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v151);
      sub_182CBA0(v53, &v153);
      v146 &= 0xFCu;
      v54 = qword_1C7F2C0;
      v149 &= 0xFCu;
      v145 = 0;
      v147 = 0;
      v148 = 1;
      v150 = 0;
      if ( (v140 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v145, &v139);
      else
        v145 = v139;
      if ( (v143 & 1) != 0 )
      {
        sub_182C690(v54, &v148, &v142);
      }
      else
      {
        v149 &= ~1u;
        v148 = v142;
      }
      sub_1831690(qword_1C7F2C0, &v145);
      v58 = v134;
      if ( !v134 )
      {
        sub_16669E0(v133);
        v58 = v134;
      }
      v59 = sub_166A700(v58, (unsigned int)&v145, 1, v55, v56, v57);
      v60 = v59;
      if ( v59 )
        ++*(_DWORD *)(v59 + 8);
      if ( v25 )
      {
        v61 = *((_DWORD *)v25 - 1);
        if ( v61 == *((_DWORD *)v25 - 2) )
        {
          v75 = (3 * v61 + 1) >> 1;
          v76 = 8 * v75 + 8;
          if ( 8 * v61 + 8 >= (unsigned int)v76 || v61 >= v75 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v151, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v151);
            sub_233E40((__int64)&v151);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v131 = (3 * v61 + 1) >> 1;
          v128 = v60;
          v77 = (unsigned int *)sub_186B300(v25 - 1, v76);
          v25 = (__int64 *)(v77 + 2);
          v60 = v128;
          *v77 = v131;
          LODWORD(v77) = v77[1];
          v64 = &v25[(unsigned int)v77];
          v63 = (_DWORD)v77 + 1;
        }
        else
        {
          v62 = v61;
          v63 = v61 + 1;
          v64 = &v25[v62];
        }
      }
      else
      {
        v129 = v59;
        v113 = (_QWORD *)sub_186B270(0x18u);
        v25 = v113 + 1;
        *v113 = 2;
        v60 = v129;
        v63 = 1;
        v64 = v25;
      }
      *v64 = v60;
      v65 = qword_1C7F2C0;
      *((_DWORD *)v25 - 1) = v63;
      sub_182CBA0(v65, &v145);
      sub_182CBA0(v65, &v148);
      v126 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v139);
      sub_182CBA0(v126, &v142);
      v66 = *(_DWORD *)(v71 + 32);
      v67 = v119[291];
      v68 = v66 >> 1;
      if ( v67 )
      {
        if ( (unsigned int)v68 >= *(_DWORD *)(v67 - 4) )
        {
          v67 = 0;
        }
        else
        {
          v67 = *(_QWORD *)(v67 + 8 * v68);
          if ( v67 )
          {
            if ( (v66 & 1) == 0 || (v67 = sub_15EC2C0(v119[18], v67)) != 0 )
              ++*(_DWORD *)(v67 + 8);
          }
        }
      }
      v69 = *((_DWORD *)v25 - 1);
      if ( v69 == *((_DWORD *)v25 - 2) )
      {
        v72 = (3 * v69 + 1) >> 1;
        v73 = 8 * v72 + 8;
        if ( 8 * v69 + 8 >= (unsigned int)v73 || v69 >= v72 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v151, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, &v151);
          sub_233E40((__int64)&v151);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v127 = (3 * v69 + 1) >> 1;
        v74 = (unsigned int *)sub_186B300(v25 - 1, v73);
        v25 = (__int64 *)(v74 + 2);
        *v74 = v127;
        v69 = v74[1];
      }
      v121 += 40;
      ++v49;
      v25[v69] = v67;
      *((_DWORD *)v25 - 1) = v69 + 1;
      if ( v49 >= a1[4] )
      {
        v78 = a1[5];
        v27 = a1[6];
        if ( v78 < v27 )
          goto LABEL_92;
        v95 = *(_QWORD *)(*(_QWORD *)v130 + 848LL);
LABEL_113:
        v96 = *((_DWORD *)v25 - 1);
        goto LABEL_114;
      }
    }
  }
LABEL_17:
  v25 = nullptr;
  v26 = 24LL * v24;
  do
  {
    if ( !*(_BYTE *)(v26 + v117[121]) )
      goto LABEL_18;
    v28 = sub_15E1B70(v130[0]);
    v29 = v28;
    if ( v28 )
      ++*(_DWORD *)(v28 + 8);
    v151 = 1;
    v152 = 0;
    v153 = 1;
    v154 = 0;
    sub_182CBA0(qword_1C7F2C0, &v153);
    v33 = v134;
    BYTE4(v153) &= ~1u;
    LODWORD(v153) = 1;
    if ( !v134 )
    {
      sub_16669E0(v133);
      v33 = v134;
    }
    v34 = sub_166A700(v33, (unsigned int)&v151, 1, v30, v31, v32);
    v123 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v151);
    sub_182CBA0(v123, &v153);
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    if ( v25 )
    {
      v35 = *((_DWORD *)v25 - 1);
      v36 = *((_DWORD *)v25 - 2);
      if ( v35 == v36 )
      {
        v41 = (3 * v35 + 1) >> 1;
        v42 = 8 * v41 + 8;
        if ( 8 * v35 + 8 >= (unsigned int)v42 || v35 >= v41 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v151, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, &v151);
          sub_233E40((__int64)&v151);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v124 = (3 * v35 + 1) >> 1;
        v43 = (unsigned int *)sub_186B300(v25 - 1, v42);
        v44 = v43[1];
        v36 = v124;
        v25 = (__int64 *)(v43 + 2);
        *v43 = v124;
        v38 = v44 + 1;
        v25[v44] = v34;
        *((_DWORD *)v25 - 1) = v44 + 1;
        if ( !v29 )
        {
LABEL_36:
          if ( v38 != v36 )
          {
            v25[v38] = 0;
            *((_DWORD *)v25 - 1) = v38 + 1;
            goto LABEL_18;
          }
          goto LABEL_38;
        }
      }
      else
      {
        v37 = v35;
        v38 = v35 + 1;
        v25[v37] = v34;
        *((_DWORD *)v25 - 1) = v38;
        if ( !v29 )
          goto LABEL_36;
      }
    }
    else
    {
      v114 = sub_186B270(0x18u);
      *(_QWORD *)(v114 + 8) = v34;
      v25 = (__int64 *)(v114 + 8);
      *(_QWORD *)v114 = 0x100000002LL;
      if ( !v29 )
      {
        *(_QWORD *)(v114 + 16) = 0;
        *(_DWORD *)(v114 + 4) = 2;
        goto LABEL_18;
      }
    }
    ++*(_DWORD *)(v29 + 8);
    v39 = *((_DWORD *)v25 - 1);
    v36 = *((_DWORD *)v25 - 2);
    if ( v39 != v36 )
    {
      v25[v39] = v29;
      *((_DWORD *)v25 - 1) = v39 + 1;
LABEL_31:
      v40 = (*(_DWORD *)(v29 + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(*(_QWORD *)v130, v29);
      goto LABEL_18;
    }
LABEL_38:
    v45 = (3 * v36 + 1) >> 1;
    v46 = 8 * v45 + 8;
    if ( 8 * v36 + 8 >= (unsigned int)v46 || v36 >= v45 )
    {
      v6 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v151, "Overflow encountered when expanding vector");
      *v6 = (char *)off_1C63128;
      sub_2333C0(v6 + 1, &v151);
      sub_233E40((__int64)&v151);
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v125 = (3 * v36 + 1) >> 1;
    v47 = (unsigned int *)sub_186B300(v25 - 1, v46);
    v25 = (__int64 *)(v47 + 2);
    *v47 = v125;
    v48 = v47[1];
    *(_QWORD *)&v47[2 * v48 + 2] = v29;
    v47[1] = v48 + 1;
    if ( v29 )
      goto LABEL_31;
LABEL_18:
    ++v24;
    v26 += 24;
    v27 = a1[6];
  }
  while ( v24 < v27 );
  v49 = a1[3];
  if ( v49 < a1[4] )
    goto LABEL_43;
  v78 = a1[5];
  if ( v78 < v27 )
  {
LABEL_92:
    v119 = &v153;
    v79 = 24LL * v78;
    do
    {
      while ( *(_BYTE *)(v79 + v117[121]) )
      {
        ++v78;
        v79 += 24;
        if ( v78 >= v27 )
          goto LABEL_112;
      }
      v80 = sub_15E1B70(v130[0]);
      v81 = v80;
      if ( v80 )
        ++*(_DWORD *)(v80 + 8);
      v82 = sub_15E1A70(v130[0]);
      v83 = v82;
      if ( v82 )
        ++*(_DWORD *)(v82 + 8);
      if ( v81 )
      {
        v40 = (*(_DWORD *)(v81 + 8))-- == 1;
        if ( v40 )
          sub_15D7BC0(*(_QWORD *)v130, v81);
      }
      v151 = 1;
      v152 = 0;
      v153 = 1;
      v154 = 0;
      sub_182CBA0(qword_1C7F2C0, &v153);
      v87 = v134;
      BYTE4(v153) &= ~1u;
      LODWORD(v153) = 1;
      if ( !v134 )
      {
        sub_16669E0(v133);
        v87 = v134;
      }
      v88 = sub_166A700(v87, (unsigned int)&v151, 1, v84, v85, v86);
      v89 = qword_1C7F2C0;
      v122 = v88;
      sub_182CBA0(qword_1C7F2C0, &v151);
      sub_182CBA0(v89, &v153);
      if ( v122 )
        ++*(_DWORD *)(v122 + 8);
      if ( v25 )
      {
        v90 = *((_DWORD *)v25 - 1);
        v91 = *((_DWORD *)v25 - 2);
        if ( v90 == v91 )
        {
          v104 = (3 * v90 + 1) >> 1;
          v105 = 8 * v104 + 8;
          if ( 8 * v90 + 8 >= (unsigned int)v105 || v90 >= v104 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v151, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, &v151);
            sub_233E40((__int64)&v151);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v106 = (unsigned int *)sub_186B300(v25 - 1, v105);
          v107 = v106[1];
          v25 = (__int64 *)(v106 + 2);
          *v106 = v104;
          LODWORD(v106) = v107;
          v108 = &v25[v107];
          v91 = v104;
          v93 = (_DWORD)v106 + 1;
          *v108 = v122;
          *((_DWORD *)v25 - 1) = v93;
          if ( !v83 )
          {
LABEL_126:
            if ( v93 == v91 )
            {
LABEL_128:
              v109 = (3 * v91 + 1) >> 1;
              v110 = 8 * v109 + 8;
              if ( 8 * v91 + 8 >= (unsigned int)v110 || v91 >= v109 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v151, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, &v151);
                sub_233E40((__int64)&v151);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v111 = (unsigned int *)sub_186B300(v25 - 1, v110);
              v112 = v111[1];
              v25 = (__int64 *)(v111 + 2);
              *v111 = v109;
              *(_QWORD *)&v111[2 * v112 + 2] = v83;
              v111[1] = v112 + 1;
              if ( !v83 )
                goto LABEL_111;
              v40 = (*(_DWORD *)(v83 + 8))-- == 1;
              if ( !v40 )
                goto LABEL_111;
LABEL_132:
              sub_15D7BC0(*(_QWORD *)v130, v83);
              goto LABEL_111;
            }
LABEL_127:
            v25[v93] = 0;
            *((_DWORD *)v25 - 1) = v93 + 1;
            goto LABEL_111;
          }
        }
        else
        {
          v92 = v90;
          v93 = v90 + 1;
          v25[v92] = v122;
          *((_DWORD *)v25 - 1) = v93;
          if ( !v83 )
            goto LABEL_126;
        }
      }
      else
      {
        v115 = (_QWORD *)sub_186B270(0x18u);
        v25 = v115 + 1;
        v115[1] = v122;
        *v115 = 0x100000002LL;
        v93 = 1;
        if ( !v83 )
          goto LABEL_127;
      }
      ++*(_DWORD *)(v83 + 8);
      v94 = *((_DWORD *)v25 - 1);
      v91 = *((_DWORD *)v25 - 2);
      if ( v94 == v91 )
        goto LABEL_128;
      v25[v94] = v83;
      *((_DWORD *)v25 - 1) = v94 + 1;
      v40 = (*(_DWORD *)(v83 + 8))-- == 1;
      if ( v40 )
        goto LABEL_132;
LABEL_111:
      ++v78;
      v79 += 24;
      v27 = a1[6];
    }
    while ( v78 < v27 );
  }
LABEL_112:
  v95 = *(_QWORD *)(*(_QWORD *)v130 + 848LL);
  if ( v25 )
    goto LABEL_113;
  v96 = 0;
LABEL_114:
  sub_180C5A0(&v151, v132);
  v97 = sub_15E3760(v130[0], (int)&v151, v96, (int)v25, v95, v116, (int)&v151, (int)v117, (int)a1, (int)v119, &v135);
  v98 = qword_1C7F2C0;
  v99 = v97;
  sub_182CBA0(qword_1C7F2C0, v120);
  sub_182CBA0(v98, &v137);
  if ( v25 )
  {
    v100 = v25;
    v101 = (unsigned __int64)&v25[*((unsigned int *)v25 - 1)];
    if ( (unsigned __int64)v25 < v101 )
    {
      do
      {
        while ( 1 )
        {
          v102 = *v100;
          if ( *v100 )
          {
            v40 = (*(_DWORD *)(v102 + 8))-- == 1;
            if ( v40 )
              break;
          }
          if ( (unsigned __int64)++v100 >= v101 )
            goto LABEL_121;
        }
        ++v100;
        sub_15D7BC0(*(_QWORD *)v130, v102);
      }
      while ( (unsigned __int64)v100 < v101 );
    }
LABEL_121:
    sub_186B220(v25 - 1);
  }
  return v99;
}

