void __fastcall sub_60DAD0(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2B08F60;
  v2 = (void *)a1[10];
  if ( v2 )
  {
    a1[11] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x80u);
}

