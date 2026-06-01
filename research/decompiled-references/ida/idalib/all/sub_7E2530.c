void __fastcall sub_7E2530(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  v2 = (void *)a1[13];
  if ( v2 )
  {
    a1[14] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[10];
  if ( v3 )
  {
    a1[11] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[7];
  if ( v4 )
  {
    a1[8] = 0;
    qfree(v4);
  }
  v5 = (void *)a1[4];
  if ( v5 )
  {
    a1[5] = 0;
    qfree(v5);
  }
  v6 = (void *)a1[1];
  if ( v6 )
  {
    a1[2] = 0;
    qfree(v6);
  }
}
