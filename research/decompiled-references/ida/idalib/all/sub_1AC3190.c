void **__fastcall sub_1AC3190(void **a1, char **a2)
{
  void **result; // rax

  *a1 = a1 + 2;
  a1[1] = (void *)0x600000000LL;
  result = (void **)*((unsigned int *)a2 + 2);
  if ( (_DWORD)result )
    return sub_1AC2FD0(a1, a2);
  return result;
}
