void __fastcall sub_493C90(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *a1 = &off_2B2CB58;
  v2 = (void *)a1[19];
  if ( v2 )
  {
    a1[20] = 0;
    qfree(v2);
  }
  *a1 = &off_2B26160;
  merge_handler_dtr((int)a1);
  v3 = (void *)a1[12];
  if ( v3 )
  {
    a1[13] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    qfree(v4);
  }
  operator delete(a1, 0xB0u);
}
