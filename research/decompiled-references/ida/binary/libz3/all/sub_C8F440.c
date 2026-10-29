__int64 __fastcall sub_C8F440(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r15
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // r12
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rsi
  unsigned int v21; // r8d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // rdi
  _QWORD *v28; // rcx
  _QWORD *v29; // rsi
  int v30; // eax
  _QWORD *v31; // r8
  unsigned int v32; // eax
  __int64 v33; // rsi
  unsigned int v34; // r9d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rsi
  _DWORD *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdi
  bool v42; // zf
  __int64 v43; // rsi
  unsigned __int64 v44; // r15
  _QWORD *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rsi
  int v55; // ecx
  __int64 *v56; // rbx
  unsigned __int64 v57; // r13
  __int64 v58; // rsi
  __int64 *v59; // rbx
  unsigned __int64 v60; // r14
  __int64 v61; // rsi
  _QWORD *v62; // rax
  int v63; // r12d
  __int64 v64; // rcx
  int v65; // edx
  _QWORD *v66; // rcx
  _QWORD *v67; // rdx
  __int64 v68; // rax
  _DWORD *v69; // rax
  unsigned int v70; // edx
  unsigned int v71; // ebx
  size_t v72; // rsi
  unsigned int *v73; // rdx
  __int64 v74; // rcx
  unsigned int v75; // ecx
  size_t v76; // rsi
  unsigned int v77; // ebx
  unsigned int *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rdi
  _QWORD *v82; // rax
  _QWORD *v83; // rax
  char **v84; // r13
  char **v85; // r15
  char **exception; // r15
  __int64 v87; // [rsp+8h] [rbp-B8h]
  __int64 v88; // [rsp+10h] [rbp-B0h]
  unsigned int v89; // [rsp+1Ch] [rbp-A4h]
  __int64 v90; // [rsp+20h] [rbp-A0h]
  unsigned int v91; // [rsp+28h] [rbp-98h]
  int v92; // [rsp+2Ch] [rbp-94h]
  _QWORD *v93; // [rsp+30h] [rbp-90h]
  __int64 v94; // [rsp+38h] [rbp-88h]
  unsigned int v95; // [rsp+38h] [rbp-88h]
  unsigned int v96; // [rsp+38h] [rbp-88h]
  unsigned int v97; // [rsp+40h] [rbp-80h]
  _QWORD *v98; // [rsp+40h] [rbp-80h]
  __int64 v99; // [rsp+40h] [rbp-80h]
  _QWORD *v100; // [rsp+40h] [rbp-80h]
  __int64 v101; // [rsp+40h] [rbp-80h]
  __int64 v102; // [rsp+48h] [rbp-78h]
  __int64 v103; // [rsp+48h] [rbp-78h]
  _QWORD *v104; // [rsp+48h] [rbp-78h]
  int v105; // [rsp+48h] [rbp-78h]
  __int64 v106[10]; // [rsp+70h] [rbp-50h] BYREF

  v5 = a3;
  v92 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v62 = *(_QWORD **)(a1 + 160);
    if ( v62 )
      v63 = *((_DWORD *)v62 - 1);
    else
      v63 = 0;
    if ( v92 )
    {
      v101 = v5;
      v105 = 0;
      while ( 1 )
      {
        if ( v62 )
        {
          v70 = *((_DWORD *)v62 - 1);
          if ( v70 == *((_DWORD *)v62 - 2) )
          {
            v71 = (3 * v70 + 1) >> 1;
            v72 = 8 * v71 + 8;
            if ( 8 * v70 + 8 >= (unsigned int)v72 || v70 >= v71 )
            {
LABEL_114:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_C8AA10(v106, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v106);
              sub_233E40((__int64)v106);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v73 = (unsigned int *)sub_186B300(v62 - 1, v72);
            v62 = v73 + 2;
            v74 = v73[1];
            *v73 = v71;
            *(_QWORD *)(a1 + 160) = v73 + 2;
            LODWORD(v73) = v74;
            v66 = &v62[v74];
            v65 = (_DWORD)v73 + 1;
          }
          else
          {
            v64 = v70;
            v65 = v70 + 1;
            v66 = &v62[v64];
          }
        }
        else
        {
          v83 = (_QWORD *)sub_186B270(0x18u);
          v65 = 1;
          *v83 = 2;
          v62 = v83 + 1;
          *(_QWORD *)(a1 + 160) = v62;
          v66 = v62;
        }
        *v66 = 0;
        *((_DWORD *)v62 - 1) = v65;
        v67 = *(_QWORD **)(a1 + 528);
        if ( v67 )
        {
          v68 = *((unsigned int *)v67 - 1);
          if ( (_DWORD)v68 == *((_DWORD *)v67 - 2) )
          {
            v75 = (unsigned int)(3 * v68 + 1) >> 1;
            v76 = 4 * v75 + 8;
            v77 = v75;
            if ( 4 * (int)v68 + 8 >= (unsigned int)v76 || (unsigned int)v68 >= v75 )
              goto LABEL_114;
            v78 = (unsigned int *)sub_186B300(v67 - 1, v76);
            v67 = v78 + 2;
            *v78 = v77;
            v79 = v78[1];
            *(_QWORD *)(a1 + 528) = v67;
            v69 = (_DWORD *)v67 + v79;
          }
          else
          {
            v69 = (_DWORD *)v67 + v68;
          }
        }
        else
        {
          v82 = (_QWORD *)sub_186B270(0x10u);
          v67 = v82 + 1;
          *v82 = 2;
          *(_QWORD *)(a1 + 528) = v82 + 1;
          v69 = v82 + 1;
        }
        *v69 = v63;
        ++v105;
        ++*((_DWORD *)v67 - 1);
        if ( v105 == v92 )
          break;
        v62 = *(_QWORD **)(a1 + 160);
      }
      v5 = v101;
    }
    *(_DWORD *)(a1 + 128) += v92;
  }
  while ( 1 )
  {
    v9 = *(_DWORD *)(v5 + 8);
    if ( v9 >> 6 )
      break;
    v6 = *(_QWORD *)(a2 + 24);
    v7 = v9 & 0x3F | 0x40;
    *(_DWORD *)(v5 + 8) = v7;
    result = sub_C8EFD0((_QWORD *)a1, v6, ((unsigned __int16)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v10 = *(unsigned int *)(a2 + 20);
  v11 = *(_QWORD *)(a1 + 8);
  v88 = *(_QWORD *)(a1 + 8);
  v87 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(v5 + 12));
  v89 = *(_DWORD *)(a2 + 72);
  v91 = *(_DWORD *)(a2 + 76);
  v102 = 16 * v10;
  if ( v89 )
  {
    v12 = *(_QWORD *)(a2 + 16 * v10 + 80);
    v103 = a2 + 16 * v10;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v13 = (_QWORD *)sub_186B270(0x18u);
    v14 = v13 + 1;
    *v13 = 2;
    v15 = 1;
    v16 = v89 + 2 * v10;
    v17 = v14;
    v18 = a2 + 8 * v16;
    while ( 1 )
    {
      v103 += 8;
      *v14 = v12;
      *((_DWORD *)v17 - 1) = v15;
      if ( v18 == v103 )
        break;
      v12 = *(_QWORD *)(v103 + 80);
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v19 = *((_DWORD *)v17 - 1);
      if ( v19 == *((_DWORD *)v17 - 2) )
      {
        v21 = (3 * v19 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v22 || v19 >= v21 )
        {
          v85 = (char **)__cxa_allocate_exception(0x28u);
          sub_C8AA10(v106, "Overflow encountered when expanding vector");
          *v85 = (char *)off_1C63128;
          sub_2333C0(v85 + 1, v106);
          sub_233E40((__int64)v106);
          __cxa_throw(v85, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v94 = v18;
        v97 = (3 * v19 + 1) >> 1;
        v23 = (unsigned int *)sub_186B300(v17 - 1, v22);
        v24 = v23[1];
        v17 = v23 + 2;
        v18 = v94;
        *v23 = v97;
        LODWORD(v23) = v24;
        v14 = &v17[v24];
        v15 = (_DWORD)v23 + 1;
      }
      else
      {
        v20 = v19;
        v15 = v19 + 1;
        v14 = &v17[v20];
      }
    }
    v90 = *(_QWORD *)(a1 + 8);
    v102 = 16LL * *(unsigned int *)(a2 + 20);
  }
  else
  {
    v90 = v11;
    v17 = nullptr;
  }
  if ( v91 )
  {
    v25 = *(_QWORD *)(a2 + v102 + 80);
    if ( v25 )
      ++*(_DWORD *)(v25 + 8);
    v26 = (_QWORD *)sub_186B270(0x18u);
    v27 = v102;
    *v26 = 2;
    v28 = (_QWORD *)(a2 + v102 + 80);
    v29 = v26 + 1;
    v30 = 1;
    v104 = v29;
    v31 = (_QWORD *)(v27 + a2 + 8LL * v91 + 80);
    while ( 1 )
    {
      ++v28;
      *v29 = v25;
      *((_DWORD *)v104 - 1) = v30;
      if ( v28 == v31 )
        break;
      v25 = *v28;
      if ( *v28 )
        ++*(_DWORD *)(v25 + 8);
      v32 = *((_DWORD *)v104 - 1);
      if ( v32 == *((_DWORD *)v104 - 2) )
      {
        v34 = (3 * v32 + 1) >> 1;
        v35 = 8 * v34 + 8;
        if ( 8 * v32 + 8 >= (unsigned int)v35 || v32 >= v34 )
        {
          v84 = (char **)__cxa_allocate_exception(0x28u);
          sub_C8AA10(v106, "Overflow encountered when expanding vector");
          *v84 = (char *)off_1C63128;
          sub_2333C0(v84 + 1, v106);
          sub_233E40((__int64)v106);
          __cxa_throw(v84, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v93 = v31;
        v95 = (3 * v32 + 1) >> 1;
        v98 = v28;
        v36 = (unsigned int *)sub_186B300(v104 - 1, v35);
        v37 = v36[1];
        v38 = v36 + 2;
        v104 = v36 + 2;
        v31 = v93;
        *v36 = v95;
        LODWORD(v36) = v37;
        v29 = &v38[2 * v37];
        v28 = v98;
        v30 = (_DWORD)v36 + 1;
      }
      else
      {
        v33 = v32;
        v30 = v32 + 1;
        v29 = &v104[v33];
      }
    }
  }
  else
  {
    v104 = nullptr;
  }
  if ( (*(_BYTE *)(v5 + 8) & 2) != 0 )
  {
    v39 = sub_15DBA30(*(_QWORD *)(a1 + 8), a2, v89, (_DWORD)v17, v91, (_DWORD)v104, v87);
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    v40 = *(_QWORD *)(a1 + 480);
    if ( v40 )
    {
      v41 = *(_QWORD *)(a1 + 488);
      v42 = (*(_DWORD *)(v40 + 8))-- == 1;
      if ( v42 )
      {
        v99 = v39;
        sub_15D7BC0(v41, v40);
        v39 = v99;
      }
    }
    v43 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 480) = v39;
    if ( !v43 )
      goto LABEL_48;
    goto LABEL_40;
  }
  v80 = *(_QWORD *)(a1 + 480);
  ++*(_DWORD *)(a2 + 8);
  if ( !v80 )
  {
    v43 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 480) = a2;
    v39 = a2;
    if ( v43 )
      goto LABEL_40;
LABEL_109:
    v106[0] = a2;
    v39 = a2;
    goto LABEL_49;
  }
  v81 = *(_QWORD *)(a1 + 488);
  v42 = (*(_DWORD *)(v80 + 8))-- == 1;
  if ( v42 )
    sub_15D7BC0(v81, v80);
  v43 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 480) = a2;
  if ( !v43 )
    goto LABEL_109;
  v39 = a2;
LABEL_40:
  v44 = v43 + 8LL * *(unsigned int *)(v43 - 4);
  v96 = *(_DWORD *)(v5 + 12);
  v45 = (_QWORD *)(v43 + 8LL * v96);
  if ( (unsigned __int64)v45 >= v44 )
    goto LABEL_47;
  do
  {
    while ( 1 )
    {
      v46 = *v45;
      if ( *v45 )
      {
        v47 = *(_QWORD *)(a1 + 48);
        v42 = (*(_DWORD *)(v46 + 8))-- == 1;
        if ( v42 )
          break;
      }
      if ( (unsigned __int64)++v45 >= v44 )
        goto LABEL_46;
    }
    v100 = v45;
    sub_15D7BC0(v47, v46);
    v45 = v100 + 1;
  }
  while ( (unsigned __int64)(v100 + 1) < v44 );
LABEL_46:
  v43 = *(_QWORD *)(a1 + 56);
  v39 = *(_QWORD *)(a1 + 480);
  if ( v43 )
LABEL_47:
    *(_DWORD *)(v43 - 4) = v96;
LABEL_48:
  v106[0] = v39;
  if ( v39 )
LABEL_49:
    ++*(_DWORD *)(v39 + 8);
  sub_C8B2F0((_QWORD *)(a1 + 56), v106);
  v48 = *(_QWORD *)(a1 + 160);
  if ( v48 )
    *(_DWORD *)(v48 - 4) -= v92;
  v49 = *(_QWORD *)(a1 + 528);
  if ( v49 )
    *(_DWORD *)(v49 - 4) -= v92;
  sub_15844D0(a1);
  v50 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, v50);
    v50 = *(_QWORD *)(a1 + 480);
  }
  if ( v50 )
  {
    v51 = *(_QWORD *)(a1 + 488);
    v42 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( v42 )
      sub_15D7BC0(v51, v50);
  }
  v52 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v52 && (v53 = *(_QWORD *)(a1 + 504), v42 = *(_DWORD *)(v52 + 8) == 1, --*(_DWORD *)(v52 + 8), v42) )
  {
    sub_15D7BC0(v53, v52);
    v54 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v54 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v55 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v55 - 1;
  if ( a2 != v54 && v55 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v55 - 2) + 8) |= 2u;
  v56 = v104;
  if ( v104 )
  {
    v57 = (unsigned __int64)&v104[*((unsigned int *)v104 - 1)];
    if ( (unsigned __int64)v104 < v57 )
    {
      do
      {
        while ( 1 )
        {
          v58 = *v56;
          if ( *v56 )
          {
            v42 = (*(_DWORD *)(v58 + 8))-- == 1;
            if ( v42 )
              break;
          }
          if ( (unsigned __int64)++v56 >= v57 )
            goto LABEL_72;
        }
        ++v56;
        sub_15D7BC0(v90, v58);
      }
      while ( (unsigned __int64)v56 < v57 );
    }
LABEL_72:
    result = sub_186B220(v104 - 1);
  }
  if ( v17 )
  {
    v59 = v17;
    if ( v17 < &v17[*((unsigned int *)v17 - 1)] )
    {
      v60 = (unsigned __int64)&v17[*((unsigned int *)v17 - 1)];
      do
      {
        v61 = *v59;
        if ( *v59 )
        {
          v42 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v42 )
            sub_15D7BC0(v88, v61);
        }
        ++v59;
      }
      while ( (unsigned __int64)v59 < v60 );
    }
    return sub_186B220(v17 - 1);
  }
  return result;
}

