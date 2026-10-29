void __fastcall sub_D5810(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbp
  _QWORD *v4; // rax

  if ( a1 )
  {
    v1 = a1[21];
    if ( v1 )
    {
      v2 = a1[22];
      if ( v2 )
      {
        for ( i = 0; i != v2; ++i )
        {
          v4 = (_QWORD *)(v1 + 24 * i);
          if ( *v4 )
          {
            v4[1] = 0;
            qfree();
            v1 = a1[21];
          }
        }
      }
      a1[22] = 0;
      qfree();
    }
    if ( a1[18] )
    {
      a1[19] = 0;
      qfree();
    }
    qfree();
    qfree();
    qfree();
    qfree();
    qfree();
    qfree();
    qfree();
    qfree();
    qfree();
    operator delete(a1, 0xC0u);
  }
}
