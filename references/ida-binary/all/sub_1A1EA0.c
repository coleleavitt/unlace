void __fastcall sub_1A1EA0(__int64 *a1, const char *a2)
{
  volatile signed __int32 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbx
  __int64 *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi

  v3 = (volatile signed __int32 *)a1[8];
  if ( v3 && !_InterlockedSub(v3, 1u) )
    free((void *)a1[8]);
  v4 = a1[3];
  if ( v4 )
  {
    v5 = a1[4];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)(v4 + 40 * i);
        jvalue_t_clear(v7 + 3);
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v8, a2);
        }
        v4 = a1[3];
      }
    }
    a1[4] = 0;
    qfree(v4, a2);
  }
  v9 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    qfree(v9, a2);
  }
}
