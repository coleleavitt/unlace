void __fastcall sub_5145D0(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2B2D8F8;
  v2 = (void *)a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x50u);
}
