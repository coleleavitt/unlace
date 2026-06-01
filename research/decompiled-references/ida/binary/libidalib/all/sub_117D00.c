__int64 __fastcall sub_117D00(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdi

  *a1 = off_231D58;
  if ( a1[26] )
  {
    a1[27] = 0;
    qfree();
  }
  v2 = a1[23];
  if ( v2 )
  {
    v3 = a1[24];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = a1[23];
        }
      }
    }
    a1[24] = 0;
    qfree();
  }
  v6 = a1 + 22;
  *a1 = &stru_236898;
  do
  {
    v7 = *(v6 - 3);
    v6 -= 3;
    if ( v7 )
    {
      v6[1] = 0;
      qfree();
    }
  }
  while ( a1 + 10 != v6 );
  return qfree();
}

