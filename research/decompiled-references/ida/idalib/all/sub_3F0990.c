__int64 __fastcall sub_3F0990(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = off_2B26E78;
  a1[2] = off_2B26EB8;
  v2 = (void *)a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[5];
  *a1 = &off_2BF9EE0;
  a1[2] = &off_2BF9F20;
  if ( v3 )
  {
    a1[6] = 0;
    qfree(v3);
  }
  *a1 = &off_2BF99C8;
  return remove_event_listener(a1);
}
