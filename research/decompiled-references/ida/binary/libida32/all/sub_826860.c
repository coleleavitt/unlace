__int64 __fastcall sub_826860(__int64 a1, __int64 *a2, __int64 a3)
{
  const char *v3; // rax
  const char *v4; // rbp
  size_t v5; // rax
  size_t v6; // r12
  void *v8; // rdi
  void *v9; // rdi
  size_t v10; // r13
  __int64 v11; // rax

  v3 = (const char *)(*(__int64 (__fastcall **)(__int64 *, __int64))(a1 + 8))(a2, a3);
  if ( !v3 )
    return 1;
  v4 = v3;
  if ( v3 == (const char *)-1LL )
  {
    v8 = (void *)*a2;
    if ( *a2 )
    {
      a2[1] = 0;
      qfree(v8);
      *a2 = 0;
      a2[2] = 0;
    }
  }
  else
  {
    v5 = strlen(v3);
    v6 = v5;
    if ( v5 )
    {
      v9 = (void *)*a2;
      v10 = v5 + 1;
      if ( a2[2] < v5 + 1 )
      {
        v11 = qvector_reserve(a2, *a2, v5 + 1, 1);
        *a2 = v11;
        v9 = (void *)v11;
      }
      a2[1] = v10;
      memmove(v9, v4, v6);
      *(_BYTE *)(*a2 + v6) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  return 0;
}

