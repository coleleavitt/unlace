void __fastcall sub_3DBD80(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2B261B0;
  v2 = (void *)a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x58u);
}
