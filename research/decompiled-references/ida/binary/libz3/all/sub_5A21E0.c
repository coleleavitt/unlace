unsigned int *__fastcall sub_5A21E0(unsigned int **a1, unsigned int *a2)
{
  unsigned int *result; // rax
  __int64 v3; // rdx

  result = *a1;
  if ( !*a1 || (v3 = *(result - 1), (_DWORD)v3 == *(result - 2)) )
  {
    sub_2FD3F0(a1);
    result = *a1;
    v3 = *(*a1 - 1);
  }
  result[v3] = *a2;
  ++*(result - 1);
  return result;
}

