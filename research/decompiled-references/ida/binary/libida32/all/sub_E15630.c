__int64 __fastcall sub_E15630(const void **a1, const void **a2)
{
  size_t v2; // rbx
  size_t v3; // rbp
  const void *v4; // r14
  const void *v5; // r13
  size_t v6; // r12
  int v7; // eax
  int v9; // eax

  v2 = (size_t)a1[1];
  v3 = (size_t)a2[1];
  v4 = *a1;
  v5 = *a2;
  v6 = v3;
  if ( v2 <= v3 )
    v6 = (size_t)a1[1];
  if ( v6 )
  {
    v7 = memcmp(*a1, *a2, v6);
    if ( v7 )
    {
      if ( v7 < 0 )
        return 0xFFFFFFFFLL;
      v9 = memcmp(v5, v4, v6);
      if ( v9 )
        return v9 < 0;
      if ( v2 == v3 )
        return 0;
      return v2 > v3;
    }
  }
  if ( v2 != v3 )
  {
    if ( v2 < v3 )
      return 0xFFFFFFFFLL;
    if ( v6 )
    {
      v9 = memcmp(v5, v4, v6);
      if ( v9 )
        return v9 < 0;
    }
    return v2 > v3;
  }
  if ( !v2 )
    return 0;
  v9 = memcmp(v5, v4, v2);
  if ( v9 )
    return v9 < 0;
  return 0;
}

