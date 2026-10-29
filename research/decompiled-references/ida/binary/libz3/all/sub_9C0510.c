_QWORD *__fastcall sub_9C0510(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  int v5; // ebx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _QWORD *result; // rax
  unsigned int v9; // r13d
  size_t v10; // rsi
  unsigned int *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  char **exception; // rbx
  __int64 v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = a4 | (2 * a2);
  v6 = *(_QWORD **)(a1 + 1040);
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
    {
      v9 = (unsigned int)(3 * v7 + 1) >> 1;
      v10 = 16 * v9 + 8;
      if ( 16 * (int)v7 + 8 >= (unsigned int)v10 || (unsigned int)v7 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v15, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v15);
        sub_233E40((__int64)v15);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = (unsigned int *)sub_186B300(v6 - 1, v10);
      v6 = v11 + 2;
      *v11 = v9;
      v12 = v11[1];
      *(_QWORD *)(a1 + 1040) = v6;
      result = &v6[2 * v12];
    }
    else
    {
      result = &v6[2 * v7];
    }
  }
  else
  {
    v13 = (_QWORD *)sub_186B270(0x28u);
    v6 = v13 + 1;
    *v13 = 2;
    *(_QWORD *)(a1 + 1040) = v13 + 1;
    result = v13 + 1;
  }
  *(_DWORD *)result = v5;
  result[1] = a3;
  ++*((_DWORD *)v6 - 1);
  return result;
}

