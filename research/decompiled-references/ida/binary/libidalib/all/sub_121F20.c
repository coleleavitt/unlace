__int64 __fastcall sub_121F20(_QWORD *a1)
{
  _QWORD *v1; // rbx

  *a1 = off_232030;
  if ( a1[28] )
  {
    a1[29] = 0;
    qfree();
  }
  if ( a1[25] )
  {
    a1[26] = 0;
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

