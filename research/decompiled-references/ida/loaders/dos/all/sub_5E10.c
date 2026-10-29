__int64 __fastcall sub_5E10(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 80 * i);
        v6 = v5[6];
        if ( v6 )
        {
          v5[7] = 0;
          qfree(v6);
        }
        v7 = v5[3];
        if ( v7 )
        {
          v5[4] = 0;
          qfree(v7);
        }
        v8 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v8);
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}

