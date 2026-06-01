_DWORD *__fastcall sub_54B7A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *result; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  unsigned int v12; // r14d
  unsigned int v13; // r13d
  size_t v14; // rsi
  unsigned int *v15; // rax
  unsigned int v16; // eax
  _QWORD *v17; // rbx
  _QWORD *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned int v21; // r13d
  unsigned int v22; // r12d
  size_t v23; // rsi
  unsigned int *v24; // rax
  unsigned int v25; // eax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  char **exception; // rbp
  __int64 v29[9]; // [rsp+10h] [rbp-48h] BYREF

  result = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3);
  if ( (_BYTE)result )
    return result;
  v7 = *(_QWORD **)(a2 + 40);
  *(_BYTE *)(a2 + 28) = 0;
  if ( !v7 )
    goto LABEL_39;
  v8 = &v7[*((unsigned int *)v7 - 1)];
  if ( v7 >= v8 )
    goto LABEL_11;
  do
  {
    while ( 1 )
    {
      v9 = *v7;
      if ( *v7 )
      {
        v10 = *(_QWORD *)(a2 + 32);
        v11 = (*(_DWORD *)(v9 + 8))-- == 1;
        if ( v11 )
          break;
      }
      if ( ++v7 >= v8 )
        goto LABEL_10;
    }
    sub_15D7BC0(v10, v9);
    ++v7;
  }
  while ( v7 < v8 );
LABEL_10:
  v7 = *(_QWORD **)(a2 + 40);
  if ( v7 )
  {
LABEL_11:
    result = *(_DWORD **)(a2 + 16);
    *((_DWORD *)v7 - 1) = 0;
    if ( !result )
      goto LABEL_19;
    v12 = *(result - 1);
    if ( !v12 )
      goto LABEL_19;
  }
  else
  {
LABEL_39:
    result = *(_DWORD **)(a2 + 16);
    if ( !result )
      goto LABEL_19;
    v12 = *(result - 1);
    if ( !v12 )
      goto LABEL_19;
    v27 = (_QWORD *)sub_186B270(0x18u);
    v7 = v27 + 1;
    *v27 = 2;
    *(_QWORD *)(a2 + 40) = v27 + 1;
  }
  while ( 1 )
  {
    v16 = *((_DWORD *)v7 - 2);
    if ( v16 >= v12 )
      break;
    v13 = (3 * v16 + 1) >> 1;
    v14 = 8 * v13 + 8;
    if ( 8 * v16 + 8 >= (unsigned int)v14 || v16 >= v13 )
    {
LABEL_42:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v29, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v29);
      sub_233E40((__int64)v29);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v15 = (unsigned int *)sub_186B300(v7 - 1, v14);
    v7 = v15 + 2;
    *v15 = v13;
    *(_QWORD *)(a2 + 40) = v15 + 2;
  }
  *((_DWORD *)v7 - 1) = v12;
  result = memset(v7, 0, 8LL * v12);
LABEL_19:
  if ( a4 )
  {
    v17 = *(_QWORD **)(a4 + 40);
    *(_BYTE *)(a4 + 28) = 0;
    if ( !v17 )
      goto LABEL_36;
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_28;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = *(_QWORD *)(a4 + 32);
          v11 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_27;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_27:
    v17 = *(_QWORD **)(a4 + 40);
    if ( v17 )
    {
LABEL_28:
      result = *(_DWORD **)(a4 + 16);
      *((_DWORD *)v17 - 1) = 0;
      if ( result )
      {
        v21 = *(result - 1);
        if ( v21 )
        {
LABEL_34:
          while ( 1 )
          {
            v25 = *((_DWORD *)v17 - 2);
            if ( v25 >= v21 )
              break;
            v22 = (3 * v25 + 1) >> 1;
            v23 = 8 * v22 + 8;
            if ( 8 * v25 + 8 >= (unsigned int)v23 || v25 >= v22 )
              goto LABEL_42;
            v24 = (unsigned int *)sub_186B300(v17 - 1, v23);
            v17 = v24 + 2;
            *v24 = v22;
            *(_QWORD *)(a4 + 40) = v24 + 2;
          }
          *((_DWORD *)v17 - 1) = v21;
          return memset(v17, 0, 8LL * v21);
        }
      }
    }
    else
    {
LABEL_36:
      result = *(_DWORD **)(a4 + 16);
      if ( result )
      {
        v21 = *(result - 1);
        if ( v21 )
        {
          v26 = (_QWORD *)sub_186B270(0x18u);
          v17 = v26 + 1;
          *v26 = 2;
          *(_QWORD *)(a4 + 40) = v26 + 1;
          goto LABEL_34;
        }
      }
    }
  }
  return result;
}

