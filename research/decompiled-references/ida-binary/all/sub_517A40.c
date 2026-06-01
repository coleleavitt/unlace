unsigned __int64 __fastcall sub_517A40(__int64 a1, const char **a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbx
  const char *v7; // rbp
  size_t v9; // rax
  size_t v10; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  if ( a3 < 0 )
  {
    a3 += v3;
    if ( a3 < 0 )
      a3 = 0;
  }
  if ( a3 >= v3 )
    return -1;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v4 + 24 * v3;
  v6 = v4 + 24 * a3;
  if ( 24 * v3 == 24 * a3 )
    return -1;
  v7 = *a2;
  if ( *a2 )
  {
    while ( 1 )
    {
      if ( *v7 )
      {
        v9 = strlen(v7 + 1);
        v10 = *(_QWORD *)(v6 + 16);
        if ( v10 == v9 + 1 && !memcmp(*(const void **)(v6 + 8), v7, v10) )
          return 0xAAAAAAAAAAAAAAABLL * ((v6 - v4) >> 3);
      }
      else if ( !*(_QWORD *)(v6 + 16) )
      {
        return 0xAAAAAAAAAAAAAAABLL * ((v6 - v4) >> 3);
      }
      v6 += 24;
      if ( v5 == v6 )
        return -1;
    }
  }
  while ( *(_QWORD *)(v6 + 16) )
  {
    v6 += 24;
    if ( v5 == v6 )
      return -1;
  }
  return 0xAAAAAAAAAAAAAAABLL * ((v6 - v4) >> 3);
}
