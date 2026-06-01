__int64 __fastcall sub_3F1350(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *(a1 - 2) = off_2B27170;
  *a1 = off_2B271B0;
  v2 = (void *)a1[19];
  if ( v2 )
  {
    a1[20] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[12];
  if ( v3 )
  {
    a1[13] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[3];
  *(a1 - 2) = &off_2BF9EE0;
  *a1 = &off_2BF9F20;
  if ( v4 )
  {
    a1[4] = 0;
    qfree(v4);
  }
  *(a1 - 2) = &off_2BF99C8;
  return remove_event_listener(a1 - 2);
}
