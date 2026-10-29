void __fastcall sub_5E0F40(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi

  *a1 = &off_2B07160;
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
  v4 = (void *)a1[11];
  if ( v4 )
  {
    a1[12] = 0;
    qfree(v4);
  }
  v5 = (void *)a1[8];
  if ( v5 )
  {
    a1[9] = 0;
    qfree(v5);
  }
  v6 = (void *)a1[5];
  if ( v6 )
  {
    a1[6] = 0;
    qfree(v6);
  }
  v7 = (void *)a1[1];
  if ( v7 )
  {
    a1[2] = 0;
    qfree(v7);
  }
  operator delete(a1, 0xB0u);
}

