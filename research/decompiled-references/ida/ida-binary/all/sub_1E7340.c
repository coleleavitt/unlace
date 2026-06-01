__int64 __fastcall sub_1E7340(__int64 *a1, const char *a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi

  result = linearray_t_dtr();
  v4 = a1[6];
  if ( v4 )
  {
    a1[7] = 0;
    result = qfree(v4, a2);
  }
  v5 = *a1;
  if ( *a1 )
  {
    v6 = a1[1];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 24 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9, a2);
          v5 = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree(v5, a2);
  }
  return result;
}
