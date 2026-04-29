__int64 __fastcall sub_65FC0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 j; // rbp
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi

  *a1 = off_4D6208;
  v2 = a1[88];
  if ( v2 )
  {
    a1[89] = 0;
    qfree(v2);
  }
  v3 = a1[85];
  a1[66] = off_4E7B78;
  if ( v3 )
  {
    a1[86] = 0;
    qfree(v3);
  }
  v4 = a1[81];
  if ( v4 )
  {
    a1[82] = 0;
    qfree(v4);
  }
  v5 = a1[78];
  if ( v5 )
  {
    a1[79] = 0;
    qfree(v5);
  }
  v6 = a1[75];
  if ( v6 )
  {
    v7 = a1[76];
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
          v6 = a1[75];
        }
      }
    }
    a1[76] = 0;
    qfree(v6);
  }
  v11 = a1[72];
  if ( v11 )
  {
    v12 = a1[73];
    if ( v12 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v14 = (__int64 *)(v11 + 24 * j);
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v15);
          v11 = a1[72];
        }
      }
    }
    a1[73] = 0;
    qfree(v11);
  }
  v16 = a1[67];
  a1[66] = &unk_4E86E8;
  if ( v16 )
  {
    a1[68] = 0;
    qfree(v16);
  }
  return sub_336E80(a1);
}
