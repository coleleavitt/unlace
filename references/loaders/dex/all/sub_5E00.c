void __fastcall sub_5E00(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = (_QWORD *)(v2 + v4);
        v7 = *(_QWORD *)(v2 + v4 + 64);
        if ( v7 )
        {
          v6[9] = 0;
          qfree(v7);
        }
        v8 = v6[5];
        if ( v8 )
        {
          v6[6] = 0;
          qfree(v8);
        }
        v9 = v6[2];
        if ( v9 )
        {
          v6[3] = 0;
          qfree(v9);
        }
        v2 = *a1;
        v4 += 88;
      }
    }
    a1[1] = 0;
    qfree(v2);
  }
}
