void __fastcall sub_64DDB0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
  }
}
