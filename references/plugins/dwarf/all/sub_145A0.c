void __fastcall sub_145A0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi

  v2 = a1[1];
  *a1 = &off_C73E0;
  if ( v2 )
  {
    v3 = a1[2];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 24 * i);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6);
          v2 = a1[1];
        }
      }
    }
    a1[2] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x20u);
}
