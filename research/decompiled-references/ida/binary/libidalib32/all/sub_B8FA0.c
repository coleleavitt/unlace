void __fastcall sub_B8FA0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 i; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = a1[1];
    if ( v2 )
    {
      v3 = 0;
      for ( i = 0; i != v2; ++i )
      {
        if ( *(_QWORD *)(v1 + v3) )
        {
          *(_QWORD *)(v1 + v3 + 8) = 0;
          qfree();
          v1 = *a1;
        }
        v3 += 56;
      }
    }
    a1[1] = 0;
    qfree();
  }
}

