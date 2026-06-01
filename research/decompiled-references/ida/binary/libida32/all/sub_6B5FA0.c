void __fastcall sub_6B5FA0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  if ( a1 )
  {
    v2 = (void *)a1[18];
    if ( v2 )
    {
      a1[19] = 0;
      qfree(v2);
    }
    v3 = (void *)a1[12];
    if ( v3 )
    {
      a1[13] = 0;
      qfree(v3);
    }
    v4 = (void *)a1[9];
    if ( v4 )
    {
      a1[10] = 0;
      qfree(v4);
    }
    a1[5] = &off_2BCFA28;
    remove_event_listener(a1 + 5);
    a1[2] = &off_2BCFA28;
    remove_event_listener(a1 + 2);
    operator delete(a1, 0xB0u);
  }
}

