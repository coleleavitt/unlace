void __fastcall sub_462870(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2B28DF0;
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x40u);
}
