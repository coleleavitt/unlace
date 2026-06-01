void __fastcall sub_5C4A50(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2B2FBE0;
  v2 = (void *)a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x40u);
}
