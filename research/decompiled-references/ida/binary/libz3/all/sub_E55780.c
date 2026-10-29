__int64 __fastcall sub_E55780(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rsi
  __int64 *v8; // rdx
  unsigned int i; // r13d
  __int64 v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // r13d
  __int64 j; // rsi
  __int64 v14; // r14
  unsigned int v15; // eax
  __int64 v16; // rdi
  int v17; // eax
  __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 *v23; // r14
  _QWORD *v24; // rax
  __int64 *v25; // rax
  int v26; // edx
  __int64 *v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 *v32; // r14
  __int64 v33; // rbx
  __int64 *v34; // r15
  _QWORD *v35; // rax
  __int64 *v36; // rax
  int v37; // edx
  __int64 *v38; // rcx
  unsigned int v39; // edx
  __int64 v40; // rax
  unsigned int v41; // r15d
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 *v45; // rbx
  __int64 v46; // rsi
  bool v47; // zf
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 *v50; // rbx
  unsigned __int64 v51; // rbp
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 *v54; // rbx
  unsigned __int64 v55; // rbp
  __int64 v56; // rsi
  __int64 *v57; // rbx
  __int64 *v58; // rbp
  __int64 v59; // rsi
  unsigned int v61; // r8d
  size_t v62; // rsi
  unsigned int v63; // r13d
  unsigned int *v64; // rax
  __int64 v65; // rax
  int v66; // edx
  unsigned int v67; // r10d
  size_t v68; // rsi
  unsigned int *v69; // rax
  __int64 v70; // rax
  int v71; // edx
  unsigned int v72; // r9d
  size_t v73; // rsi
  unsigned int v74; // r15d
  unsigned int *v75; // rax
  __int64 v76; // rsi
  unsigned int v77; // r9d
  size_t v78; // rsi
  unsigned int v79; // r15d
  unsigned int *v80; // rax
  __int64 v81; // rdi
  __int64 *v82; // rdi
  int v83; // eax
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  char **exception; // rbp
  char **v87; // rbp
  char **v88; // rbp
  char **v89; // rbp
  unsigned int v90; // [rsp+0h] [rbp-B8h]
  unsigned int v91; // [rsp+0h] [rbp-B8h]
  __int64 v93; // [rsp+8h] [rbp-B0h]
  __int64 v94; // [rsp+30h] [rbp-88h] BYREF
  __int64 *v95; // [rsp+38h] [rbp-80h]
  __int64 v96; // [rsp+40h] [rbp-78h] BYREF
  __int64 *v97; // [rsp+48h] [rbp-70h]
  __int64 v98; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v99; // [rsp+58h] [rbp-60h]
  __int64 v100; // [rsp+60h] [rbp-58h] BYREF
  __int64 v101; // [rsp+68h] [rbp-50h]

  v7 = *(_QWORD *)(a2 + 8);
  v8 = nullptr;
  v94 = *(_QWORD *)(a1 + 96);
  v95 = nullptr;
  if ( v7 )
  {
    for ( i = 0; i < *(_DWORD *)(v7 - 4); ++i )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v7 + 8LL * i);
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        if ( !v8 )
        {
          v85 = (_QWORD *)sub_186B270(0x18u);
          v8 = v85 + 1;
          *v85 = 2;
          v7 = *(_QWORD *)(a2 + 8);
          v83 = 1;
          v95 = v8;
          v82 = v8;
          goto LABEL_90;
        }
        v11 = *((_DWORD *)v8 - 1);
        if ( v11 == *((_DWORD *)v8 - 2) )
          break;
        ++i;
        v8[v11] = v10;
        *((_DWORD *)v8 - 1) = v11 + 1;
        if ( i >= *(_DWORD *)(v7 - 4) )
          goto LABEL_9;
      }
      v77 = (3 * v11 + 1) >> 1;
      v78 = 8 * v77 + 8;
      v79 = v77;
      if ( 8 * v11 + 8 >= (unsigned int)v78 || v11 >= v77 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v100, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v100);
        sub_233E40((__int64)&v100);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v80 = (unsigned int *)sub_186B300(v8 - 1, v78);
      v8 = (__int64 *)(v80 + 2);
      v81 = v80[1];
      v7 = *(_QWORD *)(a2 + 8);
      *v80 = v79;
      v95 = v8;
      LODWORD(v80) = v81;
      v82 = &v8[v81];
      v83 = (_DWORD)v80 + 1;
LABEL_90:
      *v82 = v10;
      *((_DWORD *)v8 - 1) = v83;
      if ( !v7 )
        break;
    }
  }
