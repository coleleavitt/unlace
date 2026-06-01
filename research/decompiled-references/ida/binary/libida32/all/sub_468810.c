void __fastcall sub_468810(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2AFFC08;
  v2 = (void *)a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x48u);
}

