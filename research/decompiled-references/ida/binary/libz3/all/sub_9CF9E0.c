unsigned __int64 __fastcall sub_9CF9E0(__int64 a1)
{
  __int64 v2; // rax
  unsigned int *v3; // rdi
  size_t v4; // rdx
  _DWORD *v5; // rax
  int v6; // edx
  __int64 v7; // rax
  unsigned __int64 result; // rax
  unsigned int *v9; // rdi
  size_t v10; // rdx
  _QWORD *v11; // rax
  char **exception; // rbx
  __int64 v13[7]; // [rsp+0h] [rbp-38h] BYREF

  sub_99BD00(a1);
  v2 = *(_QWORD *)(a1 + 800);
  if ( !v2 || *(_DWORD *)(v2 - 4) != 1 )
  {
    v3 = *(unsigned int **)(a1 + 808);
    if ( v3 )
      v4 = 4LL * *(v3 - 1);
    else
      v4 = 0;
    memset(v3, 0, v4);
    v5 = *(_DWORD **)(a1 + 800);
    if ( v5 )
    {
      v6 = *(v5 - 2);
      *(v5 - 1) = 0;
      if ( !v6 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v13, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v13);
        sub_233E40((__int64)v13);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    else
    {
      v11 = (_QWORD *)sub_186B270(0x10u);
      *v11 = 2;
      v5 = v11 + 1;
      *(_QWORD *)(a1 + 800) = v5;
    }
    ++*(v5 - 1);
    *v5 = -1;
  }
  v7 = *(_QWORD *)(a1 + 864);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  result = (unsigned int)(*(_DWORD *)(a1 + 872) + 1);
  *(_DWORD *)(a1 + 872) = result;
  if ( (_DWORD)result == -1 )
  {
    v9 = *(unsigned int **)(a1 + 880);
    if ( v9 )
    {
      v10 = 4LL * *(v9 - 1);
      if ( v10 )
        result = (unsigned __int64)memset(v9, 0, v10);
    }
    *(_DWORD *)(a1 + 872) = 0;
  }
  return result;
}

