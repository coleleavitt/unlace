void __fastcall sub_417D80(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2AFE428;
  v2 = (void *)a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x38u);
}

