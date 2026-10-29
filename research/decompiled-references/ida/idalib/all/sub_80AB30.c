void __fastcall sub_80AB30(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2B3C5F0;
  v2 = (void *)a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x28u);
}
