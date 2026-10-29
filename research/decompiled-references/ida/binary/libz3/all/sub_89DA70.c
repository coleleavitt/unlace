_DWORD *__fastcall sub_89DA70(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  int v3; // r12d
  __int64 v4; // rax
  _QWORD *v5; // rdx
  int v6; // r13d
  __int64 v7; // rax
  _DWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  _DWORD *result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // edx
  unsigned int v17; // r14d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ebp
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  char **exception; // rbp
  __int64 v28; // rdx
  __int64 v29[9]; // [rsp+0h] [rbp-48h] BYREF

  sub_966D90();
  v1 = *(_QWORD *)(a1 + 352);
  v2 = *(_DWORD *)(a1 + 344);
  if ( v1 )
    v3 = *(_DWORD *)(v1 - 4);
  else
    v3 = 0;
  v4 = *(_QWORD *)(a1 + 256);
  if ( v4 )
  {
    v5 = *(_QWORD **)(a1 + 280);
    v6 = *(_DWORD *)(v4 - 4);
    if ( v5 )
      goto LABEL_5;
LABEL_21:
    v25 = (_QWORD *)sub_186B270(0x20u);
    v5 = v25 + 1;
    *v25 = 2;
    *(_QWORD *)(a1 + 280) = v25 + 1;
    v8 = v25 + 1;
    goto LABEL_7;
  }
  v5 = *(_QWORD **)(a1 + 280);
  v6 = 0;
  if ( !v5 )
    goto LABEL_21;
LABEL_5:
  v7 = *((unsigned int *)v5 - 1);
  if ( (_DWORD)v7 == *((_DWORD *)v5 - 2) )
  {
    v17 = (unsigned int)(3 * v7 + 1) >> 1;
    v18 = 4 * (v17 + ((3 * (_DWORD)v7 + 1) & 0xFFFFFFFE)) + 8;
    if ( 12 * (int)v7 + 8 >= (unsigned int)v18 || (unsigned int)v7 >= v17 )
      goto LABEL_26;
    v19 = (unsigned int *)sub_186B300(v5 - 1, v18);
    v5 = v19 + 2;
    *v19 = v17;
    v20 = v19[1];
    *(_QWORD *)(a1 + 280) = v5;
    v8 = (_DWORD *)v5 + 3 * v20;
  }
  else
  {
    v8 = (_DWORD *)v5 + 3 * v7;
  }
LABEL_7:
  *v8 = v6;
  v8[1] = v3;
  v8[2] = v2;
  ++*((_DWORD *)v5 - 1);
  v9 = *(_QWORD **)(a1 + 712);
  if ( v9 )
  {
    v10 = *((unsigned int *)v9 - 1);
    if ( (_DWORD)v10 != *((_DWORD *)v9 - 2) )
    {
      v11 = (_QWORD *)((char *)v9 + 12 * v10);
      goto LABEL_10;
    }
    v21 = (unsigned int)(3 * v10 + 1) >> 1;
    v22 = 4 * (v21 + ((3 * (_DWORD)v10 + 1) & 0xFFFFFFFE)) + 8;
    if ( 12 * (int)v10 + 8 < (unsigned int)v22 && (unsigned int)v10 < v21 )
    {
      v23 = (unsigned int *)sub_186B300(v9 - 1, v22);
      v9 = v23 + 2;
      *v23 = v21;
      v24 = v23[1];
      *(_QWORD *)(a1 + 712) = v9;
      v11 = (_QWORD *)((char *)v9 + 12 * v24);
      goto LABEL_10;
    }
LABEL_26:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_12D192(v29, "Overflow encountered when expanding vector", v28);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v29);
    sub_233E40((__int64)v29);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v26 = (_QWORD *)sub_186B270(0x20u);
  v9 = v26 + 1;
  *v26 = 2;
  *(_QWORD *)(a1 + 712) = v26 + 1;
  v11 = v26 + 1;
LABEL_10:
  *v11 = 0;
  *((_DWORD *)v11 + 2) = 0;
  v12 = *((unsigned int *)v9 - 1);
  *((_DWORD *)v9 - 1) = v12 + 1;
  result = (_DWORD *)v9 + 3 * v12;
  v14 = *(_QWORD *)(a1 + 664);
  if ( !v14 )
  {
    *result = 0;
    v15 = *(_QWORD *)(a1 + 672);
    if ( v15 )
      goto LABEL_12;
LABEL_23:
    v16 = 0;
    goto LABEL_13;
  }
  *result = *(_DWORD *)(v14 - 4);
  v15 = *(_QWORD *)(a1 + 672);
  if ( !v15 )
    goto LABEL_23;
LABEL_12:
  v16 = *(_DWORD *)(v15 - 4);
LABEL_13:
  result[1] = v16;
  result[2] = *(_DWORD *)(a1 + 680);
  return result;
}

