__int64 __fastcall sub_58B5E0(__int64 a1, __int64 *a2, _QWORD *a3, __int64 **a4)
{
  char **v4; // r13
  char **v5; // r13
  char **exception; // rbx
  __int64 v10; // rsi
  unsigned int v11; // r13d
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  unsigned int *i; // rax
  __int64 v15; // rax
  __int64 *v16; // rbx
  __int64 j; // rax
  unsigned int v18; // edi
  __int64 v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rdx
  int v22; // eax
  __int64 *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r13
  unsigned int v26; // eax
  unsigned int v27; // edx
  size_t v28; // rsi
  __int64 v29; // rax
  unsigned int v30; // ecx
  size_t v31; // rsi
  unsigned int v32; // r15d
  unsigned int *v33; // rax
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 (__fastcall *v37)(__int64, __int64 *); // rax
  __int64 v38; // rax
  __int64 (__fastcall *v39)(__int64, __int64 *); // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdi
  bool v43; // zf
  int v44; // ecx
  int v45; // r9d
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdx
  _QWORD *v50; // r12
  unsigned int v51; // r13d
  __int64 v52; // rdi
  __int64 v53; // r8
  int v54; // eax
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  __int64 *v62; // rcx
  int v63; // ecx
  int v64; // r9d
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rdi
  int v68; // ecx
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 *v72; // r13
  unsigned __int64 v73; // r14
  __int64 v74; // rsi
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rdi
  __int64 result; // rax
  __int64 *v86; // r12
  unsigned __int64 v87; // r13
  __int64 v88; // rsi
  unsigned int v89; // ecx
  size_t v90; // rsi
  __int64 v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  int v94; // [rsp+0h] [rbp-318h]
  int v95; // [rsp+0h] [rbp-318h]
  int v96; // [rsp+0h] [rbp-318h]
  __int64 v97; // [rsp+8h] [rbp-310h]
  __int64 v98; // [rsp+8h] [rbp-310h]
  __int64 v99; // [rsp+8h] [rbp-310h]
  int v101[2]; // [rsp+10h] [rbp-308h]
  int v102; // [rsp+10h] [rbp-308h]
  int v103; // [rsp+18h] [rbp-300h]
  int v104; // [rsp+18h] [rbp-300h]
  int v105[2]; // [rsp+18h] [rbp-300h]
  int v106[2]; // [rsp+20h] [rbp-2F8h]
  int v107; // [rsp+20h] [rbp-2F8h]
  int v108; // [rsp+20h] [rbp-2F8h]
  int v109[2]; // [rsp+20h] [rbp-2F8h]
  __int64 *v110; // [rsp+28h] [rbp-2F0h]
  int v111; // [rsp+28h] [rbp-2F0h]
  __int64 v112; // [rsp+30h] [rbp-2E8h]
  __int64 v113; // [rsp+30h] [rbp-2E8h]
  __int64 v114; // [rsp+30h] [rbp-2E8h]
  void *ptr; // [rsp+38h] [rbp-2E0h]
  void *ptra; // [rsp+38h] [rbp-2E0h]
  void *ptrb; // [rsp+38h] [rbp-2E0h]
  void *ptrc; // [rsp+38h] [rbp-2E0h]
  int v119; // [rsp+40h] [rbp-2D8h]
  void *v120; // [rsp+48h] [rbp-2D0h] BYREF
  __int64 v121; // [rsp+50h] [rbp-2C8h]
  int v122[2]; // [rsp+60h] [rbp-2B8h] BYREF
  __int64 v123; // [rsp+68h] [rbp-2B0h]
  int v124[2]; // [rsp+70h] [rbp-2A8h] BYREF
  __int64 v125; // [rsp+78h] [rbp-2A0h]
  void *v126; // [rsp+80h] [rbp-298h]
  char v127[8]; // [rsp+90h] [rbp-288h] BYREF
  __int64 v128; // [rsp+98h] [rbp-280h]
  int v129[2]; // [rsp+B0h] [rbp-268h] BYREF
  __int64 v130; // [rsp+150h] [rbp-1C8h]
  int *v131; // [rsp+158h] [rbp-1C0h] BYREF
  int *v132; // [rsp+1F8h] [rbp-120h] BYREF
  __int64 v133; // [rsp+290h] [rbp-88h]
  __int64 v134; // [rsp+298h] [rbp-80h]
  __int64 v135; // [rsp+2A0h] [rbp-78h]
  __int64 v136; // [rsp+2A8h] [rbp-70h]
  __int64 v137; // [rsp+2B0h] [rbp-68h]
  __int64 v138; // [rsp+2B8h] [rbp-60h]
  __int64 v139; // [rsp+2C0h] [rbp-58h]
  _BYTE v140[80]; // [rsp+2C8h] [rbp-50h] BYREF

  v10 = a2[2];
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 - 4) )
    {
      v11 = 0;
      v12 = (_QWORD *)sub_186B270(0x10u);
      v10 = a2[2];
      v13 = v12 + 1;
      *v12 = 2;
      for ( i = (unsigned int *)(v12 + 1); ; i = &v33[v33[1] + 2] )
      {
        *i = v11;
        ++*((_DWORD *)v13 - 1);
        if ( !v10 )
          break;
        if ( ++v11 >= *(_DWORD *)(v10 - 4) )
          break;
        while ( 1 )
        {
          v15 = *((unsigned int *)v13 - 1);
          if ( (_DWORD)v15 == *((_DWORD *)v13 - 2) )
            break;
          *((_DWORD *)v13 + v15) = v11++;
          ++*((_DWORD *)v13 - 1);
          if ( v11 >= *(_DWORD *)(v10 - 4) )
            goto LABEL_8;
        }
        v30 = (unsigned int)(3 * v15 + 1) >> 1;
        v31 = 4 * v30 + 8;
        v32 = v30;
        if ( 4 * (int)v15 + 8 >= (unsigned int)v31 || (unsigned int)v15 >= v30 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v129, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v129);
          sub_233E40((__int64)v129);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v33 = (unsigned int *)sub_186B300(v13 - 1, v31);
        v13 = v33 + 2;
        *v33 = v32;
        v10 = a2[2];
      }
LABEL_8:
      v16 = *a4;
      if ( !v16 )
      {
        *(_QWORD *)v106 = *(_QWORD *)(a1 + 40);
        goto LABEL_13;
      }
    }
    else
    {
      v16 = *a4;
      if ( !*a4 )
      {
        *(_QWORD *)v106 = *(_QWORD *)(a1 + 40);
LABEL_29:
        v13 = nullptr;
        v16 = nullptr;
        v121 = *(_QWORD *)v106;
        v20 = *(_QWORD *)v106;
        goto LABEL_30;
      }
      v13 = nullptr;
    }
  }
  else
  {
    v16 = *a4;
    v13 = nullptr;
    if ( !*a4 )
    {
      *(_QWORD *)v106 = *(_QWORD *)(a1 + 40);
      v20 = *(_QWORD *)v106;
      v121 = *(_QWORD *)v106;
      goto LABEL_30;
    }
  }
  for ( j = 0; ; j = (unsigned int)(j + 1) )
  {
    v18 = *((_DWORD *)v16 - 1);
    if ( (unsigned int)j >= v18 )
      break;
    *((_DWORD *)v13 + *((unsigned int *)v16 + ((int)j + 1) % v18)) = *((_DWORD *)v16 + j);
  }
  *(_QWORD *)v106 = *(_QWORD *)(a1 + 40);
  if ( !v13 )
    goto LABEL_29;
