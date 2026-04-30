__int64 __fastcall sub_1AB190(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi

  v3 = a1[3];
  if ( v3 )
  {
    a1[4] = 0;
    result = qfree(v3, a2);
  }
  v5 = *a1;
  if ( *a1 )
  {
    v6 = a1[1];
    if ( v6 )
    {
      v7 = 0;
      for ( i = 0; i != v6; ++i )
      {
        v9 = (__int64 *)(v5 + v7);
        v10 = *(_QWORD *)(v5 + v7 + 24);
        if ( v10 )
        {
          v9[4] = 0;
          qfree(v10, a2);
        }
        v11 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v11, a2);
        }
        v5 = *a1;
        v7 += 56;
      }
    }
    a1[1] = 0;
    return qfree(v5, a2);
  }
  return result;
}
