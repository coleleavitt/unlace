void __fastcall sub_51FB30(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2B2DA98;
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x40u);
}