LABEL_13:
  v19 = 0;
  v16 = nullptr;
  v121 = *(_QWORD *)v106;
  v20 = *(_QWORD *)v106;
  if ( *((_DWORD *)v13 - 1) )
  {
    while ( 1 )
    {
      v24 = sub_15DB5C0(v20, *((unsigned int *)v13 + v19), *(_QWORD *)(v10 + 8 * v19));
      v25 = v24;
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      if ( v16 )
      {
        v26 = *((_DWORD *)v16 - 1);
        if ( v26 == *((_DWORD *)v16 - 2) )
        {
          v27 = (3 * v26 + 1) >> 1;
          v28 = 8 * v27 + 8;
          if ( 8 * v26 + 8 >= (unsigned int)v28 || v26 >= v27 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v129, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v129);
            sub_233E40((__int64)v129);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v97) = (3 * v26 + 1) >> 1;
          v29 = sub_186B300(v16 - 1, v28);
          v16 = (__int64 *)(v29 + 8);
          *(_DWORD *)v29 = v97;
          LODWORD(v29) = *(_DWORD *)(v29 + 4);
          v23 = &v16[(unsigned int)v29];
          v22 = v29 + 1;
        }
        else
        {
          v21 = v26;
          v22 = v26 + 1;
          v23 = &v16[v21];
        }
      }
      else
      {
        v92 = (_QWORD *)sub_186B270(0x18u);
        v23 = v92 + 1;
        *v92 = 2;
        v22 = 1;
        v16 = v23;
      }
      *v23 = v25;
      v20 = *(_QWORD *)(a1 + 40);
      ++v19;
      *((_DWORD *)v16 - 1) = v22;
      if ( (unsigned int)v19 >= *((_DWORD *)v13 - 1) )
        break;
      v10 = a2[2];
    }
  }
