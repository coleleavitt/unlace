__int64 __fastcall sub_125FD0(_QWORD *a1)
{
  _QWORD *v1; // rbx

  *a1 = off_232450;
  if ( a1[27] )
  {
    a1[28] = 0;
    qfree();
  }
  if ( a1[24] )
  {
    a1[25] = 0;
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

