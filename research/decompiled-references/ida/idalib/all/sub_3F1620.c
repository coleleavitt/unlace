void __fastcall sub_3F1620(_QWORD *a1)
{
  _QWORD *v1; // rbp
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  v1 = a1 - 2;
  *(a1 - 2) = off_2B27170;
  *a1 = off_2B271B0;
  v3 = (void *)a1[19];
  if ( v3 )
  {
    a1[20] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[12];
  if ( v4 )
  {
    a1[13] = 0;
    qfree(v4);
  }
  v5 = (void *)a1[3];
  *(a1 - 2) = &off_2BF9EE0;
  *a1 = &off_2BF9F20;
  if ( v5 )
  {
    a1[4] = 0;
    qfree(v5);
  }
  *(a1 - 2) = &off_2BF99C8;
  remove_event_listener(v1);
  operator delete(v1, 0xF8u);
}
