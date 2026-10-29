void __fastcall sub_60DCC0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  *a1 = &off_2B08F10;
  v2 = (void *)a1[22];
  if ( v2 )
  {
    a1[23] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[19];
  if ( v3 )
  {
    a1[20] = 0;
    qfree(v3);
  }
  *a1 = &off_2AFD020;
  merge_handler_dtr((int)a1);
  v4 = (void *)a1[12];
  if ( v4 )
  {
    a1[13] = 0;
    qfree(v4);
  }
  v5 = (void *)a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    qfree(v5);
  }
  operator delete(a1, 0xC8u);
}

