void __fastcall sub_7EECA0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_2BD2068;
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[15];
  if ( v3 )
  {
    a1[16] = 0;
    qfree(v3);
  }
  *a1 = &off_2BD2000;
  sub_79E280((__int64)a1);
}

