__int64 __fastcall sub_509210(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdx
  int v7; // r14d
  __int64 v8; // rax
  _DWORD *v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  int v12; // r13d
  int v13; // ecx
  __int64 result; // rax
  int v15; // r12d
  unsigned int v16; // r13d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rax
  unsigned int v20; // ebp
  size_t v21; // rsi
  unsigned int *v22; // rax
  unsigned int v23; // r12d
  size_t v24; // rsi
  unsigned int *v25; // rax
  _QWORD *v26; // rax
  char **exception; // rbp
  __int64 v28[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *(_DWORD **)(a1 + 64);
  v7 = *(_DWORD *)(a2 + 16);
  if ( v6 )
  {
    v8 = (unsigned int)*(v6 - 1);
    if ( (_DWORD)v8 == *(v6 - 2) )
    {
      v16 = (unsigned int)(3 * v8 + 1) >> 1;
      v17 = 4 * v16 + 8;
      if ( 4 * (int)v8 + 8 >= (unsigned int)v17 || (unsigned int)v8 >= v16 )
        goto LABEL_17;
      v18 = (unsigned int *)sub_186B300(v6 - 2, v17);
      v6 = v18 + 2;
      *v18 = v16;
      v19 = v18[1];
      *(_QWORD *)(a1 + 64) = v6;
      v9 = &v6[v19];
    }
    else
    {
      v9 = &v6[v8];
    }
  }
  else
  {
    v26 = (_QWORD *)sub_186B270(0x10u);
    v6 = v26 + 1;
    *v26 = 2;
    *(_QWORD *)(a1 + 64) = v26 + 1;
    v9 = v26 + 1;
  }
  *v9 = v7;
  v10 = *(v6 - 1);
  v11 = (unsigned int)(v10 + 1);
  *(v6 - 1) = v11;
  v12 = *(_DWORD *)(a3 + 16);
  if ( *(v6 - 2) == (_DWORD)v11 )
  {
    v23 = (unsigned int)(3 * v11 + 1) >> 1;
    v24 = 4 * v23 + 8;
    if ( 4 * v10 + 12 >= (unsigned int)v24 || (unsigned int)v11 >= v23 )
      goto LABEL_17;
    v25 = (unsigned int *)sub_186B300(v6 - 2, v24);
    v6 = v25 + 2;
    *v25 = v23;
    v11 = v25[1];
    *(_QWORD *)(a1 + 64) = v6;
  }
  v6[v11] = v12;
  v13 = *(v6 - 1);
  result = (unsigned int)(v13 + 1);
  *(v6 - 1) = result;
  v15 = *(_DWORD *)(a4 + 16);
  if ( *(v6 - 2) == (_DWORD)result )
  {
    v20 = (unsigned int)(3 * result + 1) >> 1;
    v21 = 4 * v20 + 8;
    if ( 4 * v13 + 12 < (unsigned int)v21 && (unsigned int)result < v20 )
    {
      v22 = (unsigned int *)sub_186B300(v6 - 2, v21);
      v6 = v22 + 2;
      *v22 = v20;
      result = v22[1];
      *(_QWORD *)(a1 + 64) = v6;
      goto LABEL_6;
    }
LABEL_17:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v28, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v28);
    sub_233E40((__int64)v28);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
LABEL_6:
  v6[result] = v15;
  ++*(v6 - 1);
  *(_DWORD *)(a1 + 72) = 2;
  return result;
}

