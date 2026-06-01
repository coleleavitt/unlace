void __fastcall sub_63CC50(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2B36D70;
  v2 = (void *)a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x28u);
}
