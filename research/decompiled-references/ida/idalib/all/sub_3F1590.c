void __fastcall sub_3F1590(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *a1 = off_2B27170;
  a1[2] = off_2B271B0;
  v2 = (void *)a1[21];
  if ( v2 )
  {
    a1[22] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[14];
  if ( v3 )
  {
    a1[15] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[5];
  *a1 = &off_2BF9EE0;
  a1[2] = &off_2BF9F20;
  if ( v4 )
  {
    a1[6] = 0;
    qfree(v4);
  }
  *a1 = &off_2BF99C8;
  remove_event_listener(a1);
  operator delete(a1, 0xF8u);
}
