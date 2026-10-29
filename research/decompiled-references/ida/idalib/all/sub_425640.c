void __fastcall sub_425640(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2B28308;
  unbind_event_source_all();
  v2 = (void *)a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
  }
}
