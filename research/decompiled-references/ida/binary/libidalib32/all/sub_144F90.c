__int64 __fastcall sub_144F90(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 i; // r12
  _QWORD *v6; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // rdi

  *a1 = off_238D90;
  v2 = a1[24];
  if ( v2 )
  {
    v3 = a1[25];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = (_QWORD *)(v2 + v4);
        if ( *(_QWORD *)(v2 + v4 + 24) )
        {
          v6[4] = 0;
          qfree();
        }
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
        }
        v2 = a1[24];
        v4 += 56;
      }
    }
    a1[25] = 0;
    qfree();
  }
  v7 = a1 + 22;
  *a1 = &stru_235898;
  do
  {
    v8 = *(v7 - 3);
    v7 -= 3;
    if ( v8 )
    {
      v7[1] = 0;
      qfree();
    }
  }
  while ( a1 + 10 != v7 );
  return qfree();
}

