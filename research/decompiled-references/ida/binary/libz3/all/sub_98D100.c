__int64 __fastcall sub_98D100(_QWORD *a1, unsigned int *a2)
{
  char **exception; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  _DWORD *v7; // rdx
  __int64 result; // rax
  unsigned int v9; // ebp
  size_t v10; // rsi
  unsigned int *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = (_QWORD *)*a1;
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    v7 = (_DWORD *)v5 + v6;
    if ( (_DWORD)v6 == *((_DWORD *)v5 - 2) )
    {
      v9 = (unsigned int)(3 * v6 + 1) >> 1;
      v10 = 4 * v9 + 8;
      if ( 4 * (int)v6 + 8 >= (unsigned int)v10 || (unsigned int)v6 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v14, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v14);
        sub_233E40((__int64)v14);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = (unsigned int *)sub_186B300(v5 - 1, v10);
      v5 = v11 + 2;
      *v11 = v9;
      v12 = v11[1];
      *a1 = v5;
      v7 = (_DWORD *)v5 + v12;
    }
  }
  else
  {
    v13 = (_QWORD *)sub_186B270(0x10u);
    v5 = v13 + 1;
    *v13 = 2;
    *a1 = v13 + 1;
    v7 = v13 + 1;
  }
  result = *a2;
  *v7 = result;
  ++*((_DWORD *)v5 - 1);
  return result;
}

