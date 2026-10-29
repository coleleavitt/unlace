void __fastcall sub_AEBF20(_QWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  char **v6; // r12
  char **exception; // r12
  char **v8; // r12
  __int64 *v10; // rdi
  __int64 *v14; // r14
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 *v25; // rcx
  __int64 v26; // r15
  __int64 v27; // r14
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 *v31; // rcx
  _DWORD *v32; // r15
  __int64 v33; // rbp
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 *v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // r14
  unsigned int v41; // ecx
  size_t v42; // rsi
  unsigned int v43; // r12d
  unsigned int *v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // ebx
  __int64 v47; // rbp
  __int64 v48; // r12
  int v49; // r8d
  int v50; // r9d
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  unsigned int v54; // ebp
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rcx
  unsigned int v58; // ecx
  size_t v59; // rsi
  unsigned int v60; // r12d
  unsigned int *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  __int64 v68[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( !*((_BYTE *)a1 + 40) )
    return;
  v10 = (__int64 *)a1[3];
  v14 = v10;
  if ( v10 )
  {
    v15 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
    if ( (unsigned __int64)v10 >= v15 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[2];
          v18 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v14 >= v15 )
          goto LABEL_10;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( (unsigned __int64)v14 < v15 );
LABEL_10:
    v10 = (__int64 *)a1[3];
    if ( v10 )
LABEL_11:
      *((_DWORD *)v10 - 1) = 0;
  }
  v19 = *(_QWORD *)(*a1 + 104LL);
  if ( a2 == dword_1C7ED00 )
  {
    v20 = *(_QWORD *)(v19 + 856);
    if ( !v20 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( a2 == dword_1C7ECFC )
  {
    v20 = *(_QWORD *)(v19 + 864);
    if ( !v20 )
      goto LABEL_17;
LABEL_16:
    ++*(_DWORD *)(v20 + 8);
    goto LABEL_17;
  }
  v20 = *(_QWORD *)(*(_QWORD *)(*a1 + 8840LL) + 8LL * (a2 >> 1));
  if ( (a2 & 1) == 0 )
  {
    if ( !v20 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v51 = sub_15E1A70(*(_QWORD *)(*a1 + 104LL));
  v20 = v51;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  v10 = (__int64 *)a1[3];
LABEL_17:
  v21 = v10;
  if ( v10 )
  {
    v22 = *((_DWORD *)v10 - 1);
    if ( v22 == *((_DWORD *)v10 - 2) )
    {
      v58 = (3 * v22 + 1) >> 1;
      v59 = 8 * v58 + 8;
      v60 = v58;
      if ( 8 * v22 + 8 >= (unsigned int)v59 || v22 >= v58 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v68, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v68);
        sub_233E40((__int64)v68);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v61 = (unsigned int *)sub_186B300(v10 - 1, v59);
      v62 = v61[1];
      v21 = (__int64 *)(v61 + 2);
      *v61 = v60;
      a1[3] = v61 + 2;
      LODWORD(v61) = v62;
      v25 = &v21[v62];
      v24 = (_DWORD)v61 + 1;
    }
    else
    {
      v23 = v22;
      v24 = v22 + 1;
      v25 = &v10[v23];
    }
  }
  else
  {
    v65 = (_QWORD *)sub_186B270(0x18u);
    v21 = v65 + 1;
    *v65 = 2;
    v24 = 1;
    a1[3] = v21;
    v25 = v21;
  }
  *v25 = v20;
  v18 = dword_1C7ED00 == a3;
  *((_DWORD *)v21 - 1) = v24;
  v26 = *(_QWORD *)(*a1 + 104LL);
  if ( v18 )
  {
    v27 = *(_QWORD *)(v26 + 856);
    if ( !v27 )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( a3 == dword_1C7ECFC )
  {
    v27 = *(_QWORD *)(v26 + 864);
    if ( !v27 )
      goto LABEL_25;
LABEL_24:
    ++*(_DWORD *)(v27 + 8);
    goto LABEL_25;
  }
  v27 = *(_QWORD *)(*(_QWORD *)(*a1 + 8840LL) + 8LL * (a3 >> 1));
  if ( (a3 & 1) == 0 )
  {
    if ( !v27 )
      goto LABEL_25;
    goto LABEL_24;
  }
  v63 = sub_15E1A70(*(_QWORD *)(*a1 + 104LL));
  v27 = v63;
  if ( v63 )
    ++*(_DWORD *)(v63 + 8);
  v21 = (__int64 *)a1[3];
  if ( !v21 )
  {
    v64 = (_QWORD *)sub_186B270(0x18u);
    v21 = v64 + 1;
    *v64 = 2;
    v30 = 1;
    a1[3] = v21;
    v31 = v21;
    goto LABEL_27;
  }
LABEL_25:
  v28 = *((_DWORD *)v21 - 1);
  if ( v28 == *((_DWORD *)v21 - 2) )
  {
    v54 = (3 * v28 + 1) >> 1;
    v55 = 8 * v54 + 8;
    if ( 8 * v28 + 8 >= (unsigned int)v55 || v28 >= v54 )
    {
      v8 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v68, "Overflow encountered when expanding vector");
      *v8 = (char *)off_1C63128;
      sub_2333C0(v8 + 1, v68);
      sub_233E40((__int64)v68);
      __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v56 = (unsigned int *)sub_186B300(v21 - 1, v55);
    v57 = v56[1];
    v21 = (__int64 *)(v56 + 2);
    *v56 = v54;
    a1[3] = v56 + 2;
    LODWORD(v56) = v57;
    v31 = &v21[v57];
    v30 = (_DWORD)v56 + 1;
  }
  else
  {
    v29 = v28;
    v30 = v28 + 1;
    v31 = &v21[v29];
  }
LABEL_27:
  *v31 = v27;
  *((_DWORD *)v21 - 1) = v30;
  if ( a6 )
  {
    v32 = *(_DWORD **)a6;
    v33 = *(_QWORD *)a6 + 4LL * *(unsigned int *)(a6 + 8);
    if ( v33 != *(_QWORD *)a6 )
    {
      while ( 1 )
      {
        v39 = *v32 ^ 1;
        v40 = *(_QWORD *)(*a1 + 104LL);
        if ( v39 != dword_1C7ED00 )
          break;
        v34 = *(_QWORD *)(v40 + 856);
        if ( v34 )
          goto LABEL_33;
        v35 = *((_DWORD *)v21 - 1);
        if ( v35 == *((_DWORD *)v21 - 2) )
        {
LABEL_40:
          v41 = (3 * v35 + 1) >> 1;
          v42 = 8 * v41 + 8;
          v43 = v41;
          if ( 8 * v35 + 8 >= (unsigned int)v42 || v35 >= v41 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v68, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v68);
            sub_233E40((__int64)v68);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v44 = (unsigned int *)sub_186B300(v21 - 1, v42);
          v45 = v44[1];
          v21 = (__int64 *)(v44 + 2);
          *v44 = v43;
          ++v32;
          a1[3] = v44 + 2;
          *(_QWORD *)&v44[2 * v45 + 2] = v34;
          v44[1] = v45 + 1;
          if ( (_DWORD *)v33 == v32 )
            goto LABEL_43;
        }
        else
        {
LABEL_35:
          v36 = v35;
          v37 = v35 + 1;
          v38 = &v21[v36];
LABEL_36:
          ++v32;
          *v38 = v34;
          *((_DWORD *)v21 - 1) = v37;
          if ( (_DWORD *)v33 == v32 )
            goto LABEL_43;
        }
      }
      if ( v39 == dword_1C7ECFC )
      {
        v34 = *(_QWORD *)(v40 + 864);
        if ( v34 )
LABEL_33:
          ++*(_DWORD *)(v34 + 8);
      }
      else
      {
        v34 = *(_QWORD *)(*(_QWORD *)(*a1 + 8840LL) + 8LL * (v39 >> 1));
        if ( (v39 & 1) != 0 )
        {
          v52 = sub_15E1A70(*(_QWORD *)(*a1 + 104LL));
          v34 = v52;
          if ( v52 )
            ++*(_DWORD *)(v52 + 8);
          v21 = (__int64 *)a1[3];
          if ( !v21 )
          {
            v53 = (_QWORD *)sub_186B270(0x18u);
            v21 = v53 + 1;
            *v53 = 2;
            v37 = 1;
            a1[3] = v21;
            v38 = v21;
            goto LABEL_36;
          }
          goto LABEL_34;
        }
        if ( v34 )
          goto LABEL_33;
      }
LABEL_34:
      v35 = *((_DWORD *)v21 - 1);
      if ( v35 == *((_DWORD *)v21 - 2) )
        goto LABEL_40;
      goto LABEL_35;
    }
  }
LABEL_43:
  if ( a4 == 2 )
  {
    v46 = 0;
  }
  else if ( a4 > 2 )
  {
    v46 = 2;
    if ( a4 != 3 )
    {
      sub_1872CE0("");
      sub_1873130(114, 57);
    }
  }
  else
  {
    v46 = a4 == 0 ? 1 : 3;
  }
  sub_AE9120(v68, a1, v46, a5);
  v47 = v68[0];
  v48 = v68[1];
  sub_AEAD60(a1, (__int64 *)v46, (__int64)(a1 + 2), v68[0], v49, v50);
  if ( v47 )
  {
    v18 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v48, v47);
  }
}

