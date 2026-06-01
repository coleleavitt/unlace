void __fastcall sub_3F0420(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2BF9EE0;
  a1[2] = &off_2BF9F20;
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  *a1 = &off_2BF99C8;
  remove_event_listener(a1);
  operator delete(a1, 0x48u);
}
