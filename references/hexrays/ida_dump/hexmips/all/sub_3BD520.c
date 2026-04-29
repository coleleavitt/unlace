void __fastcall sub_3BD520(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v1 + 40 * i;
        v6 = *(_QWORD *)(v5 + 16);
        if ( v6 )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree(v6);
          v1 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v1);
  }
}
