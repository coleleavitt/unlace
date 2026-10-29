void *__fastcall sub_98ACA0(__int64 a1)
{
  unsigned int *v2; // rdi
  size_t v3; // rdx
  void *result; // rax

  v2 = *(unsigned int **)(a1 + 8);
  if ( v2 )
  {
    v3 = 4LL * *(v2 - 1);
    if ( v3 )
      result = memset(v2, 0, v3);
  }
  *(_DWORD *)a1 = 0;
  return result;
}

