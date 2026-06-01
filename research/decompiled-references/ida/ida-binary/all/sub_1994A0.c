void __fastcall sub_1994A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi

  v5 = *a1;
  if ( *a1 )
  {
    v7 = a1[1];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v5 + 24 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10, a2, v5, a4, a5);
          v5 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v5, a2, v5, a4, a5);
  }
}
