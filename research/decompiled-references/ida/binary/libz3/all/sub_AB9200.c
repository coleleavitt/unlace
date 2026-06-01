unsigned int *__fastcall sub_AB9200(__int64 a1, unsigned int a2, unsigned int a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  int v5; // ebp
  _QWORD *v8; // r13
  _QWORD *v9; // rdx
  __int64 v10; // rax
  unsigned int *result; // rax
  unsigned int v12; // r14d
  size_t v13; // rsi
  unsigned int *v14; // rax
  _QWORD *v15; // rax
  __int64 v16[9]; // [rsp+0h] [rbp-48h] BYREF

  LOBYTE(v5) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 504) + 8LL * a2) + 4LL * a3) == dword_1C7ECF4;
  v8 = (_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * a2);
  v9 = (_QWORD *)*v8;
  if ( *v8 )
  {
    v10 = *((unsigned int *)v9 - 1);
    if ( (_DWORD)v10 == *((_DWORD *)v9 - 2) )
    {
      v12 = (unsigned int)(3 * v10 + 1) >> 1;
      v13 = 8 * v12 + 8;
      if ( 8 * (int)v10 + 8 >= (unsigned int)v13 || (unsigned int)v10 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_139F3A(v16, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v9 - 1, v13);
      v9 = v14 + 2;
      *v8 = v14 + 2;
      *v14 = v12;
      result = &v14[2 * v14[1] + 2];
    }
    else
    {
      result = (unsigned int *)&v9[v10];
    }
  }
  else
  {
    v15 = (_QWORD *)sub_186B270(0x18u);
    v9 = v15 + 1;
    *v15 = 2;
    *v8 = v15 + 1;
    result = (unsigned int *)(v15 + 1);
  }
  *result = a2;
  result[1] = a3 & 0x7FFFFFFF | (v5 << 31);
  ++*((_DWORD *)v9 - 1);
  return result;
}

