void __fastcall sub_44AF0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 i; // rbp
  __int64 *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi

  v2 = a1[172];
  if ( v2 )
  {
    a1[173] = 0;
    qfree(v2);
  }
  v3 = a1[169];
  if ( v3 )
  {
    a1[170] = 0;
    qfree(v3);
  }
  v4 = a1[166];
  if ( v4 )
  {
    a1[167] = 0;
    qfree(v4);
  }
  sub_3F920(a1 + 78);
  v5 = a1[75];
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = a1[72];
  if ( v6 )
  {
    a1[73] = 0;
    qfree(v6);
  }
  v7 = a1[36];
  if ( v7 )
  {
    v8 = a1[37];
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = (__int64 *)(v7 + 96 * i);
        v11 = v10[3];
        if ( v11 )
        {
          v10[4] = 0;
          qfree(v11);
        }
        v12 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v12);
        }
        v7 = a1[36];
      }
    }
    a1[37] = 0;
    qfree(v7);
  }
  v13 = a1[14];
  if ( v13 )
  {
    a1[15] = 0;
    qfree(v13);
  }
  v14 = a1[4];
  if ( v14 )
  {
    a1[5] = 0;
    qfree(v14);
  }
}

