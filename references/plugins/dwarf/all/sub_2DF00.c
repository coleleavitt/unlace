__int64 __fastcall sub_2DF00(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi

  v2 = a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    result = qfree(v2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = (__int64 *)(v4 + v6);
        v9 = *(_QWORD *)(v4 + v6 + 24);
        if ( v9 )
        {
          v8[4] = 0;
          qfree(v9);
        }
        v10 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v10);
        }
        v4 = *a1;
        v6 += 56;
      }
    }
    a1[1] = 0;
    return qfree(v4);
  }
  return result;
}
