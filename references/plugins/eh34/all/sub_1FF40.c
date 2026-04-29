void __fastcall sub_1FF40(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 j; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 40 * i;
        v6 = *(_QWORD *)(v5 + 16);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v5 + 24);
          if ( v7 )
          {
            for ( j = 0; j != v7; ++j )
            {
              v9 = v6 + 72 * j;
              v10 = *(_QWORD *)(v9 + 32);
              if ( v10 )
              {
                *(_QWORD *)(v9 + 40) = 0;
                qfree(v10);
                v6 = *(_QWORD *)(v5 + 16);
              }
            }
          }
          *(_QWORD *)(v5 + 24) = 0;
          qfree(v6);
          v2 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v2);
  }
}
