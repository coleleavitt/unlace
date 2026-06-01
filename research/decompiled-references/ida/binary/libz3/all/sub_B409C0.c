_DWORD *__fastcall sub_B409C0(_QWORD *a1)
{
  char **v1; // rbp
  char **exception; // rbp
  __int64 v4; // rax
  unsigned int *v5; // rdi
  size_t v6; // rdx
  _DWORD *v7; // rax
  int v8; // ecx
  _DWORD *result; // rax
  unsigned int *v10; // rdi
  size_t v11; // rdx
  int v12; // edx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = a1[4];
  if ( !v4 || *(_DWORD *)(v4 - 4) != 1 )
  {
    v5 = (unsigned int *)a1[5];
    if ( v5 )
      v6 = 4LL * *(v5 - 1);
    else
      v6 = 0;
    memset(v5, 0, v6);
    v7 = (_DWORD *)a1[4];
    if ( v7 )
    {
      v8 = *(v7 - 2);
      *(v7 - 1) = 0;
      if ( !v8 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v15, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v15);
        sub_233E40((__int64)v15);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    else
    {
      v14 = (_QWORD *)sub_186B270(0x10u);
      *v14 = 2;
      v7 = v14 + 1;
      a1[4] = v7;
    }
    ++*(v7 - 1);
    *v7 = -1;
  }
  result = (_DWORD *)a1[7];
  if ( !result || *(result - 1) != 1 )
  {
    v10 = (unsigned int *)a1[8];
    if ( v10 )
      v11 = 4LL * *(v10 - 1);
    else
      v11 = 0;
    memset(v10, 0, v11);
    result = (_DWORD *)a1[7];
    if ( result )
    {
      v12 = *(result - 2);
      *(result - 1) = 0;
      if ( !v12 )
      {
        v1 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v15, "Overflow encountered when expanding vector");
        *v1 = (char *)off_1C63128;
        sub_2333C0(v1 + 1, v15);
        sub_233E40((__int64)v15);
        __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    else
    {
      v13 = (_QWORD *)sub_186B270(0x10u);
      *v13 = 2;
      result = v13 + 1;
      a1[7] = result;
    }
    ++*(result - 1);
    *result = -1;
  }
  return result;
}

