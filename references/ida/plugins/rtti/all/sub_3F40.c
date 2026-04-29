__int64 __fastcall sub_3F40(_QWORD *a1)
{
  _QWORD *v1; // rbx

  *(a1 - 13) = off_14CB8;
  *a1 = off_14CE8;
  if ( a1[35] )
  {
    a1[36] = 0;
    qfree();
  }
  v1 = a1 + 29;
  do
  {
    if ( *v1 )
    {
      v1[1] = 0;
      qfree();
    }
    v1 -= 3;
  }
  while ( v1 != a1 + 5 );
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  *a1 = &off_14D30;
  remove_event_listener();
  return qfree();
}