LABEL_9:
  v12 = 0;
  for ( j = *(_QWORD *)(a3 + 8); j; *((_DWORD *)v8 - 1) = v17 )
  {
    if ( v12 >= *(_DWORD *)(j - 4) )
      break;
    v14 = *(_QWORD *)(j + 8LL * v12);
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    if ( v8 )
    {
      v15 = *((_DWORD *)v8 - 1);
      if ( v15 == *((_DWORD *)v8 - 2) )
      {
        v72 = (3 * v15 + 1) >> 1;
        v73 = 8 * v72 + 8;
        v74 = v72;
        if ( 8 * v15 + 8 >= (unsigned int)v73 || v15 >= v72 )
        {
          v88 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v100, "Overflow encountered when expanding vector");
          *v88 = (char *)off_1C63128;
          sub_2333C0(v88 + 1, &v100);
          sub_233E40((__int64)&v100);
          __cxa_throw(v88, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v75 = (unsigned int *)sub_186B300(v8 - 1, v73);
        v76 = v75[1];
        v8 = (__int64 *)(v75 + 2);
        *v75 = v74;
        v95 = v8;
        LODWORD(v75) = v76;
        v18 = &v8[v76];
        j = *(_QWORD *)(a3 + 8);
        v17 = (_DWORD)v75 + 1;
      }
      else
      {
        v16 = v15;
        v17 = v15 + 1;
        v18 = &v8[v16];
      }
    }
    else
    {
      v84 = (_QWORD *)sub_186B270(0x18u);
      v8 = v84 + 1;
      *v84 = 2;
      v17 = 1;
      v95 = v8;
      v18 = v8;
      j = *(_QWORD *)(a3 + 8);
    }
    *v18 = v14;
    ++v12;
  }
  sub_E4F4E0(a1, &v94);
  v19 = *(_QWORD *)(a2 + 8);
  v20 = v95;
  v21 = *(_QWORD *)(a1 + 96);
  if ( v19 )
  {
    v19 = *(unsigned int *)(v19 - 4);
    v96 = *(_QWORD *)(a1 + 96);
    v97 = nullptr;
    if ( (_DWORD)v19 )
    {
      v22 = *v95;
      v23 = &v95[v19];
      if ( *v95 )
        ++*(_DWORD *)(v22 + 8);
      v24 = (_QWORD *)sub_186B270(0x18u);
      *v24 = 2;
      v25 = v24 + 1;
      v26 = 1;
      v97 = v25;
      v27 = v25;
      while ( 1 )
      {
        ++v20;
        *v25 = v22;
        *((_DWORD *)v27 - 1) = v26;
        if ( v20 == v23 )
          break;
        while ( 1 )
        {
          v22 = *v20;
          if ( *v20 )
            ++*(_DWORD *)(v22 + 8);
          v28 = *((_DWORD *)v27 - 1);
          if ( v28 == *((_DWORD *)v27 - 2) )
            break;
          ++v20;
          v27[v28] = v22;
          *((_DWORD *)v27 - 1) = v28 + 1;
          if ( v20 == v23 )
            goto LABEL_27;
        }
        v67 = (3 * v28 + 1) >> 1;
        v68 = 8 * v67 + 8;
        if ( 8 * v28 + 8 >= (unsigned int)v68 || v28 >= v67 )
        {
          v87 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v100, "Overflow encountered when expanding vector");
          *v87 = (char *)off_1C63128;
          sub_2333C0(v87 + 1, &v100);
          sub_233E40((__int64)&v100);
          __cxa_throw(v87, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v91 = (3 * v28 + 1) >> 1;
        v69 = (unsigned int *)sub_186B300(v27 - 1, v68);
        v27 = (__int64 *)(v69 + 2);
        v97 = (__int64 *)(v69 + 2);
        *v69 = v91;
        v70 = v69[1];
        v71 = v70;
        v25 = &v27[v70];
        v26 = v71 + 1;
      }
LABEL_27:
      v29 = *(_QWORD *)(a2 + 8);
      v20 = v95;
      v21 = *(_QWORD *)(a1 + 96);
      if ( v29 )
        v19 = *(unsigned int *)(v29 - 4);
      else
        v19 = 0;
    }
  }
  else
  {
    v96 = *(_QWORD *)(a1 + 96);
    v97 = nullptr;
  }
  v30 = *(_QWORD *)(a3 + 8);
  if ( v30 )
  {
    v31 = *(unsigned int *)(v30 - 4);
    v98 = v21;
    v99 = nullptr;
    if ( (_DWORD)v31 )
    {
      v32 = &v20[v19];
      v33 = *v32;
      v34 = &v20[v19 + v31];
      if ( *v32 )
        ++*(_DWORD *)(v33 + 8);
      v35 = (_QWORD *)sub_186B270(0x18u);
      *v35 = 2;
      v36 = v35 + 1;
      v37 = 1;
      v99 = v36;
      v38 = v36;
      while ( 1 )
      {
        ++v32;
        *v36 = v33;
        *((_DWORD *)v38 - 1) = v37;
        if ( v32 == v34 )
          break;
        while ( 1 )
        {
          v33 = *v32;
          if ( *v32 )
            ++*(_DWORD *)(v33 + 8);
          v39 = *((_DWORD *)v38 - 1);
          if ( v39 == *((_DWORD *)v38 - 2) )
            break;
          ++v32;
          v38[v39] = v33;
          *((_DWORD *)v38 - 1) = v39 + 1;
          if ( v32 == v34 )
            goto LABEL_39;
        }
        v61 = (3 * v39 + 1) >> 1;
        v62 = 8 * v61 + 8;
        v63 = v61;
        if ( 8 * v39 + 8 >= (unsigned int)v62 || v39 >= v61 )
        {
          v89 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v100, "Overflow encountered when expanding vector");
          *v89 = (char *)off_1C63128;
          sub_2333C0(v89 + 1, &v100);
          sub_233E40((__int64)&v100);
          __cxa_throw(v89, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v64 = (unsigned int *)sub_186B300(v38 - 1, v62);
        v38 = (__int64 *)(v64 + 2);
        *v64 = v63;
        v65 = v64[1];
        v99 = v38;
        v66 = v65;
        v36 = &v38[v65];
        v37 = v66 + 1;
      }
    }
  }
  else
  {
    v98 = v21;
    v99 = nullptr;
  }
LABEL_39:
  v90 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64 *))(**(_QWORD **)(a1 + 104) + 264LL))(
          *(_QWORD *)(a1 + 104),
          &v96,
          &v98,
          a4);
  v40 = *(_QWORD *)(a1 + 96);
  v41 = 0;
  v100 = 0;
  v101 = v40;
  v42 = a4[1];
  if ( v42 )
  {
    do
    {
      if ( v41 >= *(_DWORD *)(v42 - 4) )
        break;
      sub_14EA2A0(a1 + 480, *(_QWORD *)(v42 + 8LL * v41), &v100);
      v42 = a4[1];
      v43 = v100;
      v44 = *a4;
      v45 = (__int64 *)(v42 + 8LL * v41);
      if ( v100 )
        ++*(_DWORD *)(v100 + 8);
      v46 = *v45;
      if ( *v45 )
      {
        v47 = (*(_DWORD *)(v46 + 8))-- == 1;
        if ( v47 )
        {
          v93 = v43;
          sub_15D7BC0(v44, v46);
          v42 = a4[1];
          v43 = v93;
        }
      }
      *v45 = v43;
      ++v41;
    }
    while ( v42 );
    v48 = v100;
    v49 = v101;
    if ( v100 )
    {
      v47 = (*(_DWORD *)(v100 + 8))-- == 1;
      if ( v47 )
        sub_15D7BC0(v49, v48);
    }
  }
  v50 = v99;
  if ( v99 )
  {
    v51 = (unsigned __int64)&v99[*((unsigned int *)v99 - 1)];
    if ( (unsigned __int64)v99 >= v51 )
      goto LABEL_58;
    do
    {
      while ( 1 )
      {
        v52 = *v50;
        if ( *v50 )
        {
          v53 = v98;
          v47 = (*(_DWORD *)(v52 + 8))-- == 1;
          if ( v47 )
            break;
        }
        if ( (unsigned __int64)++v50 >= v51 )
          goto LABEL_57;
      }
      sub_15D7BC0(v53, v52);
      ++v50;
    }
    while ( (unsigned __int64)v50 < v51 );
LABEL_57:
    v50 = v99;
    if ( v99 )
LABEL_58:
      sub_186B220(v50 - 1);
  }
  v54 = v97;
  if ( v97 )
  {
    v55 = (unsigned __int64)&v97[*((unsigned int *)v97 - 1)];
    if ( (unsigned __int64)v97 >= v55 )
      goto LABEL_67;
    do
    {
      while ( 1 )
      {
        v56 = *v54;
        if ( *v54 )
        {
          v47 = (*(_DWORD *)(v56 + 8))-- == 1;
          if ( v47 )
            break;
        }
        if ( (unsigned __int64)++v54 >= v55 )
          goto LABEL_66;
      }
      sub_15D7BC0(v96, v56);
      ++v54;
    }
    while ( (unsigned __int64)v54 < v55 );
LABEL_66:
    v54 = v97;
    if ( v97 )
LABEL_67:
      sub_186B220(v54 - 1);
  }
  v57 = v95;
  if ( v95 )
  {
    v58 = &v95[*((unsigned int *)v95 - 1)];
    if ( v95 >= v58 )
      goto LABEL_76;
    do
    {
      while ( 1 )
      {
        v59 = *v57;
        if ( *v57 )
        {
          v47 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v47 )
            break;
        }
        if ( ++v57 >= v58 )
          goto LABEL_75;
      }
      sub_15D7BC0(v94, v59);
      ++v57;
    }
    while ( v57 < v58 );
LABEL_75:
    v57 = v95;
    if ( v95 )
LABEL_76:
      sub_186B220(v57 - 1);
  }
  return v90;
}

