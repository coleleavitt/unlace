void __fastcall sub_1B4AC0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi

  v2 = a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    qfree(v2);
  }
  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7);
          v3 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v3);
  }
}
