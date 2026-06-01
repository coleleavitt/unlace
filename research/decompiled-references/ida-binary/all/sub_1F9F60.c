const char *__fastcall sub_1F9F60(__int64 *a1, const char *a2)
{
  size_t v4; // rax
  size_t v5; // r12
  void *v6; // rdi
  size_t v7; // r13
  __int64 v8; // rax

  if ( *a2 )
  {
    if ( !a2 || (v4 = strlen(a2), (v5 = v4) == 0) )
    {
      a1[1] = 0;
      return &s1;
    }
    v6 = (void *)*a1;
    v7 = v4 + 1;
    if ( a1[2] < v4 + 1 )
    {
      v8 = qvector_reserve(a1, *a1, v4 + 1, 1);
      *a1 = v8;
      v6 = (void *)v8;
    }
    a1[1] = v7;
    memmove(v6, a2, v5);
    *(_BYTE *)(*a1 + v5) = 0;
  }
  else
  {
    sub_1F9E00(a1);
  }
  if ( a1[1] )
    return (const char *)*a1;
  return &s1;
}
