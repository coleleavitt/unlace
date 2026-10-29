void __fastcall sub_463260(char *a1)
{
  char *v1; // r12
  char *v2; // rbp
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi

  v1 = a1 + 152;
  v2 = a1 + 224;
  *(_QWORD *)a1 = &off_2B28F60;
  do
  {
    v4 = *(void **)v2;
    if ( *(_QWORD *)v2 )
    {
      *((_QWORD *)v2 + 1) = 0;
      qfree(v4);
    }
    v2 -= 24;
  }
  while ( v2 != v1 );
  v5 = *((void **)a1 + 19);
  if ( v5 )
  {
    *((_QWORD *)a1 + 20) = 0;
    qfree(v5);
  }
  *(_QWORD *)a1 = &off_2B26160;
  merge_handler_dtr((int)a1);
  v6 = *((void **)a1 + 12);
  if ( v6 )
  {
    *((_QWORD *)a1 + 13) = 0;
    qfree(v6);
  }
  v7 = *((void **)a1 + 2);
  if ( v7 )
  {
    *((_QWORD *)a1 + 3) = 0;
    qfree(v7);
  }
  operator delete(a1, 0xF8u);
}
