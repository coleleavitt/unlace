_DWORD *__fastcall sub_7F1380(_QWORD *a1, unsigned int a2)
{
  char **exception; // rbp
  char **v3; // rbp
  unsigned int v4; // esi
  unsigned int v5; // r12d
  __int64 v7; // rax
  unsigned int *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  _DWORD *v12; // rbx
  unsigned int v13; // r14d
  unsigned int v14; // r13d
  _QWORD *v15; // rbx
  __int64 v16; // rax
  _DWORD *result; // rax
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // r15d
  size_t v21; // rsi
  unsigned int *v22; // rax
  char *v23; // rdi
  char *v24; // rdx
  _QWORD *v25; // rax
  unsigned int v26; // r14d
  size_t v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdi
  _DWORD *v30; // r13
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = a2 >> 1;
  v5 = v4;
  v7 = *(_QWORD *)(*a1 + 2328LL);
  if ( v7 )
  {
    if ( v4 < *(_DWORD *)(v7 - 4) )
    {
      v8 = *(unsigned int **)(v7 + 8LL * v4);
      if ( v8 )
      {
        v9 = *(_QWORD *)(*a1 + 1720LL);
        if ( v9 )
        {
          v10 = *v8;
          if ( (unsigned int)v10 < *(_DWORD *)(v9 - 4) )
          {
            v11 = *(_QWORD *)(v9 + 8 * v10);
            if ( v11 )
              sub_7F1030((__int64)a1, v11);
          }
        }
      }
    }
  }
  v12 = (_DWORD *)a1[5];
  if ( !v12 )
  {
    v14 = v5 + 1;
    v18 = sub_186B270(0xAu);
    v19 = 2;
    v12 = (_DWORD *)(v18 + 8);
    *(_QWORD *)v18 = 2;
    a1[5] = v18 + 8;
    if ( v5 + 1 > 2 )
    {
      v13 = 0;
      goto LABEL_16;
    }
    *(_DWORD *)(v18 + 4) = v14;
    v23 = (char *)(v18 + 8);
    v24 = (char *)v12 + v14;
LABEL_21:
    memset(v23, 0, v24 - v23);
    *((_BYTE *)v12 + v5) = 1;
    v15 = (_QWORD *)a1[2];
    if ( !v15 )
      goto LABEL_22;
    goto LABEL_11;
  }
  v13 = *(v12 - 1);
  v14 = v5 + 1;
  if ( v5 >= v13 )
  {
    while ( 1 )
    {
      v19 = *(v12 - 2);
      if ( v19 >= v14 )
        break;
LABEL_16:
      v20 = (3 * v19 + 1) >> 1;
      v21 = v20 + 8;
      if ( v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v34, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v34);
        sub_233E40((__int64)v34);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = (unsigned int *)sub_186B300(v12 - 2, v21);
      v12 = v22 + 2;
      *v22 = v20;
      a1[5] = v22 + 2;
    }
    *(v12 - 1) = v14;
    v23 = (char *)v12 + v13;
    v24 = (char *)v12 + v14;
    if ( v14 != v13 )
      goto LABEL_21;
  }
  *((_BYTE *)v12 + v5) = 1;
  v15 = (_QWORD *)a1[2];
  if ( !v15 )
  {
LABEL_22:
    v25 = (_QWORD *)sub_186B270(0x18u);
    v15 = v25 + 1;
    *v25 = 2;
    a1[2] = v25 + 1;
    result = v25 + 1;
    goto LABEL_13;
  }
LABEL_11:
  v16 = *((unsigned int *)v15 - 1);
  if ( (_DWORD)v16 == *((_DWORD *)v15 - 2) )
  {
    v26 = (unsigned int)(3 * v16 + 1) >> 1;
    v27 = 8 * v26 + 8;
    if ( 8 * (int)v16 + 8 >= (unsigned int)v27 || (unsigned int)v16 >= v26 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v34, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v34);
      sub_233E40((__int64)v34);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v28 = sub_186B270(v27);
    v29 = a1[2];
    v30 = (_DWORD *)v28;
    v15 = (_QWORD *)(v28 + 8);
    if ( v29 )
    {
      v31 = *(unsigned int *)(v29 - 4);
      v32 = 0;
      v30[1] = v31;
      v33 = 8 * v31;
      if ( v33 )
      {
        do
        {
          *(_QWORD *)&v30[v32 / 4 + 2] = *(_QWORD *)(v29 + v32);
          v32 += 8LL;
        }
        while ( v33 != v32 );
      }
      sub_186B220((void *)(v29 - 8));
      result = &v15[v30[1]];
    }
    else
    {
      *(_DWORD *)(v28 + 4) = 0;
      result = (_DWORD *)(v28 + 8);
    }
    a1[2] = v15;
    *v30 = v26;
  }
  else
  {
    result = &v15[v16];
  }
LABEL_13:
  *result = 0;
  result[1] = v5;
  ++*((_DWORD *)v15 - 1);
  return result;
}

