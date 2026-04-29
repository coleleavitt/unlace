const char *__fastcall sub_3B8040(__int64 a1, __int64 *a2)
{
  const char *result; // rax
  const char *v3; // rbx
  size_t v4; // r12
  void *v5; // rdi
  const char *v6; // r13
  __int64 v7; // rax

  result = (const char *)sub_3A7A50(*(_DWORD *)(a1 + 40));
  if ( result && (v3 = result, result = (const char *)strlen(result), (v4 = (size_t)result) != 0) )
  {
    v5 = (void *)*a2;
    v6 = result + 1;
    if ( a2[2] < (unsigned __int64)(result + 1) )
    {
      v7 = qvector_reserve(a2, *a2, result + 1, 1);
      *a2 = v7;
      v5 = (void *)v7;
    }
    a2[1] = (__int64)v6;
    memmove(v5, v3, v4);
    result = (const char *)*a2;
    *(_BYTE *)(*a2 + v4) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  return result;
}
