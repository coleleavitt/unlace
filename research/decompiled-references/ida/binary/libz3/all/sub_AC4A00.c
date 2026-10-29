void __fastcall sub_AC4A00(_QWORD *a1, unsigned int a2, unsigned __int8 a3)
{
  _DWORD *v5; // rcx
  unsigned int v6; // r14d
  unsigned int v7; // edx
  unsigned int v8; // ebx
  size_t v9; // rsi
  unsigned int *v10; // rax
  char *v11; // rdi
  char *v12; // rdx
  __int64 v13; // rax
  char **exception; // rbx
  __int64 v15; // rdx
  __int64 v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = (_DWORD *)*a1;
  if ( *a1 )
  {
    v6 = *(v5 - 1);
    if ( v6 >= a2 )
    {
      *(v5 - 1) = a2;
      return;
    }
    v7 = *(v5 - 2);
    if ( v7 < a2 )
      goto LABEL_4;
    *(v5 - 1) = a2;
    v11 = (char *)v5 + v6;
    v12 = (char *)v5 + a2;
LABEL_8:
    memset(v11, a3, v12 - v11);
    return;
  }
  if ( !a2 )
    return;
  v6 = 0;
  v13 = sub_186B270(0xAu);
  v7 = 2;
  v5 = (_DWORD *)(v13 + 8);
  *(_QWORD *)v13 = 2;
  *a1 = v13 + 8;
  if ( a2 <= 2 )
  {
    *(_DWORD *)(v13 + 4) = a2;
    v11 = (char *)(v13 + 8);
    v12 = (char *)v5 + a2;
    goto LABEL_8;
  }
  do
  {
LABEL_4:
    v8 = (3 * v7 + 1) >> 1;
    v9 = v8 + 8;
    if ( v7 + 8 >= (unsigned int)v9 || v7 >= v8 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_139F3A(v16, "Overflow encountered when expanding vector", v15);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v16);
      sub_233E40((__int64)v16);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300(v5 - 2, v9);
    v7 = v8;
    v5 = v10 + 2;
    *v10 = v8;
    *a1 = v10 + 2;
  }
  while ( v8 < a2 );
  v10[1] = a2;
  v11 = (char *)v5 + v6;
  v12 = (char *)v5 + a2;
  if ( a2 != v6 )
    goto LABEL_8;
}

