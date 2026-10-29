__int64 __fastcall sub_9C270(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  _QWORD *v6; // rbx

  *a1 = off_22E5C8;
  v2 = a1[8];
  if ( v2 )
  {
    v3 = a1[9];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = (_QWORD *)(v2 + v4);
        if ( *(_QWORD *)(v2 + v4 + 32) )
        {
          v6[5] = 0;
          qfree();
        }
        if ( v6[1] )
        {
          v6[2] = 0;
          qfree();
        }
        v2 = a1[8];
        v4 += 56;
      }
    }
    a1[9] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  return qfree();
}

