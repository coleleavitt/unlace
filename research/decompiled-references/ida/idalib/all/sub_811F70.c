void __fastcall sub_811F70(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_2BFC068;
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
  *a1 = &off_2BFC000;
  sub_7C16D0((__int64)a1);
  operator delete(a1, 0xA8u);
}
