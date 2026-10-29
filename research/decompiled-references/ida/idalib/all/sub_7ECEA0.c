void __fastcall sub_7ECEA0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  v2 = (void *)a1[24];
  if ( v2 )
  {
    a1[25] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[20];
  if ( v3 )
  {
    a1[21] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[13];
  if ( v4 )
  {
    a1[14] = 0;
    qfree(v4);
  }
  sub_7D48C0((__int64)(a1 + 4));
  v5 = (void *)a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    qfree(v5);
  }
}
