__int64 __fastcall sub_B5F440(__int64 *a1, unsigned int *a2, __int64 a3, double a4)
{
  int v6; // eax
  __int64 v7; // rsi
  void *v8; // rdi
  char v9; // r13
  __int64 result; // rax
  __int64 *v11; // r14
  __int64 *v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // r15
  _QWORD *v21; // r14
  unsigned int *v22; // rax
  unsigned int *v23; // r13
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  bool v27; // zf
  int v28; // r13d
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 *v31; // r15
  __int64 *v32; // r13
  __int64 *v33; // rax
  __int64 *v34; // rax
  unsigned int v35; // eax
  __int64 **v36; // r15
  __int64 **v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rdx
  int v40; // esi
  _QWORD *v41; // rdi
  __int64 **v42; // rcx
  _QWORD *v43; // r13
  __int64 **v44; // rax
  unsigned int v45; // eax
  unsigned int *v46; // rax
  unsigned int *v47; // r15
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // r14d
  int v52; // r14d
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r14
  void *v56; // r12
  int v57; // ecx
  int v58; // r8d
  int v59; // r9d
  __int64 v60; // rdi
  void *v61; // r13
  unsigned int *v62; // rax
  __int64 v63; // r15
  unsigned int *v64; // r12
  __int64 v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // rax
  unsigned int v68; // r13d
  __int64 v69; // rax
  __int64 v70; // rsi
  int v71; // r13d
  unsigned int v72; // ecx
  unsigned int v73; // edx
  unsigned int *v74; // rax
  unsigned int v75; // r8d
  size_t v76; // rsi
  _DWORD *v77; // rax
  __int64 v78; // rsi
  _DWORD *v79; // r15
  _DWORD *v80; // r14
  __int64 v81; // rax
  unsigned int v82; // r15d
  unsigned int v83; // edx
  unsigned int *v84; // rax
  unsigned int *v85; // rdi
  unsigned int v86; // edx
  unsigned int v87; // ecx
  unsigned int *v88; // rax
  __int64 v89; // r15
  __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // r15
  __int64 v93; // rax
  unsigned int v94; // r15d
  unsigned int v95; // edx
  unsigned int *v96; // rax
  unsigned int *v97; // rsi
  char **v98; // r12
  char **v99; // r13
  char **v100; // r12
  char **exception; // r12
  char **v102; // r12
  int v103; // [rsp+0h] [rbp-A0h]
  __int64 v104; // [rsp+8h] [rbp-98h]
  __int64 v105; // [rsp+8h] [rbp-98h]
  __int64 v106; // [rsp+8h] [rbp-98h]
  __int64 v107; // [rsp+10h] [rbp-90h]
  __int64 **v108; // [rsp+10h] [rbp-90h]
  __int64 v109; // [rsp+10h] [rbp-90h]
  unsigned int v110; // [rsp+10h] [rbp-90h]
  unsigned int v111; // [rsp+10h] [rbp-90h]
  unsigned int v112; // [rsp+18h] [rbp-88h]
  unsigned int v113; // [rsp+18h] [rbp-88h]
  int v114[2]; // [rsp+18h] [rbp-88h]
  __int64 v115; // [rsp+18h] [rbp-88h]
  int v116[2]; // [rsp+18h] [rbp-88h]
  unsigned int v117; // [rsp+18h] [rbp-88h]
  int v118[2]; // [rsp+18h] [rbp-88h]
  __int64 *v120; // [rsp+28h] [rbp-78h]
  __int64 v121; // [rsp+28h] [rbp-78h]
  __int64 *v122; // [rsp+30h] [rbp-70h]
  unsigned int v123; // [rsp+38h] [rbp-68h]
  unsigned int *v124; // [rsp+38h] [rbp-68h]
  int v125; // [rsp+40h] [rbp-60h]
  int v126; // [rsp+48h] [rbp-58h]
  __int64 v127; // [rsp+50h] [rbp-50h] BYREF
  __int64 v128; // [rsp+58h] [rbp-48h]
  __int64 v129; // [rsp+60h] [rbp-40h] BYREF
  void *v130; // [rsp+68h] [rbp-38h]

  v6 = *(_DWORD *)(a3 + 52);
  BYTE4(v127) &= 0xFCu;
  LODWORD(v127) = v6;
  v120 = &v129;
  v128 = 0;
  v129 = 1;
  v130 = nullptr;
  sub_182CBA0(qword_1C7F2C0, &v129);
  v7 = a3 + 8;
  LODWORD(v129) = 1;
  BYTE4(v129) &= ~1u;
  v8 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 28) & 1) == 0 && *(_DWORD *)(a3 + 24) == 1 )
  {
    if ( (*(_BYTE *)(a3 + 12) & 1) != 0 || (v127 & 0x100000000LL) != 0 )
    {
      v122 = &v127;
      v9 = (int)sub_182C7B0(qword_1C7F2C0, v7, &v127) < 0;
      v8 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v127);
    }
    else
    {
      v122 = &v127;
      v9 = *(_DWORD *)(a3 + 8) < (int)v127;
      sub_182CBA0(qword_1C7F2C0, &v127);
    }
  }
  else
  {
    v122 = &v127;
    v9 = sub_1848D40(qword_1C7F2C0, v7, &v127);
    v8 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v127);
  }
  sub_182CBA0(v8, &v129);
  result = 1;
  if ( !v9 )
    return result;
  v11 = *(__int64 **)(a3 + 40);
  v12 = &v11[2 * *(unsigned int *)(a3 + 48)];
  if ( v12 != v11 )
  {
    while ( (unsigned __int64)*v11 <= 1 )
    {
      v11 += 2;
      if ( v12 == v11 )
        goto LABEL_6;
    }
    if ( v12 != v11 )
    {
      v31 = v12;
      do
      {
        v32 = v11;
        while ( 1 )
        {
          v33 = v32 + 2;
          if ( v31 == v32 + 2 )
            break;
          while ( 1 )
          {
            v32 = v33;
            if ( (unsigned __int64)*v33 > 1 )
              break;
            v33 += 2;
            if ( v31 == v33 )
              goto LABEL_43;
          }
          if ( (unsigned __int8)sub_8F5D90(*(_QWORD *)(a1[1] + 16), *v11, *v33) )
            return 0xFFFFFFFFLL;
        }
LABEL_43:
        v34 = v11 + 2;
        if ( v31 == v11 + 2 )
          break;
        while ( 1 )
        {
          v11 = v34;
          if ( (unsigned __int64)*v34 > 1 )
            break;
          v34 += 2;
          if ( v31 == v34 )
            goto LABEL_6;
        }
      }
      while ( v31 != v34 );
    }
  }
