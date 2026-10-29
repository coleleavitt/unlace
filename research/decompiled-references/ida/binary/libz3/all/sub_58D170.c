__int64 __fastcall sub_58D170(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 *a5, _QWORD *a6)
{
  char **exception; // r15
  char **v7; // r15
  char **v8; // r15
  __int64 (__fastcall *v11)(__int64, __int64 *); // rax
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, __int64 *); // rax
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rdi
  bool v17; // zf
  int v18; // eax
  _QWORD *v19; // rax
  _QWORD *v20; // r12
  unsigned int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 *v37; // rbx
  __int64 v38; // rdx
  __int64 *v39; // r15
  unsigned int *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rax
  unsigned int v45; // ecx
  size_t v46; // rsi
  unsigned int *v47; // rax
  unsigned int v48; // ecx
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 *v51; // r10
  unsigned int v52; // edi
  __int64 v53; // rdx
  unsigned int v54; // edx
  __int64 *v55; // rax
  int v56; // ecx
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 *v59; // rsi
  __int64 *v60; // rax
  __int64 v61; // rsi
  unsigned int v62; // r15d
  unsigned int v63; // edx
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned int v66; // r8d
  size_t v67; // rsi
  unsigned int *v68; // rax
  _DWORD *v69; // rcx
  __int64 v70; // rax
  int v71; // edx
  __int64 v72; // rdi
  __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // rdi
  __int64 v78; // r14
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rdx
  __int64 v88; // rdi
  __int64 *v89; // rbx
  unsigned __int64 v90; // r14
  __int64 v91; // rsi
  __int64 result; // rax
  __int64 v93; // rsi
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // [rsp+8h] [rbp-D8h]
  unsigned int v98; // [rsp+1Ch] [rbp-C4h]
  int v100; // [rsp+28h] [rbp-B8h]
  __int64 v101; // [rsp+28h] [rbp-B8h]
  __int64 v104; // [rsp+40h] [rbp-A0h]
  unsigned int v105; // [rsp+40h] [rbp-A0h]
  unsigned int v106; // [rsp+40h] [rbp-A0h]
  __int64 v107; // [rsp+40h] [rbp-A0h]
  __int64 v108; // [rsp+40h] [rbp-A0h]
  _DWORD *ptr; // [rsp+48h] [rbp-98h]
  __int64 *ptra; // [rsp+48h] [rbp-98h]
  __int64 *ptrb; // [rsp+48h] [rbp-98h]
  _DWORD *ptrc; // [rsp+48h] [rbp-98h]
  __int64 v113; // [rsp+60h] [rbp-80h] BYREF
  __int64 v114; // [rsp+68h] [rbp-78h]
  _DWORD *v115; // [rsp+70h] [rbp-70h] BYREF
  __int64 v116; // [rsp+78h] [rbp-68h]
  __int64 v117; // [rsp+80h] [rbp-60h]
  __int64 v118; // [rsp+90h] [rbp-50h] BYREF
  __int64 v119; // [rsp+98h] [rbp-48h]

  v97 = *(_QWORD *)(a1 + 40);
  v114 = v97;
  v116 = v97;
  v117 = v97;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a3 + 144LL);
  v113 = 0;
  v115 = nullptr;
  if ( v11 == sub_586990 )
  {
    v12 = a3[6];
    if ( v12 )
    {
      ++*(_DWORD *)(v12 + 8);
      v113 = v12;
    }
  }
  else
  {
    v11((__int64)a3, &v113);
  }
  v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a4 + 144LL);
  if ( v13 == sub_586990 )
  {
    v14 = (__int64)v115;
    v15 = a4[6];
    if ( v115 != (_DWORD *)v15 )
    {
      if ( v115 )
      {
        v16 = v116;
        v17 = v115[2]-- == 1;
        if ( v17 )
        {
          sub_15D7BC0(v16, v14);
          v15 = a4[6];
        }
      }
      v115 = (_DWORD *)v15;
      if ( v15 )
      {
        v18 = *(_DWORD *)(v15 + 8) + 1;
        *(_DWORD *)(v15 + 8) = v18;
LABEL_11:
        *(_DWORD *)(v15 + 8) = v18 + 1;
        goto LABEL_12;
      }
      goto LABEL_105;
    }
  }
  else
  {
    v13((__int64)a4, (__int64 *)&v115);
    v15 = (__int64)v115;
  }
  if ( v15 )
  {
    v18 = *(_DWORD *)(v15 + 8);
    goto LABEL_11;
  }
