__int64 __fastcall sub_A6F1C0(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // edx
  size_t v11; // rsi
  unsigned int v12; // r15d
  unsigned int *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r15
  _QWORD *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 result; // rax
  _QWORD *v21; // rdx
  unsigned int v22; // ebx
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  unsigned int v28; // [rsp+Ch] [rbp-6Ch]
  __int64 v29[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(unsigned int *)(a2 + 16);
  v7 = *(_QWORD **)(v5 + 96);
  if ( v7 )
  {
    v8 = *((_DWORD *)v7 - 1);
    v28 = v8;
    if ( (unsigned int)v6 < v8 )
      goto LABEL_11;
    v9 = v6 + 1;
    if ( v8 >= (int)v6 + 1 )
    {
      v17 = *(_QWORD **)(v5 + 104);
      *((_DWORD *)v7 - 1) = v9;
      v7[v6] = a2;
      if ( !v17 )
        goto LABEL_21;
      goto LABEL_12;
    }
  }
  else
  {
    v9 = v6 + 1;
    if ( (_DWORD)v6 == -1 )
      goto LABEL_11;
    v26 = (_QWORD *)sub_186B270(0x18u);
    v28 = 0;
    v7 = v26 + 1;
    *v26 = 2;
    *(_QWORD *)(v5 + 96) = v26 + 1;
  }
  while ( 1 )
  {
    v14 = *((_DWORD *)v7 - 2);
    if ( v14 >= v9 )
      break;
    v10 = (3 * v14 + 1) >> 1;
    v11 = 8 * v10 + 8;
    v12 = v10;
    if ( 8 * v14 + 8 >= (unsigned int)v11 || v14 >= v10 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v29, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v29);
      sub_233E40((__int64)v29);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v13 = (unsigned int *)sub_186B300(v7 - 1, v11);
    v7 = v13 + 2;
    *(_QWORD *)(v5 + 96) = v13 + 2;
    *v13 = v12;
  }
  *((_DWORD *)v7 - 1) = v9;
  v15 = 8LL * v9;
  v16 = 8LL * v28;
  if ( v16 != v15 )
    memset(&v7[(unsigned __int64)v16 / 8], 0, v15 - v16);
LABEL_11:
  v17 = *(_QWORD **)(v5 + 104);
  v7[v6] = a2;
  if ( !v17 )
  {
LABEL_21:
    v27 = (_QWORD *)sub_186B270(0x18u);
    v17 = v27 + 1;
    *v27 = 2;
    result = 1;
    *(_QWORD *)(v5 + 104) = v17;
    v21 = v17;
    goto LABEL_14;
  }
LABEL_12:
  v18 = *((_DWORD *)v17 - 1);
  if ( v18 == *((_DWORD *)v17 - 2) )
  {
    v22 = (3 * v18 + 1) >> 1;
    v23 = 8 * v22 + 8;
    if ( 8 * v18 + 8 >= (unsigned int)v23 || v18 >= v22 )
    {
      v2 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v29, "Overflow encountered when expanding vector");
      *v2 = (char *)off_1C63128;
      sub_2333C0(v2 + 1, v29);
      sub_233E40((__int64)v29);
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v24 = (unsigned int *)sub_186B300(v17 - 1, v23);
    v25 = v24[1];
    v17 = v24 + 2;
    *(_QWORD *)(v5 + 104) = v24 + 2;
    *v24 = v22;
    LODWORD(v24) = v25;
    v21 = &v17[v25];
    result = (unsigned int)((_DWORD)v24 + 1);
  }
  else
  {
    v19 = v18;
    result = v18 + 1;
    v21 = &v17[v19];
  }
LABEL_14:
  *v21 = a2;
  *((_DWORD *)v17 - 1) = result;
  return result;
}

