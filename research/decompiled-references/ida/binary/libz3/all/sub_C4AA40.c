__int64 __fastcall sub_C4AA40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // r12
  __int64 v11; // r12
  __int64 v12; // r15
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // ecx
  size_t v21; // rsi
  unsigned int *v22; // rax
  _DWORD *v23; // rdi
  __int64 v24; // r15
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rsi
  int v28; // eax
  _QWORD *v29; // r8
  _QWORD *v30; // r12
  unsigned int v31; // eax
  __int64 v32; // rsi
  unsigned int v33; // r9d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r9
  __int64 v38; // rsi
  __int64 v39; // rdi
  bool v40; // zf
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  int v43; // eax
  __int64 *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rsi
  int v52; // ecx
  __int64 *v53; // rbx
  unsigned __int64 v54; // r13
  __int64 v55; // rsi
  __int64 *v56; // rbx
  unsigned __int64 v57; // r12
  __int64 v58; // rsi
  _QWORD *v59; // rax
  int v60; // r12d
  __int64 v61; // rcx
  int v62; // edx
  _QWORD *v63; // rcx
  _QWORD *v64; // rdx
  __int64 v65; // rax
  _DWORD *v66; // rax
  unsigned int v67; // edx
  unsigned int v68; // ebx
  size_t v69; // rsi
  unsigned int *v70; // rdx
  __int64 v71; // rcx
  unsigned int v72; // ebx
  size_t v73; // rsi
  unsigned int *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rdi
  unsigned int v78; // r8d
  unsigned __int64 v79; // rcx
  _QWORD *v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rdi
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  unsigned int v85; // ecx
  size_t v86; // rsi
  unsigned int *v87; // rax
  char **v88; // r12
  char **v89; // r13
  char **exception; // r14
  char **v91; // r13
  __int64 v92; // [rsp+8h] [rbp-B8h]
  __int64 v93; // [rsp+10h] [rbp-B0h]
  unsigned int v94; // [rsp+1Ch] [rbp-A4h]
  __int64 v95; // [rsp+20h] [rbp-A0h]
  unsigned int v96; // [rsp+28h] [rbp-98h]
  int v97; // [rsp+2Ch] [rbp-94h]
  _QWORD *v98; // [rsp+30h] [rbp-90h]
  unsigned int v99; // [rsp+30h] [rbp-90h]
  __int64 v100; // [rsp+38h] [rbp-88h]
  _QWORD *v101; // [rsp+38h] [rbp-88h]
  _QWORD *v102; // [rsp+38h] [rbp-88h]
  __int64 v103; // [rsp+38h] [rbp-88h]
  unsigned int v104; // [rsp+40h] [rbp-80h]
  unsigned int v105; // [rsp+40h] [rbp-80h]
  __int64 v106; // [rsp+40h] [rbp-80h]
  __int64 v107; // [rsp+40h] [rbp-80h]
  unsigned __int64 v108; // [rsp+40h] [rbp-80h]
  unsigned int v109; // [rsp+40h] [rbp-80h]
  __int64 v110; // [rsp+40h] [rbp-80h]
  __int64 v111; // [rsp+48h] [rbp-78h]
  _QWORD *v112; // [rsp+48h] [rbp-78h]
  int v113; // [rsp+48h] [rbp-78h]
  __int64 v114[10]; // [rsp+70h] [rbp-50h] BYREF

  v5 = a3;
  v97 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v59 = *(_QWORD **)(a1 + 160);
    if ( v59 )
      v60 = *((_DWORD *)v59 - 1);
    else
      v60 = 0;
    if ( v97 )
    {
      v107 = v5;
      v113 = 0;
      while ( 1 )
      {
        if ( v59 )
        {
          v67 = *((_DWORD *)v59 - 1);
          if ( v67 == *((_DWORD *)v59 - 2) )
          {
            v68 = (3 * v67 + 1) >> 1;
            v69 = 8 * v68 + 8;
            if ( 8 * v67 + 8 >= (unsigned int)v69 || v67 >= v68 )
            {
LABEL_125:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_C418A0(v114, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v114);
              sub_233E40((__int64)v114);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v70 = (unsigned int *)sub_186B300(v59 - 1, v69);
            v59 = v70 + 2;
            v71 = v70[1];
            *v70 = v68;
            *(_QWORD *)(a1 + 160) = v70 + 2;
            LODWORD(v70) = v71;
            v63 = &v59[v71];
            v62 = (_DWORD)v70 + 1;
          }
          else
          {
            v61 = v67;
            v62 = v67 + 1;
            v63 = &v59[v61];
          }
        }
        else
        {
          v84 = (_QWORD *)sub_186B270(0x18u);
          v62 = 1;
          *v84 = 2;
          v59 = v84 + 1;
          *(_QWORD *)(a1 + 160) = v59;
          v63 = v59;
        }
        *v63 = 0;
        *((_DWORD *)v59 - 1) = v62;
        v64 = *(_QWORD **)(a1 + 528);
        if ( v64 )
        {
          v65 = *((unsigned int *)v64 - 1);
          if ( (_DWORD)v65 == *((_DWORD *)v64 - 2) )
          {
            v72 = (unsigned int)(3 * v65 + 1) >> 1;
            v73 = 4 * v72 + 8;
            if ( 4 * (int)v65 + 8 >= (unsigned int)v73 || (unsigned int)v65 >= v72 )
              goto LABEL_125;
            v74 = (unsigned int *)sub_186B300(v64 - 1, v73);
            v64 = v74 + 2;
            *v74 = v72;
            v75 = v74[1];
            *(_QWORD *)(a1 + 528) = v64;
            v66 = (_DWORD *)v64 + v75;
          }
          else
          {
            v66 = (_DWORD *)v64 + v65;
          }
        }
        else
        {
          v83 = (_QWORD *)sub_186B270(0x10u);
          v64 = v83 + 1;
          *v83 = 2;
          *(_QWORD *)(a1 + 528) = v83 + 1;
          v66 = v83 + 1;
        }
        *v66 = v60;
        ++v113;
        ++*((_DWORD *)v64 - 1);
        if ( v113 == v97 )
          break;
        v59 = *(_QWORD **)(a1 + 160);
      }
      v5 = v107;
    }
    *(_DWORD *)(a1 + 128) += v97;
  }
  while ( 1 )
  {
    v9 = *(_DWORD *)(v5 + 8);
    if ( v9 >> 6 )
      break;
    v6 = *(_QWORD *)(a2 + 24);
    v7 = v9 & 0x3F | 0x40;
    *(_DWORD *)(v5 + 8) = v7;
    result = sub_C49B80((_QWORD *)a1, v6, ((unsigned __int16)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v94 = *(_DWORD *)(a2 + 72);
  v92 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(v5 + 12));
  v96 = *(_DWORD *)(a2 + 76);
  v111 = *(unsigned int *)(a2 + 20);
  v10 = 16 * v111;
  v93 = *(_QWORD *)(a1 + 8);
  if ( v94 )
  {
    v11 = a2 + v10;
    v12 = *(_QWORD *)(v11 + 80);
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v13 = (_QWORD *)sub_186B270(0x18u);
    *v13 = 2;
    v14 = v94 + 2 * v111;
    v15 = v13 + 1;
    v16 = 1;
    v112 = v15;
    v17 = a2 + 8 * v14;
    while ( 1 )
    {
      *v15 = v12;
      v11 += 8;
      *((_DWORD *)v112 - 1) = v16;
      if ( v11 == v17 )
        break;
      v12 = *(_QWORD *)(v11 + 80);
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v18 = *((_DWORD *)v112 - 1);
      if ( v18 == *((_DWORD *)v112 - 2) )
      {
        v20 = (3 * v18 + 1) >> 1;
        v21 = 8 * v20 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v21 || v18 >= v20 )
        {
          v88 = (char **)__cxa_allocate_exception(0x28u);
          sub_C418A0(v114, "Overflow encountered when expanding vector");
          *v88 = (char *)off_1C63128;
          sub_2333C0(v88 + 1, v114);
          sub_233E40((__int64)v114);
          __cxa_throw(v88, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v100 = v17;
        v104 = (3 * v18 + 1) >> 1;
        v22 = (unsigned int *)sub_186B300(v112 - 1, v21);
        v23 = v22 + 2;
        v17 = v100;
        v112 = v22 + 2;
        *v22 = v104;
        LODWORD(v22) = v22[1];
        v15 = &v23[2 * (unsigned int)v22];
        v16 = (_DWORD)v22 + 1;
      }
      else
      {
        v19 = v18;
        v16 = v18 + 1;
        v15 = &v112[v19];
      }
    }
    v95 = *(_QWORD *)(a1 + 8);
    v10 = 16LL * *(unsigned int *)(a2 + 20);
  }
  else
  {
    v95 = *(_QWORD *)(a1 + 8);
    v112 = nullptr;
  }
  if ( v96 )
  {
    v24 = *(_QWORD *)(a2 + v10 + 80);
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v25 = (_QWORD *)sub_186B270(0x18u);
    v26 = (_QWORD *)(a2 + v10 + 80);
    *v25 = 2;
    v27 = v25 + 1;
    v28 = 1;
    v29 = (_QWORD *)(v10 + a2 + 8LL * v96 + 80);
    v30 = v27;
    while ( 1 )
    {
      ++v26;
      *v27 = v24;
      *((_DWORD *)v30 - 1) = v28;
      if ( v26 == v29 )
        break;
      v24 = *v26;
      if ( *v26 )
        ++*(_DWORD *)(v24 + 8);
      v31 = *((_DWORD *)v30 - 1);
      if ( v31 == *((_DWORD *)v30 - 2) )
      {
        v33 = (3 * v31 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v34 || v31 >= v33 )
        {
          v91 = (char **)__cxa_allocate_exception(0x28u);
          sub_C418A0(v114, "Overflow encountered when expanding vector");
          *v91 = (char *)off_1C63128;
          sub_2333C0(v91 + 1, v114);
          sub_233E40((__int64)v114);
          __cxa_throw(v91, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v98 = v29;
        v101 = v26;
        v105 = (3 * v31 + 1) >> 1;
        v35 = (unsigned int *)sub_186B300(v30 - 1, v34);
        v36 = v35[1];
        v30 = v35 + 2;
        v26 = v101;
        v29 = v98;
        *v35 = v105;
        LODWORD(v35) = v36;
        v27 = &v30[v36];
        v28 = (_DWORD)v35 + 1;
      }
      else
      {
        v32 = v31;
        v28 = v31 + 1;
        v27 = &v30[v32];
      }
    }
  }
  else
  {
    v30 = nullptr;
  }
  if ( (*(_BYTE *)(v5 + 8) & 2) == 0 )
  {
    v76 = *(_QWORD *)(a1 + 480);
    ++*(_DWORD *)(a2 + 8);
    if ( v76 )
    {
      v77 = *(_QWORD *)(a1 + 488);
      v40 = (*(_DWORD *)(v76 + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(v77, v76);
      v41 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 480) = a2;
      if ( v41 )
      {
        v37 = a2;
        goto LABEL_97;
      }
    }
    else
    {
      v41 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 480) = a2;
      v37 = a2;
      if ( v41 )
        goto LABEL_97;
    }
    v37 = a2;
    goto LABEL_40;
  }
  v37 = sub_15DBA30(*(_QWORD *)(a1 + 8), a2, v94, (_DWORD)v112, v96, (_DWORD)v30, v92);
  if ( v37 )
  {
    v38 = *(_QWORD *)(a1 + 480);
    ++*(_DWORD *)(v37 + 8);
    if ( v38 )
      goto LABEL_36;
    v41 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 480) = v37;
    if ( !v41 )
      goto LABEL_40;
  }
  else
  {
    v38 = *(_QWORD *)(a1 + 480);
    if ( v38 )
    {
LABEL_36:
      v39 = *(_QWORD *)(a1 + 488);
      v40 = (*(_DWORD *)(v38 + 8))-- == 1;
      if ( v40 )
      {
        v110 = v37;
        sub_15D7BC0(v39, v38);
        v37 = v110;
      }
      v41 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 480) = v37;
      if ( !v41 )
        goto LABEL_39;
      goto LABEL_97;
    }
    *(_QWORD *)(a1 + 480) = 0;
    v41 = *(_QWORD **)(a1 + 56);
    if ( !v41 )
      goto LABEL_112;
  }
LABEL_97:
  v78 = *(_DWORD *)(v5 + 12);
  v79 = (unsigned __int64)&v41[*((unsigned int *)v41 - 1)];
  v80 = &v41[v78];
  if ( (unsigned __int64)v80 >= v79 )
    goto LABEL_104;
  do
  {
    while ( 1 )
    {
      v81 = *v80;
      if ( *v80 )
      {
        v82 = *(_QWORD *)(a1 + 48);
        v40 = (*(_DWORD *)(v81 + 8))-- == 1;
        if ( v40 )
          break;
      }
      if ( (unsigned __int64)++v80 >= v79 )
        goto LABEL_103;
    }
    v99 = v78;
    v102 = v80;
    v108 = v79;
    sub_15D7BC0(v82, v81);
    v79 = v108;
    v78 = v99;
    v80 = v102 + 1;
  }
  while ( (unsigned __int64)(v102 + 1) < v108 );
LABEL_103:
  v41 = *(_QWORD **)(a1 + 56);
  v37 = *(_QWORD *)(a1 + 480);
  if ( v41 )
  {
LABEL_104:
    *((_DWORD *)v41 - 1) = v78;
    if ( v37 )
    {
      ++*(_DWORD *)(v37 + 8);
      v78 = *((_DWORD *)v41 - 1);
    }
    if ( *((_DWORD *)v41 - 2) == v78 )
    {
      v85 = (3 * v78 + 1) >> 1;
      v86 = 8 * v85 + 8;
      if ( 8 * v78 + 8 >= (unsigned int)v86 || v78 >= v85 )
      {
        v89 = (char **)__cxa_allocate_exception(0x28u);
        sub_C418A0(v114, "Overflow encountered when expanding vector");
        *v89 = (char *)off_1C63128;
        sub_2333C0(v89 + 1, v114);
        sub_233E40((__int64)v114);
        __cxa_throw(v89, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v103 = v37;
      v109 = (3 * v78 + 1) >> 1;
      v87 = (unsigned int *)sub_186B300(v41 - 1, v86);
      v41 = v87 + 2;
      v37 = v103;
      *(_QWORD *)(a1 + 56) = v87 + 2;
      *v87 = v109;
      LODWORD(v87) = v87[1];
      v44 = &v41[(unsigned int)v87];
      v43 = (_DWORD)v87 + 1;
    }
    else
    {
      v44 = &v41[*((unsigned int *)v41 - 1)];
      v43 = *((_DWORD *)v41 - 1) + 1;
    }
    goto LABEL_42;
  }
LABEL_39:
  if ( !v37 )
  {
LABEL_112:
    v37 = 0;
    goto LABEL_41;
  }
LABEL_40:
  ++*(_DWORD *)(v37 + 8);
LABEL_41:
  v106 = v37;
  v42 = (_QWORD *)sub_186B270(0x18u);
  v41 = v42 + 1;
  v37 = v106;
  *v42 = 2;
  v43 = 1;
  *(_QWORD *)(a1 + 56) = v41;
  v44 = v41;
LABEL_42:
  *v44 = v37;
  *((_DWORD *)v41 - 1) = v43;
  v45 = *(_QWORD *)(a1 + 160);
  if ( v45 )
    *(_DWORD *)(v45 - 4) -= v97;
  v46 = *(_QWORD *)(a1 + 528);
  if ( v46 )
    *(_DWORD *)(v46 - 4) -= v97;
  sub_15844D0(a1);
  v47 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, v47);
    v47 = *(_QWORD *)(a1 + 480);
  }
  if ( v47 )
  {
    v48 = *(_QWORD *)(a1 + 488);
    v40 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v40 )
      sub_15D7BC0(v48, v47);
  }
  v49 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v49 && (v50 = *(_QWORD *)(a1 + 504), v40 = *(_DWORD *)(v49 + 8) == 1, --*(_DWORD *)(v49 + 8), v40) )
  {
    sub_15D7BC0(v50, v49);
    v51 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v51 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v52 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v52 - 1;
  if ( a2 != v51 && v52 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v52 - 2) + 8) |= 2u;
  if ( v30 )
  {
    v53 = v30;
    v54 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
    if ( (unsigned __int64)v30 < v54 )
    {
      do
      {
        while ( 1 )
        {
          v55 = *v53;
          if ( *v53 )
          {
            v40 = (*(_DWORD *)(v55 + 8))-- == 1;
            if ( v40 )
              break;
          }
          if ( (unsigned __int64)++v53 >= v54 )
            goto LABEL_64;
        }
        ++v53;
        sub_15D7BC0(v95, v55);
      }
      while ( (unsigned __int64)v53 < v54 );
    }
LABEL_64:
    result = sub_186B220(v30 - 1);
  }
  v56 = v112;
  if ( v112 )
  {
    v57 = (unsigned __int64)&v112[*((unsigned int *)v112 - 1)];
    if ( (unsigned __int64)v112 < v57 )
    {
      do
      {
        v58 = *v56;
        if ( *v56 )
        {
          v40 = (*(_DWORD *)(v58 + 8))-- == 1;
          if ( v40 )
            sub_15D7BC0(v93, v58);
        }
        ++v56;
      }
      while ( (unsigned __int64)v56 < v57 );
    }
    return sub_186B220(v112 - 1);
  }
  return result;
}