LABEL_105:
  v15 = 0;
LABEL_12:
  v19 = (_QWORD *)sub_186B270(0x18u);
  v19[1] = v15;
  v20 = v19 + 1;
  v21 = 0;
  *v19 = 0x100000002LL;
  v22 = *a5;
  if ( *a5 )
  {
    while ( 1 )
    {
      v104 = *(_QWORD *)(a1 + 40);
      if ( v21 >= *(_DWORD *)(v22 - 4) )
        break;
      v23 = *(unsigned int *)(v22 + 4LL * v21);
      v24 = *(_DWORD *)(*a6 + 4LL * v21);
      v25 = *(_QWORD *)(a3[2] + 8LL * (unsigned int)v23);
      v26 = a4[2];
      if ( v26 )
        v23 = (unsigned int)(*(_DWORD *)(v26 - 4) + v23);
      v27 = sub_15DB5C0(v104, v23, v25);
      ptr = (_DWORD *)v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      v28 = sub_15DB5C0(*(_QWORD *)(a1 + 40), v24, *(_QWORD *)(a4[2] + 8LL * v24));
      v29 = v28;
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      v30 = sub_15E1B70(*(_QWORD *)(a1 + 40));
      v31 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      v32 = *((_DWORD *)v20 - 1);
      if ( v32 == *((_DWORD *)v20 - 2) )
      {
        v48 = (3 * v32 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v32 + 8 >= (unsigned int)v49 || v32 >= v48 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v118, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v118);
          sub_233E40((__int64)&v118);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v98 = (3 * v32 + 1) >> 1;
        v101 = v31;
        v50 = (unsigned int *)sub_186B300(v20 - 1, v49);
        v20 = v50 + 2;
        v31 = v101;
        *v50 = v98;
        v32 = v50[1];
      }
      v20[v32] = v31;
      *((_DWORD *)v20 - 1) = v32 + 1;
      if ( v29 )
      {
        v17 = (*(_DWORD *)(v29 + 8))-- == 1;
        if ( v17 )
          sub_15D7BC0(v104, v29);
      }
      if ( ptr )
      {
        v100 = ptr[2];
        ptr[2] = v100 - 1;
        if ( v100 == 1 )
          sub_15D7BC0(v104, ptr);
      }
      ++v21;
      v22 = *a5;
      if ( !*a5 )
      {
        v104 = *(_QWORD *)(a1 + 40);
        break;
      }
    }
    v33 = sub_15EC1C0(v104, *((unsigned int *)v20 - 1));
  }
  else
  {
    v33 = sub_15EC1C0(*(_QWORD *)(a1 + 40), 1);
  }
  v34 = v33;
  if ( v33 )
    ++*(_DWORD *)(v33 + 8);
  v35 = (__int64)v115;
  if ( v115 )
  {
    v36 = v116;
    v17 = v115[2]-- == 1;
    if ( v17 )
    {
      ptrc = (_DWORD *)v33;
      sub_15D7BC0(v36, v35);
      v34 = (__int64)ptrc;
      v37 = (__int64 *)a4[2];
      v115 = ptrc;
      if ( v37 )
        goto LABEL_37;
LABEL_103:
      ptrb = nullptr;
      v74 = sub_15DB6A0(*(_QWORD *)(a1 + 40), 1, 0, v37, 0, v34, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
      goto LABEL_69;
    }
  }
  v37 = (__int64 *)a4[2];
  v115 = (_DWORD *)v33;
  if ( !v37 )
    goto LABEL_103;
LABEL_37:
  v38 = *((unsigned int *)v37 - 1);
  if ( (_DWORD)v38 )
  {
    ptra = v37;
    v39 = &v37[v38];
    v40 = (unsigned int *)(sub_186B270(0x18u) + 8);
    v41 = 1;
    LODWORD(v42) = 0;
    *((_QWORD *)v40 - 1) = 2;
    v37 = (__int64 *)v40;
    while ( 1 )
    {
      v43 = *ptra++;
      *(_QWORD *)v40 = v43;
      *((_DWORD *)v37 - 1) = v41;
      if ( ptra == v39 )
        break;
      if ( (_DWORD)v41 == *((_DWORD *)v37 - 2) )
      {
        v45 = (unsigned int)(3 * v41 + 1) >> 1;
        v46 = 8 * v45 + 8;
        if ( 8 * (int)v41 + 8 >= (unsigned int)v46 || (unsigned int)v41 >= v45 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v118, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, &v118);
          sub_233E40((__int64)&v118);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v105 = (unsigned int)(3 * v41 + 1) >> 1;
        v47 = (unsigned int *)sub_186B300(v37 - 1, v46);
        v37 = (__int64 *)(v47 + 2);
        *v47 = v105;
        v42 = v47[1];
        v40 = &v47[2 * v42 + 2];
        v41 = (unsigned int)(v42 + 1);
      }
      else
      {
        v44 = (unsigned int)v41;
        LODWORD(v42) = v41;
        v41 = (unsigned int)(v41 + 1);
        v40 = (unsigned int *)&v37[v44];
      }
    }
    v51 = (__int64 *)a4[2];
    v52 = (unsigned int)v41 >> 1;
    ptrb = v51;
    if ( (unsigned int)v41 >> 1 )
    {
      v53 = *v37;
      *v37 = v43;
      v37[(unsigned int)v42] = v53;
      if ( v52 == 1 )
      {
        if ( !v51 )
          goto LABEL_66;
      }
      else
      {
        v54 = v42 - 1;
        v55 = v37 + 1;
        v56 = v42 - v52;
        do
        {
          v57 = v54;
          v58 = *v55;
          --v54;
          ++v55;
          v59 = &v37[v57];
          *(v55 - 1) = *v59;
          *v59 = v58;
        }
        while ( v56 != v54 );
        ptrb = v51;
        if ( !v51 )
          goto LABEL_66;
      }
    }
    else if ( !v51 )
    {
      v72 = *(_QWORD *)(a1 + 40);
      v73 = (__int64)v115;
      goto LABEL_68;
    }
    if ( !*((_DWORD *)ptrb - 1) )
    {
      v72 = *(_QWORD *)(a1 + 40);
      v73 = (__int64)v115;
      ptrb = nullptr;
      goto LABEL_67;
    }
    v60 = (__int64 *)(sub_186B270(0x18u) + 8);
    v61 = a4[2];
    v62 = 0;
    v63 = 1;
    *(v60 - 1) = 2;
    v64 = 1;
    ptrb = v60;
    while ( 1 )
    {
      *v60 = v64;
      ++v62;
      *((_DWORD *)ptrb - 1) = v63;
      if ( !v61 || v62 >= *(_DWORD *)(v61 - 4) )
        break;
      v64 = 8LL * v62 + 1;
      if ( v63 == *((_DWORD *)ptrb - 2) )
      {
        v66 = (3 * v63 + 1) >> 1;
        v67 = 8 * v66 + 8;
        if ( 8 * v63 + 8 >= (unsigned int)v67 || v63 >= v66 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v118, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, &v118);
          sub_233E40((__int64)&v118);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v106 = (3 * v63 + 1) >> 1;
        v68 = (unsigned int *)sub_186B300(ptrb - 1, v67);
        v69 = v68 + 2;
        v61 = a4[2];
        ptrb = (__int64 *)(v68 + 2);
        *v68 = v106;
        v70 = v68[1];
        v71 = v70;
        v60 = (__int64 *)&v69[2 * v70];
        v64 = 8LL * v62 + 1;
        v63 = v71 + 1;
      }
      else
      {
        v65 = v63++;
        v60 = &ptrb[v65];
      }
    }
LABEL_66:
    v72 = *(_QWORD *)(a1 + 40);
    v73 = (__int64)v115;
LABEL_67:
    v41 = *((unsigned int *)v37 - 1);
LABEL_68:
    v74 = sub_15DB6A0(v72, 1, v41, v37, ptrb, v73, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
    goto LABEL_69;
  }
  ptrb = nullptr;
  v37 = nullptr;
  v74 = sub_15DB6A0(*(_QWORD *)(a1 + 40), 1, v38, 0, 0, v34, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
LABEL_69:
  v75 = v74;
  if ( v74 )
    ++*(_DWORD *)(v74 + 8);
  v76 = (__int64)v115;
  if ( v115 )
  {
    v77 = v116;
    v17 = v115[2]-- == 1;
    if ( v17 )
    {
      v107 = v74;
      sub_15D7BC0(v77, v76);
      v75 = v107;
    }
  }
  v78 = *(_QWORD *)(a1 + 40);
  v115 = (_DWORD *)v75;
  sub_15E1A70(v78);
  v79 = sub_15E1B70(v78);
  v80 = v79;
  if ( v79 )
    ++*(_DWORD *)(v79 + 8);
  v81 = (__int64)v115;
  if ( v115 )
  {
    v82 = v116;
    v17 = v115[2]-- == 1;
    if ( v17 )
    {
      v108 = v79;
      sub_15D7BC0(v82, v81);
      v80 = v108;
    }
  }
  v115 = (_DWORD *)v80;
  sub_588670((int)&v118, a1, (__int64)a3, v80);
  v83 = (__int64)v115;
  v84 = v118;
  v118 = (__int64)v115;
  v115 = (_DWORD *)v84;
  if ( v118 )
  {
    v85 = v119;
    v17 = (*(_DWORD *)(v83 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v85, v83);
  }
  sub_588670((int)&v118, a1, (__int64)a3, v113);
  v86 = v113;
  v87 = v118;
  v118 = v113;
  v113 = v87;
  if ( v118 )
  {
    v88 = v119;
    v17 = (*(_DWORD *)(v86 + 8))-- == 1;
    if ( v17 )
    {
      sub_15D7BC0(v88, v86);
      v87 = v113;
    }
  }
  sub_5875C0(a1, "filter by negation", v87, (__int64)v115);
  if ( ptrb )
    sub_186B220(ptrb - 1);
  if ( v37 )
    sub_186B220(v37 - 1);
  v89 = v20;
  if ( v20 < &v20[*((unsigned int *)v20 - 1)] )
  {
    v90 = (unsigned __int64)&v20[*((unsigned int *)v20 - 1)];
    do
    {
      while ( 1 )
      {
        v91 = *v89;
        if ( *v89 )
        {
          v17 = (*(_DWORD *)(v91 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( (unsigned __int64)++v89 >= v90 )
          goto LABEL_95;
      }
      ++v89;
      sub_15D7BC0(v97, v91);
    }
    while ( (unsigned __int64)v89 < v90 );
  }
LABEL_95:
  result = sub_186B220(v20 - 1);
  v93 = (__int64)v115;
  if ( v115 )
  {
    v94 = v116;
    v17 = v115[2]-- == 1;
    if ( v17 )
      result = sub_15D7BC0(v94, v93);
  }
  v95 = v113;
  if ( v113 )
  {
    v96 = v114;
    v17 = (*(_DWORD *)(v113 + 8))-- == 1;
    if ( v17 )
      return sub_15D7BC0(v96, v95);
  }
  return result;
}

