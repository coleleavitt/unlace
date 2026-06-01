__int64 __fastcall sub_BB8310(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  __int64 v3; // rdx
  char **exception; // rbp
  __int64 v5; // rdx
  _QWORD *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rbp
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 result; // rax
  _QWORD *v19; // rdx
  unsigned int v20; // r12d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // r12d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rdx
  _DWORD *v28; // rdi
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v8 = *(_QWORD **)(a1 + 1048);
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    if ( v9 == *((_DWORD *)v8 - 2) )
    {
      v20 = (3 * v9 + 1) >> 1;
      v21 = 8 * v20 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v21 || v9 >= v20 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v31, "Overflow encountered when expanding vector", v5);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v31);
        sub_233E40((__int64)v31);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = (unsigned int *)sub_186B300(v8 - 1, v21);
      v23 = v22[1];
      v8 = v22 + 2;
      *v22 = v20;
      *(_QWORD *)(a1 + 1048) = v22 + 2;
      LODWORD(v22) = v23;
      v12 = &v8[v23];
      v11 = (_DWORD)v22 + 1;
    }
    else
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = &v8[v10];
    }
  }
  else
  {
    v29 = (_QWORD *)sub_186B270(0x18u);
    v8 = v29 + 1;
    *v29 = 2;
    v11 = 1;
    *(_QWORD *)(a1 + 1048) = v8;
    v12 = v8;
  }
  *v12 = a2;
  *((_DWORD *)v8 - 1) = v11;
  v13 = (_QWORD *)sub_180C100(a1 + 3960, 16);
  v14 = *(_QWORD **)(a1 + 3944);
  v15 = v13;
  *v13 = off_1C4DF80;
  v13[1] = a1 + 1040;
  if ( !v14 )
  {
    v30 = (_QWORD *)sub_186B270(0x18u);
    v14 = v30 + 1;
    *v30 = 2;
    result = 1;
    *(_QWORD *)(a1 + 3944) = v14;
    v19 = v14;
    goto LABEL_9;
  }
  v16 = *((_DWORD *)v14 - 1);
  if ( v16 != *((_DWORD *)v14 - 2) )
  {
    v17 = v16;
    result = v16 + 1;
    v19 = &v14[v17];
LABEL_9:
    *v19 = v15;
    *((_DWORD *)v14 - 1) = result;
    return result;
  }
  v24 = (3 * v16 + 1) >> 1;
  v25 = 8 * v24 + 8;
  if ( 8 * v16 + 8 >= (unsigned int)v25 || v16 >= v24 )
  {
    v2 = (char **)__cxa_allocate_exception(0x28u);
    sub_154526(v31, "Overflow encountered when expanding vector", v3);
    *v2 = (char *)off_1C63128;
    sub_2333C0(v2 + 1, v31);
    sub_233E40((__int64)v31);
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v26 = (unsigned int *)sub_186B300(v14 - 1, v25);
  v27 = v26[1];
  *v26 = v24;
  v28 = v26 + 2;
  *(_QWORD *)(a1 + 3944) = v26 + 2;
  result = (unsigned int)(v27 + 1);
  *(_QWORD *)&v28[2 * v27] = v15;
  *(v28 - 1) = result;
  return result;
}

