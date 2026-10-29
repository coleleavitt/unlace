_DWORD *__fastcall sub_8EBCF0(__int64 a1, int a2, int a3, int a4)
{
  char **exception; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _DWORD *result; // rax
  unsigned int v11; // r14d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v8 = *(_QWORD **)(a1 + 8768);
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v9 == *((_DWORD *)v8 - 2) )
    {
      v11 = (unsigned int)(3 * v9 + 1) >> 1;
      v12 = 4 * (v11 + ((3 * (_DWORD)v9 + 1) & 0xFFFFFFFE)) + 8;
      if ( 12 * (int)v9 + 8 >= (unsigned int)v12 || (unsigned int)v9 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v16, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v8 - 1, v12);
      v8 = v13 + 2;
      *v13 = v11;
      v14 = v13[1];
      *(_QWORD *)(a1 + 8768) = v8;
      result = (_DWORD *)v8 + 3 * v14;
    }
    else
    {
      result = (_DWORD *)v8 + 3 * v9;
    }
  }
  else
  {
    v15 = (_QWORD *)sub_186B270(0x20u);
    v8 = v15 + 1;
    *v15 = 2;
    *(_QWORD *)(a1 + 8768) = v15 + 1;
    result = v15 + 1;
  }
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  ++*((_DWORD *)v8 - 1);
  return result;
}

