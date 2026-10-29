void __fastcall sub_80B440(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *a1 = &off_2B3C470;
  v2 = (void *)a1[10];
  if ( v2 )
  {
    a1[11] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[3];
  if ( v4 )
  {
    a1[4] = 0;
    qfree(v4);
  }
  operator delete(a1, 0x68u);
}
