void __fastcall sub_1AE330(_QWORD *a1)
{
  char *v1; // r12
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi

  if ( a1 )
  {
    v1 = (char *)(a1 + 15);
    v3 = a1 + 45;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v3[1] = 0;
        qfree(v4);
      }
      v3 -= 3;
    }
    while ( v3 != (__int64 *)v1 );
    v5 = a1[14];
    if ( v5 )
    {
      a1[15] = 0;
      qfree(v5);
    }
    v6 = a1[10];
    a1[5] = &off_4DE3F8;
    if ( v6 )
    {
      v7 = a1[11];
      if ( v7 )
      {
        for ( i = 0; i != v7; ++i )
        {
          v9 = (__int64 *)(v6 + 24 * i);
          v10 = *v9;
          if ( *v9 )
          {
            v9[1] = 0;
            qfree(v10);
            v6 = a1[10];
          }
        }
      }
      a1[11] = 0;
      qfree(v6);
    }
    v11 = a1[6];
    a1[5] = &off_4E3638;
    if ( v11 )
    {
      a1[7] = 0;
      qfree(v11);
    }
    v12 = a1[1];
    if ( v12 )
    {
      a1[2] = 0;
      qfree(v12);
    }
    sub_319EC0(a1);
    operator delete(a1, 0x188u);
  }
}