LABEL_30:
  sub_633760(v129, v20, 0, v140);
  v140[8] = 0;
  *(_QWORD *)v129 = &off_1C4CA80;
  v35 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v122 = 0;
  v123 = v35;
  v125 = v35;
  v36 = *a2;
  *(_QWORD *)v124 = 0;
  v37 = *(__int64 (__fastcall **)(__int64, __int64 *))(v36 + 144);
  if ( v37 == sub_586990 )
  {
    v38 = a2[6];
    if ( v38 )
    {
      ++*(_DWORD *)(v38 + 8);
      *(_QWORD *)v122 = v38;
    }
  }
  else
  {
    v37((__int64)a2, (__int64 *)v122);
  }
  v39 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a3 + 144LL);
  if ( v39 == sub_586990 )
  {
    v40 = *(_QWORD *)v124;
    v41 = a3[6];
    if ( *(_QWORD *)v124 != v41 )
    {
      if ( *(_QWORD *)v124 )
      {
        v42 = v125;
        v43 = (*(_DWORD *)(*(_QWORD *)v124 + 8LL))-- == 1;
        if ( v43 )
        {
          sub_15D7BC0(v42, v40);
          v41 = a3[6];
        }
      }
      *(_QWORD *)v124 = v41;
      if ( v41 )
        ++*(_DWORD *)(v41 + 8);
    }
    if ( v16 )
      goto LABEL_41;
LABEL_109:
    v44 = 0;
    goto LABEL_42;
  }
  v39((__int64)a3, (__int64 *)v124);
  if ( !v16 )
    goto LABEL_109;
LABEL_41:
  v44 = *((_DWORD *)v16 - 1);
LABEL_42:
  sub_157BE40(
    (int)v127,
    (int)v129,
    v122[0],
    v44,
    (int)v16,
    v34,
    v94,
    v97,
    (int)a3,
    (int)v129,
    v106[0],
    (int)v127,
    v112,
    ptr);
  v46 = *(_QWORD *)v122;
  v47 = *(_QWORD *)v127;
  *(_QWORD *)v127 = *(_QWORD *)v122;
  *(_QWORD *)v122 = v47;
  if ( *(_QWORD *)v127 )
  {
    v48 = v128;
    v43 = (*(_DWORD *)(v46 + 8))-- == 1;
    if ( v43 )
      sub_15D7BC0(v48, v46);
  }
  ptra = *(void **)(a1 + 40);
  v126 = ptra;
  v49 = *(_QWORD *)(*(_QWORD *)v101 + 16LL);
  if ( v49 )
  {
    v50 = nullptr;
    v51 = 0;
    while ( v51 < *(_DWORD *)(v49 - 4) )
    {
      v52 = *(_QWORD *)(a1 + 40);
      v53 = *(_QWORD *)(v49 + 8LL * v51);
      v120 = (void *)(8LL * v51 + 1);
      v54 = sub_15E3510(v52, &v120, 0, 0, v53, 0);
      v57 = sub_15DC610(
              v52,
              v54,
              0,
              0,
              v55,
              v56,
              v95,
              v52,
              v101[0],
              v103,
              v107,
              (char)v110,
              v113,
              (int)ptra,
              v119,
              v120);
      v58 = v57;
      if ( v57 )
        ++*(_DWORD *)(v57 + 8);
      if ( v50 )
      {
        v59 = *((_DWORD *)v50 - 1);
        if ( v59 == *((_DWORD *)v50 - 2) )
        {
          v89 = (3 * v59 + 1) >> 1;
          v90 = 8 * v89 + 8;
          if ( 8 * v59 + 8 >= (unsigned int)v90 || v59 >= v89 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v110, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v110);
            sub_233E40((__int64)v110);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          HIDWORD(v113) = (3 * v59 + 1) >> 1;
          v98 = v58;
          v91 = sub_186B300(v50 - 1, v90);
          v50 = (_QWORD *)(v91 + 8);
          v58 = v98;
          *(_DWORD *)v91 = HIDWORD(v113);
          LODWORD(v91) = *(_DWORD *)(v91 + 4);
          v62 = &v50[(unsigned int)v91];
          v61 = v91 + 1;
        }
        else
        {
          v60 = v59;
          v61 = v59 + 1;
          v62 = &v50[v60];
        }
      }
      else
      {
        v98 = v57;
        v93 = (_QWORD *)sub_186B270(0x18u);
        v50 = v93 + 1;
        *v93 = 2;
        v58 = v98;
        v61 = 1;
        v62 = v50;
      }
      *v62 = v58;
      ++v51;
      *((_DWORD *)v50 - 1) = v61;
      v49 = *(_QWORD *)(*(_QWORD *)v101 + 16LL);
      if ( !v49 )
        goto LABEL_54;
    }
    if ( v50 )
    {
LABEL_54:
      v63 = *((_DWORD *)v50 - 1);
      goto LABEL_55;
    }
  }
  v50 = nullptr;
  v63 = 0;
