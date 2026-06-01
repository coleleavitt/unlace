void __fastcall sub_3F0A80(_QWORD *a1)
{
  _QWORD *v1; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v1 = a1 - 2;
  *(a1 - 2) = off_2B26D18;
  *a1 = off_2B26D58;
  v3 = (void *)a1[6];
  if ( v3 )
  {
    a1[7] = 0;
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
  remove_event_listener(v1);
  operator delete(v1, 0x58u);
}
