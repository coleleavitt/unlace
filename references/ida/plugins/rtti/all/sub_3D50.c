__int64 __fastcall sub_3D50(_QWORD *a1)
{
  _QWORD *v1; // rbx

  *a1 = off_14CB8;
  a1[13] = off_14CE8;
  if ( a1[48] )
  {
    a1[49] = 0;
    qfree();
  }
  v1 = a1 + 42;
  do
  {
    if ( *v1 )
    {
      v1[1] = 0;
      qfree();
    }
    v1 -= 3;
  }
  while ( v1 != a1 + 18 );
  if ( a1[15] )
  {
    a1[16] = 0;
    qfree();
  }
  a1[13] = &off_14D30;
  return remove_event_listener();
}
