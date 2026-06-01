void __fastcall sub_44EE40(_QWORD *a1)
{
  void **v1; // r12
  void **v2; // rbp
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi

  v1 = (void **)(a1 + 19);
  v2 = (void **)(a1 + 28);
  *a1 = &off_2AFEFA0;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      v2[1] = nullptr;
      qfree(v4);
    }
    v2 -= 3;
  }
  while ( v2 != v1 );
  v5 = (void *)a1[19];
  if ( v5 )
  {
    a1[20] = 0;
    qfree(v5);
  }
  *a1 = &off_2AFD020;
  merge_handler_dtr((int)a1);
  v6 = (void *)a1[12];
  if ( v6 )
  {
    a1[13] = 0;
    qfree(v6);
  }
  v7 = (void *)a1[2];
  if ( v7 )
  {
    a1[3] = 0;
    qfree(v7);
  }
}

