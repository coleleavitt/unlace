__int64 __fastcall sub_A80E70(_QWORD *a1, unsigned int *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  _DWORD *v6; // rdx
  __int64 result; // rax
  unsigned int v8; // ebp
  size_t v9; // rsi
  unsigned int *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  char **exception; // rbx
  char *v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = (_QWORD *)*a1;
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    v6 = (_DWORD *)v4 + v5;
    if ( (_DWORD)v5 == *((_DWORD *)v4 - 2) )
    {
      v8 = (unsigned int)(3 * v5 + 1) >> 1;
      v9 = 4 * v8 + 8;
      if ( 4 * (int)v5 + 8 >= (unsigned int)v9 || (unsigned int)v5 >= v8 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_137C7A(v14);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v14);
        sub_233E40((__int64)v14);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v10 = (unsigned int *)sub_186B300(v4 - 1, v9);
      v4 = v10 + 2;
      *v10 = v8;
      v11 = v10[1];
      *a1 = v4;
      v6 = (_DWORD *)v4 + v11;
    }
  }
  else
  {
    v12 = (_QWORD *)sub_186B270(0x10u);
    v4 = v12 + 1;
    *v12 = 2;
    *a1 = v12 + 1;
    v6 = v12 + 1;
  }
  result = *a2;
  *v6 = result;
  ++*((_DWORD *)v4 - 1);
  return result;
}

