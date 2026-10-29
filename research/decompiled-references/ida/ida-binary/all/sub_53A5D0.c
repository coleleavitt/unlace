void __fastcall sub_53A5D0(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 *v6; // rbx
  volatile signed __int32 *v7; // rax
  __int64 v8; // rdi

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 48 * i);
        v7 = (volatile signed __int32 *)v6[3];
        if ( v7 && !_InterlockedSub(v7, 1u) )
          free((void *)v6[3]);
        v8 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v8, a2);
        }
        v3 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v3, a2);
  }
}
