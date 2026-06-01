void __fastcall sub_411C50(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2AFE348;
  unbind_event_source_all();
  v2 = (void *)a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
  }
}

