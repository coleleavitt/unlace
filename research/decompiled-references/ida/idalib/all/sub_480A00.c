void __fastcall sub_480A00(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *a1 = &off_2B2B5D8;
  v2 = (void *)a1[16];
  if ( v2 )
  {
    a1[17] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[11];
  if ( v3 )
  {
    a1[12] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[6];
  if ( v4 )
  {
    a1[7] = 0;
    qfree(v4);
  }
  operator delete(a1, 0xB0u);
}
