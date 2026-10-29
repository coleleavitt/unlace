__int64 __fastcall sub_9C7970(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  _QWORD *v8; // rdx
  __int64 v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 result; // rax
  _QWORD *v16; // rdx
  unsigned int v17; // r12d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // ebx
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rdx
  _DWORD *v25; // rdi
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  char **exception; // rbp
  __int64 v29[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD **)(a1 + 560);
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 - 1);
    if ( v5 == *((_DWORD *)v4 - 2) )
    {
      v17 = (3 * v5 + 1) >> 1;
      v18 = 8 * v17 + 8;
      if ( 8 * v5 + 8 >= (unsigned int)v18 || v5 >= v17 )
        goto LABEL_16;
      v19 = (unsigned int *)sub_186B300(v4 - 1, v18);
      v20 = v19[1];
      v4 = v19 + 2;
      *v19 = v17;
      *(_QWORD *)(a1 + 560) = v19 + 2;
      LODWORD(v19) = v20;
      v8 = &v4[v20];
      v7 = (_DWORD)v19 + 1;
    }
    else
    {
      v6 = v5;
      v7 = v5 + 1;
      v8 = &v4[v6];
    }
  }
  else
  {
    v26 = (_QWORD *)sub_186B270(0x18u);
    v4 = v26 + 1;
    *v26 = 2;
    v7 = 1;
    *(_QWORD *)(a1 + 560) = v4;
    v8 = v4;
  }
  v9 = *(_QWORD *)(a1 + 16);
  *v8 = a2;
  *((_DWORD *)v4 - 1) = v7;
  v10 = (_QWORD *)sub_180C100(v9 + 8400, 16);
  v11 = *(_QWORD **)(v9 + 9456);
  v12 = v10;
  *v10 = off_1C54DF0;
  v10[1] = a1 + 560;
  if ( !v11 )
  {
    v27 = (_QWORD *)sub_186B270(0x18u);
    v11 = v27 + 1;
    *v27 = 2;
    result = 1;
    *(_QWORD *)(v9 + 9456) = v11;
    v16 = v11;
    goto LABEL_7;
  }
  v13 = *((_DWORD *)v11 - 1);
  if ( v13 != *((_DWORD *)v11 - 2) )
  {
    v14 = v13;
    result = v13 + 1;
    v16 = &v11[v14];
LABEL_7:
    *v16 = v12;
    *((_DWORD *)v11 - 1) = result;
    return result;
  }
  v21 = (3 * v13 + 1) >> 1;
  v22 = 8 * v21 + 8;
  if ( 8 * v13 + 8 >= (unsigned int)v22 || v13 >= v21 )
  {
LABEL_16:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(v29, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v29);
    sub_233E40((__int64)v29);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v23 = (unsigned int *)sub_186B300(v11 - 1, v22);
  v24 = v23[1];
  v25 = v23 + 2;
  *(_QWORD *)(v9 + 9456) = v23 + 2;
  *v23 = v21;
  result = (unsigned int)(v24 + 1);
  *(_QWORD *)&v25[2 * v24] = v12;
  *(v25 - 1) = result;
  return result;
}

