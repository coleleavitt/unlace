void __fastcall sub_9EEC0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 j; // rbx
  __int64 v9; // rax

  v2 = a1[9];
  if ( v2 )
  {
    v3 = a1[10];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 32 * i;
        if ( *(_QWORD *)(v5 + 8) )
        {
          *(_QWORD *)(v5 + 16) = 0;
          qfree();
          v2 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree();
  }
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  v6 = a1[3];
  if ( v6 )
  {
    v7 = a1[4];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = v6 + 32 * j;
        if ( *(int *)v9 >= -1 && *(_QWORD *)(v9 + 8) )
        {
          *(_QWORD *)(v9 + 16) = 0;
          qfree();
          v6 = a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree();
  }
  if ( *a1 )
  {
    a1[1] = 0;
    qfree();
  }
}

