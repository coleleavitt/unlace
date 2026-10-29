unsigned int *__fastcall sub_B9B4D0(unsigned int **a1)
{
  char **exception; // rbx
  unsigned int *v3; // rdi
  unsigned int v4; // eax
  unsigned int v5; // ebp
  size_t v6; // rsi
  unsigned int *result; // rax
  _QWORD *v8; // rax
  char *v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v4 = *(v3 - 2);
    v5 = (3 * v4 + 1) >> 1;
    v6 = 8 * v5 + 8;
    if ( 8 * v4 + 8 >= (unsigned int)v6 || v4 >= v5 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_151CF2(v9);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v9);
      sub_233E40((__int64)v9);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    result = (unsigned int *)sub_186B300(v3 - 2, v6);
    *result = v5;
    *a1 = result + 2;
  }
  else
  {
    v8 = (_QWORD *)sub_186B270(0x18u);
    *v8 = 2;
    result = (unsigned int *)(v8 + 1);
    *a1 = result;
  }
  return result;
}

