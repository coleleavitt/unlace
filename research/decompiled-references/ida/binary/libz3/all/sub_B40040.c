__int64 __fastcall sub_B40040(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int *v5; // rdi
  size_t v6; // rdx
  _DWORD *v7; // rax
  int v8; // edx
  __int64 result; // rax
  _QWORD *v10; // rax
  __int64 v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 40) = 0;
  if ( !v4 || *(_DWORD *)(v4 - 4) != 1 )
  {
    v5 = *(unsigned int **)(a1 + 64);
    if ( v5 )
      v6 = 4LL * *(v5 - 1);
    else
      v6 = 0;
    memset(v5, 0, v6);
    v7 = *(_DWORD **)(a1 + 56);
    if ( v7 )
    {
      v8 = *(v7 - 2);
      *(v7 - 1) = 0;
      if ( !v8 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v11, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v11);
        sub_233E40((__int64)v11);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    else
    {
      v10 = (_QWORD *)sub_186B270(0x10u);
      *v10 = 2;
      v7 = v10 + 1;
      *(_QWORD *)(a1 + 56) = v7;
    }
    ++*(v7 - 1);
    *v7 = -1;
  }
  result = *(_QWORD *)(a1 + 72);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

