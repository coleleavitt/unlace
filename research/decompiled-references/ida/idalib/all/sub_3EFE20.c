__int64 __fastcall sub_3EFE20(_QWORD *a1)
{
  void *v2; // rdi

  *(a1 - 2) = &off_2BF9EE0;
  *a1 = &off_2BF9F20;
  v2 = (void *)a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    qfree(v2);
  }
  *(a1 - 2) = &off_2BF99C8;
  return remove_event_listener(a1 - 2);
}
