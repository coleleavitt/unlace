void __fastcall sub_8D6A40(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2B3E4E8;
  v2 = (void *)a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x30u);
}
