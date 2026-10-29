char *__fastcall sub_1AE86A0(__int64 a1, unsigned __int64 a2)
{
  char *v3; // rdi
  char *result; // rax

  if ( *(unsigned int *)(a1 + 12) < a2 )
    sub_2237220(a1, a1 + 16, a2, 8);
  v3 = (char *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  result = (char *)(*(_QWORD *)a1 + 8 * a2);
  if ( v3 != result )
    result = (char *)memset(v3, 0, 8 * ((unsigned __int64)(result - 8 - v3) >> 3) + 8);
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
