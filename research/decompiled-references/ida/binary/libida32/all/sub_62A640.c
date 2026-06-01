void __fastcall sub_62A640(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = off_2B0D200;
  v2 = (void *)a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x38u);
}