LABEL_6:
  v13 = *a1;
  if ( a2 )
    ++a2[2];
  v14 = *(_QWORD *)(a1[1] + 16);
  v15 = *(_QWORD *)(v14 + 8656);
  if ( !v15 || (v16 = *a2, (unsigned int)v16 >= *(_DWORD *)(v15 - 4)) || !*(_QWORD *)(v15 + 8 * v16) )
  {
    sub_B6F780(v14);
    v14 = *(_QWORD *)(a1[1] + 16);
  }
  v123 = sub_B645B0(v14, a2);
  v17 = *(_QWORD *)(a1[1] + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v17 + 7488) + 48LL))(
    *(_QWORD *)(v17 + 7488),
    *(_QWORD *)(*(_QWORD *)(v17 + 8840) + 8LL * (v123 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + 7488) + 64LL))(*(_QWORD *)(v17 + 7488));
  v112 = a2[2];
  a2[2] = v112 - 1;
  if ( v112 == 1 )
    sub_15D7BC0(v13, a2);
  v18 = sub_186B270(0x10u);
  v19 = *(unsigned int *)(a3 + 48);
  v20 = *(_QWORD **)(a3 + 40);
  *(_DWORD *)(v18 + 8) = v123 ^ 1;
  v124 = (unsigned int *)(v18 + 8);
  v19 *= 16;
  v21 = (_QWORD *)((char *)v20 + v19);
  *(_QWORD *)v18 = 0x100000002LL;
  v22 = (unsigned int *)(v18 + 8);
  if ( v20 != (_QWORD *)((char *)v20 + v19) )
  {
    while ( *v20 <= 1u )
    {
      v20 += 2;
      if ( v21 == v20 )
        goto LABEL_54;
    }
LABEL_17:
    v124 = v22;
    if ( v21 != v20 )
    {
      v23 = (unsigned int *)v20[1];
      v104 = *a1;
      if ( v23 )
        ++v23[2];
      v24 = *(_QWORD *)(a1[1] + 16);
      v25 = *(_QWORD *)(v24 + 8656);
      if ( !v25 || (v26 = *v23, (unsigned int)v26 >= *(_DWORD *)(v25 - 4)) || !*(_QWORD *)(v25 + 8 * v26) )
      {
        sub_B6F780(v24);
        v24 = *(_QWORD *)(a1[1] + 16);
      }
      v113 = sub_B645B0(v24, v23);
      v107 = *(_QWORD *)(a1[1] + 16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v107 + 7488) + 48LL))(
        *(_QWORD *)(v107 + 7488),
        *(_QWORD *)(*(_QWORD *)(v107 + 8840) + 8LL * (v113 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v107 + 7488) + 64LL))(*(_QWORD *)(v107 + 7488));
      v27 = v23[2]-- == 1;
      if ( v27 )
        sub_15D7BC0(v104, v23);
      v28 = v113 ^ 1;
      v29 = *(v124 - 1);
      if ( (_DWORD)v29 == *(v124 - 2) )
      {
        v72 = (unsigned int)(3 * v29 + 1) >> 1;
        v73 = 4 * v72 + 8;
        if ( 4 * (int)v29 + 8 >= v73 || (unsigned int)v29 >= v72 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v127, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v127);
          sub_233E40((__int64)&v127);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v117 = (unsigned int)(3 * v29 + 1) >> 1;
        v74 = (unsigned int *)sub_186B300(v124 - 2, v73);
        v124 = v74 + 2;
        *v74 = v117;
        v29 = v74[1];
      }
      v124[v29] = v28;
      v30 = v20 + 2;
      ++*(v124 - 1);
      if ( v21 != v20 + 2 )
      {
        do
        {
          v20 = v30;
          if ( *v30 > 1u )
          {
            v22 = v124;
            goto LABEL_17;
          }
          v30 += 2;
        }
        while ( v21 != v30 );
        v22 = v124;
LABEL_54:
        v124 = v22;
      }
    }
  }
  v35 = *(_DWORD *)(a3 + 52);
  if ( v35 <= 1 )
  {
    v127 = 0;
    v128 = 0;
    v55 = *a1;
    v129 = 1;
    v56 = qword_1C7F2C0;
    v130 = nullptr;
    goto LABEL_83;
  }
  v36 = *(__int64 ***)(a3 + 40);
  v37 = &v36[2 * *(unsigned int *)(a3 + 48)];
  if ( v36 == v37 )
    goto LABEL_118;
  while ( (unsigned __int64)*v36 <= 1 )
  {
    v36 += 2;
    if ( v37 == v36 )
      goto LABEL_118;
  }
  if ( v37 == v36 )
  {
LABEL_118:
    if ( v35 == 2 )
      BUG();
    v43 = nullptr;
    v46 = (unsigned int *)sub_15DDD30(
                            *a1,
                            v103,
                            v104,
                            v107,
                            *a1,
                            (int)a2,
                            (int)&v129,
                            (int)&v127,
                            (int)v124,
                            v125,
                            v126,
                            v127,
                            v128,
                            v129,
                            v130);
  }
  else
  {
    v108 = v37;
    *(_QWORD *)v114 = **v36;
    v38 = (_QWORD *)sub_186B270(0x18u);
    *v38 = 2;
    v39 = *(_QWORD *)v114;
    v40 = 1;
    v41 = v38 + 1;
    v42 = v108;
    v43 = v38 + 1;
    while ( 1 )
    {
      v44 = v36 + 2;
      *v41 = v39;
      *((_DWORD *)v43 - 1) = v40;
      if ( v42 == v36 + 2 )
        break;
      while ( 1 )
      {
        v36 = v44;
        if ( (unsigned __int64)*v44 > 1 )
          break;
        v44 += 2;
        if ( v42 == v44 )
          goto LABEL_69;
      }
      if ( v42 == v44 )
        break;
      v39 = **v44;
      v45 = *((_DWORD *)v43 - 1);
      if ( v45 == *((_DWORD *)v43 - 2) )
      {
        v75 = (3 * v45 + 1) >> 1;
        v76 = 8 * v75 + 8;
        if ( 8 * v45 + 8 >= (unsigned int)v76 || v45 >= v75 )
        {
          v102 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v127, "Overflow encountered when expanding vector");
          *v102 = (char *)off_1C63128;
          sub_2333C0(v102 + 1, &v127);
          sub_233E40((__int64)&v127);
          __cxa_throw(v102, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v104) = (3 * v45 + 1) >> 1;
        v108 = v42;
        *(_QWORD *)v118 = v39;
        v77 = (_DWORD *)sub_186B300(v43 - 1, v76);
        v78 = (unsigned int)v77[1];
        v43 = v77 + 2;
        v39 = *(_QWORD *)v118;
        v42 = v108;
        v41 = &v77[2 * v78 + 2];
        *v77 = v104;
        v40 = v78 + 1;
      }
      else
      {
        v41 = &v43[v45];
        v40 = v45 + 1;
      }
    }
LABEL_69:
    v115 = *a1;
    if ( *(_DWORD *)(a3 + 52) == 2 )
    {
      v79 = (_DWORD *)*v43;
      v80 = (_DWORD *)v43[1];
      if ( *v43 )
        ++v79[2];
      if ( v80 )
        ++v80[2];
      v110 = sub_966380(a1[1], v79, v80);
      v106 = *(_QWORD *)(a1[1] + 16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v106 + 7488) + 48LL))(
        *(_QWORD *)(v106 + 7488),
        *(_QWORD *)(*(_QWORD *)(v106 + 8840) + 8LL * (v110 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v106 + 7488) + 64LL))(*(_QWORD *)(v106 + 7488));
      if ( v80 )
      {
        v27 = v80[2]-- == 1;
        if ( v27 )
          sub_15D7BC0(v115, v80);
      }
      if ( v79 )
      {
        v27 = v79[2]-- == 1;
        if ( v27 )
          sub_15D7BC0(v115, v79);
      }
      v81 = *(v124 - 1);
      if ( (_DWORD)v81 == *(v124 - 2) )
      {
        v94 = (unsigned int)(3 * v81 + 1) >> 1;
        v95 = 4 * v94 + 8;
        if ( 4 * (int)v81 + 8 >= v95 || (unsigned int)v81 >= v94 )
        {
          v98 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v127, "Overflow encountered when expanding vector");
          *v98 = (char *)off_1C63128;
          sub_2333C0(v98 + 1, &v127);
          sub_233E40((__int64)&v127);
          __cxa_throw(v98, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v96 = (unsigned int *)sub_186B300(v124 - 2, v95);
        v97 = v96 + 2;
        *v96 = v94;
        v81 = v96[1];
        v124 = v97;
      }
      v124[v81] = v110;
      ++*(v124 - 1);
      goto LABEL_117;
    }
    v46 = (unsigned int *)sub_15DDD30(
                            v115,
                            v103,
                            v104,
                            (int)v108,
                            v115,
                            (int)a2,
                            (int)&v129,
                            (int)&v127,
                            (int)v124,
                            v125,
                            v126,
                            v127,
                            v128,
                            v129,
                            v130);
  }
  v47 = v46;
  v109 = *a1;
  if ( v46 )
    v46[2] += 2;
  v48 = *(_QWORD *)(a1[1] + 16);
  v49 = *(_QWORD *)(v48 + 8656);
  if ( !v49 || (v50 = *v46, (unsigned int)v50 >= *(_DWORD *)(v49 - 4)) || !*(_QWORD *)(v49 + 8 * v50) )
  {
    sub_B6F780(v48);
    v48 = *(_QWORD *)(a1[1] + 16);
  }
  v51 = sub_B645B0(v48, v47);
  v105 = *(_QWORD *)(a1[1] + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v105 + 7488) + 48LL))(
    *(_QWORD *)(v105 + 7488),
    *(_QWORD *)(*(_QWORD *)(v105 + 8840) + 8LL * (v51 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v105 + 7488) + 64LL))(*(_QWORD *)(v105 + 7488));
  v27 = v47[2]-- == 1;
  if ( v27 )
    sub_15D7BC0(v109, v47);
  v52 = v51 ^ 1;
  v53 = *(v124 - 1);
  if ( (_DWORD)v53 == *(v124 - 2) )
  {
    v86 = (unsigned int)(3 * v53 + 1) >> 1;
    v87 = 4 * v86 + 8;
    if ( 4 * (int)v53 + 8 >= v87 || (unsigned int)v53 >= v86 )
    {
      v100 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v122, "Overflow encountered when expanding vector");
      *v100 = (char *)off_1C63128;
      sub_2333C0(v100 + 1, v122);
      sub_233E40((__int64)v122);
      __cxa_throw(v100, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v111 = (unsigned int)(3 * v53 + 1) >> 1;
    v88 = (unsigned int *)sub_186B300(v124 - 2, v87);
    v124 = v88 + 2;
    *v88 = v111;
    v53 = v88[1];
  }
  v124[v53] = v52;
  ++*(v124 - 1);
  v27 = v47[2]-- == 1;
  if ( v27 )
    sub_15D7BC0(*(_QWORD *)v116, v47);
  if ( v43 )
LABEL_117:
    sub_186B220(v43 - 1);
  v54 = *(unsigned int *)(a3 + 52);
  v127 = 0;
  v128 = 0;
  v55 = *a1;
  v56 = qword_1C7F2C0;
  v129 = 1;
  v35 = v54;
  v130 = nullptr;
  if ( (int)v54 >= 0 )
  {
LABEL_83:
    LODWORD(v127) = v35;
    goto LABEL_84;
  }
  sub_1830C40(qword_1C7F2C0, v122, v54);
LABEL_84:
  sub_182CBA0(v56, v120);
  v60 = a1[3];
  BYTE4(v129) &= ~1u;
  LODWORD(v129) = 1;
  if ( !v60 )
  {
    sub_16669E0(a1 + 2);
    v60 = a1[3];
  }
  sub_166A700(v60, (_DWORD)v122, 1, v57, v58, v59);
  v61 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v122);
  sub_182CBA0(v61, v120);
  v62 = (unsigned int *)sub_15E1B70(a1[2]);
  v63 = *a1;
  v64 = v62;
  if ( v62 )
    v62[2] += 2;
  v65 = *(_QWORD *)(a1[1] + 16);
  v66 = *(_QWORD *)(v65 + 8656);
  if ( !v66 || (v67 = *v62, (unsigned int)v67 >= *(_DWORD *)(v66 - 4)) || !*(_QWORD *)(v66 + 8 * v67) )
  {
    sub_B6F780(v65);
    v65 = *(_QWORD *)(a1[1] + 16);
  }
  v68 = sub_B645B0(v65, v64);
  v121 = *(_QWORD *)(a1[1] + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v121 + 7488) + 48LL))(
    *(_QWORD *)(v121 + 7488),
    *(_QWORD *)(*(_QWORD *)(v121 + 8840) + 8LL * (v68 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v121 + 7488) + 64LL))(*(_QWORD *)(v121 + 7488));
  v27 = v64[2]-- == 1;
  if ( v27 )
    sub_15D7BC0(v63, v64);
  v69 = *(v124 - 1);
  if ( (_DWORD)v69 == *(v124 - 2) )
  {
    v82 = (unsigned int)(3 * v69 + 1) >> 1;
    v83 = 4 * v82 + 8;
    if ( 4 * (int)v69 + 8 >= v83 || (unsigned int)v69 >= v82 )
    {
      v99 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v122, "Overflow encountered when expanding vector");
      *v99 = (char *)off_1C63128;
      sub_2333C0(v99 + 1, v122);
      sub_233E40((__int64)v122);
      __cxa_throw(v99, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v84 = (unsigned int *)sub_186B300(v124 - 2, v83);
    v85 = v84 + 2;
    *v84 = v82;
    v69 = v84[1];
    v124 = v85;
  }
  v124[v69] = v68;
  v70 = *(v124 - 1);
  v71 = v70 + 1;
  *(v124 - 1) = v70 + 1;
  if ( (unsigned int)sub_180B130(v124) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v89 = *(_QWORD *)(a1[1] + 16);
      v90 = sub_180B150(v124, v70);
      v91 = sub_AA55A0(v89, v90, v71, v124);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v91, "\n");
    }
    else
    {
      v92 = *(_QWORD *)(a1[1] + 16);
      v93 = sub_180B150(v124, v70);
      sub_AA55A0(v92, v93, v71, v124);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  sub_B69FE0(*(_QWORD *)(a1[1] + 16), *(_DWORD *)(a1[1] + 8), v71, (_DWORD)v124, 0, 0, 1);
  v27 = v64[2]-- == 1;
  if ( v27 )
    sub_15D7BC0(v55, v64);
  sub_186B220(v124 - 2);
  return 0xFFFFFFFFLL;
}

