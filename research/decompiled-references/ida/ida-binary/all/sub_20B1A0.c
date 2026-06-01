void __fastcall sub_20B1A0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi

  v3 = a1[5];
  if ( v3 )
  {
    a1[6] = 0;
    qfree(v3, a2);
  }
  v4 = a1[2];
  if ( v4 )
  {
    v5 = a1[3];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)(v4 + 24 * i);
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v8, a2);
          v4 = a1[2];
        }
      }
    }
    a1[3] = 0;
    qfree(v4, a2);
  }
}
