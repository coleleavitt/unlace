unsigned int *__fastcall sub_E0F880(unsigned int **a1)
{
  unsigned int *v2; // rdi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  size_t v5; // rsi
  unsigned int *result; // rax
  _QWORD *v7; // rax
  char **exception; // rbx
  __int64 v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v3 = *(v2 - 2);
    v4 = (3 * v3 + 1) >> 1;
    v5 = 8 * v4 + 8;
    if ( 8 * v3 + 8 >= (unsigned int)v5 || v3 >= v4 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_DF63A0(v9, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v9);
      sub_233E40((__int64)v9);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    result = (unsigned int *)sub_186B300(v2 - 2, v5);
    *result = v4;
    *a1 = result + 2;
  }
  else
  {
    v7 = (_QWORD *)sub_186B270(0x18u);
    *v7 = 2;
    result = (unsigned int *)(v7 + 1);
    *a1 = result;
  }
  return result;
}

