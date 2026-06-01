__int64 __fastcall sub_144E60(_QWORD *a1)
{
  _QWORD *v1; // rbx

  v1 = a1 + 19;
  *a1 = &stru_235898;
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

