void __fastcall sub_91E70(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  _QWORD *v6; // rbx

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
        if ( *(_QWORD *)(v2 + v4 + 144) )
        {
          v6[19] = 0;
          qfree();
        }
        if ( v6[15] )
        {
          v6[16] = 0;
          qfree();
        }
        if ( v6[12] )
        {
          v6[13] = 0;
          qfree();
        }
        if ( v6[9] )
        {
          v6[10] = 0;
          qfree();
        }
        if ( v6[6] )
        {
          v6[7] = 0;
          qfree();
        }
        if ( v6[3] )
        {
          v6[4] = 0;
          qfree();
        }
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
        }
        v2 = *a1;
        v4 += 168;
      }
    }
    a1[1] = 0;
    qfree();
  }
}

