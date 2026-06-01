void __fastcall sub_168A30(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // r12
  __int64 j; // rbx

  v2 = a1 + 8;
  *v2 = &off_22E278;
  sub_8E960(v2);
  if ( a1[4] )
  {
    v3 = a1[5];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
        qfree();
    }
    a1[5] = 0;
    qfree();
  }
  if ( *a1 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      for ( j = 0; j != v5; ++j )
        qfree();
    }
    a1[1] = 0;
    qfree();
  }
}

