unsigned __int64 __fastcall sub_4C52B0(__int64 a1, _QWORD *a2, unsigned __int64 *a3, __int64 *a4)
{
  char **exception; // rbx
  __int64 v5; // rdx
  unsigned __int64 result; // rax
  _QWORD *v11; // rdx
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  size_t v14; // rsi
  unsigned int v15; // r12d
  unsigned int *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r12
  unsigned __int64 v23; // rbx
  unsigned __int64 *v24; // rdx
  unsigned __int64 v25; // rsi
  __int64 v26; // rdi
  bool v27; // zf
  unsigned __int64 *v28; // rdx
  unsigned __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi
  _QWORD *v32; // rax
  unsigned int v33; // [rsp+8h] [rbp-60h]
  __int64 v34; // [rsp+8h] [rbp-60h]
  unsigned __int64 v35; // [rsp+8h] [rbp-60h]
  __int64 v36[11]; // [rsp+10h] [rbp-58h] BYREF

  result = *a3;
  v11 = (_QWORD *)a4[1];
  if ( result )
  {
    v12 = *(_DWORD *)(result - 4);
    if ( !v11 )
      goto LABEL_30;
    result = *((unsigned int *)v11 - 1);
    v33 = result;
    if ( v12 >= (unsigned int)result )
    {
LABEL_4:
      if ( v33 < v12 )
        goto LABEL_9;
      *((_DWORD *)v11 - 1) = v12;
      if ( v12 )
      {
        v18 = v12;
        goto LABEL_12;
      }
      return result;
    }
    result = (unsigned __int64)&v11[v12];
    v29 = (unsigned __int64)&v11[v33];
    if ( result < v29 )
      goto LABEL_26;
LABEL_23:
    result = *((unsigned int *)v11 - 1);
    v33 = *((_DWORD *)v11 - 1);
    goto LABEL_4;
  }
  if ( !v11 )
    return result;
  result = *((unsigned int *)v11 - 1);
  if ( !(_DWORD)result )
    return result;
  v29 = (unsigned __int64)&v11[result];
  v12 = 0;
  result = a4[1];
  if ( (unsigned __int64)v11 >= v29 )
  {
    *((_DWORD *)v11 - 1) = 0;
    return result;
  }
  do
  {
    while ( 1 )
    {
LABEL_26:
      v30 = *(_QWORD *)result;
      if ( !*(_QWORD *)result )
        goto LABEL_25;
      v31 = *a4;
      v27 = (*(_DWORD *)(v30 + 8))-- == 1;
      if ( !v27 )
        break;
      v35 = result;
      sub_15D7BC0(v31, v30);
      result = v35;
LABEL_25:
      result += 8LL;
      if ( result >= v29 )
        goto LABEL_29;
    }
    result += 8LL;
  }
  while ( result < v29 );
LABEL_29:
  v11 = (_QWORD *)a4[1];
  if ( v11 )
    goto LABEL_23;
LABEL_30:
  if ( v12 )
  {
    v32 = (_QWORD *)sub_186B270(0x18u);
    v33 = 0;
    v11 = v32 + 1;
    *v32 = 2;
    a4[1] = (__int64)(v32 + 1);
LABEL_9:
    while ( 1 )
    {
      v17 = *((_DWORD *)v11 - 2);
      if ( v17 >= v12 )
        break;
      v13 = (3 * v17 + 1) >> 1;
      v14 = 8 * v13 + 8;
      v15 = v13;
      if ( 8 * v17 + 8 >= (unsigned int)v14 || v17 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DFB18(v36, "Overflow encountered when expanding vector", v5);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v11 - 1, v14);
      v11 = v16 + 2;
      *v16 = v15;
      a4[1] = (__int64)(v16 + 2);
    }
    v18 = v12;
    *((_DWORD *)v11 - 1) = v12;
    v19 = 8LL * v33;
    v20 = &v11[(unsigned __int64)v19 / 8];
    v21 = 8LL * v12;
    if ( v19 != v21 )
    {
      memset(v20, 0, v21 - v19);
      v18 = v12;
    }
LABEL_12:
    v22 = 0;
    v34 = 8 * v18;
    do
    {
      while ( 1 )
      {
        result = sub_1625BE0(*(_QWORD *)(a1 + 8) + 56LL, *(_QWORD *)(*a3 + v22), *(_QWORD *)(*a2 + v22));
        v23 = result;
        if ( result )
          ++*(_DWORD *)(result + 8);
        v24 = (unsigned __int64 *)(v22 + a4[1]);
        v25 = *v24;
        if ( *v24 )
        {
          v26 = *a4;
          v27 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v27 )
            break;
        }
        *v24 = result;
        v22 += 8;
        if ( v34 == v22 )
          return result;
      }
      result = sub_15D7BC0(v26, v25);
      v28 = (unsigned __int64 *)(v22 + a4[1]);
      v22 += 8;
      *v28 = v23;
    }
    while ( v34 != v22 );
  }
  return result;
}

