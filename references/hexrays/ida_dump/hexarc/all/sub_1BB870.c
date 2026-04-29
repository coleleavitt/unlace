void __fastcall sub_1BB870(_QWORD *a1)
{
  __int64 *v2; // r12
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbx
  __int64 v6; // rax

  v2 = (__int64 *)a1[1];
  *a1 = off_4AB058;
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
    qfree(v2);
  }
  operator delete(a1, 0x20u);
}
