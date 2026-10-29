__int64 __fastcall sub_21238F0(const void **a1, const void **a2)
{
  size_t v2; // rbx
  const void *v3; // rbp
  size_t v4; // rdx
  int v5; // eax
  __int64 result; // rax

  v2 = (size_t)a2[1];
  v3 = a1[1];
  v4 = v2;
  if ( (unsigned __int64)v3 <= v2 )
    v4 = (size_t)a1[1];
  if ( v4 )
  {
    v5 = memcmp(*a1, *a2, v4);
    if ( v5 )
      return (v5 >> 31) | 1u;
  }
  result = 0;
  if ( v3 != (const void *)v2 )
    return (unsigned __int64)v3 < v2 ? -1 : 1;
  return result;
}
