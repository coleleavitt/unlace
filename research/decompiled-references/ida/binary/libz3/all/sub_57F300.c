unsigned __int64 __fastcall sub_57F300(_QWORD *a1, _QWORD **a2, _QWORD **a3, unsigned int a4, int *a5, int *a6)
{
  unsigned __int64 result; // rax
  __int64 v7; // r14
  _DWORD *v12; // rax
  int *v13; // r14
  _DWORD *v14; // rdx
  int v15; // ecx
  int v16; // edi
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // r10d
  size_t v20; // rsi
  unsigned int v21; // r15d
  unsigned int *v22; // rax
  __int64 v23; // rax
  _DWORD *v24; // rax
  int *v25; // r13
  _DWORD *v26; // rdx
  int v27; // ecx
  int v28; // edi
  unsigned int v29; // ecx
  unsigned int v30; // r15d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rax
  unsigned int *v34; // rdx
  _QWORD *v35; // r14
  __int64 v36; // r15
  __int64 v37; // r15
  unsigned __int64 i; // r13
  __int64 v39; // rcx
  unsigned int *v40; // rsi
  unsigned int v41; // eax
  unsigned int v42; // ecx
  size_t v43; // rsi
  unsigned int *v44; // rax
  _QWORD *v45; // r14
  __int64 v46; // r15
  __int64 v47; // r15
  unsigned __int64 j; // r12
  __int64 v49; // rcx
  unsigned int *v50; // rsi
  unsigned int v51; // eax
  unsigned int v52; // r13d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // r15
  _QWORD *v58; // rax
  char **exception; // r12
  char **v60; // r12
  char **v61; // r12
  char **v62; // r12
  unsigned int v64; // [rsp+0h] [rbp-78h]
  __int64 v65; // [rsp+8h] [rbp-70h]
  __int64 v66[11]; // [rsp+20h] [rbp-58h] BYREF

  result = (unsigned __int64)qword_1C666F0;
  v7 = a4;
  *a1 = qword_1C666F0;
  a1[1] = 0;
  a1[2] = 0;
  if ( !a4 )
  {
    v35 = *a2;
    a1[3] = 0;
    if ( v35 )
    {
      result = *((unsigned int *)v35 - 1);
      if ( (_DWORD)result )
      {
        v37 = 8 * result;
        goto LABEL_46;
      }
    }
LABEL_38:
    v34 = nullptr;
LABEL_39:
    v45 = *a3;
    if ( !*a3 )
      return result;
    result = *((unsigned int *)v45 - 1);
    if ( !(_DWORD)result )
      return result;
    v47 = 8 * result;
    if ( !v34 )
    {
      v56 = (_QWORD *)sub_186B270(0x18u);
      v34 = (unsigned int *)(v56 + 1);
      *v56 = 2;
      j = 0;
      result = 1;
      a1[1] = v34;
      v50 = v34;
      goto LABEL_31;
    }
    j = 0;
    goto LABEL_33;
  }
  v12 = (_DWORD *)(sub_186B270(0x10u) + 8);
  v65 = v7;
  v13 = &a5[v7];
  *((_QWORD *)v12 - 1) = 2;
  v14 = v12;
  a1[2] = v12;
  while ( 1 )
  {
    v15 = *a5++;
    *v12 = v15;
    v16 = *(v14 - 1);
    v17 = (unsigned int)(v16 + 1);
    *(v14 - 1) = v17;
    if ( a5 == v13 )
      break;
    v18 = *(v14 - 2);
    if ( v18 == (_DWORD)v17 )
    {
      v19 = (3 * v18 + 1) >> 1;
      v20 = 4 * v19 + 8;
      v21 = v19;
      if ( 4 * v16 + 12 >= (unsigned int)v20 || v18 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v66, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v66);
        sub_233E40((__int64)v66);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = (unsigned int *)sub_186B300(v14 - 2, v20);
      v14 = v22 + 2;
      *v22 = v21;
      v23 = v22[1];
      a1[2] = v14;
      v12 = &v14[v23];
    }
    else
    {
      v12 = &v14[v17];
    }
  }
  a1[3] = 0;
  v24 = (_DWORD *)(sub_186B270(0x10u) + 8);
  v25 = a6;
  *((_QWORD *)v24 - 1) = 2;
  v26 = v24;
  a1[3] = v24;
  while ( 1 )
  {
    v27 = *v25++;
    *v24 = v27;
    v28 = *(v26 - 1);
    result = (unsigned int)(v28 + 1);
    *(v26 - 1) = result;
    if ( v25 == &a6[v65] )
      break;
    v29 = *(v26 - 2);
    if ( v29 == (_DWORD)result )
    {
      v30 = (3 * v29 + 1) >> 1;
      v31 = 4 * v30 + 8;
      if ( 4 * v28 + 12 >= (unsigned int)v31 || v29 >= v30 )
      {
        v62 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v66, "Overflow encountered when expanding vector");
        *v62 = (char *)off_1C63128;
        sub_2333C0(v62 + 1, v66);
        sub_233E40((__int64)v66);
        __cxa_throw(v62, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v32 = (unsigned int *)sub_186B300(v26 - 2, v31);
      v26 = v32 + 2;
      *v32 = v30;
      v33 = v32[1];
      a1[3] = v26;
      v24 = &v26[v33];
    }
    else
    {
      v24 = &v26[result];
    }
  }
  v34 = (unsigned int *)a1[1];
  if ( !v34 )
  {
    v35 = *a2;
    if ( *a2 )
    {
      v57 = *((unsigned int *)v35 - 1);
      if ( (_DWORD)v57 )
      {
        v37 = 8 * v57;
LABEL_46:
        v58 = (_QWORD *)sub_186B270(0x18u);
        v34 = (unsigned int *)(v58 + 1);
        *v58 = 2;
        i = 0;
        result = 1;
        a1[1] = v34;
        v40 = v34;
        goto LABEL_21;
      }
    }
    goto LABEL_38;
  }
  v35 = *a2;
  *(v34 - 1) = 0;
  if ( !v35 )
    goto LABEL_39;
  v36 = *((unsigned int *)v35 - 1);
  if ( !(_DWORD)v36 )
    goto LABEL_39;
  v37 = 8 * v36;
  for ( i = 0; ; v35 = &(*a2)[i / 8] )
  {
    v41 = *(v34 - 1);
    if ( v41 == *(v34 - 2) )
    {
      v42 = (3 * v41 + 1) >> 1;
      v43 = 8 * v42 + 8;
      if ( 8 * v41 + 8 >= (unsigned int)v43 || v41 >= v42 )
      {
        v60 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v66, "Overflow encountered when expanding vector");
        *v60 = (char *)off_1C63128;
        sub_2333C0(v60 + 1, v66);
        sub_233E40((__int64)v66);
        __cxa_throw(v60, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v64 = (3 * v41 + 1) >> 1;
      v44 = (unsigned int *)sub_186B300(v34 - 2, v43);
      v34 = v44 + 2;
      a1[1] = v44 + 2;
      *v44 = v64;
      LODWORD(v44) = v44[1];
      v40 = &v34[2 * (unsigned int)v44];
      result = (unsigned int)((_DWORD)v44 + 1);
    }
    else
    {
      v39 = v41;
      result = v41 + 1;
      v40 = &v34[2 * v39];
    }
LABEL_21:
    i += 8LL;
    *(_QWORD *)v40 = *v35;
    *(v34 - 1) = result;
    if ( i == v37 )
      break;
  }
  v45 = *a3;
  if ( *a3 )
  {
    v46 = *((unsigned int *)v45 - 1);
    if ( (_DWORD)v46 )
    {
      v47 = 8 * v46;
      for ( j = 0; ; v45 = &(*a3)[j / 8] )
      {
LABEL_33:
        v51 = *(v34 - 1);
        if ( v51 == *(v34 - 2) )
        {
          v52 = (3 * v51 + 1) >> 1;
          v53 = 8 * v52 + 8;
          if ( 8 * v51 + 8 >= (unsigned int)v53 || v51 >= v52 )
          {
            v61 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v66, "Overflow encountered when expanding vector");
            *v61 = (char *)off_1C63128;
            sub_2333C0(v61 + 1, v66);
            sub_233E40((__int64)v66);
            __cxa_throw(v61, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v54 = (unsigned int *)sub_186B300(v34 - 2, v53);
          v55 = v54[1];
          v34 = v54 + 2;
          *v54 = v52;
          a1[1] = v54 + 2;
          v50 = &v54[2 * v55 + 2];
          result = (unsigned int)(v55 + 1);
        }
        else
        {
          v49 = v51;
          result = v51 + 1;
          v50 = &v34[2 * v49];
        }
LABEL_31:
        j += 8LL;
        *(_QWORD *)v50 = *v45;
        *(v34 - 1) = result;
        if ( j == v47 )
          break;
      }
    }
  }
  return result;
}

