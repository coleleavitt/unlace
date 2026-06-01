void __fastcall sub_6066D0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = off_2B08A18;
  v2 = (void *)a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[3];
  if ( v3 )
  {
    a1[4] = 0;
    qfree(v3);
  }
  operator delete(a1, 0x68u);
}

