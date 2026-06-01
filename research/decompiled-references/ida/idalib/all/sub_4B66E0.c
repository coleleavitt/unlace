void __fastcall sub_4B66E0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  v2 = (void *)a1[5];
  if ( v2 )
  {
    qfree(v2);
    a1[5] = 0;
  }
  v3 = (void *)a1[6];
  if ( v3 )
  {
    a1[7] = 0;
    qfree(v3);
    a1[6] = 0;
    a1[8] = 0;
  }
  v4 = (void *)a1[9];
  if ( v4 )
  {
    a1[10] = 0;
    qfree(v4);
  }
  v5 = (void *)a1[6];
  if ( v5 )
  {
    a1[7] = 0;
    qfree(v5);
  }
  v6 = (void *)a1[5];
  if ( v6 )
    qfree(v6);
}
