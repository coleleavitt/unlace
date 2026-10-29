void __fastcall sub_507CC0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_2AFD020;
  merge_handler_dtr((int)a1);
  v2 = (void *)a1[12];
  if ( v2 )
  {
    a1[13] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
  }
  operator delete(a1, 0xB8u);
}

