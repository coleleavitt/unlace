__int64 __fastcall sub_9E80(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = off_195A0;
  v3 = a1[21];
  if ( v3 )
  {
    a1[22] = 0;
    qfree(v3, a2);
  }
  v4 = a1[17];
  if ( v4 )
  {
    a1[18] = 0;
    qfree(v4, a2);
  }
  *a1 = &off_19A50;
  remove_event_listener(a1);
  return qfree(a1, a2);
}
