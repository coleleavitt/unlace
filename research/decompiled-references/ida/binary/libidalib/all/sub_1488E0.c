__int64 __fastcall sub_1488E0(_QWORD *a1)
{
  _QWORD *v1; // rbx

  *a1 = off_234878;
  if ( a1[32] )
  {
    a1[33] = 0;
    qfree();
  }
  if ( a1[29] )
  {
    a1[30] = 0;
    qfree();
  }
  if ( a1[26] )
  {
    a1[27] = 0;
    qfree();
  }
  v1 = a1 + 19;
  *a1 = &stru_236898;
  do
  {
    if ( *v1 )
    {
      v1[1] = 0;
      qfree();
    }
    v1 -= 3;
  }
  while ( v1 != a1 + 7 );
  return qfree();
}

