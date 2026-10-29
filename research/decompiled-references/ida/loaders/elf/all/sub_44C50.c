void __fastcall sub_44C50(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 i; // r12
  __int64 *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi

  v2 = *(__int64 **)(a1 + 32);
  if ( v2 )
  {
    v3 = v2[172];
    if ( v3 )
    {
      v2[173] = 0;
      qfree(v3);
    }
    v4 = v2[169];
    if ( v4 )
    {
      v2[170] = 0;
      qfree(v4);
    }
    v5 = v2[166];
    if ( v5 )
    {
      v2[167] = 0;
      qfree(v5);
    }
    sub_3F920(v2 + 78);
    v6 = v2[75];
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = v2[72];
    if ( v7 )
    {
      v2[73] = 0;
      qfree(v7);
    }
    v8 = v2[36];
    if ( v8 )
    {
      v9 = v2[37];
      if ( v9 )
      {
        for ( i = 0; i != v9; ++i )
        {
          v11 = (__int64 *)(v8 + 96 * i);
          v12 = v11[3];
          if ( v12 )
          {
            v11[4] = 0;
            qfree(v12);
          }
          v13 = *v11;
          if ( *v11 )
          {
            v11[1] = 0;
            qfree(v13);
          }
          v8 = v2[36];
        }
      }
      v2[37] = 0;
      qfree(v8);
    }
    v14 = v2[14];
    if ( v14 )
    {
      v2[15] = 0;
      qfree(v14);
    }
    v15 = v2[4];
    if ( v15 )
    {
      v2[5] = 0;
      qfree(v15);
    }
    operator delete(v2, 0x578u);
  }
  *(_QWORD *)(a1 + 32) = 0;
}

