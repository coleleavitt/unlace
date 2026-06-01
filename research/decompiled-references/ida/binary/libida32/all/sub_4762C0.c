void __fastcall sub_4762C0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *a1 = &unk_2BD0E38;
  v2 = (void *)a1[19];
  if ( v2 )
  {
    a1[20] = 0;
    qfree(v2);
  }
  *a1 = &off_2AFD020;
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
}

