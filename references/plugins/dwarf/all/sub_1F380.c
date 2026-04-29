void __fastcall sub_1F380(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 i; // rbx
  __int64 v6; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = *(_QWORD *)(v1 + v4 + 16);
        if ( v6 )
        {
          *(_QWORD *)(v1 + v4 + 24) = 0;
          qfree(v6);
          v1 = *a1;
        }
        v4 += 120;
      }
    }
    a1[1] = 0;
    qfree(v1);
  }
}
