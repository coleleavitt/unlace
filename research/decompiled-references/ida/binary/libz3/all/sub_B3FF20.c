_DWORD *__fastcall sub_B3FF20(__int64 a1)
{
  char **exception; // rbx
  _DWORD *result; // rax
  unsigned int *v4; // rdi
  size_t v5; // rdx
  int v6; // edx
  _QWORD *v7; // rax
  __int64 v8[7]; // [rsp+10h] [rbp-38h] BYREF

  result = *(_DWORD **)(a1 + 64);
  if ( !result || *(result - 1) != 1 )
  {
    v4 = *(unsigned int **)(a1 + 72);
    if ( v4 )
      v5 = 4LL * *(v4 - 1);
    else
      v5 = 0;
    memset(v4, 0, v5);
    result = *(_DWORD **)(a1 + 64);
    if ( result )
    {
      v6 = *(result - 2);
      *(result - 1) = 0;
      if ( !v6 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v8, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v8);
        sub_233E40((__int64)v8);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    else
    {
      v7 = (_QWORD *)sub_186B270(0x10u);
      *v7 = 2;
      result = v7 + 1;
      *(_QWORD *)(a1 + 64) = result;
    }
    ++*(result - 1);
    *result = -1;
  }
  return result;
}

