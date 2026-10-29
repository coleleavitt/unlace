__int64 __fastcall sub_134BB0(_QWORD *a1)
{
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rbx
  __int64 v5; // rdi

  *a1 = off_2318C0;
  if ( a1[29] )
  {
    a1[30] = 0;
    qfree();
  }
  v2 = a1[27];
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
      qfree();
  }
  if ( a1[26] )
  {
    a1[27] = 0;
    qfree();
  }
  v4 = a1 + 22;
  *a1 = &stru_235898;
  do
  {
    v5 = *(v4 - 3);
    v4 -= 3;
    if ( v5 )
    {
      v4[1] = 0;
      qfree();
    }
  }
  while ( a1 + 10 != v4 );
  return qfree();
}

