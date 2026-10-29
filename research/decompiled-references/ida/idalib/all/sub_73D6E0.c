void *__fastcall sub_73D6E0(_WORD *a1, int a2, unsigned __int16 *a3)
{
  void *result; // rax

  result = memmove((char *)a1 + a2 + 2, a3 + 1, *a3 + *(unsigned __int16 *)((char *)a3 + *a3 + 2) + 2);
  *a1 = *a3 + a2;
  return result;
}
