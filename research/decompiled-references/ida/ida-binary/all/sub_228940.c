void __fastcall sub_228940(__int64 *a1, const char *a2)
{
  __int64 v2; // rdx
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 i; // rbx
  __int64 v7; // rdi

  v2 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = *(_QWORD *)(v2 + v5);
        if ( v7 )
        {
          *(_QWORD *)(v2 + v5 + 8) = 0;
          qfree(v7, a2);
          v2 = *a1;
        }
        v5 += 56;
      }
    }
    a1[1] = 0;
    qfree(v2, a2);
  }
}
