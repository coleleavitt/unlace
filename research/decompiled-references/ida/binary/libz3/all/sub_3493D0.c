__int64 __fastcall sub_3493D0(_QWORD *a1, __int64 **a2, __int64 a3)
{
  char **v3; // rbp
  char **exception; // r12
  char **v5; // rbp
  __int64 v7; // rax
  __int64 *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 *v12; // r12
  _QWORD *v13; // rax
  unsigned int v14; // edx
  _QWORD *v15; // rbx
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r15
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rdi
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  struct _Unwind_Exception **v47; // rcx
  unsigned int v48; // edx
  unsigned int v49; // r15d
  size_t v50; // rsi
  unsigned int *v51; // rax
  unsigned int v52; // r15d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rax
  int v56; // edx
  unsigned int v57; // r15d
  size_t v58; // rsi
  unsigned int *v59; // rax
  __int64 v60; // r13
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 result; // rax
  __int64 *v64; // rbp
  unsigned __int64 v65; // r12
  __int64 v66; // rsi
  _QWORD *v67; // rax
  struct _Unwind_Exception *v68; // [rsp+0h] [rbp-D8h]
  __int64 v69; // [rsp+8h] [rbp-D0h]
  unsigned int v70; // [rsp+1Ch] [rbp-BCh]
  _QWORD *v71; // [rsp+20h] [rbp-B8h]
  __int64 v73; // [rsp+40h] [rbp-98h]
  __int64 v74; // [rsp+48h] [rbp-90h]
  __int64 v75; // [rsp+58h] [rbp-80h] BYREF
  __int64 v76; // [rsp+60h] [rbp-78h]
  __int64 v77; // [rsp+70h] [rbp-68h]
  __int64 v78; // [rsp+78h] [rbp-60h]
  __int64 v79; // [rsp+80h] [rbp-58h] BYREF
  __int64 v80; // [rsp+88h] [rbp-50h]

  v7 = a1[1];
  v8 = *a2;
  v74 = v7;
  if ( !*a2 )
  {
    v76 = a1[1];
    v77 = v7;
    v78 = 0;
LABEL_89:
    v60 = sub_2FF8B0((__int64)a1);
    v61 = a1[1];
    v19 = 0;
    v20 = 0;
    v15 = nullptr;
    v73 = v74;
    goto LABEL_72;
  }
  v9 = a1[1];
  v10 = *((unsigned int *)v8 - 1);
  v76 = v9;
  if ( !(_DWORD)v10 )
  {
    v77 = v9;
    v78 = 0;
    goto LABEL_89;
  }
  v11 = *v8;
  v12 = &v8[v10];
  if ( *v8 )
    ++*(_DWORD *)(v11 + 8);
  v13 = (_QWORD *)(sub_186B270(0x18u) + 8);
  v14 = 1;
  *(v13 - 1) = 2;
  v15 = v13;
  while ( 1 )
  {
    ++v8;
    *v13 = v11;
    *((_DWORD *)v15 - 1) = v14;
    if ( v12 == v8 )
      break;
    while ( 1 )
    {
      v11 = *v8;
      if ( *v8 )
        ++*(_DWORD *)(v11 + 8);
      v16 = *((_DWORD *)v15 - 1);
      if ( v16 == *((_DWORD *)v15 - 2) )
        break;
      v17 = v16;
      ++v8;
      v14 = v16 + 1;
      v15[v17] = v11;
      *((_DWORD *)v15 - 1) = v14;
      if ( v12 == v8 )
        goto LABEL_11;
    }
    v52 = (3 * v16 + 1) >> 1;
    v53 = 8 * v52 + 8;
    if ( 8 * v16 + 8 >= (unsigned int)v53 || v16 >= v52 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v79, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v79);
      sub_233E40((__int64)&v79);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v54 = (unsigned int *)sub_186B300(v15 - 1, v53);
    v15 = v54 + 2;
    *v54 = v52;
    v55 = v54[1];
    v56 = v55;
    v13 = &v15[v55];
    v14 = v56 + 1;
  }
LABEL_11:
  v18 = a1[1];
  v70 = 1;
  v19 = 0;
  v20 = 0;
  v78 = 0;
  v73 = v18;
  v77 = v18;
  v71 = a1 + 26;
  while ( v70 < v14 )
  {
    v68 = (struct _Unwind_Exception *)sub_300BE0(a1, "u");
    v69 = sub_300BE0(a1, "v");
    v22 = sub_15E1B70(a1[1]);
    v23 = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    if ( v19 )
    {
      v24 = (*(_DWORD *)(v19 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v73, v19);
    }
    v25 = sub_15E1B70(a1[1]);
    v26 = v25;
    if ( v25 )
      ++*(_DWORD *)(v25 + 8);
    if ( v20 )
    {
      v24 = (*(_DWORD *)(v20 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v73, v20);
    }
    v27 = sub_2FF8B0((__int64)a1);
    sub_E5EBF0(v27, v26);
    v28 = a1[40];
    if ( v28 )
    {
      sub_1374250(&v79, a1[40], v23);
      sub_135F9B0(v28, v68->private_1, v79);
      v29 = v79;
      if ( v79 )
      {
        v30 = v80;
        v24 = (*(_DWORD *)(v79 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v30, v29);
      }
    }
    v31 = a1[17];
    if ( v31 )
    {
      sub_1374250(&v79, a1[17], v23);
      sub_135F9B0(v31, v68->private_1, v79);
      v32 = v79;
      if ( v79 )
      {
        v33 = v80;
        v24 = (*(_DWORD *)(v79 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v33, v32);
      }
    }
    v79 = v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    sub_349180(v71, &v79);
    v34 = sub_15E1B70(a1[1]);
    v19 = v34;
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    if ( v23 )
    {
      v24 = (*(_DWORD *)(v23 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v73, v23);
    }
    v35 = sub_15E1B70(a1[1]);
    v20 = v35;
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    if ( v26 )
    {
      v24 = (*(_DWORD *)(v26 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v73, v26);
    }
    v36 = sub_2FF8B0((__int64)a1);
    sub_E5EBF0(v36, v20);
    v37 = a1[40];
    if ( v37 )
    {
      sub_1374250(&v79, a1[40], v19);
      sub_135F9B0(v37, *(_QWORD *)(v69 + 16), v79);
      v38 = v79;
      if ( v79 )
      {
        v39 = v80;
        v24 = (*(_DWORD *)(v79 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v39, v38);
      }
    }
    v40 = a1[17];
    if ( v40 )
    {
      sub_1374250(&v79, a1[17], v19);
      sub_135F9B0(v40, *(_QWORD *)(v69 + 16), v79);
      v41 = v79;
      if ( v79 )
      {
        v42 = v80;
        v24 = (*(_DWORD *)(v79 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v42, v41);
      }
    }
    v75 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    sub_349180(v71, &v75);
    if ( v68 )
      ++LODWORD(v68->exception_cleanup);
    v43 = *(_QWORD **)(a3 + 8);
    if ( v43 )
    {
      v44 = *((_DWORD *)v43 - 1);
      if ( v44 == *((_DWORD *)v43 - 2) )
      {
        v57 = (3 * v44 + 1) >> 1;
        v58 = 8 * v57 + 8;
        if ( 8 * v44 + 8 >= (unsigned int)v58 || v44 >= v57 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v79, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, &v79);
          sub_233E40((__int64)&v79);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v59 = (unsigned int *)sub_186B300(v43 - 1, v58);
        v43 = v59 + 2;
        *v59 = v57;
        *(_QWORD *)(a3 + 8) = v59 + 2;
        LODWORD(v59) = v59[1];
        v47 = (struct _Unwind_Exception **)&v43[(unsigned int)v59];
        v46 = (_DWORD)v59 + 1;
      }
      else
      {
        v45 = v44;
        v46 = v44 + 1;
        v47 = (struct _Unwind_Exception **)&v43[v45];
      }
    }
    else
    {
      v67 = (_QWORD *)sub_186B270(0x18u);
      v43 = v67 + 1;
      *v67 = 2;
      v47 = (struct _Unwind_Exception **)(v67 + 1);
      *(_QWORD *)(a3 + 8) = v67 + 1;
      v46 = 1;
    }
    *v47 = v68;
    *((_DWORD *)v43 - 1) = v46;
    if ( v69 )
      ++*(_DWORD *)(v69 + 8);
    v48 = *((_DWORD *)v15 - 1);
    if ( v48 == *((_DWORD *)v15 - 2) )
    {
      v49 = (3 * v48 + 1) >> 1;
      v50 = 8 * v49 + 8;
      if ( 8 * v48 + 8 >= (unsigned int)v50 || v48 >= v49 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v79, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, &v79);
        sub_233E40((__int64)&v79);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v51 = (unsigned int *)sub_186B300(v15 - 1, v50);
      *v51 = v49;
      v48 = v51[1];
      v15 = v51 + 2;
    }
    v21 = v48;
    v70 += 2;
    v14 = v48 + 1;
    v15[v21] = v69;
    *((_DWORD *)v15 - 1) = v14;
  }
  v60 = sub_2FF8B0((__int64)a1);
  v61 = a1[1];
LABEL_72:
  v62 = sub_15E1A70(v61);
  result = sub_E5EBF0(v60, v62);
  if ( v19 )
  {
    v24 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v24 )
      result = sub_15D7BC0(v73, v19);
  }
  if ( v20 )
  {
    v24 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v24 )
      result = sub_15D7BC0(v73, v20);
  }
  if ( v15 )
  {
    v64 = v15;
    v65 = (unsigned __int64)&v15[*((unsigned int *)v15 - 1)];
    if ( (unsigned __int64)v15 < v65 )
    {
      do
      {
        while ( 1 )
        {
          v66 = *v64;
          if ( *v64 )
          {
            v24 = (*(_DWORD *)(v66 + 8))-- == 1;
            if ( v24 )
              break;
          }
          if ( (unsigned __int64)++v64 >= v65 )
            return sub_186B220(v15 - 1);
        }
        ++v64;
        sub_15D7BC0(v74, v66);
      }
      while ( (unsigned __int64)v64 < v65 );
    }
    return sub_186B220(v15 - 1);
  }
  return result;
}

