__int64 __fastcall sub_3DF0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rdi

  *(a1 - 13) = off_14CB8;
  *a1 = off_14CE8;
  if ( a1[35] )
  {
    a1[36] = 0;
    qfree();
  }
  v2 = a1 + 32;
  v3 = a1 + 8;
  while ( v3 != v2 )
  {
    while ( 1 )
    {
      v4 = *(v2 - 3);
      v2 -= 3;
      if ( !v4 )
        break;
      v2[1] = 0;
      qfree();
      if ( v3 == v2 )
        goto LABEL_7;
    }
  }
LABEL_7:
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  *a1 = &off_14D30;
  return remove_event_listener();
}
