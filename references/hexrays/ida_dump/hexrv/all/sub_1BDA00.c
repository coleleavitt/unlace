__int64 (__fastcall **__fastcall sub_1BDA00(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 *v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax

  result = off_4B1298;
  v2 = (__int64 *)a1[1];
  *a1 = off_4B1298;
  if ( v2 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      v4 = v2[1];
      if ( v4 )
      {
        for ( i = 0; i != v4; ++i )
        {
          v6 = 3 * i;
          cleanup_argloc(v3 + 8 * v6);
          v3 = *v2;
        }
      }
      v2[1] = 0;
      qfree(v3);
    }
    return (__int64 (__fastcall **)())qfree(v2);
  }
  return result;
}