LABEL_55:
  sub_157BE40((int)v110, v103, v122[0], v63, (int)v50, v45, v95, v98, v101[0], v103, v107, (int)v110, v113, ptra);
  v65 = *(_QWORD *)v122;
  v66 = *(_QWORD *)v127;
  *(_QWORD *)v127 = *(_QWORD *)v122;
  *(_QWORD *)v122 = v66;
  if ( *(_QWORD *)v127 )
  {
    v67 = v128;
    v43 = (*(_DWORD *)(v65 + 8))-- == 1;
    if ( v43 )
    {
      sub_15D7BC0(v67, v65);
      if ( v50 )
        goto LABEL_58;
LABEL_104:
      v68 = 0;
      goto LABEL_59;
    }
  }
  if ( !v50 )
    goto LABEL_104;
LABEL_58:
  v68 = *((_DWORD *)v50 - 1);
LABEL_59:
  sub_157BE40(v111, v104, v124[0], v68, (int)v50, v64, v96, v99, v102, v104, v108, v111, v114, ptrb);
  v69 = *(_QWORD *)v124;
  v70 = *(_QWORD *)v127;
  *(_QWORD *)v127 = *(_QWORD *)v124;
  *(_QWORD *)v124 = v70;
  if ( *(_QWORD *)v127 )
  {
    v71 = v128;
    v43 = (*(_DWORD *)(v69 + 8))-- == 1;
    if ( v43 )
    {
      sub_15D7BC0(v71, v69);
      v70 = *(_QWORD *)v124;
    }
  }
  sub_5875C0(a1, "permutation", *(__int64 *)v122, v70);
  if ( v50 )
  {
    v72 = v50;
    v73 = (unsigned __int64)&v50[*((unsigned int *)v50 - 1)];
    if ( (unsigned __int64)v50 < v73 )
    {
      do
      {
        while ( 1 )
        {
          v74 = *v72;
          if ( *v72 )
          {
            v43 = (*(_DWORD *)(v74 + 8))-- == 1;
            if ( v43 )
              break;
          }
          if ( (unsigned __int64)++v72 >= v73 )
            goto LABEL_69;
        }
        ++v72;
        sub_15D7BC0(ptrc, v74);
      }
      while ( (unsigned __int64)v72 < v73 );
    }
LABEL_69:
    sub_186B220(v50 - 1);
  }
  v75 = *(_QWORD *)v124;
  if ( *(_QWORD *)v124 )
  {
    v76 = v125;
    v43 = (*(_DWORD *)(*(_QWORD *)v124 + 8LL))-- == 1;
    if ( v43 )
      sub_15D7BC0(v76, v75);
  }
  v77 = *(_QWORD *)v122;
  if ( *(_QWORD *)v122 )
  {
    v78 = v123;
    v43 = (*(_DWORD *)(*(_QWORD *)v122 + 8LL))-- == 1;
    if ( v43 )
      sub_15D7BC0(v78, v77);
  }
  *(_QWORD *)v129 = &off_1C4CA60;
  if ( v139 )
    sub_186B220((void *)(v139 - 8));
  v79 = v137;
  if ( v137 )
  {
    v80 = v138;
    v43 = (*(_DWORD *)(v137 + 8))-- == 1;
    if ( v43 )
      sub_15D7BC0(v80, v79);
  }
  v81 = v135;
  if ( v135 )
  {
    v82 = v136;
    v43 = (*(_DWORD *)(v135 + 8))-- == 1;
    if ( v43 )
      sub_15D7BC0(v82, v81);
  }
  v83 = v133;
  if ( v133 )
  {
    v84 = v134;
    v43 = (*(_DWORD *)(v133 + 8))-- == 1;
    if ( v43 )
      sub_15D7BC0(v84, v83);
  }
  v132 = &qword_1C637E8;
  sub_15841B0(&v132);
  v131 = &qword_1C637E8;
  sub_15841B0(&v131);
  if ( v130 )
    sub_186B220((void *)(v130 - 8));
  result = sub_15841B0(*(_QWORD *)v105);
  if ( v16 )
  {
    v86 = v16;
    v87 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
    if ( (unsigned __int64)v16 < v87 )
    {
      do
      {
        while ( 1 )
        {
          v88 = *v86;
          if ( *v86 )
          {
            v43 = (*(_DWORD *)(v88 + 8))-- == 1;
            if ( v43 )
              break;
          }
          if ( (unsigned __int64)++v86 >= v87 )
            goto LABEL_96;
        }
        ++v86;
        sub_15D7BC0(*(_QWORD *)v109, v88);
      }
      while ( (unsigned __int64)v86 < v87 );
    }
LABEL_96:
    result = sub_186B220(v16 - 1);
  }
  if ( v13 )
    return sub_186B220(v13 - 1);
  return result;
}

