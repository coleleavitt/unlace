__int64 __fastcall sub_A810F0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r13
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // r12
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  _QWORD *v11; // rcx
  _QWORD *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 result; // rax
  _QWORD *v16; // rdx
  unsigned int v17; // r14d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r12d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  char **exception; // rbp
  char *v28[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(*a1 + 16LL);
  v5 = (_QWORD *)sub_180C100(v4 + 8400, 16);
  v6 = *(_QWORD **)(v4 + 9456);
  v7 = v5;
  *v5 = off_1C55478;
  v5[1] = a1 + 23;
  if ( v6 )
  {
    v8 = *((_DWORD *)v6 - 1);
    if ( v8 == *((_DWORD *)v6 - 2) )
    {
      v17 = (3 * v8 + 1) >> 1;
      v18 = 8 * v17 + 8;
      if ( 8 * v8 + 8 >= (unsigned int)v18 || v8 >= v17 )
        goto LABEL_16;
      v19 = (unsigned int *)sub_186B300(v6 - 1, v18);
      v20 = v19[1];
      v6 = v19 + 2;
      *(_QWORD *)(v4 + 9456) = v19 + 2;
      *v19 = v17;
      LODWORD(v19) = v20;
      v11 = &v6[v20];
      v10 = (_DWORD)v19 + 1;
    }
    else
    {
      v9 = v8;
      v10 = v8 + 1;
      v11 = &v6[v9];
    }
  }
  else
  {
    v25 = (_QWORD *)sub_186B270(0x18u);
    v6 = v25 + 1;
    *v25 = 2;
    v10 = 1;
    *(_QWORD *)(v4 + 9456) = v6;
    v11 = v6;
  }
  v12 = (_QWORD *)a1[23];
  *v11 = v7;
  *((_DWORD *)v6 - 1) = v10;
  if ( !v12 )
  {
    v26 = (_QWORD *)sub_186B270(0x18u);
    v12 = v26 + 1;
    *v26 = 2;
    result = 1;
    a1[23] = v12;
    v16 = v12;
    goto LABEL_7;
  }
  v13 = *((_DWORD *)v12 - 1);
  if ( v13 == *((_DWORD *)v12 - 2) )
  {
    v21 = (3 * v13 + 1) >> 1;
    v22 = 8 * v21 + 8;
    if ( 8 * v13 + 8 < (unsigned int)v22 && v13 < v21 )
    {
      v23 = (unsigned int *)sub_186B300(v12 - 1, v22);
      v24 = v23[1];
      v12 = v23 + 2;
      *v23 = v21;
      a1[23] = v23 + 2;
      LODWORD(v23) = v24;
      v16 = &v12[v24];
      result = (unsigned int)((_DWORD)v23 + 1);
      goto LABEL_7;
    }
LABEL_16:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_137C7A(v28);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v28);
    sub_233E40((__int64)v28);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v14 = v13;
  result = v13 + 1;
  v16 = &v12[v14];
LABEL_7:
  *v16 = a2;
  *((_DWORD *)v12 - 1) = result;
  return result;
}

